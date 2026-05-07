// Class: DamageBalancer


/* DamageBalancer::DamageBalancer() */

void __thiscall DamageBalancer::DamageBalancer(DamageBalancer *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* DamageBalancer::DamageBalancer(DamageTypeFlags, float) */

void __thiscall
DamageBalancer::DamageBalancer(undefined4 param_1,DamageBalancer *this,undefined8 param_3)

{
  *(undefined8 *)this = param_3;
  *(undefined4 *)(this + 0xc) = param_1;
  *(undefined4 *)(this + 8) = 0xffffffff;
  return;
}


/* DamageBalancer::DamageBalancer(ZombieConditions, float) */

void __thiscall
DamageBalancer::DamageBalancer(undefined4 param_1,DamageBalancer *this,undefined4 param_3)

{
  *(undefined4 *)(this + 0xc) = param_1;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = param_3;
  return;
}

