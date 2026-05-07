// Class: PvpCoinStore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpCoinStore::~PvpCoinStore() */

void __thiscall PvpCoinStore::~PvpCoinStore(PvpCoinStore *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694fe38;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0694fb10;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store_Pvp");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvpCoinStore::~PvpCoinStore() */

void __thiscall PvpCoinStore::~PvpCoinStore(PvpCoinStore *this)

{
  ~PvpCoinStore(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpCoinStore::createPurchasePanel(Sexy::RtWeakPtr<MagentoCategoryProps>) */

void __thiscall
PvpCoinStore::createPurchasePanel(PvpCoinStore *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  RtWeakPtrBase *pRVar11;
  PVZ2UIStoreItemDisplayer *this_02;
  ulong uVar12;
  ulong uVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = FUN_04af4318(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68));
  iVar2 = FUN_04af433c(10);
  if (*(long *)(this + 0xf8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0xf8));
    *(undefined8 *)(this + 0xf8) = 0;
  }
  iVar5 = *(int *)(this + 0xe0);
  iVar3 = FUN_04af433c(0xe);
  iVar6 = *(int *)(this + 0x50);
  iVar4 = FUN_04af433c(0x71);
  Sexy::Insets::Insets
            (aIStack_18,iVar3 + (iVar6 - iVar5) / 2,iVar4,iVar5 + iVar3 * -2,*(int *)(this + 0xe4));
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)0x0);
  lVar10 = *(long *)this_00;
  *(PVZ2UIScrollingWidget **)(this + 0xf8) = this_00;
  (**(code **)(lVar10 + 0x1a0))(this_00,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf8),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar5 = FUN_04af433c(200);
  iVar6 = FUN_04af433c(10);
  local_10 = iVar2 + iVar5 * iVar1 + iVar6 * (iVar1 + -1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_18);
  uVar13 = 0;
  while( true ) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    uVar12 = FUN_04af4318(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68));
    if (uVar12 <= uVar13) break;
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    pRVar11 = (RtWeakPtrBase *)FUN_04af4324(*(undefined8 *)(lVar10 + 0x60),uVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar11);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    this_02 = ::operator_new(0x1a0);
    PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
              (this_02,aRStack_20,uVar13 & 0xffffffff,this + 0xd8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    PVZ2UIStoreItemDisplayer::SetTimingFreeInSmallWindow(this_02,true);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar7 = FUN_04af433c(0x46);
    uVar8 = FUN_04af433c(200);
    uVar9 = FUN_04af433c(0x157);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,uVar7,uVar8,uVar9);
    iVar1 = FUN_04af433c(10);
    iVar2 = iVar2 + iVar1 + *(int *)(this_02 + 0x50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar13 = uVar13 + 1;
  }
  (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_01);
  FUN_04af4330(*(long *)(this + 0xf8) + 0x1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpCoinStore::ButtonDepress(int) */

void __thiscall PvpCoinStore::ButtonDepress(PvpCoinStore *this,int param_1)

{
  int iVar1;
  PlayerInfo *this_00;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  MagentoProductProps *pMVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  PVPManager *this_03;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -1) {
    LawnApp::KillPvpCoinStore(gLawnApp);
  }
  else {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_00 != (PlayerInfo *)0x0) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
      pRVar3 = (RtWeakPtrBase *)FUN_04af4324(*(undefined8 *)(lVar2 + 0x60),(long)param_1);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      pMVar4 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      iVar1 = MagentoProductProps::GetPurchaseType(pMVar4);
      if (iVar1 == 1) {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_02 = (PurchaseBroker *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_rightmost(this_01);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        PurchaseBroker::RequestPayment(this_02,(string *)(lVar2 + 0x10),0);
      }
      else {
        pMVar4 = (MagentoProductProps *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        iVar1 = MagentoProductProps::GetPurchaseType(pMVar4);
        if (iVar1 == 0) {
          lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          lVar2 = FUN_04af432c(*(undefined8 *)(lVar2 + 0xb0));
          fVar5 = *(float *)(lVar2 + 8);
          iVar1 = PlayerInfo::GetNumGems(this_00,false);
          if (iVar1 < (int)fVar5) {
            LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
          }
          else {
            LawnApp::KillPvpCoinStore(gLawnApp);
            this_03 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            PVPManager::RequestBuyPvpCoin(this_03,param_1);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PvpCoinStore::ButtonDepress(int) */

void __thiscall PvpCoinStore::ButtonDepress(PvpCoinStore *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpCoinStore::PvpCoinStore() */

void __thiscall PvpCoinStore::PvpCoinStore(PvpCoinStore *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  LawnApp *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIButton *pPVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  string *extraout_x1;
  string *extraout_x1_00;
  long *plVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0694fb10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0694fe38;
  FUN_05476574(this + 0xe8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  this_01 = gLawnApp;
  std::string::string(asStack_40,"UI_Store_Pvp");
  LawnApp::LoadGroup(this_01,asStack_40);
  std::string::~string(asStack_40);
  nop();
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  std::string::string(asStack_40,"pvpCoins");
  Magento::GetStore((Magento *)asStack_40,extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::string::~string(asStack_40);
  nop();
  iVar1 = FUN_04af433c(0x30);
  iVar2 = FUN_04af433c(200);
  iVar3 = FUN_04af433c(10);
  *(int *)(this + 0xe0) = iVar1 + iVar2 * 4 + iVar3 * 3;
  iVar1 = FUN_04af433c(0x4c);
  iVar2 = FUN_04af433c(200);
  iVar3 = FUN_04af433c(10);
  *(int *)(this + 0xe0) = iVar1 + iVar2 * 3 + iVar3 * 2;
  iVar1 = FUN_04af433c(0x19);
  iVar2 = FUN_04af433c(0x157);
  *(int *)(this + 0xe4) = iVar2 + iVar1 * 2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  MagentoCategoryProps::GetLocalizedName();
  Sexy::UTF8StringToWString((Sexy *)asStack_40,extraout_x1_00);
  TodStringTranslate((wstring *)aRStack_78);
  FUN_054766c8(this + 0xe8,auStack_80);
  FUN_05476c50(auStack_80);
  FUN_05476c50(aRStack_78);
  std::string::~string(asStack_40);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)this_00);
  createPurchasePanel(this,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  FUN_05478178(aRStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,-1,(ButtonListener *)(this + 0xd8),(wstring *)aRStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar9;
  FUN_05476c50(aRStack_78);
  nop();
  plVar12 = *(long **)(this + 0xf0);
  iVar1 = *(int *)(this + 0xe0);
  iVar2 = *(int *)(this + 0x50);
  pcVar13 = *(code **)(*plVar12 + 0x198);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b820d0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar4 = FUN_04af433c(0x2e);
  iVar5 = FUN_04af433c(0x71);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b820d0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b820d0);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b820d0);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar13)(plVar12,((iVar1 + (iVar2 - iVar1) / 2) - iVar3) - iVar4,iVar5 - iVar6,uVar7,uVar8);
  pPVar9 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_78,&DAT_06b820d0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b820a0,1);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)aRStack_78,(PVZ2UIImage *)asStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpCoinStore::Draw(Sexy::Graphics*) */

void __thiscall PvpCoinStore::Draw(PvpCoinStore *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  iVar2 = *(int *)(this + 0xe0);
  iVar1 = FUN_04af433c(0x71);
  Sexy::Insets::Insets
            ((Insets *)&local_48,(*(int *)(this + 0x50) - iVar2) / 2,iVar1,iVar2,
             *(int *)(this + 0xe4));
  iVar2 = FUN_04af433c(10);
  iVar1 = FUN_04af433c(9);
  iVar3 = FUN_04af433c(0x14);
  iVar4 = FUN_04af433c(0x19);
  Sexy::Insets::Insets
            (aIStack_38,local_48 + iVar2,local_44 + iVar1,local_40 - iVar3,local_3c - iVar4);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_48);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82078);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar2 = *(int *)(this + 0xe0);
  iVar1 = FUN_04af433c(0x71);
  iVar3 = FUN_04af433c(0x3c);
  Sexy::Insets::Insets(aIStack_28,(*(int *)(this + 0x50) - iVar2) / 2,iVar1,iVar2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar5,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

