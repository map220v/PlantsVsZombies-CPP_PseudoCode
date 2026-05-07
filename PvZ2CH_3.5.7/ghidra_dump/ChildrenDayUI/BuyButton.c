// Class: ChildrenDayUI::BuyButton


/* ChildrenDayUI::BuyButton::~BuyButton() */

void __thiscall ChildrenDayUI::BuyButton::~BuyButton(BuyButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0693d890;
  *(undefined ***)(this + 0x198) = &PTR__BuyButton_0693dbe8;
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to ChildrenDayUI::BuyButton::~BuyButton() */

void __thiscall ChildrenDayUI::BuyButton::~BuyButton(BuyButton *this)

{
  ~BuyButton(this + -0x198);
  return;
}


/* ChildrenDayUI::BuyButton::~BuyButton() */

void __thiscall ChildrenDayUI::BuyButton::~BuyButton(BuyButton *this)

{
  ~BuyButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChildrenDayUI::BuyButton::~BuyButton() */

void __thiscall ChildrenDayUI::BuyButton::~BuyButton(BuyButton *this)

{
  ~BuyButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::BuyButton::TouchBegan(Sexy::Touch const&) */

void __thiscall ChildrenDayUI::BuyButton::TouchBegan(BuyButton *this,Touch *param_1)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1a8] == (BuyButton)0x0) && (*(long *)(this + 0x2b0) == 0)) {
    lVar1 = **(long **)(this + 0x168);
    *(undefined8 *)(this + 0x2b0) = *(undefined8 *)param_1;
    this[0x2b8] = (BuyButton)0x1;
    (**(code **)(lVar1 + 8))(*(long **)(this + 0x168),*(undefined4 *)(this + 0xd4),1);
    std::string::string(asStack_10,"pressed");
    EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(this + 0x300),asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::BuyButton::TouchEnded(Sexy::Touch const&) */

void __thiscall ChildrenDayUI::BuyButton::TouchEnded(BuyButton *this,Touch *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1a8] == (BuyButton)0x0) && (*(long *)(this + 0x2b0) == *(long *)param_1)) {
    if (this[0x2b8] != (BuyButton)0x0) {
      if ((this[0x71] != (BuyButton)0x0) && (*(int *)(this + 0x1ac) == 1)) {
        PVZ2UIButton::SetRadioButtonSelected((PVZ2UIButton *)this);
      }
      (**(code **)(**(long **)(this + 0x168) + 0x10))
                (*(long **)(this + 0x168),*(undefined4 *)(this + 0xd4));
      std::string::string(asStack_10,"back");
      EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(this + 0x300),asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    *(undefined8 *)(this + 0x2b0) = 0;
    this[0x2b8] = (BuyButton)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::BuyButton::BuyButton(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color
   const&) */

void __thiscall
ChildrenDayUI::BuyButton::BuyButton
          (BuyButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4)

{
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_0693d890;
  *(undefined ***)(this + 0x198) = &PTR__BuyButton_0693dbe8;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x300));
  std::string::string(asStack_18,"POPANIM_EFFECTS_CHILDRENDAY_BUY");
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  EffectAnim_UIAnim::InitUIAnim
            (0x3f70a3d7,local_10,local_c,(EffectAnim_UIAnim *)(this + 0x300),asStack_18,1);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::BuyButton::PlaySelect() */

void __thiscall ChildrenDayUI::BuyButton::PlaySelect(BuyButton *this)

{
  PopAnimRig *this_00;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"selected");
  EffectAnim_UIAnim::PlayOnce((EffectAnim_UIAnim *)(this + 0x300),asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PopAnimRig *)EffectAnim_UIAnim::GetPopAnimRig((EffectAnim_UIAnim *)(this + 0x300));
  std::string::string(asStack_10,"selected");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PVZ2UIButton::SetDelayDisabled((PVZ2UIButton *)this,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChildrenDayUI::BuyButton::Resize(int, int, int, int) */

void __thiscall
ChildrenDayUI::BuyButton::Resize(BuyButton *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *this_00;
  FastCurve aFStack_18 [8];
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Resize((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_04a7adc0(0);
  iVar2 = FUN_04a7adc0(0xffffffdd);
  Sexy::FastCurve::SetOutRange(aFStack_18,(float)iVar1,(float)iVar2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)(param_3 / 2),(float)(param_4 / 2));
  Sexy::TPoint<float>::operator+=((TPoint<float> *)aFStack_10,(TPoint *)aFStack_18);
  this_00 = (StandaloneEffect *)
            Sexy::AndroidHttpTransaction::GetUserData((AndroidHttpTransaction *)(this + 0x300));
  StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_10,900000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChildrenDayUI::BuyButton::Draw(Sexy::Graphics*) */

void __thiscall ChildrenDayUI::BuyButton::Draw(BuyButton *this,Graphics *param_1)

{
  char cVar1;
  
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x300));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x300),param_1);
  return;
}


/* ChildrenDayUI::BuyButton::Update() */

void __thiscall ChildrenDayUI::BuyButton::Update(BuyButton *this)

{
  char cVar1;
  
  PVZ2UIButton::Update((PVZ2UIButton *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x300));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x300));
  return;
}

