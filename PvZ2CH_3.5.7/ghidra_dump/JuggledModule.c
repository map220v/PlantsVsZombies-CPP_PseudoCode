// Class: JuggledModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JuggledModule::StaticClassInit() */

void JuggledModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"JuggledModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d205c8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JuggledModule::StaticGetClass() */

long * JuggledModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JuggledModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JuggledModule::JuggledModule() */

void __thiscall JuggledModule::JuggledModule(JuggledModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06765af0;
  return;
}


/* JuggledModule::StaticNew() */

JuggledModule * JuggledModule::StaticNew(void)

{
  JuggledModule *this;
  
  this = ::operator_new(0x18);
  JuggledModule(this);
  return this;
}


/* JuggledModule::~JuggledModule() */

void __thiscall JuggledModule::~JuggledModule(JuggledModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06765af0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* JuggledModule::~JuggledModule() */

void __thiscall JuggledModule::~JuggledModule(JuggledModule *this)

{
  ~JuggledModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JuggledModule::onLoadComplete() */

void __thiscall JuggledModule::onLoadComplete(JuggledModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ZombieJuggledData aZStack_88 [12];
  SexyVector3 aSStack_7c [12];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  vector<std::string,std::allocator<std::string>> avStack_58 [24];
  vector<std::string,std::allocator<std::string>> avStack_40 [24];
  vector<std::string,std::allocator<std::string>> avStack_28 [24];
  undefined1 local_10;
  undefined1 local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ZombieJuggledData::ZombieJuggledData
            (aZStack_88,(ZombieJuggledData *)(*(long *)(gLawnApp + 0x9f0) + 0xd50));
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_28,(vector *)(pRVar1 + 0xa0));
  local_5c = *(undefined4 *)(pRVar1 + 0x6c);
  local_64 = *(undefined4 *)(pRVar1 + 100);
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_58,(vector *)(pRVar1 + 0x70));
  Sexy::SexyVector3::operator=(aSStack_7c,(SexyVector3 *)(pRVar1 + 0x4c));
  local_70 = *(undefined8 *)(pRVar1 + 0x58);
  Sexy::SexyVector3::operator=((SexyVector3 *)aZStack_88,(SexyVector3 *)(pRVar1 + 0x40));
  local_60 = *(undefined4 *)(pRVar1 + 0x68);
  local_68 = *(undefined4 *)(pRVar1 + 0x60);
  std::vector<std::string,std::allocator<std::string>>::operator=
            (avStack_40,(vector *)(pRVar1 + 0x88));
  local_10 = 1;
  local_f = 1;
  ZombieJuggledData::operator=
            ((ZombieJuggledData *)(*(long *)(gLawnApp + 0x9f0) + 0xd50),aZStack_88);
  ZombieJuggledData::~ZombieJuggledData(aZStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JuggledModule::registerForEvents() */

void __thiscall JuggledModule::registerForEvents(JuggledModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<JuggledModule,void(JuggledModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

