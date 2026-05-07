// Class: RechargeRewardContent


/* RechargeRewardContent::onRechargeRewardCurrencyChanged(int) */

void __thiscall
RechargeRewardContent::onRechargeRewardCurrencyChanged(RechargeRewardContent *this,int param_1)

{
  this[0xf1] = (RechargeRewardContent)(*(int *)(*(long *)(this + 0x100) + 0x34) <= param_1);
  return;
}


/* RechargeRewardContent::ButtonMouseLeave(int) */

void RechargeRewardContent::ButtonMouseLeave(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(long *)(uVar1 + 0xe0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(uVar1 + 0xe0));
    *(undefined8 *)(uVar1 + 0xe0) = 0;
  }
  return;
}


/* non-virtual thunk to RechargeRewardContent::ButtonMouseLeave(int) */

void __thiscall RechargeRewardContent::ButtonMouseLeave(RechargeRewardContent *this,int param_1)

{
  ButtonMouseLeave((int)this + -0xd8);
  return;
}


/* RechargeRewardContent::~RechargeRewardContent() */

void __thiscall RechargeRewardContent::~RechargeRewardContent(RechargeRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_0692a490;
  *(undefined **)(this + 0xd8) = &DAT_0692a7c8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeRewardContent::~RechargeRewardContent() */

void __thiscall RechargeRewardContent::~RechargeRewardContent(RechargeRewardContent *this)

{
  ~RechargeRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* RechargeRewardContent::Resize(int, int, int, int) */

void __thiscall
RechargeRewardContent::Resize
          (RechargeRewardContent *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xf8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::setRechargeContentConfig(RechargeRewardContentConfig*, int) */

void __thiscall
RechargeRewardContent::setRechargeContentConfig
          (RechargeRewardContent *this,RechargeRewardContentConfig *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(RechargeRewardContentConfig **)(this + 0x100) = param_1;
  *(int *)(this + 0x108) = param_2;
  local_8 = ___stack_chk_guard;
  GetImageByName((string *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(this + 0x48);
  uVar2 = *(undefined4 *)(this + 0x4c);
  pcVar5 = *(code **)(*(long *)this + 0x198);
  this_00 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  uVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar5)(this,uVar1,uVar2,uVar3,uVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::RechargeRewardContent(bool, bool) */

void __thiscall
RechargeRewardContent::RechargeRewardContent(RechargeRewardContent *this,bool param_1,bool param_2)

{
  undefined *puVar1;
  PVZ2UIButton *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0692a490;
  *(undefined **)(this + 0xd8) = &DAT_0692a7c8;
  FUN_05476574(this + 0xe8);
  this[0xf1] = (RechargeRewardContent)param_2;
  this[0xf0] = (RechargeRewardContent)param_1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  FUN_05478178(awStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color((Color *)&local_20,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0,(ButtonListener *)(this + 0xd8),awStack_28,(Color *)&local_20);
  *(PVZ2UIButton **)(this + 0xf8) = this_00;
  FUN_05476c50(awStack_28);
  nop();
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),this[0xf0]);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeRewardCurrencyChanged);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RechargeRewardContent,void(RechargeRewardContent::*)(int)>>
            ((MessageRouter *)puVar1,Message::RechargeRewardCurrencyChanged,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::ButtonPress(int, int) */

void RechargeRewardContent::ButtonPress(int param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  int *piVar7;
  ulong uVar8;
  StoneLotteryItemTipUI *this_01;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  GAME_ITEM_INFO aGStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  plVar6 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(char *)((long)plVar6 + 0xf1) == '\0') {
    (**(code **)(*plVar6 + 0xd0))(&local_50);
    this = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77348);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar10 = (int)((float)iVar4 + (float)iVar4);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77348);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
    lVar3 = plVar6[10];
    iVar5 = FUN_049e37f4(5);
    Sexy::Insets::Insets
              (aIStack_48,local_50 + ((int)lVar3 - iVar10) / 2,
               (local_4c - (int)((float)iVar4 * 0.5)) + iVar5,iVar10,(int)((float)iVar4 * 0.5));
    if (plVar6[0x1c] == 0) {
      this_01 = ::operator_new(0xe8);
      memset(this_01,0,0xe8);
      StoneLotteryItemTipUI::StoneLotteryItemTipUI(this_01);
      uVar2 = *(uint *)(this_01 + 0x60);
      plVar6[0x1c] = (long)this_01;
      *(uint *)(this_01 + 0x60) = uVar2 | 0x10;
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_01);
      (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),plVar6[0x1c])
      ;
    }
    plVar1 = plVar6 + 0x1d;
    uVar9 = 0;
    while( true ) {
      uVar11 = *(undefined8 *)plVar6[0x20];
      uVar8 = FUN_049e33e0(uVar11,((undefined8 *)plVar6[0x20])[1]);
      if (uVar8 <= uVar9) break;
      piVar7 = (int *)FUN_049e33f4(uVar11,uVar9);
      GetGameItemInfo(*piVar7,0x7fffffff,0);
      thunk_FUN_05477668(plVar1,auStack_10);
      FUN_05477a88(plVar1,10);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      uVar9 = uVar9 + 1;
    }
    PuzzleTip::SetTip(plVar6[0x1c],plVar1);
    (**(code **)(*(long *)plVar6[0x1c] + 0x1a0))((long *)plVar6[0x1c],aIStack_48);
    TodStringTranslate(L"");
    FUN_054766c8(plVar1,aGStack_38);
    FUN_05476c50(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeRewardContent::ButtonPress(int, int) */

void __thiscall
RechargeRewardContent::ButtonPress(RechargeRewardContent *this,int param_1,int param_2)

{
  ButtonPress((int)this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::ButtonDepress(int) */

void __thiscall RechargeRewardContent::ButtonDepress(RechargeRewardContent *this,int param_1)

{
  undefined *puVar1;
  char cVar2;
  UICommonItemSelect *this_00;
  undefined4 *puVar3;
  ulong uVar4;
  NetworkMgr *this_01;
  long *plVar5;
  char *__s;
  ulong uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))
              (*(long **)(gLawnApp + 0x360),*(long *)(this + 0xe0));
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xe0));
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (((param_1 != 0) || (this[0xf1] == (RechargeRewardContent)0x0)) ||
     (this[0xf0] != (RechargeRewardContent)0x0)) goto LAB_049e53ec;
  if ((*(int *)(this + 0x108) != 8) && (*(int *)(this + 0x108) != 5)) {
    cVar2 = LawnApp::CheckNetWork(gLawnApp);
    puVar1 = gMessageRouter;
    if (cVar2 != '\0') {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onRechargeRewardGot);
      local_70 = local_40;
      uStack_68 = uStack_38;
      local_60 = local_30;
      MessageRouter::
      Subscribe<bool,S2C_ICloud_GetChargeRewardInfo_const*,Sexy::CBMemberTranslatorX<RechargeRewardContent,void(RechargeRewardContent::*)(bool,S2C_ICloud_GetChargeRewardInfo_const*)>>
                ((MessageRouter *)puVar1,Message::TotalRechargePackageGot,&local_70);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      if (*(code **)(*plVar5 + 0x68) != INetworkMsgProcess::ICloudRequestChargeReward) {
        (**(code **)(*plVar5 + 0x68))(plVar5,4,*(undefined4 *)(this + 0x108),0xffffffff);
      }
    }
    goto LAB_049e53ec;
  }
  this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
  if (*(int *)(this + 0x108) == 5) {
    std::string::string((string *)&local_40,"[RECHARGE_REWARD_PLANT_SELECT_PURPLE_3_1]");
    UICommonItemSelect::SetTitle(this_00,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    __s = "[RECHARGE_REWARD_PLANT_SELECT_PURPLE_3_1_DES]";
LAB_049e55a0:
    std::string::string((string *)&local_40,__s);
    UICommonItemSelect::SetDescription(this_00,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
  }
  else if (*(int *)(this + 0x108) == 8) {
    std::string::string((string *)&local_40,"[RECHARGE_REWARD_PLANT_SELECT_ORANGE_3_1]");
    UICommonItemSelect::SetTitle(this_00,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    __s = "[RECHARGE_REWARD_PLANT_SELECT_ORANGE_3_1_DES]";
    goto LAB_049e55a0;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  uVar6 = 0;
  while( true ) {
    uVar4 = FUN_049e33e0(**(undefined8 **)(this + 0x100),(*(undefined8 **)(this + 0x100))[1]);
    if (uVar4 <= uVar6) break;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_50);
    puVar3 = (undefined4 *)FUN_049e33f4(**(undefined8 **)(this + 0x100),uVar6);
    local_50 = *puVar3;
    local_4c = puVar3[1];
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40,
               (S2C_BonusInfo *)&local_50);
    uVar6 = uVar6 + 1;
  }
  (**(code **)(*(long *)this_00 + 0x350))
            (this_00,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  FUN_049e3798(afStack_28,this);
  UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_40);
LAB_049e53ec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeRewardContent::ButtonDepress(int) */

void __thiscall RechargeRewardContent::ButtonDepress(RechargeRewardContent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::Draw(Sexy::Graphics*) */

void __thiscall RechargeRewardContent::Draw(RechargeRewardContent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf0] != (RechargeRewardContent)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)aRStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aRStack_18);
  }
  FUN_05475d88(asStack_20,*(long *)(this + 0x100) + 0x28);
  if ((this[0xf1] == (RechargeRewardContent)0x0) || (this[0xf0] != (RechargeRewardContent)0x0)) {
    FUN_05475ad8(asStack_20,"_BLACK");
    GetImageByName(asStack_20);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  }
  else {
    GetImageByName(asStack_20);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  }
  if (cVar3 != '\0') {
    pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0);
  }
  if (this[0xf0] != (RechargeRewardContent)0x0) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b772a0);
    iVar1 = *(int *)(this + 0x50);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b772a0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar2 = *(int *)(this + 0x54);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b772a0);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar1 - iVar4) / 2,(iVar2 - iVar5) / 2);
  }
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::getRechargeReward() */

void __thiscall RechargeRewardContent::getRechargeReward(RechargeRewardContent *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar11;
  int *piVar12;
  NameMapperBase *this_02;
  TGALogMgr *pTVar13;
  RechargeRewardConfig *this_03;
  int *piVar14;
  code *__n;
  uint uVar15;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar16;
  undefined8 local_100;
  undefined8 local_f8 [6];
  TGARechargeBundleData aTStack_c8 [8];
  string asStack_c0 [24];
  string asStack_a8 [8];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0xf0] = (RechargeRewardContent)0x1;
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
  __n = *(code **)(**(long **)(this + 0xf8) + 0x188);
  (*__n)(*(long **)(this + 0xf8),this[0xf0]);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::ObtainNewTotalRechargeReward(this_01,*(int *)(*(long *)(this + 0x100) + 0x34));
  TGARechargeBundleData::TGARechargeBundleData(aTStack_c8);
  std::string::append((string *)aTStack_c8,"3",(size_t)__n);
  DString::DString((DString *)&local_68,*(int *)(*(long *)(this + 0x100) + 0x34));
  pcVar11 = (char *)DString::c_str((DString *)&local_68);
  std::string::append(asStack_c0,pcVar11,(size_t)__n);
  DString::~DString((DString *)&local_68);
  pvVar16 = *(vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              **)(this + 0x100);
  local_100 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar16);
  local_f8[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar16);
  while( true ) {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_100,(__normal_iterator *)local_f8);
    uVar15 = (uint)bVar3;
    if (!bVar3) break;
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
    OtherServerNameMapper::GetInstance();
    cVar4 = FUN_049e33ac(*piVar12);
    OtherServerNameMapper::GetInstance();
    cVar5 = FUN_049e339c(*piVar12);
    this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    cVar6 = NameMapperBase::ContainsId(this_02,*piVar12);
    OtherServerNameMapper::GetInstance();
    cVar7 = FUN_049e33bc(*piVar12);
    if (cVar4 == '\0') {
      if (cVar5 == '\0') {
        if ((cVar7 == '\0') && (cVar6 == '\0')) {
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
          __n = (code *)(ulong)(uint)piVar12[1];
          local_68 = CONCAT44(*piVar12,piVar12[1]);
          std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                    ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,(TGABundle *)&local_68
                    );
        }
        else {
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
          __n = (code *)(ulong)(uint)piVar12[1];
          local_68 = CONCAT44(*piVar12,piVar12[1]);
          std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                    ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,(TGABundle *)&local_68
                    );
        }
      }
      else {
        DString::DString((DString *)&local_68,piVar12[1]);
        pcVar11 = (char *)DString::c_str((DString *)&local_68);
        std::string::append(asStack_a8,pcVar11,(size_t)__n);
        DString::~DString((DString *)&local_68);
      }
    }
    else {
      DString::DString((DString *)&local_68,piVar12[1]);
      pcVar11 = (char *)DString::c_str((DString *)&local_68);
      std::string::append(asStack_a0,pcVar11,(size_t)__n);
      DString::~DString((DString *)&local_68);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_100);
  }
  iVar8 = FUN_049e3400(local_98,local_90);
  if (0 < (int)(5U - iVar8)) {
    do {
      uVar15 = uVar15 + 1;
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
      std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,(TGABundle *)&local_68);
    } while (uVar15 != 5U - iVar8);
  }
  iVar8 = 0;
  iVar9 = FUN_049e3400(local_80,local_78);
  if (0 < 5 - iVar9) {
    do {
      iVar8 = iVar8 + 1;
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
      std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,(TGABundle *)&local_68);
    } while (iVar8 != 5 - iVar9);
  }
  pTVar13 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGARechargeBundleData::TGARechargeBundleData((TGARechargeBundleData *)&local_68,aTStack_c8);
  TGALogMgr::LogRechargeBundle(pTVar13,(DString *)&local_68);
  TGARechargeBundleData::~TGARechargeBundleData((TGARechargeBundleData *)&local_68);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)local_f8);
  pvVar16 = *(vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              **)(this + 0x100);
  if (pvVar16[0x30] ==
      (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       )0x0) {
    local_100 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(pvVar16);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar16);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_100,(__normal_iterator *)&local_68), bVar3
          ) {
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      PlayerInfo::AddCommonGachaReward((int)this_01,*piVar12,SUB41(piVar12[1],0),false);
      piVar14 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)local_f8,piVar12);
      *piVar14 = piVar12[1];
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_100);
    }
  }
  else {
    this_03 = (RechargeRewardConfig *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
    piVar12 = (int *)RechargeRewardConfig::pickRandomRewardFromConfig
                               (this_03,*(int *)(this + 0x108));
    if (piVar12 != (int *)0x0) {
      PlayerInfo::AddCommonGachaReward((int)this_01,*piVar12,SUB41(piVar12[1],0),false);
      piVar14 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)local_f8,piVar12);
      *piVar14 = piVar12[1];
    }
  }
  pLVar2 = gLawnApp;
  FUN_05478178((DString *)&local_68,L"[RECHARGE_PACKAGE_REWARD_TITLE]",
               (__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                *)&local_100);
  LawnApp::ShowServerBoxOpenUI
            (pLVar2,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                     *)local_f8,(DString *)&local_68);
  FUN_05476c50((DString *)&local_68);
  nop();
  cVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     local_f8);
  puVar1 = gMessageRouter;
  if (cVar4 == '\0') {
    iVar8 = *(int *)(this + 0x108);
    uVar10 = PlayerInfo::GetNumRechargeCurrency(this_01);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68,
               (map *)local_f8);
    MessageRouter::
    Post<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ((MessageRouter *)puVar1,Message::RechargeRewardGot,iVar8 + 2,uVar10,
               (DString *)&local_68);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68);
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_f8);
  TGARechargeBundleData::~TGARechargeBundleData(aTStack_c8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardContent::onRechargeRewardGot(bool, S2C_ICloud_GetChargeRewardInfo const*) */

void __thiscall
RechargeRewardContent::onRechargeRewardGot
          (RechargeRewardContent *this,bool param_1,S2C_ICloud_GetChargeRewardInfo *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  LawnApp *this_00;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  NameMapperBase *this_01;
  TGALogMgr *pTVar12;
  int *piVar13;
  code *__n;
  uint uVar14;
  undefined8 local_100;
  undefined8 local_f8 [6];
  TGARechargeBundleData aTStack_c8 [8];
  string asStack_c0 [24];
  string asStack_a8 [8];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  if (param_1) {
    this[0xf0] = (RechargeRewardContent)0x1;
    (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
    __n = *(code **)(**(long **)(this + 0xf8) + 0x188);
    (*__n)(*(long **)(this + 0xf8),this[0xf0]);
    TGARechargeBundleData::TGARechargeBundleData(aTStack_c8);
    std::string::append((string *)aTStack_c8,"3",(size_t)__n);
    DString::DString((DString *)&local_68,*(int *)(*(long *)(this + 0x100) + 0x34));
    pcVar10 = (char *)DString::c_str((DString *)&local_68);
    std::string::append(asStack_c0,pcVar10,(size_t)__n);
    DString::~DString((DString *)&local_68);
    local_100 = FUN_049e3e74(*(undefined8 *)(param_2 + 0x18));
    local_f8[0] = FUN_049e3ec4(*(undefined8 *)(param_2 + 0x20));
    while( true ) {
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_100,(__normal_iterator *)local_f8);
      uVar14 = (uint)bVar3;
      if (!bVar3) break;
      piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      OtherServerNameMapper::GetInstance();
      cVar4 = FUN_049e33ac(*piVar11);
      OtherServerNameMapper::GetInstance();
      cVar5 = FUN_049e339c(*piVar11);
      this_01 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      cVar6 = NameMapperBase::ContainsId(this_01,*piVar11);
      OtherServerNameMapper::GetInstance();
      cVar7 = FUN_049e33bc(*piVar11);
      if (cVar4 == '\0') {
        if (cVar5 == '\0') {
          if ((cVar7 == '\0') && (cVar6 == '\0')) {
            Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
            __n = (code *)(ulong)(uint)piVar11[1];
            local_68 = CONCAT44(*piVar11,piVar11[1]);
            std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                      ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,
                       (TGABundle *)&local_68);
          }
          else {
            Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
            __n = (code *)(ulong)(uint)piVar11[1];
            local_68 = CONCAT44(*piVar11,piVar11[1]);
            std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                      ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,
                       (TGABundle *)&local_68);
          }
        }
        else {
          DString::DString((DString *)&local_68,piVar11[1]);
          pcVar10 = (char *)DString::c_str((DString *)&local_68);
          std::string::append(asStack_a8,pcVar10,(size_t)__n);
          DString::~DString((DString *)&local_68);
        }
      }
      else {
        DString::DString((DString *)&local_68,piVar11[1]);
        pcVar10 = (char *)DString::c_str((DString *)&local_68);
        std::string::append(asStack_a0,pcVar10,(size_t)__n);
        DString::~DString((DString *)&local_68);
      }
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_100);
    }
    iVar8 = FUN_049e3400(local_98,local_90);
    if (0 < (int)(5U - iVar8)) {
      do {
        uVar14 = uVar14 + 1;
        Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
        std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                  ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,(TGABundle *)&local_68);
      } while (uVar14 != 5U - iVar8);
    }
    iVar8 = 0;
    iVar9 = FUN_049e3400(local_80,local_78);
    if (0 < 5 - iVar9) {
      do {
        iVar8 = iVar8 + 1;
        Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
        std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                  ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,(TGABundle *)&local_68);
      } while (iVar8 != 5 - iVar9);
    }
    pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGARechargeBundleData::TGARechargeBundleData((TGARechargeBundleData *)&local_68,aTStack_c8);
    TGALogMgr::LogRechargeBundle(pTVar12,(DString *)&local_68);
    TGARechargeBundleData::~TGARechargeBundleData((TGARechargeBundleData *)&local_68);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)local_f8);
    local_100 = FUN_049e3e74(*(undefined8 *)(param_2 + 0x18));
    local_68 = FUN_049e3ec4(*(undefined8 *)(param_2 + 0x20));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_100,(__normal_iterator *)&local_68),
          puVar2 = gMessageRouter, bVar3) {
      piVar11 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      piVar13 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)local_f8,piVar11);
      *piVar13 = piVar11[1];
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_100);
    }
    iVar8 = *(int *)(this + 0x108);
    uVar1 = *(undefined4 *)(param_2 + 0x84);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68,
               (map *)local_f8);
    MessageRouter::
    Post<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ((MessageRouter *)puVar2,Message::RechargeRewardGot,iVar8 + 2,uVar1,
               (DString *)&local_68);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)&local_68);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_f8);
    TGARechargeBundleData::~TGARechargeBundleData(aTStack_c8);
  }
  else {
    std::string::string((string *)aTStack_c8,"[NETWORK_NOT_CONNECTED_TITLE]");
    std::string::string((string *)&local_68,"[NETWORK_NOT_CONNECTED_TEXT_INCUNSUMPTION_TAB]");
    LawnApp::ShowMessageDialogNoCallback(this_00,(string *)aTStack_c8,(string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    std::string::~string((string *)aTStack_c8);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

