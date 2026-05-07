// Class: MoreOptionsShopItem


/* MoreOptionsShopItem::Draw(Sexy::Graphics*) */

void __thiscall MoreOptionsShopItem::Draw(MoreOptionsShopItem *this,Graphics *param_1)

{
  if (this[0x129] != (MoreOptionsShopItem)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,*(float *)(this + 300));
  }
  nop();
  return;
}


/* MoreOptionsShopItem::SetPressBuyOne(std::function<void ()>) */

void __thiscall MoreOptionsShopItem::SetPressBuyOne(MoreOptionsShopItem *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x138),param_2);
  return;
}


/* MoreOptionsShopItem::SetPressBuyMore(std::function<void ()>) */

void __thiscall MoreOptionsShopItem::SetPressBuyMore(MoreOptionsShopItem *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x158),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::GetLayoutName() */

void __thiscall MoreOptionsShopItem::GetLayoutName(MoreOptionsShopItem *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"MoreOptionsShopItem");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* MoreOptionsShopItem::~MoreOptionsShopItem() */

void __thiscall MoreOptionsShopItem::~MoreOptionsShopItem(MoreOptionsShopItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06a28e60;
  *(undefined **)(this + 0xd8) = &DAT_06a291b0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x158));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x138));
  UISingletonDialog<MoreOptionsShopItem>::~UISingletonDialog
            ((UISingletonDialog<MoreOptionsShopItem> *)this);
  return;
}


/* MoreOptionsShopItem::~MoreOptionsShopItem() */

void __thiscall MoreOptionsShopItem::~MoreOptionsShopItem(MoreOptionsShopItem *this)

{
  ~MoreOptionsShopItem(this);
  AK::FreeHook(this);
  return;
}


/* MoreOptionsShopItem::MoreOptionsShopItem() */

void __thiscall MoreOptionsShopItem::MoreOptionsShopItem(MoreOptionsShopItem *this)

{
  UISingletonDialog<MoreOptionsShopItem>::UISingletonDialog
            ((UISingletonDialog<MoreOptionsShopItem> *)this);
  *(undefined ***)this = &PTR_GetClass_06a28e60;
  *(undefined **)(this + 0xd8) = &DAT_06a291b0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x138));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetTitle(std::wstring const&) */

void __thiscall MoreOptionsShopItem::SetTitle(MoreOptionsShopItem *this,wstring *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Title");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  PuzzleTip::SetTip(pUVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetTitle(std::string const&) */

void __thiscall MoreOptionsShopItem::SetTitle(MoreOptionsShopItem *this,string *param_1)

{
  UIWidgetText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Title");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  UIWidgetText::SetString(this_00,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetItemBottom(std::wstring const&) */

void __thiscall MoreOptionsShopItem::SetItemBottom(MoreOptionsShopItem *this,wstring *param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Item_Bottom");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  PuzzleTip::SetTip(pUVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetItemBottom(std::string const&) */

void __thiscall MoreOptionsShopItem::SetItemBottom(MoreOptionsShopItem *this,string *param_1)

{
  UIWidgetText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Item_Bottom");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  UIWidgetText::SetString(this_00,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetData(int, int, int, int) */

void __thiscall
MoreOptionsShopItem::SetData
          (MoreOptionsShopItem *this,int param_1,int param_2,int param_3,int param_4)

{
  UIWidgetText *pUVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_4;
  local_2c = param_3;
  local_28 = param_2;
  local_24[0] = param_1;
  std::string::string(asStack_18,"UIText_Item_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_24);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Item_2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_2c);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Currency_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_28);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Currency_2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_30);
  UIWidgetText::SetString(pUVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::OnCreate() */

void __thiscall MoreOptionsShopItem::OnCreate(MoreOptionsShopItem *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetText *pUVar2;
  UIWidgetImage *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_10,"UIText_Buy_1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Item_1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_IND_1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Currency_1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Buy_2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Item_2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_IND_2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Currency_2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Mat_1");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Mat_2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetMaterial(Sexy::Image*) */

void __thiscall MoreOptionsShopItem::SetMaterial(MoreOptionsShopItem *this,Image *param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Mat_1");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  UIWidgetImage::SetImage(pUVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Mat_2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  UIWidgetImage::SetImage(pUVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetMaterial(int) */

void MoreOptionsShopItem::SetMaterial(int param_1)

{
  int iVar1;
  Image *pIVar2;
  UIWidgetImage *pUVar3;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = MaterialItemMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_20,extraout_x1);
  std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_18);
  pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
  if (pIVar2 != (Image *)0x0) {
    std::string::string(asStack_10,"UIImage_Mat_1");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)(ulong)(uint)param_1,asStack_10);
    UIWidgetImage::SetImage(pUVar3,pIVar2);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_Mat_2");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)(ulong)(uint)param_1,asStack_10);
    UIWidgetImage::SetImage(pUVar3,pIVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoreOptionsShopItem::ButtonDepress(int) */

void __thiscall MoreOptionsShopItem::ButtonDepress(MoreOptionsShopItem *this,int param_1)

{
  bool bVar1;
  function *this_00;
  
  if (param_1 == 1) {
    this_00 = (function *)(this + 0x138);
    bVar1 = std::function::operator_cast_to_bool(this_00);
    if (bVar1) goto LAB_04fb0634;
  }
  else {
    if (param_1 == 2) {
      this_00 = (function *)(this + 0x158);
      bVar1 = std::function::operator_cast_to_bool(this_00);
      if (!bVar1) {
        return;
      }
LAB_04fb0634:
      std::function<void()>::operator()((function<void()> *)this_00);
      return;
    }
    if (param_1 == 0x58) {
      UISingletonDialog<MoreOptionsShopItem>::CloseDialog();
      return;
    }
  }
  return;
}


/* non-virtual thunk to MoreOptionsShopItem::ButtonDepress(int) */

void __thiscall MoreOptionsShopItem::ButtonDepress(MoreOptionsShopItem *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoreOptionsShopItem::SetItemId(int, Sexy::Image*) */

void __thiscall MoreOptionsShopItem::SetItemId(MoreOptionsShopItem *this,int param_1,Image *param_2)

{
  Widget *pWVar1;
  CUILabel *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_Item");
  pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pWVar1 + 0x80))(pWVar1,1,1);
  this_00 = (CUILabel *)UIRewardFrame::CreateUIRewardFrame(param_1,0,false);
  if (param_2 != (Image *)0x0) {
    Lua::CUILabel::SetTypeface(this_00,(PrimeTypeface *)param_2);
  }
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(pWVar1 + 0x50),*(undefined4 *)(pWVar1 + 0x54));
  (**(code **)(*(long *)pWVar1 + 0x60))(pWVar1,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

