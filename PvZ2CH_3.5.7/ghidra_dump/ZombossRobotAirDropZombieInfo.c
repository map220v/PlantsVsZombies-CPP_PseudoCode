// Class: ZombossRobotAirDropZombieInfo


/* ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(ZombossRobotAirDropZombieInfo
   const&) */

void __thiscall
ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
          (ZombossRobotAirDropZombieInfo *this,ZombossRobotAirDropZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ZombossRobotAirDropZombieInfo ZVar4;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  ZVar4 = param_1[0x10];
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  this[0x10] = ZVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  return;
}


/* ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(ZombossRobotAirDropZombieInfo&&) */

void __thiscall
ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo
          (ZombossRobotAirDropZombieInfo *this,ZombossRobotAirDropZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ZombossRobotAirDropZombieInfo ZVar4;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  ZVar4 = param_1[0x10];
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  this[0x10] = ZVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  return;
}


/* ZombossRobotAirDropZombieInfo::TEMPNAMEPLACEHOLDERVALUE(ZombossRobotAirDropZombieInfo const&)
   const */

bool __thiscall
ZombossRobotAirDropZombieInfo::operator==
          (ZombossRobotAirDropZombieInfo *this,ZombossRobotAirDropZombieInfo *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = std::operator==((string *)this,(string *)param_1);
  bVar1 = false;
  if (((cVar2 != '\0') && (bVar1 = false, *(long *)(this + 8) == *(long *)(param_1 + 8))) &&
     ((*(ulong *)(this + 0x10) & 0xffffffff000000ff) ==
      (*(ulong *)(param_1 + 0x10) & 0xffffffff000000ff))) {
    bVar1 = *(int *)(this + 0x18) == *(int *)(param_1 + 0x18);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo() */

void __thiscall
ZombossRobotAirDropZombieInfo::ZombossRobotAirDropZombieInfo(ZombossRobotAirDropZombieInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  this[0x10] = (ZombossRobotAirDropZombieInfo)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 8) = 100;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

