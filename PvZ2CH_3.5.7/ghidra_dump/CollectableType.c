// Class: CollectableType


/* CollectableType::CollectableType() */

void __thiscall CollectableType::CollectableType(CollectableType *this)

{
  size_t in_x2;
  undefined4 uVar1;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06757ca0;
  Set8BytesTo0(this + 0x10);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0((string *)(this + 0x58));
  Set8BytesTo0(this + 0x60);
  DVec3::DVec3((DVec3 *)(this + 0x68));
  Set8BytesTo0(this + 0x78);
  Set8BytesTo0(this + 0x80);
  Set8BytesTo0(this + 0x88);
  *(undefined4 *)(this + 0x50) = 0x3f800000;
  std::string::append((string *)(this + 0x58),"animation",in_x2);
  uVar1 = PVZ_EOT();
  this[0x2c] = (CollectableType)0x0;
  *(undefined4 *)(this + 0x20) = uVar1;
  this[0x90] = (CollectableType)0x0;
  *(undefined4 *)(this + 0x24) = 0x3e19999a;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* CollectableType::~CollectableType() */

void __thiscall CollectableType::~CollectableType(CollectableType *this)

{
  *(undefined ***)this = &PTR_GetClass_06757ca0;
  std::string::~string((string *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* CollectableType::~CollectableType() */

void __thiscall CollectableType::~CollectableType(CollectableType *this)

{
  ~CollectableType(this);
  AK::FreeHook(this);
  return;
}


/* CollectableType::StaticNew() */

CollectableType * CollectableType::StaticNew(void)

{
  CollectableType *this;
  
  this = ::operator_new(0x98);
  CollectableType(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableType::StaticClassInit() */

void CollectableType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableType");
    (*pcVar2)(plVar1,asStack_10,FUN_03c69de8,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableType::StaticGetClass() */

long * CollectableType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableType::GetClass() const */

long * CollectableType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

