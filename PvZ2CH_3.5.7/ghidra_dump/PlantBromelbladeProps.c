// Class: PlantBromelbladeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBromelbladeProps::StaticClassInit() */

void PlantBromelbladeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBromelbladeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0426f4bc,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBromelbladeProps::StaticGetClass() */

long * PlantBromelbladeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBromelbladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBromelbladeProps::GetClass() const */

long * PlantBromelbladeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBromelbladeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBromelbladeProps::PlantBromelbladeProps() */

void __thiscall PlantBromelbladeProps::PlantBromelbladeProps(PlantBromelbladeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0681fcb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  *(undefined4 *)(this + 700) = 0x3f000000;
  *(undefined4 *)(this + 0x2b8) = 0x3e4ccccd;
  return;
}


/* PlantBromelbladeProps::StaticNew() */

PlantBromelbladeProps * PlantBromelbladeProps::StaticNew(void)

{
  PlantBromelbladeProps *this;
  
  this = ::operator_new(0x2d8);
  PlantBromelbladeProps(this);
  return this;
}


/* PlantBromelbladeProps::~PlantBromelbladeProps() */

void __thiscall PlantBromelbladeProps::~PlantBromelbladeProps(PlantBromelbladeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681fcb0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantBromelbladeProps::~PlantBromelbladeProps() */

void __thiscall PlantBromelbladeProps::~PlantBromelbladeProps(PlantBromelbladeProps *this)

{
  ~PlantBromelbladeProps(this);
  AK::FreeHook(this);
  return;
}

