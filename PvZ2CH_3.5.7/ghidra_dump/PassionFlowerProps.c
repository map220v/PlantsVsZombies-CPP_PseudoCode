// Class: PassionFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PassionFlowerProps::StaticClassInit() */

void PassionFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PassionFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03962cb8,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PassionFlowerProps::StaticGetClass() */

long * PassionFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerProps::GetClass() const */

long * PassionFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PassionFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PassionFlowerProps::PassionFlowerProps() */

void __thiscall PassionFlowerProps::PassionFlowerProps(PassionFlowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x40c00000;
  *(undefined ***)this = &PTR_GetClass_066d4420;
  *(undefined4 *)(this + 0x2c0) = 0x40c00000;
  *(undefined4 *)(this + 0x2b8) = 0x40800000;
  *(undefined4 *)(this + 0x2c4) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2cc) = 0x3f000000;
  *(undefined4 *)(this + 0x2c8) = 0x3e99999a;
  return;
}


/* PassionFlowerProps::StaticNew() */

PassionFlowerProps * PassionFlowerProps::StaticNew(void)

{
  PassionFlowerProps *this;
  
  this = ::operator_new(0x2d0);
  PassionFlowerProps(this);
  return this;
}


/* PassionFlowerProps::~PassionFlowerProps() */

void __thiscall PassionFlowerProps::~PassionFlowerProps(PassionFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d4420;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PassionFlowerProps::~PassionFlowerProps() */

void __thiscall PassionFlowerProps::~PassionFlowerProps(PassionFlowerProps *this)

{
  ~PassionFlowerProps(this);
  AK::FreeHook(this);
  return;
}

