// Class: PennyGiftBoxBundleItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxBundleItem::ButtonDepress(int) */

void PennyGiftBoxBundleItem::ButtonDepress(int param_1)

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
  cVar2 = FUN_04e76788();
  if (cVar2 == '\0') {
    iVar1 = *(int *)((ulong)(uint)param_1 + 0xe0);
    if (iVar1 == 0) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar4 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var3);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.PennyGiftBox30");
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
        __s = "com.popcap.ios.chs.PVZ2.PennyGiftBox68";
      }
      else if (iVar1 == 2) {
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.PennyGiftBox198";
      }
      else if (iVar1 == 3) {
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.PennyGiftBox328";
      }
      else {
        if (iVar1 != 4) goto LAB_04e7ae10;
        p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar4 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var3);
        __s = "com.popcap.ios.chs.PVZ2.PennyGiftBox648";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar4,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    UISingletonDialog<UIPennyGiftBox>::CloseDialog();
  }
LAB_04e7ae10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PennyGiftBoxBundleItem::ButtonDepress(int) */

void __thiscall PennyGiftBoxBundleItem::ButtonDepress(PennyGiftBoxBundleItem *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* PennyGiftBoxBundleItem::OnBuyPennyGiftBoxBundle(int) */

void __thiscall
PennyGiftBoxBundleItem::OnBuyPennyGiftBoxBundle(PennyGiftBoxBundleItem *this,int param_1)

{
  PennyGiftBoxManager *this_00;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  this_00 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  PennyGiftBoxManager::RecalculTickets(this_00);
  return;
}


/* PennyGiftBoxBundleItem::Draw(Sexy::Graphics*) */

void __thiscall PennyGiftBoxBundleItem::Draw(PennyGiftBoxBundleItem *this,Graphics *param_1)

{
  int iVar1;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *pIVar2;
  
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba07c8);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba03d0;
  if (((iVar1 != 1) && (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba00b8, iVar1 != 2)) &&
     (this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0450, iVar1 != 3)) {
    if (iVar1 != 4) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0a18;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* PennyGiftBoxBundleItem::PennyGiftBoxBundleItem() */

void __thiscall PennyGiftBoxBundleItem::PennyGiftBoxBundleItem(PennyGiftBoxBundleItem *this)

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
  *(undefined ***)this = &PTR_GetClass_069ea290;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ea5b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyPennyGiftBoxBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PennyGiftBoxBundleItem,void(PennyGiftBoxBundleItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyPennyGiftBox,&local_40);
  return;
}


/* PennyGiftBoxBundleItem::~PennyGiftBoxBundleItem() */

void __thiscall PennyGiftBoxBundleItem::~PennyGiftBoxBundleItem(PennyGiftBoxBundleItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069ea290;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ea5b8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyGiftBoxBundleItem::~PennyGiftBoxBundleItem() */

void __thiscall PennyGiftBoxBundleItem::~PennyGiftBoxBundleItem(PennyGiftBoxBundleItem *this)

{
  ~PennyGiftBoxBundleItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxBundleItem::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall
PennyGiftBoxBundleItem::InitView(PennyGiftBoxBundleItem *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *pPVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_a0 [8];
  wstring awStack_98 [8];
  int local_90 [6];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf0),param_2);
  local_90[0] = 0x1e;
  local_90[1] = 0x44;
  local_90[2] = 0xc6;
  local_90[3] = 0x148;
  local_90[4] = 0x288;
  iVar1 = local_90[*(int *)(this + 0xe0)];
  FUN_05478178(awStack_98,L"[SECRET_BUY_STR]",auStack_a0);
  TodReplaceNumberString(awStack_98,L"{NUMBER}",iVar1);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,0x12d,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar5;
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_98);
  nop();
  pPVar5 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba0378,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba0670,3);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar7 = *(long **)(this + 0xe8);
  pcVar8 = *(code **)(*plVar7 + 0x1a0);
  iVar1 = FUN_04e790b0(0x1e);
  iVar2 = FUN_04e790b0(0xc3);
  iVar3 = FUN_04e790b0(0x6e);
  iVar4 = FUN_04e790b0(0x32);
  Sexy::Insets::Insets(aIStack_40,iVar1,iVar2,iVar3,iVar4);
  (*pcVar8)(plVar7,aIStack_40);
  plVar7 = *(long **)(this + 0xe8);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  (*pcVar8)(plVar7,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

