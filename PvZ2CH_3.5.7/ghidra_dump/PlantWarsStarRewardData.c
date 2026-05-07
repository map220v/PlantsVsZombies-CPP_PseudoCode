// Class: PlantWarsStarRewardData


/* PlantWarsStarRewardData::~PlantWarsStarRewardData() */

void __thiscall PlantWarsStarRewardData::~PlantWarsStarRewardData(PlantWarsStarRewardData *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  return;
}


/* PlantWarsStarRewardData::PlantWarsStarRewardData() */

void __thiscall PlantWarsStarRewardData::PlantWarsStarRewardData(PlantWarsStarRewardData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* PlantWarsStarRewardData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsStarRewardData const&) */

PlantWarsStarRewardData * __thiscall
PlantWarsStarRewardData::operator=(PlantWarsStarRewardData *this,PlantWarsStarRewardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return this;
}


/* PlantWarsStarRewardData::PlantWarsStarRewardData(PlantWarsStarRewardData const&) */

void __thiscall
PlantWarsStarRewardData::PlantWarsStarRewardData
          (PlantWarsStarRewardData *this,PlantWarsStarRewardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return;
}


/* PlantWarsStarRewardData::PlantWarsStarRewardData(PlantWarsStarRewardData&&) */

void __thiscall
PlantWarsStarRewardData::PlantWarsStarRewardData
          (PlantWarsStarRewardData *this,PlantWarsStarRewardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return;
}

