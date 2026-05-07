// Class: SpartanBambooMatrixSystem::PlantMatrix


/* SpartanBambooMatrixSystem::PlantMatrix::PlantMatrix() */

void __thiscall SpartanBambooMatrixSystem::PlantMatrix::PlantMatrix(PlantMatrix *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Sexy::Point::Point((Point *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  DVec3::DVec3((DVec3 *)(this + 0x48));
  return;
}


/* SpartanBambooMatrixSystem::PlantMatrix::~PlantMatrix() */

void __thiscall SpartanBambooMatrixSystem::PlantMatrix::~PlantMatrix(PlantMatrix *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this);
  return;
}


void __thiscall SpartanBambooMatrixSystem::PlantMatrix::~PlantMatrix(PlantMatrix *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this);
  return;
}


void __thiscall SpartanBambooMatrixSystem::PlantMatrix::~PlantMatrix(PlantMatrix *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this);
  return;
}


void __thiscall SpartanBambooMatrixSystem::PlantMatrix::~PlantMatrix(PlantMatrix *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this);
  return;
}


/* SpartanBambooMatrixSystem::PlantMatrix::PlantMatrix(SpartanBambooMatrixSystem::PlantMatrix
   const&) */

void __thiscall
SpartanBambooMatrixSystem::PlantMatrix::PlantMatrix(PlantMatrix *this,PlantMatrix *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x20),(TPoint *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x40),(RtWeakPtrBase *)(param_1 + 0x40));
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  return;
}


/* SpartanBambooMatrixSystem::PlantMatrix::TEMPNAMEPLACEHOLDERVALUE(SpartanBambooMatrixSystem::PlantMatrix&&)
    */

PlantMatrix * __thiscall
SpartanBambooMatrixSystem::PlantMatrix::operator=(PlantMatrix *this,PlantMatrix *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::operator=
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x28) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)(param_1 + 0x40));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x48),(SexyVector3 *)(param_1 + 0x48));
  return this;
}

