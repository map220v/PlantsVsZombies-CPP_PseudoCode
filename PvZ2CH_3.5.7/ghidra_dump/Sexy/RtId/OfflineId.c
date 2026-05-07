// Class: Sexy::RtId::OfflineId


/* Sexy::RtId::OfflineId::OfflineId() */

void __thiscall Sexy::RtId::OfflineId::OfflineId(OfflineId *this)

{
  ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)this);
  RtName::RtName((RtName *)(this + 0x10));
  RtName::RtName((RtName *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::OfflineId::ToString(std::string&) */

void Sexy::RtId::OfflineId::ToString(string *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  string *in_x1;
  bool *in_x2;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = Uid::operator!((Uid *)param_1);
  if (((cVar4 != '\0') && (cVar4 = FUN_051c0750(*(undefined4 *)(param_1 + 0x10)), cVar4 != '\0')) &&
     (cVar4 = FUN_051c0750(*(undefined4 *)(param_1 + 0x20)), cVar4 != '\0')) {
    std::string::append(in_x1,"RTID(0)",(size_t)in_x2);
    goto LAB_051c1288;
  }
  FUN_05476574(aSStack_20);
  cVar4 = FUN_051c0744(*(undefined4 *)(param_1 + 0x20));
  if (cVar4 == '\0') {
    FUN_054772c4(aSStack_20,&DAT_05722e58);
    cVar4 = FUN_051c0750(*(undefined4 *)(param_1 + 0x10));
    if (cVar4 != '\0') goto LAB_051c1210;
LAB_051c12d8:
    uVar5 = RtName::GetString();
    WStringToString(aSStack_20,(wstring *)0x0,in_x2);
    uVar6 = FUN_0547429c(asStack_18);
    StrFormat("RTID(%s@%s)",asStack_10,uVar5,uVar6);
    FUN_05474278();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    uVar5 = RtName::GetString();
    FUN_054772c4(aSStack_20,uVar5);
    cVar4 = FUN_051c0750(*(undefined4 *)(param_1 + 0x10));
    if (cVar4 == '\0') goto LAB_051c12d8;
LAB_051c1210:
    uVar1 = *(uint *)param_1;
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 4);
    WStringToString(aSStack_20,(wstring *)0x0,(bool *)(ulong)uVar1);
    uVar5 = FUN_0547429c(asStack_18);
    StrFormat("RTID(%d.%d.%08x@%s)",asStack_10,(ulong)uVar3,(bool *)(ulong)uVar1,(ulong)uVar2,uVar5)
    ;
    FUN_05474278();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  FUN_05476c50(aSStack_20);
LAB_051c1288:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtId::OfflineId::OfflineId(Sexy::RtId::OfflineId const&) */

void __thiscall Sexy::RtId::OfflineId::OfflineId(OfflineId *this,OfflineId *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  RtName::RtName((RtName *)(this + 0x10),(RtName *)(param_1 + 0x10));
  RtName::RtName((RtName *)(this + 0x20),(RtName *)(param_1 + 0x20));
  return;
}


/* Sexy::RtId::OfflineId::~OfflineId() */

void __thiscall Sexy::RtId::OfflineId::~OfflineId(OfflineId *this)

{
  RtName::~RtName((RtName *)(this + 0x20));
  RtName::~RtName((RtName *)(this + 0x10));
  return;
}


/* Sexy::RtId::OfflineId::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId::OfflineId&&) */

OfflineId * __thiscall Sexy::RtId::OfflineId::operator=(OfflineId *this,OfflineId *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_051c2290(this + 0x10,param_1 + 0x10);
  FUN_051c2290(this + 0x20,param_1 + 0x20);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::OfflineId::StaticParse(std::string const&) */

void __thiscall Sexy::RtId::OfflineId::StaticParse(OfflineId *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  string *extraout_x1;
  OfflineId *in_x8;
  undefined1 auVar8 [16];
  int local_84;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  RtName aRStack_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = FUN_05474184();
  if (5 < uVar5) {
    FUN_05475ffc((string *)&local_38,this,0,5);
    bVar1 = std::operator!=((string *)&local_38,"RTID(");
    std::string::~string((string *)&local_38);
    if (!bVar1) {
      FUN_05475ffc(asStack_80,this,5,0xffffffffffffffff);
      lVar6 = FUN_05474184(asStack_80);
      pcVar7 = (char *)FUN_05474ee8(asStack_80,lVar6 + -1);
      if (*pcVar7 == ')') {
        lVar6 = FUN_05474184(asStack_80);
        FUN_05475ffc((string *)&local_38,asStack_80,0,lVar6 + -1);
        FUN_05474278(asStack_80,(string *)&local_38);
        std::string::~string((string *)&local_38);
        bVar1 = std::operator==(asStack_80,"0");
        if ((bVar1) || (lVar6 = FUN_054743b0(asStack_80,0x40,0), lVar6 == -1)) goto LAB_051c3d9c;
        FUN_05475ffc(asStack_78,asStack_80,0,lVar6);
        FUN_05475ffc(asStack_70,asStack_80,lVar6 + 1,0xffffffffffffffff);
        cVar2 = FUN_0547419c(asStack_78);
        if ((cVar2 == '\0') && (cVar2 = FUN_0547419c(asStack_70), cVar2 == '\0')) {
          RtName::RtName(aRStack_58);
          bVar1 = std::operator!=(asStack_70,".");
          if (bVar1) {
            StringToWString((Sexy *)asStack_70,extraout_x1);
            RtName::RtName((RtName *)&local_38,(wstring *)&local_48);
            FUN_051c2290(aRStack_58,(string *)&local_38);
            RtName::~RtName((RtName *)&local_38);
            FUN_05476c50((wstring *)&local_48);
          }
          auVar8 = FUN_05474ee8(asStack_78,0);
          if (*auVar8._0_8_ - 0x30 < 10) {
            lVar6 = FUN_054743b0(asStack_78,0x2e,0);
            if (lVar6 == -1) {
              *(undefined4 *)in_x8 = 0;
              *(undefined4 *)(in_x8 + 4) = 0;
              *(undefined4 *)(in_x8 + 8) = 0;
              *(undefined4 *)(in_x8 + 0x10) = 0;
              *(undefined8 *)(in_x8 + 0x18) = 0;
              *(undefined4 *)(in_x8 + 0x20) = 0;
              *(undefined8 *)(in_x8 + 0x28) = 0;
              OfflineId(in_x8);
            }
            else {
              FUN_05475ffc(asStack_68,asStack_78,0,lVar6);
              FUN_05475ffc((string *)&local_38,asStack_78,lVar6 + 1,0xffffffffffffffff);
              FUN_05474278(asStack_78,(string *)&local_38);
              std::string::~string((string *)&local_38);
              lVar6 = FUN_054743b0(asStack_78,0x2e,0);
              if (lVar6 == -1) {
                *(undefined4 *)in_x8 = 0;
                *(undefined4 *)(in_x8 + 4) = 0;
                *(undefined4 *)(in_x8 + 8) = 0;
                *(undefined4 *)(in_x8 + 0x10) = 0;
                *(undefined8 *)(in_x8 + 0x18) = 0;
                *(undefined4 *)(in_x8 + 0x20) = 0;
                *(undefined8 *)(in_x8 + 0x28) = 0;
                OfflineId(in_x8);
              }
              else {
                FUN_05475ffc(asStack_60,asStack_78,0,lVar6);
                FUN_05475ffc((string *)&local_38,asStack_78,lVar6 + 1,0xffffffffffffffff);
                FUN_05474278(asStack_78,(string *)&local_38);
                std::string::~string((string *)&local_38);
                pcVar7 = (char *)FUN_0547429c(asStack_60);
                wVar3 = atoi(pcVar7);
                pcVar7 = (char *)FUN_0547429c(asStack_68);
                wVar4 = atoi(pcVar7);
                local_84 = 0;
                std::string::string((string *)&local_48,"0x");
                std::operator+((string *)&local_48,asStack_78);
                FUN_05474278(asStack_78,(string *)&local_38);
                std::string::~string((string *)&local_38);
                std::string::~string((string *)&local_48);
                nop();
                StringToInt(asStack_78,&local_84);
                SortedKern::SortedKern((SortedKern *)&local_48,wVar3,wVar4,local_84);
                OfflineId((OfflineId *)&local_38);
                local_38 = local_48;
                local_30 = local_40;
                FUN_051c2290(auStack_18,aRStack_58);
                OfflineId(in_x8,(OfflineId *)&local_38);
                ~OfflineId((OfflineId *)&local_38);
                std::string::~string(asStack_60);
              }
              std::string::~string(asStack_68);
            }
          }
          else {
            StringToWString((Sexy *)asStack_78,auVar8._8_8_);
            RtName::RtName((RtName *)&local_48,(wstring *)&local_38);
            FUN_05476c50((string *)&local_38);
            OfflineId((OfflineId *)&local_38);
            FUN_051c2290(auStack_28,(RtName *)&local_48);
            FUN_051c2290(auStack_18,aRStack_58);
            OfflineId(in_x8,(OfflineId *)&local_38);
            ~OfflineId((OfflineId *)&local_38);
            RtName::~RtName((RtName *)&local_48);
          }
          RtName::~RtName(aRStack_58);
        }
        else {
          *(undefined4 *)in_x8 = 0;
          *(undefined4 *)(in_x8 + 4) = 0;
          *(undefined4 *)(in_x8 + 8) = 0;
          *(undefined4 *)(in_x8 + 0x10) = 0;
          *(undefined8 *)(in_x8 + 0x18) = 0;
          *(undefined4 *)(in_x8 + 0x20) = 0;
          *(undefined8 *)(in_x8 + 0x28) = 0;
          OfflineId(in_x8);
        }
        std::string::~string(asStack_70);
        std::string::~string(asStack_78);
      }
      else {
LAB_051c3d9c:
        *(undefined4 *)in_x8 = 0;
        *(undefined4 *)(in_x8 + 4) = 0;
        *(undefined4 *)(in_x8 + 8) = 0;
        *(undefined4 *)(in_x8 + 0x10) = 0;
        *(undefined8 *)(in_x8 + 0x18) = 0;
        *(undefined4 *)(in_x8 + 0x20) = 0;
        *(undefined8 *)(in_x8 + 0x28) = 0;
        OfflineId(in_x8);
      }
      std::string::~string(asStack_80);
      goto LAB_051c3df0;
    }
  }
  *(undefined4 *)in_x8 = 0;
  *(undefined4 *)(in_x8 + 4) = 0;
  *(undefined4 *)(in_x8 + 8) = 0;
  *(undefined4 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined4 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  OfflineId(in_x8);
LAB_051c3df0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::OfflineId::Serialize(Sexy::RtSerialBuffer*) */

void __thiscall Sexy::RtId::OfflineId::Serialize(OfflineId *this,RtSerialBuffer *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  RtName aRStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_051c0760(param_1[0x2d]);
  if (cVar2 != '\0') {
    cVar2 = RtSerialBuffer::ReadInt8Fixed(param_1);
    switch((int)cVar2) {
    case 0:
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      OfflineId((OfflineId *)&local_38);
      operator=(this,(OfflineId *)&local_38);
      ~OfflineId((OfflineId *)&local_38);
      break;
    case 1:
    case 2:
      RtName::RtName(aRStack_48);
      if (cVar2 == 2) {
        FUN_05476574((wstring *)&local_58);
        RtSerialBuffer::ReadUTF8String(param_1,(wstring *)&local_58);
        RtName::RtName((RtName *)&local_38,(wstring *)&local_58);
        FUN_051c2290(aRStack_48,(RtName *)&local_38);
        RtName::~RtName((RtName *)&local_38);
        FUN_05476c50((wstring *)&local_58);
      }
      wVar4 = RtSerialBuffer::ReadInt32VarU(param_1);
      wVar5 = RtSerialBuffer::ReadInt32VarU(param_1);
      iVar6 = RtSerialBuffer::ReadInt32Fixed(param_1);
      SortedKern::SortedKern((SortedKern *)&local_58,wVar4,wVar5,iVar6);
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      OfflineId((OfflineId *)&local_38);
      operator=(this,(OfflineId *)&local_38);
      ~OfflineId((OfflineId *)&local_38);
      *(undefined8 *)this = local_58;
      *(undefined4 *)(this + 8) = local_50;
      FUN_051c2290(this + 0x20,aRStack_48);
      RtName::~RtName(aRStack_48);
      break;
    case 3:
      FUN_05476574(awStack_68);
      FUN_05476574(awStack_60);
      RtSerialBuffer::ReadUTF8String(param_1,awStack_68);
      RtSerialBuffer::ReadUTF8String(param_1,awStack_60);
      bVar3 = std::operator==(awStack_68,L".");
      if (bVar3) {
        FUN_05476f98(awStack_68);
      }
      RtName::RtName((RtName *)&local_58,awStack_68);
      RtName::RtName(aRStack_48,awStack_60);
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      OfflineId((OfflineId *)&local_38);
      operator=(this,(OfflineId *)&local_38);
      ~OfflineId((OfflineId *)&local_38);
      FUN_051c2290(this + 0x10,aRStack_48);
      FUN_051c2290(this + 0x20,(RtName *)&local_58);
      RtName::~RtName(aRStack_48);
      RtName::~RtName((RtName *)&local_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
    goto switchD_051c4378_default;
  }
  cVar2 = Uid::operator!((Uid *)this);
  if (cVar2 == '\0') {
    cVar2 = FUN_051c0750(*(undefined4 *)(this + 0x10));
    if (cVar2 == '\0') {
LAB_051c42e8:
      FUN_05476574((wstring *)&local_38);
      cVar2 = FUN_051c0744(*(undefined4 *)(this + 0x20));
      if (cVar2 == '\0') {
        FUN_054772c4((wstring *)&local_38,&DAT_05722e58);
      }
      else {
        uVar7 = RtName::GetString();
        FUN_054772c4((wstring *)&local_38,uVar7);
      }
      RtSerialBuffer::WriteInt8Fixed(param_1,3);
      RtSerialBuffer::WriteUTF8String(param_1,(wstring *)&local_38);
      pwVar8 = (wchar_t *)RtName::GetString();
      RtSerialBuffer::WriteUTF8String(param_1,pwVar8);
      FUN_05476c50((wstring *)&local_38);
      goto switchD_051c4378_default;
    }
    cVar2 = FUN_051c0750(*(undefined4 *)(this + 0x20));
    if (cVar2 == '\0') goto LAB_051c4574;
    RtSerialBuffer::WriteInt8Fixed(param_1,1);
  }
  else {
    cVar2 = FUN_051c0750(*(undefined4 *)(this + 0x10));
    if (cVar2 == '\0') goto LAB_051c42e8;
    cVar2 = FUN_051c0750(*(undefined4 *)(this + 0x20));
    if (cVar2 != '\0') {
      RtSerialBuffer::WriteInt8Fixed(param_1,0);
      goto switchD_051c4378_default;
    }
LAB_051c4574:
    RtSerialBuffer::WriteInt8Fixed(param_1,2);
    pwVar8 = (wchar_t *)RtName::GetString();
    RtSerialBuffer::WriteUTF8String(param_1,pwVar8);
  }
  iVar6 = *(int *)(this + 4);
  iVar1 = *(int *)(this + 8);
  RtSerialBuffer::WriteInt32VarU(param_1,*(int *)this);
  RtSerialBuffer::WriteInt32VarU(param_1,iVar6);
  RtSerialBuffer::WriteInt32Fixed(param_1,iVar1);
switchD_051c4378_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::RtId::OfflineId::operator bool() const */

bool __thiscall Sexy::RtId::OfflineId::operator_cast_to_bool(OfflineId *this)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = Uid::operator_cast_to_bool((Uid *)this);
  if (!(bool)cVar1) {
    cVar1 = FUN_051c691c(*(undefined4 *)(this + 0x10));
    if (cVar1 == '\0') {
      uVar2 = FUN_051c691c(*(undefined4 *)(this + 0x20));
      return (bool)uVar2;
    }
  }
  return (bool)cVar1;
}

