// Class: PVZ2UnchartedModeEndPlayParamData


/* PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData(PVZ2UnchartedModeEndPlayParamData
   const&) */

void __thiscall
PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData
          (PVZ2UnchartedModeEndPlayParamData *this,PVZ2UnchartedModeEndPlayParamData *param_1)

{
  *this = *param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  this[0x20] = param_1[0x20];
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData() */

void __thiscall
PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData
          (PVZ2UnchartedModeEndPlayParamData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *this = (PVZ2UnchartedModeEndPlayParamData)0x0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  std::string::string((string *)(this + 0x18),"");
  nop();
  this[0x20] = (PVZ2UnchartedModeEndPlayParamData)0x0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

