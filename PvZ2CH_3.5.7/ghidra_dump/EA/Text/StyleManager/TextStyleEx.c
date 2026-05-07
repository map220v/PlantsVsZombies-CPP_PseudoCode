// Class: EA::Text::StyleManager::TextStyleEx


/* EA::Text::StyleManager::TextStyleEx::TextStyleEx(EA::Text::TextStyle const&) */

void __thiscall
EA::Text::StyleManager::TextStyleEx::TextStyleEx(TextStyleEx *this,TextStyle *param_1)

{
  TextStyle::TextStyle((TextStyle *)this);
  *(undefined4 *)(this + 700) = 0;
  TextStyle::operator=((TextStyle *)this,param_1);
  return;
}

