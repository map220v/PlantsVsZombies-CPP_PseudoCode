// Class: TGACarnivalData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGACarnivalData::TGACarnivalData() */

void __thiscall TGACarnivalData::TGACarnivalData(TGACarnivalData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::string::string((string *)(this + 0x28),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

