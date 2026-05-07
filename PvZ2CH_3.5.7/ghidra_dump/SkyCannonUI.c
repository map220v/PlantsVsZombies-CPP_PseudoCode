// Class: SkyCannonUI


/* SkyCannonUI::SetCoolDownTime(float) */

void __thiscall SkyCannonUI::SetCoolDownTime(SkyCannonUI *this,float param_1)

{
  *(float *)(this + 0x16c) = param_1;
  return;
}


/* SkyCannonUI::onSkyCannonUsed() */

void __thiscall SkyCannonUI::onSkyCannonUsed(SkyCannonUI *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  this[0x163] = (SkyCannonUI)0x1;
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(this + 0x16c);
  return;
}


/* SkyCannonUI::onSkyCannonTouchOutside() */

void __thiscall SkyCannonUI::onSkyCannonTouchOutside(SkyCannonUI *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* SkyCannonUI::~SkyCannonUI() */

void __thiscall SkyCannonUI::~SkyCannonUI(SkyCannonUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06832b90;
  *(undefined ***)(this + 0x10) = &PTR__SkyCannonUI_06832d38;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to SkyCannonUI::~SkyCannonUI() */

void __thiscall SkyCannonUI::~SkyCannonUI(SkyCannonUI *this)

{
  ~SkyCannonUI(this + -0x10);
  return;
}


/* SkyCannonUI::~SkyCannonUI() */

void __thiscall SkyCannonUI::~SkyCannonUI(SkyCannonUI *this)

{
  ~SkyCannonUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkyCannonUI::~SkyCannonUI() */

void __thiscall SkyCannonUI::~SkyCannonUI(SkyCannonUI *this)

{
  ~SkyCannonUI(this + -0x10);
  return;
}


/* SkyCannonUI::OnTouch(Sexy::Touch const&) */

SkyCannonUI __thiscall SkyCannonUI::OnTouch(SkyCannonUI *this,Touch *param_1)

{
  char cVar1;
  SkyCannonUI SVar2;
  
  SVar2 = (SkyCannonUI)0x0;
  if ((*(int *)(param_1 + 0x30) == 0) && (SVar2 = this[0x163], SVar2 == (SkyCannonUI)0x0)) {
    cVar1 = UIWidget::isInState((UIWidget *)this,4);
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0xe8))(this,4);
    }
    else {
      (**(code **)(*(long *)this + 0xe8))(this,2);
    }
    Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
    MessageRouter::Post((_func_void *)gMessageRouter);
    return (SkyCannonUI)0x1;
  }
  return SVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonUI::StaticClassInit() */

void SkyCannonUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkyCannonUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04310050,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCannonUI::StaticGetClass() */

long * SkyCannonUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkyCannonUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCannonUI::GetClass() const */

long * SkyCannonUI::GetClass(void)

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
  (*pcVar3)(plVar1,"SkyCannonUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCannonUI::SkyCannonUI() */

void __thiscall SkyCannonUI::SkyCannonUI(SkyCannonUI *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  this[0x164] = (SkyCannonUI)0x0;
  this[0x163] = (SkyCannonUI)0x0;
  *(undefined ***)this = &PTR_GetClass_06832b90;
  *(undefined ***)(this + 0x10) = &PTR__SkyCannonUI_06832d38;
  *(undefined4 *)(this + 0x168) = 0x41f00000;
  *(undefined4 *)(this + 0x16c) = 0x41f00000;
  return;
}


/* SkyCannonUI::StaticNew() */

SkyCannonUI * SkyCannonUI::StaticNew(void)

{
  SkyCannonUI *this;
  
  this = ::operator_new(0x170);
  SkyCannonUI(this);
  return this;
}


/* SkyCannonUI::onGameplayEnded() */

void __thiscall SkyCannonUI::onGameplayEnded(SkyCannonUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  this[0x164] = (SkyCannonUI)0x1;
  return;
}


/* SkyCannonUI::onUpdate() */

void __thiscall SkyCannonUI::onUpdate(SkyCannonUI *this)

{
  float fVar1;
  float fVar2;
  
  if (this[0x163] != (SkyCannonUI)0x0) {
    fVar1 = (float)PVZ_Dt();
    fVar2 = *(float *)(this + 0x168);
    *(float *)(this + 0x168) = fVar2 - fVar1;
    if (fVar2 - fVar1 <= 0.0) {
      this[0x163] = (SkyCannonUI)0x0;
      *(undefined4 *)(this + 0x168) = *(undefined4 *)(this + 0x16c);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonUI::registerForEvents() */

void __thiscall SkyCannonUI::registerForEvents(SkyCannonUI *this)

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
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<SkyCannonUI,void(SkyCannonUI::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<SkyCannonUI,void(SkyCannonUI::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSkyCannonUsed);
  Sexy::Delegate0::Delegate0<SkyCannonUI,void(SkyCannonUI::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SkyCannonUsed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSkyCannonTouchOutside);
  Sexy::Delegate0::Delegate0<SkyCannonUI,void(SkyCannonUI::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SkyCannonTouchOutside,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCannonUI::Draw(Sexy::Graphics*) */

void __thiscall SkyCannonUI::Draw(SkyCannonUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  LotteryResultProgressBar *pLVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  float *pfVar9;
  float fVar10;
  float local_34;
  GraphicsAutoState aGStack_30 [8];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_043103ac(*(undefined4 *)(this + 0x68));
  if ((cVar1 == '\0') && (this[0x164] == (SkyCannonUI)0x0)) {
    Sexy::Color::Color((Color *)local_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af92b0;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9238);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9238);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af92b0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = (iVar2 - iVar3) / 2;
  iVar3 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  if (iVar3 == 4) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06af9268;
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2,0);
  if (this[0x163] != (SkyCannonUI)0x0) {
    local_34 = *(float *)(this + 0x168) / *(float *)(this + 0x16c);
    local_18[0] = 0x3f800000;
    local_28[0] = 0;
    pfVar9 = eastl::max_alt<float>(&local_34,(float *)local_28);
    pfVar9 = eastl::min_alt<float>((float *)local_18,pfVar9);
    fVar10 = *pfVar9;
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af92b0);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar4 = FUN_0430fd28(*(undefined4 *)(this + 0x3c));
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af92b0);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar6 = FUN_0430fe5c();
    Sexy::Insets::Insets((Insets *)local_28,0xff,0x91,0xfa,200);
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
    DrawRadialCooldown(1.0 - fVar10,(float)(iVar2 + iVar3 / 2),(float)(iVar4 / 2),
                       (float)(iVar5 / 2 - iVar6),param_1,(Insets *)local_28,(Insets *)local_18);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to SkyCannonUI::Draw(Sexy::Graphics*) */

void __thiscall SkyCannonUI::Draw(SkyCannonUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

