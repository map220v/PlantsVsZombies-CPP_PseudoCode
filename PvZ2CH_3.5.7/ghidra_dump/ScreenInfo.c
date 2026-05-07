// Class: ScreenInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScreenInfo::ScreenInfo() */

void __thiscall ScreenInfo::ScreenInfo(ScreenInfo *this)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
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


/* ScreenInfo::ScreenInfo(int, int, int, int, std::string const&) */

void __thiscall
ScreenInfo::ScreenInfo
          (ScreenInfo *this,int param_1,int param_2,int param_3,int param_4,string *param_5)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  FUN_05475d88(this + 0x10,param_5);
  return;
}


/* ScreenInfo::TEMPNAMEPLACEHOLDERVALUE(ScreenInfo&&) */

ScreenInfo * __thiscall ScreenInfo::operator=(ScreenInfo *this,ScreenInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  FUN_05474278(this + 0x10,param_1 + 0x10);
  return this;
}

