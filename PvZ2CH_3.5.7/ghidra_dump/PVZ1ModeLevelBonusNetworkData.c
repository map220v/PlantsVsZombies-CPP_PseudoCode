// Class: PVZ1ModeLevelBonusNetworkData


/* PVZ1ModeLevelBonusNetworkData::~PVZ1ModeLevelBonusNetworkData() */

void __thiscall
PVZ1ModeLevelBonusNetworkData::~PVZ1ModeLevelBonusNetworkData(PVZ1ModeLevelBonusNetworkData *this)

{
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x30));
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x18))
  ;
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)this);
  return;
}


/* PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData() */

void __thiscall
PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData(PVZ1ModeLevelBonusNetworkData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::clear
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)this);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::clear
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x18))
  ;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::clear((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
           *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


/* PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData(PVZ1ModeLevelBonusNetworkData
   const&) */

void __thiscall
PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData
          (PVZ1ModeLevelBonusNetworkData *this,PVZ1ModeLevelBonusNetworkData *param_1)

{
  undefined4 uVar1;
  
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)this,
             (vector *)param_1);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* PVZ1ModeLevelBonusNetworkData::TEMPNAMEPLACEHOLDERVALUE(PVZ1ModeLevelBonusNetworkData const&) */

PVZ1ModeLevelBonusNetworkData * __thiscall
PVZ1ModeLevelBonusNetworkData::operator=
          (PVZ1ModeLevelBonusNetworkData *this,PVZ1ModeLevelBonusNetworkData *param_1)

{
  undefined4 uVar1;
  
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::operator=
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)this,
             (vector *)param_1);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::operator=
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = uVar1;
  return this;
}


/* PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData(PVZ1ModeLevelBonusNetworkData&&) */

void __thiscall
PVZ1ModeLevelBonusNetworkData::PVZ1ModeLevelBonusNetworkData
          (PVZ1ModeLevelBonusNetworkData *this,PVZ1ModeLevelBonusNetworkData *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}

