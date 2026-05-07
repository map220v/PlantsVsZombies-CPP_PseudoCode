// Class: CustomWaveData


/* CustomWaveData::~CustomWaveData() */

void __thiscall CustomWaveData::~CustomWaveData(CustomWaveData *this)

{
  std::vector<CustomWave,std::allocator<CustomWave>>::~vector
            ((vector<CustomWave,std::allocator<CustomWave>> *)(this + 0x10));
  return;
}


/* CustomWaveData::CustomWaveData(CustomWaveData const&) */

void __thiscall CustomWaveData::CustomWaveData(CustomWaveData *this,CustomWaveData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<CustomWave,std::allocator<CustomWave>>::vector
            ((vector<CustomWave,std::allocator<CustomWave>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* CustomWaveData::TEMPNAMEPLACEHOLDERVALUE(CustomWaveData const&) */

CustomWaveData * __thiscall CustomWaveData::operator=(CustomWaveData *this,CustomWaveData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<CustomWave,std::allocator<CustomWave>>::operator=
            ((vector<CustomWave,std::allocator<CustomWave>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* CustomWaveData::CustomWaveData() */

void __thiscall CustomWaveData::CustomWaveData(CustomWaveData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<CustomWave,std::allocator<CustomWave>>::resize
            ((vector<CustomWave,std::allocator<CustomWave>> *)(this + 0x10),10);
  return;
}


/* CustomWaveData::TEMPNAMEPLACEHOLDERVALUE(CustomWaveData&&) */

CustomWaveData * __thiscall CustomWaveData::operator=(CustomWaveData *this,CustomWaveData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<CustomWave,std::allocator<CustomWave>>::operator=
            ((vector<CustomWave,std::allocator<CustomWave>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

