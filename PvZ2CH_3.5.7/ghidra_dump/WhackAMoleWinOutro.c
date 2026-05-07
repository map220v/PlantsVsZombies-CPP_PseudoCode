// Class: WhackAMoleWinOutro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleWinOutro::StaticClassInit() */

void WhackAMoleWinOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleWinOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_03b56d74,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleWinOutro::StaticGetClass() */

long * WhackAMoleWinOutro::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleWinOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWinOutro::WhackAMoleWinOutro() */

void __thiscall WhackAMoleWinOutro::WhackAMoleWinOutro(WhackAMoleWinOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_067335c0;
  return;
}


/* WhackAMoleWinOutro::StaticNew() */

WhackAMoleWinOutro * WhackAMoleWinOutro::StaticNew(void)

{
  WhackAMoleWinOutro *this;
  
  this = ::operator_new(0x20);
  WhackAMoleWinOutro(this);
  return this;
}


/* WhackAMoleWinOutro::~WhackAMoleWinOutro() */

void __thiscall WhackAMoleWinOutro::~WhackAMoleWinOutro(WhackAMoleWinOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067335c0;
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* WhackAMoleWinOutro::~WhackAMoleWinOutro() */

void __thiscall WhackAMoleWinOutro::~WhackAMoleWinOutro(WhackAMoleWinOutro *this)

{
  ~WhackAMoleWinOutro(this);
  AK::FreeHook(this);
  return;
}


/* WhackAMoleWinOutro::ShowEndLevelUI() */

void __thiscall WhackAMoleWinOutro::ShowEndLevelUI(WhackAMoleWinOutro *this)

{
  int iVar1;
  WhackAMoleModule *this_00;
  
  this_00 = (WhackAMoleModule *)FUN_03b5933c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (WhackAMoleModule *)0x0) {
    iVar1 = FUN_03b55620(*(undefined4 *)(this_00 + 0x1c));
    SecretGachaMgr::SetSelectId((SecretGachaMgr *)this,iVar1);
  }
  WhackAMoleModule::ShowEndLevelUI(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleWinOutro::registerForEvents() */

void __thiscall WhackAMoleWinOutro::registerForEvents(WhackAMoleWinOutro *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowEndLevelUI);
  Sexy::Delegate0::Delegate0<WhackAMoleWinOutro,void(WhackAMoleWinOutro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

