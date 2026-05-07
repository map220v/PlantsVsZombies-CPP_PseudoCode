// Class: Sexy::CharToWCharFunc


/* Sexy::CharToWCharFunc::Char(char) */

char Sexy::CharToWCharFunc::Char(char param_1)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CharToWCharFunc::Str(char const*) */

void __thiscall Sexy::CharToWCharFunc::Str(CharToWCharFunc *this,char *param_1)

{
  string *extraout_x1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,(char *)this);
  StringToWString((Sexy *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

