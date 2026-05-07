// Class: MagnifyingGrassProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassProps::StaticClassInit() */

void MagnifyingGrassProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnifyingGrassProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f913d8,0x330,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassProps::MagnifyingGrassProps() */

void __thiscall MagnifyingGrassProps::MagnifyingGrassProps(MagnifyingGrassProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a3de0;
  Sexy::Point::Point((Point *)(this + 0x2c8));
  Sexy::Point::Point((Point *)(this + 0x2d0));
  Sexy::Point::Point((Point *)(this + 0x2d8));
  Sexy::Point::Point((Point *)(this + 0x2e0));
  Sexy::Point::Point((Point *)(this + 0x2e8));
  DVec3::DVec3((DVec3 *)(this + 0x2f8));
  DVec3::DVec3((DVec3 *)(this + 0x304));
  Sexy::Point::Point((Point *)(this + 0x310));
  Sexy::Point::Point((Point *)(this + 0x318));
  *(undefined4 *)(this + 0x2b8) = 0x19;
  *(undefined4 *)(this + 700) = 0x3e800000;
  *(undefined4 *)(this + 0x2c0) = 0x43480000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  *(undefined4 *)(this + 0x2f0) = 0x42aa0000;
  *(undefined4 *)(this + 0x2f4) = 0x43fa0000;
  *(undefined4 *)(this + 0x328) = 0x447a0000;
  return;
}


/* MagnifyingGrassProps::StaticNew() */

MagnifyingGrassProps * MagnifyingGrassProps::StaticNew(void)

{
  MagnifyingGrassProps *this;
  
  this = ::operator_new(0x330);
  MagnifyingGrassProps(this);
  return this;
}


/* MagnifyingGrassProps::~MagnifyingGrassProps() */

void __thiscall MagnifyingGrassProps::~MagnifyingGrassProps(MagnifyingGrassProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3de0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MagnifyingGrassProps::~MagnifyingGrassProps() */

void __thiscall MagnifyingGrassProps::~MagnifyingGrassProps(MagnifyingGrassProps *this)

{
  ~MagnifyingGrassProps(this);
  AK::FreeHook(this);
  return;
}


/* MagnifyingGrassProps::StaticGetClass() */

long * MagnifyingGrassProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagnifyingGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnifyingGrassProps::GetClass() const */

long * MagnifyingGrassProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MagnifyingGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

