// Class: ToolPacketProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketProps::StaticClassInit() */

void ToolPacketProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToolPacketProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0442f09c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToolPacketProps::StaticGetClass() */

long * ToolPacketProps::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToolPacketProps::GetClass() const */

long * ToolPacketProps::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToolPacketProps::ToolPacketProps() */

void __thiscall ToolPacketProps::ToolPacketProps(ToolPacketProps *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06849820;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  return;
}


/* ToolPacketProps::StaticNew() */

ToolPacketProps * ToolPacketProps::StaticNew(void)

{
  ToolPacketProps *this;
  
  this = ::operator_new(0x90);
  ToolPacketProps(this);
  return this;
}


/* ToolPacketProps::~ToolPacketProps() */

void __thiscall ToolPacketProps::~ToolPacketProps(ToolPacketProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06849820;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x58));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* ToolPacketProps::~ToolPacketProps() */

void __thiscall ToolPacketProps::~ToolPacketProps(ToolPacketProps *this)

{
  ~ToolPacketProps(this);
  AK::FreeHook(this);
  return;
}

