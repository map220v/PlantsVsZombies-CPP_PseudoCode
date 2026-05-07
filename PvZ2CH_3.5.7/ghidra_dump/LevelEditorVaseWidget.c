// Class: LevelEditorVaseWidget


/* LevelEditorVaseWidget::~LevelEditorVaseWidget() */

void __thiscall LevelEditorVaseWidget::~LevelEditorVaseWidget(LevelEditorVaseWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0696d560;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorVaseWidget::~LevelEditorVaseWidget() */

void __thiscall LevelEditorVaseWidget::~LevelEditorVaseWidget(LevelEditorVaseWidget *this)

{
  ~LevelEditorVaseWidget(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorVaseWidget::LevelEditorVaseWidget() */

void __thiscall LevelEditorVaseWidget::LevelEditorVaseWidget(LevelEditorVaseWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_0696d560;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseWidget::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorVaseWidget::Draw(LevelEditorVaseWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b868d8);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b868d8);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b868d8);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

