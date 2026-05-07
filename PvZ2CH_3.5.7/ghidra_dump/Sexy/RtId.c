// Class: Sexy::RtId


/* Sexy::RtId::StaticIsNamed(unsigned long) */

ulong Sexy::RtId::StaticIsNamed(ulong param_1)

{
  return param_1 >> 0x3f;
}


/* Sexy::RtId::StaticGetPackageNameIndex(unsigned long) */

ulong Sexy::RtId::StaticGetPackageNameIndex(ulong param_1)

{
  return param_1 >> 0x1f & 0x7fffffff;
}


/* Sexy::RtId::StaticGetAliasNameIndex(unsigned long) */

uint Sexy::RtId::StaticGetAliasNameIndex(ulong param_1)

{
  return (uint)param_1 & 0x7fffffff;
}


/* Sexy::RtId::IsNamed() const */

ulong __thiscall Sexy::RtId::IsNamed(RtId *this)

{
  return *(ulong *)this >> 0x3f;
}


/* Sexy::RtId::GetTableIndex() const */

ulong __thiscall Sexy::RtId::GetTableIndex(RtId *this)

{
  return *(ulong *)this >> 0x31 & 0x3fff;
}


/* Sexy::RtId::GetPackageNameIndex() const */

ulong __thiscall Sexy::RtId::GetPackageNameIndex(RtId *this)

{
  return *(ulong *)this >> 0x1f & 0x7fffffff;
}


/* Sexy::RtId::GetAliasNameIndex() const */

uint __thiscall Sexy::RtId::GetAliasNameIndex(RtId *this)

{
  return (uint)*(undefined8 *)this & 0x7fffffff;
}


/* Sexy::RtId::Set(unsigned long) */

void __thiscall Sexy::RtId::Set(RtId *this,ulong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  RtNameTable *pRVar7;
  
  bVar1 = IsNamed(this);
  bVar2 = StaticIsNamed(param_1);
  if ((bVar2 ^ 1) <= bVar1) {
    if (bVar2 == 0) {
      if (bVar1 != 0) {
        uVar4 = GetPackageNameIndex(this);
        uVar3 = GetAliasNameIndex(this);
        pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
        goto LAB_0318a55c;
      }
    }
    else if (bVar1 != 0) {
      uVar4 = GetPackageNameIndex(this);
      uVar3 = GetAliasNameIndex(this);
      uVar5 = StaticGetPackageNameIndex(param_1);
      uVar6 = StaticGetAliasNameIndex(param_1);
      pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
      RtNameTable::TableRetainString(pRVar7,uVar5);
      pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
      RtNameTable::TableRetainString(pRVar7,uVar6);
      pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
LAB_0318a55c:
      RtNameTable::TableReleaseString(pRVar7,uVar4);
      pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
      RtNameTable::TableReleaseString(pRVar7,uVar3);
      *(ulong *)this = param_1;
      return;
    }
    uVar3 = StaticGetPackageNameIndex(param_1);
    uVar4 = StaticGetAliasNameIndex(param_1);
    pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
    RtNameTable::TableRetainString(pRVar7,uVar3);
    pRVar7 = (RtNameTable *)RtNameTable::GetNameTable();
    RtNameTable::TableRetainString(pRVar7,uVar4);
  }
  *(ulong *)this = param_1;
  return;
}


/* Sexy::RtId::~RtId() */

void __thiscall Sexy::RtId::~RtId(RtId *this)

{
  Set(this,0);
  return;
}


/* Sexy::RtId::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtId const&) */

RtId * __thiscall Sexy::RtId::operator=(RtId *this,RtId *param_1)

{
  Set(this,*(ulong *)param_1);
  return this;
}


/* Sexy::RtId::IsSlotExtended() const */

ushort __thiscall Sexy::RtId::IsSlotExtended(RtId *this)

{
  return *(ushort *)(this + 6) & 1;
}


/* Sexy::RtId::GetSlotIndex() const */

uint __thiscall Sexy::RtId::GetSlotIndex(RtId *this)

{
  char cVar1;
  
  cVar1 = IsSlotExtended(this);
  if (cVar1 == '\0') {
    return (uint)*(ushort *)this;
  }
  return (uint)*(undefined8 *)this & 0xffffff;
}


/* Sexy::RtId::GetRevision() const */

ulong __thiscall Sexy::RtId::GetRevision(RtId *this)

{
  char cVar1;
  
  cVar1 = IsSlotExtended(this);
  if (cVar1 == '\0') {
    return *(ulong *)this >> 0x10;
  }
  return *(ulong *)this >> 0x18 & 0xffffff;
}


/* Sexy::RtId::RtId(Sexy::RtId const&) */

void __thiscall Sexy::RtId::RtId(RtId *this,RtId *param_1)

{
  *(undefined8 *)this = 0;
  Set(this,*(ulong *)param_1);
  return;
}


/* Sexy::RtId::RtId(unsigned long) */

void __thiscall Sexy::RtId::RtId(RtId *this,ulong param_1)

{
  *(undefined8 *)this = 0;
  Set(this,param_1);
  return;
}


/* Sexy::RtId::RtId(unsigned int, unsigned int, unsigned int) */

void __thiscall Sexy::RtId::RtId(RtId *this,uint param_1,uint param_2,uint param_3)

{
  *(undefined8 *)this = 0;
  if (0xffff < param_2) {
    Set(this,(ulong)param_3 << 0x18 | (ulong)param_2 | 0x1000000000000 | (ulong)param_1 << 0x31);
    return;
  }
  Set(this,(ulong)param_2 | (ulong)param_3 << 0x10 | (ulong)param_1 << 0x31);
  return;
}


/* Sexy::RtId::RtId(Sexy::RtName const&, Sexy::RtName const&) */

void __thiscall Sexy::RtId::RtId(RtId *this,RtName *param_1,RtName *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined4 *)param_2;
  *(undefined8 *)this = 0;
  uVar2 = FUN_035b90a8(uVar1);
  uVar3 = FUN_035b90a8(*(undefined4 *)param_1);
  Set(this,uVar3 & 0xffffffff | 0x8000000000000000 | (uVar2 & 0xffffffff) << 0x1f);
  return;
}


void __thiscall Sexy::RtId::~RtId(RtId *this)

{
  Set(this,0);
  return;
}


void __thiscall Sexy::RtId::~RtId(RtId *this)

{
  Set(this,0);
  return;
}


void __thiscall Sexy::RtId::~RtId(RtId *this)

{
  Set(this,0);
  return;
}


/* Sexy::RtId::StaticSetImplicitTableIndex(unsigned int) */

void Sexy::RtId::StaticSetImplicitTableIndex(uint param_1)

{
  sImplicitTableIndex = param_1;
  return;
}


/* Sexy::RtId::StaticGetImplicitTableIndex() */

undefined4 Sexy::RtId::StaticGetImplicitTableIndex(void)

{
  return sImplicitTableIndex;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::IsRtIdString(std::wstring const&) */

void Sexy::RtId::IsRtIdString(wstring *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_054765d0();
  if (5 < uVar2) {
    FUN_05477da4(awStack_10,param_1,0,5);
    bVar1 = std::operator!=(awStack_10,L"RTID(");
    FUN_05476c50(awStack_10);
    if (!bVar1) {
      lVar3 = FUN_054765d0(param_1);
      piVar4 = (int *)FUN_054765fc(param_1,lVar3 + -1);
      bVar1 = *piVar4 == 0x29;
      goto LAB_051c0ba8;
    }
  }
  bVar1 = false;
LAB_051c0ba8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::IsRtIdString(std::string const&) */

void Sexy::RtId::IsRtIdString(string *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_05474184();
  if (5 < uVar2) {
    FUN_05475ffc(asStack_10,param_1,0,5);
    bVar1 = std::operator!=(asStack_10,"RTID(");
    std::string::~string(asStack_10);
    if (!bVar1) {
      lVar3 = FUN_05474184(param_1);
      pcVar4 = (char *)FUN_054741b0(param_1,lVar3 + -1);
      bVar1 = *pcVar4 == ')';
      goto LAB_051c0c60;
    }
  }
  bVar1 = false;
LAB_051c0c60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::ToString(std::string&, bool) const */

void __thiscall Sexy::RtId::ToString(RtId *this,string *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  RtDb *this_00;
  RtDbTable *this_01;
  undefined *puVar6;
  RtId *pRVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  size_t __n;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  string asStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  long local_8;
  
  __n = (size_t)param_2;
  local_8 = ___stack_chk_guard;
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this);
  if (lVar3 == 0) {
    std::string::append(param_1,"RTID(0)",__n);
  }
  else {
    cVar1 = IsNamed(this);
    if (cVar1 == '\0') {
      if (param_2) {
        uVar2 = GetTableIndex(this);
        if (uVar2 == sImplicitTableIndex) {
          uVar4 = GetSlotIndex(this);
          uVar5 = GetRevision(this);
          StrFormat("RTID(:%d.%d)",&local_18,uVar4 & 0xffffffff,uVar5 & 0xffffffff);
        }
        else {
          uVar4 = GetSlotIndex(this);
          uVar5 = GetRevision(this);
          StrFormat("RTID(:%d.%d@%d)",&local_18,uVar4 & 0xffffffff,uVar5 & 0xffffffff,(ulong)uVar2);
        }
        FUN_05474278(param_1,(string *)&local_18);
        std::string::~string((string *)&local_18);
      }
      else {
        uVar2 = GetTableIndex(this);
        if (uVar2 == sImplicitTableIndex) {
          puVar6 = &DAT_05722e58;
        }
        else {
          this_00 = (RtDb *)RtDb::GetDb();
          uVar2 = GetTableIndex(this);
          this_01 = (RtDbTable *)RtDb::GetTable(this_00,uVar2);
          RtDbTable::GetCurrentPackageName(this_01);
          puVar6 = (undefined *)RtName::GetString();
        }
        pRVar7 = (RtId *)RtDb::GetDb();
        auVar10 = RtDb::GetUidForId(pRVar7);
        local_18 = auVar10._0_4_;
        local_10 = auVar10._8_4_;
        local_14 = auVar10._4_4_;
        FUN_05478178(awStack_38,puVar6,awStack_40);
        Sexy::ToString(awStack_38);
        uVar8 = FUN_0547429c(asStack_30);
        StrFormat("RTID(%d.%d.%08x@%s)",asStack_28,(ulong)auVar10._4_4_,auVar10._0_8_ & 0xffffffff,
                  auVar10._8_8_ & 0xffffffff,uVar8);
        FUN_05474278(param_1,asStack_28);
        std::string::~string(asStack_28);
        std::string::~string(asStack_30);
        FUN_05476c50(awStack_38);
        nop();
      }
    }
    else {
      uVar2 = GetPackageNameIndex(this);
      RtName::RtName((RtName *)asStack_28,uVar2);
      uVar2 = GetAliasNameIndex(this);
      RtName::RtName((RtName *)&local_18,uVar2);
      uVar8 = RtName::GetString();
      FUN_05478178(awStack_50,uVar8,auStack_60);
      Sexy::ToString(awStack_50);
      uVar8 = FUN_0547429c(asStack_48);
      uVar9 = RtName::GetString();
      FUN_05478178(awStack_40,uVar9,auStack_58);
      Sexy::ToString(awStack_40);
      uVar9 = FUN_0547429c((string *)awStack_38);
      StrFormat("RTID(%s@%s)",asStack_30,uVar8,uVar9);
      FUN_05474278(param_1,asStack_30);
      std::string::~string(asStack_30);
      std::string::~string((string *)awStack_38);
      FUN_05476c50(awStack_40);
      nop();
      std::string::~string(asStack_48);
      FUN_05476c50(awStack_50);
      nop();
      RtName::~RtName((RtName *)&local_18);
      RtName::~RtName((RtName *)asStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::ToString(std::wstring&, bool) const */

void __thiscall Sexy::RtId::ToString(RtId *this,wstring *param_1,bool param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  RtDb *this_00;
  RtDbTable *this_01;
  undefined *puVar6;
  RtId *pRVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  string asStack_30 [8];
  RtName aRStack_28 [16];
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this);
  if (lVar3 == 0) {
    FUN_054772c4(param_1,&DAT_0574e968);
  }
  else {
    cVar1 = IsNamed(this);
    if (cVar1 == '\0') {
      if (param_2) {
        uVar2 = GetTableIndex(this);
        if (uVar2 == sImplicitTableIndex) {
          uVar4 = GetSlotIndex(this);
          uVar5 = GetRevision(this);
          StrFormat(L"RTID(:%d.%d)",&local_18,uVar4 & 0xffffffff,uVar5 & 0xffffffff);
        }
        else {
          uVar4 = GetSlotIndex(this);
          uVar5 = GetRevision(this);
          StrFormat(L"RTID(:%d.%d@%d)",&local_18,uVar4 & 0xffffffff,uVar5 & 0xffffffff,(ulong)uVar2)
          ;
        }
        FUN_054766c8(param_1,&local_18);
        FUN_05476c50(&local_18);
      }
      else {
        uVar2 = GetTableIndex(this);
        if (uVar2 == sImplicitTableIndex) {
          puVar6 = &DAT_05722e58;
        }
        else {
          this_00 = (RtDb *)RtDb::GetDb();
          uVar2 = GetTableIndex(this);
          this_01 = (RtDbTable *)RtDb::GetTable(this_00,uVar2);
          RtDbTable::GetCurrentPackageName(this_01);
          puVar6 = (undefined *)RtName::GetString();
        }
        pRVar7 = (RtId *)RtDb::GetDb();
        auVar10 = RtDb::GetUidForId(pRVar7);
        local_18 = auVar10._0_4_;
        local_10 = auVar10._8_4_;
        local_14 = auVar10._4_4_;
        FUN_05478178(awStack_38,puVar6,auStack_40);
        Sexy::ToString(awStack_38);
        uVar8 = FUN_0547429c(asStack_30);
        StrFormat(L"RTID(%d.%d.%08x@%ls)",aRStack_28,(ulong)auVar10._4_4_,auVar10._0_8_ & 0xffffffff
                  ,auVar10._8_8_ & 0xffffffff,uVar8);
        FUN_054766c8(param_1,aRStack_28);
        FUN_05476c50(aRStack_28);
        std::string::~string(asStack_30);
        FUN_05476c50(awStack_38);
        nop();
      }
    }
    else {
      uVar2 = GetPackageNameIndex(this);
      RtName::RtName(aRStack_28,uVar2);
      uVar2 = GetAliasNameIndex(this);
      RtName::RtName((RtName *)&local_18,uVar2);
      uVar8 = RtName::GetString();
      uVar9 = RtName::GetString();
      StrFormat(L"RTID(%ls@%ls)",asStack_30,uVar8,uVar9);
      FUN_054766c8(param_1,asStack_30);
      FUN_05476c50(asStack_30);
      RtName::~RtName((RtName *)&local_18);
      RtName::~RtName(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::Serialize(Sexy::RtSerialBuffer*) */

void __thiscall Sexy::RtId::Serialize(RtId *this,RtSerialBuffer *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  wchar_t wVar4;
  wchar_t wVar5;
  int iVar6;
  long lVar7;
  RtId *pRVar8;
  RtDb *pRVar9;
  RtDbTable *pRVar10;
  wchar_t *pwVar11;
  Uid *pUVar12;
  RtName *pRVar13;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *p_Var14;
  undefined1 auVar15 [12];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  RtName aRStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_051c0760(param_1[0x2d]);
  if (cVar1 != '\0') {
    cVar1 = RtSerialBuffer::ReadInt8Fixed(param_1);
    switch((int)cVar1) {
    case 0:
      std::__exception_ptr::exception_ptr::exception_ptr
                ((exception_ptr *)&local_18,(_func_void *)0x51c3110);
      operator=(this,(RtId *)&local_18);
      ~RtId((RtId *)&local_18);
      break;
    case 1:
    case 2:
      FUN_05476574(awStack_30);
      if (cVar1 == 1) {
        pRVar9 = (RtDb *)RtDb::GetDb();
        pUVar12 = (Uid *)RtDb::GetTable(pRVar9,sImplicitTableIndex);
        FUN_054772c4(awStack_30,&DAT_05722e58);
      }
      else {
        RtSerialBuffer::ReadUTF8String(param_1,awStack_30);
        pRVar9 = (RtDb *)RtDb::GetDb();
        RtName::RtName((RtName *)&local_18,awStack_30);
        pUVar12 = (Uid *)RtDb::GetTable(pRVar9,(RtName *)&local_18);
        RtName::~RtName((RtName *)&local_18);
      }
      wVar4 = RtSerialBuffer::ReadInt32VarU(param_1);
      wVar5 = RtSerialBuffer::ReadInt32VarU(param_1);
      iVar6 = RtSerialBuffer::ReadInt32Fixed(param_1);
      SortedKern::SortedKern((SortedKern *)&local_18,wVar4,wVar5,iVar6);
      p_Var14 = extraout_x1;
      if ((pUVar12 == (Uid *)0x0) ||
         (cVar1 = Uid::operator!((Uid *)&local_18), p_Var14 = extraout_x1_00, cVar1 != '\0')) {
        std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)aRStack_28,p_Var14);
      }
      else {
        RtDbTable::GetIdForUid(pUVar12);
      }
      operator=(this,(RtId *)aRStack_28);
      ~RtId((RtId *)aRStack_28);
      FUN_05476c50(awStack_30);
      break;
    case 3:
      FUN_05476574(awStack_40);
      FUN_05476574(awStack_38);
      RtSerialBuffer::ReadUTF8String(param_1,awStack_40);
      RtSerialBuffer::ReadUTF8String(param_1,awStack_38);
      bVar2 = std::operator==(awStack_40,L".");
      if (bVar2) {
        pRVar9 = (RtDb *)RtDb::GetDb();
        pRVar10 = (RtDbTable *)RtDb::GetTable(pRVar9,sImplicitTableIndex);
        RtName::RtName((RtName *)&local_18,awStack_38);
        pRVar13 = (RtName *)RtDbTable::GetCurrentPackageName(pRVar10);
        RtId((RtId *)aRStack_28,(RtName *)&local_18,pRVar13);
        operator=(this,(RtId *)aRStack_28);
        ~RtId((RtId *)aRStack_28);
        RtName::~RtName((RtName *)&local_18);
      }
      else {
        RtName::RtName(aRStack_28,awStack_40);
        RtName::RtName((RtName *)&local_18,awStack_38);
        RtId((RtId *)awStack_30,(RtName *)&local_18,aRStack_28);
        operator=(this,(RtId *)awStack_30);
        ~RtId((RtId *)awStack_30);
        RtName::~RtName((RtName *)&local_18);
        RtName::~RtName(aRStack_28);
      }
      FUN_05476c50(awStack_38);
      FUN_05476c50(awStack_40);
    }
    goto switchD_051c310c_default;
  }
  lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)this);
  if (lVar7 == 0) {
LAB_051c32b4:
    RtSerialBuffer::WriteInt8Fixed(param_1,0);
    goto switchD_051c310c_default;
  }
  cVar1 = IsNamed(this);
  if (cVar1 != '\0') {
    uVar3 = GetPackageNameIndex(this);
    RtName::RtName(aRStack_28,uVar3);
    uVar3 = GetAliasNameIndex(this);
    RtName::RtName((RtName *)&local_18,uVar3);
    RtSerialBuffer::WriteInt8Fixed(param_1,3);
    pwVar11 = (wchar_t *)RtName::GetString();
    RtSerialBuffer::WriteUTF8String(param_1,pwVar11);
    pwVar11 = (wchar_t *)RtName::GetString();
    RtSerialBuffer::WriteUTF8String(param_1,pwVar11);
    RtName::~RtName((RtName *)&local_18);
    RtName::~RtName(aRStack_28);
    goto switchD_051c310c_default;
  }
  pRVar8 = (RtId *)RtDb::GetDb();
  lVar7 = RtDb::GetObjectForId(pRVar8);
  if (lVar7 == 0) goto LAB_051c32b4;
  uVar3 = GetTableIndex(this);
  if (uVar3 == sImplicitTableIndex) {
    pRVar9 = (RtDb *)RtDb::GetDb();
    pRVar10 = (RtDbTable *)RtDb::GetTable(pRVar9,uVar3);
    cVar1 = RtDbTable::HasCurrentPackage(pRVar10);
    if (cVar1 != '\0') goto LAB_051c2fd0;
    RtSerialBuffer::WriteInt8Fixed(param_1,1);
  }
  else {
LAB_051c2fd0:
    RtSerialBuffer::WriteInt8Fixed(param_1,2);
    pRVar9 = (RtDb *)RtDb::GetDb();
    pRVar10 = (RtDbTable *)RtDb::GetTable(pRVar9,uVar3);
    RtDbTable::GetCurrentPackageName(pRVar10);
    pwVar11 = (wchar_t *)RtName::GetString();
    RtSerialBuffer::WriteUTF8String(param_1,pwVar11);
  }
  pRVar8 = (RtId *)RtDb::GetDb();
  auVar15 = RtDb::GetUidForId(pRVar8);
  local_10 = auVar15._8_4_;
  local_18 = auVar15._0_4_;
  local_14 = auVar15._4_4_;
  RtSerialBuffer::WriteInt32VarU(param_1,local_18);
  RtSerialBuffer::WriteInt32VarU(param_1,local_14);
  RtSerialBuffer::WriteInt32Fixed(param_1,local_10);
switchD_051c310c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::StaticParse(std::string const&) */

void __thiscall Sexy::RtId::StaticParse(RtId *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  long lVar5;
  RtDb *pRVar6;
  Uid *pUVar7;
  byte *pbVar8;
  char *pcVar9;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *extraout_x1_01;
  _func_void *extraout_x1_02;
  string *extraout_x1_03;
  _func_void *extraout_x1_04;
  _func_void *extraout_x1_05;
  string *extraout_x1_06;
  _func_void *p_Var10;
  exception_ptr *in_x8;
  undefined1 auVar11 [16];
  int local_54;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar11 = FUN_05474184();
  p_Var10 = auVar11._8_8_;
  if (5 < auVar11._0_8_) {
    FUN_05475ffc(asStack_18,this,0,5);
    bVar1 = std::operator!=(asStack_18,"RTID(");
    std::string::~string(asStack_18);
    p_Var10 = extraout_x1;
    if (!bVar1) {
      FUN_05475ffc(asStack_50,this,5,0xffffffffffffffff);
      lVar5 = FUN_05474184(asStack_50);
      auVar11 = FUN_05474ee8(asStack_50,lVar5 + -1);
      p_Var10 = auVar11._8_8_;
      if (*auVar11._0_8_ == ')') {
        lVar5 = FUN_05474184(asStack_50);
        FUN_05475ffc(asStack_18,asStack_50,0,lVar5 + -1);
        FUN_05474278(asStack_50,asStack_18);
        std::string::~string(asStack_18);
        bVar1 = std::operator==(asStack_50,"0");
        p_Var10 = extraout_x1_00;
        if ((bVar1) ||
           (auVar11 = FUN_054743b0(asStack_50,0x40,0), p_Var10 = auVar11._8_8_,
           lVar5 = auVar11._0_8_, lVar5 == -1)) goto LAB_051c3450;
        FUN_05475ffc(asStack_48,asStack_50,0,lVar5);
        FUN_05475ffc(asStack_40,asStack_50,lVar5 + 1,0xffffffffffffffff);
        cVar2 = FUN_0547419c(asStack_48);
        p_Var10 = extraout_x1_01;
        if ((cVar2 == '\0') &&
           (cVar2 = FUN_0547419c(asStack_40), p_Var10 = extraout_x1_02, cVar2 == '\0')) {
          bVar1 = std::operator==(asStack_40,".");
          if (bVar1) {
            pRVar6 = (RtDb *)RtDb::GetDb();
            pUVar7 = (Uid *)RtDb::GetTable(pRVar6,sImplicitTableIndex);
          }
          else {
            StringToWString((Sexy *)asStack_40,extraout_x1_03);
            pRVar6 = (RtDb *)RtDb::GetDb();
            RtName::RtName((RtName *)asStack_18,(wstring *)asStack_28);
            pUVar7 = (Uid *)RtDb::GetTable(pRVar6,(RtName *)asStack_18);
            RtName::~RtName((RtName *)asStack_18);
            FUN_05476c50((wstring *)asStack_28);
          }
          pbVar8 = (byte *)FUN_05474ee8(asStack_48,0);
          if (*pbVar8 - 0x30 < 10) {
            auVar11 = FUN_054743b0(asStack_48,0x2e,0);
            p_Var10 = auVar11._8_8_;
            lVar5 = auVar11._0_8_;
            if (lVar5 == -1) goto LAB_051c3768;
            FUN_05475ffc(asStack_38,asStack_48,0,lVar5);
            FUN_05475ffc(asStack_18,asStack_48,lVar5 + 1,0xffffffffffffffff);
            FUN_05474278(asStack_48,asStack_18);
            std::string::~string(asStack_18);
            auVar11 = FUN_054743b0(asStack_48,0x2e,0);
            lVar5 = auVar11._0_8_;
            if (lVar5 == -1) {
              std::__exception_ptr::exception_ptr::exception_ptr(in_x8,auVar11._8_8_);
            }
            else {
              FUN_05475ffc(asStack_30,asStack_48,0,lVar5);
              FUN_05475ffc(asStack_18,asStack_48,lVar5 + 1,0xffffffffffffffff);
              FUN_05474278(asStack_48,asStack_18);
              std::string::~string(asStack_18);
              pcVar9 = (char *)FUN_0547429c(asStack_30);
              wVar3 = atoi(pcVar9);
              pcVar9 = (char *)FUN_0547429c(asStack_38);
              wVar4 = atoi(pcVar9);
              local_54 = 0;
              std::string::string(asStack_28,"0x");
              std::operator+(asStack_28,asStack_48);
              FUN_05474278(asStack_48,asStack_18);
              std::string::~string(asStack_18);
              std::string::~string(asStack_28);
              nop();
              StringToInt(asStack_48,&local_54);
              SortedKern::SortedKern((SortedKern *)asStack_18,wVar3,wVar4,local_54);
              p_Var10 = extraout_x1_04;
              if ((pUVar7 == (Uid *)0x0) ||
                 (cVar2 = Uid::operator!((Uid *)asStack_18), p_Var10 = extraout_x1_05, cVar2 != '\0'
                 )) {
                std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
              }
              else {
                RtDbTable::GetIdForUid(pUVar7);
                RtId((RtId *)in_x8,(RtId *)asStack_28);
                ~RtId((RtId *)asStack_28);
              }
              std::string::~string(asStack_30);
            }
            std::string::~string(asStack_38);
          }
          else {
            StringToWString((Sexy *)asStack_48,(string *)(ulong)(*pbVar8 - 0x30));
            RtName::RtName((RtName *)asStack_28,(wstring *)asStack_18);
            FUN_05476c50(asStack_18);
            StringToWString((Sexy *)asStack_40,extraout_x1_06);
            RtName::RtName((RtName *)asStack_18,(wstring *)asStack_30);
            FUN_05476c50((RtId *)asStack_30);
            RtId((RtId *)asStack_30,(RtName *)asStack_28,(RtName *)asStack_18);
            RtId((RtId *)in_x8,(RtId *)asStack_30);
            ~RtId((RtId *)asStack_30);
            RtName::~RtName((RtName *)asStack_18);
            RtName::~RtName((RtName *)asStack_28);
          }
        }
        else {
LAB_051c3768:
          std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
        }
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
      }
      else {
LAB_051c3450:
        std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
      }
      std::string::~string(asStack_50);
      goto LAB_051c346c;
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
LAB_051c346c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtId::StaticParse(std::wstring const&) */

void __thiscall Sexy::RtId::StaticParse(RtId *this,wstring *param_1)

{
  bool bVar1;
  char cVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  long lVar5;
  RtDb *pRVar6;
  Uid *pUVar7;
  int *piVar8;
  wchar_t *pwVar9;
  _func_void *extraout_x1;
  _func_void *extraout_x1_00;
  _func_void *extraout_x1_01;
  _func_void *extraout_x1_02;
  _func_void *extraout_x1_03;
  _func_void *extraout_x1_04;
  _func_void *p_Var10;
  exception_ptr *in_x8;
  undefined1 auVar11 [16];
  undefined1 auStack_58 [4];
  int local_54;
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  undefined1 auStack_38 [8];
  RtId aRStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar11 = FUN_054765d0();
  p_Var10 = auVar11._8_8_;
  if (5 < auVar11._0_8_) {
    FUN_05477da4(awStack_18,this,0,5);
    bVar1 = std::operator!=(awStack_18,L"RTID(");
    FUN_05476c50(awStack_18);
    p_Var10 = extraout_x1;
    if (!bVar1) {
      FUN_05477da4(awStack_50,this,5,0xffffffffffffffff);
      lVar5 = FUN_054765d0(awStack_50);
      auVar11 = FUN_05476f5c(awStack_50,lVar5 + -1);
      p_Var10 = auVar11._8_8_;
      if (*auVar11._0_8_ == 0x29) {
        lVar5 = FUN_054765d0(awStack_50);
        FUN_05477da4(awStack_18,awStack_50,0,lVar5 + -1);
        FUN_054766c8(awStack_50,awStack_18);
        FUN_05476c50(awStack_18);
        bVar1 = std::operator==(awStack_50,L"0");
        p_Var10 = extraout_x1_00;
        if ((bVar1) ||
           (auVar11 = FUN_05476818(awStack_50,0x40,0), p_Var10 = auVar11._8_8_,
           lVar5 = auVar11._0_8_, lVar5 == -1)) goto LAB_051c390c;
        FUN_05477da4(awStack_48,awStack_50,0,lVar5);
        FUN_05477da4(awStack_40,awStack_50,lVar5 + 1,0xffffffffffffffff);
        cVar2 = FUN_054765e8(awStack_48);
        p_Var10 = extraout_x1_01;
        if ((cVar2 == '\0') &&
           (cVar2 = FUN_054765e8(awStack_40), p_Var10 = extraout_x1_02, cVar2 == '\0')) {
          bVar1 = std::operator==(awStack_40,L".");
          if (bVar1) {
            pRVar6 = (RtDb *)RtDb::GetDb();
            pUVar7 = (Uid *)RtDb::GetTable(pRVar6,sImplicitTableIndex);
          }
          else {
            FUN_05477b24(awStack_28,awStack_40);
            pRVar6 = (RtDb *)RtDb::GetDb();
            RtName::RtName((RtName *)awStack_18,awStack_28);
            pUVar7 = (Uid *)RtDb::GetTable(pRVar6,(RtName *)awStack_18);
            RtName::~RtName((RtName *)awStack_18);
            FUN_05476c50(awStack_28);
          }
          piVar8 = (int *)FUN_05476f5c(awStack_48,0);
          if (*piVar8 - 0x30U < 10) {
            auVar11 = FUN_05476818(awStack_48,0x2e,0);
            p_Var10 = auVar11._8_8_;
            lVar5 = auVar11._0_8_;
            if (lVar5 == -1) goto LAB_051c3c24;
            FUN_05477da4(auStack_38,awStack_48,0,lVar5);
            FUN_05477da4(awStack_18,awStack_48,lVar5 + 1,0xffffffffffffffff);
            FUN_054766c8(awStack_48,awStack_18);
            FUN_05476c50(awStack_18);
            auVar11 = FUN_05476818(awStack_48,0x2e,0);
            lVar5 = auVar11._0_8_;
            if (lVar5 == -1) {
              std::__exception_ptr::exception_ptr::exception_ptr(in_x8,auVar11._8_8_);
            }
            else {
              FUN_05477da4(aRStack_30,awStack_48,0,lVar5);
              FUN_05477da4(awStack_18,awStack_48,lVar5 + 1,0xffffffffffffffff);
              FUN_054766c8(awStack_48,awStack_18);
              FUN_05476c50(awStack_18);
              pwVar9 = (wchar_t *)FUN_054766ec(aRStack_30);
              wVar3 = _wtoi(pwVar9);
              pwVar9 = (wchar_t *)FUN_054766ec(auStack_38);
              wVar4 = _wtoi(pwVar9);
              local_54 = 0;
              FUN_05478178(awStack_28,&DAT_0574ddc0,auStack_58);
              std::operator+(awStack_28,awStack_48);
              FUN_054766c8(awStack_48,awStack_18);
              FUN_05476c50(awStack_18);
              FUN_05476c50(awStack_28);
              nop();
              StringToInt(awStack_48,&local_54);
              SortedKern::SortedKern((SortedKern *)awStack_18,wVar3,wVar4,local_54);
              p_Var10 = extraout_x1_03;
              if ((pUVar7 == (Uid *)0x0) ||
                 (cVar2 = Uid::operator!((Uid *)awStack_18), p_Var10 = extraout_x1_04, cVar2 != '\0'
                 )) {
                std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
              }
              else {
                RtDbTable::GetIdForUid(pUVar7);
                RtId((RtId *)in_x8,(RtId *)awStack_28);
                ~RtId((RtId *)awStack_28);
              }
              FUN_05476c50(aRStack_30);
            }
            FUN_05476c50(auStack_38);
          }
          else {
            RtName::RtName((RtName *)awStack_28,awStack_48);
            RtName::RtName((RtName *)awStack_18,awStack_40);
            RtId(aRStack_30,(RtName *)awStack_28,(RtName *)awStack_18);
            RtId((RtId *)in_x8,aRStack_30);
            ~RtId(aRStack_30);
            RtName::~RtName((RtName *)awStack_18);
            RtName::~RtName((RtName *)awStack_28);
          }
        }
        else {
LAB_051c3c24:
          std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
        }
        FUN_05476c50(awStack_40);
        FUN_05476c50(awStack_48);
      }
      else {
LAB_051c390c:
        std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
      }
      FUN_05476c50(awStack_50);
      goto LAB_051c3928;
    }
  }
  std::__exception_ptr::exception_ptr::exception_ptr(in_x8,p_Var10);
LAB_051c3928:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

