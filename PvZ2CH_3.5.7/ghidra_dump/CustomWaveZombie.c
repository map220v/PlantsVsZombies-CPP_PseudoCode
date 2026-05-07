// Class: CustomWaveZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomWaveZombie::CustomWaveZombie() */

void __thiscall CustomWaveZombie::CustomWaveZombie(CustomWaveZombie *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

