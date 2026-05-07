// Class: Sexy::EditListener


/* Sexy::EditListener::EditWidgetText(int, std::wstring const&) */

int Sexy::EditListener::EditWidgetText(int param_1,wstring *param_2)

{
  return param_1;
}


/* Sexy::EditListener::AllowKey(int, Sexy::KeyCode) */

undefined8 Sexy::EditListener::AllowKey(void)

{
  return 1;
}


/* Sexy::EditListener::AllowChar(int, wchar_t) */

undefined1  [16] Sexy::EditListener::AllowChar(int param_1,wchar_t param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 1;
  return auVar1;
}


/* Sexy::EditListener::AllowText(int, std::wstring const&) */

undefined8 Sexy::EditListener::AllowText(int param_1,wstring *param_2)

{
  return 1;
}


/* Sexy::EditListener::EditListener() */

void __thiscall Sexy::EditListener::EditListener(EditListener *this)

{
  *(undefined ***)this = &PTR_EditWidgetText_0665efe0;
  return;
}

