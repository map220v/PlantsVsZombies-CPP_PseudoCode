// Class: JoustOrAdventureScreenTopHUD


/* JoustOrAdventureScreenTopHUD::GetClass() const */

long * JoustOrAdventureScreenTopHUD::GetClass(void)

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
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"JoustOrAdventureScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOrAdventureScreenTopHUD::onShowingFUEChanged(bool) */

void __thiscall
JoustOrAdventureScreenTopHUD::onShowingFUEChanged(JoustOrAdventureScreenTopHUD *this,bool param_1)

{
  this[0xdc] = (JoustOrAdventureScreenTopHUD)param_1;
  return;
}


/* JoustOrAdventureScreenTopHUD::~JoustOrAdventureScreenTopHUD() */

void __thiscall
JoustOrAdventureScreenTopHUD::~JoustOrAdventureScreenTopHUD(JoustOrAdventureScreenTopHUD *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae870;
  PVZGameStateTopHUDController::~PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  return;
}


/* JoustOrAdventureScreenTopHUD::~JoustOrAdventureScreenTopHUD() */

void __thiscall
JoustOrAdventureScreenTopHUD::~JoustOrAdventureScreenTopHUD(JoustOrAdventureScreenTopHUD *this)

{
  ~JoustOrAdventureScreenTopHUD(this);
  AK::FreeHook(this);
  return;
}


/* JoustOrAdventureScreenTopHUD::JoustOrAdventureScreenTopHUD() */

void __thiscall
JoustOrAdventureScreenTopHUD::JoustOrAdventureScreenTopHUD(JoustOrAdventureScreenTopHUD *this)

{
  PVZGameStateTopHUDController::PVZGameStateTopHUDController((PVZGameStateTopHUDController *)this);
  this[0xdc] = (JoustOrAdventureScreenTopHUD)0x0;
  *(undefined ***)this = &PTR_GetClass_066ae870;
  return;
}


/* JoustOrAdventureScreenTopHUD::StaticNew() */

JoustOrAdventureScreenTopHUD * JoustOrAdventureScreenTopHUD::StaticNew(void)

{
  JoustOrAdventureScreenTopHUD *this;
  
  this = ::operator_new(0xe0);
  JoustOrAdventureScreenTopHUD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOrAdventureScreenTopHUD::StaticClassInit() */

void JoustOrAdventureScreenTopHUD::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustOrAdventureScreenTopHUD");
    (*pcVar2)(plVar1,asStack_10,FUN_038852d4,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOrAdventureScreenTopHUD::StaticGetClass() */

long * JoustOrAdventureScreenTopHUD::StaticGetClass(void)

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
  uVar2 = PVZGameStateTopHUDController::StaticGetClass();
  (*pcVar3)(plVar1,"JoustOrAdventureScreenTopHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOrAdventureScreenTopHUD::Open() */

void __thiscall JoustOrAdventureScreenTopHUD::Open(JoustOrAdventureScreenTopHUD *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onShowingFUEChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<JoustOrAdventureScreenTopHUD,void(JoustOrAdventureScreenTopHUD::*)(bool)>>
            ((MessageRouter *)puVar1,Message::JoustShowingFUEInAdventureScreen,&local_40);
  return;
}


/* JoustOrAdventureScreenTopHUD::canHandleInput() const */

undefined8 __thiscall
JoustOrAdventureScreenTopHUD::canHandleInput(JoustOrAdventureScreenTopHUD *this)

{
  undefined8 uVar1;
  
  if (this[0xdc] != (JoustOrAdventureScreenTopHUD)0x0) {
    return 0;
  }
  uVar1 = PVZGameStateTopHUDController::canHandleInput((PVZGameStateTopHUDController *)this);
  return uVar1;
}

