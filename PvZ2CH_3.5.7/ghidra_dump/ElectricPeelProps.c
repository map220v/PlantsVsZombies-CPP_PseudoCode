// Class: ElectricPeelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeelProps::StaticClassInit() */

void ElectricPeelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d37c50,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeelProps::StaticGetClass() */

long * ElectricPeelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeelProps::GetClass() const */

long * ElectricPeelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeelProps::ElectricPeelProps() */

void __thiscall ElectricPeelProps::ElectricPeelProps(ElectricPeelProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069ad6e0;
  Set8BytesTo0((string *)(this + 0x2d0));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e8));
  *(undefined4 *)(this + 0x2c0) = 0x3e800000;
  *(undefined4 *)(this + 0x2b8) = 0x43160000;
  *(undefined4 *)(this + 0x2c8) = 0x40000000;
  *(undefined4 *)(this + 0x2c4) = 0x41200000;
  *(undefined4 *)(this + 700) = 0x3dcccccd;
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  std::string::append((string *)(this + 0x2d0),"electric_tile",0x3dcccccd);
  *(undefined4 *)(this + 0x2dc) = 0x41200000;
  *(undefined4 *)(this + 0x2d8) = 0x3f000000;
  return;
}


/* ElectricPeelProps::StaticNew() */

ElectricPeelProps * ElectricPeelProps::StaticNew(void)

{
  ElectricPeelProps *this;
  
  this = ::operator_new(0x318);
  ElectricPeelProps(this);
  return this;
}


/* ElectricPeelProps::~ElectricPeelProps() */

void __thiscall ElectricPeelProps::~ElectricPeelProps(ElectricPeelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069ad6e0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e8));
  std::string::~string((string *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ElectricPeelProps::~ElectricPeelProps() */

void __thiscall ElectricPeelProps::~ElectricPeelProps(ElectricPeelProps *this)

{
  ~ElectricPeelProps(this);
  AK::FreeHook(this);
  return;
}

