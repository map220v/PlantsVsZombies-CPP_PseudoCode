// Class: EleocurlingProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EleocurlingProps::StaticClassInit() */

void EleocurlingProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EleocurlingProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04234f54,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EleocurlingProps::StaticGetClass() */

long * EleocurlingProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingProps::GetClass() const */

long * EleocurlingProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EleocurlingProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EleocurlingProps::EleocurlingProps() */

void __thiscall EleocurlingProps::EleocurlingProps(EleocurlingProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06812100;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x40a00000;
  *(undefined4 *)(this + 0x2b8) = 0x3ecccccd;
  *(undefined4 *)(this + 700) = 0x3f333333;
  *(undefined4 *)(this + 0x2c0) = 0x40000000;
  *(undefined4 *)(this + 0x2cc) = 0x40400000;
  *(undefined4 *)(this + 0x2d0) = 0x3f333333;
  return;
}


/* EleocurlingProps::StaticNew() */

EleocurlingProps * EleocurlingProps::StaticNew(void)

{
  EleocurlingProps *this;
  
  this = ::operator_new(0x2d8);
  EleocurlingProps(this);
  return this;
}


/* EleocurlingProps::~EleocurlingProps() */

void __thiscall EleocurlingProps::~EleocurlingProps(EleocurlingProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06812100;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EleocurlingProps::~EleocurlingProps() */

void __thiscall EleocurlingProps::~EleocurlingProps(EleocurlingProps *this)

{
  ~EleocurlingProps(this);
  AK::FreeHook(this);
  return;
}

