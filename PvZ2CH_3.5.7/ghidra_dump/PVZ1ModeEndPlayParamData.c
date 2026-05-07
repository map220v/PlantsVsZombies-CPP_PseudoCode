// Class: PVZ1ModeEndPlayParamData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData() */

void __thiscall PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(PVZ1ModeEndPlayParamData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *this = (PVZ1ModeEndPlayParamData)0x0;
  this[1] = (PVZ1ModeEndPlayParamData)0x0;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(PVZ1ModeEndPlayParamData const&) */

void __thiscall
PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData
          (PVZ1ModeEndPlayParamData *this,PVZ1ModeEndPlayParamData *param_1)

{
  PVZ1ModeEndPlayParamData PVar1;
  PVZ1ModeEndPlayParamData PVar2;
  
  PVar1 = *param_1;
  PVar2 = param_1[1];
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = PVar1;
  this[1] = PVar2;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

