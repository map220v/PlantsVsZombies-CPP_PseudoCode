// Class: EscapeRootProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EscapeRootProps::StaticClassInit() */

void EscapeRootProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EscapeRootProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041a4f68,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EscapeRootProps::StaticGetClass() */

long * EscapeRootProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EscapeRootProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EscapeRootProps::GetClass() const */

long * EscapeRootProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EscapeRootProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EscapeRootProps::EscapeRootProps() */

void __thiscall EscapeRootProps::EscapeRootProps(EscapeRootProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067fddb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  PlantingRestrictionSet::PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0x2e0));
  *(undefined4 *)(this + 0x2c4) = 0x1e;
  return;
}


/* EscapeRootProps::StaticNew() */

EscapeRootProps * EscapeRootProps::StaticNew(void)

{
  EscapeRootProps *this;
  
  this = ::operator_new(0x310);
  EscapeRootProps(this);
  return this;
}


/* EscapeRootProps::~EscapeRootProps() */

void __thiscall EscapeRootProps::~EscapeRootProps(EscapeRootProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fddb0;
  PlantingRestrictionSet::~PlantingRestrictionSet((PlantingRestrictionSet *)(this + 0x2e0));
  std::vector<PlantWeights,std::allocator<PlantWeights>>::~vector
            ((vector<PlantWeights,std::allocator<PlantWeights>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EscapeRootProps::~EscapeRootProps() */

void __thiscall EscapeRootProps::~EscapeRootProps(EscapeRootProps *this)

{
  ~EscapeRootProps(this);
  AK::FreeHook(this);
  return;
}

