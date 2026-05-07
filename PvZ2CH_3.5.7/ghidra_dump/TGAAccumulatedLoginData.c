// Class: TGAAccumulatedLoginData


/* TGAAccumulatedLoginData::~TGAAccumulatedLoginData() */

void __thiscall TGAAccumulatedLoginData::~TGAAccumulatedLoginData(TGAAccumulatedLoginData *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGAAccumulatedLoginData::TGAAccumulatedLoginData() */

void __thiscall TGAAccumulatedLoginData::TGAAccumulatedLoginData(TGAAccumulatedLoginData *this)

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
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

