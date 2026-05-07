// Class: TGAHappyVaseBreakerData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAHappyVaseBreakerData::TGAHappyVaseBreakerData() */

void __thiscall TGAHappyVaseBreakerData::TGAHappyVaseBreakerData(TGAHappyVaseBreakerData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  std::string::string((string *)(this + 0x10),"");
  nop();
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::string::string((string *)(this + 0x20),"");
  nop();
  std::string::string((string *)(this + 0x28),"");
  nop();
  Set8BytesTo0(this + 0x30);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

