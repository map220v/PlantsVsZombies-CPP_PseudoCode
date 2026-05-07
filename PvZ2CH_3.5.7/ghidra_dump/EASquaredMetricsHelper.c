// Class: EASquaredMetricsHelper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredMetricsHelper::GetButtonSource() */

void __thiscall EASquaredMetricsHelper::GetButtonSource(EASquaredMetricsHelper *this)

{
  long lVar1;
  long lVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  if (lVar2 == 0) {
    std::string::string(in_x8,"EA2Unknown");
    nop();
  }
  else {
    lVar2 = FUN_04bf6d60(*(undefined8 *)(lVar2 + 0x2b0));
    if (*(char *)(lVar2 + 0x7c) == '\0') {
      std::string::string(in_x8,"EA2World");
      nop();
    }
    else {
      std::string::string(in_x8,"EA2Universe");
      nop();
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

