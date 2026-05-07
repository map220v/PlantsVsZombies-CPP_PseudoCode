// Class: Sexy::BaseAntiHackDriver


/* Sexy::BaseAntiHackDriver::~BaseAntiHackDriver() */

void __thiscall Sexy::BaseAntiHackDriver::~BaseAntiHackDriver(BaseAntiHackDriver *this)

{
  *(undefined ***)this = &PTR__BaseAntiHackDriver_06a371e0;
  std::string::~string((string *)(this + 8));
  return;
}


/* Sexy::BaseAntiHackDriver::~BaseAntiHackDriver() */

void __thiscall Sexy::BaseAntiHackDriver::~BaseAntiHackDriver(BaseAntiHackDriver *this)

{
  ~BaseAntiHackDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::BaseAntiHackDriver::BaseAntiHackDriver() */

void __thiscall Sexy::BaseAntiHackDriver::BaseAntiHackDriver(BaseAntiHackDriver *this)

{
  size_t in_x2;
  
  IAntiHackDriver::IAntiHackDriver((IAntiHackDriver *)this);
  *(undefined ***)this = &PTR__BaseAntiHackDriver_06a371e0;
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)(this + 8),"Zomb1esd0ntlik3Passw0rd5",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseAntiHackDriver::GenerateKeyIV(char const*, std::string&, std::string&) */

void __thiscall
Sexy::BaseAntiHackDriver::GenerateKeyIV
          (BaseAntiHackDriver *this,char *param_1,string *param_2,string *param_3)

{
  size_t sVar1;
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MD5::MD5(aMStack_78);
  sVar1 = strlen(param_1);
  MD5::update(aMStack_78,param_1,sVar1);
  MD5::toString();
  FUN_05474278(param_2,asStack_80);
  std::string::~string(asStack_80);
  FUN_05475ffc(asStack_80,param_2,4,0x1c);
  FUN_05474278(param_3,asStack_80);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseAntiHackDriver::EncodeBuffer(Sexy::Buffer&, Sexy::Buffer&) */

void __thiscall
Sexy::BaseAntiHackDriver::EncodeBuffer(BaseAntiHackDriver *this,Buffer *param_1,Buffer *param_2)

{
  int iVar1;
  int iVar2;
  char *__dest;
  void *__src;
  undefined1 *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  string asStack_4a8 [8];
  string asStack_4a0 [8];
  CRijndael aCStack_498 [1144];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Buffer::GetDataLen(param_1);
  local_10 = 0;
  local_20 = 0;
  uStack_18 = 0;
  iVar7 = iVar1 / 0x18;
  if (iVar1 != iVar7 * 0x18) {
    iVar7 = iVar7 + 1;
  }
  iVar7 = iVar7 * 0x18;
  __dest = malloc((long)iVar7);
  __src = (void *)Buffer::GetDataPtr(param_1);
  iVar1 = Buffer::GetDataLen(param_1);
  memcpy(__dest,__src,(long)iVar1);
  iVar1 = Buffer::GetDataLen(param_1);
  iVar2 = Buffer::GetDataLen(param_1);
  memcpy(__dest + iVar1,&local_20,(long)(iVar7 - iVar2));
  Set8BytesTo0(asStack_4a8);
  Set8BytesTo0(asStack_4a0);
  GenerateKeyIV(this,pkey,asStack_4a8,asStack_4a0);
  Buffer::Clear(param_2);
  Buffer::Resize(param_2,iVar7 + 2);
  puVar3 = (undefined1 *)Buffer::GetDataPtr(param_2);
  *puVar3 = 0x10;
  lVar4 = Buffer::GetDataPtr(param_2);
  *(undefined1 *)(lVar4 + 1) = 0;
  CRijndael::CRijndael(aCStack_498);
  pcVar5 = (char *)FUN_0547429c(asStack_4a8);
  pcVar6 = (char *)FUN_0547429c(asStack_4a0);
  CRijndael::MakeKey(aCStack_498,pcVar5,pcVar6,0x20,0x18);
  lVar4 = Buffer::GetDataPtr(param_2);
  CRijndael::Encrypt(aCStack_498,__dest,(char *)(lVar4 + 2),iVar7,1);
  free(__dest);
  nop();
  std::string::~string(asStack_4a0);
  std::string::~string(asStack_4a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BaseAntiHackDriver::DecodeBuffer(Sexy::Buffer&, Sexy::Buffer&) */

void __thiscall
Sexy::BaseAntiHackDriver::DecodeBuffer(BaseAntiHackDriver *this,Buffer *param_1,Buffer *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  string asStack_490 [8];
  string asStack_488 [8];
  CRijndael aCStack_480 [1144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pbVar4 = (byte *)Buffer::GetDataPtr(param_1);
  bVar1 = *pbVar4;
  Buffer::GetDataPtr(param_1);
  if ((int)(uint)bVar1 >> 4 == 1) {
    Set8BytesTo0(asStack_490);
    Set8BytesTo0(asStack_488);
    GenerateKeyIV(this,pkey,asStack_490,asStack_488);
    CRijndael::CRijndael(aCStack_480);
    pcVar5 = (char *)FUN_0547429c(asStack_490);
    pcVar6 = (char *)FUN_0547429c(asStack_488);
    CRijndael::MakeKey(aCStack_480,pcVar5,pcVar6,0x20,0x18);
    iVar3 = Buffer::GetDataLen(param_1);
    uVar2 = iVar3 - 2;
    Buffer::Clear(param_2);
    Buffer::Resize(param_2,uVar2);
    iVar3 = (int)uVar2 / 0x18;
    if (uVar2 != iVar3 * 0x18) {
      iVar3 = iVar3 + 1;
    }
    lVar7 = Buffer::GetDataPtr(param_1);
    pcVar5 = (char *)Buffer::GetDataPtr(param_2);
    CRijndael::Decrypt(aCStack_480,(char *)(lVar7 + 2),pcVar5,iVar3 * 0x18,1);
    nop();
    std::string::~string(asStack_488);
    std::string::~string(asStack_490);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

