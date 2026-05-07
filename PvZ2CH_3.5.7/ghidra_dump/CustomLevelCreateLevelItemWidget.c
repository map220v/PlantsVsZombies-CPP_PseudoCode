// Class: CustomLevelCreateLevelItemWidget


/* CustomLevelCreateLevelItemWidget::~CustomLevelCreateLevelItemWidget() */

void __thiscall
CustomLevelCreateLevelItemWidget::~CustomLevelCreateLevelItemWidget
          (CustomLevelCreateLevelItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06662b40;
  FUN_05476c50(this + 0x2c8);
  CustomLevelItemWidget::~CustomLevelItemWidget((CustomLevelItemWidget *)this);
  return;
}


/* CustomLevelCreateLevelItemWidget::~CustomLevelCreateLevelItemWidget() */

void __thiscall
CustomLevelCreateLevelItemWidget::~CustomLevelCreateLevelItemWidget
          (CustomLevelCreateLevelItemWidget *this)

{
  ~CustomLevelCreateLevelItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelCreateLevelItemWidget::Draw(CustomLevelCreateLevelItemWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe0) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe8));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1b0,this + 0x1b8,uVar1,aIStack_18,5,1);
  if (*(Image **)(this + 0xf8) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf8),*(int *)(this + 0x100),*(int *)(this + 0x104),
               *(int *)(this + 0x108),*(int *)(this + 0x10c));
  }
  if (*(Image **)(this + 0x2b0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x2b0),*(int *)(this + 0x2b8),*(int *)(this + 700),
               *(int *)(this + 0x2c0),*(int *)(this + 0x2c4));
  }
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x2c8,this + 0x2d0,uVar1,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelCreateLevelItemWidget::CustomLevelCreateLevelItemWidget(int) */

void __thiscall
CustomLevelCreateLevelItemWidget::CustomLevelCreateLevelItemWidget
          (CustomLevelCreateLevelItemWidget *this,int param_1)

{
  CustomLevelItemWidget::CustomLevelItemWidget((CustomLevelItemWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_06662b40;
  Sexy::Insets::Insets((Insets *)(this + 0x2b8));
  FUN_05476574(this + 0x2c8);
  Sexy::Insets::Insets((Insets *)(this + 0x2d0));
  this[0x2a9] = (CustomLevelCreateLevelItemWidget)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2ac) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelItemWidget::InitView(bool) */

void CustomLevelCreateLevelItemWidget::InitView(bool param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar1 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  CustomLevelItemWidget::InitView(param_1);
  if (*(char *)(uVar1 + 0x2a9) == '\0') {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa8030);
    *(undefined8 *)(uVar1 + 0x2b0) = uVar2;
  }
  else {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7e60);
    *(undefined8 *)(uVar1 + 0x2b0) = uVar2;
  }
  *(undefined8 *)(uVar1 + 0x2b8) = *(undefined8 *)(uVar1 + 0x118);
  *(undefined8 *)(uVar1 + 0x2c0) = *(undefined8 *)(uVar1 + 0x120);
  Sexy::StrFormat("[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]",asStack_18,(ulong)*(uint *)(uVar1 + 0x2ac));
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(uVar1 + 0x2c8,auStack_10);
  FUN_05476c50(auStack_10);
  *(undefined8 *)(uVar1 + 0x2d0) = *(undefined8 *)(uVar1 + 0x200);
  *(undefined8 *)(uVar1 + 0x2d8) = *(undefined8 *)(uVar1 + 0x208);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

