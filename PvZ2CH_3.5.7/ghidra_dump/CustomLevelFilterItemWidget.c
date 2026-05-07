// Class: CustomLevelFilterItemWidget


/* CustomLevelFilterItemWidget::SetClickFunc(Sexy::Delegate1<int>) */

void __thiscall
CustomLevelFilterItemWidget::SetClickFunc(CustomLevelFilterItemWidget *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x340),param_2);
  return;
}


/* CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget() */

void __thiscall
CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget(CustomLevelFilterItemWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06664bd0;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelFilterItemWidget_06664f38;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06664f60;
  FUN_05476c50(this + 0x328);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget() */

void __thiscall
CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget(CustomLevelFilterItemWidget *this)

{
  ~CustomLevelFilterItemWidget(this + -0x198);
  return;
}


/* CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget() */

void __thiscall
CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget(CustomLevelFilterItemWidget *this)

{
  ~CustomLevelFilterItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget() */

void __thiscall
CustomLevelFilterItemWidget::~CustomLevelFilterItemWidget(CustomLevelFilterItemWidget *this)

{
  ~CustomLevelFilterItemWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelFilterItemWidget::CustomLevelFilterItemWidget(int) */

void __thiscall
CustomLevelFilterItemWidget::CustomLevelFilterItemWidget
          (CustomLevelFilterItemWidget *this,int param_1)

{
  long lVar1;
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06664bd0;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelFilterItemWidget_06664f38;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06664f60;
  FUN_05476574(this + 0x328);
  Sexy::Insets::Insets((Insets *)(this + 0x330));
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x340));
  *(undefined4 *)(this + 0x308) = 0;
  this[800] = (CustomLevelFilterItemWidget)0x0;
  FUN_054772c4(this + 0x328,&DAT_056f11a8);
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x340),(Delegate2 *)aDStack_38);
  *(undefined8 *)(this + 0x310) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x318) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelFilterItemWidget::ButtonDepress(int) */

void __thiscall
CustomLevelFilterItemWidget::ButtonDepress(CustomLevelFilterItemWidget *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(this + 0xd4);
  if (uVar1 != param_1) {
    return;
  }
  iVar2 = FUN_035e5c44(*(undefined8 *)(this + 0x348),*(undefined8 *)(this + 0x358));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x340),(SexyURL *)(ulong)uVar1);
  }
  this[800] = (CustomLevelFilterItemWidget)((byte)this[800] ^ 1);
  return;
}


/* non-virtual thunk to CustomLevelFilterItemWidget::ButtonDepress(int) */

void __thiscall
CustomLevelFilterItemWidget::ButtonDepress(CustomLevelFilterItemWidget *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* CustomLevelFilterItemWidget::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelFilterItemWidget::Draw(CustomLevelFilterItemWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  
  if (*(Image **)(this + 0x310) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x310),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[800] == (CustomLevelFilterItemWidget)0x0) {
    return;
  }
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7c70);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar1 = *(int *)(this + 0x50);
  iVar2 = *(int *)(this + 0x54);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(iVar1 - (int)((float)iVar3 * 0.7)) / 2,
             (iVar2 - (int)((float)iVar4 * 0.7)) / 2,(int)((float)iVar3 * 0.7),
             (int)((float)iVar4 * 0.7));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelFilterItemWidget::InitView() */

void __thiscall CustomLevelFilterItemWidget::InitView(CustomLevelFilterItemWidget *this)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7fd8);
  *(undefined8 *)(this + 0x318) = uVar2;
  if (*(int *)(this + 0xd4) < 0xc1c) {
    Sexy::StrFormat("IMAGE_UI_CUSTOM_LEVEL_WORLD_%d",asStack_28,(ulong)*(uint *)(this + 0x308));
    uVar2 = StringHelper::ToImage(asStack_28,false);
    *(undefined8 *)(this + 0x310) = uVar2;
    uVar1 = *(uint *)(this + 0x308);
    pcVar3 = "[CUSTOM_LEVEL_WORLD_TYPE_%d]";
  }
  else {
    Sexy::StrFormat("IMAGE_UI_CUSTOM_LEVEL_LEVELMODE_%d",asStack_28,(ulong)*(uint *)(this + 0x308));
    uVar2 = StringHelper::ToImage(asStack_28,false);
    *(undefined8 *)(this + 0x310) = uVar2;
    uVar1 = *(uint *)(this + 0x308);
    pcVar3 = "[CUSTOM_LEVEL_LEVEL_MODE_TYPE_%d]";
  }
  Sexy::StrFormat(pcVar3,asStack_20,(ulong)uVar1);
  StringHelper::ToStringValue(asStack_20);
  FUN_054766c8(this + 0x328,(Insets *)&local_18);
  FUN_05476c50((Insets *)&local_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,(*(int *)(this + 0x54) / 3) * 2,*(int *)(this + 0x50),
             *(int *)(this + 0x54) / 3);
  *(undefined8 *)(this + 0x330) = local_18;
  *(undefined8 *)(this + 0x338) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

