// Class: PlantSalesUiReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSalesUiReward::PlantSalesUiReward() */

void __thiscall PlantSalesUiReward::PlantSalesUiReward(PlantSalesUiReward *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  *(undefined4 *)(this + 8) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

