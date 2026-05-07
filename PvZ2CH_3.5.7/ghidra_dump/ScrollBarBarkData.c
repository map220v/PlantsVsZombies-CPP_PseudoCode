// Class: ScrollBarBarkData


/* ScrollBarBarkData::ScrollBarBarkData() */

void __thiscall ScrollBarBarkData::ScrollBarBarkData(ScrollBarBarkData *this)

{
  BarkPropertyData::BarkPropertyData((BarkPropertyData *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *this = (ScrollBarBarkData)0x1;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  return;
}


/* ScrollBarBarkData::~ScrollBarBarkData() */

void __thiscall ScrollBarBarkData::~ScrollBarBarkData(ScrollBarBarkData *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 8));
  return;
}

