// Class: EA::Text::TextStyle


/* EA::Text::TextStyle::TextStyle() */

void __thiscall EA::Text::TextStyle::TextStyle(TextStyle *this)

{
  FontStyle::FontStyle((FontStyle *)this);
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x268) = 0xffffffff;
  *(undefined4 *)(this + 0x270) = 0xffffffff;
  *(undefined4 *)(this + 0x274) = 0xffffffff;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x27c) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 4;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x2a4) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined2 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2ac) = 0x3f800000;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  return;
}


/* EA::Text::TextStyle::TEMPNAMEPLACEHOLDERVALUE(EA::Text::TextStyle const&) */

TextStyle * __thiscall EA::Text::TextStyle::operator=(TextStyle *this,TextStyle *param_1)

{
  if (this != param_1) {
    memcpy(this,param_1,700);
  }
  return this;
}


/* EA::Text::TextStyle::TextStyle(EA::Text::TextStyle const&) */

TextStyle * __thiscall EA::Text::TextStyle::TextStyle(TextStyle *this,TextStyle *param_1)

{
  if (this != param_1) {
    memcpy(this,param_1,700);
  }
  return this;
}

