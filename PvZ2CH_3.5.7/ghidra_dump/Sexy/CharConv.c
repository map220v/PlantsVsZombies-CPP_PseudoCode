// Class: Sexy::CharConv<char>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CharConv<char>::Str(char const*) */

void __thiscall Sexy::CharConv<char>::Str(CharConv<char> *this,char *param_1)

{
  long lVar1;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  nop();
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::CharConv<wchar_t>::Char(char) */

char Sexy::CharConv<wchar_t>::Char(char param_1)

{
  return param_1;
}


/* Sexy::CharConv<wchar_t>::Str(char const*) */

void Sexy::CharConv<wchar_t>::Str(char *param_1)

{
  char *in_x1;
  
  CharToWCharFunc::Str((CharToWCharFunc *)param_1,in_x1);
  return;
}

