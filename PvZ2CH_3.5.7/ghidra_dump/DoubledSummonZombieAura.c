// Class: DoubledSummonZombieAura


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DoubledSummonZombieAura::StaticClassInit() */

void DoubledSummonZombieAura::StaticClassInit(void)

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
    std::string::string(asStack_10,"DoubledSummonZombieAura");
    (*pcVar2)(plVar1,asStack_10,FUN_03609fc8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DoubledSummonZombieAura::StaticGetClass() */

long * DoubledSummonZombieAura::StaticGetClass(void)

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
  uVar2 = InfluenceAura::StaticGetClass();
  (*pcVar3)(plVar1,"DoubledSummonZombieAura",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DoubledSummonZombieAura::DoubledSummonZombieAura() */

void __thiscall DoubledSummonZombieAura::DoubledSummonZombieAura(DoubledSummonZombieAura *this)

{
  InfluenceAura::InfluenceAura((InfluenceAura *)this);
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined ***)this = &PTR_GetAuraClass_066672e0;
  return;
}


/* DoubledSummonZombieAura::StaticNew() */

DoubledSummonZombieAura * DoubledSummonZombieAura::StaticNew(void)

{
  DoubledSummonZombieAura *this;
  
  this = ::operator_new(0x20);
  DoubledSummonZombieAura(this);
  return this;
}


/* DoubledSummonZombieAura::~DoubledSummonZombieAura() */

void __thiscall DoubledSummonZombieAura::~DoubledSummonZombieAura(DoubledSummonZombieAura *this)

{
  *(undefined ***)this = &PTR_GetAuraClass_066672e0;
  InfluenceAura::~InfluenceAura((InfluenceAura *)this);
  return;
}


/* DoubledSummonZombieAura::~DoubledSummonZombieAura() */

void __thiscall DoubledSummonZombieAura::~DoubledSummonZombieAura(DoubledSummonZombieAura *this)

{
  ~DoubledSummonZombieAura(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DoubledSummonZombieAura::InitializaAura(Sexy::RtWeakPtr<InfluenceAuraProperty>) */

void __thiscall
DoubledSummonZombieAura::InitializaAura(DoubledSummonZombieAura *this,RtWeakPtrBase *param_2)

{
  long lVar1;
  RtObject *this_00;
  DoubledSummonZombieAuraProperty *pDVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  BasePowerup::SetPowerupType((BasePowerup *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  pDVar2 = Sexy::RtObject::Cast<DoubledSummonZombieAuraProperty>(this_00);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pDVar2 + 8);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DoubledSummonZombieAura::MergeAura(Sexy::RtWeakPtr<InfluenceAura>) */

void __thiscall
DoubledSummonZombieAura::MergeAura
          (DoubledSummonZombieAura *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  RtObject *this_00;
  DoubledSummonZombieAura *pDVar1;
  
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pDVar1 = Sexy::RtObject::Cast<DoubledSummonZombieAura>(this_00);
  if (pDVar1 != (DoubledSummonZombieAura *)0x0) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + *(int *)(pDVar1 + 0x18);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DoubledSummonZombieAura::ConsumeTimes() */

void __thiscall DoubledSummonZombieAura::ConsumeTimes(DoubledSummonZombieAura *this)

{
  int iVar1;
  CardSystemManager *this_00;
  InfluenceAuraManager *pIVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x18) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    this_00 = Board::GetGameSubSystem<CardSystemManager>(*(Board **)(gLawnApp + 0x9f0));
    pIVar2 = (InfluenceAuraManager *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    InfluenceAuraManager::UnRegisterAura(pIVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

