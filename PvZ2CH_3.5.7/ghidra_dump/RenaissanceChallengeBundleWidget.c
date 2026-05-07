// Class: RenaissanceChallengeBundleWidget


/* RenaissanceChallengeBundleWidget::onBuyGacha(int) */

void __thiscall
RenaissanceChallengeBundleWidget::onBuyGacha(RenaissanceChallengeBundleWidget *this,int param_1)

{
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  *(int *)(this + 0x100) = *(int *)(this + 0x100) + -1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::InitTimer() */

void __thiscall RenaissanceChallengeBundleWidget::InitTimer(RenaissanceChallengeBundleWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x130);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03aad07c(0x1e);
  iVar3 = FUN_03aad07c(0x12);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x108)),
             (float)(iVar3 + *(int *)(this + 0x10c)));
  std::string::string(asStack_10,"POPANIM_UI_QUESTS_DAILY_QUEST_CLOCK_ICON");
  EffectAnim_UIAnim::InitUIAnim(0x3f4ccccd,local_18,local_14,this_00,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"default");
    EffectAnim_UIAnim::PlayLoop(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::UpdateTimer() */

void __thiscall
RenaissanceChallengeBundleWidget::UpdateTimer(RenaissanceChallengeBundleWidget *this)

{
  char cVar1;
  float fVar2;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)TimeUtil::GetTimeCountdown(1,-1);
  Sexy::StrFormat("%3dh%3dm",asStack_18,(long)fVar2 / 0xe10,((long)fVar2 % 0xe10) / 0x3c);
  Sexy::ToWString(asStack_18);
  FUN_054766c8(this + 0x118,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x130));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x130));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeBundleWidget::Update() */

void __thiscall RenaissanceChallengeBundleWidget::Update(RenaissanceChallengeBundleWidget *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeBundleWidget::ButtonDepress(RenaissanceChallengeBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  long lVar5;
  char *__s;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 200) {
    if (*(int *)(this + 0x100) < 1) {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[FIGHT_ZODIAC_LIMIT]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(this_00,pIVar4);
        std::string::~string(asStack_10);
        nop();
        lVar5 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar5 + 0xd8,auStack_18);
        FUN_05476c50(auStack_18);
        FUN_05476c50(awStack_20);
        FUN_05476c50(awStack_28);
      }
    }
    else {
      iVar1 = *(int *)(this + 0xe0);
      if (iVar1 == 0) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear1");
        PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        if (iVar1 == 1) {
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear6";
        }
        else if (iVar1 == 2) {
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear30";
        }
        else {
          if (iVar1 != 3) goto LAB_03aaeaec;
          p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar3 = (PurchaseBroker *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_rightmost(p_Var2);
          __s = "com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear68";
        }
        std::string::string(asStack_10,__s);
        PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
      }
    }
  }
LAB_03aaeaec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RenaissanceChallengeBundleWidget::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeBundleWidget::ButtonDepress(RenaissanceChallengeBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::DrawTimer(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeBundleWidget::DrawTimer
          (RenaissanceChallengeBundleWidget *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  undefined8 uVar3;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7040);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,*(int *)(this + 0x108),*(int *)(this + 0x10c),*(int *)(this + 0x110),
             *(int *)(this + 0x114));
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x130));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x130),param_1);
  }
  uVar3 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x118,this + 0x120,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeBundleWidget::RenaissanceChallengeBundleWidget() */

void __thiscall
RenaissanceChallengeBundleWidget::RenaissanceChallengeBundleWidget
          (RenaissanceChallengeBundleWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_067132c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067135e8;
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  FUN_05476574(this + 0x118);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x130));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RenaissanceChallengeBundleWidget,void(RenaissanceChallengeBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyRenaiEgg,&local_40);
  return;
}


/* RenaissanceChallengeBundleWidget::~RenaissanceChallengeBundleWidget() */

void __thiscall
RenaissanceChallengeBundleWidget::~RenaissanceChallengeBundleWidget
          (RenaissanceChallengeBundleWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067135e8;
  *(undefined ***)this = &PTR_GetClass_067132c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x130));
  FUN_05476c50(this + 0x118);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RenaissanceChallengeBundleWidget::~RenaissanceChallengeBundleWidget() */

void __thiscall
RenaissanceChallengeBundleWidget::~RenaissanceChallengeBundleWidget
          (RenaissanceChallengeBundleWidget *this)

{
  ~RenaissanceChallengeBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::initData(EggRechargeBundleData const&) */

void __thiscall
RenaissanceChallengeBundleWidget::initData
          (RenaissanceChallengeBundleWidget *this,EggRechargeBundleData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  PVZ2UIButton *this_00;
  RenaissanceChallengeNewManager *this_01;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (RenaissanceChallengeBundleWidget)0x0;
  EggRechargeBundleData::operator=((EggRechargeBundleData *)(this + 0xe0),param_1);
  iVar1 = FUN_03aad07c(0x85);
  iVar5 = *(int *)(this + 0x50);
  iVar2 = FUN_03aad07c(0x3c);
  iVar3 = FUN_03aad07c(0x8c);
  iVar4 = FUN_03aad07c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 - iVar1,iVar2,iVar3,iVar4);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar1 = FUN_03aad07c(100);
  iVar5 = *(int *)(this + 0x50);
  iVar2 = FUN_03aad07c(0x39);
  iVar3 = FUN_03aad07c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 - iVar1,iVar2,iVar1,iVar3);
  *(undefined8 *)(this + 0x120) = local_40;
  *(undefined8 *)(this + 0x128) = uStack_38;
  InitTimer(this);
  uVar10 = 0;
  while( true ) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar9 = FUN_03aac1d0(uVar12,*(undefined8 *)(param_1 + 0x10));
    if (uVar9 <= uVar10) break;
    piVar7 = (int *)FUN_03aac1e4(uVar12,uVar10);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],true);
    pcVar11 = *(code **)(*plVar8 + 0x1a0);
    iVar5 = FUN_03aad07c(0x1e);
    iVar1 = FUN_03aad07c(0x46);
    iVar2 = FUN_03aad07c(0xfa);
    iVar3 = FUN_03aad07c(0x32);
    Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar1 * (int)uVar10,iVar2,iVar3,iVar3);
    (*pcVar11)(plVar8,(Insets *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,plVar8);
    uVar10 = uVar10 + 1;
  }
  iVar1 = *(int *)(this + 0xe0);
  iVar5 = 1;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar5 = 6;
    }
    else if (iVar1 == 2) {
      iVar5 = 0x1e;
    }
    else {
      iVar5 = 0x44;
      if (iVar1 != 3) {
        iVar5 = -1;
      }
    }
  }
  TodStringTranslate(L"[PLANTTRIAL_BUY_BUTTON_NAME_1]");
  TodReplaceNumberString(awStack_80,L"{NUMBER}",iVar5);
  Sexy::Color::Color((Color *)&local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,200,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_80);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7198,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac6ef8,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  pcVar11 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar1 = FUN_03aad07c(0x1e);
  iVar2 = FUN_03aad07c(0x136);
  iVar3 = FUN_03aad07c(0x3c);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_03aad07c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar5 - iVar3,iVar4);
  (*pcVar11)(this_00,(Insets *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
  uVar6 = RenaissanceChallengeNewManager::GetResourceId(this_01);
  if ((int)uVar6 < 1) {
    Sexy::StrFormat("IMAGE_UI_QUESTS_REN_CHALL_EGG_%d",(Insets *)&local_40,
                    (ulong)*(uint *)(this + 0xe0));
  }
  else {
    Sexy::StrFormat("IMAGE_UI_QUESTS_REN_CHALL_EGG_%d_%d",(Insets *)&local_40,
                    (ulong)*(uint *)(this + 0xe0),(ulong)uVar6);
  }
  uVar12 = StringHelper::ToImage((string *)&local_40,false);
  *(undefined8 *)(this + 0x160) = uVar12;
  std::string::~string((string *)&local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeBundleWidget::Draw(RenaissanceChallengeBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  long lVar7;
  Image *local_60;
  int local_58;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac71c8);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 == 0) {
    local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
    local_58 = *(int *)(this + 0x50);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
    local_58 = local_58 - *(int *)(lVar7 + 0x38);
    iVar1 = FUN_03aad07c(7);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
    iVar2 = *(int *)(lVar7 + 0x38);
  }
  else {
    if (iVar2 == 1) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac71f8;
    }
    else if (iVar2 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac72a0;
    }
    else {
      if (iVar2 != 3) goto LAB_03ab4308;
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac73f0;
    }
    local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    local_58 = *(int *)(this + 0x50);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
    local_58 = local_58 - *(int *)(lVar7 + 0x38);
    iVar1 = FUN_03aad07c(7);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
    iVar2 = *(int *)(lVar7 + 0x38);
  }
  local_58 = local_58 / 2;
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e20);
  Sexy::Graphics::DrawImage(param_1,local_60,local_58,iVar1,iVar2,*(int *)(lVar7 + 0x3c));
LAB_03ab4308:
  pIVar5 = *(Image **)(this + 0x160);
  if (pIVar5 != (Image *)0x0) {
    iVar2 = *(int *)(pIVar5 + 0x38);
    iVar1 = FUN_03aad07c(0x6e);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,(*(int *)(this + 0x50) - iVar2) / 2,iVar1,iVar2,
               *(int *)(pIVar5 + 0x3c));
  }
  TodStringTranslate(L"[SECRET_MIDDLE_STR]");
  iVar2 = FUN_03aad07c(0xd2);
  iVar1 = FUN_03aad07c(0x24);
  Sexy::Insets::Insets(aIStack_28,0,iVar2,*(int *)(this + 0x50),iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[PLANTBUNDLE_LIMITED_BUY]");
  TodReplaceNumberString(awStack_38,L"{NUMBER}",*(int *)(this + 0x100));
  iVar1 = FUN_03aad07c(10);
  iVar3 = FUN_03aad07c(0x32);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = FUN_03aad07c(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2 - iVar3,*(int *)(this + 0x50) - iVar4,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0,0x45);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  DrawTimer(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

