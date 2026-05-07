// Class: DevilsFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DevilsFlowerProps::StaticClassInit() */

void DevilsFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DevilsFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d64204,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DevilsFlowerProps::StaticGetClass() */

long * DevilsFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DevilsFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DevilsFlowerProps::GetClass() const */

long * DevilsFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DevilsFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DevilsFlowerProps::DevilsFlowerProps() */

void __thiscall DevilsFlowerProps::DevilsFlowerProps(DevilsFlowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069b4040;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  *(undefined4 *)(this + 0x2d8) = 0x40400000;
  *(undefined4 *)(this + 0x2b8) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2e0) = 0x40400000;
  *(undefined4 *)(this + 0x2ec) = 0x43480000;
  *(undefined4 *)(this + 0x2e4) = 0x40a00000;
  *(undefined4 *)(this + 0x2dc) = 0x3fc00000;
  *(undefined4 *)(this + 0x2e8) = 0x40600000;
  *(undefined4 *)(this + 0x2f0) = 0x43c80000;
  *(undefined4 *)(this + 0x2f4) = 0x40000000;
  *(undefined4 *)(this + 0x2f8) = 0x40000000;
  return;
}


/* DevilsFlowerProps::StaticNew() */

DevilsFlowerProps * DevilsFlowerProps::StaticNew(void)

{
  DevilsFlowerProps *this;
  
  this = ::operator_new(0x300);
  DevilsFlowerProps(this);
  return this;
}


/* DevilsFlowerProps::~DevilsFlowerProps() */

void __thiscall DevilsFlowerProps::~DevilsFlowerProps(DevilsFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069b4040;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DevilsFlowerProps::~DevilsFlowerProps() */

void __thiscall DevilsFlowerProps::~DevilsFlowerProps(DevilsFlowerProps *this)

{
  ~DevilsFlowerProps(this);
  AK::FreeHook(this);
  return;
}

