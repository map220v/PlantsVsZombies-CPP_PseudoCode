// Class: LevelDefinitionForTask


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelDefinitionForTask::LevelDefinitionForTask() */

void __thiscall LevelDefinitionForTask::LevelDefinitionForTask(LevelDefinitionForTask *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  *(undefined4 *)(this + 8) = 0;
  lVar2 = ___stack_chk_guard;
  this[0xc] = (LevelDefinitionForTask)0x0;
  this[0xd] = (LevelDefinitionForTask)0x0;
  this[0xe] = (LevelDefinitionForTask)0x0;
  this[0xf] = (LevelDefinitionForTask)0x0;
  this[0x10] = (LevelDefinitionForTask)0x0;
  this[0x11] = (LevelDefinitionForTask)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (LevelDefinitionForTask)0x0;
  this[0x19] = (LevelDefinitionForTask)0x0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  this[0x20] = (LevelDefinitionForTask)0x0;
  this[0x21] = (LevelDefinitionForTask)0x0;
  this[0x22] = (LevelDefinitionForTask)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

