// Class: WorldMapChooseDialog


/* WorldMapChooseDialog::GetButton(int) */

undefined8 __thiscall WorldMapChooseDialog::GetButton(WorldMapChooseDialog *this,int param_1)

{
  return *(undefined8 *)(this + (long)param_1 * 8 + 0xe0);
}


/* WorldMapChooseDialog::GetButtonPosition(int) */

void WorldMapChooseDialog::GetButtonPosition(int param_1)

{
  int in_w1;
  long *plVar1;
  Point *in_x8;
  
  plVar1 = *(long **)((ulong)(uint)param_1 + (long)in_w1 * 8 + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xd0))(plVar1);
    return;
  }
  Sexy::Point::Point(in_x8,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::CreateButton(int, Sexy::Image*, bool, bool) */

void __thiscall
WorldMapChooseDialog::CreateButton
          (WorldMapChooseDialog *this,int param_1,Image *param_2,bool param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PVZ2UIButton *this_00;
  code *pcVar6;
  undefined1 auStack_58 [8];
  Color aCStack_50 [16];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (Image *)0x0) {
    this_00 = (PVZ2UIButton *)0x0;
  }
  else {
    FUN_05478178(aCStack_50,&DAT_056f11a8,auStack_58);
    Sexy::Color::Color((Color *)aPStack_40,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,param_1,(ButtonListener *)(this + 0xd8),(wstring *)aCStack_50,
               (Color *)aPStack_40);
    FUN_05476c50(aCStack_50);
    nop();
    this_00[0x59] = (PVZ2UIButton)0x0;
    if (param_4) {
      pcVar6 = *(code **)(*(long *)this_00 + 0x198);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
      iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
      (*pcVar6)(this_00,0,0,(int)((float)iVar3 * 0.9),(int)((float)iVar4 * 0.9));
    }
    else {
      pcVar6 = *(code **)(*(long *)this_00 + 0x198);
      uVar1 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
      uVar2 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
      (*pcVar6)(this_00,0,0,uVar1,uVar2);
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_40,param_2,1);
    Sexy::Color::Color(aCStack_50,0x5a,0x5a,0x5a);
    PVZ2UIButton::SetDialogStates(this_00,aPStack_40,aCStack_50);
    if (param_3) {
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b12990,1);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
      iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
      Sexy::Insets::Insets((Insets *)aCStack_50,-(iVar3 / 10),0,iVar4,iVar5);
      PVZ2UIButton::AddImage(this_00,aPStack_40,(TRect *)aCStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::onStoreTutorialFinished() */

void __thiscall WorldMapChooseDialog::onStoreTutorialFinished(WorldMapChooseDialog *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x120) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x120) = 0;
  }
  *(undefined4 *)(this + 0x11c) = 0;
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),0);
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0457b828(lVar2 + 0x356,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::onDangerroomTutorialFinished() */

void __thiscall WorldMapChooseDialog::onDangerroomTutorialFinished(WorldMapChooseDialog *this)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x120) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x120) = 0;
  }
  *(undefined4 *)(this + 0x11c) = 0;
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),0);
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  FUN_0457b828(lVar2 + 0x356,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::~WorldMapChooseDialog() */

void __thiscall WorldMapChooseDialog::~WorldMapChooseDialog(WorldMapChooseDialog *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06860600;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_068602d0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  if (*(long *)(this + 0x120) != 0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(*plVar2 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *(undefined8 *)(this + 0x120) = 0;
  }
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapChooseDialog::~WorldMapChooseDialog() */

void __thiscall WorldMapChooseDialog::~WorldMapChooseDialog(WorldMapChooseDialog *this)

{
  ~WorldMapChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* WorldMapChooseDialog::Update() */

void __thiscall WorldMapChooseDialog::Update(WorldMapChooseDialog *this)

{
  char cVar1;
  WorldMap *this_00;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  
  plVar3 = *(long **)(this + 0x120);
  if ((plVar3 != (long *)0x0) && (fVar5 = (float)FUN_0457b824((int)plVar3[3]), 0.0 < fVar5)) {
    pcVar4 = *(code **)(*plVar3 + 0x80);
    PVZ_RealT();
    (*pcVar4)(plVar3);
  }
  if (*(int *)(this + 0x11c) - 1U < 7) {
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    cVar1 = WorldMap::IsUserInputEnabled(this_00);
    if (cVar1 != '\0') {
      lVar2 = LawnApp::GetWorldMap(gLawnApp);
      FUN_0457b828(lVar2 + 0x356,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::ShowTheNoticeAboutAvatar() */

void WorldMapChooseDialog::ShowTheNoticeAboutAvatar(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  long lVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  string *extraout_x1;
  ulong uVar7;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"Avatars");
  Magento::GetStore((Magento *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    while( true ) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar6 = FUN_0457b834(*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0x68));
      if (uVar6 <= uVar7) break;
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0457b840(*(undefined8 *)(lVar5 + 0x60),uVar7);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88(asStack_10,lVar5 + 0x80);
      cVar3 = PlayerInfo::IsPlantAvatarPiecesFull(pPVar4,asStack_10,0,0);
      if ((cVar3 != '\0') &&
         (cVar2 = PlayerInfo::IsPlantAvatarUnLocked(pPVar4,asStack_10,0,0), cVar2 == '\0')) {
        std::string::~string(asStack_10);
        goto LAB_0457c200;
      }
      uVar7 = uVar7 + 1;
      std::string::~string(asStack_10);
    }
  }
  cVar3 = NewAvatar::NeedShowTips();
LAB_0457c200:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WorldMapChooseDialog::AddLaternTips() */

void __thiscall WorldMapChooseDialog::AddLaternTips(WorldMapChooseDialog *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ActivityConfig *this_00;
  long *plVar9;
  RiddlesLaternTip *this_01;
  LotteryResultProgressBar *this_02;
  SalesProgressBar *this_03;
  code *pcVar10;
  
  lVar8 = LawnApp::GetActivityConfig();
  if (lVar8 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar3 = ActivityConfig::IsLanternRiddlesActivated(this_00);
    if (cVar3 != '\0') {
      plVar9 = *(long **)(this + 0xe0);
      if (plVar9 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar9 + 0x188))(plVar9,0);
      this_01 = ::operator_new(0xd8);
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)(this_01 + 8) = 0;
      *(undefined8 *)(this_01 + 0x10) = 0;
      *(undefined8 *)(this_01 + 0x18) = 0;
      *(undefined8 *)(this_01 + 0x20) = 0;
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      *(undefined8 *)(this_01 + 0x40) = 0;
      *(undefined8 *)(this_01 + 0x48) = 0;
      *(undefined8 *)(this_01 + 0x50) = 0;
      *(undefined8 *)(this_01 + 0x58) = 0;
      *(undefined8 *)(this_01 + 0x60) = 0;
      *(undefined8 *)(this_01 + 0x68) = 0;
      *(undefined8 *)(this_01 + 0x70) = 0;
      *(undefined8 *)(this_01 + 0x78) = 0;
      *(undefined8 *)(this_01 + 0x80) = 0;
      *(undefined8 *)(this_01 + 0x88) = 0;
      *(undefined8 *)(this_01 + 0x90) = 0;
      *(undefined8 *)(this_01 + 0x98) = 0;
      *(undefined8 *)(this_01 + 0xa0) = 0;
      *(undefined8 *)(this_01 + 0xa8) = 0;
      *(undefined8 *)(this_01 + 0xb0) = 0;
      *(undefined8 *)(this_01 + 0xb8) = 0;
      *(undefined8 *)(this_01 + 0xc0) = 0;
      *(undefined8 *)(this_01 + 200) = 0;
      *(undefined8 *)(this_01 + 0xd0) = 0;
      RiddlesLaternTip::RiddlesLaternTip(this_01);
      lVar8 = *(long *)(this + 0xe0);
      pcVar10 = *(code **)(*(long *)this_01 + 0x198);
      iVar4 = FUN_0457b86c(0xfffffff6);
      iVar1 = *(int *)(lVar8 + 0x48);
      iVar5 = FUN_0457b86c(0xfffffff1);
      iVar2 = *(int *)(lVar8 + 0x4c);
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12990);
      uVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      this_03 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12990);
      uVar7 = SalesProgressBar::GetCurrentLevel(this_03);
      (*pcVar10)(this_01,iVar4 + iVar1,iVar5 + iVar2,uVar6,uVar7);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      return;
    }
  }
  plVar9 = *(long **)(this + 0xe0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x188))(plVar9,1);
  }
  return;
}


/* WorldMapChooseDialog::AddRedPackTips() */

void __thiscall WorldMapChooseDialog::AddRedPackTips(WorldMapChooseDialog *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ActivityConfig *this_00;
  long *plVar9;
  RiddlesRedPackTip *this_01;
  LotteryResultProgressBar *this_02;
  SalesProgressBar *this_03;
  code *pcVar10;
  
  lVar8 = LawnApp::GetActivityConfig();
  if (lVar8 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar3 = ActivityConfig::IsRedPackActivated(this_00);
    if (cVar3 != '\0') {
      plVar9 = *(long **)(this + 0xe8);
      if (plVar9 == (long *)0x0) {
        return;
      }
      (**(code **)(*plVar9 + 0x188))(plVar9,0);
      this_01 = ::operator_new(0xd8);
      *(undefined8 *)this_01 = 0;
      *(undefined8 *)(this_01 + 8) = 0;
      *(undefined8 *)(this_01 + 0x10) = 0;
      *(undefined8 *)(this_01 + 0x18) = 0;
      *(undefined8 *)(this_01 + 0x20) = 0;
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      *(undefined8 *)(this_01 + 0x40) = 0;
      *(undefined8 *)(this_01 + 0x48) = 0;
      *(undefined8 *)(this_01 + 0x50) = 0;
      *(undefined8 *)(this_01 + 0x58) = 0;
      *(undefined8 *)(this_01 + 0x60) = 0;
      *(undefined8 *)(this_01 + 0x68) = 0;
      *(undefined8 *)(this_01 + 0x70) = 0;
      *(undefined8 *)(this_01 + 0x78) = 0;
      *(undefined8 *)(this_01 + 0x80) = 0;
      *(undefined8 *)(this_01 + 0x88) = 0;
      *(undefined8 *)(this_01 + 0x90) = 0;
      *(undefined8 *)(this_01 + 0x98) = 0;
      *(undefined8 *)(this_01 + 0xa0) = 0;
      *(undefined8 *)(this_01 + 0xa8) = 0;
      *(undefined8 *)(this_01 + 0xb0) = 0;
      *(undefined8 *)(this_01 + 0xb8) = 0;
      *(undefined8 *)(this_01 + 0xc0) = 0;
      *(undefined8 *)(this_01 + 200) = 0;
      *(undefined8 *)(this_01 + 0xd0) = 0;
      RiddlesRedPackTip::RiddlesRedPackTip(this_01);
      lVar8 = *(long *)(this + 0xe8);
      pcVar10 = *(code **)(*(long *)this_01 + 0x198);
      iVar4 = FUN_0457b86c(0xfffffff6);
      iVar1 = *(int *)(lVar8 + 0x48);
      iVar5 = FUN_0457b86c(0xfffffff1);
      iVar2 = *(int *)(lVar8 + 0x4c);
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b122b8);
      uVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
      this_03 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b122b8);
      uVar7 = SalesProgressBar::GetCurrentLevel(this_03);
      (*pcVar10)(this_01,iVar4 + iVar1,iVar5 + iVar2,uVar6,uVar7);
      (**(code **)(*(long *)this + 0x60))(this,this_01);
      return;
    }
  }
  plVar9 = *(long **)(this + 0xe8);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x188))(plVar9,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::DrawOverlay(Sexy::Graphics*) */

void __thiscall WorldMapChooseDialog::DrawOverlay(WorldMapChooseDialog *this,Graphics *param_1)

{
  bool bVar1;
  WorldMapChooseDialog WVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  Image *pIVar14;
  undefined8 uVar15;
  long *plVar16;
  float fVar17;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(int *)(this + 0x110) == 0) {
    bVar1 = this[0x130] != (WorldMapChooseDialog)0x0;
    if (bVar1) {
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b129b8);
      iVar6 = 3;
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b129b8);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar11 = FUN_0457b86c(0x32);
      iVar3 = iVar3 - iVar11;
      iVar11 = FUN_0457b86c(0x19);
      iVar4 = *(int *)(*(long *)(this + 0xe0) + 0x4c) - iVar3;
      iVar11 = iVar11 + *(int *)(*(long *)(this + 0xe0) + 0x48);
      Sexy::Insets::Insets(aIStack_38,iVar11,iVar4,iVar7,iVar3);
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b129b8);
      Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_38,pIVar14);
      iVar8 = FUN_0457b86c(0x14);
      iVar9 = FUN_0457b86c(8);
      iVar5 = (iVar3 - iVar9) - iVar8;
      iVar10 = FUN_0457b86c(4);
      Sexy::Insets::Insets
                (aIStack_28,iVar11 + iVar9 / 2 + iVar10,
                 iVar10 + iVar4 + ((iVar3 - iVar8) - iVar5) / 2,iVar7 - iVar9,iVar5);
      uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
      Sexy::Color::Color((Color *)aIStack_18,0);
      iVar11 = 3;
      WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar15,(Color *)aIStack_18,3,1);
      WVar2 = this[0x131];
    }
    else {
      WVar2 = this[0x131];
      iVar6 = 2;
      iVar11 = 2;
    }
    if (WVar2 != (WorldMapChooseDialog)0x0) {
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar4 = FUN_0457b86c(0x37);
      iVar5 = FUN_0457b86c(0x19);
      Sexy::Insets::Insets
                (aIStack_28,
                 iVar4 + *(int *)(*(long *)(this + (long)(int)(uint)bVar1 * 8 + 0xe0) + 0x48),
                 (*(int *)(*(long *)(this + (long)(int)(uint)bVar1 * 8 + 0xe0) + 0x4c) - iVar3) +
                 iVar5,iVar11,iVar3);
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_28,pIVar14);
      Sexy::Insets::Insets
                (aIStack_18,
                 iVar4 + *(int *)(*(long *)(this + (long)(int)(uint)bVar1 * 8 + 0xe8) + 0x48),
                 (*(int *)(*(long *)(this + (long)(int)(uint)bVar1 * 8 + 0xe8) + 0x4c) - iVar3) +
                 iVar5,iVar11,iVar3);
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_18,pIVar14);
      iVar11 = iVar6;
    }
    if (this[0x132] != (WorldMapChooseDialog)0x0) {
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
      iVar5 = FUN_0457b86c(0x37);
      iVar6 = FUN_0457b86c(0x19);
      Sexy::Insets::Insets
                (aIStack_18,iVar5 + *(int *)(*(long *)(this + (long)iVar11 * 8 + 0xe0) + 0x48),
                 (*(int *)(*(long *)(this + (long)iVar11 * 8 + 0xe0) + 0x4c) - iVar4) + iVar6,iVar3,
                 iVar4);
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12860);
      Sexy::Graphics::DrawImageBox(param_1,(TRect *)aIStack_18,pIVar14);
    }
  }
  plVar16 = *(long **)(this + 0x120);
  if ((plVar16 != (long *)0x0) && (fVar17 = (float)FUN_0457b824((int)plVar16[3]), 0.0 < fVar17)) {
    (**(code **)(*plVar16 + 0x98))(plVar16,param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMapChooseDialog::ButtonPress(int) */

void WorldMapChooseDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapChooseDialog::ButtonPress(int) */

void __thiscall WorldMapChooseDialog::ButtonPress(WorldMapChooseDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::ButtonDepress(int) */

void __thiscall WorldMapChooseDialog::ButtonDepress(WorldMapChooseDialog *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  WorldMap *pWVar6;
  long lVar7;
  RtObject *this_00;
  UIEasyButtonWidget *pUVar8;
  ProfileMgr *pPVar9;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<TutorialMgr>::GetInstance();
  cVar1 = TutorialMgr::HasRunningIconEffect();
  if (cVar1 != '\0') goto LAB_0457cad8;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
  if (*(AnimationController **)(this + 0x120) != (AnimationController *)0x0) {
    AnimationController::SetDuration(*(AnimationController **)(this + 0x120),0.0);
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar4 = 0;
    if (param_1 != 0) {
      if (param_1 == 1) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
        if (param_1 != 2) {
          uVar4 = 3;
        }
      }
    }
    LawnApp::ShowFestivalEntranceUI(gLawnApp,uVar4);
    break;
  case 4:
    if (*(int *)(this + 0x11c) != 1) goto switchD_0457cb8c_caseD_e;
    onStoreTutorialFinished(this);
    break;
  case 5:
    if (*(int *)(this + 0x11c) == 2) {
      onStoreTutorialFinished(this);
    }
    else if (*(int *)(this + 0x11c) == 3) {
      onStoreTutorialFinished(this);
    }
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToLevelUp(pWVar6);
    break;
  case 6:
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToPlantAvatar(pWVar6);
    break;
  case 7:
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar9);
    if (lVar7 != 0) {
      FUN_0457b820(*(undefined4 *)(lVar7 + 0x40));
    }
    LawnApp::ShowTransGenosisUI(SUB81(gLawnApp,0));
    std::string::string(asStack_10,"UIWorldMapPlantLevelUpButton");
    this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((((this_00 != (RtObject *)0x0) &&
         (bVar2 = Sexy::RtObject::IsA<UIEasyButtonWidget>(this_00), bVar2)) &&
        (pUVar8 = Sexy::RtObject::Cast<UIEasyButtonWidget>(this_00),
        pUVar8 != (UIEasyButtonWidget *)0x0)) &&
       (iVar3 = FUN_0457b81c(*(undefined4 *)(this + 0x110)), iVar3 == 1)) {
      FUN_0457b854(pUVar8 + 0x1a8);
    }
    break;
  case 8:
    Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
    cVar1 = PlantFamilyMgr::PlantFamilyIsEnable();
    if (cVar1 == '\0') {
      this[0x133] = (WorldMapChooseDialog)((byte)this[0x133] ^ 1);
      goto LAB_0457cad8;
    }
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToPlantFamily(pWVar6);
    break;
  case 9:
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToArtifact(pWVar6);
    break;
  case 10:
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToPlantGeneEnhancement(pWVar6);
    break;
  case 0xb:
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToLottery(pWVar6);
    break;
  case 0xc:
    LawnApp::ShowGetNewerBagUI(gLawnApp,false,false);
    break;
  case 0xd:
    LawnApp::ShowGetNewerBagUI(gLawnApp,false,true);
    break;
  default:
switchD_0457cb8c_caseD_e:
    break;
  case 0x12:
    pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar9);
    cVar1 = PlayerInfo::CanRiddleToday();
    if ((cVar1 != '\0') && (cVar1 = PlayerInfo::NeedResetRiddleInfo(), cVar1 != '\0')) {
      FUN_0457b85c(this_01 + 0xf5c);
      FUN_0457b864(this_01 + 0xf58);
    }
    PlayerInfo::saveCurrentProfile(this_01);
  }
  LawnApp::KillChoosePlantsDialog(gLawnApp);
  LawnApp::KillChooseActivityLevelsDialog(gLawnApp);
  LawnApp::KillChooseWelfareDialog(gLawnApp);
  LawnApp::KillChooseRiddlesDialog(gLawnApp);
  LawnApp::KillGameMaskUI(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
LAB_0457cad8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapChooseDialog::ButtonDepress(int) */

void __thiscall WorldMapChooseDialog::ButtonDepress(WorldMapChooseDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::ShowTheNoticeAboutPlantLevelUp() */

void WorldMapChooseDialog::ShowTheNoticeAboutPlantLevelUp(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  PlantPediaManager *this;
  ProfileMgr *this_00;
  Magento *this_01;
  string *psVar6;
  MagentoProductProps *this_02;
  long lVar7;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  PlantType *pPVar10;
  ulong uVar11;
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  GachaItemInfo aGStack_20 [4];
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
  cVar1 = PlantPediaManager::HasAnyUnRewardedPedia(this);
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (Magento *)ProfileMgr::GetCurrentProfile(this_00);
    Magento::GetPlantLevelUp(this_01);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
    if (bVar2) {
      uVar11 = 0;
      while( true ) {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        uVar8 = FUN_0457b834(*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68));
        if (uVar8 <= uVar11) break;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0457b840(*(undefined8 *)(lVar7 + 0x60),uVar11)
        ;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
        FUN_05475d88(asStack_30,lVar7 + 0x80);
        cVar3 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_30);
        if (cVar3 == '\0') {
          iVar5 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_01,asStack_30,false);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_0457b840(*(undefined8 *)(lVar7 + 0x60),uVar11);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          if (iVar5 < *(int *)(lVar7 + 0x90)) goto LAB_0457ceac;
LAB_0457cfd4:
          std::string::~string(asStack_30);
          cVar1 = '\x01';
          break;
        }
LAB_0457ceac:
        cVar3 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_30);
        if (cVar3 != '\0') {
          psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
          iVar5 = PlayerInfo::GetPlantStarLevel((PlayerInfo *)this_01,asStack_30,false);
          if (iVar5 < 1) {
            pPVar10 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            lVar7 = PlantType::GetProps(pPVar10);
            iVar5 = *(int *)(lVar7 + 0x28);
          }
          GachaItemInfo::GachaItemInfo(aGStack_20);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_0457b840(*(undefined8 *)(lVar7 + 0x60),uVar11);
          this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          MagentoProductProps::GetCurrentLevelPriceData
                    (this_02,iVar5,(LevelUpPriceData *)aGStack_20);
          iVar4 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_01,asStack_30,false);
          if (local_1c <= iVar4) {
            pPVar10 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            lVar7 = PlantType::GetProps(pPVar10);
            if (iVar5 < *(int *)(lVar7 + 0x2c)) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
              goto LAB_0457cfd4;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        }
        uVar11 = uVar11 + 1;
        std::string::~string(asStack_30);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::ShouldDrawTGIcon() */

void WorldMapChooseDialog::ShouldDrawTGIcon(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  wchar16 *pwVar4;
  ProfileMgr *pPVar5;
  long lVar6;
  PlayerInfo *pPVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar8 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"TGTutorial");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_90,pLVar8,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if (cVar1 != '\0') goto LAB_0457d090;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(pPVar5);
  iVar3 = FUN_0457b820(*(undefined4 *)(lVar6 + 0x40));
  if (iVar3 == 0x29) {
LAB_0457d118:
    cVar1 = '\x01';
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    if (local_70 != '\0') {
      pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
      cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(3,false,pPVar7);
      if (cVar2 != '\0') goto LAB_0457d118;
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
LAB_0457d090:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::InitView() */

void WorldMapChooseDialog::InitView(void)

{
  ButtonListener *pBVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  WorldMapChooseDialog *in_x0;
  long lVar18;
  ProfileMgr *pPVar19;
  PlayerInfo *pPVar20;
  LotteryResultProgressBar *pLVar21;
  PVZ2UIButton *pPVar22;
  LotteryResultProgressBar *this;
  ActivityConfig *pAVar23;
  NewPlantUIMgr *pNVar24;
  PlayerInfo *pPVar25;
  wchar16 *pwVar26;
  Image *pIVar27;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined8 uVar28;
  undefined8 extraout_x0;
  undefined *puVar29;
  undefined8 extraout_x1;
  string *psVar30;
  LineBreakCategory *in_x3;
  PVZ2UIImage *pPVar31;
  LineBreakCategory *pLVar32;
  LineBreakCategory *pLVar33;
  long *plVar34;
  code *pcVar35;
  WorldMapChooseDialog *pWVar36;
  undefined1 auVar37 [16];
  int local_88;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string local_40 [4];
  int local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
  FUN_0457b86c(0x14);
  pLVar32 = (LineBreakCategory *)(ulong)*(uint *)(lVar18 + 0x3c);
  pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar20 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
  switch(*(undefined4 *)(in_x0 + 0x110)) {
  case 0:
    pAVar23 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar4 = ActivityConfig::IsPlantBonusActivated(pAVar23);
    if (cVar4 != '\0') {
      in_x0[0x131] = (WorldMapChooseDialog)0x1;
    }
    pAVar23 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar4 = ActivityConfig::IsAvatarBonusActivated(pAVar23);
    if (cVar4 != '\0') {
      in_x0[0x132] = (WorldMapChooseDialog)0x1;
    }
    FUN_0457b86c(0);
    FUN_0457b86c(0x1a6);
    (**(code **)(*(long *)in_x0 + 0x198))();
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12638);
    iVar9 = PlayerInfo::GetFestivalGameLeftCount(pPVar20,2);
    if (0 < iVar9) {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b129e0);
    }
    pBVar1 = (ButtonListener *)(in_x0 + 0xd8);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar22,2,pBVar1,awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe0) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12b78,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe0);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    uVar12 = FUN_0457b86c(0x10);
    iVar9 = FUN_0457b86c(0x14);
    iVar10 = FUN_0457b86c(10);
    uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar17 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,uVar12,iVar9 - iVar10,uVar13,uVar17);
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12588);
    iVar9 = PlayerInfo::GetFestivalGameLeftCount(pPVar20,1);
    if (0 < iVar9) {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12140);
    }
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar22,1,pBVar1,awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe8) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12168,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe8);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    iVar11 = FUN_0457b86c(0x14);
    iVar14 = FUN_0457b86c(10);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar10 + iVar9 * 2,iVar11 - iVar14,uVar12,uVar13);
    pAVar23 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar4 = ActivityConfig::IsSpringBossActivated(pAVar23);
    if (cVar4 == '\0') {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12710);
      iVar9 = PlayerInfo::GetFestivalGameLeftCount(pPVar20,0);
      if (0 < iVar9) {
        pLVar21 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b123b0);
      }
      FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
      Sexy::Color::Color((Color *)local_40,1);
      pPVar22 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar22,0,pBVar1,awStack_78,(Color *)local_40);
      *(PVZ2UIButton **)(in_x0 + 0xf0) = pPVar22;
      FUN_05476c50(awStack_78);
      nop();
      pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xf0);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
      puVar29 = &DAT_06b12218;
    }
    else {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12560);
      iVar9 = PlayerInfo::GetFestivalGameLeftCount(pPVar20,0);
      if (0 < iVar9) {
        pLVar21 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12330);
      }
      FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
      Sexy::Color::Color((Color *)local_40,1);
      pPVar22 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton(pPVar22,3,pBVar1,awStack_78,(Color *)local_40);
      *(PVZ2UIButton **)(in_x0 + 0xf0) = pPVar22;
      FUN_05476c50(awStack_78);
      nop();
      pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xf0);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
      puVar29 = &DAT_06b12a08;
    }
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,puVar29,1);
    pWVar36 = in_x0 + 0xe0;
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xf0);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    iVar11 = FUN_0457b86c(0x14);
    iVar14 = FUN_0457b86c(10);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar9 * 3 + iVar10 * 2,iVar11 - iVar14,uVar12,uVar13);
    do {
      pWVar36 = pWVar36 + 8;
      (**(code **)(*(long *)in_x0 + 0x60))();
    } while (pWVar36 != in_x0 + 0xf8);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    *(int *)(in_x0 + 0x114) = iVar10 * 3 + iVar9 * 4;
    std::string::string(local_40,"UIWorldMapActivityLevelsButton");
    plVar34 = (long *)UIWidget::GetWidgetBySheetName(local_40);
    std::string::~string(local_40);
    nop();
    if (plVar34 == (long *)0x0) break;
    (**(code **)(*plVar34 + 0xb0))(local_40,plVar34);
    lVar18 = *(long *)in_x0;
    uVar28 = 0x1a6;
    goto LAB_0457e5a0;
  case 1:
    pNVar24 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
    bVar3 = NewPlantUIMgr::IsNewUI(pNVar24);
    pNVar24 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
    cVar4 = NewPlantUIMgr::IsNewUI(pNVar24);
    iVar9 = FUN_0457b820(*(undefined4 *)(pPVar20 + 0x40));
    if ((iVar9 - 0x1dU < 2) || (iVar9 == 0x18)) {
      lVar18 = Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
      bVar3 = 0;
      FUN_0457b848(lVar18 + 8);
    }
    else {
      bVar3 = bVar3 ^ 1;
    }
    LawnApp::KillGameMaskUI(gLawnApp);
    std::string::string(local_40,"egypt9");
    pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar25 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
    cVar5 = ProfileUtils::HasCompletedLevel(local_40,false,pPVar25);
    std::string::~string(local_40);
    nop();
    pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar25 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
    cVar6 = ProfileUtils::HasCompletedSecondWorldLevel(8,false,pPVar25);
    FUN_0457b86c(0x278);
    cVar7 = ShouldDrawTGIcon();
    if (cVar7 == '\0') {
      local_88 = 4;
      FUN_0457b86c(0x20f);
      if (cVar5 == '\0') {
        local_88 = 3;
        FUN_0457b86c(0x1a6);
      }
    }
    else {
      if (cVar5 == '\0') {
        local_88 = 4;
        FUN_0457b86c(0x20f);
        iVar9 = -1;
        iVar10 = 3;
      }
      else {
        pPVar25 = (PlayerInfo *)0x5;
        iVar10 = 4;
        iVar9 = 0;
        local_88 = 5;
      }
      if (bVar3 == 0) {
        iVar11 = iVar9 + 3;
        iVar9 = iVar10;
      }
      else {
        iVar9 = iVar9 + 5;
        iVar11 = iVar10;
      }
      auVar37 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b125e8);
      bVar8 = (bool)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                              ((wchar16 *)in_x0,auVar37._8_8_,(LineBreakCategory *)pPVar25,in_x3,
                               pLVar32);
      pLVar33 = (LineBreakCategory *)0x1;
      plVar34 = (long *)CreateButton(in_x0,7,auVar37._0_8_,bVar8,true);
      *(long **)(in_x0 + 0xf0) = plVar34;
      pLVar32 = *(LineBreakCategory **)(*plVar34 + 0x1a8);
      iVar10 = FUN_0457b86c(0x10);
      PVZ2UIButton::GetImageNormal();
      iVar14 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
      iVar15 = FUN_0457b86c(0x14);
      iVar16 = FUN_0457b86c(0xc);
      (*(code *)pLVar32)(plVar34,iVar10 * iVar9 + iVar14 * iVar11,iVar15 - iVar16);
      pwVar26 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      psVar30 = (string *)awStack_78;
      std::string::string(local_40,"TGTutorial");
      EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                (pwVar26,(wchar16 *)local_40,(LineBreakCategory *)psVar30,pLVar32,pLVar33);
      std::string::~string(local_40);
      nop();
    }
    FUN_0457b86c(0);
    (**(code **)(*(long *)in_x0 + 0x198))();
    if (bVar3 == 0) {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12490);
      pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12490);
      bVar8 = (bool)ShowTheNoticeAboutPlantLevelUp();
      plVar34 = (long *)CreateButton(in_x0,5,pIVar27,bVar8,true);
      *(long **)(in_x0 + 0xe0) = plVar34;
      uVar12 = FUN_0457b86c(0x10);
      iVar9 = FUN_0457b86c(0x14);
      iVar10 = FUN_0457b86c(0xc);
      (**(code **)(*plVar34 + 0x1a8))(plVar34,uVar12,iVar9 - iVar10);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12ba8;
    }
    else {
      pLVar21 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12610);
      pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12610);
      bVar8 = (bool)ShowTheNoticeAboutPlantLevelUp();
      plVar34 = (long *)CreateButton(in_x0,5,pIVar27,bVar8,true);
      *(long **)(in_x0 + 0xe0) = plVar34;
      uVar12 = FUN_0457b86c(0x10);
      iVar9 = FUN_0457b86c(0x14);
      iVar10 = FUN_0457b86c(0xc);
      (**(code **)(*plVar34 + 0x1a8))(plVar34,uVar12,iVar9 - iVar10);
      pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12838);
      bVar8 = (bool)ShowTheNoticeAboutAvatar();
      plVar34 = (long *)CreateButton(in_x0,6,pIVar27,bVar8,true);
      *(long **)(in_x0 + 0xe8) = plVar34;
      pcVar35 = *(code **)(*plVar34 + 0x1a8);
      iVar9 = FUN_0457b86c(0x10);
      PVZ2UIButton::GetImageNormal();
      iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
      iVar11 = FUN_0457b86c(0x14);
      iVar14 = FUN_0457b86c(0xc);
      (*pcVar35)(plVar34,iVar9 * 3 + iVar10 * 2,iVar11 - iVar14);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12290;
    }
    pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    pPVar31 = (PVZ2UIImage *)0x0;
    pLVar32 = (LineBreakCategory *)0x1;
    plVar34 = (long *)CreateButton(in_x0,8,pIVar27,false,true);
    *(long **)(in_x0 + 0xf8) = plVar34;
    pcVar35 = *(code **)(*plVar34 + 0x1a8);
    iVar9 = FUN_0457b86c(0x10);
    PVZ2UIButton::GetImageNormal();
    iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
    iVar11 = FUN_0457b86c(0x14);
    iVar14 = FUN_0457b86c(0xc);
    (*pcVar35)(plVar34,iVar10 + iVar9 * 2,iVar11 - iVar14);
    if (cVar5 != '\0') {
      iVar9 = 3;
      if (bVar3 == 0) {
        iVar9 = 2;
      }
      iVar10 = 4;
      if (bVar3 == 0) {
        iVar10 = 3;
      }
      pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b124e0);
      pLVar32 = (LineBreakCategory *)0x1;
      plVar34 = (long *)CreateButton(in_x0,9,pIVar27,false,true);
      *(long **)(in_x0 + 0x100) = plVar34;
      pPVar31 = *(PVZ2UIImage **)(*plVar34 + 0x1a8);
      iVar11 = FUN_0457b86c(0x10);
      PVZ2UIButton::GetImageNormal();
      iVar14 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
      iVar15 = FUN_0457b86c(0x14);
      iVar16 = FUN_0457b86c(0xc);
      (*(code *)pPVar31)(plVar34,iVar10 * iVar11 + iVar9 * iVar14,iVar15 - iVar16);
    }
    if (cVar6 != '\0') {
      if (local_88 == 5) {
        if (bVar3 == 0) {
          pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12810);
          pLVar32 = (LineBreakCategory *)0x1;
          plVar34 = (long *)CreateButton(in_x0,10,pIVar27,false,true);
          *(long **)(in_x0 + 0x108) = plVar34;
          pPVar31 = *(PVZ2UIImage **)(*plVar34 + 0x1a8);
          iVar9 = FUN_0457b86c(0x10);
          PVZ2UIButton::GetImageNormal();
          iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
          iVar11 = FUN_0457b86c(0x14);
          iVar14 = FUN_0457b86c(0xc);
          (*(code *)pPVar31)(plVar34,iVar9 * 5 + iVar10 * 4,iVar11 - iVar14);
        }
        else {
          pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12810);
          pLVar32 = (LineBreakCategory *)0x1;
          plVar34 = (long *)CreateButton(in_x0,10,pIVar27,false,true);
          *(long **)(in_x0 + 0x108) = plVar34;
          uVar12 = FUN_0457b86c(0x10);
          iVar9 = FUN_0457b86c(0x14);
          iVar10 = FUN_0457b86c(0xc);
          pPVar31 = *(PVZ2UIImage **)(*plVar34 + 0x1a8);
          (*(code *)pPVar31)(plVar34,uVar12,(iVar9 * 2 - iVar10) + (int)plVar34[10]);
        }
      }
      else {
        pIVar27 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12810);
        pPVar31 = (PVZ2UIImage *)0x0;
        pLVar32 = (LineBreakCategory *)0x1;
        plVar34 = (long *)CreateButton(in_x0,10,pIVar27,false,true);
        *(long **)(in_x0 + 0x108) = plVar34;
        if (cVar4 == '\0') {
          pcVar35 = *(code **)(*plVar34 + 0x1a8);
          iVar9 = FUN_0457b86c(0x10);
          PVZ2UIButton::GetImageNormal();
          iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
          iVar9 = iVar9 + iVar10 + local_88 * (iVar9 + iVar10);
        }
        else {
          pcVar35 = *(code **)(*plVar34 + 0x1a8);
          iVar9 = FUN_0457b86c(0x10);
          PVZ2UIButton::GetImageNormal();
          iVar10 = PVZ2UIImage::GetWidth((PVZ2UIImage *)local_40);
          iVar9 = iVar9 * local_88 + iVar10 * (local_88 + -1);
        }
        iVar10 = FUN_0457b86c(0x14);
        iVar11 = FUN_0457b86c(0xc);
        (*pcVar35)(plVar34,iVar9,iVar10 - iVar11);
      }
    }
    Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
    cVar4 = PlantFamilyMgr::PlantFamilyIsEnable();
    if (cVar4 == '\0') {
      pPVar31 = (PVZ2UIImage *)0x5a;
      pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xf8);
      Sexy::Color::Color((Color *)local_40,0x5a,0x5a,0x5a);
      PVZ2UIButton::SetNormalColor(pPVar22,(Color *)local_40);
    }
    pWVar36 = in_x0 + 0xe0;
    do {
      if (*(long *)pWVar36 != 0) {
        (**(code **)(*(long *)in_x0 + 0x60))();
      }
      pWVar36 = pWVar36 + 8;
    } while (pWVar36 != in_x0 + 0x110);
    if (cVar6 == '\0') {
      iVar9 = FUN_0457b86c(0x10);
      iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
      *(int *)(in_x0 + 0x114) = local_88 * iVar9 + (local_88 + -1) * iVar10;
      bVar8 = false;
    }
    else {
      iVar9 = FUN_0457b86c(0x10);
      iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
      *(int *)(in_x0 + 0x114) = iVar9 + local_88 * iVar9 + local_88 * iVar10;
      if (local_88 == 5) {
        bVar8 = true;
        *(int *)(in_x0 + 0x118) =
             *(int *)(*(long *)(in_x0 + 0x108) + 0x4c) + *(int *)(*(long *)(in_x0 + 0x108) + 0x54);
      }
      else {
        bVar8 = false;
      }
    }
    psVar30 = (string *)awStack_78;
    std::string::string(local_40,"UIWorldMapPlantLevelUpButton");
    plVar34 = (long *)UIWidget::GetWidgetBySheetName(local_40);
    std::string::~string(local_40);
    nop();
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0xb0))((PVZ2UIImage *)local_40,plVar34);
      pcVar35 = *(code **)(*(long *)in_x0 + 0x1a8);
      FUN_0457b86c(0x32);
      iVar9 = FUN_0457b86c(0x14);
      lVar18 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
      pLVar32 = (LineBreakCategory *)(ulong)*(uint *)(lVar18 + 0x3c);
      uVar2 = (iVar9 + *(uint *)(lVar18 + 0x3c)) * 3;
      pPVar31 = (PVZ2UIImage *)(ulong)uVar2;
      iVar9 = FUN_0457b86c(10);
      psVar30 = (string *)
                (ulong)(uint)(int)(((float)local_3c - (float)(int)uVar2 * 0.5) - (float)iVar9);
      (*pcVar35)();
      if (bVar8) {
        if (bVar3 == 0) {
          iVar9 = FUN_0457b86c(0x14);
          psVar30 = (string *)(ulong)(uint)-iVar9;
          pPVar31 = *(PVZ2UIImage **)(*(long *)in_x0 + 0x1b0);
          (*(code *)pPVar31)();
        }
        else {
          iVar9 = FUN_0457b86c(0x14);
          pPVar31 = *(PVZ2UIImage **)(*(long *)in_x0 + 0x1b0);
          psVar30 = (string *)(ulong)(uint)(-iVar9 - *(int *)(*(long *)(in_x0 + 0x108) + 0x54));
          (*(code *)pPVar31)();
        }
      }
    }
    auVar37 = FUN_0457b820(*(undefined4 *)(pPVar20 + 0x40));
    if (auVar37._0_4_ == 0x1d) {
      lVar18 = Sexy::LazySingleton<TutorialMgr>::GetInstance();
      auVar37 = FUN_0457b830(*(undefined4 *)(lVar18 + 0x10));
      if (auVar37._0_4_ != 0x1d) {
        std::string::string((string *)awStack_78,"");
        lVar18 = *(long *)(in_x0 + 0xe0);
        pLVar32 = (LineBreakCategory *)(ulong)*(uint *)(lVar18 + 0x54);
        Sexy::Insets::Insets
                  ((Insets *)local_40,*(int *)(lVar18 + 0x48) + *(int *)(in_x0 + 0x48),
                   *(int *)(lVar18 + 0x4c) + *(int *)(in_x0 + 0x4c),*(int *)(lVar18 + 0x50),
                   *(uint *)(lVar18 + 0x54));
        psVar30 = (string *)awStack_78;
        pPVar31 = (PVZ2UIImage *)local_40;
        GameMaskUI::ShowMask(lVar18,2);
        std::string::~string((string *)awStack_78);
        nop();
        auVar37._8_8_ = extraout_x1;
        auVar37._0_8_ = extraout_x0;
      }
    }
    cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (auVar37._0_8_,auVar37._8_8_,(LineBreakCategory *)psVar30,
                       (LineBreakCategory *)pPVar31,pLVar32);
    if (cVar4 != '\0') {
      std::string::string((string *)awStack_78,"");
      lVar18 = *(long *)(in_x0 + 0xf8);
      Sexy::Insets::Insets
                ((Insets *)local_40,*(int *)(lVar18 + 0x48) + *(int *)(in_x0 + 0x48),
                 *(int *)(lVar18 + 0x4c) + *(int *)(in_x0 + 0x4c),*(int *)(lVar18 + 0x50),
                 *(int *)(lVar18 + 0x54));
      GameMaskUI::ShowMask(lVar18,2,(string *)awStack_78,(PVZ2UIImage *)local_40);
      std::string::~string((string *)awStack_78);
      nop();
    }
    iVar9 = FUN_0457b820(*(undefined4 *)(pPVar20 + 0x40));
    if (iVar9 == 0x36) {
      std::string::string((string *)awStack_78,"");
      lVar18 = *(long *)(in_x0 + 0xe8);
      Sexy::Insets::Insets
                ((Insets *)local_40,*(int *)(lVar18 + 0x48) + *(int *)(in_x0 + 0x48),
                 *(int *)(lVar18 + 0x4c) + *(int *)(in_x0 + 0x4c),*(int *)(lVar18 + 0x50),
                 *(int *)(lVar18 + 0x54));
      GameMaskUI::ShowMask(lVar18,2,(string *)awStack_78,(PVZ2UIImage *)local_40);
      std::string::~string((string *)awStack_78);
      nop();
      iVar9 = FUN_0457b820(*(undefined4 *)(pPVar20 + 0x40));
    }
    if ((iVar9 == 0x45) && (cVar6 != '\0')) {
      std::string::string((string *)awStack_78,"");
      lVar18 = *(long *)(in_x0 + 0x108);
      Sexy::Insets::Insets
                ((Insets *)local_40,*(int *)(lVar18 + 0x48) + *(int *)(in_x0 + 0x48),
                 *(int *)(lVar18 + 0x4c) + *(int *)(in_x0 + 0x4c),*(int *)(lVar18 + 0x50),
                 *(int *)(lVar18 + 0x54));
      GameMaskUI::ShowMask(lVar18,2,(string *)awStack_78,(PVZ2UIImage *)local_40);
      std::string::~string((string *)awStack_78);
      nop();
    }
    break;
  case 2:
    LawnApp::GetPlatform(gLawnApp);
    FUN_0457b86c(0);
    FUN_0457b86c(0x13b);
    (**(code **)(*(long *)in_x0 + 0x198))();
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12b50);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0xd,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe0) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b126b8,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe0);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    uVar12 = FUN_0457b86c(0x10);
    iVar9 = FUN_0457b86c(0x14);
    iVar10 = FUN_0457b86c(10);
    uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar17 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,uVar12,iVar9 - iVar10,uVar13,uVar17);
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12a30);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0xc,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe8) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12400,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe8);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    iVar11 = FUN_0457b86c(0x14);
    iVar14 = FUN_0457b86c(10);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar10 + iVar9 * 2,iVar11 - iVar14,uVar12,uVar13);
    (**(code **)(*(long *)in_x0 + 0x60))();
    (**(code **)(*(long *)in_x0 + 0x60))();
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    *(int *)(in_x0 + 0x114) = iVar9 * 3 + iVar10 * 2;
    std::string::string(local_40,"UIWorldMapWelfareButton");
    plVar34 = (long *)UIWidget::GetWidgetBySheetName(local_40);
    std::string::~string(local_40);
    nop();
    if (plVar34 == (long *)0x0) break;
    (**(code **)(*plVar34 + 0xb0))(local_40,plVar34);
    lVar18 = *(long *)in_x0;
    uVar28 = 0x13b;
LAB_0457e5a0:
    pcVar35 = *(code **)(lVar18 + 0x1a8);
    FUN_0457b86c(uVar28);
    FUN_0457b86c(0x32);
LAB_0457e5bc:
    FUN_0457b86c(0x14);
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    FUN_0457b86c(10);
    (*pcVar35)();
    break;
  case 4:
    FUN_0457b86c(0);
    FUN_0457b86c(0x1a6);
    (**(code **)(*(long *)in_x0 + 0x198))();
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12388);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0xe,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe0) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12268,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe0);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = FUN_0457b86c(0x14);
    iVar11 = FUN_0457b86c(10);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar9 << 1,iVar10 - iVar11,uVar12,uVar13);
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12ad8);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0xf,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe8) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12788,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe8);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    iVar11 = FUN_0457b86c(0x10);
    uVar12 = FUN_0457b86c(0x14);
    uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar17 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar10 + iVar9 * 2 + iVar11,uVar12,uVar13,uVar17);
    (**(code **)(*(long *)in_x0 + 0x60))();
    (**(code **)(*(long *)in_x0 + 0x60))();
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    *(int *)(in_x0 + 0x114) = iVar9 * 3 + iVar10 * 2;
    std::string::string(local_40,"UIWorldMapTreasureButton");
    plVar34 = (long *)UIWidget::GetWidgetBySheetName(local_40);
    std::string::~string(local_40);
    nop();
    if (plVar34 == (long *)0x0) break;
    (**(code **)(*plVar34 + 0xb0))(local_40,plVar34);
    pcVar35 = *(code **)(*(long *)in_x0 + 0x1a8);
    FUN_0457b86c(0x30);
    goto LAB_0457e5bc;
  case 5:
    FUN_0457b86c(0);
    FUN_0457b86c(0x1a6);
    (**(code **)(*(long *)in_x0 + 0x198))();
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b127c0);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0x12,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe0) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b121c8,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe0);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = FUN_0457b86c(0x14);
    iVar11 = FUN_0457b86c(5);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar9 << 1,iVar10 - iVar11,uVar12,uVar13);
    (**(code **)(*(long *)in_x0 + 0x60))();
    pLVar21 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12690);
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar22 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar22,0x13,(ButtonListener *)(in_x0 + 0xd8),awStack_78,(Color *)local_40);
    *(PVZ2UIButton **)(in_x0 + 0xe8) = pPVar22;
    FUN_05476c50(awStack_78);
    nop();
    pPVar22 = *(PVZ2UIButton **)(in_x0 + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,pLVar21,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b12468,1);
    PVZ2UIButton::SetDialogStates(pPVar22,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    plVar34 = *(long **)(in_x0 + 0xe8);
    pcVar35 = *(code **)(*plVar34 + 0x198);
    iVar9 = FUN_0457b86c(0x10);
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12690);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar11 = FUN_0457b86c(0x10);
    iVar14 = FUN_0457b86c(0x14);
    iVar15 = FUN_0457b86c(5);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    uVar13 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar21);
    (*pcVar35)(plVar34,iVar10 + iVar9 * 2 + iVar11,iVar14 - iVar15,uVar12,uVar13);
    (**(code **)(*(long *)in_x0 + 0x60))();
    iVar9 = FUN_0457b86c(0x10);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar21);
    *(int *)(in_x0 + 0x114) = iVar9 * 3 + iVar10 * 2;
    std::string::string(local_40,"UIWorldMapRiddlesButton");
    plVar34 = (long *)UIWidget::GetWidgetBySheetName(local_40);
    std::string::~string(local_40);
    nop();
    if (plVar34 != (long *)0x0) {
      (**(code **)(*plVar34 + 0xb0))(local_40,plVar34);
      pcVar35 = *(code **)(*(long *)in_x0 + 0x1a8);
      FUN_0457b86c(0x30);
      FUN_0457b86c(0x14);
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
      FUN_0457b86c(10);
      (*pcVar35)();
    }
    AddLaternTips(in_x0);
    AddRedPackTips(in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::WorldMapChooseDialog(EDIALOG_TYPE) */

void __thiscall
WorldMapChooseDialog::WorldMapChooseDialog(WorldMapChooseDialog *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ProfileMgr *this_00;
  BouncingArrow *pBVar4;
  GameMaskUI *this_01;
  long *plVar5;
  undefined8 uVar6;
  LawnApp *pLVar7;
  float fVar8;
  float fVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_068602d0;
  *(undefined **)(this + 0xd8) = &DAT_06860600;
  FUN_05476574(this + 0x128);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x110) = param_2;
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(lVar3 + 0x3c);
  this[0x130] = (WorldMapChooseDialog)0x0;
  this[0x131] = (WorldMapChooseDialog)0x0;
  this[0x132] = (WorldMapChooseDialog)0x0;
  this[0x133] = (WorldMapChooseDialog)0x0;
  this[0x59] = (WorldMapChooseDialog)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_0457b820(*(undefined4 *)(lVar3 + 0x40));
  if (iVar1 != 0x1d) {
    if (iVar1 == 8) {
      *(undefined4 *)(this + 0x11c) = 3;
    }
    else if (iVar1 == 0x17) {
      *(undefined4 *)(this + 0x11c) = 4;
    }
    else if (iVar1 == 0x24) {
      *(undefined4 *)(this + 0x11c) = 5;
    }
    else if (iVar1 == 0x2e) {
      *(undefined4 *)(this + 0x11c) = 6;
    }
    else if (iVar1 == 0x30) {
      *(undefined4 *)(this + 0x11c) = 7;
    }
  }
  InitView();
  iVar1 = *(int *)(this + 0x11c);
  if (iVar1 == 1) {
    if (*(long *)(this + 0x120) != 0) goto LAB_0457f048;
    pBVar4 = GameObject::Create<BouncingArrow>();
    plVar5 = *(long **)(this + 0xe0);
    *(BouncingArrow **)(this + 0x120) = pBVar4;
    *(undefined4 *)(pBVar4 + 0x3c) = 0;
    (**(code **)(*plVar5 + 0x48))(&local_18,plVar5);
    lVar3 = *(long *)(this + 0x120);
    Sexy::Point::Point((Point *)&local_20,(int)((float)local_18 + (float)local_10 * 0.5),
                       (int)((float)local_14 - (float)local_c * 0.5));
    plVar5 = *(long **)(this + 0xe8);
    *(undefined8 *)(lVar3 + 0x30) = local_20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    FUN_0457b828(lVar3 + 0x356,0);
    pLVar7 = gLawnApp;
    fVar8 = (float)FUN_0457b880(0x42820000);
    iVar1 = *(int *)(this + 0x48);
    fVar9 = (float)FUN_0457b880(0x42680000);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,fVar8 + (float)iVar1,fVar9 + (float)*(int *)(this + 0x4c));
    uVar2 = FUN_0457b86c(100);
    uVar6 = *(undefined8 *)(this + 0xe0);
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 3)) {
      if (iVar1 == 4) {
        if (*(long *)(this + 0x120) != 0) goto LAB_0457f048;
        pBVar4 = GameObject::Create<BouncingArrow>();
        plVar5 = *(long **)(this + 0xe0);
        *(BouncingArrow **)(this + 0x120) = pBVar4;
        *(undefined4 *)(pBVar4 + 0x3c) = 0;
        (**(code **)(*plVar5 + 0x48))(&local_18,plVar5);
        lVar3 = *(long *)(this + 0x120);
        Sexy::Point::Point((Point *)&local_20,(int)((float)local_18 + (float)local_10 * 0.5),
                           (int)((float)local_14 - (float)local_c * 0.5));
        plVar5 = *(long **)(this + 0xe8);
        *(undefined8 *)(lVar3 + 0x30) = local_20;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x188))(plVar5,1);
        }
        plVar5 = *(long **)(this + 0xf0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x188))(plVar5,1);
        }
        lVar3 = LawnApp::GetWorldMap(gLawnApp);
        FUN_0457b828(lVar3 + 0x356,0);
        pLVar7 = gLawnApp;
        fVar8 = (float)FUN_0457b880(0x42960000);
        iVar1 = *(int *)(this + 0x48);
        fVar9 = (float)FUN_0457b880(0x42700000);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_28,fVar8 + (float)iVar1,fVar9 + (float)*(int *)(this + 0x4c))
        ;
        uVar2 = FUN_0457b86c(100);
        uVar6 = *(undefined8 *)(this + 0xe0);
      }
      else {
        if (1 < iVar1 - 6U) {
          if ((iVar1 == 5) && (*(long *)(this + 0x120) == 0)) {
            pBVar4 = GameObject::Create<BouncingArrow>();
            *(BouncingArrow **)(this + 0x120) = pBVar4;
            AnimationController::SetDuration((AnimationController *)pBVar4,10000.0);
            plVar5 = *(long **)(this + 0xe0);
            lVar3 = *plVar5;
            *(undefined4 *)(*(long *)(this + 0x120) + 0x3c) = 0;
            (**(code **)(lVar3 + 0x48))(&local_18,plVar5);
            lVar3 = *(long *)(this + 0x120);
            Sexy::Point::Point((Point *)&local_20,(int)((float)local_18 + (float)local_10 * 0.5),
                               (int)((float)local_14 - (float)local_c * 0.5));
            plVar5 = *(long **)(this + 0xe8);
            *(undefined8 *)(lVar3 + 0x30) = local_20;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x188))(plVar5,1);
            }
            plVar5 = *(long **)(this + 0xf0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x188))(plVar5,1);
            }
            plVar5 = *(long **)(this + 0xf8);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x188))(plVar5,1);
            }
            lVar3 = LawnApp::GetWorldMap(gLawnApp);
            FUN_0457b828(lVar3 + 0x356,0);
          }
          goto LAB_0457f048;
        }
        if (*(long *)(this + 0x120) != 0) goto LAB_0457f048;
        pBVar4 = GameObject::Create<BouncingArrow>();
        plVar5 = *(long **)(this + 0xe8);
        *(BouncingArrow **)(this + 0x120) = pBVar4;
        *(undefined4 *)(pBVar4 + 0x3c) = 0;
        (**(code **)(*plVar5 + 0x48))(&local_18,plVar5);
        lVar3 = *(long *)(this + 0x120);
        Sexy::Point::Point((Point *)&local_20,(int)((float)local_18 + (float)local_10 * 0.5),
                           (int)((float)local_14 - (float)local_c * 0.5));
        plVar5 = *(long **)(this + 0xe0);
        *(undefined8 *)(lVar3 + 0x30) = local_20;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x188))(plVar5,1);
        }
        plVar5 = *(long **)(this + 0xf0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x188))(plVar5,1);
        }
        lVar3 = LawnApp::GetWorldMap(gLawnApp);
        FUN_0457b828(lVar3 + 0x356,0);
        pLVar7 = gLawnApp;
        fVar8 = (float)FUN_0457b880(0x432c0000);
        iVar1 = *(int *)(this + 0x48);
        fVar9 = (float)FUN_0457b880(0x42700000);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_28,fVar8 + (float)iVar1,fVar9 + (float)*(int *)(this + 0x4c))
        ;
        uVar2 = FUN_0457b86c(100);
        uVar6 = *(undefined8 *)(this + 0xe8);
      }
      std::string::string((string *)&local_20,"");
      LawnApp::ShowGameMaskUI(local_28,local_24,pLVar7,uVar2,uVar6,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      goto LAB_0457f048;
    }
    if (*(long *)(this + 0x120) != 0) goto LAB_0457f048;
    pBVar4 = GameObject::Create<BouncingArrow>();
    *(BouncingArrow **)(this + 0x120) = pBVar4;
    plVar5 = *(long **)(this + 0xe8);
    lVar3 = *plVar5;
    *(undefined4 *)(pBVar4 + 0x3c) = 0;
    (**(code **)(lVar3 + 0x48))(&local_18,plVar5);
    lVar3 = *(long *)(this + 0x120);
    Sexy::Point::Point((Point *)&local_20,(int)((float)local_18 + (float)local_10 * 0.5),
                       (int)((float)local_14 - (float)local_c * 0.5));
    plVar5 = *(long **)(this + 0xe0);
    *(undefined8 *)(lVar3 + 0x30) = local_20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    FUN_0457b828(lVar3 + 0x356,0);
    pLVar7 = gLawnApp;
    fVar8 = (float)FUN_0457b880(0x432a0000);
    iVar1 = *(int *)(this + 0x48);
    fVar9 = (float)FUN_0457b880(0x42680000);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,fVar8 + (float)iVar1,fVar9 + (float)*(int *)(this + 0x4c));
    uVar2 = FUN_0457b86c(100);
    uVar6 = *(undefined8 *)(this + 0xe8);
  }
  std::string::string((string *)&local_20,"");
  LawnApp::ShowGameMaskUI(local_28,local_24,pLVar7,uVar2,uVar6,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this_01 = (GameMaskUI *)LawnApp::GetGameMaskUI(gLawnApp);
  GameMaskUI::SetToFront(this_01);
LAB_0457f048:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChooseDialog::Draw(Sexy::Graphics*) */

void __thiscall WorldMapChooseDialog::Draw(WorldMapChooseDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  Image *pIVar9;
  LotteryResultProgressBar *pLVar10;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(int *)(this + 0x110) - 4U < 2) {
    iVar1 = FUN_0457b86c(0x10);
    iVar2 = FUN_0457b86c(0x14);
    iVar4 = *(int *)(this + 0x114);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar4,*(int *)(lVar7 + 0x3c));
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    Draw3SliceImage(param_1,aIStack_18,uVar8);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12360);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    iVar4 = *(int *)(lVar7 + 0x3c);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12360);
    iVar1 = FUN_0457b86c(0x14);
    Sexy::Graphics::DrawImageMirror
              (param_1,pIVar9,0,(int)((float)iVar1 + (float)(iVar4 - *(int *)(lVar7 + 0x3c)) * 0.5),
               true);
  }
  else if (*(int *)(this + 0x110) == 1) {
    iVar4 = FUN_0457b86c(0);
    iVar1 = FUN_0457b86c(0x14);
    Sexy::Insets::Insets(aIStack_18,iVar4,iVar1,*(int *)(this + 0x114),*(int *)(this + 0x118));
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    Draw9SliceImage(param_1,aIStack_18,uVar8);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b127e8);
    iVar4 = *(int *)(this + 0x114);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b127e8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    iVar3 = FUN_0457b86c(0x32);
    iVar5 = FUN_0457b86c(0x14);
    iVar1 = *(int *)(this + 0x118);
    iVar6 = FUN_0457b86c(10);
    Sexy::Graphics::DrawImage(param_1,pIVar9,(iVar4 / 2 - iVar2) + iVar3,(iVar5 + iVar1) - iVar6);
  }
  else {
    iVar1 = FUN_0457b86c(0);
    iVar2 = FUN_0457b86c(0x14);
    iVar4 = *(int *)(this + 0x114);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar4,*(int *)(lVar7 + 0x3c));
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    Draw3SliceImage(param_1,aIStack_18,uVar8);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b127e8);
    iVar1 = FUN_0457b86c(0x32);
    iVar4 = *(int *)(this + 0x114);
    pLVar10 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b127e8);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b12738);
    iVar3 = FUN_0457b86c(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar9,(iVar1 + iVar4 / 2) - iVar2,iVar3 + *(int *)(lVar7 + 0x3c));
  }
  if (*(long *)(this + 0x120) != 0) {
    Sexy::Widget::DeferOverlay((Widget *)this,1);
  }
  if ((*(int *)(this + 0x110) == 0) &&
     (((this[0x130] != (WorldMapChooseDialog)0x0 || (this[0x131] != (WorldMapChooseDialog)0x0)) ||
      (this[0x132] != (WorldMapChooseDialog)0x0)))) {
    Sexy::Widget::DeferOverlay((Widget *)this,1);
  }
  if (this[0x133] != (WorldMapChooseDialog)0x0) {
    iVar4 = FUN_0457b86c(0x69);
    iVar1 = FUN_0457b86c(0xffffffbf);
    iVar2 = FUN_0457b86c(0xdc);
    iVar3 = FUN_0457b86c(0x50);
    Sexy::Insets::Insets(aIStack_18,iVar4,iVar1,iVar2,iVar3);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b125b0);
    Draw9SliceImage(param_1,aIStack_18,uVar8);
    TodStringTranslate(L"[PLANT_FAMILY_ENABLE_NOTICE]");
    iVar4 = FUN_0457b86c(0x73);
    iVar1 = FUN_0457b86c(0xffffffc1);
    iVar2 = FUN_0457b86c(200);
    iVar3 = FUN_0457b86c(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar1,iVar2,iVar3);
    uVar8 = PrimeText_Game::Typeface_FZCuYuan_20;
    Sexy::Insets::Insets(aIStack_18,0x8b,0x45,0x13,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

