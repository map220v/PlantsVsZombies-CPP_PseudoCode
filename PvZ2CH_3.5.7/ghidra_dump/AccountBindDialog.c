// Class: AccountBindDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::~AccountBindDialog() */

void __thiscall AccountBindDialog::~AccountBindDialog(AccountBindDialog *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_069336e0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069333b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccountBindDialog::~AccountBindDialog() */

void __thiscall AccountBindDialog::~AccountBindDialog(AccountBindDialog *this)

{
  ~AccountBindDialog(this);
  AK::FreeHook(this);
  return;
}


/* AccountBindDialog::wechatUNInstalled() */

void AccountBindDialog::wechatUNInstalled(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* AccountBindDialog::ShowLogoScreen() */

void AccountBindDialog::ShowLogoScreen(void)

{
  LawnApp::RemoveAllCaches();
  LawnApp::KillPVZ2Dialog(gLawnApp);
  GameStateMgr::ShowLogoScreen(gGameStateMgr);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::updateDialogStatus() */

void __thiscall AccountBindDialog::updateDialogStatus(AccountBindDialog *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x118) + 0x158))(*(long **)(this + 0x118),0);
  (**(code **)(**(long **)(this + 0x120) + 0x158))(*(long **)(this + 0x120),0);
  (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),0);
  (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
  (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),0);
  (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),1);
  lVar3 = Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  cVar1 = FUN_04a41b8c(*(undefined1 *)(lVar3 + 0x30));
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x114) == 0) {
      Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
      Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
      bVar2 = std::operator!=(asStack_10,"");
      std::string::~string(asStack_10);
      if (bVar2) {
        plVar4 = *(long **)(this + 0x120);
      }
      else {
        plVar4 = *(long **)(this + 0x118);
      }
      (**(code **)(*plVar4 + 0x158))(plVar4,1);
      Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
      Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
      bVar2 = std::operator!=(asStack_10,"");
      std::string::~string(asStack_10);
      if (bVar2) {
        plVar4 = *(long **)(this + 0x138);
      }
      else {
        plVar4 = *(long **)(this + 0x130);
      }
      (**(code **)(*plVar4 + 0x158))(plVar4,1);
    }
    else if (*(int *)(this + 0x114) == 1) {
      (**(code **)(**(long **)(this + 0x128) + 0x158))(*(long **)(this + 0x128),1);
      (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnUnboundSuccess() */

void __thiscall AccountBindDialog::OnUnboundSuccess(AccountBindDialog *this)

{
  int iVar1;
  LawnApp *pLVar2;
  NetworkMgr *this_00;
  string *psVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillWaitingDialog(gLawnApp);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  psVar3 = (string *)INetworkMsgProcess::GetNetworkCacheQueue();
  pLVar2 = gLawnApp;
  iVar1 = *(int *)(this + 0x110);
  if (iVar1 == 2) {
    std::string::string(asStack_10,"");
    NetworkCacheQueue::setTencentUserID(psVar3);
    std::string::~string(asStack_10);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    std::string::string(asStack_10,"");
    NetworkCacheQueue::setSessionKey(psVar3);
  }
  else if (iVar1 == 3) {
    std::string::string(asStack_10,"");
    NetworkCacheQueue::setWechatUserID(psVar3);
    std::string::~string(asStack_10);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    std::string::string(asStack_10,"");
    AnimationController::SetDescription(psVar3);
  }
  else {
    if (iVar1 != 1) {
      std::string::string(asStack_18,"[PLATFORM_LOGIN_DIALOG_TITLE]");
      std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_UNBOUNDFAILED]");
      LawnApp::ShowMessageDialogNoCallback(pLVar2,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      goto LAB_04a42024;
    }
    std::string::string(asStack_10,"");
    NetworkCacheQueue::setSinaUserID(psVar3);
    std::string::~string(asStack_10);
    nop();
    psVar3 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    std::string::string(asStack_10,"");
    Sexy::IPurchaseAdapter::RequestPay(psVar3,asStack_10);
  }
  std::string::~string(asStack_10);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_18,"[PLATFORM_LOGIN_DIALOG_TITLE]");
  std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_UNBOUNDSUCCESS]");
  LawnApp::ShowMessageDialogNoCallback(pLVar2,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
LAB_04a42024:
  updateDialogStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnBindingFailed(int) */

void __thiscall AccountBindDialog::OnBindingFailed(AccountBindDialog *this,int param_1)

{
  LawnApp *this_00;
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  __n = asStack_10;
  std::string::string(asStack_18,"[ONBINDING_FAILED]");
  nop();
  if (param_1 != 0x4f58) {
    if (0x4f58 < param_1) {
      if (param_1 == 0xafd7) {
        std::string::append(asStack_18,"[ONBINDING_FAILED_45015]",(size_t)__n);
      }
      else if (param_1 == 0xafdc) {
        std::string::append(asStack_18,"[ONBINDING_FAILED_45020]",(size_t)__n);
      }
      goto LAB_04a422b0;
    }
    if (param_1 != 0x4f56) goto LAB_04a422b0;
  }
  std::string::append(asStack_18,"[ONBINDING_FAILED_20310]",(size_t)__n);
LAB_04a422b0:
  this_00 = gLawnApp;
  std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_TITLE]");
  LawnApp::ShowMessageDialogNoCallback(this_00,asStack_10,asStack_18);
  std::string::~string(asStack_10);
  nop();
  updateDialogStatus(this);
  LawnApp::KillWaitingDialog(gLawnApp);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::onSDKLoginCallback(int) */

void __thiscall AccountBindDialog::onSDKLoginCallback(AccountBindDialog *this,int param_1)

{
  int iVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getTencentAccessToken();
      NetworkCacheQueue::getTencentUserID();
LAB_04a424a0:
      INetworkMsgProcess::ICloudRequestBindingThirdPartPlatforms
                (this_00,asStack_18,asStack_10,*(int *)(this + 0x110));
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      goto LAB_04a423ec;
    }
  }
  else if (iVar1 == 3) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      PVPManager::GetCurrentLevelName();
      PVPManager::GetCurrentEditLevelName();
      goto LAB_04a424a0;
    }
  }
  else if (iVar1 == 1) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getSinaAccessToken();
      NetworkCacheQueue::getSinaUserID();
      goto LAB_04a424a0;
    }
  }
  else if ((param_1 == 1) || (2 < iVar1 - 1U)) goto LAB_04a423ec;
  LawnApp::KillWaitingDialog(gLawnApp);
  OnBindingFailed(this,0);
LAB_04a423ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnUnboundFailed(int) */

void __thiscall AccountBindDialog::OnUnboundFailed(AccountBindDialog *this,int param_1)

{
  LawnApp *this_00;
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  __n = asStack_10;
  std::string::string(asStack_18,"[ONUNBOUND_FAILED]");
  nop();
  if (param_1 - 0x4f60U < 2) {
    std::string::append(asStack_18,"[ONUNBOUND_FAILED_20320]",(size_t)__n);
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_TITLE]");
  LawnApp::ShowMessageDialogNoCallback(this_00,asStack_10,asStack_18);
  std::string::~string(asStack_10);
  nop();
  updateDialogStatus(this);
  LawnApp::KillWaitingDialog(gLawnApp);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::onSDKLogoutCallback(int) */

void __thiscall AccountBindDialog::onSDKLogoutCallback(AccountBindDialog *this,int param_1)

{
  int iVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getTencentAccessToken();
      NetworkCacheQueue::getTencentUserID();
LAB_04a4274c:
      INetworkMsgProcess::ICloudRequestUnboundThirdPartPlatforms
                (this_00,asStack_18,asStack_10,*(int *)(this + 0x110));
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      goto LAB_04a42698;
    }
  }
  else if (iVar1 == 3) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      PVPManager::GetCurrentLevelName();
      PVPManager::GetCurrentEditLevelName();
      goto LAB_04a4274c;
    }
  }
  else if (iVar1 == 1) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getSinaAccessToken();
      NetworkCacheQueue::getSinaUserID();
      goto LAB_04a4274c;
    }
  }
  else if ((param_1 == 1) || (2 < iVar1 - 1U)) goto LAB_04a42698;
  LawnApp::KillWaitingDialog(gLawnApp);
  OnUnboundFailed(this,0);
LAB_04a42698:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnTransferFailed(int) */

void __thiscall AccountBindDialog::OnTransferFailed(AccountBindDialog *this,int param_1)

{
  LawnApp *this_00;
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  __n = asStack_10;
  std::string::string(asStack_18,"[ONTRANSFER_FAILED]");
  nop();
  if (param_1 == 0x4f5d) {
    std::string::append(asStack_18,"[ONTRANSFER_FAILED_20317]",(size_t)__n);
  }
  else if (param_1 < 0x4f5e) {
    if (param_1 == 0x4f5b) {
      std::string::append(asStack_18,"[ONTRANSFER_FAILED_20315]",(size_t)__n);
    }
    else if (param_1 == 0x4f5c) {
      std::string::append(asStack_18,"[ONTRANSFER_FAILED_20316]",(size_t)__n);
    }
  }
  else if (param_1 == 0xafd8) {
    std::string::append(asStack_18,"[ONTRANSFER_FAILED_45016]",(size_t)__n);
  }
  else if (param_1 == 0xafdb) {
    std::string::append(asStack_18,"[ONTRANSFER_FAILED_45019]",(size_t)__n);
  }
  else if (param_1 == 0x4f62) {
    std::string::append(asStack_18,"[ONTRANSFER_FAILED_20322]",(size_t)__n);
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"[PLATFORM_TRANSFER_DIALOG_TITLE]");
  LawnApp::ShowMessageDialogNoCallback(this_00,asStack_10,asStack_18);
  std::string::~string(asStack_10);
  nop();
  updateDialogStatus(this);
  LawnApp::KillWaitingDialog(gLawnApp);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::onSDKTransferCallback(int) */

void __thiscall AccountBindDialog::onSDKTransferCallback(AccountBindDialog *this,int param_1)

{
  int iVar1;
  NetworkMgr *pNVar2;
  INetworkMsgProcess *this_00;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x110);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getTencentAccessToken();
      NetworkCacheQueue::getTencentUserID();
LAB_04a42a9c:
      INetworkMsgProcess::ICloudRequestTransferThirdPartPlatforms
                (this_00,asStack_18,asStack_10,*(int *)(this + 0x110));
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      goto LAB_04a429e8;
    }
  }
  else if (iVar1 == 3) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      PVPManager::GetCurrentLevelName();
      PVPManager::GetCurrentEditLevelName();
      goto LAB_04a42a9c;
    }
  }
  else if (iVar1 == 1) {
    if (param_1 == 1) {
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      NetworkMgr::GetNewNetWorkProcess(pNVar2);
      INetworkMsgProcess::GetNetworkCacheQueue();
      pNVar2 = (NetworkMgr *)NetworkMgr::Instance();
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar2);
      NetworkCacheQueue::getSinaAccessToken();
      NetworkCacheQueue::getSinaUserID();
      goto LAB_04a42a9c;
    }
  }
  else if ((param_1 == 1) || (2 < iVar1 - 1U)) goto LAB_04a429e8;
  LawnApp::KillWaitingDialog(gLawnApp);
  OnTransferFailed(this,0);
LAB_04a429e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnBindingSuccess() */

void __thiscall AccountBindDialog::OnBindingSuccess(AccountBindDialog *this)

{
  int iVar1;
  bool bVar2;
  NetworkMgr *this_00;
  LawnApp *pLVar3;
  string *psVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillWaitingDialog(gLawnApp);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::GetNetworkCacheQueue();
  pLVar3 = gLawnApp;
  iVar1 = *(int *)(this + 0x110);
  if (iVar1 == 2) {
    NetworkCacheQueue::getTencentUserID();
    bVar2 = std::operator!=(asStack_10,"");
    std::string::~string(asStack_10);
    if (!bVar2) goto LAB_04a42c48;
    psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    NetworkCacheQueue::getTencentUserID();
    NetworkCacheQueue::setSessionKey(psVar4);
LAB_04a42d68:
    std::string::~string(asStack_10);
    pLVar3 = gLawnApp;
    std::string::string(asStack_18,"[PLATFORM_LOGIN_DIALOG_TITLE]");
    std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_BINDINGSUCCESS]");
  }
  else {
    if (iVar1 == 3) {
      PVPManager::GetCurrentEditLevelName();
      bVar2 = std::operator!=(asStack_10,"");
      std::string::~string(asStack_10);
      if (bVar2) {
        psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
        PVPManager::GetCurrentEditLevelName();
        AnimationController::SetDescription(psVar4);
        goto LAB_04a42d68;
      }
    }
    else {
      if (iVar1 != 1) {
        std::string::string(asStack_18,"[PLATFORM_LOGIN_DIALOG_TITLE]");
        std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_BINDINGFAILED]");
        LawnApp::ShowMessageDialogNoCallback(pLVar3,asStack_18,asStack_10);
        std::string::~string(asStack_10);
        nop();
        std::string::~string(asStack_18);
        nop();
        goto LAB_04a42be8;
      }
      NetworkCacheQueue::getSinaUserID();
      bVar2 = std::operator!=(asStack_10,"");
      std::string::~string(asStack_10);
      if (bVar2) {
        psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
        NetworkCacheQueue::getSinaUserID();
        Sexy::IPurchaseAdapter::RequestPay(psVar4,asStack_10);
        goto LAB_04a42d68;
      }
    }
LAB_04a42c48:
    pLVar3 = gLawnApp;
    std::string::string(asStack_18,"[PLATFORM_LOGIN_DIALOG_TITLE]");
    std::string::string(asStack_10,"[PLATFORM_LOGIN_DIALOG_BINDINGFAILED]");
  }
  LawnApp::ShowMessageDialogNoCallback(pLVar3,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
LAB_04a42be8:
  updateDialogStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::OnTransferSuccess() */

void __thiscall AccountBindDialog::OnTransferSuccess(AccountBindDialog *this)

{
  int iVar1;
  LawnApp *pLVar2;
  bool bVar3;
  NetworkMgr *this_00;
  string *psVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillWaitingDialog(gLawnApp);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::GetNetworkCacheQueue();
  pLVar2 = gLawnApp;
  iVar1 = *(int *)(this + 0x110);
  if (iVar1 == 2) {
    NetworkCacheQueue::getTencentUserID();
    bVar3 = std::operator!=(asStack_50,"");
    std::string::~string(asStack_50);
    if (!bVar3) {
LAB_04a42fc0:
      pLVar2 = gLawnApp;
      std::string::string(asStack_58,"[PLATFORM_TRANSFER_DIALOG_TITLE]");
      std::string::string(asStack_50,"[PLATFORM_LOGIN_DIALOG_TRANSFERFAILED]");
      LawnApp::ShowMessageDialogNoCallback(pLVar2,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      goto LAB_04a42efc;
    }
    psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    NetworkCacheQueue::getTencentUserID();
    NetworkCacheQueue::setSessionKey(psVar4);
  }
  else if (iVar1 == 3) {
    PVPManager::GetCurrentEditLevelName();
    bVar3 = std::operator!=(asStack_50,"");
    std::string::~string(asStack_50);
    if (!bVar3) goto LAB_04a42fc0;
    psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    PVPManager::GetCurrentEditLevelName();
    AnimationController::SetDescription(psVar4);
  }
  else {
    if (iVar1 != 1) {
      std::string::string(asStack_58,"[PLATFORM_TRANSFER_DIALOG_TITLE]");
      std::string::string(asStack_50,"[PLATFORM_LOGIN_DIALOG_TRANSFERFAILED]");
      LawnApp::ShowMessageDialogNoCallback(pLVar2,asStack_58,asStack_50);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      goto LAB_04a42efc;
    }
    NetworkCacheQueue::getSinaUserID();
    bVar3 = std::operator!=(asStack_50,"");
    std::string::~string(asStack_50);
    if (!bVar3) goto LAB_04a42fc0;
    psVar4 = (string *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    NetworkCacheQueue::getSinaUserID();
    Sexy::IPurchaseAdapter::RequestPay(psVar4,asStack_50);
  }
  std::string::~string(asStack_50);
  pLVar2 = gLawnApp;
  std::string::string(asStack_60,"[PLATFORM_TRANSFER_DIALOG_TITLE]");
  std::string::string(asStack_58,"[PLATFORM_LOGIN_DIALOG_TRANSFERSUCCESS]");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShowLogoScreen);
  Sexy::Delegate0::Delegate0<AccountBindDialog,void(AccountBindDialog::*)()>(aDStack_38,asStack_50);
  LawnApp::ShowMessageDialog(pLVar2,asStack_60,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
LAB_04a42efc:
  updateDialogStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::sinaLogin() */

void __thiscall AccountBindDialog::sinaLogin(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLoginCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::wechatLogin() */

void __thiscall AccountBindDialog::wechatLogin(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 3;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLoginCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::tencentLogin() */

void __thiscall AccountBindDialog::tencentLogin(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 2;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLoginCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::sinaLogout() */

void __thiscall AccountBindDialog::sinaLogout(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLogoutCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::wechatLogout() */

void __thiscall AccountBindDialog::wechatLogout(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 3;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLogoutCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::tencentLogout() */

void __thiscall AccountBindDialog::tencentLogout(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 2;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKLogoutCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::sinaTransfer() */

void __thiscall AccountBindDialog::sinaTransfer(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKTransferCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::wechatTransfer() */

void __thiscall AccountBindDialog::wechatTransfer(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 3;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKTransferCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::tencentTransfer() */

void __thiscall AccountBindDialog::tencentTransfer(AccountBindDialog *this)

{
  LawnApp *this_00;
  wstring awStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x110) = 2;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSDKTransferCallback);
  Sexy::Delegate1<int>::Delegate1<AccountBindDialog,void(AccountBindDialog::*)(int)>
            (aDStack_38,awStack_50);
  nop();
  this_00 = gLawnApp;
  TodStringTranslate(L"[CONNECTING]");
  LawnApp::ShowWaitingDialog(this_00,awStack_50,0x28,300,400);
  FUN_05476c50(awStack_50);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::createIconButton(int, int, AccountBindButtons, bool, int, std::string const&)
    */

void __thiscall
AccountBindDialog::createIconButton
          (AccountBindDialog *this,undefined4 param_1,undefined4 param_2,int param_4,
          undefined8 param_5,int param_6,Sexy *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  PVZ2UIButton *this_00;
  SalesProgressBar *this_01;
  undefined8 uVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  long lVar11;
  LotteryResultProgressBar *this_02;
  code *pcVar12;
  wstring awStack_80 [8];
  Insets aIStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04a41c68(0xa0);
  if (param_6 == 2) {
    this_02 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b2f8);
  }
  else if (param_6 == 3) {
    this_02 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b3c8);
  }
  else {
    this_02 = (LotteryResultProgressBar *)0x0;
    if (param_6 == 1) {
      this_02 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b1f0);
    }
  }
  FUN_05478178(aIStack_78,&DAT_056f11a8,awStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_4,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,
             (Color *)aIStack_40);
  FUN_05476c50(aIStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06b7b338,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b7b1c8,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar12 = *(code **)(*(long *)this_00 + 0x198);
  uVar2 = FUN_04a41c68(param_1);
  uVar3 = FUN_04a41c68(param_2);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b338);
  uVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  (*pcVar12)(this_00,uVar2,uVar3,iVar1,uVar4);
  iVar5 = FUN_04a41c68(4);
  if (this_02 == (LotteryResultProgressBar *)0x0) {
    Sexy::StringToWString(param_7,extraout_x1);
    TodStringTranslate((wstring *)aIStack_78);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    PVZ2UIButton::AddText(this_00,aIStack_40,uVar10,0);
    FUN_05476c50(aIStack_40);
    FUN_05476c50(aIStack_78);
  }
  else {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,this_02,1);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    Sexy::Insets::Insets(aIStack_78,iVar5,iVar5,iVar6,iVar7);
    PVZ2UIButton::AddImage(this_00,(PVZ2UIImage *)aIStack_40,(TRect *)aIStack_78);
    Sexy::StringToWString(param_7,extraout_x1_00);
    TodStringTranslate(awStack_80);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar7 = FUN_04a41c68(5);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_02);
    iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_02);
    Sexy::Insets::Insets(aIStack_40,iVar6 + iVar5,iVar5 + iVar7,iVar1 - iVar8,iVar9);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    PVZ2UIButton::AddText(this_00,aIStack_78,aIStack_40,uVar10,0);
    FUN_05476c50(aIStack_78);
    FUN_05476c50(awStack_80);
  }
  lVar11 = *(long *)this;
  this_00[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar11 + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* AccountBindDialog::ButtonPress(int) */

void AccountBindDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to AccountBindDialog::ButtonPress(int) */

void __thiscall AccountBindDialog::ButtonPress(AccountBindDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::ButtonDepress(int) */

void AccountBindDialog::ButtonDepress(int param_1)

{
  char cVar1;
  AccountBindDialog *this;
  char *pcVar2;
  wchar16 *pwVar3;
  LoginSDKMgr *pLVar4;
  undefined4 in_w1;
  code *pcVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LawnApp *pLVar7;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = (AccountBindDialog *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  pLVar6 = (LineBreakCategory *)0x0;
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  pLVar7 = gLawnApp;
  switch(in_w1) {
  case 0:
    this[0x6c] = (AccountBindDialog)0x0;
    goto switchD_04a43d7c_default;
  case 1:
    std::string::string(asStack_60,"[PLATFORM_BINDING_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_BINDING_DESC]");
    pcVar5 = sinaLogin;
    break;
  case 2:
    pwVar3 = (wchar16 *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)0x3,pLVar6,in_x3,in_x4);
    pLVar7 = gLawnApp;
    if (cVar1 == '\0') {
      std::string::string(asStack_60,"[PLATFORM_BINDING_TITLE]");
      std::string::string(asStack_58,"[PLATFORM_WECHATUNINSTALLED_DESC]");
      pcVar5 = wechatUNInstalled;
    }
    else {
      std::string::string(asStack_60,"[PLATFORM_BINDING_TITLE]");
      std::string::string(asStack_58,"[PLATFORM_BINDING_DESC]");
      pcVar5 = wechatLogin;
    }
    break;
  case 3:
    std::string::string(asStack_60,"[PLATFORM_BINDING_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_BINDING_DESC]");
    pcVar5 = tencentLogin;
    break;
  case 4:
    std::string::string(asStack_60,"[PLATFORM_UNBOUND_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_UNBOUND_DESC]");
    pcVar5 = sinaLogout;
    break;
  case 5:
    std::string::string(asStack_60,"[PLATFORM_UNBOUND_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_UNBOUND_DESC]");
    pcVar5 = wechatLogout;
    break;
  case 6:
    std::string::string(asStack_60,"[PLATFORM_UNBOUND_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_UNBOUND_DESC]");
    pcVar5 = tencentLogout;
    break;
  case 7:
    pLVar4 = (LoginSDKMgr *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    cVar1 = LoginSDKMgr::isAlreadyBoundSinaSDK(pLVar4);
    if (cVar1 == '\0') {
      pLVar4 = (LoginSDKMgr *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
      cVar1 = LoginSDKMgr::isAlreadyBoundWechatSDK(pLVar4);
      pLVar7 = gLawnApp;
      if (cVar1 == '\0') {
        std::string::string(asStack_60,"[PLATFORM_TRANSFER_TITLE]");
        std::string::string(asStack_58,"[PLATFORM_TRANSFER_DESC1]");
        pcVar5 = sinaTransfer;
        break;
      }
    }
    goto LAB_04a440a0;
  case 8:
    pLVar4 = (LoginSDKMgr *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    cVar1 = LoginSDKMgr::isAlreadyBoundSinaSDK(pLVar4);
    if (cVar1 == '\0') {
      pLVar4 = (LoginSDKMgr *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
      cVar1 = LoginSDKMgr::isAlreadyBoundWechatSDK(pLVar4);
      pLVar7 = gLawnApp;
      if (cVar1 == '\0') {
        std::string::string(asStack_60,"[PLATFORM_TRANSFER_TITLE]");
        std::string::string(asStack_58,"[PLATFORM_TRANSFER_DESC1]");
        pcVar5 = wechatTransfer;
        break;
      }
    }
LAB_04a440a0:
    pLVar7 = gLawnApp;
    std::string::string(asStack_58,"[PLATFORM_TRANSFER_TITLE]");
    std::string::string(asStack_50,"[PLATFORM_TRANSFER_DESC2]");
    LawnApp::ShowMessageDialogNoCallback(pLVar7,asStack_58,asStack_50);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    goto switchD_04a43d7c_default;
  case 9:
    pLVar4 = (LoginSDKMgr *)Sexy::LazySingleton<LoginSDKMgr>::GetInstancePtr();
    cVar1 = LoginSDKMgr::isAlreadyBoundTencentSDK(pLVar4);
    pLVar7 = gLawnApp;
    if (cVar1 != '\0') goto LAB_04a440a0;
    std::string::string(asStack_60,"[PLATFORM_TRANSFER_TITLE]");
    std::string::string(asStack_58,"[PLATFORM_TRANSFER_DESC1]");
    pcVar5 = tencentTransfer;
    break;
  case 10:
    *(undefined4 *)(this + 0x114) = 0;
    updateDialogStatus(this);
    goto switchD_04a43d7c_default;
  case 0xb:
    *(undefined4 *)(this + 0x114) = 1;
    updateDialogStatus(this);
    goto switchD_04a43d7c_default;
  case 0xc:
    LawnApp::LaunchPrivacyWebpage(gLawnApp);
  default:
    goto switchD_04a43d7c_default;
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,pcVar5);
  Sexy::Delegate0::Delegate0<AccountBindDialog,void(AccountBindDialog::*)()>(aDStack_38,asStack_50);
  LawnApp::ShowMessageDialogWithOKButton(pLVar7,asStack_60,asStack_58,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
switchD_04a43d7c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to AccountBindDialog::ButtonDepress(int) */

void __thiscall AccountBindDialog::ButtonDepress(AccountBindDialog *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::InitializeControls() */

void __thiscall AccountBindDialog::InitializeControls(AccountBindDialog *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIButton *pPVar9;
  LotteryResultProgressBar *pLVar10;
  SalesProgressBar *pSVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  undefined1 auStack_98 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178(awStack_78,&DAT_056f11a8,avStack_90);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0,pBVar1,awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b268,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b7b218,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  iVar2 = *(int *)(this + 0x50);
  pcVar14 = *(code **)(*(long *)pPVar9 + 0x198);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b268);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar4 = FUN_04a41c68(0x32);
  uVar5 = FUN_04a41c68(3);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b268);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b268);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar14)(pPVar9,(iVar2 - iVar3) - iVar4,uVar5,uVar6,uVar7);
  lVar13 = *(long *)this;
  pPVar9[0x59] = (PVZ2UIButton)0x0;
  (**(code **)(lVar13 + 0x60))(this,pPVar9);
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_BINDING_WEIBO]");
  uVar12 = createIconButton(this,0x32,0xff,1,0,1,asStack_40);
  *(undefined8 *)(this + 0x118) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_UNBOUND]");
  uVar12 = createIconButton(this,0x32,0xff,4,1,1,asStack_40);
  *(undefined8 *)(this + 0x120) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_TRANSFER]");
  uVar12 = createIconButton(this,0x32,0xff,7,0,1,asStack_40);
  *(undefined8 *)(this + 0x128) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_BINDING_WECHAT]");
  uVar12 = createIconButton(this,0xdc,0xff,2,0,3,asStack_40);
  *(undefined8 *)(this + 0x130) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_UNBOUND]");
  uVar12 = createIconButton(this,0xdc,0xff,5,1,3,asStack_40);
  *(undefined8 *)(this + 0x138) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[PLATFORM_ACCOUNT_TRANSFER]");
  uVar12 = createIconButton(this,0xdc,0xff,8,0,3,asStack_40);
  *(undefined8 *)(this + 0x140) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[SETTINGS_PRIVACY_TITLE]");
  uVar12 = createIconButton(this,0x186,0xff,0xc,0,0,asStack_40);
  *(undefined8 *)(this + 0x160) = uVar12;
  std::string::~string(asStack_40);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  FUN_05478178(awStack_78,L"[PLATFORM_ACCOUNT_BIND_TITLE]",auStack_98);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,10,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x168) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x168);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b3f0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b7b440,3);
  PVZ2UIButton::SetRadioStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40,true);
  plVar15 = *(long **)(this + 0x168);
  pcVar14 = *(code **)(*plVar15 + 0x198);
  uVar5 = FUN_04a41c68(0x50);
  uVar6 = FUN_04a41c68(0);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b3f0);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b3f0);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar14)(plVar15,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)(this + 0x168));
  FUN_05478178(awStack_78,L"[PLATFORM_ACCOUNT_TRANSFER_TITLE]",auStack_98);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0xb,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x170) = pPVar9;
  FUN_05476c50(awStack_78);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0x170);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b418,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b7b240,3);
  PVZ2UIButton::SetRadioStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40,false);
  plVar15 = *(long **)(this + 0x170);
  pcVar14 = *(code **)(*plVar15 + 0x198);
  uVar5 = FUN_04a41c68(0xe6);
  uVar6 = FUN_04a41c68(0);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b418);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b418);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar11);
  (*pcVar14)(plVar15,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)(this + 0x170));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)asStack_40,(vector *)avStack_90)
  ;
  PVZ2UI::LinkRadioButtons(asStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)asStack_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  updateDialogStatus(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
AccountBindDialog::DrawAll(AccountBindDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  Insets *pIVar1;
  undefined8 uVar2;
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = (Insets *)(this + 0xe0);
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xf0));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b2d0);
  DrawImageTiled(0x3f800000,param_2,aIStack_18,uVar2);
  Sexy::Insets::Insets(aIStack_18,pIVar1);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b2a8);
  Draw9SliceImage(param_2,aIStack_18,uVar2);
  if (*(int *)(this + 0x114) == 0) {
    TodStringTranslate(L"[PLATFORM_BIND_DESC]");
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_2,auStack_20,pIVar1,uVar2,aIStack_18,5,1);
    FUN_05476c50(auStack_20);
  }
  else if (*(int *)(this + 0x114) == 1) {
    TodStringTranslate(L"[PLATFORM_TRANSFER_DESC]");
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded)
    ;
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_2,auStack_20,pIVar1,uVar2,aIStack_18,5,1);
    FUN_05476c50(auStack_20);
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::Resize(int, int, int, int) */

void __thiscall
AccountBindDialog::Resize(AccountBindDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar2 = FUN_04a41c68(0x32);
  iVar3 = FUN_04a41c7c(param_4);
  iVar3 = FUN_04a41c68(iVar3 + -0x50);
  Sexy::Insets::Insets((Insets *)&local_18,0,iVar2,param_3,iVar3);
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  iVar2 = FUN_04a41c68(0xc);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar2 + *(int *)(this + 0xe0),iVar2 + *(int *)(this + 0xe4),
             iVar2 * -2 + *(int *)(this + 0xe8),iVar2 * -2 + *(int *)(this + 0xec));
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountBindDialog::AccountBindDialog() */

void __thiscall AccountBindDialog::AccountBindDialog(AccountBindDialog *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069333b0;
  *(undefined **)(this + 0xd8) = &DAT_069336e0;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_04a41c68(0);
  iVar2 = FUN_04a41c68(600);
  iVar3 = FUN_04a41c68(0x140);
  Resize(this,iVar1,iVar1,iVar2,iVar3);
  InitializeControls(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

