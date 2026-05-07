// Class: MulberryProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryProps::StaticClassInit() */

void MulberryProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0bbc8,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryProps::StaticGetClass() */

long * MulberryProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MulberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryProps::GetClass() const */

long * MulberryProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MulberryProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryProps::MulberryProps() */

void __thiscall MulberryProps::MulberryProps(MulberryProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined ***)this = &PTR_GetClass_06745e90;
  *(undefined4 *)(this + 0x2c0) = 0x3f19999a;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c8) = 0x3f19999a;
  *(undefined4 *)(this + 0x2d4) = 0x40000000;
  *(undefined4 *)(this + 0x2cc) = 0x3f99999a;
  *(undefined4 *)(this + 0x2d0) = 0x43af0000;
  *(undefined4 *)(this + 0x2d8) = 0x43fa0000;
  return;
}


/* MulberryProps::StaticNew() */

MulberryProps * MulberryProps::StaticNew(void)

{
  MulberryProps *this;
  
  this = ::operator_new(0x2e0);
  MulberryProps(this);
  return this;
}


/* MulberryProps::~MulberryProps() */

void __thiscall MulberryProps::~MulberryProps(MulberryProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06745e90;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MulberryProps::~MulberryProps() */

void __thiscall MulberryProps::~MulberryProps(MulberryProps *this)

{
  ~MulberryProps(this);
  AK::FreeHook(this);
  return;
}

