// Class: UINewerPresentDetail


/* UINewerPresentDetail::ButtonPress(int) */

int UINewerPresentDetail::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UINewerPresentDetail::ButtonPress(int) */

void __thiscall UINewerPresentDetail::ButtonPress(UINewerPresentDetail *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentDetail::GetLayoutName() */

void __thiscall UINewerPresentDetail::GetLayoutName(UINewerPresentDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewerPresentDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewerPresentDetail::~UINewerPresentDetail() */

void __thiscall UINewerPresentDetail::~UINewerPresentDetail(UINewerPresentDetail *this)

{
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06778f00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06779250;
  std::string::~string((string *)(this + 0x140));
  UISingletonDialog<UINewerPresentDetail>::~UISingletonDialog
            ((UISingletonDialog<UINewerPresentDetail> *)this);
  return;
}


/* UINewerPresentDetail::~UINewerPresentDetail() */

void __thiscall UINewerPresentDetail::~UINewerPresentDetail(UINewerPresentDetail *this)

{
  ~UINewerPresentDetail(this);
  AK::FreeHook(this);
  return;
}


/* UINewerPresentDetail::UINewerPresentDetail() */

void __thiscall UINewerPresentDetail::UINewerPresentDetail(UINewerPresentDetail *this)

{
  undefined **__n;
  
  UISingletonDialog<UINewerPresentDetail>::UISingletonDialog
            ((UISingletonDialog<UINewerPresentDetail> *)this);
  __n = &PTR_GetClass_06778f00;
  *(undefined ***)this = &PTR_GetClass_06778f00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06779250;
  Set8BytesTo0((string *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  std::string::append((string *)(this + 0x140),"",(size_t)__n);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentDetail::Close() */

void __thiscall UINewerPresentDetail::Close(UINewerPresentDetail *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_PlantFrame");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,1,0);
  }
  UISingletonDialog<UINewerPresentDetail>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentDetail::DlgChildWidgetSetIgnoreMouseInput(UI::Dialog*, std::string const&,
   std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall
UINewerPresentDetail::DlgChildWidgetSetIgnoreMouseInput
          (UINewerPresentDetail *this,Dialog *param_1,string *param_2,vector *param_3)

{
  bool bVar1;
  Widget *pWVar2;
  string *psVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Dialog *)0x0) &&
     (pWVar2 = (Widget *)UI::Dialog::GetWidget(param_1,param_2), pWVar2 != (Widget *)0x0)) {
    local_18 = FUN_03dbfdc0(*(undefined8 *)param_3);
    local_10 = FUN_03dbfe10(*(undefined8 *)(param_3 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      plVar4 = (long *)UI::Dialog::GetChildWidget(pWVar2,psVar3);
      (**(code **)(*plVar4 + 0x90))(plVar4,1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewerPresentDetail::InitView(std::string const&, int) */

void __thiscall
UINewerPresentDetail::InitView(UINewerPresentDetail *this,string *param_1,int param_2)

{
  TRect *pTVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PlantDisplayFrame *this_02;
  ulong uVar6;
  UIWidgetText *pUVar7;
  NewerPresentMgr *this_03;
  UIWidgetImage *pUVar8;
  long lVar9;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x158) = param_2;
  std::string::string((string *)&local_30,"Widget_PlantFrame");
  pTVar1 = (TRect *)(this + 0x148);
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  thunk_FUN_05475e00((string *)(this + 0x140),param_1);
  std::string::string(asStack_68,"IMAGE_UI_NEWER_PRESENT_OFFER_MINIMAP");
  nop();
  pcVar5 = (char *)FUN_0547429c(asStack_68);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30,pcVar5);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&local_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30);
  this_00 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets
            ((Insets *)&local_30,((int)plVar4[10] - (int)((float)iVar2 * 1.2)) / 2,
             (*(int *)((long)plVar4 + 0x54) - (int)((float)iVar3 * 1.2)) / 2,
             (int)((float)iVar2 * 1.2),(int)((float)iVar3 * 1.2));
  *(undefined8 *)pTVar1 = local_30;
  *(undefined8 *)(this + 0x150) = uStack_28;
  this_02 = ::operator_new(0x108);
  PlantDisplayFrame::PlantDisplayFrame(this_02,(string *)(this + 0x140),pTVar1,asStack_68);
  lVar9 = *(long *)this_02;
  *(PlantDisplayFrame **)(this + 0x138) = this_02;
  (**(code **)(lVar9 + 0x1a0))(this_02,pTVar1);
  PlantDisplayFrame::InitView(*(PlantDisplayFrame **)(this + 0x138));
  (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined8 *)(this + 0x138));
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),1);
  std::string::string(asStack_58,"Widget_IngoreMouse");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_30,asStack_58,1,asStack_38);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_38,"UIButton_Buy_Discount");
  DlgChildWidgetSetIgnoreMouseInput(this,(Dialog *)this,asStack_38,(vector *)&local_30);
  std::string::~string(asStack_38);
  nop();
  iVar2 = Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  uVar6 = NewerPresentMgr::GetTargetOrgPrice(iVar2);
  iVar2 = 0x5600320;
  std::string::string(asStack_38,"[REAL_MONEY_FORMAT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_38,(string *)L"{NUMBER}",(wchar_t *)(uVar6 & 0xffffffff),iVar2)
  ;
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"UIText_Price_Org");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  PuzzleTip::SetTip(pUVar7,auStack_50);
  iVar2 = Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  uVar6 = NewerPresentMgr::GetTargetPrice(iVar2);
  iVar2 = 0x5600320;
  std::string::string(asStack_40,"[REAL_MONEY_FORMAT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_40,(string *)L"{NUMBER}",(wchar_t *)(uVar6 & 0xffffffff),iVar2)
  ;
  FUN_054766c8(auStack_50,asStack_38);
  FUN_05476c50(asStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_38,"UIText_Price_Discount");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  PuzzleTip::SetTip(pUVar7,auStack_50);
  this_03 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
  NewerPresentMgr::GetTargetShortDes(this_03,param_2);
  std::string::string(asStack_38,"UIText_Title_Text");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  PuzzleTip::SetTip(pUVar7,auStack_48);
  std::string::string(asStack_38,"UIImage_GemIcon_Org");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*plVar4 + 0x158))(plVar4,0);
  std::string::string(asStack_38,"UIImage_GemIcon_Discount");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*plVar4 + 0x158))(plVar4,0);
  std::string::string(asStack_38,"UIImage_Icon_Discount");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  Sexy::StrFormat("IMAGE_UI_CARDS_STORE_DISCOUNT_NOLIMIT_%d",asStack_40,10);
  UIWidgetImage::SetImage(pUVar8,asStack_40);
  std::string::string(asStack_38,"UIImage_Banner");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  Sexy::StrFormat("IMAGE_UI_NEWER_PRESENT_BANNER_%d",asStack_38,(ulong)(*(int *)(this + 0x158) + 1))
  ;
  FUN_05474278(asStack_40,asStack_38);
  std::string::~string(asStack_38);
  UIWidgetImage::SetImage(pUVar8,asStack_40);
  std::string::~string(asStack_40);
  FUN_05476c50(auStack_48);
  FUN_05476c50(auStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewerPresentDetail::ButtonDepress(int) */

void __thiscall UINewerPresentDetail::ButtonDepress(UINewerPresentDetail *this,int param_1)

{
  NewerPresentMgr *this_00;
  
  if (param_1 != 0) {
    if (param_1 != 10) {
      return;
    }
    this_00 = (NewerPresentMgr *)Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
    NewerPresentMgr::BuyOffer(this_00,*(int *)(this + 0x158));
  }
  Close(this);
  return;
}


/* non-virtual thunk to UINewerPresentDetail::ButtonDepress(int) */

void __thiscall UINewerPresentDetail::ButtonDepress(UINewerPresentDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

