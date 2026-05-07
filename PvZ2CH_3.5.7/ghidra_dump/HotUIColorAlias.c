// Class: HotUIColorAlias


/* HotUIColorAlias::~HotUIColorAlias() */

void __thiscall HotUIColorAlias::~HotUIColorAlias(HotUIColorAlias *this)

{
  *(undefined ***)this = &PTR_GetClass_0666bd30;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* HotUIColorAlias::~HotUIColorAlias() */

void __thiscall HotUIColorAlias::~HotUIColorAlias(HotUIColorAlias *this)

{
  ~HotUIColorAlias(this);
  AK::FreeHook(this);
  return;
}


/* HotUIColorAlias::HotUIColorAlias() */

void __thiscall HotUIColorAlias::HotUIColorAlias(HotUIColorAlias *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_0666bd30;
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* HotUIColorAlias::StaticNew() */

HotUIColorAlias * HotUIColorAlias::StaticNew(void)

{
  HotUIColorAlias *this;
  
  this = ::operator_new(0x18);
  HotUIColorAlias(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIColorAlias::StaticClassInit() */

void HotUIColorAlias::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIColorAlias");
    (*pcVar2)(plVar1,asStack_10,FUN_036236e8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIColorAlias::StaticGetClass() */

long * HotUIColorAlias::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIColorAlias",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIColorAlias::GetClass() const */

long * HotUIColorAlias::GetClass(void)

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
  (*pcVar3)(plVar1,"HotUIColorAlias",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

