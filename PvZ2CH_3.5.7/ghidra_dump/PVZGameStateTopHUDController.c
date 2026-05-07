// Class: PVZGameStateTopHUDController


/* PVZGameStateTopHUDController::StaticNew() */

undefined8 PVZGameStateTopHUDController::StaticNew(void)

{
  return 0;
}


/* PVZGameStateTopHUDController::onHideTopHUD() */

void __thiscall PVZGameStateTopHUDController::onHideTopHUD(PVZGameStateTopHUDController *this)

{
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
  return;
}


/* PVZGameStateTopHUDController::onShowTopHUD() */

void __thiscall PVZGameStateTopHUDController::onShowTopHUD(PVZGameStateTopHUDController *this)

{
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + -1;
  return;
}


/* PVZGameStateTopHUDController::TouchBegan(Sexy::Touch const&) */

void __thiscall
PVZGameStateTopHUDController::TouchBegan(PVZGameStateTopHUDController *this,Touch *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x318))();
  if (cVar1 == '\0') {
    return;
  }
  UIWidget::ProcessedMouseDown
            (*(int *)(param_1 + 0x10) + *(int *)(this + 0xd8),*(int *)(param_1 + 0x14),200);
  return;
}


/* PVZGameStateTopHUDController::TouchMoved(Sexy::Touch const&) */

void __thiscall
PVZGameStateTopHUDController::TouchMoved(PVZGameStateTopHUDController *this,Touch *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x318))();
  if (cVar1 == '\0') {
    return;
  }
  UIWidget::ProcessedMouseMove
            (*(int *)(param_1 + 0x10) + *(int *)(this + 0xd8),*(int *)(param_1 + 0x14),200);
  return;
}


/* PVZGameStateTopHUDController::TouchEnded(Sexy::Touch const&) */

void __thiscall
PVZGameStateTopHUDController::TouchEnded(PVZGameStateTopHUDController *this,Touch *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x318))();
  if (cVar1 == '\0') {
    return;
  }
  UIWidget::ProcessedMouseUp
            (*(int *)(param_1 + 0x10) + *(int *)(this + 0xd8),*(int *)(param_1 + 0x14),200);
  return;
}


/* PVZGameStateTopHUDController::TouchesCanceled() */

void __thiscall PVZGameStateTopHUDController::TouchesCanceled(PVZGameStateTopHUDController *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x318))();
  if (cVar1 == '\0') {
    return;
  }
  UIWidget::ProcessedMouseUp(-100,-100,'\0');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZGameStateTopHUDController::StaticClassInit() */

void PVZGameStateTopHUDController::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZGameStateTopHUDController");
    (*pcVar2)(plVar1,asStack_10,FUN_0385c420,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZGameStateTopHUDController::StaticGetClass() */

long * PVZGameStateTopHUDController::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZGameStateTopHUDController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameStateTopHUDController::GetClass() const */

long * PVZGameStateTopHUDController::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"PVZGameStateTopHUDController",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZGameStateTopHUDController::~PVZGameStateTopHUDController() */

void __thiscall
PVZGameStateTopHUDController::~PVZGameStateTopHUDController(PVZGameStateTopHUDController *this)

{
  *(undefined ***)this = &PTR_GetClass_066a89a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZGameStateTopHUDController::~PVZGameStateTopHUDController() */

void __thiscall
PVZGameStateTopHUDController::~PVZGameStateTopHUDController(PVZGameStateTopHUDController *this)

{
  ~PVZGameStateTopHUDController(this);
  AK::FreeHook(this);
  return;
}


/* PVZGameStateTopHUDController::IsLoaded() */

PVZGameStateTopHUDController __thiscall
PVZGameStateTopHUDController::IsLoaded(PVZGameStateTopHUDController *this)

{
  return this[0xd1];
}


/* PVZGameStateTopHUDController::isHidden() const */

bool __thiscall PVZGameStateTopHUDController::isHidden(PVZGameStateTopHUDController *this)

{
  return 0 < *(int *)(this + 0xd4);
}


/* PVZGameStateTopHUDController::canHandleInput() const */

byte __thiscall PVZGameStateTopHUDController::canHandleInput(PVZGameStateTopHUDController *this)

{
  char cVar1;
  byte bVar2;
  
  if ((this[0xd1] != (PVZGameStateTopHUDController)0x0) &&
     (cVar1 = GameStateMgr::IsTransitioning(gGameStateMgr), cVar1 == '\0')) {
    bVar2 = isHidden(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZGameStateTopHUDController::PVZGameStateTopHUDController() */

void __thiscall
PVZGameStateTopHUDController::PVZGameStateTopHUDController(PVZGameStateTopHUDController *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_066a89a0;
  *(undefined4 *)(this + 0xd4) = 0;
  this[0xd1] = (PVZGameStateTopHUDController)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHideTopHUD);
  Sexy::Delegate0::Delegate0<PVZGameStateTopHUDController,void(PVZGameStateTopHUDController::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::HideTopHUD,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onShowTopHUD);
  Sexy::Delegate0::Delegate0<PVZGameStateTopHUDController,void(PVZGameStateTopHUDController::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShowTopHUD,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZGameStateTopHUDController::Draw(Sexy::Graphics*) */

void __thiscall
PVZGameStateTopHUDController::Draw(PVZGameStateTopHUDController *this,Graphics *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  undefined8 local_40;
  undefined8 local_38;
  GraphicsAutoState aGStack_30 [8];
  RenderQueue aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xd1] != (PVZGameStateTopHUDController)0x0) && (*(int *)(this + 0xd4) < 1)) {
    RenderQueue::RenderQueue(aRStack_28,1000);
    UIWidget::AddToRenderQueueForAllWidgets(aRStack_28);
    puVar2 = (undefined8 *)RenderQueue::GetSortedQueue(aRStack_28);
    local_40 = FUN_0385c718(*puVar2);
    local_38 = FUN_0385c768(puVar2[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_40);
    }
    RenderQueue::~RenderQueue(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZGameStateTopHUDController::Update() */

void __thiscall PVZGameStateTopHUDController::Update(PVZGameStateTopHUDController *this)

{
  char cVar1;
  
  if ((this[0xd1] == (PVZGameStateTopHUDController)0x0) &&
     (cVar1 = UIWidget::IsLoadCompleteForAllWidgets(), cVar1 != '\0')) {
    this[0xd1] = (PVZGameStateTopHUDController)0x1;
    UIWidget::UpdateUI();
    UIFutureGiftShop::Update((UIFutureGiftShop *)this);
    return;
  }
  UIWidget::UpdateUI();
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  return;
}

