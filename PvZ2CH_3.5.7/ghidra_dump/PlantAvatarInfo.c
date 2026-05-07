// Class: PlantAvatarInfo


/* PlantAvatarInfo::~PlantAvatarInfo() */

void __thiscall PlantAvatarInfo::~PlantAvatarInfo(PlantAvatarInfo *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* PlantAvatarInfo::PlantAvatarInfo(PlantAvatarInfo const&) */

void __thiscall PlantAvatarInfo::PlantAvatarInfo(PlantAvatarInfo *this,PlantAvatarInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* PlantAvatarInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAvatarInfo const&) */

PlantAvatarInfo * __thiscall
PlantAvatarInfo::operator=(PlantAvatarInfo *this,PlantAvatarInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::operator=
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* PlantAvatarInfo::PlantAvatarInfo() */

void __thiscall PlantAvatarInfo::PlantAvatarInfo(PlantAvatarInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),1);
  return;
}


/* PlantAvatarInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAvatarInfo&&) */

PlantAvatarInfo * __thiscall
PlantAvatarInfo::operator=(PlantAvatarInfo *this,PlantAvatarInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::operator=
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

