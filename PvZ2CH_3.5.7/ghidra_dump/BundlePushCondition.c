// Class: BundlePushCondition


/* BundlePushCondition::BundlePushCondition(BundlePushCondition&&) */

void __thiscall
BundlePushCondition::BundlePushCondition(BundlePushCondition *this,BundlePushCondition *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundlePushCondition::BundlePushCondition() */

void __thiscall BundlePushCondition::BundlePushCondition(BundlePushCondition *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

