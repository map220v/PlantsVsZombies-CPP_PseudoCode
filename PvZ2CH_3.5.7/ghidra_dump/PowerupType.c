// Class: PowerupType


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupType::StaticClassInit() */

void PowerupType::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupType");
    (*pcVar2)(plVar1,asStack_10,FUN_043158e0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupType::StaticGetClass() */

long * PowerupType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupType::GetClass() const */

long * PowerupType::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupType::PowerupType() */

void __thiscall PowerupType::PowerupType(PowerupType *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_068330a0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Sexy::Color::Color((Color *)(this + 0x28));
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0,0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  *(undefined4 *)(this + 0x70) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupType::StaticNew() */

PowerupType * PowerupType::StaticNew(void)

{
  PowerupType *this;
  
  this = ::operator_new(0x78);
  PowerupType(this);
  return this;
}


/* PowerupType::~PowerupType() */

void __thiscall PowerupType::~PowerupType(PowerupType *this)

{
  *(undefined ***)this = &PTR_GetClass_068330a0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PowerupType::~PowerupType() */

void __thiscall PowerupType::~PowerupType(PowerupType *this)

{
  ~PowerupType(this);
  AK::FreeHook(this);
  return;
}

