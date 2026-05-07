// Class: LotusshooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusshooterProps::StaticClassInit() */

void LotusshooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotusshooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c01fcc,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotusshooterProps::StaticGetClass() */

long * LotusshooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LotusshooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusshooterProps::GetClass() const */

long * LotusshooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LotusshooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusshooterProps::LotusshooterProps() */

void __thiscall LotusshooterProps::LotusshooterProps(LotusshooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06743be0;
  Sexy::Point::Point((Point *)(this + 0x2cc));
  Sexy::Point::Point((Point *)(this + 0x2d4));
  Sexy::Point::Point((Point *)(this + 0x2dc));
  Sexy::Point::Point((Point *)(this + 0x2e4));
  Sexy::Point::Point((Point *)(this + 0x2ec));
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x43480000;
  *(undefined4 *)(this + 0x2b8) = 0x40a00000;
  *(undefined4 *)(this + 0x2fc) = 0x3f800000;
  *(undefined4 *)(this + 0x300) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x42c80000;
  *(undefined4 *)(this + 0x304) = 0x3f800000;
  *(undefined4 *)(this + 0x2f4) = 0x42aa0000;
  *(undefined4 *)(this + 0x2f8) = 0x43fa0000;
  return;
}


/* LotusshooterProps::StaticNew() */

LotusshooterProps * LotusshooterProps::StaticNew(void)

{
  LotusshooterProps *this;
  
  this = ::operator_new(0x308);
  LotusshooterProps(this);
  return this;
}


/* LotusshooterProps::~LotusshooterProps() */

void __thiscall LotusshooterProps::~LotusshooterProps(LotusshooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06743be0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LotusshooterProps::~LotusshooterProps() */

void __thiscall LotusshooterProps::~LotusshooterProps(LotusshooterProps *this)

{
  ~LotusshooterProps(this);
  AK::FreeHook(this);
  return;
}

