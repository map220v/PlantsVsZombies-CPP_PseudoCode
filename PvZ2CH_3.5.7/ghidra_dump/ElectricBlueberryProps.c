// Class: ElectricBlueberryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBlueberryProps::StaticClassInit() */

void ElectricBlueberryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricBlueberryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040d869c,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricBlueberryProps::StaticGetClass() */

long * ElectricBlueberryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricBlueberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBlueberryProps::GetClass() const */

long * ElectricBlueberryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricBlueberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBlueberryProps::ElectricBlueberryProps() */

void __thiscall ElectricBlueberryProps::ElectricBlueberryProps(ElectricBlueberryProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c4) = 0x40000000;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 0x2d4) = 0x40000000;
  *(undefined4 *)(this + 0x2c8) = 1;
  *(undefined4 *)(this + 0x2d8) = 1;
  *(undefined4 *)(this + 0x2dc) = 1;
  *(undefined4 *)(this + 0x2e4) = 0x41200000;
  *(undefined4 *)(this + 0x2e0) = 1;
  *(undefined ***)this = &PTR_GetClass_067dbcd0;
  *(undefined4 *)(this + 700) = 0x41700000;
  *(undefined4 *)(this + 0x2c0) = 0x41a00000;
  *(undefined4 *)(this + 0x2cc) = 0x41700000;
  *(undefined4 *)(this + 0x2d0) = 0x41a00000;
  *(undefined4 *)(this + 0x2e8) = 0;
  return;
}


/* ElectricBlueberryProps::StaticNew() */

ElectricBlueberryProps * ElectricBlueberryProps::StaticNew(void)

{
  ElectricBlueberryProps *this;
  
  this = ::operator_new(0x2f0);
  ElectricBlueberryProps(this);
  return this;
}


/* ElectricBlueberryProps::~ElectricBlueberryProps() */

void __thiscall ElectricBlueberryProps::~ElectricBlueberryProps(ElectricBlueberryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067dbcd0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ElectricBlueberryProps::~ElectricBlueberryProps() */

void __thiscall ElectricBlueberryProps::~ElectricBlueberryProps(ElectricBlueberryProps *this)

{
  ~ElectricBlueberryProps(this);
  AK::FreeHook(this);
  return;
}

