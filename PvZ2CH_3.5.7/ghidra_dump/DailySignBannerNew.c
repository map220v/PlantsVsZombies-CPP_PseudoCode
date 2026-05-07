// Class: DailySignBannerNew


/* DailySignBannerNew::~DailySignBannerNew() */

void __thiscall DailySignBannerNew::~DailySignBannerNew(DailySignBannerNew *this)

{
  *(undefined ***)this = &PTR_GetClass_066d9570;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d9898;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DailySignBannerNew::~DailySignBannerNew() */

void __thiscall DailySignBannerNew::~DailySignBannerNew(DailySignBannerNew *this)

{
  ~DailySignBannerNew(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBannerNew::ButtonDepress(int) */

void __thiscall DailySignBannerNew::ButtonDepress(DailySignBannerNew *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar1;
  NetworkMgr *this_02;
  long *plVar2;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xe0) == param_1) && (this[0xf8] == (DailySignBannerNew)0x0)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_14 = PlayerInfo::GetNumGems(this_01,false);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
    TGALogMgr::LogSegments(pTVar1,0x2740,1,asStack_10);
    std::string::~string(asStack_10);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    TGALogMgr::LogSegments(pTVar1,0x2740,2,asStack_10);
    std::string::~string(asStack_10);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined4 *)(this + 0xe0));
    this[0xf8] = (DailySignBannerNew)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignBannerNew::ButtonDepress(int) */

void __thiscall DailySignBannerNew::ButtonDepress(DailySignBannerNew *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBannerNew::UpdateUI(bool, bool) */

void __thiscall DailySignBannerNew::UpdateUI(DailySignBannerNew *this,bool param_1,bool param_2)

{
  long *plVar1;
  Image *pIVar2;
  long lVar3;
  UIWidgetImage *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  this[0xfa] = (DailySignBannerNew)param_2;
  this[0xf9] = (DailySignBannerNew)param_1;
  local_8 = ___stack_chk_guard;
  if (param_2) {
    pUVar4 = *(UIWidgetImage **)(this + 0xf0);
    if (pUVar4 == (UIWidgetImage *)0x0) {
      pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdcd0);
      pUVar4 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar4,pIVar2);
      lVar3 = *(long *)pUVar4;
      *(UIWidgetImage **)(this + 0xf0) = pUVar4;
      (**(code **)(lVar3 + 0x1a0))(pUVar4,this + 0xfc);
      PuzzleTip::SetDrawJustification(*(PuzzleTip **)(this + 0xf0),1);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
    }
    else {
      std::string::string(asStack_10,"IMAGE_UI_GENERIC_CHECK_MARK_SM");
      UIWidgetImage::SetImage(pUVar4,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),1);
    plVar1 = *(long **)(this + 0xe8);
  }
  else if (param_1) {
    plVar1 = *(long **)(this + 0xe8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
      (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),param_2);
    }
    plVar1 = *(long **)(this + 0xf0);
  }
  else {
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 == (long *)0x0) {
      pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abde08);
      pUVar4 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar4,pIVar2);
      lVar3 = *(long *)pUVar4;
      *(UIWidgetImage **)(this + 0xf0) = pUVar4;
      (**(code **)(lVar3 + 0x1a0))(pUVar4,this + 0xfc);
      PuzzleTip::SetDrawJustification(*(PuzzleTip **)(this + 0xf0),1);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
      plVar1 = *(long **)(this + 0xf0);
    }
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    plVar1 = *(long **)(this + 0xe8);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignBannerNew::onGotReward(bool) */

void __thiscall DailySignBannerNew::onGotReward(DailySignBannerNew *this,bool param_1)

{
  if ((this[0xf8] != (DailySignBannerNew)0x0) && (this[0xf8] = (DailySignBannerNew)0x0, param_1)) {
    UpdateUI(this,false,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBannerNew::Draw(Sexy::Graphics*) */

void __thiscall DailySignBannerNew::Draw(DailySignBannerNew *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0xf9] != (DailySignBannerNew)0x0) && (this[0xfa] == (DailySignBannerNew)0x0)) {
    iVar1 = FUN_039794f8(6);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0xfc) - iVar1,*(int *)(this + 0x100) - iVar1,
               iVar1 * 2 + *(int *)(this + 0x104),iVar1 * 2 + *(int *)(this + 0x108));
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abde58);
    Draw9SliceImage(param_1,aIStack_18,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBannerNew::DailySignBannerNew(int, bool, bool, S2C_DailySignContent const&,
   Sexy::TRect<int>) */

void __thiscall
DailySignBannerNew::DailySignBannerNew
          (DailySignBannerNew *this,uint param_1,DailySignBannerNew param_2,
          DailySignBannerNew param_3,int *param_4,TRect *param_6)

{
  Insets *this_00;
  undefined *puVar1;
  int iVar2;
  PVZ2UIButton *this_01;
  UIWidgetText *pUVar3;
  undefined8 uVar4;
  Image *pIVar5;
  UIWidgetImage *pUVar6;
  UIRewardFrame *pUVar7;
  Widget *pWVar8;
  long lVar9;
  int iVar10;
  wstring *pwVar11;
  code *pcVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (Insets *)(this + 0xfc);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(uint *)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_066d9570;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d9898;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (DailySignBannerNew)0x0;
  this[0xf9] = param_2;
  this[0xfa] = param_3;
  Sexy::Insets::Insets(this_00);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_6);
  Sexy::OutputDebugStrF
            ((wchar_t *)"DailySignBannerNew canGot : %d hasGot : %d",(ulong)(byte)param_2,
             (ulong)(byte)param_3);
  iVar2 = FUN_039794f8(5);
  iVar10 = *(int *)(this + 0x50) + iVar2 * -2;
  Sexy::Insets::Insets((Insets *)&local_20,iVar2,iVar2,iVar10,iVar10);
  iVar2 = *param_4;
  *(undefined8 *)this_00 = local_20;
  *(undefined8 *)(this + 0x104) = uStack_18;
  if (iVar2 == 0xbc0) {
    std::string::string((string *)&local_20,"gem");
    pUVar7 = ::operator_new(0x148);
    iVar10 = param_4[1];
    UIRewardFrame::UIRewardFrame(pUVar7,1,(Insets *)&local_20,iVar10,1);
    std::string::~string((string *)&local_20);
    nop();
    (**(code **)(*(long *)pUVar7 + 0x1a0))(pUVar7,this_00);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pUVar7);
  }
  if (param_3 == (DailySignBannerNew)0x0) {
    if (param_2 == (DailySignBannerNew)0x0) {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abde08);
      pUVar6 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar6,pIVar5);
      lVar9 = *(long *)pUVar6;
      *(UIWidgetImage **)(this + 0xf0) = pUVar6;
      (**(code **)(lVar9 + 0x1a0))(pUVar6,this_00);
      PuzzleTip::SetDrawJustification(*(PuzzleTip **)(this + 0xf0),1);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
    }
    FUN_05478178(awStack_28,&DAT_056f11a8,awStack_30);
    Sexy::Color::Color((Color *)&local_20,1);
    this_01 = ::operator_new(0x300);
    pwVar11 = awStack_28;
    PVZ2UIButton::PVZ2UIButton
              (this_01,param_1,(ButtonListener *)(this + 0xd8),awStack_28,(Color *)&local_20);
    iVar10 = (int)pwVar11;
    *(PVZ2UIButton **)(this + 0xe8) = this_01;
    FUN_05476c50(awStack_28);
    nop();
    (**(code **)(**(long **)(this + 0xe8) + 0x1a0))(*(long **)(this + 0xe8),this_00);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),param_2);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),(byte)param_2 ^ 1);
    pWVar8 = *(Widget **)(this + 0xe8);
    pWVar8[0x59] = (Widget)0x0;
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar8);
  }
  else {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdcd0);
    pUVar6 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(pUVar6,pIVar5);
    lVar9 = *(long *)pUVar6;
    *(UIWidgetImage **)(this + 0xf0) = pUVar6;
    (**(code **)(lVar9 + 0x1a0))(pUVar6,this_00);
    PuzzleTip::SetDrawJustification(*(PuzzleTip **)(this + 0xf0),1);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  }
  std::string::string((string *)&local_20,"[ACTIVITY_NEW_PIGGY_BANK_LOGIN_TEXT]");
  StringHelper::ToStringValue((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"[ARBORDAY_PRESENT_PRICE_DESC]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_20,(string *)&DAT_056fbd78,(wchar_t *)(ulong)param_1,iVar10);
  std::string::~string((string *)&local_20);
  nop();
  pUVar3 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar3,awStack_30);
  iVar2 = FUN_039794f8(0xf);
  (**(code **)(*(long *)pUVar3 + 0x198))
            (pUVar3,0,iVar2 + *(int *)(this + 0x108),*(undefined4 *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  FUN_0397907c(pUVar3 + 0xe8,uVar4);
  FUN_03979308(pUVar3 + 0xe0);
  pcVar12 = *(code **)(*(long *)pUVar3 + 0x170);
  Sexy::Color::Color((Color *)&local_20,1);
  (*pcVar12)(pUVar3,0,(Insets *)&local_20);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pUVar3);
  pUVar3 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar3,awStack_28);
  iVar2 = FUN_039794f8(0xf);
  (**(code **)(*(long *)pUVar3 + 0x198))
            (pUVar3,0,iVar2 + *(int *)(this + 0x108),*(undefined4 *)(this + 0x50),iVar2);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  FUN_0397907c(pUVar3 + 0xe8,uVar4);
  FUN_03979308(pUVar3 + 0xe0);
  pcVar12 = *(code **)(*(long *)pUVar3 + 0x170);
  Sexy::Color::Color((Color *)&local_20,5);
  (*pcVar12)(pUVar3,0,(Insets *)&local_20);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pUVar3);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGotReward);
  local_60 = local_20;
  uStack_58 = uStack_18;
  local_50 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<DailySignBannerNew,void(DailySignBannerNew::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyPiggyBankRewardGot,&local_60);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

