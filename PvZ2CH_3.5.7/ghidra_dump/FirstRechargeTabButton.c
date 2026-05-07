// Class: FirstRechargeTabButton


/* FirstRechargeTabButton::~FirstRechargeTabButton() */

void __thiscall FirstRechargeTabButton::~FirstRechargeTabButton(FirstRechargeTabButton *this)

{
  *(undefined ***)(this + 0x198) = &PTR__FirstRechargeTabButton_069bf970;
  *(undefined ***)this = &PTR_GetClass_069bf610;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069bf998;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x328);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to FirstRechargeTabButton::~FirstRechargeTabButton() */

void __thiscall FirstRechargeTabButton::~FirstRechargeTabButton(FirstRechargeTabButton *this)

{
  ~FirstRechargeTabButton(this + -0x198);
  return;
}


/* FirstRechargeTabButton::~FirstRechargeTabButton() */

void __thiscall FirstRechargeTabButton::~FirstRechargeTabButton(FirstRechargeTabButton *this)

{
  ~FirstRechargeTabButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FirstRechargeTabButton::~FirstRechargeTabButton() */

void __thiscall FirstRechargeTabButton::~FirstRechargeTabButton(FirstRechargeTabButton *this)

{
  ~FirstRechargeTabButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeTabButton::FirstRechargeTabButton(int) */

void __thiscall
FirstRechargeTabButton::FirstRechargeTabButton(FirstRechargeTabButton *this,int param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)(this + 0x198) = &PTR__FirstRechargeTabButton_069bf970;
  *(undefined ***)this = &PTR_GetClass_069bf610;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069bf998;
  FUN_05476574(this + 0x328);
  *(int *)(this + 0x308) = param_1;
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x30c) = param_1 + -0x514;
  this[0x310] = (FirstRechargeTabButton)0x0;
  this[0x311] = (FirstRechargeTabButton)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeTabButton::InitView() */

void __thiscall FirstRechargeTabButton::InitView(FirstRechargeTabButton *this)

{
  char *pcVar1;
  undefined8 uVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_RECHARGEREWARD_TAB_BUTTON_%d",asStack_20,(ulong)*(uint *)(this + 0x30c))
  ;
  Sexy::StrFormat("IMAGE_UI_RECHARGEREWARD_TAB_BUTTON_DOWN_%d",asStack_18,
                  (ulong)*(uint *)(this + 0x30c));
  pcVar1 = (char *)FUN_0547429c(asStack_20);
  std::string::string(asStack_10,pcVar1);
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x318) = uVar2;
  std::string::~string(asStack_10);
  nop();
  pcVar1 = (char *)FUN_0547429c(asStack_18);
  std::string::string(asStack_10,pcVar1);
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 800) = uVar2;
  std::string::~string(asStack_10);
  nop();
  TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
  FUN_054766c8(this + 0x328,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeTabButton::Draw(Sexy::Graphics*) */

void __thiscall FirstRechargeTabButton::Draw(FirstRechargeTabButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  LotteryResultProgressBar *this_00;
  undefined8 local_38;
  undefined8 local_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0x310] == (FirstRechargeTabButton)0x0) {
    iVar2 = FUN_04dae330(3);
    Sexy::Insets::Insets
              ((Insets *)&local_18,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2);
    local_38 = local_18;
    local_30 = uStack_10;
  }
  this_00 = *(LotteryResultProgressBar **)(this + 0x318);
  if ((this_00 != (LotteryResultProgressBar *)0x0) && (*(Image **)(this + 800) != (Image *)0x0)) {
    pIVar5 = *(Image **)(this + 800);
    if (this[0x310] != (FirstRechargeTabButton)0x0) {
      pIVar5 = (Image *)this_00;
    }
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x318));
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)&local_38,(TRect *)&local_18);
  }
  if (this[0x311] != (FirstRechargeTabButton)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99828);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,(int)local_38,local_38._4_4_,(int)local_30,local_30._4_4_);
    iVar2 = (int)local_30;
    iVar3 = (int)local_30 / 2;
    iVar4 = FUN_04dae330(0x1e);
    iVar1 = ((iVar2 - iVar4) - iVar3) / 2;
    iVar2 = local_38._4_4_ + (local_30._4_4_ - iVar4) / 2;
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b997f0);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar4,iVar4);
    Sexy::Insets::Insets(aIStack_28,iVar1 + iVar4 * 2,local_38._4_4_,iVar3,local_30._4_4_);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    Sexy::Color::Color((Color *)&local_18,1);
    WriteWordInRect(param_1,this + 0x328,aIStack_28,uVar6,(Color *)&local_18,3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeTabButton::ButtonDepress(int) */

void __thiscall FirstRechargeTabButton::ButtonDepress(FirstRechargeTabButton *this,int param_1)

{
  if (*(int *)(this + 0x308) != param_1) {
    return;
  }
  this[0x310] = (FirstRechargeTabButton)0x1;
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::FirstRechargeButtonSelect,
             *(int *)(this + 0x30c));
  return;
}


/* non-virtual thunk to FirstRechargeTabButton::ButtonDepress(int) */

void __thiscall FirstRechargeTabButton::ButtonDepress(FirstRechargeTabButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

