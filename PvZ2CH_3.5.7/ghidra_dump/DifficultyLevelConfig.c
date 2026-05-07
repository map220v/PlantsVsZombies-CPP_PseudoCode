// Class: DifficultyLevelConfig


/* DifficultyLevelConfig::DifficultyLevelConfig() */

void __thiscall DifficultyLevelConfig::DifficultyLevelConfig(DifficultyLevelConfig *this)

{
  *(undefined4 *)this = 5;
  *(undefined4 *)(this + 4) = 2;
  *(undefined4 *)(this + 8) = 0x3efae148;
  *(undefined4 *)(this + 0xc) = 0x3f2b851f;
  return;
}


/* DifficultyLevelConfig::GetInstance() */

undefined * DifficultyLevelConfig::GetInstance(void)

{
  int iVar1;
  
  if (((DAT_06b706c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b706c0), iVar1 != 0)) {
    DifficultyLevelConfig((DifficultyLevelConfig *)&DAT_06b706d8);
    __cxa_guard_release(&DAT_06b706c0);
    return &DAT_06b706d8;
  }
  return &DAT_06b706d8;
}

