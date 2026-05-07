// Class: PvpExchangeDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::GetLayoutName() */

void __thiscall PvpExchangeDlg::GetLayoutName(PvpExchangeDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PvpExchange");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PvpExchangeDlg::~PvpExchangeDlg() */

void __thiscall PvpExchangeDlg::~PvpExchangeDlg(PvpExchangeDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694f770;
  *(undefined **)(this + 0xd8) = &DAT_0694fac0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<PvpExchangeDlg>::~UISingletonDialog((UISingletonDialog<PvpExchangeDlg> *)this);
  return;
}


/* PvpExchangeDlg::~PvpExchangeDlg() */

void __thiscall PvpExchangeDlg::~PvpExchangeDlg(PvpExchangeDlg *this)

{
  ~PvpExchangeDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::Update() */

void __thiscall PvpExchangeDlg::Update(PvpExchangeDlg *this)

{
  long lVar1;
  ulong uVar2;
  string *extraout_x1;
  undefined8 uVar3;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  uVar3 = *(undefined8 *)(this + 0x168);
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04af2628(*(undefined4 *)(lVar1 + 0xc));
  Sexy::StrFormat("%d",aSStack_18,uVar2 & 0xffffffff);
  Sexy::ToSexyString(aSStack_18,extraout_x1);
  PuzzleTip::SetTip(uVar3,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvpExchangeDlg::ButtonDepress(int) */

void __thiscall PvpExchangeDlg::ButtonDepress(PvpExchangeDlg *this,int param_1)

{
  int iVar1;
  int iVar2;
  PvpExchangeConfirmDlg *this_00;
  Plant *this_01;
  long lVar3;
  
  if (param_1 == 0) {
    UISingletonDialog<PvpExchangeDlg>::CloseDialog();
    return;
  }
  if (param_1 == 1) {
    this_00 = (PvpExchangeConfirmDlg *)UISingletonDialog<PvpExchangeConfirmDlg>::ShowDialog();
    this_01 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar3 = Plant::GetAttachedBoardEntityManager(this_01);
    iVar1 = *(int *)(lVar3 + 0x84);
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_04af2628(*(undefined4 *)(lVar3 + 0xc));
    if (iVar1 <= iVar2) {
      PvpExchangeConfirmDlg::SetConfirm(this_00,0);
      return;
    }
    PvpExchangeConfirmDlg::SetConfirm(this_00,1);
    return;
  }
  return;
}


/* non-virtual thunk to PvpExchangeDlg::ButtonDepress(int) */

void __thiscall PvpExchangeDlg::ButtonDepress(PvpExchangeDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::PvpExchangeDlg() */

void __thiscall PvpExchangeDlg::PvpExchangeDlg(PvpExchangeDlg *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PvpExchangeDlg>::UISingletonDialog((UISingletonDialog<PvpExchangeDlg> *)this);
  *(undefined ***)this = &PTR_GetClass_0694f770;
  *(undefined **)(this + 0xd8) = &DAT_0694fac0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetPvpShopData);
  Sexy::Delegate0::Delegate0<PvpExchangeDlg,void(PvpExchangeDlg::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PvpShopRefreshed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,BuyFinish);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PvpExchangeDlg,void(PvpExchangeDlg::*)(int)>>
            ((MessageRouter *)puVar1,Message::PvpShopBuyFinish,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::SetPvpShopData() */

void __thiscall PvpExchangeDlg::SetPvpShopData(PvpExchangeDlg *this)

{
  char cVar1;
  Plant *this_00;
  PVPShopConfigData *this_01;
  long lVar2;
  ulong uVar3;
  PVPCUPData *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_01 = (PVPShopConfigData *)Plant::GetAttachedBoardEntityManager(this_00);
  cVar1 = PVPShopConfigData::getShopShowList(this_01,(vector *)&local_20);
  uVar5 = local_18;
  uVar6 = local_20;
  if (cVar1 == '\0') goto LAB_04af3df0;
  lVar2 = FUN_04af2640(local_20,local_18);
  if (lVar2 == 0) {
LAB_04af3da0:
    uVar3 = FUN_04af2640(uVar6,uVar5);
    if (uVar3 < 3) goto LAB_04af3db4;
LAB_04af3eec:
    (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,2);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x148),pPVar4);
    uVar5 = local_18;
    uVar6 = local_20;
    uVar3 = FUN_04af2640(local_20,local_18);
    if (3 < uVar3) goto LAB_04af3f38;
LAB_04af3dc8:
    uVar3 = FUN_04af2640(uVar6,uVar5);
    if (uVar3 < 5) goto LAB_04af3ddc;
LAB_04af3f84:
    (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,4);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x158),pPVar4);
    uVar3 = FUN_04af2640(local_20,local_18);
  }
  else {
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,0);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x138),pPVar4);
    uVar5 = local_18;
    uVar6 = local_20;
    uVar3 = FUN_04af2640(local_20,local_18);
    if (uVar3 < 2) goto LAB_04af3da0;
    (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,1);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x140),pPVar4);
    uVar5 = local_18;
    uVar6 = local_20;
    uVar3 = FUN_04af2640(local_20,local_18);
    if (2 < uVar3) goto LAB_04af3eec;
LAB_04af3db4:
    uVar3 = FUN_04af2640(uVar6,uVar5);
    if (uVar3 < 4) goto LAB_04af3dc8;
LAB_04af3f38:
    (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,3);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x150),pPVar4);
    uVar5 = local_18;
    uVar6 = local_20;
    uVar3 = FUN_04af2640(local_20,local_18);
    if (4 < uVar3) goto LAB_04af3f84;
LAB_04af3ddc:
    uVar3 = FUN_04af2640(uVar6,uVar5);
  }
  if (5 < uVar3) {
    (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(local_20,5);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(this + 0x160),pPVar4);
  }
LAB_04af3df0:
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::~vector
            ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::OnCreate() */

void __thiscall PvpExchangeDlg::OnCreate(PvpExchangeDlg *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PrimeText *this_00;
  Widget *pWVar8;
  ExchangeItemWidget *this_01;
  UIWidgetText *pUVar9;
  long *plVar10;
  Plant *this_02;
  PVPShopConfigData *this_03;
  int iVar11;
  PvpExchangeDlg *pPVar12;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  iVar11 = 0;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  UI::Dialog::AddResGroup((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::string::string(asStack_10,"Widget_Items");
  pWVar8 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar5 = FUN_04af28b8(0x14);
  iVar6 = FUN_04af28b8(10);
  iVar7 = FUN_04af28b8(5);
  iVar1 = ((*(int *)(pWVar8 + 0x54) + iVar6 * -2) - iVar7) / 2;
  iVar4 = (*(int *)(pWVar8 + 0x50) + iVar5 * -2 + iVar7 * -2) / 3;
  pPVar12 = this + 0x138;
  do {
    this_01 = ::operator_new(0x110);
    ExchangeItemWidget::ExchangeItemWidget(this_01,this);
    *(ExchangeItemWidget **)pPVar12 = this_01;
    (**(code **)(*(long *)pWVar8 + 0x60))(pWVar8,this_01);
    iVar2 = iVar11 / 3;
    iVar3 = iVar11 % 3;
    iVar11 = iVar11 + 1;
    (**(code **)(**(long **)pPVar12 + 0x198))
              (*(long **)pPVar12,iVar5 + iVar3 * (iVar7 + iVar4),iVar6 + iVar2 * (iVar7 + iVar1),
               iVar4,iVar1);
    (**(code **)(**(long **)pPVar12 + 0x158))(*(long **)pPVar12,0);
    pPVar12 = pPVar12 + 8;
  } while (iVar11 != 6);
  std::string::string(asStack_10,"UIText_Coin");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x168) = pUVar9;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Time");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x170) = pUVar9;
  std::string::~string(asStack_10);
  nop();
  SetPvpShopData(this);
  std::string::string(asStack_10,"UIImage_BG");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x1a8))
              (plVar10,(*(int *)(gLawnApp + 0xd4) - (int)plVar10[10]) / 2,
               *(undefined4 *)((long)plVar10 + 0x4c));
  }
  this_02 = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_03 = (PVPShopConfigData *)Plant::GetAttachedBoardEntityManager(this_02);
  PVPShopConfigData::requestShopShowList(this_03,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpExchangeDlg::BuyFinish(int) */

void PvpExchangeDlg::BuyFinish(int param_1)

{
  char cVar1;
  Plant *this;
  PVPShopConfigData *this_00;
  long lVar2;
  ulong uVar3;
  PVPCUPData *pPVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  uVar5 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
  this = (Plant *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  this_00 = (PVPShopConfigData *)Plant::GetAttachedBoardEntityManager(this);
  cVar1 = PVPShopConfigData::getShopShowList(this_00,(vector *)&uStack_20);
  uVar6 = uStack_18;
  uVar7 = uStack_20;
  if (cVar1 == '\0') goto LAB_04af3df0;
  lVar2 = FUN_04af2640(uStack_20,uStack_18);
  if (lVar2 == 0) {
LAB_04af3da0:
    uVar3 = FUN_04af2640(uVar7,uVar6);
    if (uVar3 < 3) goto LAB_04af3db4;
LAB_04af3eec:
    (**(code **)(**(long **)(uVar5 + 0x148) + 0x158))(*(long **)(uVar5 + 0x148),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,2);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x148),pPVar4);
    uVar6 = uStack_18;
    uVar7 = uStack_20;
    uVar3 = FUN_04af2640(uStack_20,uStack_18);
    if (3 < uVar3) goto LAB_04af3f38;
LAB_04af3dc8:
    uVar3 = FUN_04af2640(uVar7,uVar6);
    if (uVar3 < 5) goto LAB_04af3ddc;
LAB_04af3f84:
    (**(code **)(**(long **)(uVar5 + 0x158) + 0x158))(*(long **)(uVar5 + 0x158),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,4);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x158),pPVar4);
    uVar3 = FUN_04af2640(uStack_20,uStack_18);
  }
  else {
    (**(code **)(**(long **)(uVar5 + 0x138) + 0x158))(*(long **)(uVar5 + 0x138),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,0);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x138),pPVar4);
    uVar6 = uStack_18;
    uVar7 = uStack_20;
    uVar3 = FUN_04af2640(uStack_20,uStack_18);
    if (uVar3 < 2) goto LAB_04af3da0;
    (**(code **)(**(long **)(uVar5 + 0x140) + 0x158))(*(long **)(uVar5 + 0x140),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,1);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x140),pPVar4);
    uVar6 = uStack_18;
    uVar7 = uStack_20;
    uVar3 = FUN_04af2640(uStack_20,uStack_18);
    if (2 < uVar3) goto LAB_04af3eec;
LAB_04af3db4:
    uVar3 = FUN_04af2640(uVar7,uVar6);
    if (uVar3 < 4) goto LAB_04af3dc8;
LAB_04af3f38:
    (**(code **)(**(long **)(uVar5 + 0x150) + 0x158))(*(long **)(uVar5 + 0x150),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,3);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x150),pPVar4);
    uVar6 = uStack_18;
    uVar7 = uStack_20;
    uVar3 = FUN_04af2640(uStack_20,uStack_18);
    if (4 < uVar3) goto LAB_04af3f84;
LAB_04af3ddc:
    uVar3 = FUN_04af2640(uVar7,uVar6);
  }
  if (5 < uVar3) {
    (**(code **)(**(long **)(uVar5 + 0x160) + 0x158))(*(long **)(uVar5 + 0x160),1);
    pPVar4 = (PVPCUPData *)FUN_04af264c(uStack_20,5);
    ExchangeItemWidget::SetShopData(*(ExchangeItemWidget **)(uVar5 + 0x160),pPVar4);
  }
LAB_04af3df0:
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::~vector
            ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)&uStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

