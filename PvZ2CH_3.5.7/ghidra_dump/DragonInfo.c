// Class: DragonInfo


/* DragonInfo::DragonInfo(TestDragon*, TestDragon*, TestDragonType, float) */

void __thiscall
DragonInfo::DragonInfo
          (undefined4 param_1_00,DragonInfo *this,undefined8 param_1,undefined8 param_2,
          undefined4 param_5)

{
  *(undefined4 *)(this + 0x14) = param_1_00;
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

