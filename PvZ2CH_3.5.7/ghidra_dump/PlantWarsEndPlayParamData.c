// Class: PlantWarsEndPlayParamData


/* PlantWarsEndPlayParamData::PlantWarsEndPlayParamData(PlantWarsEndPlayParamData&&) */

void __thiscall
PlantWarsEndPlayParamData::PlantWarsEndPlayParamData
          (PlantWarsEndPlayParamData *this,PlantWarsEndPlayParamData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* PlantWarsEndPlayParamData::PlantWarsEndPlayParamData() */

void __thiscall
PlantWarsEndPlayParamData::PlantWarsEndPlayParamData(PlantWarsEndPlayParamData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* PlantWarsEndPlayParamData::~PlantWarsEndPlayParamData() */

void __thiscall
PlantWarsEndPlayParamData::~PlantWarsEndPlayParamData(PlantWarsEndPlayParamData *this)

{
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 0x20));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}


/* PlantWarsEndPlayParamData::PlantWarsEndPlayParamData(PlantWarsEndPlayParamData const&) */

void __thiscall
PlantWarsEndPlayParamData::PlantWarsEndPlayParamData
          (PlantWarsEndPlayParamData *this,PlantWarsEndPlayParamData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
            *)(this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}

