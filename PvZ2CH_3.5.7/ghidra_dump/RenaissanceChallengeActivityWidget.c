// Class: RenaissanceChallengeActivityWidget


/* RenaissanceChallengeActivityWidget::~RenaissanceChallengeActivityWidget() */

void __thiscall
RenaissanceChallengeActivityWidget::~RenaissanceChallengeActivityWidget
          (RenaissanceChallengeActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06712f50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06713278;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  FUN_05476c50(this + 0x140);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RenaissanceChallengeActivityWidget::~RenaissanceChallengeActivityWidget() */

void __thiscall
RenaissanceChallengeActivityWidget::~RenaissanceChallengeActivityWidget
          (RenaissanceChallengeActivityWidget *this)

{
  ~RenaissanceChallengeActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall
RenaissanceChallengeActivityWidget::Resize(RenaissanceChallengeActivityWidget *this,TRect *param_1)

{
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  GetGameItemInfo(*(int *)(this + 0x118),0x7fffffff,0);
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::InitTimer() */

void __thiscall
RenaissanceChallengeActivityWidget::InitTimer(RenaissanceChallengeActivityWidget *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03aad07c(0x1e);
  iVar3 = FUN_03aad07c(0x12);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x130)),
             (float)(iVar3 + *(int *)(this + 0x134)));
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
/* RenaissanceChallengeActivityWidget::UpdateTimer() */

void __thiscall
RenaissanceChallengeActivityWidget::UpdateTimer(RenaissanceChallengeActivityWidget *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = LawnApp::GetRealServerTime(gLawnApp);
  iVar3 = TimeUtil::FormatTimeToTimeStamp(*(int *)(this + 0x120));
  iVar3 = iVar3 - iVar2;
  if (iVar3 < 0x15181) {
    pcVar4 = "%3dh%3dm";
    uVar5 = iVar3 / 0xe10;
    iVar3 = iVar3 % 0xe10;
    iVar2 = iVar3 / 0x3c + (iVar3 >> 0x1f);
  }
  else {
    pcVar4 = "%3dd%3dh";
    uVar5 = iVar3 / 0x15180;
    iVar3 = iVar3 % 0x15180;
    iVar2 = iVar3 / 0xe10 + (iVar3 >> 0x1f);
  }
  Sexy::StrFormat(pcVar4,asStack_18,(ulong)uVar5,(ulong)(uint)(iVar2 - (iVar3 >> 0x1f)));
  Sexy::ToWString(asStack_18);
  FUN_054766c8(this + 0x140,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x148));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeActivityWidget::Update() */

void __thiscall RenaissanceChallengeActivityWidget::Update(RenaissanceChallengeActivityWidget *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0xe4] == (RenaissanceChallengeActivityWidget)0x0) {
    return;
  }
  UpdateTimer(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::init() */

void __thiscall RenaissanceChallengeActivityWidget::init(RenaissanceChallengeActivityWidget *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  PVZ2UIButton *pPVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03aad07c(0x14);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03aad07c(0x87);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar2,*(int *)(this + 0x54) / 2,(iVar1 - iVar2) - iVar3,
             *(int *)(this + 0x54) / 2);
  *(undefined8 *)(this + 0xe8) = local_40;
  *(undefined8 *)(this + 0xf0) = uStack_38;
  iVar3 = FUN_03aad07c(0x82);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_03aad07c(8);
  iVar5 = FUN_03aad07c(0x6e);
  iVar6 = FUN_03aad07c(0x10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar2 - iVar3,iVar1 / 2 + iVar4,iVar5,iVar1 / 2 - iVar6);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  iVar2 = FUN_03aad07c(0x8f);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03aad07c(10);
  iVar4 = FUN_03aad07c(0x8c);
  iVar5 = FUN_03aad07c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0x130) = local_40;
  *(undefined8 *)(this + 0x138) = uStack_38;
  iVar2 = FUN_03aad07c(0x6e);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03aad07c(7);
  iVar4 = FUN_03aad07c(100);
  iVar5 = FUN_03aad07c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar1 - iVar2,iVar3,iVar4,iVar5);
  *(undefined8 *)(this + 0xf8) = local_40;
  *(undefined8 *)(this + 0x100) = uStack_38;
  lVar7 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar8 = TimeUtil::FormatTimeToTimeStamp(*(int *)(this + 0x11c));
  lVar9 = TimeUtil::FormatTimeToTimeStamp(*(int *)(this + 0x120));
  if ((lVar7 < lVar8 + -0x15180) || (lVar9 < lVar7)) {
    if (this[0xe4] == (RenaissanceChallengeActivityWidget)0x0) {
      FUN_05478178((Insets *)&local_40,L"[RENAISSANCE_CHALLENGE_UNLOCK]",auStack_80);
      TodReplaceNumberString((wstring *)&local_40,L"{NUM1}",(*(int *)(this + 0x11c) % 10000) / 100);
      FUN_05476c50((Insets *)&local_40);
      nop();
      TodReplaceNumberString(awStack_78,L"{NUM2}",*(int *)(this + 0x11c) % 100);
      FUN_054766c8(this + 0x140,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      FUN_05476c50(awStack_78);
      goto LAB_03aae094;
    }
  }
  else {
    this[0xe4] = (RenaissanceChallengeActivityWidget)0x1;
  }
  InitTimer(this);
  TodStringTranslate(L"[DIALOG_YES_PLAYED_PVZ]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,4,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar10;
  FUN_05476c50(awStack_78);
  pPVar10 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7518,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac7170,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x128) + 0x1a0))(*(long **)(this + 0x128),this + 0x108);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
LAB_03aae094:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RenaissanceChallengeActivityWidget::setData(SubActivityTimeData, int) */

void RenaissanceChallengeActivityWidget::setData
               (RenaissanceChallengeActivityWidget *param_1,undefined8 param_2,undefined4 param_3,
               undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  *(undefined4 *)(param_1 + 0xe0) = param_4;
  init(param_1);
  return;
}


/* RenaissanceChallengeActivityWidget::RenaissanceChallengeActivityWidget() */

void __thiscall
RenaissanceChallengeActivityWidget::RenaissanceChallengeActivityWidget
          (RenaissanceChallengeActivityWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  this[0xe4] = (RenaissanceChallengeActivityWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06712f50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06713278;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  *(undefined8 *)(this + 0x128) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  FUN_05476574(this + 0x140);
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::DrawTimer(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeActivityWidget::DrawTimer
          (RenaissanceChallengeActivityWidget *this,Graphics *param_1)

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
            (param_1,pIVar2,*(int *)(this + 0x130),*(int *)(this + 0x134),*(int *)(this + 0x138),
             *(int *)(this + 0x13c));
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x148));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x148),param_1);
  }
  uVar3 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x140,this + 0xf8,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeActivityWidget::ButtonDepress
          (RenaissanceChallengeActivityWidget *this,int param_1)

{
  int iVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  LevelOfTheDaySystem *pLVar2;
  string *psVar3;
  char *__s;
  wchar_t local_34 [3];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 4) goto LAB_03ab0aa0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_34[1] = 1;
  local_34[0] = L'⨊';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_34,local_34 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  pLVar2 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  LevelOfTheDaySystem::setCurLotdAcType(pLVar2,8);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
    __s = "birtha";
LAB_03ab0b78:
    std::string::string((string *)apStack_28,__s);
    CustomLevelSettingManager::SetLinkPhoneNumber(psVar3);
    std::string::~string((string *)apStack_28);
    nop();
  }
  else {
    if (iVar1 == 1) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthb";
      goto LAB_03ab0b78;
    }
    if (iVar1 == 2) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthc";
      goto LAB_03ab0b78;
    }
  }
  LawnApp::ShowLevelofDayEntrance(gLawnApp);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
LAB_03ab0aa0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RenaissanceChallengeActivityWidget::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeActivityWidget::ButtonDepress
          (RenaissanceChallengeActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidget::Draw(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeActivityWidget::Draw(RenaissanceChallengeActivityWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  wchar_t *pwVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    iVar1 = FUN_03aad07c(10);
    iVar2 = FUN_03aad07c(0x14);
    Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e98);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    if (this[0xe4] != (RenaissanceChallengeActivityWidget)0x0) {
      iVar1 = FUN_03aad07c(0xb);
      iVar2 = FUN_03aad07c(0x16);
      Sexy::Insets::Insets
                (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
                 *(int *)(this + 0x54) / 2);
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7448);
      Draw3SliceImage(param_1,aIStack_18,uVar5);
      pwVar7 = L"[RENAISSANCE_CHALLENGE_ACTIVITY_DESCRIPTION_1]";
LAB_03ab40b8:
      TodStringTranslate(pwVar7);
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,aIStack_28,this + 0xe8,uVar5,(Color *)aIStack_18,5,1);
      FUN_05476c50(aIStack_28);
      goto LAB_03ab3dc4;
    }
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_03aad07c(10);
    iVar2 = FUN_03aad07c(0x14);
    Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7248);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    if (this[0xe4] != (RenaissanceChallengeActivityWidget)0x0) {
      iVar1 = FUN_03aad07c(0xb);
      iVar2 = FUN_03aad07c(0x16);
      Sexy::Insets::Insets
                (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
                 *(int *)(this + 0x54) / 2);
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7448);
      Draw3SliceImage(param_1,aIStack_18,uVar5);
      TodStringTranslate(L"[RENAISSANCE_CHALLENGE_ACTIVITY_DESCRIPTION_2]");
      uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,aIStack_28,this + 0xe8,uVar5,aIStack_18,5,1);
      FUN_05476c50(aIStack_28);
      goto LAB_03ab3dc4;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_03aad07c(10);
    iVar2 = FUN_03aad07c(0x14);
    Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6f20);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    if (this[0xe4] != (RenaissanceChallengeActivityWidget)0x0) {
      iVar1 = FUN_03aad07c(0xb);
      iVar2 = FUN_03aad07c(0x16);
      Sexy::Insets::Insets
                (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
                 *(int *)(this + 0x54) / 2);
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7448);
      Draw3SliceImage(param_1,aIStack_18,uVar5);
      pwVar7 = L"[RENAISSANCE_CHALLENGE_ACTIVITY_DESCRIPTION_3]";
      goto LAB_03ab40b8;
    }
  }
  else {
LAB_03ab3dc4:
    if (this[0xe4] != (RenaissanceChallengeActivityWidget)0x0) {
      DrawTimer(this,param_1);
      goto LAB_03ab3fcc;
    }
  }
  iVar1 = FUN_03aad07c(10);
  iVar2 = FUN_03aad07c(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6ff0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7068);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = FUN_03aad07c(0x14);
  iVar3 = FUN_03aad07c(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1 - iVar2,(iVar1 - iVar3) / 2,iVar3,iVar3);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6fc8);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = FUN_03aad07c(100);
  iVar3 = FUN_03aad07c(0x46);
  iVar4 = FUN_03aad07c(0xa0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1 + iVar2,(iVar1 - iVar3) / 2,iVar4,iVar3);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = FUN_03aad07c(100);
  iVar3 = FUN_03aad07c(0x50);
  iVar4 = FUN_03aad07c(0xa0);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar2,(iVar1 - iVar3) / 2,iVar4,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x140,aIStack_28,uVar5,aIStack_18,5,1);
LAB_03ab3fcc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

