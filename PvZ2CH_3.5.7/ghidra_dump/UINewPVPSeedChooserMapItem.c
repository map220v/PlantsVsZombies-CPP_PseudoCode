// Class: UINewPVPSeedChooserMapItem


/* UINewPVPSeedChooserMapItem::~UINewPVPSeedChooserMapItem() */

void __thiscall
UINewPVPSeedChooserMapItem::~UINewPVPSeedChooserMapItem(UINewPVPSeedChooserMapItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066509a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06650cc8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UINewPVPSeedChooserMapItem::~UINewPVPSeedChooserMapItem() */

void __thiscall
UINewPVPSeedChooserMapItem::~UINewPVPSeedChooserMapItem(UINewPVPSeedChooserMapItem *this)

{
  ~UINewPVPSeedChooserMapItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserMapItem::resetButtonState() */

void __thiscall UINewPVPSeedChooserMapItem::resetButtonState(UINewPVPSeedChooserMapItem *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  PVZ2UIButton *this_00;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x110) != 0) {
    std::string::string(asStack_40,"IMAGE_UI_GENERIC_GREENBUTTON");
    StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"IMAGE_UI_GENERIC_GREENBUTTON_DOWN");
    uVar1 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"IMAGE_UI_GENERIC_BROWNBUTTON");
    uVar2 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"IMAGE_UI_GENERIC_BROWNBUTTON_DOWN");
    uVar3 = StringHelper::ToImage(asStack_40,false);
    std::string::~string(asStack_40);
    nop();
    if (this[0xe8] == (UINewPVPSeedChooserMapItem)0x0) {
      uVar2 = uVar3;
    }
    this_00 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar2,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar1,3);
    PVZ2UIButton::SetDialogStates(this_00,aPStack_78,(PVZ2UIImage *)asStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserMapItem::UINewPVPSeedChooserMapItem() */

void __thiscall
UINewPVPSeedChooserMapItem::UINewPVPSeedChooserMapItem(UINewPVPSeedChooserMapItem *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066509a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06650cc8;
  std::string::string((string *)(this + 0xe0),"");
  nop();
  this[0xe8] = (UINewPVPSeedChooserMapItem)0x0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf0));
  *(undefined8 *)(this + 0x110) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserMapItem::ButtonDepress(int) */

void UINewPVPSeedChooserMapItem::ButtonDepress(int param_1)

{
  bool bVar1;
  UINewPVPSeedChooserMapItem *this;
  string asStack_10 [8];
  long local_8;
  
  this = (UINewPVPSeedChooserMapItem *)(ulong)(uint)param_1;
  this[0xe8] = (UINewPVPSeedChooserMapItem)((byte)this[0xe8] ^ 1);
  local_8 = ___stack_chk_guard;
  resetButtonState(this);
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0xf0));
  if (bVar1) {
    FUN_05475d88(asStack_10,this + 0xe0);
    std::function<void(std::string,bool)>::operator()
              ((function<void(std::string,bool)> *)(this + 0xf0),asStack_10,this[0xe8]);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPSeedChooserMapItem::ButtonDepress(int) */

void __thiscall
UINewPVPSeedChooserMapItem::ButtonDepress(UINewPVPSeedChooserMapItem *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserMapItem::init(std::string, std::function<void (std::string, bool)>, bool) */

void __thiscall
UINewPVPSeedChooserMapItem::init
          (UINewPVPSeedChooserMapItem *this,undefined8 param_2,function *param_3,
          UINewPVPSeedChooserMapItem param_4)

{
  PVZ2UIButton *this_00;
  wchar_t *pwVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0xe0);
  this[0xe8] = param_4;
  std::function<void(std::string,bool)>::operator=
            ((function<void(std::string,bool)> *)(this + 0xf0),param_3);
  if (this[0xe8] == (UINewPVPSeedChooserMapItem)0x0) {
    pwVar1 = L"Disable";
  }
  else {
    pwVar1 = L"Enable";
  }
  FUN_05478178(awStack_20,pwVar1,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,0,(ButtonListener *)(this + 0xd8),awStack_20,aCStack_18);
  *(PVZ2UIButton **)(this + 0x110) = this_00;
  FUN_05476c50(awStack_20);
  nop();
  resetButtonState(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPSeedChooserMapItem::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPSeedChooserMapItem::Draw(UINewPVPSeedChooserMapItem *this,Graphics *param_1)

{
  undefined8 uVar1;
  Image *pIVar2;
  string *extraout_x1;
  string *psVar3;
  string *extraout_x1_00;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  psVar3 = extraout_x1;
  if (this[0xe8] != (UINewPVPSeedChooserMapItem)0x0) {
    Sexy::Insets::Insets((Insets *)asStack_18,0xff,0xff,0xff,0x50);
    Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    psVar3 = extraout_x1_00;
  }
  Sexy::StringToUpper((Sexy *)(this + 0xe0),psVar3);
  uVar1 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("IMAGE_UI_NEW_PVP_WORLD_%s",asStack_18,uVar1);
  pIVar2 = (Image *)StringHelper::ToImage(asStack_18,true);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Graphics::SetColorizeImages(param_1,false);
  if (this[0xe8] != (UINewPVPSeedChooserMapItem)0x0) {
    Sexy::StrFormat("IMAGE_UI_NEW_PVP_WORLD_DISABLED",asStack_18);
    pIVar2 = (Image *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

