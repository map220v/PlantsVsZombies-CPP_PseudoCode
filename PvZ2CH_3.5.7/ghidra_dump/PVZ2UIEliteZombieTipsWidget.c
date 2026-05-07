// Class: PVZ2UIEliteZombieTipsWidget


/* PVZ2UIEliteZombieTipsWidget::~PVZ2UIEliteZombieTipsWidget() */

void __thiscall
PVZ2UIEliteZombieTipsWidget::~PVZ2UIEliteZombieTipsWidget(PVZ2UIEliteZombieTipsWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_068387c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIEliteZombieTipsWidget::~PVZ2UIEliteZombieTipsWidget() */

void __thiscall
PVZ2UIEliteZombieTipsWidget::~PVZ2UIEliteZombieTipsWidget(PVZ2UIEliteZombieTipsWidget *this)

{
  ~PVZ2UIEliteZombieTipsWidget(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIEliteZombieTipsWidget::PVZ2UIEliteZombieTipsWidget(std::wstring, std::wstring) */

void __thiscall
PVZ2UIEliteZombieTipsWidget::PVZ2UIEliteZombieTipsWidget
          (PVZ2UIEliteZombieTipsWidget *this,undefined8 param_2,undefined8 param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_068387c0;
  FUN_05477b24(this + 0xd8,param_2);
  FUN_05477b24(this + 0xe0,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIEliteZombieTipsWidget::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIEliteZombieTipsWidget::Draw(PVZ2UIEliteZombieTipsWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     AlmanacStatSettings::IMAGE_UI_GENERIC_TIPSFRAME);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  iVar5 = local_38;
  iVar1 = FUN_043772fc(5);
  iVar6 = local_30;
  iVar4 = iVar1 + local_34;
  iVar2 = FUN_043772fc(10);
  iVar3 = FUN_043772fc(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar5 + iVar1,iVar4,iVar6 - iVar2,iVar3);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar7,aIStack_18,3,1);
  iVar4 = FUN_043772fc(5);
  iVar5 = FUN_043772fc(0x23);
  iVar6 = FUN_043772fc(10);
  iVar1 = FUN_043772fc(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,local_38 + iVar4,local_34 + iVar5,local_30 - iVar6,local_2c - iVar1);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar7,aIStack_18,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

