// Class: LimitedSummonBundleItem


/* LimitedSummonBundleItem::~LimitedSummonBundleItem() */

void __thiscall LimitedSummonBundleItem::~LimitedSummonBundleItem(LimitedSummonBundleItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e22c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e25e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LimitedSummonBundleItem::~LimitedSummonBundleItem() */

void __thiscall LimitedSummonBundleItem::~LimitedSummonBundleItem(LimitedSummonBundleItem *this)

{
  ~LimitedSummonBundleItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonBundleItem::InitView(int) */

void __thiscall LimitedSummonBundleItem::InitView(LimitedSummonBundleItem *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  int local_88 [4];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  lVar5 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  puVar6 = (undefined4 *)FUN_03999528(*(undefined8 *)(lVar5 + 0x50),(long)param_1);
  local_88[0] = 6;
  local_88[2] = 0x62;
  *(undefined4 *)(this + 0xe4) = *puVar6;
  local_88[3] = 0x148;
  local_88[1] = 0x1e;
  iVar1 = local_88[*(int *)(this + 0xe0)];
  FUN_05478178(awStack_90,L"[SECRET_BUY_STR]",auStack_98);
  TodReplaceNumberString(awStack_90,L"{NUMBER}",iVar1);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0x12d,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar7;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_90);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abed60,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06abee48,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar9 = *(long **)(this + 0xe8);
  pcVar10 = *(code **)(*plVar9 + 0x1a0);
  iVar1 = FUN_0399a924(0x1e);
  iVar2 = FUN_0399a924(0xc3);
  iVar3 = FUN_0399a924(0x6e);
  iVar4 = FUN_0399a924(0x32);
  Sexy::Insets::Insets(aIStack_40,iVar1,iVar2,iVar3,iVar4);
  (*pcVar10)(plVar9,aIStack_40);
  plVar9 = *(long **)(this + 0xe8);
  pcVar10 = *(code **)(*plVar9 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  (*pcVar10)(plVar9,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (*(int *)(this + 0xe4) < 1) {
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonBundleItem::OnBuyLimitedSummonBundle(int) */

void __thiscall
LimitedSummonBundleItem::OnBuyLimitedSummonBundle(LimitedSummonBundleItem *this,int param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  LimitedSummonManager *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  lVar2 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  piVar3 = (int *)FUN_03999528(*(undefined8 *)(lVar2 + 0x50),(long)*(int *)(this + 0xe0));
  iVar1 = *piVar3 + -1;
  *piVar3 = iVar1;
  *(int *)(this + 0xe4) = iVar1;
  if (iVar1 < 1) {
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),1);
  }
  this_00 = (LimitedSummonManager *)Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  LimitedSummonManager::RecalculTickets(this_00);
  return;
}


/* LimitedSummonBundleItem::LimitedSummonBundleItem() */

void __thiscall LimitedSummonBundleItem::LimitedSummonBundleItem(LimitedSummonBundleItem *this)

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
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066e22c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e25e8;
  *(undefined4 *)(this + 0xe4) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyLimitedSummonBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LimitedSummonBundleItem,void(LimitedSummonBundleItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyLimitedSummon,&local_40);
  return;
}


/* LimitedSummonBundleItem::Draw(Sexy::Graphics*) */

void __thiscall LimitedSummonBundleItem::Draw(LimitedSummonBundleItem *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abed98);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abef20;
  }
  else if (iVar1 == 2) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abeea8;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abef48;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonBundleItem::ButtonDepress(int) */

void LimitedSummonBundleItem::ButtonDepress(int param_1)

{
  int iVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  PurchaseBroker *pPVar4;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_039a1f44();
  if (cVar2 == '\0') {
    iVar1 = *(int *)((ulong)(uint)param_1 + 0xe0);
    if (iVar1 == 0) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var3);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.LimitedSummon6");
      PurchaseBroker::RequestPayment(pPVar4,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      if (iVar1 == 1) {
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.LimitedSummon30";
      }
      else if (iVar1 == 2) {
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.LimitedSummon98";
      }
      else {
        if (iVar1 != 3) goto LAB_039a20fc;
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.LimitedSummon328";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar4,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    UISingletonDialog<UILimitedSummon>::CloseDialog();
  }
LAB_039a20fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitedSummonBundleItem::ButtonDepress(int) */

void __thiscall LimitedSummonBundleItem::ButtonDepress(LimitedSummonBundleItem *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

