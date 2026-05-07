// Class: EBox


/* EBox::~EBox() */

void __thiscall EBox::~EBox(EBox *this)

{
  std::vector<EItem,std::allocator<EItem>>::~vector
            ((vector<EItem,std::allocator<EItem>> *)(this + 8));
  return;
}


/* EBox::EBox() */

void __thiscall EBox::EBox(EBox *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  std::vector<EItem,std::allocator<EItem>>::clear((vector<EItem,std::allocator<EItem>> *)(this + 8))
  ;
  return;
}


/* EBox::TEMPNAMEPLACEHOLDERVALUE(EBox const&) */

EBox * __thiscall EBox::operator=(EBox *this,EBox *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<EItem,std::allocator<EItem>>::operator=
            ((vector<EItem,std::allocator<EItem>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}

