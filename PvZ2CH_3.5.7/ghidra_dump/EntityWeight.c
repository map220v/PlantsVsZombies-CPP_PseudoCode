// Class: EntityWeight


/* EntityWeight::EntityWeight() */

void __thiscall EntityWeight::EntityWeight(EntityWeight *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06782030;
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* EntityWeight::EntityWeight(EntityWeight const&) */

void __thiscall EntityWeight::EntityWeight(EntityWeight *this,EntityWeight *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06782030;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* EntityWeight::EntityWeight(EntityWeight&&) */

void __thiscall EntityWeight::EntityWeight(EntityWeight *this,EntityWeight *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06782030;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* EntityWeight::~EntityWeight() */

void __thiscall EntityWeight::~EntityWeight(EntityWeight *this)

{
  *(undefined ***)this = &PTR_GetClass_06782030;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* EntityWeight::~EntityWeight() */

void __thiscall EntityWeight::~EntityWeight(EntityWeight *this)

{
  ~EntityWeight(this);
  AK::FreeHook(this);
  return;
}


/* EntityWeight::StaticNew() */

EntityWeight * EntityWeight::StaticNew(void)

{
  EntityWeight *this;
  
  this = ::operator_new(0x20);
  EntityWeight(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityWeight::StaticClassInit() */

void EntityWeight::StaticClassInit(void)

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
    std::string::string(asStack_10,"EntityWeight");
    (*pcVar2)(plVar1,asStack_10,FUN_03e07054,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityWeight::StaticGetClass() */

long * EntityWeight::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EntityWeight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EntityWeight::GetClass() const */

long * EntityWeight::GetClass(void)

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
  (*pcVar3)(plVar1,"EntityWeight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

