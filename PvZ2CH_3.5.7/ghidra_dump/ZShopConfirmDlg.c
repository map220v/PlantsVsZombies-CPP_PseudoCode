// Class: ZShopConfirmDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopConfirmDlg::GetLayoutName() */

void __thiscall ZShopConfirmDlg::GetLayoutName(ZShopConfirmDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ZMatchShopDlgRefreshConfirm");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopConfirmDlg::OnCreate() */

void __thiscall ZShopConfirmDlg::OnCreate(ZShopConfirmDlg *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1a8))
              (plVar1,(*(int *)(gLawnApp + 0xd4) - (int)plVar1[10]) / 2,
               (*(int *)(gLawnApp + 0xd8) - *(int *)((long)plVar1 + 0x54)) / 2);
  }
  std::string::string(asStack_10,"UIButton_AD");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  (**(code **)(*plVar1 + 0x158))(plVar1,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZShopConfirmDlg::~ZShopConfirmDlg() */

void __thiscall ZShopConfirmDlg::~ZShopConfirmDlg(ZShopConfirmDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_066c30a0;
  *(undefined **)(this + 0xd8) = &DAT_066c33f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x150);
  UISingletonDialog<ZShopConfirmDlg>::~UISingletonDialog((UISingletonDialog<ZShopConfirmDlg> *)this)
  ;
  return;
}


/* ZShopConfirmDlg::~ZShopConfirmDlg() */

void __thiscall ZShopConfirmDlg::~ZShopConfirmDlg(ZShopConfirmDlg *this)

{
  ~ZShopConfirmDlg(this);
  AK::FreeHook(this);
  return;
}


/* ZShopConfirmDlg::onADFinished(int) */

void __thiscall ZShopConfirmDlg::onADFinished(ZShopConfirmDlg *this,int param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if (param_1 != 0xf) {
    return;
  }
  UISingletonDialog<ZShopConfirmDlg>::CloseDialog();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  (**(code **)(*plVar1 + 400))(plVar1,1,0,1);
  return;
}


/* ZShopConfirmDlg::ZShopConfirmDlg() */

void __thiscall ZShopConfirmDlg::ZShopConfirmDlg(ZShopConfirmDlg *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<ZShopConfirmDlg>::UISingletonDialog((UISingletonDialog<ZShopConfirmDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_066c30a0;
  *(undefined **)(this + 0xd8) = &DAT_066c33f0;
  ZMatchShopData::ZMatchShopData((ZMatchShopData *)(this + 0x138));
  FUN_05476574(this + 0x150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ZShopConfirmDlg,void(ZShopConfirmDlg::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopConfirmDlg::SetConfirm(int) */

void __thiscall ZShopConfirmDlg::SetConfirm(ZShopConfirmDlg *this,int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  Widget *pWVar5;
  Widget *pWVar6;
  Widget *pWVar7;
  PVZ2UIButton *pPVar8;
  PVZ2UIButton *pPVar9;
  PVZ2UIButton *pPVar10;
  PVZ2UIButton *pPVar11;
  long *plVar12;
  ZMatchShopMgr *pZVar13;
  ADManager *pAVar14;
  UIWidgetText *pUVar15;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_1;
  std::string::string(asStack_10,"Widget_Confirm");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_NotEnough");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_Lock");
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pWVar5 + 0x158))(pWVar5,(*(uint *)(this + 0x134) & 0xfffffffd) == 0);
  (**(code **)(*(long *)pWVar6 + 0x158))(pWVar6,*(int *)(this + 0x134) == 1);
  (**(code **)(*(long *)pWVar7 + 0x158))(pWVar7,*(int *)(this + 0x134) == 3);
  std::string::string(asStack_10,"UIButton_OK");
  pPVar8 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Cancel");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_AD");
  pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Close");
  pPVar11 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar4 = *(int *)(this + 0x134);
  if (iVar4 == 0) {
    pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    uVar3 = ADManager::CanWatchAD(pAVar14,0xf);
    std::string::string(asStack_10,"UIButton_AD");
    plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    (**(code **)(*plVar12 + 0x158))(plVar12,uVar3);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIText_Confirm");
    pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((uVar3 & 0xff) == 0) {
      TodStringTranslate(L"[PVP_EXCHANGE_CONFIRM_END]");
      pZVar13 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      iVar4 = ZMatchShopMgr::getRefrashZMShopCost(pZVar13);
      TodReplaceNumberString(awStack_18,L"{NUMBER}",iVar4);
      FUN_054766c8(awStack_18,asStack_10);
      FUN_05476c50(asStack_10);
    }
    else {
      TodStringTranslate(L"[JOUST_STORE_REFRESH_AD]");
      pZVar13 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      iVar4 = ZMatchShopMgr::getRefrashZMShopCost(pZVar13);
      TodReplaceNumberString(awStack_18,L"{NUMBER}",iVar4);
      FUN_054766c8(awStack_18,asStack_10);
      FUN_05476c50(asStack_10);
      pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      iVar4 = ADManager::GetLeftADWatchCount(pAVar14,0xf);
      TodReplaceNumberString(awStack_18,L"{LEFT}",iVar4);
      FUN_054766c8(awStack_18,asStack_10);
      FUN_05476c50(asStack_10);
      iVar4 = FUN_0390e020(0xf);
      *(int *)(pUVar15 + 0x4c) = *(int *)(pUVar15 + 0x4c) + iVar4;
    }
    PuzzleTip::SetTip(pUVar15,awStack_18);
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,1);
    (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,uVar3 & 0xff ^ 1);
    (**(code **)(*(long *)pPVar10 + 0x158))(pPVar10,uVar3);
    (**(code **)(*(long *)pPVar11 + 0x158))(pPVar11,uVar3);
    FUN_05476c50(awStack_18);
  }
  else if (iVar4 == 1) {
    pAVar14 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    bVar2 = ADManager::CanWatchAD(pAVar14,0xf);
    (**(code **)(*(long *)pPVar10 + 0x158))(pPVar10,bVar2);
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,bVar2 ^ 1);
    (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,0);
    (**(code **)(*(long *)pPVar8 + 0x198))
              (pPVar8,(*(int *)(pPVar8 + 0x48) + *(int *)(pPVar9 + 0x48)) / 2,
               *(undefined4 *)(pPVar8 + 0x4c),*(undefined4 *)(pPVar8 + 0x50),
               *(undefined4 *)(pPVar8 + 0x54));
    if (bVar2 != 0) {
      uVar1 = *(undefined4 *)(pPVar8 + 0x48);
      *(undefined4 *)(pPVar10 + 0x4c) = *(undefined4 *)(pPVar8 + 0x4c);
      *(undefined4 *)(pPVar10 + 0x48) = uVar1;
    }
  }
  else if (iVar4 == 2) {
    std::string::string(asStack_10,"UIText_Confirm");
    pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[PVP_EXCHANGE_CONFIRM_BUY_END]");
    TodReplaceString(awStack_18,L"{NAME}",(wstring *)(this + 0x150));
    FUN_054766c8(awStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    TodReplaceNumberString(awStack_18,L"{NUMBER}",*(int *)(this + 0x140));
    FUN_054766c8(awStack_18,asStack_10);
    FUN_05476c50(asStack_10);
    PuzzleTip::SetTip(pUVar15,awStack_18);
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,1);
    (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,1);
    FUN_05476c50(awStack_18);
  }
  else if (iVar4 == 3) {
    (**(code **)(*(long *)pPVar8 + 0x158))(pPVar8,1);
    (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,0);
    (**(code **)(*(long *)pPVar8 + 0x198))
              (pPVar8,(*(int *)(pPVar8 + 0x48) + *(int *)(pPVar9 + 0x48)) / 2,
               *(undefined4 *)(pPVar8 + 0x4c),*(undefined4 *)(pPVar8 + 0x50),
               *(undefined4 *)(pPVar8 + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZShopConfirmDlg::SetConfirmBuy(ZMatchShopData const&, std::wstring const&) */

void __thiscall
ZShopConfirmDlg::SetConfirmBuy(ZShopConfirmDlg *this,ZMatchShopData *param_1,wstring *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x138) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x140) = uVar1;
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x10);
  thunk_FUN_05477b9c(this + 0x150,param_2);
  SetConfirm(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZShopConfirmDlg::ButtonDepress(int) */

void __thiscall ZShopConfirmDlg::ButtonDepress(ZShopConfirmDlg *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ADManager *pAVar3;
  ZMatchShopMgr *pZVar4;
  NetworkMgr *pNVar5;
  long *plVar6;
  char *pcVar7;
  TGALogMgr *pTVar8;
  size_t sVar9;
  DString aDStack_148 [16];
  TGALogJoustData aTStack_138 [32];
  string asStack_118 [24];
  string asStack_100 [8];
  string asStack_f8 [88];
  TGALogJoustData aTStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    if (*(int *)(this + 0x134) == 0) {
      pZVar4 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      uVar1 = ZMatchShopMgr::getRefrashZMShopCost(pZVar4);
      sVar9 = (size_t)uVar1;
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      (**(code **)(*plVar6 + 400))(plVar6,1,sVar9,0);
      TGALogJoustData::TGALogJoustData(aTStack_138);
      iVar2 = JoustUtils::PlayerGetLeague();
      DString::DString(aDStack_148,iVar2);
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append((string *)aTStack_138,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      DString::DString(aDStack_148,uVar1);
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_118,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
      TGALogMgr::LogJoust(pTVar8,4,aTStack_a0);
      TGALogJoustData::~TGALogJoustData(aTStack_a0);
      TGALogJoustData::~TGALogJoustData(aTStack_138);
    }
    else if (*(int *)(this + 0x134) == 2) {
      pZVar4 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      ZMatchShopMgr::setCurBuyCost(pZVar4,*(int *)(this + 0x140));
      pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
      plVar6 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
      sVar9 = (size_t)*(uint *)(this + 0x13c);
      (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined4 *)(this + 0x138));
      TGALogJoustData::TGALogJoustData(aTStack_138);
      iVar2 = JoustUtils::PlayerGetLeague();
      DString::DString(aDStack_148,iVar2);
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append((string *)aTStack_138,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      DString::DString(aDStack_148,*(int *)(this + 0x140));
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_118,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      DString::DString(aDStack_148,*(int *)(this + 0x138));
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_100,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      DString::DString(aDStack_148,*(int *)(this + 0x13c));
      pcVar7 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_f8,pcVar7,sVar9);
      DString::~DString(aDStack_148);
      pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
      TGALogMgr::LogJoust(pTVar8,5,aTStack_a0);
      TGALogJoustData::~TGALogJoustData(aTStack_a0);
      TGALogJoustData::~TGALogJoustData(aTStack_138);
    }
  }
  else if (param_1 == 2) {
    pAVar3 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar3,0xf);
    goto LAB_03911ae8;
  }
  UISingletonDialog<ZShopConfirmDlg>::CloseDialog();
LAB_03911ae8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ZShopConfirmDlg::ButtonDepress(int) */

void __thiscall ZShopConfirmDlg::ButtonDepress(ZShopConfirmDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

