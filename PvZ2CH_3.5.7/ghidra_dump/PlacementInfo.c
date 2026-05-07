// Class: PlacementInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlacementInfo::PlacementInfo() */

void __thiscall PlacementInfo::PlacementInfo(PlacementInfo *this)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::string((string *)(this + 0x10),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlacementInfo::PlacementInfo(int, int, int, std::string const&) */

void __thiscall
PlacementInfo::PlacementInfo
          (PlacementInfo *this,int param_1,int param_2,int param_3,string *param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  FUN_05475d88(this + 0x10,param_4);
  return;
}


/* PlacementInfo::TEMPNAMEPLACEHOLDERVALUE(PlacementInfo&&) */

PlacementInfo * __thiscall PlacementInfo::operator=(PlacementInfo *this,PlacementInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05474278(this + 0x10,param_1 + 0x10);
  return this;
}

