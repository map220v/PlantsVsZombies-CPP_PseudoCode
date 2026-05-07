// Class: PartyAssistWishingPoolSelectItem


/* PartyAssistWishingPoolSelectItem::SetSelect(bool) */

void __thiscall
PartyAssistWishingPoolSelectItem::SetSelect(PartyAssistWishingPoolSelectItem *this,bool param_1)

{
  long *plVar1;
  
  this[0xe9] = (PartyAssistWishingPoolSelectItem)param_1;
  plVar1 = *(long **)(this + 0xf8);
  if (!param_1) {
    (**(code **)(*plVar1 + 0x158))(plVar1);
    return;
  }
  (**(code **)(*plVar1 + 0x158))(plVar1,1);
  return;
}


/* PartyAssistWishingPoolSelectItem::~PartyAssistWishingPoolSelectItem() */

void __thiscall
PartyAssistWishingPoolSelectItem::~PartyAssistWishingPoolSelectItem
          (PartyAssistWishingPoolSelectItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069f0fd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f12f0;
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PartyAssistWishingPoolSelectItem::~PartyAssistWishingPoolSelectItem() */

void __thiscall
PartyAssistWishingPoolSelectItem::~PartyAssistWishingPoolSelectItem
          (PartyAssistWishingPoolSelectItem *this)

{
  ~PartyAssistWishingPoolSelectItem(this);
  AK::FreeHook(this);
  return;
}


/* PartyAssistWishingPoolSelectItem::PartyAssistWishingPoolSelectItem() */

void __thiscall
PartyAssistWishingPoolSelectItem::PartyAssistWishingPoolSelectItem
          (PartyAssistWishingPoolSelectItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069f0fd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f12f0;
  FUN_05476574(this + 0x100);
  *(undefined8 *)(this + 0x108) = 0;
  FUN_054772c4(this + 0x100,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistWishingPoolSelectItem::InitView(PartyAssistWishingPoolSelectLine*, int,
   PartyAssistWishBonusInfo) */

void PartyAssistWishingPoolSelectItem::InitView
               (long *param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  long *plVar2;
  UIWidgetImage *this;
  wchar_t *pwVar3;
  UIWidgetText *this_00;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  int local_60;
  uint uStack_5c;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38 [10];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_60 = (int)param_4;
  uStack_5c = (uint)((ulong)param_4 >> 0x20);
  *(undefined4 *)((long)param_1 + 0xe4) = param_3;
  param_1[0x1e] = param_2;
  *(bool *)(param_1 + 0x1d) = param_5 == 0;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  plVar2 = (long *)UIRewardFrame::CreateUIRewardFrame(local_60,uStack_5c,true);
  (**(code **)(*plVar2 + 0x198))(plVar2,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  lVar5 = *param_1;
  *(undefined1 *)((long)plVar2 + 0x6d) = 0;
  (**(code **)(lVar5 + 0x60))(param_1,plVar2);
  std::string::string((string *)local_38,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  this = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  lVar5 = *param_1;
  this[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar5 + 0x60))(param_1,this);
  if ((char)param_1[0x1d] == '\0') {
    pwVar3 = L"[PARTY_ASSIST_WISHING_POOL_GOT]";
  }
  else {
    pwVar3 = L"[LUCKBAG_SELECT]";
  }
  TodStringTranslate(pwVar3);
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,(wstring *)local_38);
  FUN_05476c50((string *)local_38);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,(int)param_1[10],*(undefined4 *)((long)param_1 + 0x54));
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  FUN_04ea1d80(this_00 + 0xe8,uVar4);
  FUN_04ea28e4(this_00 + 0xe0);
  pcVar6 = *(code **)(*(long *)this_00 + 0x170);
  Sexy::Color::Color((Color *)local_38,1);
  (*pcVar6)(this_00,0,(string *)local_38);
  lVar5 = *(long *)this;
  this_00[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar5 + 0x60))(this,this_00);
  lVar5 = *(long *)this;
  param_1[0x1f] = (long)this;
  (**(code **)(lVar5 + 0x158))(this,*(byte *)(param_1 + 0x1d) ^ 1);
  GetGameItemInfo(local_60,0x7fffffff,0);
  FUN_05478178(auStack_48,&DAT_056f11a8,auStack_40);
  nop();
  if (local_38[0] != 0) {
    param_1 = param_1 + 0x20;
    cVar1 = FUN_054765e8(param_1);
    if ((cVar1 != '\0') && (thunk_FUN_05477b9c(param_1,auStack_10), 0 < (int)uStack_5c)) {
      Sexy::StrFormat(L"x%d",auStack_40,(ulong)uStack_5c);
      thunk_FUN_05477668(param_1,auStack_40);
      FUN_05476c50(auStack_40);
    }
  }
  FUN_05476c50(auStack_48);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyAssistWishingPoolSelectItem::TouchEnded(Sexy::Touch const&) */

void __thiscall
PartyAssistWishingPoolSelectItem::TouchEnded(PartyAssistWishingPoolSelectItem *this,Touch *param_1)

{
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (PartyAssistWishingPoolSelectItem)0x0)) {
    PartyAssistWishingPoolSelectLine::SelectItem
              (*(PartyAssistWishingPoolSelectLine **)(this + 0xf0),*(int *)(this + 0xe4));
  }
  if (*(long *)(this + 0x108) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x108));
    *(undefined8 *)(this + 0x108) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistWishingPoolSelectItem::TouchBegan(Sexy::Touch const&) */

void __thiscall
PartyAssistWishingPoolSelectItem::TouchBegan(PartyAssistWishingPoolSelectItem *this,Touch *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  StoneLotteryItemTipUI *this_02;
  code *pcVar5;
  long lVar6;
  int iVar7;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  pcVar5 = *(code **)(*(long *)this + 0xd0);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = (int)*(undefined8 *)param_1;
  (*pcVar5)(&local_20);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1b88);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar7 = (int)((float)iVar2 + (float)iVar2);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1b88);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_04ea3948(5);
  Sexy::Insets::Insets
            (aIStack_18,local_20 + (iVar2 - iVar7) / 2,
             (local_1c - (int)((float)iVar3 * 0.5)) + iVar4,iVar7,(int)((float)iVar3 * 0.5));
  lVar6 = *(long *)(this + 0x108);
  if (lVar6 == 0) {
    this_02 = ::operator_new(0xe8);
    memset(this_02,0,0xe8);
    StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_02);
    uVar1 = *(uint *)(this_02 + 0x60);
    *(StoneLotteryItemTipUI **)(this + 0x108) = this_02;
    *(uint *)(this_02 + 0x60) = uVar1 | 0x10;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_02);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x108));
    lVar6 = *(long *)(this + 0x108);
  }
  PuzzleTip::SetTip(lVar6,this + 0x100);
  (**(code **)(**(long **)(this + 0x108) + 0x1a0))(*(long **)(this + 0x108),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

