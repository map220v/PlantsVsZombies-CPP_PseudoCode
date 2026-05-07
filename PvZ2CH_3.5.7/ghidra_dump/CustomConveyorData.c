// Class: CustomConveyorData


/* CustomConveyorData::CustomConveyorData(std::string const&, int, int) */

void __thiscall
CustomConveyorData::CustomConveyorData
          (CustomConveyorData *this,string *param_1,int param_2,int param_3)

{
  FUN_05475d88();
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomConveyorData::CustomConveyorData() */

void __thiscall CustomConveyorData::CustomConveyorData(CustomConveyorData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  *(undefined4 *)(this + 8) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

