// Class: ShovelUI


/* ShovelUI::onExitState_Pressed(WidgetState) */

void ShovelUI::onExitState_Pressed(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Drop");
  return;
}


/* ShovelUI::~ShovelUI() */

void __thiscall ShovelUI::~ShovelUI(ShovelUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c9d0;
  *(undefined ***)(this + 0x10) = &PTR__ShovelUI_0684cb78;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ShovelUI::~ShovelUI() */

void __thiscall ShovelUI::~ShovelUI(ShovelUI *this)

{
  ~ShovelUI(this + -0x10);
  return;
}


/* ShovelUI::~ShovelUI() */

void __thiscall ShovelUI::~ShovelUI(ShovelUI *this)

{
  ~ShovelUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShovelUI::~ShovelUI() */

void __thiscall ShovelUI::~ShovelUI(ShovelUI *this)

{
  ~ShovelUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelUI::StaticClassInit() */

void ShovelUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShovelUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04462a50,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelUI::StaticGetClass() */

long * ShovelUI::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ShovelUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShovelUI::GetClass() const */

long * ShovelUI::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"ShovelUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShovelUI::ShovelUI() */

void __thiscall ShovelUI::ShovelUI(ShovelUI *this)

{
  ShovelUI SVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  this[0x163] = (ShovelUI)0x0;
  this[0x164] = (ShovelUI)0x0;
  *(undefined ***)this = &PTR_GetClass_0684c9d0;
  *(undefined ***)(this + 0x10) = &PTR__ShovelUI_0684cb78;
  SVar1 = (ShovelUI)WaterShovelUtil::IsInWaterShovel();
  this[0x165] = SVar1;
  return;
}


/* ShovelUI::StaticNew() */

ShovelUI * ShovelUI::StaticNew(void)

{
  ShovelUI *this;
  
  this = ::operator_new(0x168);
  ShovelUI(this);
  return this;
}


/* ShovelUI::onGameplayEnded() */

void __thiscall ShovelUI::onGameplayEnded(ShovelUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  this[0x164] = (ShovelUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelUI::OnTouch(Sexy::Touch const&) */

void __thiscall ShovelUI::OnTouch(ShovelUI *this,Touch *param_1)

{
  char cVar1;
  undefined8 uVar2;
  NewPVPMgr *this_00;
  BaseCursor *pBVar3;
  Board *this_01;
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    pBVar3 = (BaseCursor *)NewPVPMgr::TryAddShovelCursor(this_00,aTStack_40);
    cVar1 = Board::TryToAddCursor(this_01,pBVar3,true);
    if (cVar1 != '\0') {
      cVar1 = LawnApp::IsInModule(gLawnApp,4);
      if (cVar1 != '\0') {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
      (**(code **)(*(long *)this + 0xe8))(this,4);
    }
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ShovelUI::onCursorDestroyed(BaseCursor*) */

void __thiscall ShovelUI::onCursorDestroyed(ShovelUI *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if (param_1 != (BaseCursor *)0x0) {
    bVar1 = Sexy::RtObject::IsA<ShovelCursor>((RtObject *)param_1);
    if ((!bVar1) && (bVar1 = Sexy::RtObject::IsA<WateringCursor>((RtObject *)param_1), !bVar1)) {
      return;
    }
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelUI::registerForEvents() */

void __thiscall ShovelUI::registerForEvents(ShovelUI *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x190);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ShovelUI,void(ShovelUI::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<ShovelUI,void(ShovelUI::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelUI::onEnterState_Pressed(WidgetState) */

void ShovelUI::onEnterState_Pressed(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Shovel");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelUI::Draw(Sexy::Graphics*) */

void __thiscall ShovelUI::Draw(ShovelUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  Image *pIVar3;
  CachedUIResourcePtr<Sexy::Image> *pCVar4;
  float fVar5;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04462cc8(*(undefined4 *)(this + 0x68));
  if ((cVar1 == '\0') && (this[0x164] == (ShovelUI)0x0)) {
    Sexy::Color::Color(aCStack_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  if (this[0x165] == (ShovelUI)0x0) {
    fVar5 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0));
    if (fVar5 == 1.0) {
      iVar2 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
      if (iVar2 == 4) {
        pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b096d0;
      }
      else {
        pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09620;
      }
    }
    else {
      iVar2 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
      if (iVar2 == 4) {
        pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b098d8;
      }
      else {
        pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b096a0;
      }
    }
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
  }
  else {
    iVar2 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
    if (iVar2 == 4) {
      pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09758;
    }
    else {
      pCVar4 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09670;
    }
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar3,0,0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ShovelUI::Draw(Sexy::Graphics*) */

void __thiscall ShovelUI::Draw(ShovelUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

