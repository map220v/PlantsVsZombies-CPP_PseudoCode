// Class: CoinStore


/* CoinStore::ScrollTargetReached(Sexy::ScrollWidget*) */

void CoinStore::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CoinStore::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall CoinStore::ScrollTargetReached(CoinStore *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* CoinStore::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CoinStore::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CoinStore::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall CoinStore::ScrollTargetInterrupted(CoinStore *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* CoinStore::Draw(Sexy::Graphics*) */

void __thiscall CoinStore::Draw(CoinStore *this,Graphics *param_1)

{
  nop();
  if (this[0x128] == (CoinStore)0x0) {
    return;
  }
  Sexy::Widget::DeferOverlay((Widget *)this,1);
  return;
}


/* CoinStore::DrawOverlay(Sexy::Graphics*) */

void __thiscall CoinStore::DrawOverlay(CoinStore *this,Graphics *param_1)

{
  long *plVar1;
  
  nop();
  if ((this[0x128] != (CoinStore)0x0) && (plVar1 = *(long **)(this + 0x130), plVar1 != (long *)0x0))
  {
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1);
  }
  return;
}


/* CoinStore::RefreshRechargeBanner() */

void __thiscall CoinStore::RefreshRechargeBanner(CoinStore *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined8 *)(this + 0x148) = 0;
  iVar1 = FUN_033961ec(0x41);
  iVar2 = FUN_033961ec(0x157);
  iVar3 = FUN_033961ec(0x3c);
  *(int *)(this + 0xf4) = iVar1 + iVar2 + iVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::EnableTutorial(bool) */

void __thiscall CoinStore::EnableTutorial(CoinStore *this,bool param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  BouncingArrow *this_00;
  long lVar8;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (this[0x128] == (CoinStore)0x0) {
      if (*(long *)(this + 0x130) == 0) {
        this_00 = GameObject::Create<BouncingArrow>();
        *(BouncingArrow **)(this + 0x130) = this_00;
        AnimationController::SetDuration((AnimationController *)this_00,10000.0);
        lVar8 = *(long *)(this + 0x130);
        *(undefined4 *)(lVar8 + 0x3c) = 0xb4;
        iVar4 = FUN_033961ec(0x6e);
        iVar1 = *(int *)(this + 0xf0);
        iVar2 = *(int *)(this + 0x50);
        iVar5 = FUN_033961ec(0x1e8);
        iVar6 = FUN_033961ec(0);
        Sexy::Point::Point((Point *)&local_10,iVar4 + (iVar2 - iVar1) / 2,iVar5 + iVar6);
        *(undefined8 *)(lVar8 + 0x30) = local_10;
      }
      plVar7 = *(long **)(this + 0x138);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x158))(plVar7,0);
      }
      if (*(ScrollWidget **)(this + 0x120) != (ScrollWidget *)0x0) {
        Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x120),0);
      }
    }
  }
  else {
    if (*(long *)(this + 0x130) != 0) {
      ToolPacketData::GetProps();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (cVar3 != '\0') {
        ToolPacketData::GetProps();
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        (**(code **)(*plVar7 + 0x48))();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      *(undefined8 *)(this + 0x130) = 0;
    }
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
  }
  this[0x128] = (CoinStore)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinStore::Update() */

void __thiscall CoinStore::Update(CoinStore *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ProfileMgr *this_00;
  long lVar4;
  ActivityConfig *pAVar5;
  code *pcVar6;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((this[0x128] != (CoinStore)0x0) && (plVar3 = *(long **)(this + 0x130), plVar3 != (long *)0x0))
  {
    pcVar6 = *(code **)(*plVar3 + 0x80);
    PVZ_RealT();
    (*pcVar6)(plVar3);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = LawnApp::IsRechargeRewardDisplayerValid(gLawnApp);
  if (((cVar1 == '\0') && (iVar2 = FUN_03395410(*(undefined4 *)(lVar4 + 0xeb0)), 0x1d < iVar2)) &&
     (cVar1 = FUN_03395414(*(undefined1 *)(lVar4 + 0x338)), cVar1 == '\0')) {
    lVar4 = LawnApp::GetActivityConfig();
    if (lVar4 != 0) {
      pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar1 = ActivityConfig::IsActivityDays(pAVar5);
      if (cVar1 != '\0') {
        pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar1 = ActivityConfig::IsRechargePlantPieceValid(pAVar5);
        if (cVar1 != '\0') {
          pAVar5 = (ActivityConfig *)LawnApp::GetActivityConfig();
          cVar1 = ActivityConfig::IsFirstRechargeAward(pAVar5);
          if (cVar1 != '\0') {
            LawnApp::ShowRechargeRewardDisplayer(gLawnApp,true,0x1e);
            return;
          }
        }
      }
    }
  }
  return;
}


/* CoinStore::onADFinished(int) */

void __thiscall CoinStore::onADFinished(CoinStore *this,int param_1)

{
  undefined4 uVar1;
  ADManager *pAVar2;
  
  pAVar2._0_4_ = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  uVar1 = ADManager::GetLeftADWatchCount(pAVar2._0_4_,param_1);
  *(undefined4 *)(this + 0x194) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::ShowTipsDialog() */

void CoinStore::ShowTipsDialog(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x118) == 0xb) {
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
    if (cVar1 == '\0') {
      iVar2 = FUN_033961ec(0x28a);
      iVar3 = FUN_033961ec(0x118);
    }
    else {
      iVar2 = FUN_033961ec(600);
      iVar3 = FUN_033961ec(0x118);
    }
    this = (PVZ2UIDialog *)
           LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[PVZ1_MODE_TIME_ENERGY_BANK_TIPS_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[PVZ1_MODE_TIME_ENERGY_BANK_TIPS_DESC]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    PVZ2UIDialog::SetFooterAlign(this,3);
    iVar2 = FUN_033961ec(2);
    PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
    PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
    FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall CoinStore::DrawAll(CoinStore *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[400] != (CoinStore)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
    iVar5 = *(int *)(this + 0xf0);
    iVar1 = FUN_033961ec(0x50);
    Sexy::Insets::Insets
              ((Insets *)&local_38,(*(int *)(this + 0x50) - iVar5) / 2,iVar1,iVar5,
               *(int *)(this + 0xf4));
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bd18);
    Draw9SliceImage(param_2,aIStack_18,uVar6);
    iVar5 = local_38 + local_30 / 2;
    iVar2 = FUN_033961ec(0xe1);
    iVar1 = local_34;
    iVar3 = FUN_033961ec(0xd);
    iVar4 = FUN_033961ec(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar5 - iVar2 / 2,iVar1 + iVar3,iVar2,iVar4);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_2,this + 0xe8,aIStack_28,uVar6,aIStack_18,5,1);
    if (*(int *)(this + 0x194) != -1) {
      iVar5 = FUN_033961ec(0xfffffffa);
      iVar1 = FUN_033961ec(0x2d);
      Sexy::Insets::Insets(aIStack_18,local_38,(local_34 + local_2c + iVar5) - iVar1,local_30,iVar1)
      ;
      if (*(int *)(this + 0x118) == 1) {
        __s = "[COINSTORE_AD_LEFT_SUN]";
      }
      else {
        __s = "[COINSTORE_AD_LEFT]";
      }
      std::string::string(asStack_40,__s);
      StringHelper::ReplaceNumberString
                ((StringHelper *)asStack_40,(string *)L"{NUMBER}",
                 (wchar_t *)(ulong)*(uint *)(this + 0x194),local_30);
      std::string::~string(asStack_40);
      nop();
      FUN_05476c50(auStack_48);
    }
    Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinStore::InitADCount() */

void __thiscall CoinStore::InitADCount(CoinStore *this)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  ADManager *pAVar5;
  
  if (*(long *)(gLawnApp + 0x9f0) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = FUN_0339be00(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    bVar1 = lVar4 != 0;
  }
  bVar2 = LawnApp::IsAdChannel(gLawnApp,3);
  if (bVar1 < bVar2) {
    switch(*(undefined4 *)(this + 0x118)) {
    case 0:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,5);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    case 1:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,0xe);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    case 2:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,6);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    default:
      *(undefined4 *)(this + 0x194) = 0xffffffff;
      break;
    case 8:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,10);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    case 9:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,7);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    case 10:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,9);
      *(undefined4 *)(this + 0x194) = uVar3;
      break;
    case 0xc:
      pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      uVar3 = ADManager::GetLeftADWatchCount(pAVar5,0x20);
      *(undefined4 *)(this + 0x194) = uVar3;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::~CoinStore() */

void __thiscall CoinStore::~CoinStore(CoinStore *this)

{
  LawnApp *this_00;
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  long *plVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066136b8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06613380;
  *(undefined ***)(this + 0xe0) = &PTR__CoinStore_06613700;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long *)(this + 0x130) != 0) {
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
    *(undefined8 *)(this + 0x130) = 0;
  }
  this_00 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Store");
  LawnApp::DeleteGroup(this_00,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
  PurchaseBroker::EndCartInstance(this_02);
  FUN_05476c50(this + 0x188);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  std::vector<RechargeNode,std::allocator<RechargeNode>>::~vector
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)(this + 0x158));
  std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::~vector
            ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
             (this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf8));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CoinStore::~CoinStore() */

void __thiscall CoinStore::~CoinStore(CoinStore *this)

{
  ~CoinStore(this + -0xe0);
  return;
}


/* CoinStore::~CoinStore() */

void __thiscall CoinStore::~CoinStore(CoinStore *this)

{
  ~CoinStore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CoinStore::~CoinStore() */

void __thiscall CoinStore::~CoinStore(CoinStore *this)

{
  ~CoinStore(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::onItemPurchasedFromStore(MagentoProductProps*) */

void CoinStore::onItemPurchasedFromStore(MagentoProductProps *param_1)

{
  char cVar1;
  char *pcVar2;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Game_Coins_Buy");
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"FakePurchaseLoop");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    LawnApp::KillCoinStore(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::onChangeAvatarSuccess(std::string) */

void CoinStore::onChangeAvatarSuccess(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  undefined *puVar1;
  LawnApp *pLVar2;
  string *psVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x178);
  local_8 = ___stack_chk_guard;
  LawnApp::KillCoinStore(gLawnApp);
  pLVar2 = gLawnApp;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  MagentoProductProps::GetLocalizedDescription();
  LawnApp::ShowAvatarRewardDialog(pLVar2,aRStack_20,asStack_18,asStack_10,0,0,0,0xffffffff);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this);
  MessageRouter::
  Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
            ((MessageRouter *)puVar1,Message::AvatarPiecesAdd,asStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this);
  MessageRouter::
  Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
            ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,asStack_10,"Store|PvE_Store",0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::onPurchaseDialogClosed() */

void __thiscall CoinStore::onPurchaseDialogClosed(CoinStore *this)

{
  LawnApp *pLVar1;
  int iVar2;
  string *psVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillCoinStore(gLawnApp);
  if (this[0x170] != (CoinStore)0x0) {
    this[0x170] = (CoinStore)0x0;
    pLVar1 = gLawnApp;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    LawnApp::ShowPlantRewardDialog(pLVar1,aRStack_10,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((*(int *)(this + 0x118) == 2) &&
       (*(SalesProgressBar **)(this + 0x148) != (SalesProgressBar *)0x0)) {
      iVar2 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x148));
      *(undefined8 *)(this + 0x148) = 0;
      *(int *)(this + 0xf4) = *(int *)(this + 0xf4) - iVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::createPurchasePanel(Sexy::RtWeakPtr<MagentoCategoryProps>) */

void __thiscall
CoinStore::createPurchasePanel(CoinStore *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *this_00;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  long lVar15;
  ulong uVar16;
  RtWeakPtrBase *pRVar17;
  PVZ2UIStoreItemDisplayer *pPVar18;
  long *plVar19;
  ActivityConfig *this_05;
  ResourceInfo *pRVar20;
  PVZ2UIImageWidget *this_06;
  ulong uVar21;
  ulong uVar22;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  PVZ2UIStoreItemDisplayer *local_38;
  PVZ2UIStoreItemDisplayer *local_30;
  Insets aIStack_28 [8];
  int local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
            (this + 0x100);
  local_8 = ___stack_chk_guard;
  lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar5 = FUN_0339543c(*(undefined8 *)(lVar14 + 0x60),*(undefined8 *)(lVar14 + 0x68));
  iVar6 = FUN_033961ec(10);
  std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::clear(this_00);
  if (*(long *)(this + 0x120) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
  }
  iVar9 = *(int *)(this + 0xf0);
  iVar7 = FUN_033961ec(10);
  iVar10 = *(int *)(this + 0x50);
  iVar8 = FUN_033961ec(0x50);
  Sexy::Insets::Insets
            (aIStack_28,iVar7 + (iVar10 - iVar9) / 2,iVar8,iVar9 + iVar7 * -2,*(int *)(this + 0xf4))
  ;
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  lVar14 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0x120) = this_01;
  (**(code **)(lVar14 + 0x1a0))(this_01,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x120),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar9 = FUN_033961ec(200);
  iVar10 = FUN_033961ec(10);
  local_20 = iVar6 + iVar9 * iVar5 + iVar10 * (iVar5 + -1);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  iVar5 = *(int *)(this + 0x118);
  if (iVar5 != 2) goto LAB_033a3a1c;
  this_05 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (((this_05 != (ActivityConfig *)0x0) &&
      (cVar4 = ActivityConfig::IsFirstRechargeAward(this_05), cVar4 != '\0')) &&
     (cVar4 = PlayerInfo::IsAllProductsRechargeDoubleGot(this_04,(RtWeakPtr *)param_2),
     cVar4 == '\0')) {
    LawnApp::GetActivityConfig();
    ActivityConfig::GetActivityStoreBannerImageS();
    bVar3 = std::operator!=((string *)&local_30,"");
    if (!bVar3) {
      std::string::~string((string *)&local_30);
      iVar5 = *(int *)(this + 0x118);
      goto LAB_033a3a1c;
    }
    LawnApp::GetUIImageInfoFromStringId(gLawnApp,(string *)&local_30);
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    std::string::~string((string *)&local_30);
    if (pRVar20 != (ResourceInfo *)0x0) {
      this_06 = ::operator_new(0xe8);
      PVZ2UIImageWidget::PVZ2UIImageWidget(this_06);
      LevelEditorWaveEventPortalPanel::SetBgImage
                ((LevelEditorWaveEventPortalPanel *)this_06,(Image *)pRVar20);
      iVar5 = FUN_033961ec(0x157);
      iVar9 = 0;
      if (*(int *)(pRVar20 + 0x3c) != 0) {
        iVar9 = (iVar5 * *(int *)(pRVar20 + 0x38)) / *(int *)(pRVar20 + 0x3c);
      }
      iVar10 = FUN_033961ec(0x41);
      iVar7 = FUN_033961ec(0x14);
      (**(code **)(*(long *)this_06 + 0x198))(this_06,iVar6,iVar10 + iVar7,iVar9,iVar5);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_06);
      iVar10 = FUN_033961ec(0x14);
      iVar5 = *(int *)(this + 0x118);
      iVar6 = iVar6 + (iVar9 - iVar10);
      goto LAB_033a3a1c;
    }
  }
  iVar5 = *(int *)(this + 0x118);
LAB_033a3a1c:
  if (iVar5 == 5) {
    uVar21 = 0;
    std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
              ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)local_18);
    iVar5 = 0;
    while( true ) {
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar16 = FUN_0339543c(*(undefined8 *)(lVar14 + 0x60),*(undefined8 *)(lVar14 + 0x68));
      if (uVar16 <= uVar21) break;
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pRVar17 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar14 + 0x60),uVar21);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar17);
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
      ;
      cVar4 = PlayerInfo::IsPlantAvatarUnLocked(this_04,lVar14 + 0x80,0,0);
      if (cVar4 == '\0') {
        local_38 = (PVZ2UIStoreItemDisplayer *)0x0;
        uVar21 = uVar21 + 1;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
        pPVar18 = ::operator_new(0x1a0);
        PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                  (pPVar18,(RtWeakPtr<Sexy::SoundResource> *)&local_30,iVar5,this + 0xd8);
        local_38 = pPVar18;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        (**(code **)(*(long *)this_02 + 0x60))(this_02,local_38);
        pPVar18 = local_38;
        uVar11 = FUN_033961ec(0x41);
        uVar12 = FUN_033961ec(200);
        uVar13 = FUN_033961ec(0x157);
        (**(code **)(*(long *)pPVar18 + 0x198))(pPVar18,iVar6,uVar11,uVar12,uVar13);
        std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                  (this_00,&local_38);
        iVar9 = FUN_033961ec(10);
        iVar6 = iVar6 + iVar9 + *(int *)(local_38 + 0x50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        iVar5 = iVar5 + 1;
      }
      else {
        uVar21 = uVar21 + 1;
        std::
        list<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((list<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)local_18,(RtWeakPtr *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
    }
    local_48 = FUN_03398714(local_18[0]);
    while( true ) {
      local_30 = (PVZ2UIStoreItemDisplayer *)
                 std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)local_18);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_30);
      if (!bVar3) break;
      pRVar17 = (RtWeakPtrBase *)
                std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                          ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar17);
      local_38 = (PVZ2UIStoreItemDisplayer *)0x0;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
      pPVar18 = ::operator_new(0x1a0);
      PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                (pPVar18,(RtWeakPtr<Sexy::SoundResource> *)&local_30,iVar5,this + 0xd8);
      local_38 = pPVar18;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,local_38);
      pPVar18 = local_38;
      uVar11 = FUN_033961ec(0x41);
      uVar12 = FUN_033961ec(200);
      uVar13 = FUN_033961ec(0x157);
      (**(code **)(*(long *)pPVar18 + 0x198))(pPVar18,iVar6,uVar11,uVar12,uVar13);
      std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                (this_00,&local_38);
      iVar9 = FUN_033961ec(10);
      iVar6 = iVar6 + iVar9 + *(int *)(local_38 + 0x50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
      iVar5 = iVar5 + 1;
    }
    std::
    list<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::~list((list<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)local_18);
  }
  else {
    if (*(long *)(gLawnApp + 0x9f0) == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = FUN_0339be00(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    }
    uVar21 = 0;
    bVar3 = false;
    while( true ) {
      uVar22 = uVar21 & 0xffffffff;
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      uVar16 = FUN_0339543c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
      if (uVar16 <= uVar21) break;
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      pRVar17 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar15 + 0x60),uVar21);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_38,pRVar17);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      bVar1 = std::operator==((string *)(lVar15 + 0x88),"ad");
      if ((bVar1) && (bVar2 = LawnApp::IsAdChannel(gLawnApp,3), bVar2 <= (lVar14 != 0))) {
        bVar3 = true;
        uVar21 = uVar21 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      }
      else {
        local_30 = (PVZ2UIStoreItemDisplayer *)0x0;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_38);
        pPVar18 = ::operator_new(0x1a0);
        if (bVar3) {
          uVar22 = (ulong)((int)uVar21 - 1);
        }
        uVar21 = uVar21 + 1;
        PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                  (pPVar18,(RtWeakPtr<Sexy::SoundResource> *)local_18,uVar22,this + 0xd8);
        local_30 = pPVar18;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        PVZ2UIStoreItemDisplayer::SetTimingFreeInSmallWindow(local_30,true);
        (**(code **)(*(long *)this_02 + 0x60))(this_02,local_30);
        pPVar18 = local_30;
        uVar11 = FUN_033961ec(0x41);
        uVar12 = FUN_033961ec(200);
        uVar13 = FUN_033961ec(0x157);
        (**(code **)(*(long *)pPVar18 + 0x198))(pPVar18,iVar6,uVar11,uVar12,uVar13);
        std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                  (this_00,&local_30);
        iVar5 = FUN_033961ec(10);
        iVar6 = iVar6 + iVar5 + *(int *)(local_30 + 0x50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      }
    }
  }
  local_20 = iVar6;
  (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_28);
  plVar19 = *(long **)(this + 0x120);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x60))(plVar19,this_02);
    FUN_033958d0(*(long *)(this + 0x120) + 0x1f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnLuaNotify(std::string const&) */

void __thiscall CoinStore::OnLuaNotify(CoinStore *this,string *param_1)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  RtWeakPtrBase *pRVar13;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ulong uVar15;
  undefined1 auStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  wstring awStack_78 [56];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = std::operator!=(param_1,"RefreshGemsStore");
  if ((!bVar3) && (*(int *)(this + 0x118) == 2)) {
    this_00 = (RtMixedPtrBase *)(this + 0xf8);
    cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar4 != '\0') {
      iVar5 = LawnApp::GetPlatform(gLawnApp);
      if (((iVar5 < 0x43) || (iVar5 = LawnApp::GetPlatform(gLawnApp), 0xb2 < iVar5)) &&
         ((iVar5 = LawnApp::GetPlatform(gLawnApp), iVar5 < 0xf ||
          (iVar5 = LawnApp::GetPlatform(gLawnApp), 0x39 < iVar5)))) {
        cVar4 = LawnApp::HasSpecialGemOffer(gLawnApp);
        uVar15 = 0;
        if (cVar4 != '\0') {
          uVar15 = 3;
        }
      }
      else {
        cVar4 = LawnApp::HasSpecialGemOffer(gLawnApp);
        uVar15 = 4;
        if (cVar4 == '\0') {
          uVar15 = 2;
        }
      }
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar12 = FUN_03395478(*(undefined8 *)(lVar11 + 0x48),*(undefined8 *)(lVar11 + 0x50));
      if (uVar15 < uVar12) {
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar13 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(lVar11 + 0x48),uVar15);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,pRVar13);
        cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
        if (cVar4 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_80);
          createPurchasePanel(this,aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          if (*(long *)(this + 0x138) != 0) {
            (**(code **)(*(long *)this + 0x68))(this);
            (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x138));
            *(undefined8 *)(this + 0x138) = 0;
            FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
            Sexy::Color::Color((Color *)aRStack_40,1);
            pPVar14 = ::operator_new(0x300);
            PVZ2UIButton::PVZ2UIButton
                      (pPVar14,-1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aRStack_40);
            *(PVZ2UIButton **)(this + 0x138) = pPVar14;
            FUN_05476c50(awStack_78);
            nop();
            iVar5 = *(int *)(this + 0xf0);
            iVar1 = *(int *)(this + 0x50);
            iVar6 = FUN_033961ec(0x50);
            this_01 = (LotteryResultProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
            iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_01);
            this_02 = (SalesProgressBar *)
                      CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
            uVar8 = SalesProgressBar::GetCurrentLevel(this_02);
            iVar2 = *(int *)(this + 0xf0);
            iVar9 = FUN_033961ec(0xf);
            iVar10 = FUN_033961ec(0x27);
            (**(code **)(**(long **)(this + 0x138) + 0x198))
                      (*(long **)(this + 0x138),(((iVar1 - iVar5 >> 1) + iVar2) - iVar7) + iVar9,
                       (iVar6 - iVar7) + iVar10,iVar7,uVar8);
            pPVar14 = *(PVZ2UIButton **)(this + 0x138);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06a9bf10,1);
            PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06a9bf78,1);
            PVZ2UIButton::SetDialogStates
                      (pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
            (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::AddRechargeNode(RechargeNode) */

void __thiscall CoinStore::AddRechargeNode(CoinStore *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
                ((vector<RechargeNode,std::allocator<RechargeNode>> *)this_00,
                 (RechargeNode *)local_24);
LAB_033a7378:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == local_24[0]) goto LAB_033a7378;
    if (local_24[0] <= *piVar2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<RechargeNode,std::allocator<RechargeNode>>::insert
                ((vector<RechargeNode,std::allocator<RechargeNode>> *)this_00,local_10,local_24);
      goto LAB_033a7378;
    }
    FUN_03398624((exception_ptr *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::InitCoinStore() */

void __thiscall CoinStore::InitCoinStore(CoinStore *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  RtWeakPtrBase *pRVar13;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  wchar_t *pwVar17;
  ActivityConfig *this_03;
  ProfileMgr *this_04;
  PlayerInfo *this_05;
  RtWeakPtr *pRVar18;
  string *extraout_x1;
  string *psVar19;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *extraout_x1_06;
  string *extraout_x1_07;
  string *extraout_x1_08;
  string *extraout_x1_09;
  string *extraout_x1_10;
  size_t in_x2;
  string asStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [56];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_90);
  switch(*(undefined4 *)(this + 0x118)) {
  default:
    std::string::append(asStack_90,"iOS PvZ2 Coin Store",in_x2);
    psVar19 = extraout_x1;
    break;
  case 1:
    if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
       (lVar12 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar12 + 0x112) == '\0')) {
      std::string::append(asStack_90,"iOS PvZ2 Sun Store",in_x2);
      psVar19 = extraout_x1_10;
    }
    else {
      std::string::append(asStack_90,"iOS PvZ2 Danger Room Sun Store",in_x2);
      psVar19 = extraout_x1_01;
    }
    break;
  case 2:
    std::string::append(asStack_90,"iOS PvZ2 Gem Store",in_x2);
    psVar19 = extraout_x1_02;
    break;
  case 3:
    std::string::append(asStack_90,"iOS PvZ2 Stamina Store",in_x2);
    psVar19 = extraout_x1_09;
    break;
  case 4:
    std::string::append(asStack_90,"iOS PvZ2 Gacha Store",in_x2);
    psVar19 = extraout_x1_07;
    break;
  case 5:
    std::string::append(asStack_90,"iOS PvZ2 Avatar Store",in_x2);
    psVar19 = extraout_x1_08;
    break;
  case 8:
    std::string::append(asStack_90,"iOS PvZ2 Fuel Store",in_x2);
    psVar19 = extraout_x1_03;
    break;
  case 9:
    std::string::append(asStack_90,"iOS PvZ2 Mystery Store",in_x2);
    psVar19 = extraout_x1_04;
    break;
  case 10:
    std::string::append(asStack_90,"iOS PvZ2 ZTicket Store",in_x2);
    psVar19 = extraout_x1_05;
    break;
  case 0xb:
    std::string::append(asStack_90,"iOS PvZ2 PVZ1Mode Time Energy Store",in_x2);
    psVar19 = extraout_x1_06;
    break;
  case 0xc:
    std::string::append(asStack_90,"iOS PvZ2 Avatar Ticket Store",in_x2);
    psVar19 = extraout_x1_00;
  }
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0xf8);
  Magento::GetStore((Magento *)asStack_90,psVar19);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pRVar13 = (RtWeakPtrBase *)FUN_03395484(*(undefined8 *)(lVar12 + 0x48),0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,pRVar13);
  uVar1 = *(uint *)(this + 0x118);
  if (uVar1 == 2) {
    iVar4 = LawnApp::GetPlatform(gLawnApp);
    if (((iVar4 < 0x43) || (iVar4 = LawnApp::GetPlatform(gLawnApp), 0xb2 < iVar4)) &&
       ((iVar4 = LawnApp::GetPlatform(gLawnApp), iVar4 < 0xf ||
        (iVar4 = LawnApp::GetPlatform(gLawnApp), 0x39 < iVar4)))) {
      cVar3 = LawnApp::HasSpecialGemOffer(gLawnApp);
      if (cVar3 != '\0') {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar18 = (RtWeakPtr *)FUN_03395484(*(undefined8 *)(lVar12 + 0x48),3);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_88,pRVar18);
      }
    }
    else {
      cVar3 = LawnApp::HasSpecialGemOffer(gLawnApp);
      if (cVar3 == '\0') {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar18 = (RtWeakPtr *)FUN_03395484(*(undefined8 *)(lVar12 + 0x48),2);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_88,pRVar18);
      }
      else {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        pRVar18 = (RtWeakPtr *)FUN_03395484(*(undefined8 *)(lVar12 + 0x48),4);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)aRStack_88,pRVar18);
      }
    }
    uVar1 = *(uint *)(this + 0x118);
    if (uVar1 == 3) goto LAB_033a7834;
    if (uVar1 != 2) goto LAB_033a7484;
    SecretGachaMgr::GetScreenType((SecretGachaMgr *)0x2);
    bVar2 = std::operator==((string *)aRStack_40,"Large");
    if (bVar2) {
      iVar4 = FUN_033961ec(0x2d);
    }
    else {
      iVar4 = FUN_033961ec(0xaf);
    }
    std::string::~string((string *)aRStack_40);
    iVar10 = *(int *)(this + 0x118);
    *(int *)(this + 0xf0) = *(int *)(gLawnApp + 0xd4) + iVar4 * -2;
  }
  else {
    if (uVar1 == 3) {
LAB_033a7834:
      iVar4 = FUN_033961ec(0x5c);
      iVar10 = FUN_033961ec(200);
      iVar5 = FUN_033961ec(10);
      *(int *)(this + 0xf0) = iVar4 + iVar10 * 4 + iVar5 * 3;
      iVar4 = FUN_033961ec(0x41);
      iVar10 = FUN_033961ec(0x157);
      iVar5 = FUN_033961ec(0x14);
      *(int *)(this + 0xf4) = iVar4 + iVar10 + iVar5;
      goto LAB_033a7500;
    }
LAB_033a7484:
    SecretGachaMgr::GetScreenType((SecretGachaMgr *)(ulong)uVar1);
    bVar2 = std::operator==((string *)aRStack_40,"Large");
    if (bVar2) {
      iVar4 = FUN_033961ec(0x46);
    }
    else {
      iVar4 = FUN_033961ec(200);
    }
    std::string::~string((string *)aRStack_40);
    iVar10 = *(int *)(this + 0x118);
    *(int *)(this + 0xf0) = *(int *)(gLawnApp + 0xd4) + iVar4 * -2;
  }
  iVar4 = FUN_033961ec(0x41);
  iVar5 = FUN_033961ec(0x157);
  iVar6 = FUN_033961ec(0x14);
  *(int *)(this + 0xf4) = iVar4 + iVar5 + iVar6;
  if (iVar10 == 2) {
    AddRechargeNode(this,10);
    AddRechargeNode(this,2);
    iVar4 = LawnApp::GetPlatform(gLawnApp);
    cVar3 = Android::Diag::IsMobileCardType(1);
    if ((cVar3 != '\0') &&
       ((((iVar4 == 1 || (iVar4 == 6)) || (iVar4 - 0xfU < 0x2b)) || (iVar4 - 0x43U < 0x70)))) {
      AddRechargeNode(this,6);
    }
    AddRechargeNode(this,0x14);
    AddRechargeNode(this,0x1e);
  }
LAB_033a7500:
  TodStringTranslate(L"[STORE_NO_PRICE]");
  FUN_054766c8(this + 0xe8,aRStack_40);
  FUN_05476c50(aRStack_40);
  switch(*(undefined4 *)(this + 0x118)) {
  default:
    pwVar17 = L"[COIN_STORE]";
    break;
  case 1:
    pwVar17 = L"[SUN_STORE]";
    break;
  case 2:
    pwVar17 = L"[GEM_STORE]";
    break;
  case 3:
    pwVar17 = L"[STAMINA_STORE]";
    break;
  case 4:
    pwVar17 = L"[STORE_CATEGORY_NAME_GACHA]";
    break;
  case 5:
    pwVar17 = L"[STORE_CATEGORY_NAME_AVATARS]";
    break;
  case 8:
    pwVar17 = L"[STORE_CATEGORY_NAME_FUEL]";
    break;
  case 9:
    pwVar17 = L"[STORE_CATEGORY_NAME_MYSTERY]";
    break;
  case 10:
    pwVar17 = L"[STORE_CATEGORY_NAME_ZTICKET]";
    break;
  case 0xb:
    pwVar17 = L"[STORE_CATEGORY_NAME_PVZ1MODE_TIME_ENERGY]";
    break;
  case 0xc:
    pwVar17 = L"[STORE_CATEGORY_NAME_AVATAR_TICKET]";
  }
  TodStringTranslate(pwVar17);
  thunk_FUN_05477668(this + 0xe8,aRStack_40);
  FUN_05476c50(aRStack_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_88);
  createPurchasePanel(this,aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,-1,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)aRStack_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar14;
  FUN_05476c50(asStack_78);
  nop();
  iVar4 = *(int *)(this + 0x50) - *(int *)(this + 0xf0) >> 1;
  iVar5 = FUN_033961ec(0x50);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf10);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar10 = *(int *)(this + 0xf0);
  iVar8 = FUN_033961ec(0xf);
  iVar9 = FUN_033961ec(0x27);
  (**(code **)(**(long **)(this + 0x138) + 0x198))
            (*(long **)(this + 0x138),((iVar4 + iVar10) - iVar6) + iVar8,(iVar5 - iVar6) + iVar9,
             iVar6,uVar7);
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06a9bf10,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06a9bf78,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  if (*(int *)(this + 0x118) == 0xb) {
    FUN_05478178(asStack_78,&DAT_056f11a8,asStack_80);
    Sexy::Color::Color((Color *)aRStack_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar14,0xbb9,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
               (Color *)aRStack_40);
    *(PVZ2UIButton **)(this + 0x140) = pPVar14;
    FUN_05476c50(asStack_78);
    nop();
    iVar10 = FUN_033961ec(0x14);
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b928);
    uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b928);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (**(code **)(**(long **)(this + 0x140) + 0x198))
              (*(long **)(this + 0x140),iVar10 + iVar4,iVar5 + iVar10,uVar7,uVar11);
    pPVar14 = *(PVZ2UIButton **)(this + 0x140);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06a9b928,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06a9b928,1);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aRStack_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  }
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
  std::string::string(asStack_80,"Game");
  std::string::string(asStack_78,"CoinStore");
  std::string::string((string *)aRStack_40,"");
  PurchaseBroker::StartNewCartInstance(this_02,asStack_80,asStack_78,(string *)aRStack_40);
  std::string::~string((string *)aRStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::~string(asStack_80);
  nop();
  if (*(int *)(this + 0x118) == 2) {
    this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
    this_04 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_05 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_04);
    if ((this_03 != (ActivityConfig *)0x0) &&
       (cVar3 = ActivityConfig::IsActivityDays(this_03), cVar3 == '\0')) {
      PlayerInfo::ResetRechargeDoubleData(this_05);
      PlayerInfo::ResetRechargePlantPieceReward(this_05);
    }
  }
  TodStringTranslate(L"[REMOVE_AD_HINT]");
  FUN_054766c8(this + 0x188,aRStack_40);
  FUN_05476c50(aRStack_40);
  this[400] = (CoinStore)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::CoinStore(StoreType) */

void __thiscall CoinStore::CoinStore(CoinStore *this,undefined4 param_2)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06613380;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066136b8;
  *(undefined ***)(this + 0xe0) = &PTR__CoinStore_06613700;
  FUN_05476574(this + 0xe8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  this[0x128] = (CoinStore)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  FUN_05476574(this + 0x188);
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Store");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::clear
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)(this + 0x158));
  this[0x170] = (CoinStore)0x0;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  *(undefined4 *)(this + 0x118) = param_2;
  *(undefined4 *)(this + 0x194) = 0xffffffff;
  this[400] = (CoinStore)0x0;
  *(undefined8 *)(this + 0x140) = 0;
  this[0x198] = (CoinStore)0x0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"AppStore");
  LawnApp::GetPackageName(pLVar2,(string *)&local_20);
  bVar3 = std::operator==((string *)&local_38,"com.popcap.pvz2cthdhwctdp");
  std::string::~string((string *)&local_38);
  std::string::~string((string *)&local_20);
  nop();
  if (bVar3) {
    this[0x198] = (CoinStore)0x1;
  }
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChangeAvatarSuccess);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(std::string)>>
            ((MessageRouter *)puVar1,Message::ChangeAvatarSuccess,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_f0 = local_58;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_130 = local_28;
  local_140 = local_38;
  uStack_138 = uStack_30;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_160 = local_20;
  uStack_158 = uStack_18;
  local_150 = local_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<CoinStore,void(CoinStore::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_160);
  LawnApp::SetSpecialGemOffer(gLawnApp,false);
  InitCoinStore(this);
  InitADCount(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnNetworkError(int, std::string const&) */

void __thiscall CoinStore::OnNetworkError(CoinStore *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1152];
  string asStack_868 [2144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_868);
  if (cVar1 != '\0') {
    LawnApp::SetSpecialGemOffer(gLawnApp,false);
    InitCoinStore(this);
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall CoinStore::OnNotifyRefreshActivityList(CoinStore *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_9c = 0x297f;
  local_8 = ___stack_chk_guard;
  local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
  local_90 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
  if (bVar1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    if (local_70 == '\0') {
      LawnApp::SetSpecialGemOffer(gLawnApp,false);
    }
    else {
      LawnApp::SetSpecialGemOffer(gLawnApp,true);
    }
    InitCoinStore(this);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::PaySucess(Sexy::RtWeakPtr<MagentoProductProps>, StoreType) */

void CoinStore::PaySucess(RtWeakPtr<Sexy::ResourceInfo> *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  LawnApp *pLVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar9;
  MagentoProductProps *pMVar10;
  MetricsCollector *this_01;
  char *__s;
  TGALogMgr *pTVar11;
  string *psVar12;
  size_t __n;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f0 [8];
  TGAPennyPursuitData aTStack_e8 [56];
  string asStack_b0 [8];
  string asStack_a8 [48];
  string asStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar7 = PlayerInfo::GetNumGems(this_00,false);
  uVar2 = iVar7 - s_gemBeforePurchase;
  iVar8 = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_00);
  iVar7 = s_freeGemBeforePurchase;
  LawnApp::KillCoinStore(gLawnApp);
  switch(param_2) {
  case 0:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar7 = *(int *)(lVar9 + 0x90);
    PlayerInfo::AddCoins(this_00,iVar7);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::CoinsPurchasedFromStore,iVar7);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCoin(pTVar11,iVar7,0,(uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
    break;
  case 1:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar1 = *(int *)(lVar9 + 0x90);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_78,"sun");
    TGALogMgr::UseLevelItem(pTVar11,asStack_78,0,uVar2);
    std::string::~string(asStack_78);
    nop();
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunAdd,iVar1);
    puVar3 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_78,(RtWeakPtrBase *)param_1);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar3,Message::ItemPurchaseInfo2,asStack_78,"Store|PvE_store",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
    if (*(long *)(gLawnApp + 0x9f0) != 0) {
      this_01 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      std::string::string(asStack_78,"sun");
      MetricsCollector::LogItemPurChase3(this_01,asStack_78,uVar2,iVar8 - iVar7);
      std::string::~string(asStack_78);
      nop();
    }
    break;
  case 2:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar7 = *(int *)(lVar9 + 0x90);
    PlayerInfo::AddGems(this_00,iVar7,true);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::GemsPurchasedFromStore,iVar7);
    break;
  case 3:
  case 6:
  case 7:
  case 9:
  case 10:
    break;
  case 4:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar5 = std::operator==((string *)(lVar9 + 0x80),"gacha_diamond");
    if ((bVar5) && (cVar6 = PlayerInfo::canFreeGacha(this_00), pLVar4 = gLawnApp, cVar6 != '\0')) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      LawnApp::ShowGachaUI(pLVar4,(string *)(lVar9 + 0x80),false);
      iVar7 = LawnApp::GetRealBeijingTime(gLawnApp);
      PlayerInfo::setLastFreeGachaTime(this_00,iVar7);
    }
    else {
      pLVar4 = gLawnApp;
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      LawnApp::ShowGachaUI(pLVar4,(string *)(lVar9 + 0x80),true);
    }
    break;
  case 5:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    cVar6 = PlayerInfo::IsPlantAvatarUnLocked(this_00,lVar9 + 0x80,0,0);
    if (cVar6 == '\0') {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      PlayerInfo::UnlockPlantAvatar(this_00,lVar9 + 0x80,0);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      PlayerInfo::SetPlantAvatar(this_00,lVar9 + 0x80,0);
      pLVar4 = gLawnApp;
      psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      MagentoProductProps::GetLocalizedDescription();
      LawnApp::ShowAvatarRewardDialog
                (pLVar4,aRStack_f0,(string *)aTStack_e8,asStack_78,0,0,0,0xffffffff);
      std::string::~string(asStack_78);
      std::string::~string((string *)aTStack_e8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f0);
    }
    else {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      PlayerInfo::AddAvatarPiecesCount(this_00,lVar9 + 0x80,0,0xf,0);
    }
    break;
  case 8:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    uVar2 = *(uint *)(lVar9 + 0x90);
    __n = (size_t)uVar2;
    RiftUtils::AddFuel(uVar2);
    MessageRouter::Broadcast<int,bool,int,int,bool,int>
              ((MessageRouter *)gMessageRouter,Message::PennyFuelCurrencyChanged,uVar2,false,0);
    pMVar10 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    fVar13 = (float)MagentoProductProps::GetPriceInUSD(pMVar10,true);
    TGAPennyPursuitData::TGAPennyPursuitData(aTStack_e8);
    std::string::append((string *)aTStack_e8,"5",__n);
    std::string::append(asStack_b0,"0",__n);
    DString::DString((DString *)asStack_78,(int)fVar13);
    __s = (char *)DString::c_str((DString *)asStack_78);
    std::string::append(asStack_a8,__s,__n);
    DString::~DString((DString *)asStack_78);
    pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)asStack_78,aTStack_e8);
    TGALogMgr::LogPennyPursuit(pTVar11,(DString *)asStack_78);
    TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)asStack_78);
    TGAPennyPursuitData::~TGAPennyPursuitData(aTStack_e8);
    break;
  case 0xb:
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar7 = *(int *)(lVar9 + 0x90);
    PVZ1ModeUtils::AddTimeEnergy(iVar7);
    MessageRouter::Broadcast<int,bool,int,int,bool,int>
              ((MessageRouter *)gMessageRouter,Message::PennyFuelCurrencyChanged,iVar7,false,1);
    pMVar10 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    MagentoProductProps::GetPriceInUSD(pMVar10,true);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnServerGemCallBack(bool const&, Sexy::RtWeakPtr<MagentoProductProps>, StoreType) */

void CoinStore::OnServerGemCallBack(char *param_1,RtWeakPtrBase *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (*param_1 != '\0') {
    if (param_3 == 1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int,Sexy::RtWeakPtr<MagentoProductProps>,bool,bool>
                ((MessageRouter *)puVar1,Message::MissionGemsUse,aRStack_10,1,*param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
      if (-1 < iVar2) {
        uVar3 = FUN_033954c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xcd8),
                             *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xce0));
        if ((ulong)(long)iVar2 < uVar3) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
          ;
          lVar5 = FUN_033954cc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xcd8),(long)iVar2);
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + *(int *)(lVar4 + 0x90);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    PaySucess(aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::ButtonDepress(int) */

void __thiscall CoinStore::ButtonDepress(CoinStore *this,int param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  char *pcVar6;
  MagentoProductProps *pMVar7;
  NameMapperBase *this_03;
  NetworkMgr *pNVar8;
  long *plVar9;
  TGALogMgr *pTVar10;
  long lVar11;
  MessageRouter *pMVar12;
  ZMatchShopMgr *pZVar13;
  ADManager *pAVar14;
  ICloudRequestSTDCallbackFunction *pIVar15;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  PurchaseBroker *this_05;
  MonthlyCardMgr *pMVar16;
  INetworkMsgProcess *this_06;
  GemBank *this_07;
  string *extraout_x1;
  size_t __n;
  undefined8 uVar17;
  long lVar18;
  float fVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  code *local_a0;
  function afStack_98 [32];
  code *local_78;
  string asStack_70 [48];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  s_gemBeforePurchase = PlayerInfo::GetNumGems(this_02,false);
  s_freeGemBeforePurchase = NewPVPMgr::GetSeasonEndTime((NewPVPMgr *)this_02);
  if (param_1 == 2000) {
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_UI_Menu_Buy_Coins");
    LawnApp::ShowGetGemsRestoreUI(gLawnApp);
    goto LAB_033a8ef4;
  }
  if (param_1 == 0xbb9) {
    ShowTipsDialog();
    goto LAB_033a8ef4;
  }
  if (param_1 == -1) {
    LawnApp::KillCoinStore(gLawnApp);
    goto switchD_033a8ea8_default;
  }
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_UI_Menu_Buy_Coins");
  if ((this[0x128] != (CoinStore)0x0) && (*(int *)(this + 0x118) == 1)) {
    FUN_0339545c(*(undefined8 *)(this + 0x100),(long)param_1);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (10.0 < fVar19) goto LAB_033a8ef4;
    EnableTutorial(this,false);
    MessageRouter::Post<int,TutorialEvent>
              ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x19);
    std::string::string((string *)aRStack_40,"UIGemBank");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)aRStack_40,extraout_x1);
    std::string::~string((string *)aRStack_40);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_78);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      nop();
      iVar4 = PlayerInfo::GetNumGems(this_02,false);
      GemBank::SetFakeCurrencyAmount(this_07,iVar4 + 8);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
LAB_033a90a0:
    FUN_0339545c(*(undefined8 *)(this + 0x100),(long)param_1);
    HotUIWidget::GetPtr();
    PaySucess(aRStack_40,*(undefined4 *)(this + 0x118));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    iVar4 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar4,3);
    bVar1 = std::operator==("CHECK",(string *)aRStack_40);
    std::string::~string((string *)aRStack_40);
    if (bVar1) {
      iVar4 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::GetSegForId(iVar4,3);
      iVar4 = StringHelper::ToInt((string *)&local_a0);
      FUN_0339545c(*(undefined8 *)(this + 0x100),(long)param_1);
      HotUIWidget::GetPtr();
      pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)&local_78);
      iVar5 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      __n = 1;
      TGALogMgr::GetSegForId(iVar5,3);
      FUN_05474278((TGALuckyChestData *)&local_78,aRStack_40);
      std::string::~string((string *)aRStack_40);
      DString::DString((DString *)aRStack_40,(int)fVar19 + iVar4);
      pcVar6 = (char *)DString::c_str((DString *)aRStack_40);
      std::string::append(asStack_70,pcVar6,__n);
      DString::~DString((DString *)aRStack_40);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                ((TGAPlantSpecialOfferData *)aRStack_40,(TGAPlantSpecialOfferData *)&local_78);
      TGALogMgr::LogRechargeReward(pTVar10,3,aRStack_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aRStack_40);
      pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::clearSegments(pTVar10,3);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)&local_78);
      std::string::~string((string *)&local_a0);
    }
    goto LAB_033a8ef4;
  }
  if (*(int *)(this + 0x118) == 5) {
    FUN_0339545c(*(undefined8 *)(this + 0x100),(long)param_1);
    HotUIWidget::GetPtr();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    this_03 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
    uVar3 = NameMapperBase::GetIdForName(this_03,(string *)(lVar18 + 0x80));
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    plVar9 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
    (**(code **)(*plVar9 + 0x460))(plVar9,uVar3);
    goto switchD_033a8ea8_default;
  }
  lVar18 = (long)param_1;
  FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
  HotUIWidget::GetPtr();
  pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  uVar3 = MagentoProductProps::GetPurchaseType(pMVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  switch(uVar3) {
  case 0:
    if (*(int *)(this + 0x118) == 10) {
      pZVar13 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      ZMatchShopMgr::BuyTicket(pZVar13,1);
      goto LAB_033a8ef4;
    }
    this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x178);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    bVar1 = std::operator==((string *)(lVar11 + 0x78),"gacha");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (bVar1) {
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      bVar1 = std::operator==((string *)(lVar11 + 0x80),"gacha_diamond");
      if ((bVar1) && (cVar2 = PlayerInfo::canFreeGacha(this_02), cVar2 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        local_78 = OnServerGemCallBack;
        std::
        bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType&>
                  ((_func_void_bool_ptr_RtWeakPtr_StoreType *)&local_78,
                   (_Placeholder *)&DAT_0576d300,(RtWeakPtr *)this_00,this + 0x118);
        std::function<void(bool)>::
        function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>,void>
                  ((function<void(bool)> *)afStack_98,aRStack_40);
        pIVar15 = ::operator_new(0x30);
        ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(pIVar15,afStack_98);
        PlayerInfo::SubtractGems
                  (this_02,1,0x8a0,(ICloudRequestCallbackFunctionBase *)pIVar15,1,false);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)afStack_98);
        std::
        _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
        ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
                  *)aRStack_40);
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        MagentoProductProps::GetPriceInUSD(pMVar7,true);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
        iVar4 = *(int *)(lVar18 + 0x18);
        local_78 = OnServerGemCallBack_Gacha_AndroidConvertIos;
        std::
        bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType&>
                  ((_func_void_bool_ptr_RtWeakPtr_StoreType *)&local_78,
                   (_Placeholder *)&DAT_0576d300,(RtWeakPtr *)this_00,this + 0x118);
        std::function<void(bool)>::
        function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>,void>
                  ((function<void(bool)> *)afStack_98,aRStack_40);
        pIVar15 = ::operator_new(0x30);
        ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(pIVar15,afStack_98);
        PlayerInfo::SubtractGems
                  (this_02,1,iVar4,(ICloudRequestCallbackFunctionBase *)pIVar15,1,false);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)afStack_98);
        std::
        _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
        ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
                  *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
      }
      break;
    }
    iVar4 = PlayerInfo::GetNumGems(this_02,true);
    if (iVar4 < (int)fVar19) {
      uVar17 = 2;
      goto LAB_033a94b8;
    }
    if (((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
        (cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar2 != '\0')) &&
       (*(int *)(this + 0x118) == 1)) {
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      *(int *)(this + 0x180) = param_1;
      pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
      this_06 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
      iVar4 = *(int *)(lVar18 + 0x18);
      local_a0 = OnServerGemCallBack;
      std::
      bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType&>
                ((_func_void_bool_ptr_RtWeakPtr_StoreType *)&local_a0,(_Placeholder *)&DAT_0576d300,
                 (RtWeakPtr *)this_00,this + 0x118);
      std::function<void(bool)>::
      function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>,void>
                ((function<void(bool)> *)afStack_98,aRStack_40);
      pIVar15 = ::operator_new(0x30);
      ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(pIVar15,afStack_98);
      DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)&local_78,(DTouchLayer *)pIVar15);
      INetworkMsgProcess::ICloudRequestUseGem(this_06,iVar4,1,(DRefPtr *)&local_78,1,false);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_78);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_98);
      std::
      _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
      ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
                *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
      goto LAB_033a8ef4;
    }
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    MagentoProductProps::GetPriceInUSD(pMVar7,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    bVar1 = std::operator==((string *)(lVar11 + 0x80),"fuel");
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
LAB_033a98e4:
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      iVar4 = *(int *)(lVar11 + 0x90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    else {
      iVar4 = 1;
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      bVar1 = std::operator==((string *)(lVar11 + 0x80),"pvz1mode_time_energy");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      if (bVar1) goto LAB_033a98e4;
    }
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a8);
    iVar5 = *(int *)(lVar11 + 0x18);
    local_78 = OnServerGemCallBack_AndroidConvertIos;
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    std::
    bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType&>
              ((_func_void_bool_ptr_RtWeakPtr_StoreType *)&local_78,(_Placeholder *)&DAT_0576d300,
               (RtWeakPtr *)&local_a0,this + 0x118);
    std::function<void(bool)>::
    function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>,void>
              ((function<void(bool)> *)afStack_98,aRStack_40);
    pIVar15 = ::operator_new(0x30);
    ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(pIVar15,afStack_98);
    PlayerInfo::SubtractGems
              (this_02,iVar4,iVar5,(ICloudRequestCallbackFunctionBase *)pIVar15,1,false);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_98);
    std::
    _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
    ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>,StoreType))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>,StoreType)>
              *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
    break;
  case 1:
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
    iVar5 = (int)fVar19;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    iVar4 = *(int *)(this + 0x118);
    if (iVar4 == 9) {
      if (iVar5 != 0) goto LAB_033a97cc;
      Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      cVar2 = MonthlyCardMgr::CanGetFreeMysteryCrystal();
      if (cVar2 == '\0') {
LAB_033a9c1c:
        std::string::string((string *)aRStack_40,"OpenMonthlyCardUI");
        Cpp2Lua((string *)aRStack_40);
        std::string::~string((string *)aRStack_40);
        nop();
      }
      else {
        pMVar16 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
        MonthlyCardMgr::RequestFreeItems(pMVar16,0);
      }
    }
    else if (iVar4 == 8) {
      if (iVar5 != 0) goto LAB_033a97cc;
      Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      cVar2 = MonthlyCardMgr::CanGetFreeFuel();
      if (cVar2 == '\0') goto LAB_033a9c1c;
      pMVar16 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      MonthlyCardMgr::RequestFreeItems(pMVar16,1);
    }
    else if (iVar4 == 0xb) {
      if (iVar5 != 0) goto LAB_033a97cc;
      Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      cVar2 = MonthlyCardMgr::CanGetFreeFuel();
      if (cVar2 == '\0') goto LAB_033a9c1c;
      pMVar16 = (MonthlyCardMgr *)Sexy::LazySingleton<MonthlyCardMgr>::GetInstancePtr();
      MonthlyCardMgr::RequestFreeItems(pMVar16,2);
    }
    else if (iVar4 == 10) {
      uVar3 = 1;
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      bVar1 = std::operator==((string *)(lVar11 + 0x88),"gem");
      if (!bVar1) {
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        bVar1 = std::operator==((string *)(lVar18 + 0x80),"battlezTicket_1");
        uVar3 = 2;
        if (!bVar1) {
          uVar3 = 3;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      pZVar13 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      ZMatchShopMgr::BuyTicket(pZVar13,uVar3);
    }
    else {
LAB_033a97cc:
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      lVar18 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      FUN_05475d88((string *)&local_78,lVar18 + 0x10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_05 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_04);
      PurchaseBroker::RequestPayment(this_05,(string *)&local_78,0);
      std::string::~string((string *)&local_78);
    }
    break;
  case 2:
    iVar4 = PlayerInfo::GetNumCoins(this_02,true);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (fVar19 <= (float)iVar4) {
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,true);
      iVar4 = PlayerInfo::SubtractCoins(this_02,(int)fVar19);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (-1 < iVar4) goto LAB_033a90a0;
    }
    uVar17 = 0;
    goto LAB_033a94b8;
  case 3:
    iVar4 = PlayerInfo::GetLeafCurrency(this_02);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (fVar19 <= (float)iVar4) {
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,true);
      iVar4 = (int)fVar19;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      PlayerInfo::ChangeLeafs(this_02,-iVar4);
      pMVar12 = (MessageRouter *)gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      uVar17 = 0;
LAB_033a933c:
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,Sexy::RtWeakPtr<MagentoProductProps>,int,int>
                (pMVar12,Message::ItemExChange,aRStack_40,iVar4,uVar17);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      goto LAB_033a90a0;
    }
    uVar17 = 6;
LAB_033a94b8:
    LawnApp::ShowGemStoreConfirm(gLawnApp,uVar17,1);
    break;
  case 4:
    iVar4 = PlayerInfo::GetNumStones(this_02,true);
    FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
    HotUIWidget::GetPtr();
    pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    if (fVar19 <= (float)iVar4) {
      FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
      HotUIWidget::GetPtr();
      pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
      iVar4 = PlayerInfo::SubtractStones(this_02,(int)fVar19);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (-1 < iVar4) {
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        pMVar7 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        fVar19 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        PlayerInfo::SetStoneBuyed(this_02,(string *)(lVar11 + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        pMVar12 = (MessageRouter *)gMessageRouter;
        FUN_0339545c(*(undefined8 *)(this + 0x100),lVar18);
        HotUIWidget::GetPtr();
        uVar17 = 1;
        iVar4 = (int)fVar19;
        goto LAB_033a933c;
      }
    }
    LawnApp::ShowGemStoreConfirm(gLawnApp,7,0);
    break;
  case 5:
    cVar2 = LawnApp::CheckNetWork(gLawnApp);
    if (cVar2 != '\0') {
      iVar4 = *(int *)(this + 0x118);
      if (iVar4 == 2) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,6);
      }
      else if (iVar4 == 0) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,5);
      }
      else if (iVar4 == 9) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,7);
      }
      else if (iVar4 == 8) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,10);
      }
      else if (iVar4 == 10) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,9);
      }
      else if (iVar4 == 1) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,0xe);
      }
      else if (iVar4 == 0xc) {
        pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar14,0x20);
      }
    }
  }
switchD_033a8ea8_default:
  iVar4 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar4,3);
  bVar1 = std::operator==("CHECK",(string *)aRStack_40);
  std::string::~string((string *)aRStack_40);
  if (bVar1) {
    pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar10,3);
  }
LAB_033a8ef4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CoinStore::ButtonDepress(int) */

void __thiscall CoinStore::ButtonDepress(CoinStore *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnServerGemCallBack_Gacha_AndroidConvertIos(bool const&,
   Sexy::RtWeakPtr<MagentoProductProps>, StoreType) */

void CoinStore::OnServerGemCallBack_Gacha_AndroidConvertIos
               (char *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined4 param_3)

{
  LawnApp *pLVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  MagentoProductProps *this;
  char *__s;
  TGALogMgr *pTVar6;
  size_t __n;
  int iVar7;
  float fVar8;
  string asStack_80 [8];
  TGALuckyChestData aTStack_78 [8];
  string asStack_70 [48];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar3,3);
    bVar2 = std::operator==("CHECK",(string *)aRStack_40);
    std::string::~string((string *)aRStack_40);
    if (bVar2) {
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::clearSegments(pTVar6,3);
    }
  }
  else {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar2 = std::operator==((string *)(lVar5 + 0x80),"gacha_diamond");
    if (!bVar2) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar2 = std::operator==((string *)(lVar5 + 0x80),"gacha_diamond10");
      if (!bVar2) goto LAB_033a9e50;
    }
    this = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    fVar8 = (float)MagentoProductProps::GetPriceInUSD(this,true);
    pLVar1 = gLawnApp;
    iVar7 = (int)fVar8;
    *(int *)(gLawnApp + 0x28f8) = iVar7;
    *(int *)(pLVar1 + 0x28fc) = iVar7;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
    PaySucess(aRStack_40,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar3,3);
    bVar2 = std::operator==("CHECK",(string *)aRStack_40);
    std::string::~string((string *)aRStack_40);
    if (bVar2) {
      iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::GetSegForId(iVar3,3);
      iVar3 = StringHelper::ToInt(asStack_80);
      TGALuckyChestData::TGALuckyChestData(aTStack_78);
      iVar4 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      __n = 1;
      TGALogMgr::GetSegForId(iVar4,3);
      FUN_05474278(aTStack_78,aRStack_40);
      std::string::~string((string *)aRStack_40);
      DString::DString((DString *)aRStack_40,iVar3 + iVar7);
      __s = (char *)DString::c_str((DString *)aRStack_40);
      std::string::append(asStack_70,__s,__n);
      DString::~DString((DString *)aRStack_40);
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                ((TGAPlantSpecialOfferData *)aRStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
      TGALogMgr::LogRechargeReward(pTVar6,3,aRStack_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aRStack_40);
      pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::clearSegments(pTVar6,3);
      TGALuckyChestData::~TGALuckyChestData(aTStack_78);
      std::string::~string(asStack_80);
    }
  }
LAB_033a9e50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinStore::OnServerGemCallBack_AndroidConvertIos(bool const&,
   Sexy::RtWeakPtr<MagentoProductProps>, StoreType) */

void CoinStore::OnServerGemCallBack_AndroidConvertIos
               (char *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  MagentoProductProps *this;
  char *__s;
  TGALogMgr *pTVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  size_t __n;
  int iVar9;
  float fVar10;
  string asStack_80 [8];
  TGALuckyChestData aTStack_78 [8];
  string asStack_70 [48];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    iVar9 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar9,3);
    bVar2 = std::operator==("CHECK",(string *)aRStack_40);
    std::string::~string((string *)aRStack_40);
    if (bVar2) {
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::clearSegments(pTVar5,3);
    }
  }
  else {
    this = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    fVar10 = (float)MagentoProductProps::GetPriceInUSD(this,true);
    puVar1 = gMessageRouter;
    iVar9 = (int)fVar10;
    if (param_3 == 1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,bool,int,Sexy::RtWeakPtr<MagentoProductProps>,bool,int>
                ((MessageRouter *)puVar1,Message::MissionGemsUse,aRStack_40,1,iVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      puVar1 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_40,"Store|PvE_store",
                 iVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      iVar3 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
      if (-1 < iVar3) {
        uVar6 = FUN_033954c0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xcd8),
                             *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xce0));
        if ((ulong)(long)iVar3 < uVar6) {
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          lVar8 = FUN_033954cc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xcd8),(long)iVar3);
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + *(int *)(lVar7 + 0x90);
        }
      }
    }
    else if (param_3 == 3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                ((MessageRouter *)puVar1,Message::ItemPurchase,aRStack_40,iVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      puVar1 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_40,"Store|PvE_store",
                 iVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)param_2);
    PaySucess(aRStack_40,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::GetSegForId(iVar3,3);
    bVar2 = std::operator==("CHECK",(string *)aRStack_40);
    std::string::~string((string *)aRStack_40);
    if (bVar2) {
      iVar3 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::GetSegForId(iVar3,3);
      iVar3 = StringHelper::ToInt(asStack_80);
      TGALuckyChestData::TGALuckyChestData(aTStack_78);
      iVar4 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
      __n = 1;
      TGALogMgr::GetSegForId(iVar4,3);
      FUN_05474278(aTStack_78,aRStack_40);
      std::string::~string((string *)aRStack_40);
      DString::DString((DString *)aRStack_40,iVar3 + iVar9);
      __s = (char *)DString::c_str((DString *)aRStack_40);
      std::string::append(asStack_70,__s,__n);
      DString::~DString((DString *)aRStack_40);
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                ((TGAPlantSpecialOfferData *)aRStack_40,(TGAPlantSpecialOfferData *)aTStack_78);
      TGALogMgr::LogRechargeReward(pTVar5,3,aRStack_40);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aRStack_40);
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::clearSegments(pTVar5,3);
      TGALuckyChestData::~TGALuckyChestData(aTStack_78);
      std::string::~string(asStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

