// Class: GiftFoReturnSignWidget


/* GiftFoReturnSignWidget::GiftFoReturnSignWidget() */

void __thiscall GiftFoReturnSignWidget::GiftFoReturnSignWidget(GiftFoReturnSignWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06640d50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06641078;
  GiftFoReturnTaskRewardInfo::GiftFoReturnTaskRewardInfo
            ((GiftFoReturnTaskRewardInfo *)(this + 0xe8));
  FUN_05476574(this + 0x118);
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnSignWidget::Draw(Sexy::Graphics*) */

void __thiscall GiftFoReturnSignWidget::Draw(GiftFoReturnSignWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Image *pIVar2;
  undefined8 *puVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 6) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2410);
    Draw3SliceImage(param_1,aIStack_18,uVar1);
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2320);
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,*(int *)(this + 0x130),*(int *)(this + 0x134),*(int *)(this + 0x138),
               *(int *)(this + 0x13c));
    puVar3 = &PrimeText_Game::Typeface_FZCuYuan_26_Outline;
  }
  else {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa23e8);
    Draw3SliceImage(param_1,aIStack_18,uVar1);
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2778);
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,*(int *)(this + 0x130),*(int *)(this + 0x134),*(int *)(this + 0x138),
               *(int *)(this + 0x13c));
    puVar3 = &PrimeText_Game::Typeface_FZCuYuan_16_Outline;
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface((PrimeText_PotentialTypeface *)*puVar3);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,this + 0x120,uVar1,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnSignWidget::RefreshView() */

void __thiscall GiftFoReturnSignWidget::RefreshView(GiftFoReturnSignWidget *this)

{
  undefined4 uVar1;
  int iVar2;
  Image *pIVar3;
  UIWidgetImage *this_00;
  PVZ2UIButton *this_01;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x110) == 0) {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2258);
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00,pIVar3);
    uVar1 = FUN_0348b398(0);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,uVar1,uVar1,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    local_40[0] = 5;
    UIWidgetImage::SetImageType(this_00,(PVZ2UIImageType *)local_40,0.0);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa21a8);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage((UIWidgetImage *)this_01,pIVar3);
    uVar1 = FUN_0348b398(0x14);
    iVar2 = FUN_0348b398(0x28);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,uVar1,uVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
    local_40[0] = 9;
    UIWidgetImage::SetImageType((UIWidgetImage *)this_01,(PVZ2UIImageType *)local_40,0.0);
  }
  else {
    if (*(int *)(this + 0x110) != 1) goto LAB_0348ce5c;
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)local_40,1);
    this_01 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_01,0x6f,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
    FUN_05476c50(awStack_78);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa2370,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06aa2370,3);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
    (**(code **)(*(long *)this_01 + 0x1a0))(this_01,this + 0x140);
    if (*(int *)(this + 0xe0) == 6) {
      puVar4 = &PrimeText_Game::Typeface_FZShaoEr_22_Shaded;
    }
    else {
      puVar4 = &PrimeText_Game::Typeface_FZShaoEr_16;
    }
    pcVar6 = *(code **)(*(long *)this_01 + 800);
    uVar5 = PrimeText_PotentialTypeface::Typeface((PrimeText_PotentialTypeface *)*puVar4);
    (*pcVar6)(this_01,uVar5);
  }
  (**(code **)(*(long *)this + 0x60))(this,this_01);
LAB_0348ce5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnSignWidget::~GiftFoReturnSignWidget() */

void __thiscall GiftFoReturnSignWidget::~GiftFoReturnSignWidget(GiftFoReturnSignWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06640d50;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06641078;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x118);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GiftFoReturnSignWidget::~GiftFoReturnSignWidget() */

void __thiscall GiftFoReturnSignWidget::~GiftFoReturnSignWidget(GiftFoReturnSignWidget *this)

{
  ~GiftFoReturnSignWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnSignWidget::InitView(int, GiftFoReturnSignInfo const&, int) */

void __thiscall
GiftFoReturnSignWidget::InitView
          (GiftFoReturnSignWidget *this,int param_1,GiftFoReturnSignInfo *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  EggRechargeBundleData::operator=
            ((EggRechargeBundleData *)(this + 0xe8),(EggRechargeBundleData *)param_2);
  *(int *)(this + 0x110) = param_3;
  FUN_05478178(awStack_20,L"[THE_N_DAY]",auStack_28);
  TodReplaceNumberString(awStack_20,L"{NUM}",param_1 + 1);
  FUN_054766c8(this + 0x118,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  FUN_05476c50(awStack_20);
  nop();
  if (*(int *)(this + 0xe0) == 6) {
    iVar2 = FUN_0348b398(0x2d);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),iVar2);
    *(undefined8 *)(this + 0x120) = local_18;
    *(undefined8 *)(this + 0x128) = uStack_10;
    iVar2 = FUN_0348b398(0x16);
    iVar3 = FUN_0348b398(0x28);
    iVar4 = FUN_0348b398(0xb4);
    iVar5 = FUN_0348b398(0xa0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar4,iVar5);
    *(undefined8 *)(this + 0x130) = local_18;
    *(undefined8 *)(this + 0x138) = uStack_10;
    iVar4 = FUN_0348b398(0x2a);
    iVar3 = FUN_0348b398(0xcf);
    iVar2 = FUN_0348b398(0x8c);
    uVar6 = 0x34;
  }
  else {
    iVar2 = FUN_0348b398(0x19);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),iVar2);
    *(undefined8 *)(this + 0x120) = local_18;
    *(undefined8 *)(this + 0x128) = uStack_10;
    iVar2 = FUN_0348b398(0xc);
    iVar3 = FUN_0348b398(0x17);
    iVar4 = FUN_0348b398(0x5a);
    iVar5 = FUN_0348b398(0x46);
    Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar3,iVar4,iVar5);
    *(undefined8 *)(this + 0x130) = local_18;
    *(undefined8 *)(this + 0x138) = uStack_10;
    iVar4 = FUN_0348b398(0x16);
    iVar3 = FUN_0348b398(0x60);
    iVar2 = FUN_0348b398(0x46);
    uVar6 = 0x1e;
  }
  iVar5 = FUN_0348b398(uVar6);
  Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar3,iVar2,iVar5);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  if ((*(int *)param_2 == 0) &&
     (cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                        ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_2 + 8)),
     cVar1 == '\0')) {
    piVar7 = (int *)FUN_0348a244(*(undefined8 *)(param_2 + 8));
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],false);
    iVar2 = *(int *)(this + 0x13c);
    (**(code **)(*plVar8 + 0x198))
              (plVar8,(*(int *)(this + 0x130) + *(int *)(this + 0x138) / 2) - iVar2 / 2,
               *(undefined4 *)(this + 0x134),iVar2,iVar2);
    (**(code **)(*(long *)this + 0x60))(this,plVar8);
  }
  RefreshView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnSignWidget::DetermineSelect(UIMessageBox*, int) */

void __thiscall
GiftFoReturnSignWidget::DetermineSelect
          (GiftFoReturnSignWidget *this,UIMessageBox *param_1,int param_2)

{
  UICustomVoting *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  TGALogMgr *this_02;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *__n;
  undefined4 local_d4c;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [8];
  undefined1 auStack_ce0 [2904];
  string asStack_188 [384];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    local_d4c = 0;
    this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr();
    if (this_00 != (UICustomVoting *)0x0) {
      local_d4c = UICustomVoting::GetVotedTickets(this_00);
      UISingletonDialog<UICommonItemSelect>::CloseDialog();
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string(asStack_d40,"index");
      uVar1 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      FUN_05474278(uVar1,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      std::string::string(asStack_d40,"bi");
      uVar1 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
      FUN_05474278(uVar1,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_0348b1c8(afStack_d38,this);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      __n = amStack_d18;
      DNetwork::requestMsg
                (this_01,asStack_188,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 asStack_d40,0);
      std::string::~string(asStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_ce8);
      std::string::append(asStack_ce8,"1",(size_t)__n);
      local_d48[0] = *(int *)(this + 0xe0) + 1;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(auStack_ce0,asStack_d40);
      std::string::~string(asStack_d40);
      this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogGiftReturnData(this_02,(TGAGiftReturnData *)asStack_ce8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnSignWidget::ButtonDepress(int) */

void __thiscall GiftFoReturnSignWidget::ButtonDepress(GiftFoReturnSignWidget *this,int param_1)

{
  UICommonItemSelect *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  TGALogMgr *this_02;
  char *__s;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *__n;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [8];
  undefined1 auStack_ce0 [2904];
  string asStack_188 [384];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x6f) {
    if (*(int *)(this + 0xe8) == 0) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string(asStack_d40,"index");
      uVar1 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      FUN_05474278(uVar1,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_0348b224(afStack_d38,this);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      __n = amStack_d18;
      DNetwork::requestMsg
                (this_01,asStack_188,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 asStack_d40,0);
      std::string::~string(asStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_ce8);
      std::string::append(asStack_ce8,"1",(size_t)__n);
      local_d48[0] = *(int *)(this + 0xe0) + 1;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(auStack_ce0,asStack_d40);
      std::string::~string(asStack_d40);
      this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogGiftReturnData(this_02,(TGAGiftReturnData *)asStack_ce8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
    else {
      this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
      if (*(int *)(this + 0xe0) == 0) {
        __s = "[PURPLE_PLANT_SELECT_FIVE]";
      }
      else if (*(int *)(this + 0xe0) == 6) {
        __s = "[ORANGE_PLANT_SELECT_THREE]";
      }
      else {
        __s = "[LEVEL_EDITOR_PLANT_SELECT]";
      }
      std::string::string(asStack_ce8,__s);
      UICommonItemSelect::SetTitle(this_00,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      std::string::string(asStack_ce8,"[SELECT_THE_REWARD_FROM_THESE]");
      UICommonItemSelect::SetDescription(this_00,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      UICommonItemSelect::SetCloseButtonVisible(this_00,true);
      (**(code **)(*(long *)this_00 + 0x350))(this_00,this + 0xf0);
      FUN_0348b2dc(afStack_d38,this);
      UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_d38);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GiftFoReturnSignWidget::ButtonDepress(int) */

void __thiscall GiftFoReturnSignWidget::ButtonDepress(GiftFoReturnSignWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

