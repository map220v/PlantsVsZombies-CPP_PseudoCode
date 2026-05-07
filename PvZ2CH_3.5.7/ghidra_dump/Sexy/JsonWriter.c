// Class: Sexy::JsonWriter


/* Sexy::JsonWriter::SetOutputFormat(Sexy::JsonWriter::Format) */

void __thiscall Sexy::JsonWriter::SetOutputFormat(JsonWriter *this,int param_2,size_t param_3)

{
  if (param_2 != 0) {
    std::string::append((string *)this," : ",param_3);
    std::string::append((string *)(this + 8),"\n",param_3);
    std::string::append((string *)(this + 0x10),"   ",param_3);
    return;
  }
  std::string::append((string *)this,":",param_3);
  std::string::append((string *)(this + 8),"",param_3);
  std::string::append((string *)(this + 0x10),"",param_3);
  return;
}


/* Sexy::JsonWriter::JsonWriter() */

void __thiscall Sexy::JsonWriter::JsonWriter(JsonWriter *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  SetOutputFormat(this,0);
  return;
}


/* Sexy::JsonWriter::JsonWriter(Sexy::JsonWriter::Format) */

void __thiscall Sexy::JsonWriter::JsonWriter(JsonWriter *this,undefined8 param_2)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  SetOutputFormat(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonWriter::WriteString(std::ostream&, char const*, bool) const */

void __thiscall
Sexy::JsonWriter::WriteString(JsonWriter *this,ostream *param_1,char *param_2,bool param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong extraout_x0;
  ulong extraout_x0_00;
  uint uVar5;
  wchar_t local_14;
  byte *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  sVar3 = strlen(param_2);
  local_10 = (byte *)param_2;
  if (param_3) {
    FUN_05460370(param_1,0x22);
  }
  while (uVar5 = (uint)*local_10, *local_10 != 0) {
    while (uVar5 >> 7 == 0) {
      if (((uVar5 == 0x5c) || (uVar5 == 0x22)) || (iVar1 = iscntrl(uVar5), iVar1 != 0)) {
        if (uVar5 == 0xc) {
          FUN_054603b8(param_1,&DAT_056a1d80);
        }
        else if (uVar5 < 0xd) {
          if (uVar5 == 9) {
            FUN_054603b8(param_1,&DAT_056a1d68);
          }
          else if (uVar5 == 10) {
            FUN_054603b8(param_1,&DAT_056a1d70);
          }
          else if (uVar5 == 8) {
            FUN_054603b8(param_1,&DAT_056a1d60);
          }
          else {
LAB_051592a0:
            uVar4 = FUN_054603b8(param_1,&DAT_056e2820);
            uVar2 = FUN_051591e8(0x30);
            uVar4 = FUN_0545fe44(uVar4,uVar2);
            nop();
            uVar4 = FUN_0545ff04(uVar4,extraout_x0 & 0xffffffff);
            uVar4 = FUN_0545f9fc(uVar4,std::hex);
            uVar4 = FUN_05460370(uVar4,*local_10);
            FUN_0545f9fc(uVar4,std::dec);
          }
        }
        else if (uVar5 == 0x22) {
          FUN_054603b8(param_1,&DAT_056a1e18);
        }
        else if (uVar5 == 0x5c) {
          FUN_054603b8(param_1,&DAT_056a1e28);
        }
        else {
          if (uVar5 != 0xd) goto LAB_051592a0;
          FUN_054603b8(param_1,&DAT_056a1340);
        }
      }
      else {
        FUN_05460370(param_1,uVar5);
      }
      local_10 = local_10 + 1;
      uVar5 = (uint)*local_10;
      if (uVar5 == 0) goto LAB_05159314;
    }
    GetNextUTF8CharFromStream
              ((char **)&local_10,((int)param_2 - (int)local_10) + (int)sVar3,&local_14);
    uVar4 = FUN_054603b8(param_1,&DAT_056e2820);
    uVar2 = FUN_051591e8(0x30);
    uVar4 = FUN_0545fe44(uVar4,uVar2);
    nop();
    uVar4 = FUN_0545ff04(uVar4,extraout_x0_00 & 0xffffffff);
    uVar4 = FUN_0545f9fc(uVar4,std::hex);
    uVar4 = FUN_054608dc(uVar4,local_14);
    FUN_0545f9fc(uVar4,std::dec);
  }
LAB_05159314:
  if (param_3) {
    FUN_05460370(param_1,0x22);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonWriter::Write(std::ostream&, Sexy::StructuredData::Value const*, std::string, bool,
   bool) const */

void __thiscall
Sexy::JsonWriter::Write
          (JsonWriter *this,ostream *param_1,Value *param_2,undefined8 param_4,char param_5,
          bool param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Value *pVVar6;
  char *pcVar7;
  uint uVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0545ec84(param_1,param_4);
  if ((param_5 != '\0') && (cVar1 = FUN_051590a4(*(undefined8 *)(param_2 + 8)), cVar1 != '\0')) {
    uVar4 = FUN_05460370(param_1,0x22);
    uVar5 = FUN_05159098(*(undefined8 *)(param_2 + 8));
    uVar4 = FUN_054603b8(uVar4,uVar5);
    uVar4 = FUN_05460370(uVar4,0x22);
    FUN_0545ec84(uVar4,this);
  }
  uVar2 = FUN_0515909c(*(undefined4 *)param_2);
  switch(uVar2) {
  case 0:
    FUN_054603b8(param_1,&DAT_0562c0f8);
    break;
  case 1:
    pcVar7 = (char *)FUN_051590c0(*(undefined8 *)(param_2 + 0x10));
    WriteString(this,param_1,pcVar7,param_6);
    break;
  case 2:
    StructuredData::Value::GetNumber(param_2);
    thunk_FUN_05460d54(param_1);
    break;
  case 3:
    uVar4 = FUN_051590b8(*(undefined8 *)(param_2 + 0x10));
    thunk_FUN_05460424(param_1,uVar4);
    break;
  case 4:
    cVar1 = FUN_051590bc(param_2[0x10]);
    if (cVar1 == '\0') {
      pcVar7 = "false";
    }
    else {
      pcVar7 = "true";
    }
    FUN_054603b8(param_1,pcVar7);
    break;
  case 5:
    uVar8 = 0;
    pVVar6 = (Value *)StructuredData::Value::FirstChild(param_2);
    uVar4 = FUN_054603b8(param_1,&DAT_05593310);
    FUN_0545ec84(uVar4,this + 8);
    while (uVar3 = FUN_051590a0(*(undefined4 *)(param_2 + 0x10)), uVar8 < uVar3) {
      uVar8 = uVar8 + 1;
      FUN_031dcc6c(asStack_10,param_4,this + 0x10);
      Write(this,param_1,pVVar6,asStack_10,1,1);
      std::string::~string(asStack_10);
      uVar3 = FUN_051590a0(*(undefined4 *)(param_2 + 0x10));
      if (uVar8 < uVar3) {
        FUN_054603b8(param_1,&DAT_05593348);
      }
      FUN_0545ec84(param_1,this + 8);
      pVVar6 = (Value *)StructuredData::Value::Next(pVVar6);
    }
    uVar4 = FUN_0545ec84(param_1,param_4);
    FUN_054603b8(uVar4,&DAT_05593340);
    break;
  case 6:
    uVar8 = 0;
    pVVar6 = (Value *)StructuredData::Value::FirstChild(param_2);
    uVar4 = FUN_054603b8(param_1,&DAT_05593308);
    FUN_0545ec84(uVar4,this + 8);
    while (uVar3 = FUN_051590a0(*(undefined4 *)(param_2 + 0x10)), uVar8 < uVar3) {
      uVar8 = uVar8 + 1;
      FUN_031dcc6c(asStack_10,param_4,this + 0x10);
      Write(this,param_1,pVVar6,asStack_10,1,1);
      std::string::~string(asStack_10);
      uVar3 = FUN_051590a0(*(undefined4 *)(param_2 + 0x10));
      if (uVar8 < uVar3) {
        FUN_054603b8(param_1,&DAT_05593348);
      }
      FUN_0545ec84(param_1,this + 8);
      pVVar6 = (Value *)StructuredData::Value::Next(pVVar6);
    }
    uVar4 = FUN_0545ec84(param_1,param_4);
    FUN_054603b8(uVar4,&DAT_05593350);
    break;
  case 7:
    uVar4 = FUN_051590c4(*(undefined8 *)(param_2 + 0x10));
    FUN_054603b8(param_1,uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonWriter::Write(std::ostream&, Sexy::StructuredData::Value const*, bool) const */

void __thiscall
Sexy::JsonWriter::Write(JsonWriter *this,ostream *param_1,Value *param_2,bool param_3)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  Write(this,param_1,param_2,asStack_10,0,param_3);
  std::string::~string(asStack_10);
  nop();
  FUN_0545ec84(param_1,this + 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::JsonWriter::Write(Sexy::Buffer*, Sexy::StructuredData::Value const*) const */

void __thiscall Sexy::JsonWriter::Write(JsonWriter *this,Buffer *param_1,Value *param_2)

{
  int iVar1;
  uchar *puVar2;
  string asStack_170 [8];
  ostream aoStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05462144(aoStack_168,0x10);
  Write(this,aoStack_168,param_2,true);
  FUN_054622ac(asStack_170,aoStack_168);
  puVar2 = (uchar *)FUN_05474ee8(asStack_170,0);
  iVar1 = FUN_05474184(asStack_170);
  Buffer::SetData(param_1,puVar2,iVar1);
  std::string::~string(asStack_170);
  FUN_054614ac(aoStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

