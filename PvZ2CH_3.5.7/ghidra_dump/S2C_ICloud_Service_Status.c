// Class: S2C_ICloud_Service_Status


/* S2C_ICloud_Service_Status::S2C_ICloud_Service_Status() */

void __thiscall
S2C_ICloud_Service_Status::S2C_ICloud_Service_Status(S2C_ICloud_Service_Status *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a9b0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_Service_Status_0660aa18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  Set8BytesTo0(this + 0x90);
  Set8BytesTo0(this + 0x98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  FUN_05476574(this + 0xb8);
  FUN_05476574(this + 0xc0);
  Set8BytesTo0(this + 200);
  Set8BytesTo0((string *)(this + 0xe0));
  this[0x14] = (S2C_ICloud_Service_Status)0x0;
  this[0x8d] = (S2C_ICloud_Service_Status)0x1;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  this[0x38] = (S2C_ICloud_Service_Status)0x1;
  this[0x15] = (S2C_ICloud_Service_Status)0x0;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  this[0x16] = (S2C_ICloud_Service_Status)0x0;
  this[0x17] = (S2C_ICloud_Service_Status)0x0;
  this[0x18] = (S2C_ICloud_Service_Status)0x0;
  this[0x19] = (S2C_ICloud_Service_Status)0x0;
  this[0x20] = (S2C_ICloud_Service_Status)0x0;
  this[0x8c] = (S2C_ICloud_Service_Status)0x0;
  this[0x2c] = (S2C_ICloud_Service_Status)0x0;
  this[0x2d] = (S2C_ICloud_Service_Status)0x0;
  this[0x2e] = (S2C_ICloud_Service_Status)0x0;
  this[0x34] = (S2C_ICloud_Service_Status)0x0;
  this[0x39] = (S2C_ICloud_Service_Status)0x0;
  this[0x3a] = (S2C_ICloud_Service_Status)0x0;
  this[0x3b] = (S2C_ICloud_Service_Status)0x0;
  this[0x35] = (S2C_ICloud_Service_Status)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x36] = (S2C_ICloud_Service_Status)0x0;
  this[0x37] = (S2C_ICloud_Service_Status)0x0;
  this[0xd5] = (S2C_ICloud_Service_Status)0x0;
  this[0xd6] = (S2C_ICloud_Service_Status)0x0;
  this[0xd7] = (S2C_ICloud_Service_Status)0x0;
  this[0xd8] = (S2C_ICloud_Service_Status)0x0;
  this[0xd9] = (S2C_ICloud_Service_Status)0x0;
  this[0xda] = (S2C_ICloud_Service_Status)0x0;
  this[0xdb] = (S2C_ICloud_Service_Status)0x0;
  this[0xdc] = (S2C_ICloud_Service_Status)0x1;
  this[0xdd] = (S2C_ICloud_Service_Status)0x1;
  this[0xde] = (S2C_ICloud_Service_Status)0x1;
  this[0xdf] = (S2C_ICloud_Service_Status)0x1;
  std::string::append((string *)(this + 0xe0),"",1);
  return;
}


/* S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status() */

void __thiscall
S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status(S2C_ICloud_Service_Status *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a9b0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_Service_Status_0660aa18;
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 200));
  FUN_05476c50(this + 0xc0);
  FUN_05476c50(this + 0xb8);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status() */

void __thiscall
S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status(S2C_ICloud_Service_Status *this)

{
  ~S2C_ICloud_Service_Status(this + -8);
  return;
}


/* S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status() */

void __thiscall
S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status(S2C_ICloud_Service_Status *this)

{
  ~S2C_ICloud_Service_Status(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status() */

void __thiscall
S2C_ICloud_Service_Status::~S2C_ICloud_Service_Status(S2C_ICloud_Service_Status *this)

{
  ~S2C_ICloud_Service_Status(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_Service_Status::StaticClassInit() */

void S2C_ICloud_Service_Status::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_Service_Status");
    (*pcVar2)(plVar1,asStack_10,FUN_032245b8,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_Service_Status::StaticGetClass() */

long * S2C_ICloud_Service_Status::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_ICloud_Service_Status",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_Service_Status::GetClass() const */

long * S2C_ICloud_Service_Status::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"S2C_ICloud_Service_Status",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_Service_Status::StaticNew() */

S2C_ICloud_Service_Status * S2C_ICloud_Service_Status::StaticNew(void)

{
  S2C_ICloud_Service_Status *this;
  
  this = ::operator_new(0xe8);
  S2C_ICloud_Service_Status(this);
  return this;
}

