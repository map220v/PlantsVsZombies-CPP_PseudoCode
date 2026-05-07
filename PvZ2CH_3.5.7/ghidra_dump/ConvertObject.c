// Class: ConvertObject


/* ConvertObject::ConvertObject(ConvertObject&&) */

void __thiscall ConvertObject::ConvertObject(ConvertObject *this,ConvertObject *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* ConvertObject::ConvertObject() */

void __thiscall ConvertObject::ConvertObject(ConvertObject *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::clear
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x10));
  return;
}


/* ConvertObject::~ConvertObject() */

void __thiscall ConvertObject::~ConvertObject(ConvertObject *this)

{
  std::vector<ConvertItem,std::allocator<ConvertItem>>::~vector
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ConvertObject::ConvertObject(ConvertObject const&) */

void __thiscall ConvertObject::ConvertObject(ConvertObject *this,ConvertObject *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::vector
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* ConvertObject::TEMPNAMEPLACEHOLDERVALUE(ConvertObject const&) */

ConvertObject * __thiscall ConvertObject::operator=(ConvertObject *this,ConvertObject *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::operator=
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* ConvertObject::TEMPNAMEPLACEHOLDERVALUE(ConvertObject&&) */

ConvertObject * __thiscall ConvertObject::operator=(ConvertObject *this,ConvertObject *param_1)

{
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  std::vector<ConvertItem,std::allocator<ConvertItem>>::operator=
            ((vector<ConvertItem,std::allocator<ConvertItem>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

