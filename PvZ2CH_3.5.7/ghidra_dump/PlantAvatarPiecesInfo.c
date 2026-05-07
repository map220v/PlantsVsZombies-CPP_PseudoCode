// Class: PlantAvatarPiecesInfo


/* PlantAvatarPiecesInfo::PlantAvatarPiecesInfo() */

void __thiscall PlantAvatarPiecesInfo::PlantAvatarPiecesInfo(PlantAvatarPiecesInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  std::vector<int,std::allocator<int>>::resize((vector<int,std::allocator<int>> *)(this + 8),1);
  return;
}


/* PlantAvatarPiecesInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAvatarPiecesInfo&&) */

PlantAvatarPiecesInfo * __thiscall
PlantAvatarPiecesInfo::operator=(PlantAvatarPiecesInfo *this,PlantAvatarPiecesInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}

