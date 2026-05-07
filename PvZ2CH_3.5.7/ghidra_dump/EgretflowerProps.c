// Class: EgretflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerProps::StaticClassInit() */

void EgretflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04261e0c,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerProps::StaticGetClass() */

long * EgretflowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerProps::GetClass() const */

long * EgretflowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerProps::EgretflowerProps() */

void __thiscall EgretflowerProps::EgretflowerProps(EgretflowerProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 2;
  *(undefined ***)this = &PTR_GetClass_0681ce80;
  uVar1 = _FUN_04264d0c;
  *(undefined4 *)(this + 700) = 3;
  *(undefined4 *)(this + 0x2c4) = 0x41000000;
  *(undefined4 *)(this + 0x2c0) = uVar1;
  *(undefined4 *)(this + 0x2c8) = 0x40800000;
  return;
}


/* EgretflowerProps::StaticNew() */

EgretflowerProps * EgretflowerProps::StaticNew(void)

{
  EgretflowerProps *this;
  
  this = ::operator_new(0x2d0);
  EgretflowerProps(this);
  return this;
}


/* EgretflowerProps::~EgretflowerProps() */

void __thiscall EgretflowerProps::~EgretflowerProps(EgretflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681ce80;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EgretflowerProps::~EgretflowerProps() */

void __thiscall EgretflowerProps::~EgretflowerProps(EgretflowerProps *this)

{
  ~EgretflowerProps(this);
  AK::FreeHook(this);
  return;
}

