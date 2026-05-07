// Class: SecretAwardInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretAwardInfo::SecretAwardInfo() */

void __thiscall SecretAwardInfo::SecretAwardInfo(SecretAwardInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

