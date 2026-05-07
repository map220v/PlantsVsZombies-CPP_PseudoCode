// Class: ResilienceInfo


/* ResilienceInfo::ResilienceInfo() */

void __thiscall ResilienceInfo::ResilienceInfo(ResilienceInfo *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* ResilienceInfo::ResilienceInfo(float, float, float, float, ZombieResistenceType) */

void __thiscall
ResilienceInfo::ResilienceInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ResilienceInfo *this,undefined4 param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)this = param_1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}

