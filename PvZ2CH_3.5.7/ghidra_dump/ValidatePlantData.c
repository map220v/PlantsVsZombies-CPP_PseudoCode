// Class: ValidatePlantData


/* ValidatePlantData::~ValidatePlantData() */

void __thiscall ValidatePlantData::~ValidatePlantData(ValidatePlantData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  return;
}


/* ValidatePlantData::ValidatePlantData() */

void __thiscall ValidatePlantData::ValidatePlantData(ValidatePlantData *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c));
  return;
}


/* ValidatePlantData::ValidatePlantData(ValidatePlantData const&) */

void __thiscall
ValidatePlantData::ValidatePlantData(ValidatePlantData *this,ValidatePlantData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* ValidatePlantData::ValidatePlantData(ValidatePlantData&&) */

void __thiscall
ValidatePlantData::ValidatePlantData(ValidatePlantData *this,ValidatePlantData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}

