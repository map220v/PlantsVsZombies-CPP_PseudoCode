// Class: LevelOfTheDayModule


/* LevelOfTheDayModule::preventSave() */

undefined8 LevelOfTheDayModule::preventSave(void)

{
  return 1;
}


/* LevelOfTheDayModule::onGameplayStarted() */

void LevelOfTheDayModule::onGameplayStarted(void)

{
  return;
}


/* LevelOfTheDayModule::onGameplayEnded() */

void LevelOfTheDayModule::onGameplayEnded(void)

{
  return;
}


/* LevelOfTheDayModule::onLevelEnded() */

void LevelOfTheDayModule::onLevelEnded(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayModule::StaticClassInit() */

void LevelOfTheDayModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDayModule");
    (*pcVar2)(plVar1,asStack_10,FUN_049c7bd8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayModule::StaticGetClass() */

long * LevelOfTheDayModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayModule::LevelOfTheDayModule() */

void __thiscall LevelOfTheDayModule::LevelOfTheDayModule(LevelOfTheDayModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069271b0;
  return;
}


/* LevelOfTheDayModule::StaticNew() */

LevelOfTheDayModule * LevelOfTheDayModule::StaticNew(void)

{
  LevelOfTheDayModule *this;
  
  this = ::operator_new(0x18);
  LevelOfTheDayModule(this);
  return this;
}


/* LevelOfTheDayModule::~LevelOfTheDayModule() */

void __thiscall LevelOfTheDayModule::~LevelOfTheDayModule(LevelOfTheDayModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069271b0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelOfTheDayModule::~LevelOfTheDayModule() */

void __thiscall LevelOfTheDayModule::~LevelOfTheDayModule(LevelOfTheDayModule *this)

{
  ~LevelOfTheDayModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayModule::GatherRuntimeResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
LevelOfTheDayModule::GatherRuntimeResourceRequirements(LevelOfTheDayModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"LOD_World_SFX");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayModule::registerForEvents() */

void __thiscall LevelOfTheDayModule::registerForEvents(LevelOfTheDayModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<LevelOfTheDayModule,void(LevelOfTheDayModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<LevelOfTheDayModule,bool(LevelOfTheDayModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<LevelOfTheDayModule,void(LevelOfTheDayModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<LevelOfTheDayModule,void(LevelOfTheDayModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

