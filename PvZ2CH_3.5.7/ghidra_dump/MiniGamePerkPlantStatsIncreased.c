// Class: MiniGamePerkPlantStatsIncreased


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkPlantStatsIncreased::StaticClassInit() */

void MiniGamePerkPlantStatsIncreased::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkPlantStatsIncreased");
    (*pcVar2)(plVar1,asStack_10,FUN_03897a00,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkPlantStatsIncreased::StaticGetClass() */

long * MiniGamePerkPlantStatsIncreased::StaticGetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkPlantStatsIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkPlantStatsIncreased::GetClass() const */

long * MiniGamePerkPlantStatsIncreased::GetClass(void)

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
  uVar2 = MiniGamePerk::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkPlantStatsIncreased",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkPlantStatsIncreased::~MiniGamePerkPlantStatsIncreased() */

void __thiscall
MiniGamePerkPlantStatsIncreased::~MiniGamePerkPlantStatsIncreased
          (MiniGamePerkPlantStatsIncreased *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0190;
  MiniGamePerk::~MiniGamePerk((MiniGamePerk *)this);
  return;
}


/* MiniGamePerkPlantStatsIncreased::~MiniGamePerkPlantStatsIncreased() */

void __thiscall
MiniGamePerkPlantStatsIncreased::~MiniGamePerkPlantStatsIncreased
          (MiniGamePerkPlantStatsIncreased *this)

{
  ~MiniGamePerkPlantStatsIncreased(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkPlantStatsIncreased::MiniGamePerkPlantStatsIncreased() */

void __thiscall
MiniGamePerkPlantStatsIncreased::MiniGamePerkPlantStatsIncreased
          (MiniGamePerkPlantStatsIncreased *this)

{
  MiniGamePerk::MiniGamePerk((MiniGamePerk *)this);
  *(undefined ***)this = &PTR_GetClass_066b0190;
  return;
}


/* MiniGamePerkPlantStatsIncreased::StaticNew() */

MiniGamePerkPlantStatsIncreased * MiniGamePerkPlantStatsIncreased::StaticNew(void)

{
  MiniGamePerkPlantStatsIncreased *this;
  
  this = ::operator_new(0x28);
  MiniGamePerkPlantStatsIncreased(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkPlantStatsIncreased::Activate() */

void __thiscall MiniGamePerkPlantStatsIncreased::Activate(MiniGamePerkPlantStatsIncreased *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  this[0x20] = (MiniGamePerkPlantStatsIncreased)0x1;
  lStack_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_03896020(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x88);
    Sexy::Delegate0::Delegate0<MiniGamePerk,void(MiniGamePerk::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

