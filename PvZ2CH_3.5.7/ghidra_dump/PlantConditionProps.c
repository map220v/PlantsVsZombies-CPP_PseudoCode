// Class: PlantConditionProps


/* PlantConditionProps::ApplyPlantConditionsTo(Plant&) */

void __thiscall
PlantConditionProps::ApplyPlantConditionsTo(PlantConditionProps *this,Plant *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = 0;
  while( true ) {
    uVar5 = **(undefined8 **)this;
    uVar3 = FUN_04920cdc(uVar5,(*(undefined8 **)this)[1]);
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined4 *)FUN_04920cf0(uVar5,uVar4);
    uVar1 = *puVar2;
    auVar6 = ValueRange::GetRandomValue((ValueRange *)(puVar2 + 1));
    Plant::ApplyCondition(auVar6,0,param_1,uVar1);
    uVar4 = uVar4 + 1;
  }
  return;
}

