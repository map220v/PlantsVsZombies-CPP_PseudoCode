// Class: Sexy::SexyBox2<int>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SexyBox2<int>::SexyBox2(Sexy::TRect<int> const&) */

void __thiscall Sexy::SexyBox2<int>::SexyBox2(SexyBox2<int> *this,TRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  FastCurve::SetOutRange((FastCurve *)&local_10,(float)*(int *)param_1,(float)*(int *)(param_1 + 4))
  ;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined8 *)this = local_10;
  FastCurve::SetOutRange((FastCurve *)&local_10,(float)(iVar2 + iVar3),(float)(iVar1 + iVar4));
  lVar5 = ___stack_chk_guard;
  *(undefined8 *)(this + 8) = local_10;
  if (local_8 == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

