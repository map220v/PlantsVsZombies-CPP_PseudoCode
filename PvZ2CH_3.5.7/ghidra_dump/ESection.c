// Class: ESection


/* ESection::ESection() */

void __thiscall ESection::ESection(ESection *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  std::vector<EBox,std::allocator<EBox>>::clear((vector<EBox,std::allocator<EBox>> *)(this + 8));
  return;
}


/* ESection::~ESection() */

void __thiscall ESection::~ESection(ESection *this)

{
  std::vector<EBox,std::allocator<EBox>>::~vector((vector<EBox,std::allocator<EBox>> *)(this + 8));
  return;
}

