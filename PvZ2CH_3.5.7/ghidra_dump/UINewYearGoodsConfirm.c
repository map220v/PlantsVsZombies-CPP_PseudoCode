// Class: UINewYearGoodsConfirm


/* UINewYearGoodsConfirm::~UINewYearGoodsConfirm() */

void __thiscall UINewYearGoodsConfirm::~UINewYearGoodsConfirm(UINewYearGoodsConfirm *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e5d08;
  *(undefined ***)this = &PTR_GetClass_066e59e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UINewYearGoodsConfirm::~UINewYearGoodsConfirm() */

void __thiscall UINewYearGoodsConfirm::~UINewYearGoodsConfirm(UINewYearGoodsConfirm *this)

{
  ~UINewYearGoodsConfirm(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsConfirm::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall
UINewYearGoodsConfirm::InitView(UINewYearGoodsConfirm *this,int param_1,vector *param_2)

{
  ButtonListener *pBVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  PVZ2UIButton *pPVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  FUN_05478178(awStack_78,L"[NEWYEAR_GOODS_BUNDLE]",auStack_80);
  uVar16 = 0;
  TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(&DAT_05751eb0 + (long)param_1 * 4));
  FUN_054766c8(this + 0xe8,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar3 = FUN_039a5cb0(0x230);
  iVar4 = FUN_039a5cb0(0x1a4);
  lVar2 = gLawnApp;
  iVar5 = FUN_039a5cb0(0x32);
  (**(code **)(*(long *)this + 0x198))
            (this,(*(int *)(lVar2 + 0xd4) - iVar3) / 2,(*(int *)(lVar2 + 0xd8) - iVar4) / 2 - iVar5,
             iVar3,iVar4);
  this[0x59] = (UINewYearGoodsConfirm)0x0;
  TodStringTranslate(L"[REPICK_BUTTON]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x2c,pBVar1,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf060,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abf2e8,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar6 = FUN_039a5cb0(0x50);
  uVar7 = FUN_039a5cb0(0x154);
  uVar8 = FUN_039a5cb0(0x87);
  uVar9 = FUN_039a5cb0(0x37);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar6,uVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,pPVar12);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x16,pBVar1,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf238,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abf320,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar6 = FUN_039a5cb0(0x15e);
  uVar7 = FUN_039a5cb0(0x154);
  uVar8 = FUN_039a5cb0(0x87);
  uVar9 = FUN_039a5cb0(0x37);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar6,uVar7,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,pPVar12);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x58,pBVar1,awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf108,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abf3f8,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar6 = FUN_039a5cb0(0x208);
  iVar3 = FUN_039a5cb0(8);
  uVar7 = FUN_039a5cb0(0x32);
  uVar8 = FUN_039a5cb0(0x34);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar6,-iVar3,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,pPVar12);
  while( true ) {
    uVar17 = *(undefined8 *)param_2;
    uVar15 = FUN_039a5504(uVar17,*(undefined8 *)(param_2 + 8));
    if (uVar15 <= uVar16) break;
    piVar13 = (int *)FUN_039a5588(uVar17,uVar16);
    plVar14 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar13,piVar13[1],true);
    iVar5 = FUN_039a5cb0(0x2d);
    iVar10 = FUN_039a5cb0(0x5a);
    iVar11 = FUN_039a5cb0(0x8c);
    uVar6 = FUN_039a5cb0(0x46);
    iVar4 = (int)(uVar16 / 6);
    iVar3 = (int)uVar16;
    uVar16 = uVar16 + 1;
    (**(code **)(*plVar14 + 0x198))
              (plVar14,iVar5 + iVar10 * (iVar3 + iVar4 * -6),iVar11 + iVar10 * iVar4,uVar6,uVar6);
    (**(code **)(*(long *)this + 0x60))(this,plVar14);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewYearGoodsConfirm::OnBuyNewYearGoods(int) */

void UINewYearGoodsConfirm::OnBuyNewYearGoods(int param_1)

{
  PlantAccessoryUI *this;
  
  this = (PlantAccessoryUI *)UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr();
  if (this != (PlantAccessoryUI *)0x0) {
    PlantAccessoryUI::CloseSteadySuccessSuperPacket(this);
    UISingletonDialog<UINewYearGoodsSelect>::CloseDialog();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsConfirm::ButtonDepress(int) */

void __thiscall UINewYearGoodsConfirm::ButtonDepress(UINewYearGoodsConfirm *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  PlantAccessoryUI *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    pPVar1 = (PlantAccessoryUI *)UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr();
    PlantAccessoryUI::CloseSteadySuccessSuperPacket(pPVar1);
  }
  else if (param_1 == 0x58) {
    pPVar1 = (PlantAccessoryUI *)UISingletonDialog<UINewYearGoodsSelect>::GetSingletonPtr();
    PlantAccessoryUI::CloseSteadySuccessSuperPacket(pPVar1);
    UISingletonDialog<UINewYearGoodsSelect>::CloseDialog();
  }
  else if (param_1 == 0x16) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    Sexy::StrFormat("com.popcap.ios.chs.PVZ2.NewYearGoods%d",asStack_10,
                    (ulong)*(uint *)(&DAT_05751eb0 + (long)*(int *)(this + 0xe0) * 4));
    PurchaseBroker::RequestPayment(this_01,asStack_10,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewYearGoodsConfirm::ButtonDepress(int) */

void __thiscall UINewYearGoodsConfirm::ButtonDepress(UINewYearGoodsConfirm *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewYearGoodsConfirm::Draw(Sexy::Graphics*) */

void __thiscall UINewYearGoodsConfirm::Draw(UINewYearGoodsConfirm *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf390);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_039a5cb0(0);
  iVar2 = FUN_039a5cb0(0x46);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar5,aIStack_18,5,1);
  TodStringTranslate(L"[NEWYEAR_GOODS_SELECTED]");
  iVar1 = FUN_039a5cb0(0x46);
  iVar2 = FUN_039a5cb0(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_039a5cb0(0x19);
  iVar2 = FUN_039a5cb0(0x78);
  iVar3 = FUN_039a5cb0(0x1fe);
  iVar4 = FUN_039a5cb0(0xd2);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf428);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewYearGoodsConfirm::UINewYearGoodsConfirm() */

void __thiscall UINewYearGoodsConfirm::UINewYearGoodsConfirm(UINewYearGoodsConfirm *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066e59e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e5d08;
  FUN_05476574(this + 0xe8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyNewYearGoods);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewYearGoodsConfirm,void(UINewYearGoodsConfirm::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyNewYearGoods,&local_40);
  return;
}

