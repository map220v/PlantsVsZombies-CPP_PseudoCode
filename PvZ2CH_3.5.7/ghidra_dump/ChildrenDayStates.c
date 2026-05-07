// Class: ChildrenDayStates


/* ChildrenDayStates::ChildrenDayStates() */

void __thiscall ChildrenDayStates::ChildrenDayStates(ChildrenDayStates *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Set8BytesTo0(this + 0x18);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ChildrenDayStates::~ChildrenDayStates() */

void __thiscall ChildrenDayStates::~ChildrenDayStates(ChildrenDayStates *this)

{
  std::vector<ChildrenDayItem,std::allocator<ChildrenDayItem>>::~vector
            ((vector<ChildrenDayItem,std::allocator<ChildrenDayItem>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}

