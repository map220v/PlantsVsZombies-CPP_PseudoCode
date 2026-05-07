// Class: PuzzleTipUtil


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzleTipUtil::PopTip(std::wstring, Sexy::TRect<int>) */

void PuzzleTipUtil::PopTip(undefined8 param_1,undefined8 param_2)

{
  PuzzleTip *this;
  code *pcVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x118);
  PuzzleTip::PuzzleTip(this);
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
  pcVar1 = *(code **)(*(long *)this + 0x310);
  FUN_05477b24(auStack_10,param_1);
  (*pcVar1)(this,auStack_10);
  FUN_05476c50(auStack_10);
  (**(code **)(*(long *)this + 0x1a0))(this,param_2);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PuzzleTipUtil::DeleteTip(PuzzleTip*) */

void PuzzleTipUtil::DeleteTip(PuzzleTip *param_1)

{
  if (param_1 != (PuzzleTip *)0x0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],param_1);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,param_1);
  }
  return;
}


/* PuzzleTipUtil::CreateTipRect(Sexy::Point, int) */

Insets * __thiscall PuzzleTipUtil::CreateTipRect(Insets *param_1,PuzzleTipUtil *this,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = FUN_04c44584();
  Sexy::Insets::Insets
            (param_1,iVar1 + (param_3 + -0x1d4) / 2,*(int *)(this + 4) + -0x7b + iVar2,0x1d4,0x7b);
  return param_1;
}

