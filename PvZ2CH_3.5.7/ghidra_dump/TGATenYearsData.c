// Class: TGATenYearsData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGATenYearsData::TGATenYearsData() */

void __thiscall TGATenYearsData::TGATenYearsData(TGATenYearsData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

