// Class: Sexy::RtSerial


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::RtonToJson(unsigned char const*, unsigned int, std::string&, bool) */

void Sexy::RtSerial::RtonToJson(uchar *param_1,uint param_2,string *param_3,bool param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s;
  bool bVar6;
  string asStack_b8 [8];
  string asStack_b0 [8];
  RtSerialBuffer aRStack_a8 [45];
  undefined1 auStack_7b [3];
  RtSerialBuffer *local_78;
  vector<bool,std::allocator<bool>> avStack_70 [104];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::append(param_3,"",___stack_chk_guard);
  bVar6 = param_1 == (uchar *)0x0 || param_2 == 0;
  if (param_1 == (uchar *)0x0 || param_2 == 0) {
    bVar6 = false;
  }
  else {
    RtSerialBuffer::RtSerialBuffer(aRStack_a8,param_1,param_2);
    FUN_051c7378(auStack_7b);
    iVar4 = RtSerialBuffer::ReadInt32Fixed(aRStack_a8);
    if ((iVar4 == 0x4e4f5452) && (sVar2 = RtSerialBuffer::ReadInt16Fixed(aRStack_a8), sVar2 == 1)) {
      uVar3 = RtSerialBuffer::ReadInt16Fixed(aRStack_a8);
      if ((uVar3 < 2) &&
         ((uVar3 != 1 || (cVar1 = RtSerialBuffer::ReadInt8Fixed(aRStack_a8), cVar1 == -0x48)))) {
        FUN_05475ad8(param_3,&DAT_05593310);
        FUN_051cad34(&local_78,param_4);
        local_78 = aRStack_a8;
        std::vector<bool,std::allocator<bool>>::push_back(avStack_70,false);
        FUN_051ceb64(&local_78,param_3,4);
        std::vector<bool,std::allocator<bool>>::pop_back(avStack_70);
        iVar4 = RtSerialBuffer::ReadInt32Fixed(aRStack_a8);
        if (iVar4 == 0x454e4f44) {
          __s = "";
          if (param_4) {
            __s = "\r\n";
          }
          bVar6 = true;
          std::string::string(asStack_b8,__s);
          nop();
          uVar5 = FUN_0547429c(asStack_b8);
          StrFormat("%s}%s",asStack_b0,uVar5,uVar5);
          thunk_FUN_054757c0(param_3,asStack_b0);
          std::string::~string(asStack_b0);
          std::string::~string(asStack_b8);
        }
        FUN_051cb9d4(&local_78);
      }
    }
    RtSerialBuffer::~RtSerialBuffer(aRStack_a8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::JsonToRton(char const*, Sexy::RtSerialRtonWriter&, std::string&) */

void Sexy::RtSerial::JsonToRton(char *param_1,RtSerialRtonWriter *param_2,string *param_3)

{
  undefined4 uVar1;
  int iVar2;
  AutoCrit aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoCrit::AutoCrit(aAStack_10,(CritSect *)&DAT_06bbdbe0);
  if (((DAT_06bbdbd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06bbdbd8), iVar2 != 0)) {
    JsonParser::JsonParser((JsonParser *)&DAT_06bbdc18);
    __cxa_guard_release(&DAT_06bbdbd8);
    __cxa_atexit(JsonParser::~JsonParser,&DAT_06bbdc18,&DAT_06a88000);
  }
  uVar1 = JsonParser::ConvertToRton((JsonParser *)&DAT_06bbdc18,param_1,param_2,param_3);
  AutoCrit::~AutoCrit(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

