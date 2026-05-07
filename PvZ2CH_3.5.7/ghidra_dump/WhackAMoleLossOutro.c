// Class: WhackAMoleLossOutro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleLossOutro::StaticClassInit() */

void WhackAMoleLossOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleLossOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_03b5719c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleLossOutro::StaticGetClass() */

long * WhackAMoleLossOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleLossOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleLossOutro::WhackAMoleLossOutro() */

void __thiscall WhackAMoleLossOutro::WhackAMoleLossOutro(WhackAMoleLossOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06733720;
  return;
}


/* WhackAMoleLossOutro::StaticNew() */

WhackAMoleLossOutro * WhackAMoleLossOutro::StaticNew(void)

{
  WhackAMoleLossOutro *this;
  
  this = ::operator_new(0x20);
  WhackAMoleLossOutro(this);
  return this;
}


/* WhackAMoleLossOutro::~WhackAMoleLossOutro() */

void __thiscall WhackAMoleLossOutro::~WhackAMoleLossOutro(WhackAMoleLossOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06733720;
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* WhackAMoleLossOutro::~WhackAMoleLossOutro() */

void __thiscall WhackAMoleLossOutro::~WhackAMoleLossOutro(WhackAMoleLossOutro *this)

{
  ~WhackAMoleLossOutro(this);
  AK::FreeHook(this);
  return;
}


/* WhackAMoleLossOutro::ShowEndLevelUI() */

void __thiscall WhackAMoleLossOutro::ShowEndLevelUI(WhackAMoleLossOutro *this)

{
  int iVar1;
  WhackAMoleModule *this_00;
  
  this_00 = (WhackAMoleModule *)FUN_03b5933c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (WhackAMoleModule *)0x0) {
    iVar1 = FUN_03b55620(*(undefined4 *)(this_00 + 0x1c));
    SecretGachaMgr::SetSelectId((SecretGachaMgr *)this,iVar1);
    WhackAMoleModule::ShowEndLevelUI(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleLossOutro::registerForEvents() */

void __thiscall WhackAMoleLossOutro::registerForEvents(WhackAMoleLossOutro *this)

{
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03b5933c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar1 != 0) {
    pLVar2 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowEndLevelUI);
    Sexy::Delegate0::Delegate0<WhackAMoleLossOutro,void(WhackAMoleLossOutro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

