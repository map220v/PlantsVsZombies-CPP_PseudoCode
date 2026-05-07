// Class: RechargePlantItem


/* RechargePlantItem::GetWidth() */

void __thiscall RechargePlantItem::GetWidth(RechargePlantItem *this)

{
  if (*(LotteryResultProgressBar **)(this + 800) != (LotteryResultProgressBar *)0x0) {
    LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 800));
    return;
  }
  FUN_049dd124(100);
  return;
}


/* RechargePlantItem::GetHeight() */

void __thiscall RechargePlantItem::GetHeight(RechargePlantItem *this)

{
  if (*(SalesProgressBar **)(this + 800) != (SalesProgressBar *)0x0) {
    SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 800));
    return;
  }
  FUN_049dd124(0x3c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::DrawIcon(Sexy::Graphics*, int, int) */

void __thiscall
RechargePlantItem::DrawIcon(RechargePlantItem *this,Graphics *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::PushState(param_1);
  if (this[0x308] == (RechargePlantItem)0x0) {
    iVar1 = FUN_049dd124(0x14);
    iVar2 = *(int *)(this + 0x4c);
    iVar1 = iVar1 + *(int *)(this + 0x48);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xff,0x7f);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  }
  else {
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x4c);
  }
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 800),param_2 + iVar1,param_3 + iVar2,*(int *)(this + 0x50),
             *(int *)(this + 0x54));
  Sexy::Graphics::PopState(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargePlantItem::SetSelect(bool) */

void __thiscall RechargePlantItem::SetSelect(RechargePlantItem *this,bool param_1)

{
  if (this[0x308] != (RechargePlantItem)param_1) {
    this[0x308] = (RechargePlantItem)param_1;
    nop();
    return;
  }
  return;
}


/* RechargePlantItem::~RechargePlantItem() */

void __thiscall RechargePlantItem::~RechargePlantItem(RechargePlantItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06929c20;
  *(undefined ***)(this + 0x198) = &PTR__RechargePlantItem_06929f78;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to RechargePlantItem::~RechargePlantItem() */

void __thiscall RechargePlantItem::~RechargePlantItem(RechargePlantItem *this)

{
  ~RechargePlantItem(this + -0x198);
  return;
}


/* RechargePlantItem::~RechargePlantItem() */

void __thiscall RechargePlantItem::~RechargePlantItem(RechargePlantItem *this)

{
  ~RechargePlantItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargePlantItem::~RechargePlantItem() */

void __thiscall RechargePlantItem::~RechargePlantItem(RechargePlantItem *this)

{
  ~RechargePlantItem(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::RechargePlantItem(Sexy::RtWeakPtr<MagentoProductProps>, int,
   Sexy::ButtonListener*) */

void __thiscall
RechargePlantItem::RechargePlantItem
          (RechargePlantItem *this,RtWeakPtrBase *param_2,int param_3,ButtonListener *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  Sexy aSStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_20,&DAT_056f11a8,asStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_3,param_4,(wstring *)asStack_20,(Color *)asStack_18);
  FUN_05476c50(asStack_20);
  nop();
  *(undefined ***)this = &PTR_GetClass_06929c20;
  *(undefined ***)(this + 0x198) = &PTR__RechargePlantItem_06929f78;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x300),param_2);
  this[0x308] = (RechargePlantItem)0x0;
  this[0x309] = (RechargePlantItem)0x1;
  *(undefined4 *)(this + 0x30c) = 0;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  FUN_05475d88(aSStack_30,lVar1 + 0x80);
  Sexy::StringToUpper(aSStack_30,extraout_x1);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_RECHARGEGIFT_%s",asStack_28,uVar2);
  std::string::~string(asStack_18);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  *(ResourceInfo **)(this + 0x310) = pRVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::StringToUpper(aSStack_30,extraout_x1_00);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_RECHARGEGIFT_%s_AVATAR",asStack_20,uVar2);
  FUN_05474278(asStack_28,asStack_20);
  std::string::~string(asStack_20);
  std::string::~string(asStack_18);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  *(ResourceInfo **)(this + 0x318) = pRVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::StringToUpper(aSStack_30,extraout_x1_01);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_RECHARGEGIFT_%s_TAG",asStack_20,uVar2);
  FUN_05474278(asStack_28,asStack_20);
  std::string::~string(asStack_20);
  std::string::~string(asStack_18);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  *(ResourceInfo **)(this + 800) = pRVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  nop();
  std::string::~string(asStack_28);
  std::string::~string((string *)aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargePlantItem::GetPlantState(std::string const&) */

undefined1 RechargePlantItem::GetPlantState(string *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  cVar1 = FUN_0547419c();
  uVar2 = 0;
  if (cVar1 == '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,param_1);
    uVar2 = 1;
    if (cVar1 != '\0') {
      iVar3 = PlayerInfo::GetPlantStarLevel(this_00,param_1,false);
      if (iVar3 == 1) {
        uVar2 = 2;
      }
      else if (iVar3 == 2) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
        if (iVar3 != -1) {
          iVar3 = PlayerInfo::GetPlantAvatar((string *)this_00,SUB81(param_1,0));
          uVar2 = 4;
          if (-1 < iVar3) {
            uVar2 = 5;
          }
        }
      }
    }
  }
  return uVar2;
}


/* RechargePlantItem::GetPlantState() */

void __thiscall RechargePlantItem::GetPlantState(RechargePlantItem *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x300));
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  GetPlantState((string *)(lVar2 + 0x80));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::GetItemName() */

void RechargePlantItem::GetItemName(void)

{
  int iVar1;
  RechargePlantItem *in_x0;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  iVar1 = GetPlantState(in_x0);
  if (iVar1 == 5) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x300));
    std::operator+((string *)(lVar2 + 0x80),"_avatar");
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x300));
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::DrawPreview(Sexy::Graphics*, int, int, bool) */

void __thiscall
RechargePlantItem::DrawPreview
          (RechargePlantItem *this,Graphics *param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ProfileMgr *pPVar8;
  PlayerInfo *pPVar9;
  long lVar10;
  undefined8 uVar11;
  ResourceInfo *this_00;
  string *extraout_x1;
  LotteryResultProgressBar *this_01;
  LotteryResultProgressBar *this_02;
  undefined1 auStack_38 [8];
  Sexy aSStack_30 [8];
  wstring awStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetPlantState(this);
  this_02 = *(LotteryResultProgressBar **)(this + 0x310);
  this_01 = *(LotteryResultProgressBar **)(this + 0x318);
  if (iVar1 < 4) {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_02,param_2,param_3,iVar4,iVar5);
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
    uVar6 = PlayerInfo::GetPlantStarLevel(pPVar9,(string *)(lVar10 + 0x80),false);
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  else {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_01,param_2,param_3,iVar4,iVar5);
    pPVar8 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar8);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
    iVar4 = PlayerInfo::GetPlantStarLevel(pPVar9,(string *)(lVar10 + 0x80),false);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    uVar6 = iVar4 - 1;
  }
  iVar2 = iVar2 + 0x1e;
  if (uVar6 < 5) {
    Sexy::StrFormat("IMAGE_UI_LEVELUP_RANKING_%d",(string *)awStack_28);
    LawnApp::GetUIImageFromStringId(gLawnApp);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_18);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
    iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)this_00,param_2 + (iVar2 - iVar4 >> 1),iVar3 + param_3,iVar5,iVar7);
    std::string::~string((string *)awStack_28);
  }
  iVar4 = FUN_049dd124(0);
  iVar5 = FUN_049dd124(0x1e);
  FUN_05476574(auStack_38);
  if (iVar1 == 4) {
    TodStringTranslate(L"[STORE_CATEGORY_NAME_AVATARS]");
    thunk_FUN_05477668(auStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  iVar1 = param_3 + iVar5 + iVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_30,extraout_x1);
  TodStringTranslate(awStack_28);
  thunk_FUN_05477668(auStack_38,aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string((string *)aSStack_30);
  iVar3 = FUN_049dd124(0x1e);
  Sexy::Insets::Insets((Insets *)awStack_28,param_2 + iVar4,iVar1,iVar2,iVar3);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0xff,0xd2,0,0xff);
  WriteWordInRect(param_1,auStack_38,awStack_28,uVar11,aIStack_18,2,1);
  iVar3 = FUN_049dd124(0xaa);
  if (param_4) {
    TodStringTranslate(L"[PLANT_OBTAINED]");
    FUN_054766c8(auStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  else {
    Sexy::StrFormat(L"%d",aIStack_18,0x69);
    FUN_054766c8(auStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
    TodStringTranslate(L"[REWARD_TYPE_GEM]");
    thunk_FUN_05477668(auStack_38,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  iVar4 = FUN_049dd124(0x1e);
  Sexy::Insets::Insets((Insets *)awStack_28,param_2 + iVar3,iVar1,iVar2,iVar4);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0xff,0xd2,0,0xff);
  WriteWordInRect(param_1,auStack_38,awStack_28,uVar11,aIStack_18,2,1);
  FUN_05476c50(auStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::LevelUp(Sexy::RtWeakPtr<MagentoProductProps>) */

void RechargePlantItem::LevelUp(RtMixedPtrBase *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar5;
  string *psVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_1);
  if (cVar2 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    iVar4 = GetPlantState((string *)(lVar5 + 0x80));
    if ((iVar4 != 0) && (this_00 != (PlayerInfo *)0x0)) {
      switch(iVar4) {
      case 1:
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        PlayerInfo::UnlockPlant(this_00,(string *)(lVar5 + 0x80),false);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        PlayerInfo::AddPlantStartLevel(this_00,(string *)(lVar5 + 0x80),0);
        pLVar1 = gLawnApp;
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        FUN_05475d88(asStack_10,lVar5 + 0x80);
        LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,1,asStack_10,1);
        std::string::~string(asStack_10);
        break;
      case 2:
      case 3:
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        PlayerInfo::PlantStarLevelUp(this_00,(string *)(lVar5 + 0x80),false);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        iVar4 = PlayerInfo::GetPlantStarLevel(this_00,(string *)(lVar5 + 0x80),false);
        pLVar1 = gLawnApp;
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        FUN_05475d88(asStack_10,lVar5 + 0x80);
        LawnApp::ShowPlantStarLevelUpAnimUI(pLVar1,0,asStack_10,iVar4 + -1);
        std::string::~string(asStack_10);
        break;
      case 4:
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar3 = PlayerInfo::IsPlantAvatarUnLocked(this_00,lVar5 + 0x80,0,0);
        if (cVar3 == '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1)
          ;
          PlayerInfo::UnlockPlantAvatar(this_00,lVar5 + 0x80,0);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1)
          ;
          PlayerInfo::SetPlantAvatar(this_00,lVar5 + 0x80,0);
        }
        else {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1)
          ;
          PlayerInfo::AddAvatarPiecesCount(this_00,lVar5 + 0x80,0,0xf,0);
        }
        pLVar1 = gLawnApp;
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        MagentoProductProps::GetLocalizedDescription();
        LawnApp::ShowAvatarRewardDialog(pLVar1,aRStack_20,asStack_18,asStack_10,0,0,0,0xffffffff);
        std::string::~string(asStack_10);
        std::string::~string(asStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      }
      goto switchD_049de674_default;
    }
  }
  cVar2 = '\0';
switchD_049de674_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargePlantItem::LevelUp() */

void __thiscall RechargePlantItem::LevelUp(RechargePlantItem *this)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x300));
  LevelUp(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

