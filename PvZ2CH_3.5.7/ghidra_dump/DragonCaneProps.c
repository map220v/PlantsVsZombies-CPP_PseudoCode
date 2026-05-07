// Class: DragonCaneProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonCaneProps::StaticClassInit() */

void DragonCaneProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonCaneProps");
    (*pcVar2)(plVar1,asStack_10,FUN_041420d4,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonCaneProps::StaticGetClass() */

long * DragonCaneProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonCaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonCaneProps::GetClass() const */

long * DragonCaneProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonCaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonCaneProps::DragonCaneProps() */

void __thiscall DragonCaneProps::DragonCaneProps(DragonCaneProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2c8) = 1;
  *(undefined ***)this = &PTR_GetClass_067edff0;
  *(undefined4 *)(this + 0x2d0) = 2;
  *(undefined4 *)(this + 0x2d4) = 5;
  *(undefined4 *)(this + 0x2cc) = 3;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x2b8) = 0x3f333333;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2c4) = 0x43020000;
  return;
}


/* DragonCaneProps::StaticNew() */

DragonCaneProps * DragonCaneProps::StaticNew(void)

{
  DragonCaneProps *this;
  
  this = ::operator_new(0x2d8);
  DragonCaneProps(this);
  return this;
}


/* DragonCaneProps::~DragonCaneProps() */

void __thiscall DragonCaneProps::~DragonCaneProps(DragonCaneProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067edff0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DragonCaneProps::~DragonCaneProps() */

void __thiscall DragonCaneProps::~DragonCaneProps(DragonCaneProps *this)

{
  ~DragonCaneProps(this);
  AK::FreeHook(this);
  return;
}

