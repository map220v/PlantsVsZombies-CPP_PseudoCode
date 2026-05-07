// Class: CustomLevelCreateLevelAddItemWidget


/* CustomLevelCreateLevelAddItemWidget::~CustomLevelCreateLevelAddItemWidget() */

void __thiscall
CustomLevelCreateLevelAddItemWidget::~CustomLevelCreateLevelAddItemWidget
          (CustomLevelCreateLevelAddItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06662e70;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CustomLevelCreateLevelAddItemWidget::~CustomLevelCreateLevelAddItemWidget() */

void __thiscall
CustomLevelCreateLevelAddItemWidget::~CustomLevelCreateLevelAddItemWidget
          (CustomLevelCreateLevelAddItemWidget *this)

{
  ~CustomLevelCreateLevelAddItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelCreateLevelAddItemWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall
CustomLevelCreateLevelAddItemWidget::TouchEnded
          (CustomLevelCreateLevelAddItemWidget *this,Touch *param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) &&
     (iVar1 = FUN_035e5c44(*(undefined8 *)(this + 0xf8),*(undefined8 *)(this + 0x108)), iVar1 != 0))
  {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0xf0));
    return;
  }
  return;
}


/* CustomLevelCreateLevelAddItemWidget::RegisterTouchCallBackFunc(Sexy::Delegate0) */

void __thiscall
CustomLevelCreateLevelAddItemWidget::RegisterTouchCallBackFunc
          (CustomLevelCreateLevelAddItemWidget *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xf0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelAddItemWidget::CustomLevelCreateLevelAddItemWidget() */

void __thiscall
CustomLevelCreateLevelAddItemWidget::CustomLevelCreateLevelAddItemWidget
          (CustomLevelCreateLevelAddItemWidget *this)

{
  long lVar1;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06662e70;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0xf0),(DummyInit *)0x0);
  *(undefined8 *)(this + 0xd8) = 0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xf0),(Delegate2 *)aDStack_38);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelAddItemWidget::InitView() */

void __thiscall
CustomLevelCreateLevelAddItemWidget::InitView(CustomLevelCreateLevelAddItemWidget *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7d48);
  iVar1 = *(int *)(this + 0x54);
  *(undefined8 *)(this + 0xd8) = uVar4;
  iVar3 = FUN_035e74e0(10);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar3,iVar1 / 6,*(int *)(this + 0x50) + iVar3 * -2,
             (int)((float)iVar1 * 0.6));
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreateLevelAddItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelCreateLevelAddItemWidget::Draw
          (CustomLevelCreateLevelAddItemWidget *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Image *pIVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa81b0);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa84a0);
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,*(int *)(this + 0xe0),*(int *)(this + 0xe4),*(int *)(this + 0xe8),
             *(int *)(this + 0xec));
  pIVar3 = *(Image **)(this + 0xd8);
  if (pIVar3 != (Image *)0x0) {
    iVar1 = FUN_035e74e0(0x28);
    Sexy::Graphics::DrawImage
              (param_1,pIVar3,iVar1,iVar1,iVar1 * -2 + *(int *)(this + 0x50),
               iVar1 * -2 + *(int *)(this + 0x54));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

