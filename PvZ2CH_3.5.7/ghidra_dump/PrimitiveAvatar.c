// Class: PrimitiveAvatar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimitiveAvatar::StaticClassInit() */

void PrimitiveAvatar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimitiveAvatar");
    (*pcVar2)(plVar1,asStack_10,FUN_043ae648,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimitiveAvatar::StaticGetClass() */

long * PrimitiveAvatar::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PrimitiveAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimitiveAvatar::GetClass() const */

long * PrimitiveAvatar::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PrimitiveAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimitiveAvatar::PrimitiveAvatar() */

void __thiscall PrimitiveAvatar::PrimitiveAvatar(PrimitiveAvatar *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06841280;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PrimitiveAvatar::StaticNew() */

PrimitiveAvatar * PrimitiveAvatar::StaticNew(void)

{
  PrimitiveAvatar *this;
  
  this = ::operator_new(0x30);
  PrimitiveAvatar(this);
  return this;
}


/* PrimitiveAvatar::~PrimitiveAvatar() */

void __thiscall PrimitiveAvatar::~PrimitiveAvatar(PrimitiveAvatar *this)

{
  *(undefined ***)this = &PTR_GetClass_06841280;
  std::vector<PlantBoost,std::allocator<PlantBoost>>::~vector
            ((vector<PlantBoost,std::allocator<PlantBoost>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PrimitiveAvatar::~PrimitiveAvatar() */

void __thiscall PrimitiveAvatar::~PrimitiveAvatar(PrimitiveAvatar *this)

{
  ~PrimitiveAvatar(this);
  AK::FreeHook(this);
  return;
}

