// Class: Sexy::ResGenInfo


/* Sexy::ResGenInfo::ResGenInfo() */

void __thiscall Sexy::ResGenInfo::ResGenInfo(ResGenInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0((string *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 3;
  std::string::append((string *)(this + 0x20),"windows",in_x2);
  return;
}


/* Sexy::ResGenInfo::~ResGenInfo() */

void __thiscall Sexy::ResGenInfo::~ResGenInfo(ResGenInfo *this)

{
  std::string::~string((string *)(this + 0x40));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* Sexy::ResGenInfo::TEMPNAMEPLACEHOLDERVALUE(Sexy::ResGenInfo const&) */

ResGenInfo * __thiscall Sexy::ResGenInfo::operator=(ResGenInfo *this,ResGenInfo *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  return this;
}

