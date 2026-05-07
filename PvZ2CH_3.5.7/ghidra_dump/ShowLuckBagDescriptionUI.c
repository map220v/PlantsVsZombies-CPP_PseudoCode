// Class: ShowLuckBagDescriptionUI


/* ShowLuckBagDescriptionUI::~ShowLuckBagDescriptionUI() */

void __thiscall ShowLuckBagDescriptionUI::~ShowLuckBagDescriptionUI(ShowLuckBagDescriptionUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06717ec0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067181e8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShowLuckBagDescriptionUI::~ShowLuckBagDescriptionUI() */

void __thiscall ShowLuckBagDescriptionUI::~ShowLuckBagDescriptionUI(ShowLuckBagDescriptionUI *this)

{
  ~ShowLuckBagDescriptionUI(this);
  AK::FreeHook(this);
  return;
}


/* ShowLuckBagDescriptionUI::ShowLuckBagDescriptionUI() */

void __thiscall ShowLuckBagDescriptionUI::ShowLuckBagDescriptionUI(ShowLuckBagDescriptionUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06717ec0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067181e8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowLuckBagDescriptionUI::InitView() */

void __thiscall ShowLuckBagDescriptionUI::InitView(ShowLuckBagDescriptionUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  code *pcVar6;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (ShowLuckBagDescriptionUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  TodStringTranslate(L"[DIALOG_STRING_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x74,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7aa8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac7e48,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar2 = FUN_03abb658(0x78);
  iVar3 = FUN_03abb658(0x87);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_03abb658(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3 + iVar1 / 2,iVar2,iVar4)
  ;
  (*pcVar6)(this_00,aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar6)(this_00,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowLuckBagDescriptionUI::ButtonDepress(int) */

ShowLuckBagDescriptionUI * __thiscall
ShowLuckBagDescriptionUI::ButtonDepress(ShowLuckBagDescriptionUI *this,int param_1)

{
  InvitationLotteryPanel *this_00;
  ShowLuckBagDescriptionUI *pSVar1;
  
  if ((param_1 == 0x74) &&
     (this_00 = (InvitationLotteryPanel *)UISingletonDialog<UILuckBag>::GetSingletonPtr(),
     this = (ShowLuckBagDescriptionUI *)0x0, this_00 != (InvitationLotteryPanel *)0x0)) {
    pSVar1 = (ShowLuckBagDescriptionUI *)InvitationLotteryPanel::CloseBonusUI(this_00);
    return pSVar1;
  }
  return this;
}


/* non-virtual thunk to ShowLuckBagDescriptionUI::ButtonDepress(int) */

void __thiscall ShowLuckBagDescriptionUI::ButtonDepress(ShowLuckBagDescriptionUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowLuckBagDescriptionUI::Draw(Sexy::Graphics*) */

void __thiscall ShowLuckBagDescriptionUI::Draw(ShowLuckBagDescriptionUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03abb658(600);
  iVar2 = FUN_03abb658(400);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar2);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7e20);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  TodStringTranslate(L"[LUCKBAG_DESCRIPTION]");
  iVar1 = FUN_03abb658(600);
  iVar2 = FUN_03abb658(0x17c);
  iVar3 = FUN_03abb658(0x32);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LUCKBAG_DESCRIPTION_CONTENT]");
  iVar1 = FUN_03abb658(500);
  iVar2 = FUN_03abb658(0x104);
  iVar3 = FUN_03abb658(0xfa);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

