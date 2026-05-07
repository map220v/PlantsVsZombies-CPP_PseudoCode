// Class: ZombossRobotSpawnZombieInfo


/* ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(ZombossRobotSpawnZombieInfo const&) */

void __thiscall
ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
          (ZombossRobotSpawnZombieInfo *this,ZombossRobotSpawnZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


/* ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(ZombossRobotSpawnZombieInfo&&) */

void __thiscall
ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
          (ZombossRobotSpawnZombieInfo *this,ZombossRobotSpawnZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo() */

void __thiscall
ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo(ZombossRobotSpawnZombieInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  this[0x14] = (ZombossRobotSpawnZombieInfo)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = 100;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRobotSpawnZombieInfo::TEMPNAMEPLACEHOLDERVALUE(ZombossRobotSpawnZombieInfo&&) */

ZombossRobotSpawnZombieInfo * __thiscall
ZombossRobotSpawnZombieInfo::operator=
          (ZombossRobotSpawnZombieInfo *this,ZombossRobotSpawnZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return this;
}


/* ZombossRobotSpawnZombieInfo::TEMPNAMEPLACEHOLDERVALUE(ZombossRobotSpawnZombieInfo const&) const
    */

bool __thiscall
ZombossRobotSpawnZombieInfo::operator==
          (ZombossRobotSpawnZombieInfo *this,ZombossRobotSpawnZombieInfo *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = std::operator==((string *)this,(string *)param_1);
  bVar1 = false;
  if ((((cVar2 != '\0') && (bVar1 = false, *(int *)(this + 0x10) == *(int *)(param_1 + 0x10))) &&
      (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) && (this[0x14] == param_1[0x14])) {
    bVar1 = *(int *)(this + 8) == *(int *)(param_1 + 8);
  }
  return bVar1;
}

