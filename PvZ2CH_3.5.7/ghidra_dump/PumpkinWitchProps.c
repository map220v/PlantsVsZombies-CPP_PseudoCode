// Class: PumpkinWitchProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PumpkinWitchProps::StaticClassInit() */

void PumpkinWitchProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PumpkinWitchProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f97b24,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PumpkinWitchProps::PumpkinWitchProps() */

void __thiscall PumpkinWitchProps::PumpkinWitchProps(PumpkinWitchProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5320;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2f0) = 0x40a00000;
  *(undefined4 *)(this + 0x2e8) = 0x3f99999a;
  *(undefined4 *)(this + 0x2f4) = 0x41200000;
  *(undefined4 *)(this + 0x2ec) = 0x43af0000;
  return;
}


/* PumpkinWitchProps::StaticNew() */

PumpkinWitchProps * PumpkinWitchProps::StaticNew(void)

{
  PumpkinWitchProps *this;
  
  this = ::operator_new(0x2f8);
  PumpkinWitchProps(this);
  return this;
}


/* PumpkinWitchProps::~PumpkinWitchProps() */

void __thiscall PumpkinWitchProps::~PumpkinWitchProps(PumpkinWitchProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5320;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  std::vector<PlantLevelStat,std::allocator<PlantLevelStat>>::~vector
            ((vector<PlantLevelStat,std::allocator<PlantLevelStat>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PumpkinWitchProps::~PumpkinWitchProps() */

void __thiscall PumpkinWitchProps::~PumpkinWitchProps(PumpkinWitchProps *this)

{
  ~PumpkinWitchProps(this);
  AK::FreeHook(this);
  return;
}


/* PumpkinWitchProps::StaticGetClass() */

long * PumpkinWitchProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PumpkinWitchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PumpkinWitchProps::GetClass() const */

long * PumpkinWitchProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PumpkinWitchProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

