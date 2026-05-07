// Class: ZombieLevelCreater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLevelCreater::GetZombieLevel() */

void __thiscall ZombieLevelCreater::GetZombieLevel(ZombieLevelCreater *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int local_14 [3];
  long local_8;
  
  fVar3 = *(float *)this;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)Sexy::Rand(1.0);
  local_14[1] = 4;
  local_14[0] = (int)fVar3 + (uint)(fVar2 < *(float *)this - (float)(int)fVar3);
  piVar1 = eastl::min_alt<int>(local_14,local_14 + 1);
  local_14[2] = 1;
  piVar1 = eastl::max_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}

