// Class: GameTimeTravelPanel


/* GameTimeTravelPanel::~GameTimeTravelPanel() */

void __thiscall GameTimeTravelPanel::~GameTimeTravelPanel(GameTimeTravelPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06723ee0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GameTimeTravelPanel::~GameTimeTravelPanel() */

void __thiscall GameTimeTravelPanel::~GameTimeTravelPanel(GameTimeTravelPanel *this)

{
  ~GameTimeTravelPanel(this);
  AK::FreeHook(this);
  return;
}


/* GameTimeTravelPanel::GameTimeTravelPanel() */

void __thiscall GameTimeTravelPanel::GameTimeTravelPanel(GameTimeTravelPanel *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06723ee0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameTimeTravelPanel::Draw(Sexy::Graphics*) */

void __thiscall GameTimeTravelPanel::Draw(GameTimeTravelPanel *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = *(int *)(this + 0xd4);
  iVar2 = *(int *)(this + 0x50);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9390);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,iVar2,*(int *)(lVar6 + 0x3c));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac9390);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac95d8);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac95d8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(this + 0xd4);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac95d8);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar5 = FUN_03aef104(6);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar1 - iVar3) / 2,(iVar2 - iVar4) + iVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

