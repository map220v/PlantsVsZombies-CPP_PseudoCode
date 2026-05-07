// Class: PlantAddition


/* PlantAddition::PlantAddition(PlantAdditionType, PlantAddition::PAdditonRLS, float, float) */

void __thiscall
PlantAddition::PlantAddition
          (undefined4 param_1,undefined4 param_2,PlantAddition *this,undefined4 param_4,
          undefined4 param_5)

{
  *(undefined4 *)(this + 8) = param_1;
  *(undefined4 *)this = param_4;
  *(undefined4 *)(this + 4) = param_5;
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}

