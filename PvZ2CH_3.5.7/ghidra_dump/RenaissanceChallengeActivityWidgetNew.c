// Class: RenaissanceChallengeActivityWidgetNew


/* RenaissanceChallengeActivityWidgetNew::~RenaissanceChallengeActivityWidgetNew() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::~RenaissanceChallengeActivityWidgetNew
          (RenaissanceChallengeActivityWidgetNew *this)

{
  *(undefined ***)this = &PTR_GetClass_06714310;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06714660;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x160);
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x128));
  FUN_05476c50(this + 0x110);
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* RenaissanceChallengeActivityWidgetNew::~RenaissanceChallengeActivityWidgetNew() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::~RenaissanceChallengeActivityWidgetNew
          (RenaissanceChallengeActivityWidgetNew *this)

{
  ~RenaissanceChallengeActivityWidgetNew(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidgetNew::InitTimer() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::InitTimer(RenaissanceChallengeActivityWidgetNew *this)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (EffectAnim_UIAnim *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03aad07c(0x19);
  iVar3 = FUN_03aad07c(0x12);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(iVar2 + *(int *)(this + 0x118)),
             (float)(iVar3 + *(int *)(this + 0x11c)));
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
/* RenaissanceChallengeActivityWidgetNew::UpdateTimer() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::UpdateTimer(RenaissanceChallengeActivityWidgetNew *this)

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
  iVar3 = TimeUtil::FormatTimeToTimeStamp(*(int *)(this + 0x10c));
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
  FUN_054766c8(this + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x128));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x128));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeActivityWidgetNew::Update() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::Update(RenaissanceChallengeActivityWidgetNew *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x100] != (RenaissanceChallengeActivityWidgetNew)0x0) {
    return;
  }
  UpdateTimer(this);
  return;
}


/* RenaissanceChallengeActivityWidgetNew::RenaissanceChallengeActivityWidgetNew() */

void __thiscall
RenaissanceChallengeActivityWidgetNew::RenaissanceChallengeActivityWidgetNew
          (RenaissanceChallengeActivityWidgetNew *this)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this,0,0);
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06714310;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06714660;
  this[0x100] = (RenaissanceChallengeActivityWidgetNew)0x1;
  FUN_05476574(this + 0x110);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x128));
  FUN_05476574(this + 0x160);
  this[0x59] = (RenaissanceChallengeActivityWidgetNew)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidgetNew::DrawTimer(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeActivityWidgetNew::DrawTimer
          (RenaissanceChallengeActivityWidgetNew *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  Image *pIVar3;
  undefined8 uVar4;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6e48);
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,*(int *)(this + 0x118),*(int *)(this + 0x11c),*(int *)(this + 0x120),
             *(int *)(this + 0x124));
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x128));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x128),param_1);
  }
  iVar2 = FUN_03aad07c(5);
  Sexy::Insets::Insets
            (aIStack_28,iVar2 + *(int *)(this + 0x118),*(int *)(this + 0x11c),*(int *)(this + 0x120)
             ,*(int *)(this + 0x124));
  uVar4 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar4,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidgetNew::Draw(Sexy::Graphics*) */

void __thiscall
RenaissanceChallengeActivityWidgetNew::Draw
          (RenaissanceChallengeActivityWidgetNew *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03aad07c(10);
  iVar2 = FUN_03aad07c(0x14);
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0x158),iVar1,0,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54));
  if (this[0x100] == (RenaissanceChallengeActivityWidgetNew)0x0) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = FUN_03aad07c(0x28);
    iVar3 = FUN_03aad07c(0x1e);
    iVar4 = FUN_03aad07c(10);
    Sexy::Insets::Insets
              (aIStack_28,iVar1 / 2 - iVar2,0,iVar1 / 2 + iVar3,iVar4 + *(int *)(this + 0x54) / 2);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x160,aIStack_28,uVar5,(Color *)aIStack_18,5,1);
    if (this[0x100] == (RenaissanceChallengeActivityWidgetNew)0x0) {
      DrawTimer(this,param_1);
      goto LAB_03aaf690;
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
  iVar1 = FUN_03aad07c(0x14);
  iVar2 = FUN_03aad07c(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,(*(int *)(this + 0x54) - iVar2) / 2,iVar2,iVar2);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac6fc8);
  iVar1 = FUN_03aad07c(0x78);
  iVar2 = FUN_03aad07c(0x46);
  iVar3 = FUN_03aad07c(0xa0);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,(*(int *)(this + 0x54) - iVar2) / 2,iVar3,iVar2);
  iVar1 = FUN_03aad07c(0x78);
  iVar2 = FUN_03aad07c(0x50);
  iVar3 = FUN_03aad07c(0xa0);
  Sexy::Insets::Insets(aIStack_28,iVar1,(*(int *)(this + 0x54) - iVar2) / 2,iVar3,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_24_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar5,aIStack_18,5,1);
LAB_03aaf690:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidgetNew::LoadData(SubActivityTimeData, int) */

void RenaissanceChallengeActivityWidgetNew::LoadData
               (RenaissanceChallengeActivityWidgetNew *param_1,undefined8 param_2,undefined4 param_3
               ,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  PVZ2UIButton *this;
  RenaissanceChallengeNewManager *pRVar11;
  undefined8 uVar12;
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  *(undefined8 *)(param_1 + 0x104) = param_2;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x10c) = param_3;
  *(undefined4 *)(param_1 + 0xfc) = param_4;
  iVar1 = FUN_03aad07c(5);
  iVar2 = FUN_03aad07c(0x6e);
  iVar3 = FUN_03aad07c(0x23);
  Sexy::Insets::Insets((Insets *)&local_40,0,iVar1,iVar2,iVar3);
  *(undefined8 *)(param_1 + 0x118) = local_40;
  *(undefined8 *)(param_1 + 0x120) = uStack_38;
  lVar8 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar9 = TimeUtil::FormatTimeToTimeStamp(*(int *)(param_1 + 0x108));
  lVar10 = TimeUtil::FormatTimeToTimeStamp(*(int *)(param_1 + 0x10c));
  if ((lVar8 < lVar9 + -0x15180) || (lVar10 < lVar8)) {
    if (param_1[0x100] != (RenaissanceChallengeActivityWidgetNew)0x0) {
      FUN_05478178((Insets *)&local_40,L"[RENAISSANCE_CHALLENGE_UNLOCK]",asStack_80);
      TodReplaceNumberString
                ((wstring *)&local_40,L"{NUM1}",(*(int *)(param_1 + 0x108) % 10000) / 100);
      FUN_05476c50((Insets *)&local_40);
      nop();
      TodReplaceNumberString(awStack_78,L"{NUM2}",*(int *)(param_1 + 0x108) % 100);
      FUN_054766c8(param_1 + 0x110,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      FUN_05476c50(awStack_78);
      pRVar11 = (RenaissanceChallengeNewManager *)
                Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
      uVar7 = RenaissanceChallengeNewManager::GetResourceId(pRVar11);
      iVar1 = *(int *)(param_1 + 0xfc);
      goto joined_r0x03ab1740;
    }
  }
  else {
    param_1[0x100] = (RenaissanceChallengeActivityWidgetNew)0x0;
  }
  InitTimer(param_1);
  TodStringTranslate(L"[DIALOG_YES_PLAYED_PVZ]");
  Sexy::Color::Color((Color *)&local_40,1);
  this = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this,4,(ButtonListener *)(param_1 + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac7518,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac7170,3);
  PVZ2UIButton::SetDialogStates(this,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  iVar3 = FUN_03aad07c(0x78);
  iVar1 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_03aad07c(0x32);
  iVar2 = *(int *)(param_1 + 0x54);
  uVar5 = FUN_03aad07c(100);
  uVar6 = FUN_03aad07c(0x2d);
  (**(code **)(*(long *)this + 0x198))(this,iVar1 - iVar3,iVar2 - iVar4,uVar5,uVar6);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  pRVar11 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
  uVar7 = RenaissanceChallengeNewManager::GetResourceId(pRVar11);
  iVar1 = *(int *)(param_1 + 0xfc);
joined_r0x03ab1740:
  if ((int)uVar7 < 1) {
    Sexy::StrFormat("IMAGE_UI_QUESTS_REN_CHALL_BACKGROUND_%d",(Insets *)&local_40,(ulong)(iVar1 + 1)
                   );
    uVar12 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(param_1 + 0x158) = uVar12;
    std::string::~string((string *)&local_40);
    Sexy::StrFormat("[RENAISSANCE_CHALLENGE_ACTIVITY_DESCRIPTION_%d]",asStack_80,
                    (ulong)(*(int *)(param_1 + 0xfc) + 1));
  }
  else {
    Sexy::StrFormat("IMAGE_UI_QUESTS_REN_CHALL_BACKGROUND_%d_%d",(Insets *)&local_40,
                    (ulong)(iVar1 + 1),(ulong)uVar7);
    uVar12 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(param_1 + 0x158) = uVar12;
    std::string::~string((string *)&local_40);
    Sexy::StrFormat("[RENAISSANCE_CHALLENGE_ACTIVITY_DESCRIPTION_%d_%d]",asStack_80,
                    (ulong)(*(int *)(param_1 + 0xfc) + 1),(ulong)uVar7);
  }
  Sexy::ToWString(asStack_80);
  TodStringTranslate(awStack_78);
  FUN_054766c8(param_1 + 0x160,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeActivityWidgetNew::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeActivityWidgetNew::ButtonDepress
          (RenaissanceChallengeActivityWidgetNew *this,int param_1)

{
  int iVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  LevelOfTheDaySystem *pLVar2;
  RenaissanceChallengeNewManager *this_02;
  string *psVar3;
  char *__s;
  wchar_t local_34 [3];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 4) goto LAB_03ab2868;
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
  this_02 = (RenaissanceChallengeNewManager *)
            Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstancePtr();
  iVar1 = RenaissanceChallengeNewManager::GetResourceId(this_02);
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0xfc);
    if (iVar1 == 0) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birtha";
    }
    else if (iVar1 == 1) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthb";
    }
    else {
      if (iVar1 != 2) goto LAB_03ab293c;
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthc";
    }
LAB_03ab2970:
    std::string::string((string *)apStack_28,__s);
    CustomLevelSettingManager::SetLinkPhoneNumber(psVar3);
    std::string::~string((string *)apStack_28);
    nop();
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(this + 0xfc);
    if (iVar1 == 0) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthd";
    }
    else if (iVar1 == 1) {
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthe";
    }
    else {
      if (iVar1 != 2) goto LAB_03ab293c;
      psVar3 = (string *)LevelOfTheDayMgr::GetInstance();
      __s = "birthf";
    }
    goto LAB_03ab2970;
  }
LAB_03ab293c:
  LawnApp::ShowLevelofDayEntrance(gLawnApp);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
LAB_03ab2868:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RenaissanceChallengeActivityWidgetNew::ButtonDepress(int) */

void __thiscall
RenaissanceChallengeActivityWidgetNew::ButtonDepress
          (RenaissanceChallengeActivityWidgetNew *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

