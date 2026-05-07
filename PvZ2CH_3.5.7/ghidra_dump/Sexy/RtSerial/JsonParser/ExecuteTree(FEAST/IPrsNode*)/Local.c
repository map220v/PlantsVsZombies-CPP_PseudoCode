// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local


/* UnicodeToUTF8(int) */

void __thiscall
Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::UnicodeToUTF8
          (Local *this,int param_1)

{
  int iVar1;
  
  Set8BytesTo0();
  iVar1 = (int)this;
  if (iVar1 < 0x80) {
    FUN_05475ce8();
    return;
  }
  if (0x7ff < iVar1) {
    if (0xffff < iVar1) {
      if (0x10ffff < iVar1) {
        return;
      }
      FUN_05475ce8();
    }
    FUN_05475ce8();
  }
  FUN_05475ce8();
  FUN_05475ce8();
  return;
}

