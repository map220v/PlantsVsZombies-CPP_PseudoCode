// Class: PlantFamilyInfo


/* PlantFamilyInfo::~PlantFamilyInfo() */

void __thiscall PlantFamilyInfo::~PlantFamilyInfo(PlantFamilyInfo *this)

{
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20));
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::~vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8));
  return;
}


/* PlantFamilyInfo::PlantFamilyInfo() */

void __thiscall PlantFamilyInfo::PlantFamilyInfo(PlantFamilyInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


void __thiscall PlantFamilyInfo::~PlantFamilyInfo(PlantFamilyInfo *this)

{
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20));
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::~vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8));
  return;
}


void __thiscall PlantFamilyInfo::~PlantFamilyInfo(PlantFamilyInfo *this)

{
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20));
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::~vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8));
  return;
}


void __thiscall PlantFamilyInfo::~PlantFamilyInfo(PlantFamilyInfo *this)

{
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20));
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::~vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8));
  return;
}


/* PlantFamilyInfo::PlantFamilyInfo(PlantFamilyInfo const&) */

void __thiscall PlantFamilyInfo::PlantFamilyInfo(PlantFamilyInfo *this,PlantFamilyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


void __thiscall PlantFamilyInfo::PlantFamilyInfo(PlantFamilyInfo *this,PlantFamilyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


void __thiscall PlantFamilyInfo::PlantFamilyInfo(PlantFamilyInfo *this,PlantFamilyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::vector
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


/* PlantFamilyInfo::TEMPNAMEPLACEHOLDERVALUE(PlantFamilyInfo&&) */

PlantFamilyInfo * __thiscall
PlantFamilyInfo::operator=(PlantFamilyInfo *this,PlantFamilyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::operator=
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::operator=
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return this;
}


/* PlantFamilyInfo::TEMPNAMEPLACEHOLDERVALUE(PlantFamilyInfo const&) */

PlantFamilyInfo * __thiscall
PlantFamilyInfo::operator=(PlantFamilyInfo *this,PlantFamilyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>>::operator=
            ((vector<PlantFamilyBoostValue,std::allocator<PlantFamilyBoostValue>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<PlantBoost,std::allocator<PlantBoost>>::operator=
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return this;
}

