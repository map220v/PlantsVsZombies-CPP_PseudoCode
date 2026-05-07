// Class: FirstRechargeExtraDayWidget


/* FirstRechargeExtraDayWidget::SetFrameEnable(bool) */

void __thiscall
FirstRechargeExtraDayWidget::SetFrameEnable(FirstRechargeExtraDayWidget *this,bool param_1)

{
  this[0xf0] = (FirstRechargeExtraDayWidget)param_1;
  return;
}


/* FirstRechargeExtraDayWidget::~FirstRechargeExtraDayWidget() */

void __thiscall
FirstRechargeExtraDayWidget::~FirstRechargeExtraDayWidget(FirstRechargeExtraDayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069beec0;
  FUN_05476c50(this + 0x100);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* FirstRechargeExtraDayWidget::~FirstRechargeExtraDayWidget() */

void __thiscall
FirstRechargeExtraDayWidget::~FirstRechargeExtraDayWidget(FirstRechargeExtraDayWidget *this)

{
  ~FirstRechargeExtraDayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraDayWidget::FirstRechargeExtraDayWidget(int, int) */

void __thiscall
FirstRechargeExtraDayWidget::FirstRechargeExtraDayWidget
          (FirstRechargeExtraDayWidget *this,int param_1,int param_2)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069beec0;
  FUN_05476574(this + 0x100);
  *(int *)(this + 0xf4) = param_1;
  *(int *)(this + 0xf8) = param_2;
  Sexy::StrFormat("IMAGE_UI_RECHARGEREWARD_FIRST_RECHARGE_EXTRA_GIFT%d_%d",asStack_18,
                  (ulong)(param_2 + 1),(ulong)(uint)param_1);
  uVar1 = StringHelper::ToImage(asStack_18,false);
  *(undefined8 *)(this + 0xe0) = uVar1;
  std::string::string(asStack_10,"IMAGE_UI_RECHARGEREWARD_HASGOT");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_UI_GENERIC_SELECT_FRAME_BLUE_LIGHT");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar1;
  std::string::~string(asStack_10);
  nop();
  this[0xf0] = (FirstRechargeExtraDayWidget)0x0;
  this[0xf1] = (FirstRechargeExtraDayWidget)0x0;
  TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
  FUN_054766c8(this + 0x100,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FirstRechargeExtraDayWidget::SetHasGot(bool) */

void __thiscall
FirstRechargeExtraDayWidget::SetHasGot(FirstRechargeExtraDayWidget *this,bool param_1)

{
  this[0xf1] = (FirstRechargeExtraDayWidget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FirstRechargeExtraDayWidget::Draw(Sexy::Graphics*) */

void __thiscall
FirstRechargeExtraDayWidget::Draw(FirstRechargeExtraDayWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar6;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xe0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (this[0xf1] != (FirstRechargeExtraDayWidget)0x0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99828);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99898);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99898);
    iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b99898);
    Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar1 - iVar3) / 2,(iVar2 - iVar4) / 2,iVar3,iVar4);
  }
  if (this[0xf0] != (FirstRechargeExtraDayWidget)0x0) {
    iVar1 = FUN_04dae330(0xfffffff7);
    iVar2 = FUN_04dae330(0x12);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,iVar2 + *(int *)(this + 0x50),iVar2 + *(int *)(this + 0x54));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

