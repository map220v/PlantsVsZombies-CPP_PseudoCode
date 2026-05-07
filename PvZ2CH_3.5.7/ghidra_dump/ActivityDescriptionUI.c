// Class: ActivityDescriptionUI


/* ActivityDescriptionUI::~ActivityDescriptionUI() */

void __thiscall ActivityDescriptionUI::~ActivityDescriptionUI(ActivityDescriptionUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06a27d20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06a28048;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ActivityDescriptionUI::~ActivityDescriptionUI() */

void __thiscall ActivityDescriptionUI::~ActivityDescriptionUI(ActivityDescriptionUI *this)

{
  ~ActivityDescriptionUI(this);
  AK::FreeHook(this);
  return;
}


/* ActivityDescriptionUI::ButtonDepress(int) */

void __thiscall ActivityDescriptionUI::ButtonDepress(ActivityDescriptionUI *this,int param_1)

{
  if (param_1 != 0x4dd) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xe8));
  return;
}


/* non-virtual thunk to ActivityDescriptionUI::ButtonDepress(int) */

void __thiscall ActivityDescriptionUI::ButtonDepress(ActivityDescriptionUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDescriptionUI::ActivityDescriptionUI() */

void __thiscall ActivityDescriptionUI::ActivityDescriptionUI(ActivityDescriptionUI *this)

{
  undefined8 uVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a27d20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06a28048;
  FUN_05476574(this + 0xe0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0xe8),(DummyInit *)0x0);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xe8),(Delegate2 *)aDStack_38);
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
  *(undefined8 *)(this + 0x120) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDescriptionUI::InitView(std::wstring const&, std::wstring const&) */

void __thiscall
ActivityDescriptionUI::InitView(ActivityDescriptionUI *this,wstring *param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PVZ2UIButton *this_00;
  undefined8 uVar6;
  TextScollingWidget *pTVar7;
  code *pcVar8;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (ActivityDescriptionUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  thunk_FUN_05477b9c(this + 0xe0,param_2);
  if (*(long *)(this + 0x118) == 0) {
    pTVar7 = ::operator_new(0x108);
    TextScollingWidget::TextScollingWidget(pTVar7);
    *(TextScollingWidget **)(this + 0x118) = pTVar7;
    iVar4 = FUN_04fada68(500);
    iVar1 = FUN_04fada68(0x104);
    uVar5 = FUN_04fada68(0xfa);
    (**(code **)(*(long *)pTVar7 + 0x198))
              (pTVar7,(*(int *)(this + 0x50) - iVar4) / 2,(*(int *)(this + 0x54) - iVar1) / 2,iVar4,
               uVar5);
    TextScollingWidget::SetString
              (*(TextScollingWidget **)(this + 0x118),param_1,*(PrimeTypeface **)(this + 0x120));
    pTVar7 = *(TextScollingWidget **)(this + 0x118);
    Sexy::Color::Color((Color *)aIStack_40,0);
    TextScollingWidget::SetStringColor(pTVar7,(Color *)aIStack_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  }
  TodStringTranslate(L"[DIALOG_STRING_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x4dd,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba7b80,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba7bd0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar8 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_04fada68(0x78);
  iVar2 = FUN_04fada68(0x87);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_04fada68(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar1) / 2,iVar2 + iVar4 / 2,iVar1,iVar3)
  ;
  (*pcVar8)(this_00,aIStack_40);
  pcVar8 = *(code **)(*(long *)this_00 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(this_00,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDescriptionUI::InitView(std::wstring const&, std::wstring const&, std::wstring const&) */

void __thiscall
ActivityDescriptionUI::InitView
          (ActivityDescriptionUI *this,wstring *param_1,wstring *param_2,wstring *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PVZ2UIButton *this_00;
  undefined8 uVar6;
  TextScollingWidget *pTVar7;
  code *pcVar8;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (ActivityDescriptionUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  thunk_FUN_05477b9c(this + 0xe0,param_3);
  if (*(long *)(this + 0x118) == 0) {
    pTVar7 = ::operator_new(0x108);
    TextScollingWidget::TextScollingWidget(pTVar7);
    *(TextScollingWidget **)(this + 0x118) = pTVar7;
    iVar4 = FUN_04fada68(500);
    iVar1 = FUN_04fada68(0x104);
    uVar5 = FUN_04fada68(0xfa);
    (**(code **)(*(long *)pTVar7 + 0x198))
              (pTVar7,(*(int *)(this + 0x50) - iVar4) / 2,(*(int *)(this + 0x54) - iVar1) / 2,iVar4,
               uVar5);
    TextScollingWidget::SetString
              (*(TextScollingWidget **)(this + 0x118),param_1,*(PrimeTypeface **)(this + 0x120));
    TextScollingWidget::SetStringExtra
              (*(TextScollingWidget **)(this + 0x118),param_2,*(PrimeTypeface **)(this + 0x120));
    pTVar7 = *(TextScollingWidget **)(this + 0x118);
    Sexy::Color::Color((Color *)aIStack_40,0);
    TextScollingWidget::SetStringColor(pTVar7,(Color *)aIStack_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  }
  TodStringTranslate(L"[DIALOG_STRING_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x4dd,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba7b80,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba7bd0,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar8 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_04fada68(0x78);
  iVar2 = FUN_04fada68(0x87);
  iVar4 = *(int *)(this + 0x54);
  iVar3 = FUN_04fada68(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar1) / 2,iVar2 + iVar4 / 2,iVar1,iVar3)
  ;
  (*pcVar8)(this_00,aIStack_40);
  pcVar8 = *(code **)(*(long *)this_00 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(this_00,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityDescriptionUI::Draw(Sexy::Graphics*) */

void __thiscall ActivityDescriptionUI::Draw(ActivityDescriptionUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04fada68(600);
  iVar2 = FUN_04fada68(400);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar2);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7ae0);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  iVar1 = FUN_04fada68(600);
  iVar2 = FUN_04fada68(0x17c);
  iVar3 = FUN_04fada68(0x32);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar4,aIStack_18,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

