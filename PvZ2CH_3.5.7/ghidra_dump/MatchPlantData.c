// Class: MatchPlantData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MatchPlantData::MatchPlantData() */

void __thiscall MatchPlantData::MatchPlantData(MatchPlantData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 8),"sunflower");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

