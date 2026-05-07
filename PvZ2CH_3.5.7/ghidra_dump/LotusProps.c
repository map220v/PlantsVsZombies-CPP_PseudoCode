// Class: LotusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusProps::StaticClassInit() */

void LotusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f936dc,0x2c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotusProps::LotusProps() */

void __thiscall LotusProps::LotusProps(LotusProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f99999a;
  *(undefined ***)this = &PTR_GetClass_067a4420;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined4 *)(this + 700) = 0x43af0000;
  return;
}


/* LotusProps::StaticNew() */

LotusProps * LotusProps::StaticNew(void)

{
  LotusProps *this;
  
  this = ::operator_new(0x2c8);
  LotusProps(this);
  return this;
}


/* LotusProps::~LotusProps() */

void __thiscall LotusProps::~LotusProps(LotusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4420;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LotusProps::~LotusProps() */

void __thiscall LotusProps::~LotusProps(LotusProps *this)

{
  ~LotusProps(this);
  AK::FreeHook(this);
  return;
}


/* LotusProps::StaticGetClass() */

long * LotusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LotusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusProps::GetClass() const */

long * LotusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LotusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

