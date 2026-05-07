// Class: PineconeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PineconeProps::StaticClassInit() */

void PineconeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PineconeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042818c0,0x318,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PineconeProps::StaticGetClass() */

long * PineconeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PineconeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeProps::GetClass() const */

long * PineconeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PineconeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PineconeProps::PineconeProps() */

void __thiscall PineconeProps::PineconeProps(PineconeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 2;
  *(undefined ***)this = &PTR_GetClass_06824200;
  *(undefined4 *)(this + 700) = 0xf;
  *(undefined4 *)(this + 0x2c0) = 10;
  *(undefined4 *)(this + 0x2c8) = 0x42d20000;
  *(undefined4 *)(this + 0x2c4) = 0x42b40000;
  *(undefined4 *)(this + 0x2cc) = 0x41700000;
  *(undefined4 *)(this + 0x2f4) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x3a83126f;
  *(undefined4 *)(this + 0x2e8) = 0x40000000;
  *(undefined4 *)(this + 0x2f8) = 0x3f000000;
  *(undefined4 *)(this + 0x2d4) = 0x42aa0000;
  *(undefined4 *)(this + 0x2d8) = 0x44610000;
  *(undefined4 *)(this + 0x2dc) = 0x44fa0000;
  *(undefined4 *)(this + 0x2e0) = 0x3e19999a;
  *(undefined4 *)(this + 0x2e4) = 0x3d4ccccd;
  *(undefined4 *)(this + 0x2ec) = 0x42480000;
  *(undefined4 *)(this + 0x2f0) = 0x4004b5dd;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x2fc),105.0,105.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x304),0.0,98.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x30c),200.0,98.0);
  return;
}


/* PineconeProps::StaticNew() */

PineconeProps * PineconeProps::StaticNew(void)

{
  PineconeProps *this;
  
  this = ::operator_new(0x318);
  PineconeProps(this);
  return this;
}


/* PineconeProps::~PineconeProps() */

void __thiscall PineconeProps::~PineconeProps(PineconeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06824200;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PineconeProps::~PineconeProps() */

void __thiscall PineconeProps::~PineconeProps(PineconeProps *this)

{
  ~PineconeProps(this);
  AK::FreeHook(this);
  return;
}

