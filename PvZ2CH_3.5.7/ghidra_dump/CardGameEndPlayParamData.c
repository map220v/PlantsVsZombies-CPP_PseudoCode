// Class: CardGameEndPlayParamData


/* CardGameEndPlayParamData::CardGameEndPlayParamData(CardGameEndPlayParamData const&) */

void __thiscall
CardGameEndPlayParamData::CardGameEndPlayParamData
          (CardGameEndPlayParamData *this,CardGameEndPlayParamData *param_1)

{
  *this = (CardGameEndPlayParamData)*param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameEndPlayParamData::CardGameEndPlayParamData() */

void __thiscall CardGameEndPlayParamData::CardGameEndPlayParamData(CardGameEndPlayParamData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *this = (CardGameEndPlayParamData)0x0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  std::string::string((string *)(this + 0x18),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

