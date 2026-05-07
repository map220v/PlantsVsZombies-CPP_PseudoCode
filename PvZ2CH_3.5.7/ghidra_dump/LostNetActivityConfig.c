// Class: LostNetActivityConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityConfig::StaticClassInit() */

void LostNetActivityConfig::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"LostNetActivityConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_04be3c94,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LostNetActivityConfig::StaticGetClass() */

long * LostNetActivityConfig::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LostNetActivityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LostNetActivityConfig::GetClass() const */

long * LostNetActivityConfig::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LostNetActivityConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LostNetActivityConfig::LostNetActivityConfig() */

void __thiscall LostNetActivityConfig::LostNetActivityConfig(LostNetActivityConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0x62;
  *(undefined ***)this = &PTR_GetClass_0697c8a0;
  *(undefined4 *)(this + 0x10) = 30000;
  *(undefined4 *)(this + 0x14) = 300;
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  this[0x38] = (LostNetActivityConfig)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* LostNetActivityConfig::StaticNew() */

LostNetActivityConfig * LostNetActivityConfig::StaticNew(void)

{
  LostNetActivityConfig *this;
  
  this = ::operator_new(0x48);
  LostNetActivityConfig(this);
  return this;
}


/* LostNetActivityConfig::~LostNetActivityConfig() */

void __thiscall LostNetActivityConfig::~LostNetActivityConfig(LostNetActivityConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0697c8a0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  nop();
  return;
}


/* LostNetActivityConfig::~LostNetActivityConfig() */

void __thiscall LostNetActivityConfig::~LostNetActivityConfig(LostNetActivityConfig *this)

{
  ~LostNetActivityConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityConfig::Refresh() */

void __thiscall LostNetActivityConfig::Refresh(LostNetActivityConfig *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  RtObject *this_00;
  LostNetActivityConfig *pLVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar9,100);
  do {
    bVar8 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar8) {
LAB_04be43ec:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar8 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar8) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pLVar10 = Sexy::RtObject::Cast<LostNetActivityConfig>(this_00);
      if (pLVar10 != (LostNetActivityConfig *)0x0) {
        uVar1 = *(undefined4 *)(pLVar10 + 8);
        uVar2 = *(undefined4 *)(pLVar10 + 0xc);
        uVar3 = *(undefined4 *)(pLVar10 + 0x10);
        uVar4 = *(undefined4 *)(pLVar10 + 0x14);
        uVar5 = *(undefined4 *)(pLVar10 + 0x18);
        uVar6 = *(undefined4 *)(pLVar10 + 0x1c);
        uVar7 = *(undefined4 *)(pLVar10 + 0x3c);
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(pLVar10 + 0x40);
        *(undefined4 *)(this + 8) = uVar1;
        *(undefined4 *)(this + 0xc) = uVar2;
        *(undefined4 *)(this + 0x10) = uVar3;
        *(undefined4 *)(this + 0x14) = uVar4;
        *(undefined4 *)(this + 0x18) = uVar5;
        *(undefined4 *)(this + 0x1c) = uVar6;
        *(undefined4 *)(this + 0x3c) = uVar7;
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(pLVar10 + 0x20));
        this[0x38] = (LostNetActivityConfig)0x1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_04be43ec;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityConfig::IsActivity() */

void __thiscall LostNetActivityConfig::IsActivity(LostNetActivityConfig *this)

{
  long lVar1;
  long lVar2;
  string asStack_18 [8];
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] == (LostNetActivityConfig)0x0) {
    Refresh(this);
  }
  Sexy::StrFormat("%d",asStack_18,(ulong)*(uint *)(this + 0x3c));
  std::string::string((string *)&local_10,"%Y%m%d");
  lVar1 = CalcTimeStamp(asStack_18,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::~string(asStack_18);
  Sexy::StrFormat("%d",asStack_18,(ulong)*(uint *)(this + 0x40));
  std::string::string((string *)&local_10,"%Y%m%d");
  lVar2 = CalcTimeStamp(asStack_18,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  std::string::~string(asStack_18);
  local_10 = time((time_t *)0x0);
  localtime((time_t *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 <= lVar2 && lVar1 <= local_10);
}


/* LostNetActivityConfig::GetCurrentBonus() */

void __thiscall LostNetActivityConfig::GetCurrentBonus(LostNetActivityConfig *this)

{
  ProfileMgr *pPVar1;
  PlayerInfo *this_00;
  
  if (this[0x38] == (LostNetActivityConfig)0x0) {
    Refresh(this);
    pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  }
  else {
    pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  }
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::GetTodayLostNetActivityBonus(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LostNetActivityConfig::GetTodaySec() */

void __thiscall LostNetActivityConfig::GetTodaySec(LostNetActivityConfig *this)

{
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] == (LostNetActivityConfig)0x0) {
    Refresh(this);
  }
  local_10 = time((time_t *)0x0);
  localtime(&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0x15180 - (local_10 + 0x1c200) % 0x15180);
}

