// Class: EA::Text::TextRun


/* EA::Text::TextRun::TextRun(char16_t const*, unsigned int) */

void __thiscall EA::Text::TextRun::TextRun(TextRun *this,wchar16 *param_1,uint param_2)

{
  *(wchar16 **)this = param_1;
  *(uint *)(this + 8) = param_2;
  return;
}

