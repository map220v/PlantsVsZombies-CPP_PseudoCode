// Class: DefaultWaveConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefaultWaveConfig::DefaultWaveConfig() */

void __thiscall DefaultWaveConfig::DefaultWaveConfig(DefaultWaveConfig *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = 5;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DefaultWaveConfig::TEMPNAMEPLACEHOLDERVALUE(DefaultWaveConfig const&) const */

bool __thiscall DefaultWaveConfig::operator==(DefaultWaveConfig *this,DefaultWaveConfig *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = std::operator==((string *)param_1,(string *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(param_1 + 8) == *(int *)(this + 8);
  }
  return bVar1;
}

