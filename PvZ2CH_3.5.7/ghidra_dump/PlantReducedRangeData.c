// Class: PlantReducedRangeData


/* PlantReducedRangeData::PlantReducedRangeData() */

void __thiscall PlantReducedRangeData::PlantReducedRangeData(PlantReducedRangeData *this)

{
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 8));
  *(undefined4 *)this = 0;
  this[4] = (PlantReducedRangeData)0x0;
  return;
}


/* PlantReducedRangeData::~PlantReducedRangeData() */

void __thiscall PlantReducedRangeData::~PlantReducedRangeData(PlantReducedRangeData *this)

{
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 8));
  return;
}


/* PlantReducedRangeData::PlantReducedRangeData(PlantReducedRangeData const&) */

void __thiscall
PlantReducedRangeData::PlantReducedRangeData
          (PlantReducedRangeData *this,PlantReducedRangeData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  PlantRestrictionSet::PlantRestrictionSet
            ((PlantRestrictionSet *)(this + 8),(PlantRestrictionSet *)(param_1 + 8));
  return;
}


/* PlantReducedRangeData::TEMPNAMEPLACEHOLDERVALUE(PlantReducedRangeData const&) */

PlantReducedRangeData * __thiscall
PlantReducedRangeData::operator=(PlantReducedRangeData *this,PlantReducedRangeData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  ZombieRestrictionSet::operator=
            ((ZombieRestrictionSet *)(this + 8),(ZombieRestrictionSet *)(param_1 + 8));
  return this;
}

