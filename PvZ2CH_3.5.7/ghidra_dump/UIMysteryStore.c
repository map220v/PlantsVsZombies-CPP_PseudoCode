// Class: UIMysteryStore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::Initialize() */

void __thiscall UIMysteryStore::Initialize(UIMysteryStore *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIMysteryStore");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::onConfirmBuy() */

void __thiscall UIMysteryStore::onConfirmBuy(UIMysteryStore *this)

{
  undefined4 uVar1;
  NameMapperBase *this_00;
  NetworkMgr *this_01;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  std::string::string(asStack_10,"mat_mystery_crystal");
  uVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  (**(code **)(*plVar2 + 0x370))
            (plVar2,9,*(undefined4 *)(this + 0x16c),*(undefined4 *)(this + 0x168),uVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::SyncRefreshTime() */

void __thiscall UIMysteryStore::SyncRefreshTime(UIMysteryStore *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  piVar4 = (int *)LawnApp::BeijingTime(gLawnApp,&local_10);
  if (piVar4[6] == 0) {
    iVar6 = 0x15180;
  }
  else {
    iVar6 = (8 - piVar4[6]) * 0x15180;
  }
  iVar1 = piVar4[1];
  iVar2 = piVar4[2];
  iVar3 = *piVar4;
  lVar5 = LawnApp::GetRealServerTime(gLawnApp);
  *(long *)(this + 0x170) = lVar5 + (((iVar2 * -0xe10 + iVar1 * -0x3c) - iVar3) + iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::getContentBgImg(int) */

void UIMysteryStore::getContentBgImg(int param_1)

{
  long lVar1;
  undefined4 in_w1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  switch(in_w1) {
  default:
    __s = "white";
    break;
  case 1:
    __s = "green";
    break;
  case 2:
    __s = "blue";
    break;
  case 3:
    __s = "purple";
    break;
  case 4:
    __s = "gold";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::onConfirmToStore() */

void UIMysteryStore::onConfirmToStore(void)

{
  TGALogMgr *pTVar1;
  size_t in_x2;
  TGANFSLinkageData aTStack_58 [40];
  TGAArtifactPresentData aTStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::ShowCoinStore(gLawnApp,9);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
  std::string::append((string *)aTStack_58,"4",in_x2);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData(aTStack_30,(TGAArtifactPresentData *)aTStack_58);
  TGALogMgr::LogMysteryStore(pTVar1,aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::showOverview() */

void UIMysteryStore::showOverview(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
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
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_03d9b1a4(0x352);
    iVar3 = FUN_03d9b1a4(0x1ae);
  }
  else {
    iVar2 = FUN_03d9b1a4(800);
    iVar3 = FUN_03d9b1a4(0x1ae);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[MYSTERY_SHOP_OVERVIEW_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[MYSTERY_SHOP_OVERVIEW_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03d9b1a4(2);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::showMaterialShopConfirm() */

void __thiscall UIMysteryStore::showMaterialShopConfirm(UIMysteryStore *this)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[BUY_MYSTERY_SHOP_NOT_ENOUGH_TIP]",auStack_68);
  FUN_05478178(awStack_50,L"[BUY_MYSTERY_SHOP_NOT_ENOUGH_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmToStore);
  Sexy::Delegate0::Delegate0<UIMysteryStore,void(UIMysteryStore::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::showShopConfirm(int) */

void __thiscall UIMysteryStore::showShopConfirm(UIMysteryStore *this,int param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x168) = param_1;
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[BUY_MYSTERY_SHOP_TIP]",auStack_68);
  FUN_05478178(awStack_50,L"[BUY_MYSTERY_SHOP_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmBuy);
  Sexy::Delegate0::Delegate0<UIMysteryStore,void(UIMysteryStore::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::tryBuyItem(int, int) */

void __thiscall UIMysteryStore::tryBuyItem(UIMysteryStore *this,int param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_mystery_crystal");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (iVar1 < param_2) {
    showMaterialShopConfirm(this);
  }
  else {
    showShopConfirm(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::UIMysteryStore() */

void __thiscall UIMysteryStore::UIMysteryStore(UIMysteryStore *this)

{
  undefined *puVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06773ce0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onShopBuyFinish);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UIMysteryStore,void(UIMysteryStore::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPaySuccess);
  Sexy::Delegate0::Delegate0<UIMysteryStore,void(UIMysteryStore::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BuyItemPaySuccess,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyFreeItemGot);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<UIMysteryStore,void(UIMysteryStore::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyFreeItemGot,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_e0 = local_50;
  uStack_d8 = uStack_48;
  local_d0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIMysteryStore,void(UIMysteryStore::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMysteryStore::create(bool) */

UIMysteryStore * UIMysteryStore::create(bool param_1)

{
  UIMysteryStore *this;
  
  if (s_pWidgetHandler != (UIMysteryStore *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x178);
  UIMysteryStore(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pWidgetHandler = this;
  return this;
}


/* UIMysteryStore::~UIMysteryStore() */

void __thiscall UIMysteryStore::~UIMysteryStore(UIMysteryStore *this)

{
  *(undefined ***)this = &PTR_GetClass_06773ce0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  std::vector<StoreData,std::allocator<StoreData>>::~vector
            ((vector<StoreData,std::allocator<StoreData>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIMysteryStore::~UIMysteryStore() */

void __thiscall UIMysteryStore::~UIMysteryStore(UIMysteryStore *this)

{
  ~UIMysteryStore(this);
  AK::FreeHook(this);
  return;
}


/* UIMysteryStore::SyncPurchasedList() */

void __thiscall UIMysteryStore::SyncPurchasedList(UIMysteryStore *this)

{
  GachaConfig *this_00;
  vector *pvVar1;
  
  this_00 = (GachaConfig *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
  pvVar1 = (vector *)GachaConfig::GetGachaPlantRewardList(this_00);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x150),pvVar1);
  return;
}


/* UIMysteryStore::updatePlantList(int) */

void __thiscall UIMysteryStore::updatePlantList(UIMysteryStore *this,int param_1)

{
  MysteryCrystalMgr *this_00;
  vector *pvVar1;
  
  std::vector<StoreData,std::allocator<StoreData>>::clear
            ((vector<StoreData,std::allocator<StoreData>> *)(this + 0x138));
  this_00 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
  pvVar1 = (vector *)MysteryCrystalMgr::GetPlantList(this_00,param_1);
  std::vector<StoreData,std::allocator<StoreData>>::operator=
            ((vector<StoreData,std::allocator<StoreData>> *)(this + 0x138),pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::UpdateTime() */

void __thiscall UIMysteryStore::UpdateTime(UIMysteryStore *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  char *pcVar3;
  wstring *extraout_x1;
  code *pcVar4;
  long lVar5;
  undefined1 auVar6 [12];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  lVar5 = *(long *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  auVar6 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar5 - auVar6._0_8_),auVar6._8_4_);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"refresh_countdown_text");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_18);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    Sexy::SexyStringToUTF8String(aSStack_28,extraout_x1);
    DString::DString((DString *)asStack_18,asStack_20);
    std::string::~string(asStack_20);
    pcVar4 = *(code **)(*(long *)pDVar2 + 0x338);
    pcVar3 = DString::operator_cast_to_char_((DString *)asStack_18);
    (*pcVar4)(pDVar2,pcVar3);
    DString::~DString((DString *)asStack_18);
  }
  FUN_05476c50(aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::SyncMaterial() */

void __thiscall UIMysteryStore::SyncMaterial(UIMysteryStore *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar2;
  DTouchLayer *pDVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_18,"mat_mystery_crystal");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_18);
  std::string::~string(asStack_18);
  nop();
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_18,"material_num_text");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_18);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x338);
    DString::DString((DString *)asStack_18,iVar1);
    uVar4 = DString::c_str((DString *)asStack_18);
    (*pcVar5)(pDVar3,uVar4);
    DString::~DString((DString *)asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::onPaySuccess() */

void __thiscall UIMysteryStore::onPaySuccess(UIMysteryStore *this)

{
  int iVar1;
  TGALogMgr *pTVar2;
  size_t __n;
  string asStack_60 [8];
  TGANFSLinkageData aTStack_58 [16];
  string asStack_48 [16];
  undefined1 auStack_38 [8];
  TGAArtifactPresentData aTStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SyncMaterial(this);
  iVar1 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  __n = 0;
  TGALogMgr::GetSegForId(iVar1,0x2757);
  TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
  std::string::append((string *)aTStack_58,"2",__n);
  std::string::append(asStack_48,"3",__n);
  thunk_FUN_05475e00(auStack_38,asStack_60);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData(aTStack_30,(TGAArtifactPresentData *)aTStack_58);
  TGALogMgr::LogMysteryStore(pTVar2,aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aTStack_30);
  TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMysteryStore::OnNotifyFreeItemGot(std::string const&) */

void __thiscall UIMysteryStore::OnNotifyFreeItemGot(UIMysteryStore *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"mystery_crystal");
  if (!bVar1) {
    return;
  }
  SyncMaterial(this);
  return;
}


/* UIMysteryStore::onADFinished(int) */

void __thiscall UIMysteryStore::onADFinished(UIMysteryStore *this,int param_1)

{
  if (param_1 != 7) {
    return;
  }
  SyncMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::UserInit() */

void __thiscall UIMysteryStore::UserInit(UIMysteryStore *this)

{
  exception_ptr *this_00;
  string *psVar1;
  DTouchLayer *pDVar2;
  string *psVar3;
  RiftShopMgr *this_01;
  ulong uVar4;
  XMLParser *this_02;
  char *pcVar5;
  TGALogMgr *pTVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  function<bool(Sexy::Touch_const&)> afStack_78 [32];
  string asStack_58 [40];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  SyncPurchasedList(this);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu/btnClose");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar9 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d9afd8(afStack_78,this);
    (*pcVar9)(pDVar2,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/dialog/menu/btnInfo");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar9 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d9b034(afStack_78,this);
    (*pcVar9)(pDVar2,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"btn_shop");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar9 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d9b090(afStack_78,this);
    (*pcVar9)(pDVar2,afStack_78);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
  }
  iVar8 = 1;
  uVar7 = 0;
  do {
    psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    DString::Format("root/dialog/menu2/btnType%d",asStack_30,(ulong)uVar7);
    DString::operator_cast_to_string((DString *)asStack_30);
    pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
    std::string::~string(asStack_58);
    DString::~DString((DString *)asStack_30);
    if (pDVar2 == (DTouchLayer *)0x0) {
LAB_03d9f47c:
      if (iVar8 == 6) {
        psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
        psVar1 = asStack_58;
        std::string::string(asStack_30,"GetLimitedText");
        pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
        std::string::~string(asStack_30);
        nop();
        if (pDVar2 != (DTouchLayer *)0x0) {
          this_01 = (RiftShopMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
          uVar4 = RiftShopMgr::getRefreshShopTimes(this_01);
          psVar1 = (string *)(uVar4 & 0xffffffff);
          this_02 = (XMLParser *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
          uVar4 = Sexy::XMLParser::GetCurrentLineNum(this_02);
          pcVar9 = *(code **)(*(long *)pDVar2 + 0x338);
          DString::Format(&DAT_055ff360,asStack_30,uVar4 & 0xffffffff);
          pcVar5 = DString::operator_cast_to_char_((DString *)asStack_30);
          (*pcVar9)(pDVar2,pcVar5);
          DString::~DString((DString *)asStack_30);
        }
        SyncRefreshTime(this);
        SyncMaterial(this);
        TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)asStack_58);
        std::string::append(asStack_58,"1",(size_t)psVar1);
        pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGAArtifactPresentData::TGAArtifactPresentData
                  ((TGAArtifactPresentData *)asStack_30,(TGAArtifactPresentData *)asStack_58);
        TGALogMgr::LogMysteryStore(pTVar6,asStack_30);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_30);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_58);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      pcVar9 = *(code **)(*(long *)pDVar2 + 0x350);
      FUN_03d9b0ec(afStack_78,this);
      (*pcVar9)(pDVar2,afStack_78);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_78);
      if (uVar7 != 0) goto LAB_03d9f47c;
      (**(code **)(*(long *)pDVar2 + 1000))(pDVar2);
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::updateSelectBox(std::vector<int, std::allocator<int> > const&) */

void __thiscall UIMysteryStore::updateSelectBox(UIMysteryStore *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  char *__s;
  DTransformNode *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  DButton *pDVar8;
  code *pcVar9;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_03d9c140(*(undefined8 *)param_1);
  local_28 = FUN_03d9c190(*(undefined8 *)(param_1 + 8));
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar2) {
    do {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      iVar1 = *piVar3;
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
      pcVar9 = *(code **)(*plVar4 + 0x58);
      DString::DString((DString *)local_18,iVar1);
      __s = (char *)DString::c_str((DString *)local_18);
      std::string::string((string *)&local_20,__s);
      this_01 = (DTransformNode *)(*pcVar9)(plVar4,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      DString::~DString((DString *)local_18);
      if (this_01 != (DTransformNode *)0x0) {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x138);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_20 = FUN_03d9cda4(uVar5,uVar6,iVar1);
        local_18[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
        if (bVar2) {
          (**(code **)(*(long *)this_01 + 0xd8))(this_01,1);
          if (*(code **)(*(long *)this_01 + 0x238) == DTransformNode::getParent) {
            plVar4 = (long *)DTransformNode::getParent(this_01);
          }
          else {
            plVar4 = (long *)(**(code **)(*(long *)this_01 + 0x238))();
          }
          if (plVar4 != (long *)0x0) {
            pcVar9 = *(code **)(*plVar4 + 0x58);
            std::string::string((string *)local_18,"content_bg");
            lVar7 = (*pcVar9)(plVar4,(DString *)local_18);
            std::string::~string((string *)local_18);
            nop();
            if ((lVar7 != 0) &&
               (pDVar8 = DTransformNode::getChildByTag<DButton*>((int)lVar7),
               pDVar8 != (DButton *)0x0)) {
              (**(code **)(*(long *)pDVar8 + 0x338))(pDVar8,0);
            }
          }
        }
        else {
          (**(code **)(*(long *)this_01 + 0xd8))(this_01);
        }
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMysteryStore::onItemPurchased(int) */

void __thiscall UIMysteryStore::onItemPurchased(UIMysteryStore *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x150),&local_4);
  updateSelectBox(this,(vector *)(this + 0x150));
  SyncMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::onShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UIMysteryStore::onShopBuyFinish(UIMysteryStore *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *__s;
  TGALogMgr *pTVar7;
  size_t __n;
  char *__n_00;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_230 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_218 [24];
  undefined8 local_200;
  undefined1 auStack_1f8 [24];
  string asStack_1e0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1d8 [48];
  undefined8 local_1a8;
  int local_1a0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (*(int *)(param_2 + 0x14) == 9)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string((string *)&local_1a8,"mat_mystery_crystal");
    iVar2 = PlayerInfo::GetMaterialNum(this_01,(string *)&local_1a8);
    iVar2 = iVar2 - *(int *)(param_2 + 0x24);
    std::string::~string((string *)&local_1a8);
    nop();
    std::string::string((string *)&local_1a8,"mat_mystery_crystal");
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    PlayerInfo::SetMaterialNum(this_01,(string *)&local_1a8,iVar2);
    std::string::~string((string *)&local_1a8);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_230);
    Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_250);
    local_250 = *(undefined4 *)(param_2 + 0x18);
    local_24c = *(undefined4 *)(param_2 + 0x1c);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::push_back
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)avStack_230,
               (PaymentBundleInfo *)&local_250);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1d8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_218);
    local_248 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_230);
    local_240 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_230);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_248,(__normal_iterator *)&local_240),
          bVar1) {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_248);
      ProfileChangeItemAmount(*piVar5,piVar5[1],false);
      local_238 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )amStack_1d8,(int *)&local_1a8);
      local_200 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)amStack_1d8);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_238,(rbtree_iterator *)&local_200);
      if (bVar1) {
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_238);
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + local_1a0;
      }
      else {
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)amStack_1d8,(int *)&local_1a8);
        *piVar5 = local_1a0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_218,(int *)&local_1a8);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_248);
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
    __n = 1;
    UIRedPacketResult::create((map *)amStack_1d8,(vector *)avStack_218,true);
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_200);
    std::string::append((string *)&local_200,"3",__n);
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    std::string::string((string *)&local_1a8,"");
    FUN_05462980(auStack_178,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    local_238 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_230);
    local_1a8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_230);
    __n_00 = "phone";
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_238,(__normal_iterator *)&local_1a8),
          bVar1) {
      puVar6 = (undefined4 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_238);
      FUN_0546065c(auStack_168,*puVar6);
      FUN_054603b8(auStack_168,&DAT_05593348);
      FUN_0546065c(auStack_168,puVar6[1]);
      FUN_054603b8(auStack_168,&DAT_05594620);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_238);
    }
    FUN_05462824((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_238,auStack_178);
    thunk_FUN_05475e00(auStack_1f8,
                       (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_238);
    DString::DString((DString *)&local_1a8,*(int *)(param_2 + 0x24));
    __s = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append(asStack_1e0,__s,(size_t)__n_00);
    DString::~DString((DString *)&local_1a8);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAArtifactPresentData::TGAArtifactPresentData
              ((TGAArtifactPresentData *)&local_1a8,(TGAArtifactPresentData *)&local_200);
    TGALogMgr::LogMysteryStore(pTVar7,(string *)&local_1a8);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_1a8);
    onItemPurchased(this,*(int *)(param_2 + 0x18));
    std::string::~string((string *)&local_238);
    FUN_054617bc(auStack_178);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_200);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_218);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_1d8);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)avStack_230);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMysteryStore::updateItems(std::vector<StoreData, std::allocator<StoreData> > const&) */

void __thiscall UIMysteryStore::updateItems(UIMysteryStore *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  DNodeLoaderConfig *pDVar5;
  string *psVar6;
  DTouchLayer *pDVar7;
  DTouchLayer *pDVar8;
  int *piVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  DMenu *this_00;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  code *pcVar14;
  int local_c0;
  exception_ptr aeStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  CompiledMap aCStack_98 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_90 [8];
  RtWeakPtr aRStack_88 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  Plant aPStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar5 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar5,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(aeStack_b0);
  std::string::string(asStack_38,"btnBuy");
  DMenu::setTargetName(psVar6);
  std::string::~string(asStack_38);
  nop();
  cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aeStack_b0);
  if (cVar3 != '\0') {
    local_c0 = 0;
    local_a8 = FUN_03d9c1e0(*(undefined8 *)param_1);
    local_a0 = FUN_03d9c230(*(undefined8 *)(param_1 + 8));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar4)
    {
      piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      iVar1 = *piVar9;
      iVar2 = piVar9[1];
      GetGameItemInfo(iVar1,0x7fffffff,0);
      pDVar5 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar5,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      pDVar5 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"content_bg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar5,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      cVar3 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_90);
      if (cVar3 == '\0') {
LAB_03d9fe84:
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_98);
      }
      else {
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        std::string::string(asStack_68,"img");
        pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
        std::string::~string(asStack_68);
        nop();
        if (local_34 == 1) {
          psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
          bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_88);
          if (bVar4) {
            plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)aDStack_90);
            pcVar14 = *(code **)(*plVar11 + 0x2e8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
            getContentBgImg((int)this);
            uVar12 = FUN_0547429c(asStack_70);
            Sexy::StrFormat("UI/utility/item_bg_%s",asStack_68,uVar12);
            (*pcVar14)(plVar11,asStack_68);
            std::string::~string(asStack_68);
            std::string::~string(asStack_70);
          }
          psVar6 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
          std::string::string(asStack_68,"itemName");
          pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
          std::string::~string(asStack_68);
          nop();
          if (pDVar8 != (DTouchLayer *)0x0) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)aRStack_88);
            Plant::GetFormattedNameString(aPStack_78,aRStack_80);
            Sexy::SexyStringToUTF8String((Sexy *)aPStack_78,extraout_x1_00);
            DString::DString((DString *)asStack_68,asStack_70);
            std::string::~string(asStack_70);
            FUN_05476c50(aPStack_78);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            pcVar14 = *(code **)(*(long *)pDVar8 + 0x338);
            pcVar10 = DString::operator_cast_to_char_((DString *)asStack_68);
            (*pcVar14)(pDVar8,pcVar10);
            DString::~DString((DString *)asStack_68);
          }
          pcVar14 = *(code **)(*(long *)pDVar7 + 0x338);
          FUN_031f5e7c(asStack_68,"UI/headshot/bigPlant/",auStack_28);
          (*pcVar14)(pDVar7,asStack_68,0);
          std::string::~string(asStack_68);
          (**(code **)(*(long *)pDVar7 + 0x170))(0x42960000,pDVar7);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        }
        else {
          psVar6 = (string *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
          std::string::string(asStack_68,"itemName");
          pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
          std::string::~string(asStack_68);
          nop();
          if (pDVar8 != (DTouchLayer *)0x0) {
            Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1);
            DString::DString((DString *)asStack_68,asStack_70);
            std::string::~string(asStack_70);
            pcVar14 = *(code **)(*(long *)pDVar8 + 0x338);
            pcVar10 = DString::operator_cast_to_char_((DString *)asStack_68);
            (*pcVar14)(pDVar8,pcVar10);
            DString::~DString((DString *)asStack_68);
          }
          (**(code **)(*(long *)pDVar7 + 0x2e8))(pDVar7,auStack_18);
          (**(code **)(*(long *)pDVar7 + 0x170))(0x42be0000,pDVar7);
        }
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar11 + 0x160))(0x43250000,0x43280000);
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        std::string::string(asStack_68,"btnBuy");
        pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
        std::string::~string(asStack_68);
        nop();
        if (pDVar7 == (DTouchLayer *)0x0) goto LAB_03d9fe84;
        DRefPtr<DSpriteNode>::DRefPtr((DRefPtr<DSpriteNode> *)asStack_70);
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_70);
        pcVar14 = *(code **)(*plVar11 + 0x2e8);
        std::string::string(asStack_68,"UI/Generic/green_button_nogem");
        (*pcVar14)(plVar11,asStack_68);
        std::string::~string(asStack_68);
        nop();
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_70);
        (**(code **)(*plVar11 + 0x160))(0x42f00000,0x42340000);
        uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_70);
        (**(code **)(*(long *)pDVar7 + 0x388))(pDVar7,uVar12);
        (**(code **)(*(long *)pDVar7 + 0xf0))(pDVar7,iVar1);
        std::string::string(asStack_68,"textPrice");
        pDVar8 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar7);
        std::string::~string(asStack_68);
        nop();
        if (pDVar8 != (DTouchLayer *)0x0) {
          pcVar14 = *(code **)(*(long *)pDVar8 + 0x338);
          DString::DString((DString *)asStack_68,iVar2);
          uVar12 = DString::c_str((DString *)asStack_68);
          (*pcVar14)(pDVar8,uVar12);
          DString::~DString((DString *)asStack_68);
        }
        pcVar14 = *(code **)(*(long *)pDVar7 + 0x350);
        FUN_03d9b148(afStack_58,this,CONCAT44(iVar2,local_c0));
        (*pcVar14)(pDVar7,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_70)
        ;
        cVar3 = Sexy::CompiledMap::Initialized(aCStack_98);
      }
      if (cVar3 != '\0') {
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98);
        uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_90);
        (**(code **)(*plVar11 + 0x388))(plVar11,uVar12);
        psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98);
        std::string::string(asStack_68,"box");
        pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
        std::string::~string(asStack_68);
        nop();
        if (pDVar7 != (DTouchLayer *)0x0) {
          plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98)
          ;
          lVar13 = (**(code **)(*plVar11 + 0x1f8))();
          (**(code **)(*(long *)pDVar7 + 0x130))(0,0,pDVar7);
          (**(code **)(*(long *)pDVar7 + 0x160))
                    (*(undefined4 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0xc),pDVar7);
          DString::DString((DString *)asStack_68,iVar1);
          pcVar10 = (char *)DString::c_str((DString *)asStack_68);
          std::string::string(asStack_70,pcVar10);
          DTransformNode::setName((DTransformNode *)pDVar7,asStack_70);
          std::string::~string(asStack_70);
          nop();
          DString::~DString((DString *)asStack_68);
        }
        plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get(aeStack_b0);
        uVar12 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_98);
        (**(code **)(*plVar11 + 0x30))(plVar11,uVar12);
      }
      local_c0 = local_c0 + 1;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_90);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_98);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
    }
    this_00 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get(aeStack_b0);
    DMenu::align(this_00,4,165.0,168.0,15.0,15.0);
  }
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string(asStack_38);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pDVar8 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get(aeStack_b0);
    DScrollView::setContainer((DScrollView *)pDVar7,pDVar8);
    (**(code **)(*(long *)pDVar7 + 0xd8))(pDVar7,1);
  }
  updateSelectBox(this,(vector *)(this + 0x150));
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIMysteryStore::updatePlantsShow(int) */

void __thiscall UIMysteryStore::updatePlantsShow(UIMysteryStore *this,int param_1)

{
  updatePlantList(this,param_1);
  updateItems(this,(vector *)(this + 0x138));
  *(int *)(this + 0x16c) = param_1;
  return;
}


/* UIMysteryStore::Update() */

void __thiscall UIMysteryStore::Update(UIMysteryStore *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTime(this);
  return;
}

