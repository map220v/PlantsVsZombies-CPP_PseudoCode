// Class: PlantCacheData


/* PlantCacheData::PlantCacheData(int, int, Sexy::Point, float, unsigned int, float) */

void __thiscall
PlantCacheData::PlantCacheData
          (undefined4 param_1_00,undefined4 param_2_00,PlantCacheData *this,undefined4 param_1,
          undefined4 param_2,TPoint *param_6,undefined4 param_7)

{
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)this = param_2;
  Sexy::Point::Point((Point *)(this + 8),param_6);
  *(undefined4 *)(this + 0x14) = param_7;
  *(undefined4 *)(this + 0x10) = param_1_00;
  *(undefined4 *)(this + 0x18) = param_2_00;
  return;
}


/* PlantCacheData::PlantCacheData() */

void __thiscall PlantCacheData::PlantCacheData(PlantCacheData *this)

{
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 4) = 0xffffffff;
  Sexy::Point::Point((Point *)(this + 8));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* PlantCacheData::PlantCacheData(PlantCacheData&&) */

void __thiscall PlantCacheData::PlantCacheData(PlantCacheData *this,PlantCacheData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}

