// Class: UIProperty


/* UIProperty::~UIProperty() */

void __thiscall UIProperty::~UIProperty(UIProperty *this)

{
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0696d8a0;
  *(undefined8 *)(this + 0xe8) = 0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIProperty::~UIProperty() */

void __thiscall UIProperty::~UIProperty(UIProperty *this)

{
  ~UIProperty(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProperty::Draw(Sexy::Graphics*) */

void __thiscall UIProperty::Draw(UIProperty *this,Graphics *param_1)

{
  long lVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0xaa,0xaa,0xaa,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::DrawRect(param_1,0,0,*(int *)(this + 0x50) + -1,*(int *)(this + 0x54) + -1);
  if ((this[0xf0] != (UIProperty)0x0) && (*(long *)(this + 0xe8) != 0)) {
    Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    lVar1 = *(long *)(this + 0xe8);
    Sexy::Graphics::DrawRect
              (param_1,*(int *)(lVar1 + 0x48),*(int *)(lVar1 + 0x4c),*(int *)(lVar1 + 0x50) + -1,
               *(int *)(lVar1 + 0x54) + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProperty::OnCreate(int, std::string const&, std::string const&, Sexy::EditListener*) */

void __thiscall
UIProperty::OnCreate
          (UIProperty *this,int param_1,string *param_2,string *param_3,EditListener *param_4)

{
  undefined4 uVar1;
  UIWidgetText *this_00;
  undefined8 uVar2;
  EditWidget *this_01;
  string *extraout_x1;
  string *psVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04b6aebc(200);
  *(undefined4 *)(this + 0x50) = uVar1;
  uVar1 = FUN_04b6aebc(0x28);
  *(undefined4 *)(this + 0x54) = uVar1;
  Sexy::ToSexyString((Sexy *)param_2,extraout_x1);
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,awStack_10);
  *(UIWidgetText **)(this + 0xe0) = this_00;
  FUN_05476c50(awStack_10);
  lVar5 = *(long *)(this + 0xe0);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_04b6ae2c(lVar5 + 0xe8,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_01 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(this_01,param_1,param_4);
  psVar3 = *(string **)this_01;
  *(EditWidget **)(this + 0xd8) = this_01;
  pcVar6 = *(code **)(psVar3 + 0x340);
  Sexy::ToSexyString((Sexy *)param_3,psVar3);
  (*pcVar6)(this_01,awStack_10,1);
  FUN_05476c50(awStack_10);
  plVar4 = *(long **)(this + 0xd8);
  pcVar6 = *(code **)(*plVar4 + 0x330);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar6)(plVar4,uVar2,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIProperty::UIProperty() */

void __thiscall UIProperty::UIProperty(UIProperty *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0696d8a0;
  this[0xf0] = (UIProperty)0x0;
  return;
}


/* UIProperty::GetName() */

void UIProperty::GetName(void)

{
  long in_x0;
  Sexy *this;
  bool *in_x2;
  
  this = (Sexy *)UIWidgetImage::GetPVZ2Image(*(UIWidgetImage **)(in_x0 + 0xe0));
  Sexy::WStringToString(this,(wstring *)0x0,in_x2);
  return;
}


/* UIProperty::GetID() */

undefined4 __thiscall UIProperty::GetID(UIProperty *this)

{
  return *(undefined4 *)(*(long *)(this + 0xd8) + 0xe0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProperty::SetValue(std::string const&) */

void __thiscall UIProperty::SetValue(UIProperty *this,string *param_1)

{
  string *psVar1;
  string *extraout_x1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  puVar3 = *(undefined8 **)(this + 0xd8);
  psVar1 = (string *)*puVar3;
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(psVar1 + 0x340);
  Sexy::ToSexyString((Sexy *)param_1,psVar1);
  (*pcVar4)(puVar3,auStack_10,1);
  FUN_05476c50(auStack_10);
  if ((this[0xf0] != (UIProperty)0x0) && (lVar2 = *(long *)(this + 0xe8), lVar2 != 0)) {
    Sexy::ToSexyString((Sexy *)param_1,extraout_x1);
    PuzzleTip::SetTip(lVar2,auStack_10);
    FUN_05476c50(auStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIProperty::GetValue() */

void UIProperty::GetValue(void)

{
  long in_x0;
  bool *in_x2;
  
  Sexy::WStringToString((Sexy *)(*(long *)(in_x0 + 0xd8) + 0xe8),(wstring *)0x0,in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProperty::SetReadOnly(bool) */

void __thiscall UIProperty::SetReadOnly(UIProperty *this,bool param_1)

{
  long *plVar1;
  UIWidgetText *this_00;
  long lVar2;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xf0] != (UIProperty)param_1) {
    plVar1 = *(long **)(this + 0xe8);
    if (plVar1 == (long *)0x0) {
      FUN_05478178(awStack_10,&DAT_056f11a8,auStack_18);
      this_00 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(this_00,awStack_10);
      *(UIWidgetText **)(this + 0xe8) = this_00;
      FUN_05476c50(awStack_10);
      nop();
      FUN_04b6ae2c(*(long *)(this + 0xe8) + 0xe8,*(undefined8 *)(*(long *)(this + 0xd8) + 0x108));
      lVar2 = *(long *)(this + 0xd8);
      (**(code **)(**(long **)(this + 0xe8) + 0x198))
                (*(long **)(this + 0xe8),*(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c)
                 ,*(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x54));
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
      plVar1 = *(long **)(this + 0xe8);
    }
    this[0xf0] = (UIProperty)param_1;
    if (param_1) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
      (**(code **)(**(long **)(this + 0xd8) + 0x158))(*(long **)(this + 0xd8),0);
      PuzzleTip::SetTip(*(undefined8 *)(this + 0xe8),*(long *)(this + 0xd8) + 0xe8);
    }
    else {
      (**(code **)(*plVar1 + 0x158))(plVar1,0);
      (**(code **)(**(long **)(this + 0xd8) + 0x158))(*(long **)(this + 0xd8),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIProperty::Resize(int, int, int, int) */

void __thiscall UIProperty::Resize(UIProperty *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xe0);
  fVar2 = (float)param_3 - 4.0;
  fVar3 = fVar2 * 0.3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,2,2,(int)fVar3,param_4);
  }
  plVar1 = *(long **)(this + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,(int)(fVar3 + 2.0),2,(int)(fVar2 - fVar3),(int)((float)param_4 - 4.0));
  }
  plVar1 = *(long **)(this + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,(int)(fVar3 + 2.0),2,(int)(fVar2 - fVar3),(int)((float)param_4 - 4.0));
  }
  return;
}

