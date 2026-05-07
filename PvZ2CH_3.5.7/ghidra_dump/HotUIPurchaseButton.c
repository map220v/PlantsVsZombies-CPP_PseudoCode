// Class: HotUIPurchaseButton


/* HotUIPurchaseButton::~HotUIPurchaseButton() */

void __thiscall HotUIPurchaseButton::~HotUIPurchaseButton(HotUIPurchaseButton *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066709f0;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_06670d70;
  HotUIButton::~HotUIButton((HotUIButton *)this);
  return;
}


/* HotUIPurchaseButton::~HotUIPurchaseButton() */

void __thiscall HotUIPurchaseButton::~HotUIPurchaseButton(HotUIPurchaseButton *this)

{
  ~HotUIPurchaseButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPurchaseButton::StaticClassInit() */

void HotUIPurchaseButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPurchaseButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0364b6dc,0x290,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPurchaseButton::StaticGetClass() */

long * HotUIPurchaseButton::StaticGetClass(void)

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
  uVar2 = HotUIButton::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPurchaseButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPurchaseButton::HotUIPurchaseButton() */

void __thiscall HotUIPurchaseButton::HotUIPurchaseButton(HotUIPurchaseButton *this)

{
  HotUIButton::HotUIButton((HotUIButton *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066709f0;
  *(undefined ***)(this + 0x210) = &PTR_ButtonPress_06670d70;
  return;
}


/* HotUIPurchaseButton::StaticNew() */

HotUIPurchaseButton * HotUIPurchaseButton::StaticNew(void)

{
  HotUIPurchaseButton *this;
  
  this = ::operator_new(0x290);
  HotUIPurchaseButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPurchaseButton::ClearCostLabel() */

void __thiscall HotUIPurchaseButton::ClearCostLabel(HotUIPurchaseButton *this)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x238));
  Sexy::Insets::Insets(aIStack_18);
  HotUIButton::SetAdditionalContentsInset((HotUIButton *)this,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPurchaseButton::SetCostLabel(std::wstring const&) */

void __thiscall HotUIPurchaseButton::SetCostLabel(HotUIPurchaseButton *this,wstring *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HotUIZPSMeterProperties *pHVar6;
  PrimeTypeface *pPVar7;
  PVZ2UIButton *pPVar8;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x238));
  pHVar6 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  iVar2 = FUN_0364b1ac(*(undefined4 *)(pHVar6 + 0x1c0));
  iVar3 = FUN_0364b1ac(*(undefined4 *)(pHVar6 + 0x1c4));
  uVar1 = *(undefined4 *)(pHVar6 + 0x1c8);
  pPVar7 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  FUN_05477b24((Insets *)local_18,param_1);
  iVar4 = Sexy::PrimeTypeface::SizeString_Line(pPVar7,(Insets *)local_18);
  FUN_05476c50((Insets *)local_18);
  iVar5 = FUN_0364b1ac(uVar1);
  pPVar8 = *(PVZ2UIButton **)(this + 0x238);
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  iVar4 = FUN_0364b0a4(*(undefined4 *)(pPVar8 + 0x54));
  Sexy::Insets::Insets((Insets *)local_18,iVar2,iVar3,iVar5,iVar4);
  PVZ2UIButton::AddText(pPVar8,param_1,(Insets *)local_18,0);
  PVZ2UIButton::getContentsRect();
  local_18[0] = local_18[0] + iVar2 + iVar5;
  local_10 = local_10 - (iVar2 + iVar5);
  PVZ2UIButton::SetContentsRect(*(PVZ2UIButton **)(this + 0x238),(TRect *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

