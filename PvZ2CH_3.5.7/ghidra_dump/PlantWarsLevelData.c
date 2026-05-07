// Class: PlantWarsLevelData


/* PlantWarsLevelData::PlantWarsLevelData() */

void __thiscall PlantWarsLevelData::PlantWarsLevelData(PlantWarsLevelData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantWarsLevelData::PlantWarsLevelData(PlantWarsLevelData&&) */

void __thiscall
PlantWarsLevelData::PlantWarsLevelData(PlantWarsLevelData *this,PlantWarsLevelData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = uVar1;
  *(undefined4 *)(this + 100) = uVar2;
  *(undefined4 *)(this + 0x68) = uVar3;
  return;
}


/* PlantWarsLevelData::~PlantWarsLevelData() */

void __thiscall PlantWarsLevelData::~PlantWarsLevelData(PlantWarsLevelData *this)

{
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::~vector
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)(this + 0x48));
  std::vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>>::~vector
            ((vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* PlantWarsLevelData::PlantWarsLevelData(PlantWarsLevelData const&) */

void __thiscall
PlantWarsLevelData::PlantWarsLevelData(PlantWarsLevelData *this,PlantWarsLevelData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>>::vector
            ((vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::vector
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = uVar1;
  *(undefined4 *)(this + 100) = uVar2;
  *(undefined4 *)(this + 0x68) = uVar3;
  return;
}


/* PlantWarsLevelData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsLevelData const&) */

PlantWarsLevelData * __thiscall
PlantWarsLevelData::operator=(PlantWarsLevelData *this,PlantWarsLevelData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>>::operator=
            ((vector<PlantWarsStarInfoData,std::allocator<PlantWarsStarInfoData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::operator=
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x6c) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x60) = uVar1;
  *(undefined4 *)(this + 100) = uVar2;
  *(undefined4 *)(this + 0x68) = uVar3;
  return this;
}

