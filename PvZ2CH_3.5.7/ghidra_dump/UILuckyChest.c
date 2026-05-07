// Class: UILuckyChest


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::GetLayoutName() */

void __thiscall UILuckyChest::GetLayoutName(UILuckyChest *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILuckyChest");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UILuckyChest::~UILuckyChest() */

void __thiscall UILuckyChest::~UILuckyChest(UILuckyChest *this)

{
  *(undefined ***)this = &PTR_GetClass_069f33f0;
  *(undefined **)(this + 0xd8) = &DAT_069f3740;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<UILuckyChest>::~UISingletonDialog((UISingletonDialog<UILuckyChest> *)this);
  return;
}


/* UILuckyChest::~UILuckyChest() */

void __thiscall UILuckyChest::~UILuckyChest(UILuckyChest *this)

{
  ~UILuckyChest(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::SetIsDialog(bool) */

void __thiscall UILuckyChest::SetIsDialog(UILuckyChest *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_10,"UIButton_0");
    pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pPVar1 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
    }
    std::string::string(asStack_10,"UIImage_0");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
    std::string::string(asStack_10,"UIImage_1");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
    std::string::string(asStack_10,"UIImage_2");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    }
    std::string::string(asStack_10,"UIImage_3");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar3 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::initSkuStatus() */

void __thiscall UILuckyChest::initSkuStatus(UILuckyChest *this)

{
  UIWidgetImage *pUVar1;
  PVZ2UIButton *this_00;
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_LUCKYCHEST_LUCKYCHEST_SHOP%d",asStack_80,(ulong)*(uint *)(this + 0x134))
  ;
  std::string::string(asStack_40,"UIImage_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  UIWidgetImage::SetImage(pUVar1,asStack_80);
  std::string::string(asStack_40,"UIButton_0");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if ((this_00 != (PVZ2UIButton *)0x0) && (this[0x13c] == (UILuckyChest)0x0)) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ba1d60,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06ba1d60,2);
    PVZ2UIButton::SetDialogStates(this_00,aPStack_78,(PVZ2UIImage *)asStack_40);
    (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
    std::string::string(asStack_40,"UIImage_1");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (pUVar1 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
    }
  }
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::ButtonDepress(int) */

void __thiscall UILuckyChest::ButtonDepress(UILuckyChest *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 100) {
    UISingletonDialog<UILuckyChest>::CloseDialog();
  }
  else if (param_1 == 0x65) {
    iVar1 = *(int *)(this + 0x134);
    if (iVar1 == 1) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.01luckBox68";
    }
    else if (iVar1 == 2) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.02luckBox68";
    }
    else if (iVar1 == 3) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.03luckBox68";
    }
    else {
      if (iVar1 != 4) goto LAB_04eb386c;
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_00 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var2);
      __s = "com.popcap.ios.chs.PVZ2.04luckBox68";
    }
    std::string::string(asStack_10,__s);
    PurchaseBroker::RequestPayment(this_00,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_04eb386c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UILuckyChest::ButtonDepress(int) */

void __thiscall UILuckyChest::ButtonDepress(UILuckyChest *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::UILuckyChest() */

void __thiscall UILuckyChest::UILuckyChest(UILuckyChest *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UILuckyChest>::UISingletonDialog((UISingletonDialog<UILuckyChest> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_069f33f0;
  *(undefined **)(this + 0xd8) = &DAT_069f3740;
  *(undefined4 *)(this + 0x138) = 0;
  this[0x13c] = (UILuckyChest)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onOpenLuckyChestBox);
  Sexy::Delegate0::Delegate0<UILuckyChest,void(UILuckyChest::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::BuyLuckyChestBox,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILuckyChest::onOpenLuckyChestBox() */

void __thiscall UILuckyChest::onOpenLuckyChestBox(UILuckyChest *this)

{
  this[0x13c] = (UILuckyChest)0x0;
  initSkuStatus(this);
  LuckyChestRequest::RequestReward();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILuckyChest::OnCreate() */

void __thiscall UILuckyChest::OnCreate(UILuckyChest *this)

{
  char cVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  UIWidgetImage *pUVar4;
  UIWidgetText *pUVar5;
  TGALogMgr *this_00;
  string *__n;
  undefined1 auStack_f0 [8];
  string asStack_e8 [32];
  string asStack_c8 [52];
  undefined4 local_94;
  UILuckyChest local_90;
  undefined4 local_8c;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_c8,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_c8);
  std::string::~string(asStack_c8);
  nop();
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  __n = asStack_e8;
  std::string::string(asStack_c8,"UIImage_3");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_c8);
  std::string::~string(asStack_c8);
  nop();
  if (pUVar4 != (UIWidgetImage *)0x0) {
    __n = *(string **)(*(long *)pUVar4 + 0x158);
    (*(code *)__n)(pUVar4,0);
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04eaf9ec(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    LuckyChestData::LuckyChestData((LuckyChestData *)asStack_c8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_c8);
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0x134) = local_94;
      this[0x13c] = local_90;
      initSkuStatus(this);
      *(undefined4 *)(this + 0x138) = local_8c;
      TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_e8);
      std::string::append(asStack_e8,"1",(size_t)__n);
      this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogLuckyChestShop(this_00,(TGALuckyChestShopData *)asStack_e8);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_e8);
    }
    FUN_05476574(auStack_f0);
    Sexy::StrFormat(L"%d",asStack_e8,(ulong)*(uint *)(this + 0x138));
    FUN_054766c8(auStack_f0,asStack_e8);
    FUN_05476c50(asStack_e8);
    std::string::string(asStack_e8,"UIText_Timer1");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_e8);
    std::string::~string(asStack_e8);
    nop();
    if (pUVar5 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar5,auStack_f0);
    }
    FUN_05476c50(auStack_f0);
    LuckyChestData::~LuckyChestData((LuckyChestData *)asStack_c8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

