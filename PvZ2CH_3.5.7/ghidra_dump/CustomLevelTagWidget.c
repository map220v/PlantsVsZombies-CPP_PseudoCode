// Class: CustomLevelTagWidget


/* CustomLevelTagWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall CustomLevelTagWidget::TouchEnded(CustomLevelTagWidget *this,Touch *param_1)

{
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this[0xd8] = (CustomLevelTagWidget)((byte)this[0xd8] ^ 1);
  return;
}


/* CustomLevelTagWidget::~CustomLevelTagWidget() */

void __thiscall CustomLevelTagWidget::~CustomLevelTagWidget(CustomLevelTagWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_067941a0;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomLevelTagWidget::~CustomLevelTagWidget() */

void __thiscall CustomLevelTagWidget::~CustomLevelTagWidget(CustomLevelTagWidget *this)

{
  ~CustomLevelTagWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelTagWidget::CustomLevelTagWidget() */

void __thiscall CustomLevelTagWidget::CustomLevelTagWidget(CustomLevelTagWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xd8] = (CustomLevelTagWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_067941a0;
  FUN_05476574(this + 0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTagWidget::SetData(int) */

void __thiscall CustomLevelTagWidget::SetData(CustomLevelTagWidget *this,int param_1)

{
  int iVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xdc) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetAppraiseTagInfo(iVar1);
  Sexy::UTF8StringToSexyString(asStack_18);
  FUN_054766c8(this + 0xe0,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelTagWidget::Draw(Sexy::Graphics*) */

void __thiscall CustomLevelTagWidget::Draw(CustomLevelTagWidget *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2388);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar1,aIStack_18,5,1);
  if (this[0xd8] != (CustomLevelTagWidget)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae2400);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

