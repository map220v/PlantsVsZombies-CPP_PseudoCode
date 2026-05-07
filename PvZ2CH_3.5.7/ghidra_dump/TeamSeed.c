// Class: TeamSeed


/* TeamSeed::GetButtonId() */

undefined4 __thiscall TeamSeed::GetButtonId(TeamSeed *this)

{
  return *(undefined4 *)(this + 0xdc);
}


/* TeamSeed::SetSelected(bool) */

void __thiscall TeamSeed::SetSelected(TeamSeed *this,bool param_1)

{
  this[0xda] = (TeamSeed)param_1;
  return;
}


/* TeamSeed::IsInAdventure() */

TeamSeed __thiscall TeamSeed::IsInAdventure(TeamSeed *this)

{
  return this[0xd9];
}


/* TeamSeed::CalcRecoverGems(int) */

int __thiscall TeamSeed::CalcRecoverGems(TeamSeed *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 / 0x168;
  if (0 < param_1 % 0x168) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamSeed::Resize(Sexy::TRect<int> const&) */

void __thiscall TeamSeed::Resize(TeamSeed *this,TRect *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xfc) = uVar1;
  *(int *)(this + 0x104) = iVar3;
  *(int *)(this + 0x100) = iVar2;
  iVar3 = iVar3 / 2;
  iVar4 = FUN_042c67a8(10);
  iVar5 = FUN_042c67a8(5);
  iVar6 = FUN_042c67a8(0xf);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar3 + iVar5,iVar2 - iVar6,iVar3 - iVar4);
  *(undefined8 *)(this + 0x108) = local_18;
  *(undefined8 *)(this + 0x110) = uStack_10;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  plVar7 = *(long **)(this + 0xf0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x198))
              (plVar7,0,0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamSeed::~TeamSeed() */

void __thiscall TeamSeed::~TeamSeed(TeamSeed *this)

{
  *(undefined ***)this = &PTR_GetClass_0682e000;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x118);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TeamSeed::~TeamSeed() */

void __thiscall TeamSeed::~TeamSeed(TeamSeed *this)

{
  ~TeamSeed(this);
  AK::FreeHook(this);
  return;
}


/* TeamSeed::GetPlantId() */

void __thiscall TeamSeed::GetPlantId(TeamSeed *this)

{
  NameMapperBase *this_00;
  long lVar1;
  
  this_00 = (NameMapperBase *)PlantNameMapper::GetInstance();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  NameMapperBase::GetIdForName(this_00,(string *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamSeed::Update() */

void __thiscall TeamSeed::Update(TeamSeed *this)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)this);
  if (cVar2 != '\0') {
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    if (uVar3 == 0) {
      TodStringTranslate(L"[PLANT_ADVENTURE_UNCONNECTED]");
      FUN_054766c8(this + 0x118,auStack_10);
      FUN_05476c50(auStack_10);
    }
    else if (uVar3 < *(uint *)(this + 0xe4)) {
      uVar3 = *(uint *)(this + 0xe4) - uVar3;
      uVar4 = CalcRecoverGems(this,uVar3);
      *(undefined4 *)(this + 0xe0) = uVar4;
      uVar1 = (ulong)uVar3 / 0x3c;
      iVar5 = (int)uVar1;
      Sexy::StrFormat(L"%02d:%02d:%02d",auStack_10,
                      SUB168(SEXT816((long)(ulong)uVar3) * SEXT816(0x48d159e26af37c05),8) >> 10,
                      (ulong)(uint)(iVar5 + (int)(uVar1 / 0x3c) * -0x3c),
                      (ulong)(uVar3 + iVar5 * -0x3c));
      FUN_054766c8(this + 0x118,auStack_10);
      FUN_05476c50(auStack_10);
    }
    else {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if (this_01 != (PlayerInfo *)0x0) {
        iVar5 = GetPlantId(this);
        PlayerInfo::RemoveAdventurePlants(this_01,iVar5);
      }
      this[0xd8] = (TeamSeed)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamSeed::TeamSeed(TeamSeedType, Sexy::RtWeakPtr<PlantType const>, int, Sexy::ButtonListener*) */

void __thiscall
TeamSeed::TeamSeed(TeamSeed *this,undefined4 param_2,RtWeakPtr *param_3,undefined4 param_4,
                  ButtonListener *param_5)

{
  TeamSeed TVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIButton *this_02;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0682e000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  FUN_05476574(this + 0x118);
  *(undefined4 *)(this + 0xd4) = param_2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_3);
  this[0xda] = (TeamSeed)0x0;
  *(undefined4 *)(this + 0xdc) = param_4;
  this[0xd9] = (TeamSeed)0x0;
  *(undefined4 *)(this + 0xe0) = 0;
  this[0xd8] = (TeamSeed)0x0;
  *(undefined4 *)(this + 0xe4) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar2 = GetPlantId(this);
    TVar1 = (TeamSeed)PlayerInfo::IsPlantInAdventure(this_01,iVar2);
    this[0xd9] = TVar1;
    iVar2 = PlayerInfo::GetAdventurePlantEndTime(this_01,iVar2);
    *(int *)(this + 0xe4) = iVar2;
    this[0xd8] = (TeamSeed)(iVar2 != 0);
  }
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_02,*(int *)(this + 0xdc),param_5,awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0xf0) = this_02;
  FUN_05476c50(awStack_20);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamSeed::drawPacket(Sexy::Graphics*) */

void __thiscall TeamSeed::drawPacket(TeamSeed *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  SeedPacketUtils *this_01;
  ResourceInfo *pRVar4;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  Image *pIVar5;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  FUN_05475d88(asStack_20,lVar3 + 8);
  this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar3 = SeedPacketUtils::GetPlantPacketRenderData(this_01,asStack_20,-1,-1,-1);
  this_00 = (RtWeakPtr *)(lVar3 + 0x170);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(lVar3 + 0x30),*(int *)(lVar3 + 0x34),*(int *)(lVar3 + 0x28),
             *(int *)(lVar3 + 0x2c));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_18,(TRect *)(lVar3 + 0x20));
  if (this[0xda] == (TeamSeed)0x0) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0x30),*(int *)(lVar3 + 0x34),
               (TRect *)(lVar3 + 0x20));
  }
  else {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0x78),*(int *)(lVar3 + 0x7c),
               (TRect *)(lVar3 + 0x68));
  }
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0x18),*(int *)(lVar3 + 0x1c),
             (TRect *)(lVar3 + 8));
  cVar1 = IsInAdventure(this);
  if (cVar1 != '\0') {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6868);
    iVar2 = FUN_042c67a8(5);
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar2,iVar2);
  }
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0xc0),*(int *)(lVar3 + 0xc4),
             (TRect *)(lVar3 + 0xb0));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0xf0),*(int *)(lVar3 + 0xf4),
             (TRect *)(lVar3 + 0xe0));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  Sexy::Graphics::DrawImage
            (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0xd8),*(int *)(lVar3 + 0xdc),
             (TRect *)(lVar3 + 200));
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if ((this_03 != (PlayerInfo *)0x0) &&
     (iVar2 = PlayerInfo::GetPlantStarLevel(this_03,asStack_20,false), 0 < iVar2)) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(lVar3 + 0x150),*(int *)(lVar3 + 0x154),*(int *)(lVar3 + 0x148),
               *(int *)(lVar3 + 0x14c));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar4,(TRect *)aIStack_18,(TRect *)(lVar3 + 0x140));
  }
  if (this[0xda] != (TeamSeed)0x0) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar4,*(int *)(lVar3 + 0x138),*(int *)(lVar3 + 0x13c),
               (TRect *)(lVar3 + 0x128));
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamSeed::Draw(Sexy::Graphics*) */

void __thiscall TeamSeed::Draw(TeamSeed *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  SalesProgressBar *pSVar8;
  ulong uVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *pLVar11;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawPacket(this,param_1);
  if (*(int *)(this + 0xd4) == 0) {
    cVar2 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)this);
    if (cVar2 != '\0') {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af67f0);
      iVar5 = *(int *)(this + 0x10c);
      iVar1 = *(int *)(this + 0x110);
      iVar6 = *(int *)(this + 0x108);
      iVar3 = *(int *)(this + 0x114);
      pSVar8 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af67f0);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
      Sexy::Graphics::DrawImage(param_1,pIVar7,iVar6 + iVar1 / 2,(iVar5 + iVar3) - iVar4);
      uVar9 = AccessoryContent::GetId((AccessoryContent *)this);
      Sexy::StrFormat(L"%d",aCStack_18,uVar9 & 0xffffffff);
      uVar10 = FUN_054766ec(aCStack_18);
      FUN_05478178(auStack_30,uVar10,aIStack_28);
      nop();
      FUN_05476c50(aCStack_18);
      iVar1 = *(int *)(this + 0x108);
      iVar6 = *(int *)(this + 0x110);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af67f0);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar5 = iVar1 + iVar6 / 2 + iVar5;
      iVar1 = *(int *)(this + 0x110);
      iVar6 = FUN_042c67a8(10);
      Sexy::Insets::Insets
                (aIStack_28,iVar5,*(int *)(this + 0x10c),(iVar1 - iVar5) - iVar6,
                 *(int *)(this + 0x114));
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
      Sexy::Color::Color(aCStack_18,1);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar10,aCStack_18,3,1);
      FUN_05476c50(auStack_30);
    }
  }
  else {
    cVar2 = IsInAdventure(this);
    if ((cVar2 == '\0') &&
       (cVar2 = LevelEditorVaseBreakerSelect::IsSelected((LevelEditorVaseBreakerSelect *)this),
       cVar2 != '\0')) {
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6960);
      iVar5 = *(int *)(this + 0x10c);
      iVar1 = *(int *)(this + 0x114);
      iVar6 = *(int *)(this + 0x108);
      pSVar8 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6960);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
      Sexy::Graphics::DrawImage(param_1,pIVar7,iVar6,(iVar5 + iVar1) - iVar3);
      iVar5 = *(int *)(this + 0x108);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6960);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar1 = *(int *)(this + 0x10c);
      iVar6 = *(int *)(this + 0x110);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6960);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      Sexy::Insets::Insets(aIStack_28,iVar5 + iVar3,iVar1,iVar6 - iVar4,*(int *)(this + 0x114));
      uVar10 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
      Sexy::Color::Color(aCStack_18,0xfc,0xf9,0xad);
      WriteWordInRect(param_1,this + 0x118,aIStack_28,uVar10,aCStack_18,3,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamSeed::MouseDown(int, int, int) */

void TeamSeed::MouseDown(int param_1,int param_2,int param_3)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  if ((lVar2 != 0) && (iVar1 = FUN_042c62b8(*(undefined4 *)(lVar2 + 0x40)), iVar1 == 0x27)) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::TutorialBtnPressed,
               *(int *)((ulong)(uint)param_1 + 0xdc));
    return;
  }
  return;
}

