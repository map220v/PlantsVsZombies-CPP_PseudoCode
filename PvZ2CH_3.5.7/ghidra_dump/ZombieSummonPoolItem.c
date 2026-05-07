// Class: ZombieSummonPoolItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSummonPoolItem::ZombieSummonPoolItem() */

void __thiscall ZombieSummonPoolItem::ZombieSummonPoolItem(ZombieSummonPoolItem *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 100;
  Sexy::Insets::Insets((Insets *)(this + 4),0,0,9,5);
  std::string::string((string *)(this + 0x18),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSummonPoolItem::ZombieSummonPoolItem(ZombieSummonPoolItem const&) */

void __thiscall
ZombieSummonPoolItem::ZombieSummonPoolItem(ZombieSummonPoolItem *this,ZombieSummonPoolItem *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Insets::Insets((Insets *)(this + 4),(Insets *)(param_1 + 4));
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}

