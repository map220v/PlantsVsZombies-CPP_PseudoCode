// Class: RiflebambooProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiflebambooProps::StaticClassInit() */

void RiflebambooProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiflebambooProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04053a70,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiflebambooProps::StaticGetClass() */

long * RiflebambooProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiflebambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiflebambooProps::GetClass() const */

long * RiflebambooProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RiflebambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiflebambooProps::RiflebambooProps() */

void __thiscall RiflebambooProps::RiflebambooProps(RiflebambooProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067c0da0;
  *(undefined4 *)(this + 0x2c4) = 0x40400000;
  *(undefined4 *)(this + 700) = 0x43480000;
  *(undefined4 *)(this + 0x2c0) = 0x43960000;
  return;
}


/* RiflebambooProps::StaticNew() */

RiflebambooProps * RiflebambooProps::StaticNew(void)

{
  RiflebambooProps *this;
  
  this = ::operator_new(0x2c8);
  RiflebambooProps(this);
  return this;
}


/* RiflebambooProps::~RiflebambooProps() */

void __thiscall RiflebambooProps::~RiflebambooProps(RiflebambooProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c0da0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* RiflebambooProps::~RiflebambooProps() */

void __thiscall RiflebambooProps::~RiflebambooProps(RiflebambooProps *this)

{
  ~RiflebambooProps(this);
  AK::FreeHook(this);
  return;
}

