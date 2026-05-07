// Class: GridItemWizardCrucibleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucibleProps::StaticClassInit() */

void GridItemWizardCrucibleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWizardCrucibleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c86f48,0x150,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWizardCrucibleProps::StaticGetClass() */

long * GridItemWizardCrucibleProps::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWizardCrucibleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWizardCrucibleProps::GetClass() const */

long * GridItemWizardCrucibleProps::GetClass(void)

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
  uVar2 = GridItemBreakableTargetProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWizardCrucibleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWizardCrucibleProps::GridItemWizardCrucibleProps() */

void __thiscall
GridItemWizardCrucibleProps::GridItemWizardCrucibleProps(GridItemWizardCrucibleProps *this)

{
  GridItemBreakableTargetProps::GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  *(undefined ***)this = &PTR_GetClass_06994200;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* GridItemWizardCrucibleProps::StaticNew() */

GridItemWizardCrucibleProps * GridItemWizardCrucibleProps::StaticNew(void)

{
  GridItemWizardCrucibleProps *this;
  
  this = ::operator_new(0x150);
  GridItemWizardCrucibleProps(this);
  return this;
}


/* GridItemWizardCrucibleProps::~GridItemWizardCrucibleProps() */

void __thiscall
GridItemWizardCrucibleProps::~GridItemWizardCrucibleProps(GridItemWizardCrucibleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06994200;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x138));
  GridItemBreakableTargetProps::~GridItemBreakableTargetProps((GridItemBreakableTargetProps *)this);
  return;
}


/* GridItemWizardCrucibleProps::~GridItemWizardCrucibleProps() */

void __thiscall
GridItemWizardCrucibleProps::~GridItemWizardCrucibleProps(GridItemWizardCrucibleProps *this)

{
  ~GridItemWizardCrucibleProps(this);
  AK::FreeHook(this);
  return;
}

