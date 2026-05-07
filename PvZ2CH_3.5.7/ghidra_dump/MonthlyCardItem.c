// Class: MonthlyCardItem


/* MonthlyCardItem::~MonthlyCardItem() */

void __thiscall MonthlyCardItem::~MonthlyCardItem(MonthlyCardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06974cb0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* MonthlyCardItem::~MonthlyCardItem() */

void __thiscall MonthlyCardItem::~MonthlyCardItem(MonthlyCardItem *this)

{
  ~MonthlyCardItem(this);
  AK::FreeHook(this);
  return;
}


/* MonthlyCardItem::MonthlyCardItem() */

void __thiscall MonthlyCardItem::MonthlyCardItem(MonthlyCardItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06974cb0;
  FUN_05476574(this + 0xd8);
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardItem::Draw(Sexy::Graphics*) */

void __thiscall MonthlyCardItem::Draw(MonthlyCardItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b89220;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b89308;
  }
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  iVar1 = FUN_04ba1e78(10);
  iVar2 = FUN_04ba1e78(0xfffffffd);
  iVar3 = FUN_04ba1e78(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar4 = PrimeText_Game::Typeface_FZCuYuan_24;
  Sexy::Color::Color((Color *)aIStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar4,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

