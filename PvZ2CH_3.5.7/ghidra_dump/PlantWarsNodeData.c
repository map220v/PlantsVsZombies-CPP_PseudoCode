// Class: PlantWarsNodeData


/* PlantWarsNodeData::~PlantWarsNodeData() */

void __thiscall PlantWarsNodeData::~PlantWarsNodeData(PlantWarsNodeData *this)

{
  std::_Destroy<std::string*>(*(string **)this,*(string **)(this + 8));
  std::_Vector_base<std::string,std::allocator<std::string>>::~_Vector_base
            ((_Vector_base<std::string,std::allocator<std::string>> *)this);
  return;
}


/* PlantWarsNodeData::PlantWarsNodeData() */

void __thiscall PlantWarsNodeData::PlantWarsNodeData(PlantWarsNodeData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* PlantWarsNodeData::PlantWarsNodeData(PlantWarsNodeData const&) */

void __thiscall
PlantWarsNodeData::PlantWarsNodeData(PlantWarsNodeData *this,PlantWarsNodeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* PlantWarsNodeData::PlantWarsNodeData(PlantWarsNodeData&&) */

void __thiscall
PlantWarsNodeData::PlantWarsNodeData(PlantWarsNodeData *this,PlantWarsNodeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* PlantWarsNodeData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsNodeData const&) */

PlantWarsNodeData * __thiscall
PlantWarsNodeData::operator=(PlantWarsNodeData *this,PlantWarsNodeData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar1;
  return this;
}

