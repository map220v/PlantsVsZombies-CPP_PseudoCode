// Class: PeashooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeashooterProps::StaticClassInit() */

void PeashooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeashooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0405778c,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeashooterProps::StaticGetClass() */

long * PeashooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeashooterProps::GetClass() const */

long * PeashooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PeashooterProps::PeashooterProps() */

void __thiscall PeashooterProps::PeashooterProps(PeashooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067c15b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  return;
}


/* PeashooterProps::StaticNew() */

PeashooterProps * PeashooterProps::StaticNew(void)

{
  PeashooterProps *this;
  
  this = ::operator_new(0x2d8);
  PeashooterProps(this);
  return this;
}


/* PeashooterProps::~PeashooterProps() */

void __thiscall PeashooterProps::~PeashooterProps(PeashooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c15b0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PeashooterProps::~PeashooterProps() */

void __thiscall PeashooterProps::~PeashooterProps(PeashooterProps *this)

{
  ~PeashooterProps(this);
  AK::FreeHook(this);
  return;
}

