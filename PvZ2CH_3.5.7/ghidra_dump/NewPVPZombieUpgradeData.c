// Class: NewPVPZombieUpgradeData


/* NewPVPZombieUpgradeData::NewPVPZombieUpgradeData() */

void __thiscall NewPVPZombieUpgradeData::NewPVPZombieUpgradeData(NewPVPZombieUpgradeData *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 1;
  this[0xc] = (NewPVPZombieUpgradeData)0x0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* NewPVPZombieUpgradeData::NewPVPZombieUpgradeData(NewPVPZombieUpgradeType, int, float, bool) */

void __thiscall
NewPVPZombieUpgradeData::NewPVPZombieUpgradeData
          (undefined4 param_1,NewPVPZombieUpgradeData *this,undefined4 param_3,undefined4 param_4,
          NewPVPZombieUpgradeData param_5)

{
  *(undefined4 *)(this + 8) = param_1;
  *(undefined4 *)this = param_3;
  *(undefined4 *)(this + 4) = param_4;
  this[0xc] = param_5;
  return;
}

