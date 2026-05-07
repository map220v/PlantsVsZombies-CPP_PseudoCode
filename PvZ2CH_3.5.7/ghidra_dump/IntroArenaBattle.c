// Class: IntroArenaBattle


/* IntroArenaBattle::initializeModule() */

void __thiscall IntroArenaBattle::initializeModule(IntroArenaBattle *this)

{
  char cVar1;
  
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x48) = 0;
  }
  return;
}


/* IntroArenaBattle::preventSave() */

undefined8 IntroArenaBattle::preventSave(void)

{
  return 1;
}


/* IntroArenaBattle::onStartIntro() */

void IntroArenaBattle::onStartIntro(void)

{
  Sexy::OutputDebugStrF((wchar_t *)"IntroArenaBattle::onStartIntro");
  Board::PlaceLawnItems();
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* IntroArenaBattle::onLoadComplete() */

void IntroArenaBattle::onLoadComplete(void)

{
  int iVar1;
  long lVar2;
  Board *this;
  
  Sexy::OutputDebugStrF((wchar_t *)"IntroArenaBattle::onLoadComplete");
  this = *(Board **)(gLawnApp + 0x9f0);
  lVar2 = Board::GetBoardPanLocations(this);
  iVar1 = FUN_04b05c84();
  (**(code **)(*(long *)this + 0x1a8))(this,*(int *)(lVar2 + 4) - iVar1,0);
  return;
}


/* IntroArenaBattle::IntroArenaBattle() */

void __thiscall IntroArenaBattle::IntroArenaBattle(IntroArenaBattle *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06953b40;
  return;
}


/* IntroArenaBattle::StaticNew() */

IntroArenaBattle * IntroArenaBattle::StaticNew(void)

{
  IntroArenaBattle *this;
  
  this = ::operator_new(0x50);
  IntroArenaBattle(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaBattle::StaticClassInit() */

void IntroArenaBattle::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroArenaBattle");
    (*pcVar2)(plVar1,asStack_10,FUN_04b0609c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroArenaBattle::StaticGetClass() */

long * IntroArenaBattle::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroArenaBattle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroArenaBattle::~IntroArenaBattle() */

void __thiscall IntroArenaBattle::~IntroArenaBattle(IntroArenaBattle *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06953b40;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* IntroArenaBattle::~IntroArenaBattle() */

void __thiscall IntroArenaBattle::~IntroArenaBattle(IntroArenaBattle *this)

{
  ~IntroArenaBattle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroArenaBattle::registerForEvents() */

void __thiscall IntroArenaBattle::registerForEvents(IntroArenaBattle *this)

{
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LevelModule::getManager();
  FUN_04b05ba8(lVar1 + 0x80);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<IntroArenaBattle,void(IntroArenaBattle::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartIntro);
  Sexy::Delegate0::Delegate0<IntroArenaBattle,void(IntroArenaBattle::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<IntroArenaBattle,bool(IntroArenaBattle::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

