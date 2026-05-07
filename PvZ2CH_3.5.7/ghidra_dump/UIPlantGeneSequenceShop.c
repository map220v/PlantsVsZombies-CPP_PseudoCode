// Class: UIPlantGeneSequenceShop


/* UIPlantGeneSequenceShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPlantGeneSequenceShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantGeneSequenceShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPlantGeneSequenceShop::ScrollTargetReached(UIPlantGeneSequenceShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPlantGeneSequenceShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPlantGeneSequenceShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantGeneSequenceShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPlantGeneSequenceShop::ScrollTargetInterrupted
          (UIPlantGeneSequenceShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSequenceShop::GetLayoutName() */

void __thiscall UIPlantGeneSequenceShop::GetLayoutName(UIPlantGeneSequenceShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantGeneSequenceShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantGeneSequenceShop::ButtonDepress(int) */

void __thiscall UIPlantGeneSequenceShop::ButtonDepress(UIPlantGeneSequenceShop *this,int param_1)

{
  PlantGeneEnhancementView *this_00;
  
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIPlantGeneSequenceShop>::CloseDialog();
  this_00 = (PlantGeneEnhancementView *)LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  PlantGeneEnhancementView::CheckTips(this_00);
  return;
}


/* non-virtual thunk to UIPlantGeneSequenceShop::ButtonDepress(int) */

void __thiscall UIPlantGeneSequenceShop::ButtonDepress(UIPlantGeneSequenceShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSequenceShop::NotifyShopBuyFinishDetails(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIPlantGeneSequenceShop::NotifyShopBuyFinishDetails
          (UIPlantGeneSequenceShop *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  uint uVar1;
  int iVar2;
  CommonRewardDisplay *this_00;
  Widget *pWVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  TGALogMgr *this_03;
  size_t __n;
  string asStack_68 [8];
  function<bool(Sexy::Touch_const&)> afStack_60 [32];
  GAME_ITEM_INFO aGStack_40 [40];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (*(int *)(param_2 + 0x14) == 0xd)) {
    this_00 = (CommonRewardDisplay *)UISingletonDialog<CommonRewardDisplay>::ShowDialog();
    ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_40);
    pWVar3 = (Widget *)
             UIRewardFrameSelect::CreateUIRewardFrame
                       (*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),true);
    CommonRewardDisplay::AddItemWidget(this_00,pWVar3);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string((string *)aGStack_40,"mat_univeral_gene_sequence");
    iVar2 = PlayerInfo::GetMaterialNum(this_02,(string *)aGStack_40);
    std::string::~string((string *)aGStack_40);
    nop();
    std::string::string((string *)aGStack_40,"mat_univeral_gene_sequence");
    uVar1 = iVar2 - *(int *)(param_2 + 0x24);
    __n = (size_t)uVar1;
    PlayerInfo::SetMaterialNum(this_02,(string *)aGStack_40,uVar1);
    std::string::~string((string *)aGStack_40);
    nop();
    FUN_03800158(afStack_60,this);
    CommonRewardDisplay::SetCloseFuction(this_00,afStack_60);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
    MessageRouter::Post((_func_void *)gMessageRouter);
    TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)aGStack_40);
    std::string::append((string *)aGStack_40,"4",__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(param_2 + 0x24));
    FUN_05474278(auStack_18,asStack_68);
    std::string::~string(asStack_68);
    Sexy::StrFormat("%d,%d;",asStack_68,(ulong)*(uint *)(param_2 + 0x18),
                    (ulong)*(uint *)(param_2 + 0x1c));
    FUN_05474278(auStack_10,asStack_68);
    std::string::~string(asStack_68);
    this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogGeneEnhancementData(this_03,(TGAGeneEnhancementData *)aGStack_40);
    TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlantGeneSequenceShop::UIPlantGeneSequenceShop() */

void __thiscall UIPlantGeneSequenceShop::UIPlantGeneSequenceShop(UIPlantGeneSequenceShop *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPlantGeneSequenceShop>::UISingletonDialog
            ((UISingletonDialog<UIPlantGeneSequenceShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066a0a10;
  *(undefined **)(this + 0xd8) = &DAT_066a0d70;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantGeneSequenceShop_066a0db8;
  PlantGeneEnhancementConfig::PlantGeneEnhancementConfig
            ((PlantGeneEnhancementConfig *)(this + 0x140));
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyShopBuyFinishDetails);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIPlantGeneSequenceShop,void(UIPlantGeneSequenceShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_40);
  return;
}


/* UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop() */

void __thiscall UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop(UIPlantGeneSequenceShop *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066a0d70;
  *(undefined ***)this = &PTR_GetClass_066a0a10;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantGeneSequenceShop_066a0db8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantGeneEnhancementConfig::~PlantGeneEnhancementConfig
            ((PlantGeneEnhancementConfig *)(this + 0x140));
  UISingletonDialog<UIPlantGeneSequenceShop>::~UISingletonDialog
            ((UISingletonDialog<UIPlantGeneSequenceShop> *)this);
  return;
}


/* non-virtual thunk to UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop() */

void __thiscall UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop(UIPlantGeneSequenceShop *this)

{
  ~UIPlantGeneSequenceShop(this + -0x138);
  return;
}


/* UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop() */

void __thiscall UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop(UIPlantGeneSequenceShop *this)

{
  ~UIPlantGeneSequenceShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop() */

void __thiscall UIPlantGeneSequenceShop::~UIPlantGeneSequenceShop(UIPlantGeneSequenceShop *this)

{
  ~UIPlantGeneSequenceShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSequenceShop::InitView() */

void __thiscall UIPlantGeneSequenceShop::InitView(UIPlantGeneSequenceShop *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2800];
  string asStack_1f8 [496];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_038003cc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_1f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantGeneSequenceShop::CreatShopItem() */

void __thiscall UIPlantGeneSequenceShop::CreatShopItem(UIPlantGeneSequenceShop *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  UIPlantGeneSequenceShop *local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x158);
  local_28 = this;
  std::string::string(asStack_20,"Widget_White");
  uVar15 = 0;
  uVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Green");
  uVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Blue");
  uVar4 = UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Purple");
  uVar5 = UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"Widget_Orange");
  uVar6 = UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  lVar7 = LawnApp::GetPlantGeneEnhancementView(gLawnApp);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)asStack_20,(vector *)(lVar7 + 0x160));
  FUN_03810e84(uVar8,uVar9,asStack_20);
  BundleItem::~BundleItem((BundleItem *)asStack_20);
  uVar8 = *(undefined8 *)(this + 0x158);
  lVar10 = FUN_037fea04(uVar8,*(undefined8 *)(this + 0x160));
  if (lVar10 != 0) {
    do {
      lVar14 = 0;
      lVar10 = FUN_037fea2c(uVar8,uVar15);
      iVar1 = GeneEnhancement::TransToGeneValue(*(int *)(lVar10 + 4));
      uVar9 = *(undefined8 *)(lVar7 + 0x160);
      lVar10 = FUN_037fe598(uVar9,*(undefined8 *)(lVar7 + 0x168));
      uVar8 = *(undefined8 *)(this + 0x158);
      if (lVar10 != 0) {
        do {
          piVar11 = (int *)FUN_037fe9b8(uVar9,lVar14);
          if (iVar1 == *piVar11) {
            lVar13 = FUN_037fea2c(uVar8,uVar15);
            *(int *)(lVar13 + 0x1c) = (int)lVar14 + 1;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar10);
      }
      uVar15 = uVar15 + 1;
      uVar12 = FUN_037fea04(uVar8,*(undefined8 *)(this + 0x160));
    } while (uVar15 < uVar12);
  }
  FUN_03802b78(&local_28,uVar2,this + 0x1a0,this_00,0);
  FUN_03802b78(&local_28,uVar3,this + 0x1a8,this_00,1);
  FUN_03802b78(&local_28,uVar4,this + 0x1b0,this_00,2);
  FUN_03802b78(&local_28,uVar5,this + 0x1b8,this_00,3);
  FUN_03802b78(&local_28,uVar6,this + 0x1c0,this_00,4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

