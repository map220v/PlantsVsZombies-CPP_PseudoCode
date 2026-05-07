// Class: UIPennyClassroomShop


/* UIPennyClassroomShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPennyClassroomShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyClassroomShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPennyClassroomShop::ScrollTargetReached(UIPennyClassroomShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPennyClassroomShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPennyClassroomShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyClassroomShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPennyClassroomShop::ScrollTargetInterrupted(UIPennyClassroomShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::GetLayoutName() */

void __thiscall UIPennyClassroomShop::GetLayoutName(UIPennyClassroomShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyClassroomShopNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPennyClassroomShop::ButtonDepress(int) */

void __thiscall UIPennyClassroomShop::ButtonDepress(UIPennyClassroomShop *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<UIPennyClassroomShop>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPennyClassroomShop::ButtonDepress(int) */

void __thiscall UIPennyClassroomShop::ButtonDepress(UIPennyClassroomShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::refreshMaterial() */

void __thiscall UIPennyClassroomShop::refreshMaterial(UIPennyClassroomShop *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetMaterialNum(this_01,0x5b6d,*(int *)(this + 0x170));
  std::string::string(asStack_10,"CoinText");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x170));
    UIWidgetText::SetString(this_02,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroomShop::UIPennyClassroomShop() */

void __thiscall UIPennyClassroomShop::UIPennyClassroomShop(UIPennyClassroomShop *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPennyClassroomShop>::UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069ce530;
  *(undefined **)(this + 0xd8) = &DAT_069ce890;
  *(undefined ***)(this + 0x138) = &PTR__UIPennyClassroomShop_069ce8d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x158));
  std::vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>>::
  clear((vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>> *)
        (this + 0x140));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_70);
  return;
}


/* UIPennyClassroomShop::~UIPennyClassroomShop() */

void __thiscall UIPennyClassroomShop::~UIPennyClassroomShop(UIPennyClassroomShop *this)

{
  *(undefined ***)(this + 0x138) = &PTR__UIPennyClassroomShop_069ce8d8;
  *(undefined ***)this = &PTR_GetClass_069ce530;
  *(undefined **)(this + 0xd8) = &DAT_069ce890;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x158))
  ;
  std::vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>>::
  ~vector((vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>> *
          )(this + 0x140));
  UISingletonDialog<UIPennyClassroomShop>::~UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomShop> *)this);
  return;
}


/* non-virtual thunk to UIPennyClassroomShop::~UIPennyClassroomShop() */

void __thiscall UIPennyClassroomShop::~UIPennyClassroomShop(UIPennyClassroomShop *this)

{
  ~UIPennyClassroomShop(this + -0x138);
  return;
}


/* UIPennyClassroomShop::~UIPennyClassroomShop() */

void __thiscall UIPennyClassroomShop::~UIPennyClassroomShop(UIPennyClassroomShop *this)

{
  ~UIPennyClassroomShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPennyClassroomShop::~UIPennyClassroomShop() */

void __thiscall UIPennyClassroomShop::~UIPennyClassroomShop(UIPennyClassroomShop *this)

{
  ~UIPennyClassroomShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::initWidgets(std::vector<PennyClassroomShopData,
   std::allocator<PennyClassroomShopData> >) */

void __thiscall UIPennyClassroomShop::initWidgets(UIPennyClassroomShop *this,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PennyClassroomShopCommonWidget *this_02;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  NameMapperBase *this_03;
  ProfileMgr *this_04;
  PlayerInfo *this_05;
  code *pcVar17;
  PennyClassroomShopCommonWidget *local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"ItemContainer");
  plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>>::
  clear((vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>> *)
        (this + 0x140));
  (**(code **)(*plVar12 + 0x80))(plVar12,1,1);
  uVar13 = FUN_04de7fa0(*param_2,param_2[1]);
  iVar3 = FUN_04de7880((int)plVar12[10]);
  iVar4 = FUN_04de7884(*(undefined4 *)((long)plVar12 + 0x54));
  iVar5 = FUN_04de8b64(6);
  iVar6 = FUN_04de8b64(1);
  iVar7 = FUN_04de8b64(0x14);
  iVar8 = FUN_04de8b64(10);
  iVar1 = (iVar3 + iVar5 * -2 + iVar7 * -2) / 3;
  this_00 = ::operator_new(0x248);
  iVar3 = iVar7 + (iVar4 + iVar6 * -2 + iVar8 * -2) / 2;
  iVar8 = iVar3 + iVar8;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar4 = FUN_04de7880((int)plVar12[10]);
  iVar9 = FUN_04de7884(*(undefined4 *)((long)plVar12 + 0x54));
  Sexy::Insets::Insets(aIStack_40,0,0,iVar4,iVar9);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*plVar12 + 0x60))(plVar12,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar10 = FUN_04de7880((int)plVar12[10]);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar10,iVar6 + iVar8 * (int)((float)uVar13 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  uVar13 = 0;
  while( true ) {
    iVar4 = (int)uVar13;
    uVar15 = FUN_04de7fa0(*param_2,param_2[1]);
    if (uVar15 <= uVar13) break;
    Sexy::Insets::Insets
              (aIStack_30,iVar5 + (iVar1 + iVar7) * (iVar4 % 3),iVar6 + iVar8 * (iVar4 / 3),iVar1,
               iVar3);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_20);
    piVar16 = (int *)FUN_04de7fd0(*param_2,uVar13);
    local_20 = *piVar16;
    local_1c = piVar16[1];
    local_18 = 0x5b6d;
    local_14 = piVar16[2];
    this_03 = (NameMapperBase *)ArtifactMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsId(this_03,local_20);
    if (cVar2 == '\0') {
      lVar14 = FUN_04de7fd0(*param_2,uVar13);
      local_10 = (uint)(*(int *)(lVar14 + 0x10) != *(int *)(lVar14 + 0xc));
    }
    else {
      this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_04);
      uVar11 = PlayerInfo::IsArtifactUnlocked(this_05,local_20);
      local_10 = uVar11 & 0xff ^ 1;
    }
    this_02 = ::operator_new(0x1c8);
    PennyClassroomShopCommonWidget::PennyClassroomShopCommonWidget(this_02,iVar4);
    pcVar17 = *(code **)(*(long *)this_02 + 0x1a0);
    this_02[0x59] = (PennyClassroomShopCommonWidget)0x0;
    local_48 = this_02;
    (*pcVar17)(this_02,aIStack_30);
    FUN_04de7938(local_48 + 0x1b8,-iVar7);
    lVar14 = FUN_04de7fd0(*param_2,uVar13);
    PVZ1ModeShopCommonWidget::SetBuyTimes
              ((PVZ1ModeShopCommonWidget *)local_48,*(int *)(lVar14 + 0x10),*(int *)(lVar14 + 0xc));
    (**(code **)(*(long *)local_48 + 0x310))(local_48,(string *)&local_20);
    FUN_04de841c((PVZ1ModeShopCommonWidget *)(local_48 + 0x170));
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_48);
    std::vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>>::
    push_back((vector<PennyClassroomShopCommonWidget*,std::allocator<PennyClassroomShopCommonWidget*>>
               *)(this + 0x140),&local_48);
    uVar13 = uVar13 + 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::InitView(NetworkPennyClassroomData) */

void __thiscall
UIPennyClassroomShop::InitView(UIPennyClassroomShop *this,NetworkPennyClassroomData *param_2)

{
  vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x158),param_2);
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::vector
            (avStack_20,(vector *)(this + 0x1d8));
  initWidgets(this,avStack_20);
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::~vector(avStack_20);
  refreshMaterial(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIPennyClassroomShop::NotifyRefreshActivityList
          (UIPennyClassroomShop *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_9c = 0x2a5b;
  local_8 = ___stack_chk_guard;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_04de78e8(local_80);
    if ((cVar2 != '\0') && (local_70 == '\0')) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      UISingletonDialog<UIPennyClassroomShop>::CloseDialog();
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomShop::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIPennyClassroomShop::OnShopBuyFinish
          (UIPennyClassroomShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  DaveTreasureDataManager *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidgetText *this_03;
  char *pcVar6;
  TGALogMgr *this_04;
  ActivityManager *this_05;
  DString *__n;
  ulong uVar7;
  undefined8 uVar8;
  int local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  DString aDStack_1d0 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1c0 [24];
  GAME_ITEM_INFO aGStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1) && (*(int *)(param_2 + 0x14) == 0xc)) && (*(int *)(param_2 + 0x20) == 0x5b6d)) {
    uVar8 = *(undefined8 *)(this + 0x140);
    uVar4 = FUN_04de7f8c(uVar8,*(undefined8 *)(this + 0x148));
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      puVar5 = (undefined8 *)FUN_04de7f98(uVar8,uVar7);
      if ((PVZ1ModeShopCommonWidget *)*puVar5 != (PVZ1ModeShopCommonWidget *)0x0) {
        cVar2 = PVZ1ModeShopCommonWidget::CheckShopItem((PVZ1ModeShopCommonWidget *)*puVar5,param_2)
        ;
        if (cVar2 != '\0') {
          puVar5 = (undefined8 *)FUN_04de7f98(*(undefined8 *)(this + 0x140),uVar7);
          PVZ1ModeShopCommonWidget::UpdateShopCommonWidget((S2C_ShopItemPurchaseInfo *)*puVar5);
          break;
        }
        uVar8 = *(undefined8 *)(this + 0x140);
        uVar4 = FUN_04de7f8c(uVar8,*(undefined8 *)(this + 0x148));
      }
    }
    ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1a8);
    iVar1 = *(int *)(param_2 + 0x18);
    std::string::string((string *)aGStack_1a8,"");
    uVar3 = operator|(0x10,8);
    FUN_05462618(auStack_178,aGStack_1a8,uVar3);
    std::string::~string((string *)aGStack_1a8);
    nop();
    uVar8 = FUN_0546065c(auStack_168,iVar1);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    FUN_0546065c(uVar8,*(undefined4 *)(param_2 + 0x1c));
    ProfileChangeItemAmount(iVar1,*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1a8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1c0);
    local_1dc = *(undefined4 *)(param_2 + 0x1c);
    local_1d8 = 0;
    local_1e0 = iVar1;
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1c0,
               (LotteryBonus *)&local_1e0);
    this_00 = (DaveTreasureDataManager *)
              Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aGStack_1a8);
    DaveTreasureDataManager::ShowBonus(this_00,(vector *)avStack_1c0,(vector *)aGStack_1a8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)aGStack_1a8);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    local_1e4 = PlayerInfo::GetMaterialNum(this_02,0x5b6d);
    __n = aDStack_1d0;
    std::string::string((string *)aGStack_1a8,"CoinText");
    this_03 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aGStack_1a8);
    std::string::~string((string *)aGStack_1a8);
    nop();
    if (this_03 != (UIWidgetText *)0x0) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1e4);
      UIWidgetText::SetString(this_03,(string *)aGStack_1a8);
      std::string::~string((string *)aGStack_1a8);
    }
    TGASecretStore::TGASecretStore((TGASecretStore *)aGStack_1a8);
    DString::DString(aDStack_1d0,3);
    pcVar6 = (char *)DString::c_str(aDStack_1d0);
    std::string::append((string *)aGStack_1a8,pcVar6,(size_t)__n);
    DString::~DString(aDStack_1d0);
    DString::DString(aDStack_1d0,local_1e4);
    pcVar6 = (char *)DString::c_str(aDStack_1d0);
    std::string::append(asStack_1a0,pcVar6,(size_t)__n);
    DString::~DString(aDStack_1d0);
    DString::DString(aDStack_1d0,*(int *)(param_2 + 0x24));
    pcVar6 = (char *)DString::c_str(aDStack_1d0);
    std::string::append(asStack_198,pcVar6,(size_t)__n);
    DString::~DString(aDStack_1d0);
    FUN_05462824(aDStack_1d0,auStack_178);
    FUN_05474278(auStack_188,aDStack_1d0);
    std::string::~string((string *)aDStack_1d0);
    this_04 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPennyClassroom(this_04,(TGAPennyClassroomData *)aGStack_1a8);
    this_05 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_05,0x2a5b,false,0);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aGStack_1a8);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_1c0);
    FUN_054617bc(auStack_178);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

