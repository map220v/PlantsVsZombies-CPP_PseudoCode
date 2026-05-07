// Class: WorldLevelPackageBonusWidget


/* WorldLevelPackageBonusWidget::Resize(int, int, int, int) */

void __thiscall
WorldLevelPackageBonusWidget::Resize
          (WorldLevelPackageBonusWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_4,param_4);
  }
  return;
}


/* WorldLevelPackageBonusWidget::~WorldLevelPackageBonusWidget() */

void __thiscall
WorldLevelPackageBonusWidget::~WorldLevelPackageBonusWidget(WorldLevelPackageBonusWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06868440;
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WorldLevelPackageBonusWidget::~WorldLevelPackageBonusWidget() */

void __thiscall
WorldLevelPackageBonusWidget::~WorldLevelPackageBonusWidget(WorldLevelPackageBonusWidget *this)

{
  ~WorldLevelPackageBonusWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageBonusWidget::InitView() */

void __thiscall WorldLevelPackageBonusWidget::InitView(WorldLevelPackageBonusWidget *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xd8) != 0) {
    (**(code **)(*(long *)this + 0x60))();
  }
  Sexy::StrFormat(L"%d",auStack_10,(ulong)*(uint *)(this + 0xe4));
  FUN_054766c8(this + 0xe8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldLevelPackageBonusWidget::WorldLevelPackageBonusWidget(int, int) */

void __thiscall
WorldLevelPackageBonusWidget::WorldLevelPackageBonusWidget
          (WorldLevelPackageBonusWidget *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06868440;
  FUN_05476574(this + 0xe8);
  uVar1 = UIRewardFrame::CreateUIRewardFrame(param_1,0,false);
  *(int *)(this + 0xe4) = param_2;
  *(undefined8 *)(this + 0xd8) = uVar1;
  *(int *)(this + 0xe0) = param_1;
  this[0x59] = (WorldLevelPackageBonusWidget)0x0;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldLevelPackageBonusWidget::Draw(Sexy::Graphics*) */

void __thiscall
WorldLevelPackageBonusWidget::Draw(WorldLevelPackageBonusWidget *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0x54);
  Sexy::Insets::Insets(aIStack_28,iVar1,0,*(int *)(this + 0x50) - iVar1,iVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar2,aCStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

