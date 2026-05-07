// Class: ZombieSkillInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkillInfo::ZombieSkillInfo() */

void __thiscall ZombieSkillInfo::ZombieSkillInfo(ZombieSkillInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"[PVP_ZOMBIE_LEVEL_UP_NEXT_CONTENT]");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = 30000;
  *(undefined4 *)(this + 0xc) = 600;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

