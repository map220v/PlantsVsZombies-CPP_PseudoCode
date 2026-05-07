// Class: PennyGiftSelectButton


/* PennyGiftSelectButton::TouchBegan(Sexy::Touch const&) */

void __thiscall PennyGiftSelectButton::TouchBegan(PennyGiftSelectButton *this,Touch *param_1)

{
  *(int *)(this + 0xe0) = (int)*(undefined8 *)param_1;
  return;
}


/* PennyGiftSelectButton::~PennyGiftSelectButton() */

void __thiscall PennyGiftSelectButton::~PennyGiftSelectButton(PennyGiftSelectButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069e85f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e8910;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyGiftSelectButton::~PennyGiftSelectButton() */

void __thiscall PennyGiftSelectButton::~PennyGiftSelectButton(PennyGiftSelectButton *this)

{
  ~PennyGiftSelectButton(this);
  AK::FreeHook(this);
  return;
}


/* PennyGiftSelectButton::PennyGiftSelectButton() */

void __thiscall PennyGiftSelectButton::PennyGiftSelectButton(PennyGiftSelectButton *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069e85f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e8910;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftSelectButton::InitView(PennyGiftSelectLine*, int) */

void __thiscall
PennyGiftSelectButton::InitView
          (PennyGiftSelectButton *this,PennyGiftSelectLine *param_1,int param_2)

{
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  string asStack_18 [16];
  long local_8;
  
  *(PennyGiftSelectLine **)(this + 0xf0) = param_1;
  this[0xe8] = (PennyGiftSelectButton)0x1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = param_2;
  this[0xe9] = (PennyGiftSelectButton)0x0;
  std::string::string(asStack_18,"IMAGE_UI_GENERIC_GRAY_TRANSPARENT_BG");
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  lVar2 = *(long *)this;
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar2 + 0x60))(this,this_00);
  TodStringTranslate(L"[LUCKBAG_SELECT]");
  this_01 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_01,(wstring *)asStack_18);
  FUN_05476c50(asStack_18);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  FUN_04e76c78(this_01 + 0xe8,uVar1);
  FUN_04e76c80(this_01 + 0xe0,5);
  pcVar3 = *(code **)(*(long *)this_01 + 0x170);
  Sexy::Color::Color((Color *)asStack_18,1);
  (*pcVar3)(this_01,0,asStack_18);
  lVar2 = *(long *)this_00;
  this_01[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar2 + 0x60))(this_00,this_01);
  lVar2 = *(long *)this_00;
  *(UIWidgetImage **)(this + 0xf8) = this_00;
  (**(code **)(lVar2 + 0x158))(this_00,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftSelectButton::SetSelect() */

void __thiscall PennyGiftSelectButton::SetSelect(PennyGiftSelectButton *this)

{
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),(byte)this[0xe9] ^ 1);
  this[0xe9] = (PennyGiftSelectButton)((byte)this[0xe9] ^ 1);
  return;
}


/* PennyGiftSelectButton::TouchEnded(Sexy::Touch const&) */

void __thiscall PennyGiftSelectButton::TouchEnded(PennyGiftSelectButton *this,Touch *param_1)

{
  PennyGiftConfig *this_00;
  
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) &&
     (this[0xe8] != (PennyGiftSelectButton)0x0)) {
    UISingletonDialog<PennyGiftConfig>::GetSingletonPtr();
    nop();
    PennyGiftConfig::DepressCheck(this_00,*(int *)(this + 0xe4));
    return;
  }
  return;
}


/* PennyGiftSelectButton::Draw(Sexy::Graphics*) */

void __thiscall PennyGiftSelectButton::Draw(PennyGiftSelectButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0148);
  iVar1 = FUN_04e790b0(0);
  Sexy::Graphics::DrawImage(param_1,pIVar2,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  nop();
  return;
}

