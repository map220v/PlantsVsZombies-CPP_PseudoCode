// Class: PurchaseMgr


/* PurchaseMgr::onNetworkError(int) */

int PurchaseMgr::onNetworkError(int param_1)

{
  return param_1;
}


/* PurchaseMgr::InitPurchaseOrder(std::string const&) */

void __thiscall PurchaseMgr::InitPurchaseOrder(PurchaseMgr *this,string *param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  thunk_FUN_05475e00(this + 0x18);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (*(code **)(*plVar1 + 0x3d8) != INetworkMsgProcess::InitPurchaseOrder) {
    (**(code **)(*plVar1 + 0x3d8))(plVar1,param_1);
  }
  return;
}


/* PurchaseMgr::ValidatePurchaseOrder(std::string const&, bool) */

void __thiscall PurchaseMgr::ValidatePurchaseOrder(PurchaseMgr *this,string *param_1,bool param_2)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  thunk_FUN_05475e00(this + 0x18,param_1,param_2);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (*(code **)(*plVar1 + 1000) != INetworkMsgProcess::RequestUpdateChargeInfo) {
    (**(code **)(*plVar1 + 1000))(plVar1,param_1,param_2,0);
  }
  return;
}


/* PurchaseMgr::DoValidateAgain() */

void __thiscall PurchaseMgr::DoValidateAgain(PurchaseMgr *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  *(undefined4 *)(this + 0x20) = 2;
  ValidatePurchaseOrder(this,(string *)(this + 0x18),false);
  return;
}


/* PurchaseMgr::RequestLostPurchaseOrder() */

void PurchaseMgr::RequestLostPurchaseOrder(void)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  if (*(code **)(*plVar1 + 0x3f0) != INetworkMsgProcess::RequestLostPurchaseOrder) {
    (**(code **)(*plVar1 + 0x3f0))();
  }
  return;
}


/* PurchaseMgr::ResetPurchaseInfo() */

void __thiscall PurchaseMgr::ResetPurchaseInfo(PurchaseMgr *this)

{
  size_t in_x2;
  
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* PurchaseMgr::SetOrderId(std::string const&) */

void __thiscall PurchaseMgr::SetOrderId(PurchaseMgr *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==((string *)(this + 8),"");
  if (!bVar1) {
    return;
  }
  thunk_FUN_05475e00((string *)(this + 8),param_1);
  return;
}


/* PurchaseMgr::SetChannelId(std::string const&) */

void __thiscall PurchaseMgr::SetChannelId(PurchaseMgr *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==((string *)(this + 0x10),"");
  if (!bVar1) {
    return;
  }
  thunk_FUN_05475e00((string *)(this + 0x10),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseMgr::TryValidateAgain() */

void __thiscall PurchaseMgr::TryValidateAgain(PurchaseMgr *this)

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
  FUN_05478178(awStack_58,L"[VALIDATE_FIRST_FAILED_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[VALIDATE_FIRST_FAILED_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DoValidateAgain);
  Sexy::Delegate0::Delegate0<PurchaseMgr,void(PurchaseMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseMgr::PurchaseMgr() */

void __thiscall PurchaseMgr::PurchaseMgr(PurchaseMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PurchaseMgr>::LazySingleton((LazySingleton<PurchaseMgr> *)this);
  *(undefined ***)this = &PTR__PurchaseMgr_06833af0;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  this[0x40] = (PurchaseMgr)0x0;
  this[0x41] = (PurchaseMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = local_50;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<PurchaseMgr,void(PurchaseMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPurchaseInit);
  local_90 = local_38;
  local_a0 = local_48;
  uStack_98 = uStack_40;
  MessageRouter::
  Subscribe<int,std::string_const&,std::string_const&,Sexy::CBMemberTranslatorX<PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyPurchaseInit,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyPurchaseValidation);
  local_c0 = local_30;
  uStack_b8 = uStack_28;
  local_b0 = local_20;
  MessageRouter::
  Subscribe<int,std::string_const&,int,Sexy::CBMemberTranslatorX<PurchaseMgr,void(PurchaseMgr::*)(int,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::NotifyPurchaseValidation,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLostPurchaseOrder);
  local_d0 = local_8;
  local_e0 = local_18;
  uStack_d8 = uStack_10;
  MessageRouter::
  Subscribe<int,S2C_Purchase_LostPurchaseOrder_const&,Sexy::CBMemberTranslatorX<PurchaseMgr,void(PurchaseMgr::*)(int,S2C_Purchase_LostPurchaseOrder_const&)>>
            ((MessageRouter *)puVar1,Message::NotifyLostPurchaseOrder,&local_e0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseMgr::onNotifyPurchaseInit(int, std::string const&, std::string const&) */

void __thiscall
PurchaseMgr::onNotifyPurchaseInit(PurchaseMgr *this,int param_1,string *param_2,string *param_3)

{
  undefined *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  string *psVar2;
  NetworkMgr *this_01;
  string asStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar2 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(this_00);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    NetworkMgr::GetNewNetWorkProcess(this_01);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    PurchaseBroker::DoValidationPayment(psVar2,param_2);
    std::string::~string(asStack_10);
  }
  else {
    FUN_05475d88(asStack_10,param_3);
    MessageRouter::Post<bool,std::string_const&,int,bool,std::string,int>
              ((MessageRouter *)puVar1,Message::NotifyPurchaseResult,0,asStack_10,param_1);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseMgr::onNotifyPurchaseValidation(int, std::string const&, int) */

void __thiscall
PurchaseMgr::onNotifyPurchaseValidation(PurchaseMgr *this,int param_1,string *param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  puVar1 = gMessageRouter;
  if (param_1 == 0) {
    if (param_3 == 3) {
      FUN_05475d88(asStack_10,param_2);
      uVar2 = 1;
    }
    else {
      if ((param_3 == 2) && (*(int *)(this + 0x20) != 2)) {
        if (*(int *)(this + 0x20) == 1) {
          TryValidateAgain(this);
        }
        goto LAB_04344558;
      }
      FUN_05475d88(asStack_10,param_2);
      uVar2 = 0;
    }
  }
  else {
    FUN_05475d88(asStack_10,param_2);
    uVar2 = 0;
  }
  MessageRouter::Post<bool,std::string_const&,int,bool,std::string,int>
            ((MessageRouter *)puVar1,Message::NotifyPurchaseResult,uVar2,asStack_10,param_1);
  std::string::~string(asStack_10);
LAB_04344558:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseMgr::~PurchaseMgr() */

void __thiscall PurchaseMgr::~PurchaseMgr(PurchaseMgr *this)

{
  *(undefined ***)this = &PTR__PurchaseMgr_06833af0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>>::~vector
            ((vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<PurchaseMgr>::~LazySingleton((LazySingleton<PurchaseMgr> *)this);
  return;
}


/* PurchaseMgr::~PurchaseMgr() */

void __thiscall PurchaseMgr::~PurchaseMgr(PurchaseMgr *this)

{
  ~PurchaseMgr(this);
  AK::FreeHook(this);
  return;
}


/* PurchaseMgr::FinishRetreiveLostOrders() */

void __thiscall PurchaseMgr::FinishRetreiveLostOrders(PurchaseMgr *this)

{
  this[0x40] = (PurchaseMgr)0x0;
  std::vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>>::clear
            ((vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>> *)(this + 0x28));
  ResetPurchaseInfo(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseMgr::TryRetreiveLostOrders() */

void __thiscall PurchaseMgr::TryRetreiveLostOrders(PurchaseMgr *this)

{
  vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>> *this_00;
  Magento *this_01;
  LawnApp *this_02;
  char cVar1;
  int iVar2;
  int iVar3;
  PurchaseOrderInfo *pPVar4;
  PVZ2UIDialog *this_03;
  undefined8 uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  RtMixedPtrBase aRStack_70 [8];
  wstring awStack_68 [8];
  Sexy aSStack_60 [8];
  wstring awStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  PurchaseOrderInfo aPStack_38 [24];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this_00 = (vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>>::empty(this_00);
  if (cVar1 == '\0') {
    this_01 = (Magento *)(this + 0x18);
    pPVar4 = (PurchaseOrderInfo *)FUN_04343588(*(undefined8 *)(this + 0x28));
    PurchaseOrderInfo::PurchaseOrderInfo(aPStack_38,pPVar4);
    thunk_FUN_05475e00(this + 8,auStack_20);
    thunk_FUN_05475e00(this + 0x10,auStack_10);
    thunk_FUN_05475e00(this_01,auStack_18);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_40,(__normal_iterator *)&local_48);
    std::vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>>::erase(this_00,local_40);
    this[0x40] = (PurchaseMgr)0x1;
    Magento::GetProductPtr(this_01,extraout_x1);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
    this_02 = gLawnApp;
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      PurchaseOrderInfo::~PurchaseOrderInfo(aPStack_38);
    }
    else {
      iVar2 = FUN_043437dc(400);
      iVar3 = FUN_043437dc(300);
      this_03 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_02,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
      FUN_05478178((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,L"[PURCHASE_RESTORE_DIALOG_HEADER]",(wstring *)&local_48);
      PVZ2UIDialog::SetHeaderLabel(this_03,(wstring *)&local_40);
      FUN_05476c50((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40);
      nop();
      FUN_05478178((wstring *)&local_48,L"[PURCHASE_RESTORE_DIALOG_DESC]",auStack_80);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::UTF8StringToWString(aSStack_60,extraout_x1_00);
      TodStringTranslate(awStack_58);
      uVar5 = FUN_054766ec(auStack_50);
      FUN_05478178((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,uVar5,auStack_78);
      TodReplaceString((wstring *)&local_48,L"{PRODUCT_NAME}",(wstring *)&local_40);
      FUN_05476c50((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40);
      nop();
      FUN_05476c50(auStack_50);
      FUN_05476c50(awStack_58);
      std::string::~string((string *)aSStack_60);
      FUN_05476c50((wstring *)&local_48);
      nop();
      PVZ2UIDialog::SetFooterLabel(this_03,awStack_68);
      PVZ2UIDialog::SetBackgroundDarken(this_03,true,0.5);
      ValidatePurchaseOrder(this,(string *)this_01,true);
      FUN_05476c50(awStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      PurchaseOrderInfo::~PurchaseOrderInfo(aPStack_38);
    }
  }
  else {
    FinishRetreiveLostOrders(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseMgr::onNotifyLostPurchaseOrder(int, S2C_Purchase_LostPurchaseOrder const&) */

void __thiscall
PurchaseMgr::onNotifyLostPurchaseOrder
          (PurchaseMgr *this,int param_1,S2C_Purchase_LostPurchaseOrder *param_2)

{
  if (param_1 != 0) {
    MessageRouter::Post<bool,std::string_const&,int,bool,char_const*,int>
              ((MessageRouter *)gMessageRouter,Message::NotifyPurchaseResult,false,"",param_1);
    return;
  }
  std::vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>>::operator=
            ((vector<PurchaseOrderInfo,std::allocator<PurchaseOrderInfo>> *)(this + 0x28),
             (vector *)(param_2 + 0x18));
  TryRetreiveLostOrders(this);
  return;
}

