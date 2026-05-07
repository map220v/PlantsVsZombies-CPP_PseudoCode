// Class: SpringSalesStates


/* SpringSalesStates::SpringSalesStates() */

void __thiscall SpringSalesStates::SpringSalesStates(SpringSalesStates *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)this = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::vector<SalesObject,std::allocator<SalesObject>>::clear
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10));
  std::vector<SalesServerPrice,std::allocator<SalesServerPrice>>::clear
            ((vector<SalesServerPrice,std::allocator<SalesServerPrice>> *)(this + 0x28));
  return;
}


/* SpringSalesStates::~SpringSalesStates() */

void __thiscall SpringSalesStates::~SpringSalesStates(SpringSalesStates *this)

{
  std::vector<SalesServerPrice,std::allocator<SalesServerPrice>>::~vector
            ((vector<SalesServerPrice,std::allocator<SalesServerPrice>> *)(this + 0x28));
  std::vector<SalesObject,std::allocator<SalesObject>>::~vector
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}

