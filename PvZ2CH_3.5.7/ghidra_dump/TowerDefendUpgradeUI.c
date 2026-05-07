// Class: TowerDefendUpgradeUI


/* TowerDefendUpgradeUI::SetSunCount(int) */

void __thiscall TowerDefendUpgradeUI::SetSunCount(TowerDefendUpgradeUI *this,int param_1)

{
  *(int *)(this + 0x178) = param_1;
  return;
}


/* TowerDefendUpgradeUI::GetPlantGridPosition() */

Point * TowerDefendUpgradeUI::GetPlantGridPosition(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x164));
  return in_x8;
}


/* TowerDefendUpgradeUI::~TowerDefendUpgradeUI() */

void __thiscall TowerDefendUpgradeUI::~TowerDefendUpgradeUI(TowerDefendUpgradeUI *this)

{
  *(undefined ***)this = &PTR_GetClass_068468f0;
  *(undefined ***)(this + 0x10) = &PTR__TowerDefendUpgradeUI_06846a90;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 0x18))();
    *(undefined8 *)(this + 0x170) = 0;
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to TowerDefendUpgradeUI::~TowerDefendUpgradeUI() */

void __thiscall TowerDefendUpgradeUI::~TowerDefendUpgradeUI(TowerDefendUpgradeUI *this)

{
  ~TowerDefendUpgradeUI(this + -0x10);
  return;
}


/* TowerDefendUpgradeUI::~TowerDefendUpgradeUI() */

void __thiscall TowerDefendUpgradeUI::~TowerDefendUpgradeUI(TowerDefendUpgradeUI *this)

{
  ~TowerDefendUpgradeUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TowerDefendUpgradeUI::~TowerDefendUpgradeUI() */

void __thiscall TowerDefendUpgradeUI::~TowerDefendUpgradeUI(TowerDefendUpgradeUI *this)

{
  ~TowerDefendUpgradeUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::StaticClassInit() */

void TowerDefendUpgradeUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"TowerDefendUpgradeUI");
    (*pcVar2)(plVar1,asStack_10,FUN_043cdf8c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendUpgradeUI::StaticGetClass() */

long * TowerDefendUpgradeUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendUpgradeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendUpgradeUI::GetClass() const */

long * TowerDefendUpgradeUI::GetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendUpgradeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::TowerDefendUpgradeUI() */

void __thiscall TowerDefendUpgradeUI::TowerDefendUpgradeUI(TowerDefendUpgradeUI *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068468f0;
  *(undefined ***)(this + 0x10) = &PTR__TowerDefendUpgradeUI_06846a90;
  Sexy::Point::Point((Point *)(this + 0x164));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendUpgradeUI::StaticNew() */

TowerDefendUpgradeUI * TowerDefendUpgradeUI::StaticNew(void)

{
  TowerDefendUpgradeUI *this;
  
  this = ::operator_new(0x180);
  TowerDefendUpgradeUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::GetHitRect() */

void __thiscall TowerDefendUpgradeUI::GetHitRect(TowerDefendUpgradeUI *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Insets *in_x8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  iVar2 = FUN_043cdcd0(0x37);
  iVar3 = FUN_043cdcd0(0x14);
  Sexy::Insets::Insets(in_x8,local_18 + iVar2,local_14 - iVar3,iVar2,local_c + iVar3 * 2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendUpgradeUI::onGameplayEnded() */

void __thiscall TowerDefendUpgradeUI::onGameplayEnded(TowerDefendUpgradeUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::registerForEvents() */

void __thiscall TowerDefendUpgradeUI::registerForEvents(TowerDefendUpgradeUI *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<TowerDefendUpgradeUI,void(TowerDefendUpgradeUI::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameplayEnded,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::OnTouch(Sexy::Touch const&) */

void __thiscall TowerDefendUpgradeUI::OnTouch(TowerDefendUpgradeUI *this,Touch *param_1)

{
  int iVar1;
  undefined *puVar2;
  Point aPStack_10 [8];
  long local_8;
  
  puVar2 = gMessageRouter;
  iVar1 = *(int *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x164));
    MessageRouter::Post<Sexy::Point_const&,Sexy::Point>
              ((MessageRouter *)puVar2,Message::PlantUpgradeTouch,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendUpgradeUI::Draw(Sexy::Graphics*) */

void __thiscall TowerDefendUpgradeUI::Draw(TowerDefendUpgradeUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  PrimeText_PotentialText *pPVar7;
  PrimeTextWidget *this_00;
  GraphicsAutoState aGStack_30 [8];
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b04fc8);
  iVar1 = FUN_043cdcd0(0);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar1);
  iVar1 = UIWidget::getWidgetStateSerialization((UIWidget *)this);
  if (iVar1 == 4) {
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b04fa0);
  }
  else {
    pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06b04f20);
  }
  iVar1 = FUN_043cdc34(*(undefined4 *)(this + 0x38));
  iVar2 = FUN_043cdcd0(6);
  iVar3 = FUN_043cdcd0(0);
  iVar4 = FUN_043cdcd0(4);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1 - iVar2,iVar3 - iVar4);
  Sexy::StrFormat(L"%d",awStack_28,(ulong)*(uint *)(this + 0x178));
  if (*(PrimeTextWidget **)(this + 0x170) == (PrimeTextWidget *)0x0) {
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    iVar1 = FUN_043cdcd0(0xf);
    iVar2 = FUN_043cdcd0(0xfffffffe);
    iVar3 = FUN_043cdcd0(0x3c);
    iVar4 = FUN_043cdcd0(0x24);
    FUN_05477b24(auStack_20,awStack_28);
    Sexy::Color::Color(aCStack_18,1);
    pPVar7 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar6,auStack_20,1,1,
                        aCStack_18);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar7);
    *(PrimeTextWidget **)(this + 0x170) = this_00;
    FUN_05476c50(auStack_20);
  }
  else {
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x170),awStack_28);
  }
  (**(code **)(**(long **)(this + 0x170) + 0x128))(*(long **)(this + 0x170),param_1);
  FUN_05476c50(awStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TowerDefendUpgradeUI::Draw(Sexy::Graphics*) */

void __thiscall TowerDefendUpgradeUI::Draw(TowerDefendUpgradeUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

