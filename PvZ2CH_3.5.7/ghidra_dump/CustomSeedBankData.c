// Class: CustomSeedBankData


/* CustomSeedBankData::~CustomSeedBankData() */

void __thiscall CustomSeedBankData::~CustomSeedBankData(CustomSeedBankData *this)

{
  std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::~vector
            ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* CustomSeedBankData::CustomSeedBankData(CustomSeedBankData const&) */

void __thiscall
CustomSeedBankData::CustomSeedBankData(CustomSeedBankData *this,CustomSeedBankData *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::vector
            ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}


/* CustomSeedBankData::TEMPNAMEPLACEHOLDERVALUE(CustomSeedBankData const&) */

CustomSeedBankData * __thiscall
CustomSeedBankData::operator=(CustomSeedBankData *this,CustomSeedBankData *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::operator=
            ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return this;
}


/* CustomSeedBankData::CustomSeedBankData() */

void __thiscall CustomSeedBankData::CustomSeedBankData(CustomSeedBankData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),8);
  std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::resize
            ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)(this + 0x38),8);
  return;
}


/* CustomSeedBankData::TEMPNAMEPLACEHOLDERVALUE(CustomSeedBankData&&) */

CustomSeedBankData * __thiscall
CustomSeedBankData::operator=(CustomSeedBankData *this,CustomSeedBankData *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::vector<CustomConveyorData,std::allocator<CustomConveyorData>>::operator=
            ((vector<CustomConveyorData,std::allocator<CustomConveyorData>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return this;
}


/* CustomSeedBankData::CustomSeedBankData(CustomSeedBankData&&) */

void __thiscall
CustomSeedBankData::CustomSeedBankData(CustomSeedBankData *this,CustomSeedBankData *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}

