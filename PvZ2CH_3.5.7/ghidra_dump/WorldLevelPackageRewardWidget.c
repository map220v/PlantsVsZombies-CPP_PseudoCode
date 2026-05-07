// Class: WorldLevelPackageRewardWidget


/* WorldLevelPackageRewardWidget::Resize(int, int, int, int) */

void __thiscall
WorldLevelPackageRewardWidget::Resize
          (WorldLevelPackageRewardWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  PVZ2UIButton::Resize((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x310);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  return;
}


/* WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget() */

void __thiscall
WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget(WorldLevelPackageRewardWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06868ed0;
  *(undefined ***)(this + 0x198) = &PTR__WorldLevelPackageRewardWidget_06869230;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06869258;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget() */

void __thiscall
WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget(WorldLevelPackageRewardWidget *this)

{
  ~WorldLevelPackageRewardWidget(this + -0x198);
  return;
}


/* WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget() */

void __thiscall
WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget(WorldLevelPackageRewardWidget *this)

{
  ~WorldLevelPackageRewardWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget() */

void __thiscall
WorldLevelPackageRewardWidget::~WorldLevelPackageRewardWidget(WorldLevelPackageRewardWidget *this)

{
  ~WorldLevelPackageRewardWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardWidget::WorldLevelPackageRewardWidget(int, int, int) */

void __thiscall
WorldLevelPackageRewardWidget::WorldLevelPackageRewardWidget
          (WorldLevelPackageRewardWidget *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(int *)(this + 0x308) = param_1 + -2000;
  *(undefined ***)this = &PTR_GetClass_06868ed0;
  *(undefined ***)(this + 0x198) = &PTR__WorldLevelPackageRewardWidget_06869230;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06869258;
  this[0x30c] = (WorldLevelPackageRewardWidget)0x0;
  uVar2 = UIRewardFrame::CreateUIRewardFrame(param_2,param_3,true);
  this[0x59] = (WorldLevelPackageRewardWidget)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x310) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageRewardWidget::InitView() */

void __thiscall WorldLevelPackageRewardWidget::InitView(WorldLevelPackageRewardWidget *this)

{
  if (*(long *)(this + 0x310) != 0) {
    (**(code **)(*(long *)this + 0x60))();
    (**(code **)(**(long **)(this + 0x310) + 0x90))(*(long **)(this + 0x310),1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageRewardWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageRewardWidget::Draw(WorldLevelPackageRewardWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x30c] != (WorldLevelPackageRewardWidget)0x0) {
    iVar1 = FUN_045aaddc(0xfffffff8);
    iVar2 = *(int *)(this + 0x50);
    iVar3 = *(int *)(this + 0x54);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15898);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,iVar1 * -2 + iVar2,iVar1 * -2 + iVar3);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15898);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b15898);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar2,iVar3);
    Sexy::Graphics::DrawImage(param_1,pIVar4,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageRewardWidget::ButtonDepress(int) */

void __thiscall
WorldLevelPackageRewardWidget::ButtonDepress(WorldLevelPackageRewardWidget *this,int param_1)

{
  if (*(int *)(this + 0xd4) != param_1) {
    return;
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::LevelPackageSelectRewardItem,
             *(int *)(this + 0x308));
  return;
}


/* non-virtual thunk to WorldLevelPackageRewardWidget::ButtonDepress(int) */

void __thiscall
WorldLevelPackageRewardWidget::ButtonDepress(WorldLevelPackageRewardWidget *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}

