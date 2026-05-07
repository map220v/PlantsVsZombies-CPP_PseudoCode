// Class: DailySignActivityScrollPanel


/* DailySignActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
DailySignActivityScrollPanel::RemoveAllDungeonWidget(DailySignActivityScrollPanel *this)

{
  std::vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>>::clear
            ((vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityScrollPanel::~DailySignActivityScrollPanel() */

void __thiscall
DailySignActivityScrollPanel::~DailySignActivityScrollPanel(DailySignActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d7f48;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d7c20;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0xf8));
  std::vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>>::~vector
            ((vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignActivityScrollPanel::~DailySignActivityScrollPanel() */

void __thiscall
DailySignActivityScrollPanel::~DailySignActivityScrollPanel(DailySignActivityScrollPanel *this)

{
  ~DailySignActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* DailySignActivityScrollPanel::loadData(Sexy::TRect<int>&, DailySignBonus&) */

void __thiscall
DailySignActivityScrollPanel::loadData
          (DailySignActivityScrollPanel *this,TRect *param_1,DailySignBonus *param_2)

{
  (**(code **)(*(long *)this + 0x1a0))();
  DailySignBonus::operator=((DailySignBonus *)(this + 0xf8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityScrollPanel::InitView() */

void __thiscall DailySignActivityScrollPanel::InitView(DailySignActivityScrollPanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SalesProgressBar *this_00;
  DailySignActivityWidget *pDVar8;
  vector *pvVar9;
  char *__s;
  TGALogMgr *pTVar10;
  Insets *__n;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  code *pcVar14;
  DailySignActivityWidget *local_78;
  Insets aIStack_70 [8];
  string asStack_68 [4];
  int local_64;
  Insets aIStack_58 [40];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03972124(5);
  *(undefined4 *)(this + 0x54) = uVar1;
  RemoveAllDungeonWidget(this);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  __n = aIStack_58;
  std::string::string(asStack_30,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (SalesProgressBar *)StringHelper::ToImage(asStack_30,false);
  std::string::~string(asStack_30);
  nop();
  if (this_00 != (SalesProgressBar *)0x0) {
    iVar7 = *(int *)(this + 0x50);
    lVar11 = 0;
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    iVar3 = FUN_03972124(0x14);
    do {
      uVar13 = *(undefined8 *)(this + 0x110);
      iVar4 = (int)lVar11;
      iVar6 = FUN_03971e64(uVar13,*(undefined8 *)(this + 0x118));
      if (iVar6 <= iVar4) break;
      bVar12 = false;
      pvVar9 = (vector *)FUN_03971e78(uVar13,lVar11);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_30,pvVar9)
      ;
      if (*(int *)(this + 0xf8) == iVar4) {
        bVar12 = (byte)this[0xfc] ^ 1;
      }
      lVar11 = lVar11 + 1;
      pDVar8 = ::operator_new(0x1b8);
      DailySignActivityWidget::DailySignActivityWidget
                (pDVar8,iVar4,*(int *)(this + 0xf8),(bool)bVar12,(vector *)asStack_30);
      local_78 = pDVar8;
      iVar6 = FUN_03972124(5);
      Sexy::Insets::Insets(aIStack_70,0,iVar6 + *(int *)(this + 0x54),iVar7,iVar2 - iVar3);
      pDVar8 = local_78;
      pcVar14 = *(code **)(*(long *)local_78 + 0x1a0);
      iVar4 = FUN_03972124(5);
      iVar6 = *(int *)(this + 0x54);
      iVar5 = FUN_03972124(0x32);
      Sexy::Insets::Insets
                (aIStack_58,(*(int *)(this + 0x50) - iVar7) / 2,iVar4 + iVar6,iVar5 + iVar7,local_64
                );
      (*pcVar14)(pDVar8,aIStack_58);
      DailySignActivityWidget::Init(local_78);
      __n = *(Insets **)(*(long *)this + 0x60);
      (*(code *)__n)(this,local_78);
      std::vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>>::push_back
                ((vector<DailySignActivityWidget*,std::allocator<DailySignActivityWidget*>> *)
                 (this + 0xe0),&local_78);
      iVar6 = FUN_03972124(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 + (iVar2 - iVar3);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_30);
    } while (lVar11 != 7);
    iVar7 = FUN_03972124(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar7;
    iVar7 = FUN_03972124(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar7;
    TGATenYearsData::TGATenYearsData((TGATenYearsData *)aIStack_70);
    std::string::append((string *)aIStack_70,"1",(size_t)__n);
    DString::DString((DString *)asStack_30,*(int *)(this + 0xf8));
    __s = (char *)DString::c_str((DString *)asStack_30);
    std::string::append(asStack_68,__s,(size_t)__n);
    DString::~DString((DString *)asStack_30);
    pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DownloadUnit::DownloadUnit((DownloadUnit *)asStack_30,(DownloadUnit *)aIStack_70);
    TGALogMgr::LogDailySignActivity(pTVar10,asStack_30);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)asStack_30);
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)aIStack_58);
    std::string::append((string *)aIStack_58,"1",(size_t)__n);
    pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)asStack_30,(TGAArtifactPresentData *)aIStack_58);
    TGALogMgr::LogNoviceSevenDays(pTVar10,asStack_30);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_30);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aIStack_58);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)aIStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityScrollPanel::DailySignActivityScrollPanel(Sexy::TRect<int>&, DailySignBonus&) */

void __thiscall
DailySignActivityScrollPanel::DailySignActivityScrollPanel
          (DailySignActivityScrollPanel *this,TRect *param_1,DailySignBonus *param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d7c20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d7f48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  DailySignBonus::DailySignBonus((DailySignBonus *)(this + 0xf8));
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotify7DaysLoginReward);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_7DaysLoginReward_const*,Sexy::CBMemberTranslatorX<DailySignActivityScrollPanel,void(DailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>>
            ((MessageRouter *)puVar1,Message::GL7DaysLoginReward,&local_50);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  DailySignBonus::operator=((DailySignBonus *)(this + 0xf8),param_2);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityScrollPanel::OnNotify7DaysLoginReward(bool, S2C_7DaysLoginReward const*) */

void __thiscall
DailySignActivityScrollPanel::OnNotify7DaysLoginReward
          (DailySignActivityScrollPanel *this,bool param_1,S2C_7DaysLoginReward *param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  TGALogMgr *pTVar9;
  TGANFSLinkageData *__n;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_218;
  undefined8 local_210;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_200 [24];
  undefined8 local_1e8;
  string asStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0 [2];
  string asStack_1c0 [16];
  undefined1 auStack_1b0 [8];
  int local_1a8;
  int local_1a4;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar10 = 0;
    LawnApp::ShowSevenDaysRewardView(gLawnApp,(vector *)(param_2 + 0x18));
    iVar4 = *(int *)(param_2 + 0x30);
    this[0xfc] = (DailySignActivityScrollPanel)0x1;
    *(int *)(this + 0xf8) = iVar4;
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::UpdateSumDays,iVar4);
    (**(code **)(*(long *)this + 0x310))(this);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_218);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_200);
    while( true ) {
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar5 = FUN_03971e84(uVar11,*(undefined8 *)(param_2 + 0x20));
      if (uVar5 <= uVar10) break;
      piVar7 = (int *)FUN_03971e90(uVar11,uVar10);
      GetGameItemInfo(*piVar7,0x7fffffff,0);
      if (local_1a8 != 0) {
        if (local_1a4 == 2) {
          iVar4 = PlantChipNameMapperServerID::GetInstance();
          FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
          NameMapperBase::GetNameForId(iVar4);
          uVar3 = PlayerInfo::GetPlantPieceCount(this_01,(string *)local_1d0,false);
        }
        else if (local_1a4 == 8) {
          iVar4 = AvatarChipNameMapperServerID::GetInstance();
          FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
          NameMapperBase::GetNameForId(iVar4);
          uVar3 = PlayerInfo::GetAvatarPiecesCount(this_01,(TGANFSLinkageData *)local_1d0,0,0);
        }
        else {
          if (local_1a4 != 0x20) goto LAB_03978b14;
          iVar4 = PlantAccessoryPieceMapper::GetInstance();
          FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
          NameMapperBase::GetNameForId(iVar4);
          uVar3 = PlayerInfo::GetAccessoryPieceCount(this_01,(string *)local_1d0,false);
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,uVar3);
        piVar7 = (int *)FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_218,piVar7);
        lVar6 = FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)&local_218,(int *)(lVar6 + 4));
        piVar7 = (int *)FUN_03971e90(*(undefined8 *)(param_2 + 0x18),uVar10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_200,piVar7);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_200,(int *)&local_1e8);
        std::string::~string((string *)local_1d0);
      }
LAB_03978b14:
      uVar10 = uVar10 + 1;
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
    }
    lVar6 = FUN_03971e58(local_218,local_210);
    puVar1 = gMessageRouter;
    if (lVar6 != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x30);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)local_1d0,(vector *)&local_218);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)&local_1a8,(vector *)avStack_200);
      MessageRouter::
      Post<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>&,int,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>>
                ((MessageRouter *)puVar1,Message::DoubleFestivalDailyReward,uVar3,
                 (TGANFSLinkageData *)local_1d0,(GAME_ITEM_INFO *)&local_1a8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_1a8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_1d0);
    }
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    __n = (TGANFSLinkageData *)local_1d0;
    std::string::string((string *)&local_1a8,"");
    FUN_05462980(auStack_178,(GAME_ITEM_INFO *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    local_1e8 = FUN_03972650(*(undefined8 *)(param_2 + 0x18));
    local_1d0[0] = FUN_039726a0(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_1e8,(__normal_iterator *)local_1d0), bVar2
          ) {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1e8);
      __n = (TGANFSLinkageData *)0x0;
      ProfileChangeItemAmount(*piVar7,piVar7[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
      uVar11 = FUN_0546065c(auStack_168,*piVar7);
      uVar11 = FUN_054603b8(uVar11,&DAT_05593348);
      uVar11 = FUN_0546065c(uVar11,piVar7[1]);
      FUN_054603b8(uVar11,&DAT_05594620);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1e8);
    }
    TGATenYearsData::TGATenYearsData((TGATenYearsData *)&local_1e8);
    std::string::append((string *)&local_1e8,"2",(size_t)__n);
    DString::DString((DString *)&local_1a8,*(int *)(this + 0xf8));
    pcVar8 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append(asStack_1e0,pcVar8,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    FUN_05462824((GAME_ITEM_INFO *)&local_1a8,auStack_178);
    FUN_05474278(auStack_1d8,(GAME_ITEM_INFO *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DownloadUnit::DownloadUnit((DownloadUnit *)&local_1a8,(DownloadUnit *)&local_1e8);
    TGALogMgr::LogDailySignActivity(pTVar9,(GAME_ITEM_INFO *)&local_1a8);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_1a8);
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)local_1d0);
    std::string::append((string *)local_1d0,"3",(size_t)__n);
    DString::DString((DString *)&local_1a8,*(int *)(this + 0xf8));
    pcVar8 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append(asStack_1c0,pcVar8,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    FUN_05462824((GAME_ITEM_INFO *)&local_1a8,auStack_178);
    FUN_05474278(auStack_1b0,(GAME_ITEM_INFO *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)&local_1a8,(TGAArtifactPresentData *)local_1d0);
    TGALogMgr::LogNoviceSevenDays(pTVar9,(GAME_ITEM_INFO *)&local_1a8);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_1a8);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_1d0);
    Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)&local_1e8);
    FUN_054617bc(auStack_178);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_200);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_218);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

