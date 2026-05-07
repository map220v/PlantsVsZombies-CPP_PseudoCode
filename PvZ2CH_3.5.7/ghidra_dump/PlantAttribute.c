// Class: PlantAttribute


/* PlantAttribute::PlantAttribute() */

void __thiscall PlantAttribute::PlantAttribute(PlantAttribute *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantAttribute::~PlantAttribute() */

void __thiscall PlantAttribute::~PlantAttribute(PlantAttribute *this)

{
  std::vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>>::~vector
            ((vector<PlantSpecialTagInfo,std::allocator<PlantSpecialTagInfo>> *)(this + 0x30));
  std::vector<PlantTag,std::allocator<PlantTag>>::~vector
            ((vector<PlantTag,std::allocator<PlantTag>> *)(this + 0x18));
  std::vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>>::~vector
            ((vector<PlantAttributeInfo,std::allocator<PlantAttributeInfo>> *)this);
  return;
}

