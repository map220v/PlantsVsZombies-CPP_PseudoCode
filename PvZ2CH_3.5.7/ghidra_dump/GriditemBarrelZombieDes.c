// Class: GriditemBarrelZombieDes


/* GriditemBarrelZombieDes::GriditemBarrelZombieDes(GriditemBarrelZombieDes const&) */

void __thiscall
GriditemBarrelZombieDes::GriditemBarrelZombieDes
          (GriditemBarrelZombieDes *this,GriditemBarrelZombieDes *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* GriditemBarrelZombieDes::GriditemBarrelZombieDes(GriditemBarrelZombieDes&&) */

void __thiscall
GriditemBarrelZombieDes::GriditemBarrelZombieDes
          (GriditemBarrelZombieDes *this,GriditemBarrelZombieDes *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GriditemBarrelZombieDes::GriditemBarrelZombieDes() */

void __thiscall GriditemBarrelZombieDes::GriditemBarrelZombieDes(GriditemBarrelZombieDes *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 1;
  std::string::string((string *)(this + 8),"pirate_imp");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GriditemBarrelZombieDes::TEMPNAMEPLACEHOLDERVALUE(GriditemBarrelZombieDes const&) */

GriditemBarrelZombieDes * __thiscall
GriditemBarrelZombieDes::operator=(GriditemBarrelZombieDes *this,GriditemBarrelZombieDes *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  return this;
}

