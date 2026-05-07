// Class: RebateRewardConfig


/* RebateRewardConfig::~RebateRewardConfig() */

void __thiscall RebateRewardConfig::~RebateRewardConfig(RebateRewardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06925050;
  std::vector<RewardCondition,std::allocator<RewardCondition>>::~vector
            ((vector<RewardCondition,std::allocator<RewardCondition>> *)(this + 0x28));
  std::vector<WorldReward,std::allocator<WorldReward>>::~vector
            ((vector<WorldReward,std::allocator<WorldReward>> *)(this + 0x10));
  nop();
  return;
}


/* RebateRewardConfig::~RebateRewardConfig() */

void __thiscall RebateRewardConfig::~RebateRewardConfig(RebateRewardConfig *this)

{
  ~RebateRewardConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateRewardConfig::StaticClassInit() */

void RebateRewardConfig::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WorldReward");
    (*pcVar3)(plVar2,asStack_10,FUN_049ac570,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RewardCondition");
    (*pcVar3)(plVar2,asStack_10,FUN_049abc7c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RebateRewardConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_049acf58,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RebateRewardConfig::StaticGetClass() */

long * RebateRewardConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RebateRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RebateRewardConfig::GetClass() const */

long * RebateRewardConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"RebateRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RebateRewardConfig::RebateRewardConfig() */

void __thiscall RebateRewardConfig::RebateRewardConfig(RebateRewardConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06925050;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* RebateRewardConfig::StaticNew() */

RebateRewardConfig * RebateRewardConfig::StaticNew(void)

{
  RebateRewardConfig *this;
  
  this = ::operator_new(0x40);
  RebateRewardConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RebateRewardConfig::InitDate() */

void __thiscall RebateRewardConfig::InitDate(RebateRewardConfig *this)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this_00;
  RebateRewardConfig *pRVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x5e);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_049ae468:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pRVar4 = Sexy::RtObject::Cast<RebateRewardConfig>(this_00);
    if (pRVar4 != (RebateRewardConfig *)0x0) {
      uVar1 = *(undefined4 *)(pRVar4 + 0xc);
      *(undefined4 *)(this + 8) = *(undefined4 *)(pRVar4 + 8);
      *(undefined4 *)(this + 0xc) = uVar1;
      std::vector<WorldReward,std::allocator<WorldReward>>::operator=
                ((vector<WorldReward,std::allocator<WorldReward>> *)(this + 0x10),
                 (vector *)(pRVar4 + 0x10));
      std::vector<RewardCondition,std::allocator<RewardCondition>>::operator=
                ((vector<RewardCondition,std::allocator<RewardCondition>> *)(this + 0x28),
                 (vector *)(pRVar4 + 0x28));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_049ae468;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

