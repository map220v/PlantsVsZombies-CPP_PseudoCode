// Class: ImpPearProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImpPearProps::StaticClassInit() */

void ImpPearProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ImpPearProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042a401c,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ImpPearProps::StaticGetClass() */

long * ImpPearProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ImpPearProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpPearProps::GetClass() const */

long * ImpPearProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ImpPearProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ImpPearProps::ImpPearProps() */

void __thiscall ImpPearProps::ImpPearProps(ImpPearProps *this)

{
  size_t in_x2;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068298c0;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c0));
  Set8BytesTo0((string *)(this + 0x2e8));
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  std::string::append((string *)(this + 0x2e8),"",in_x2);
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x3f800000;
  *(undefined4 *)(this + 0x2f0) = 0x42c80000;
  *(undefined4 *)(this + 0x2f4) = 0x40000000;
  *(undefined4 *)(this + 0x2fc) = 0x3f800000;
  return;
}


/* ImpPearProps::StaticNew() */

ImpPearProps * ImpPearProps::StaticNew(void)

{
  ImpPearProps *this;
  
  this = ::operator_new(0x308);
  ImpPearProps(this);
  return this;
}


/* ImpPearProps::~ImpPearProps() */

void __thiscall ImpPearProps::~ImpPearProps(ImpPearProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068298c0;
  std::string::~string((string *)(this + 0x2e8));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ImpPearProps::~ImpPearProps() */

void __thiscall ImpPearProps::~ImpPearProps(ImpPearProps *this)

{
  ~ImpPearProps(this);
  AK::FreeHook(this);
  return;
}

