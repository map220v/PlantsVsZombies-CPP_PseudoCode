// Class: ChardGuardProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChardGuardProps::StaticClassInit() */

void ChardGuardProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChardGuardProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040b4e84,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChardGuardProps::StaticGetClass() */

long * ChardGuardProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChardGuardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChardGuardProps::GetClass() const */

long * ChardGuardProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ChardGuardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChardGuardProps::ChardGuardProps() */

void __thiscall ChardGuardProps::ChardGuardProps(ChardGuardProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067d4cf0;
  Sexy::Insets::Insets((Insets *)(this + 0x2e4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f8));
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 0x2dc) = 4;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c4) = 0x42c00000;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0x42c00000;
  *(undefined4 *)(this + 0x2d4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  return;
}


/* ChardGuardProps::StaticNew() */

ChardGuardProps * ChardGuardProps::StaticNew(void)

{
  ChardGuardProps *this;
  
  this = ::operator_new(0x310);
  ChardGuardProps(this);
  return this;
}


/* ChardGuardProps::~ChardGuardProps() */

void __thiscall ChardGuardProps::~ChardGuardProps(ChardGuardProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067d4cf0;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2f8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ChardGuardProps::~ChardGuardProps() */

void __thiscall ChardGuardProps::~ChardGuardProps(ChardGuardProps *this)

{
  ~ChardGuardProps(this);
  AK::FreeHook(this);
  return;
}

