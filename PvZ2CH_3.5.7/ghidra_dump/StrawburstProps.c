// Class: StrawburstProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstProps::StaticClassInit() */

void StrawburstProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StrawburstProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04269f2c,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StrawburstProps::StaticGetClass() */

long * StrawburstProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstProps::GetClass() const */

long * StrawburstProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstProps::StrawburstProps() */

void __thiscall StrawburstProps::StrawburstProps(StrawburstProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0681e6a0;
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2c4) = 5;
  *(undefined4 *)(this + 0x2b8) = 0x3e19999a;
  *(undefined4 *)(this + 0x2c0) = 0x3e99999a;
  *(undefined4 *)(this + 0x2c8) = 0x443b8000;
  return;
}


/* StrawburstProps::StaticNew() */

StrawburstProps * StrawburstProps::StaticNew(void)

{
  StrawburstProps *this;
  
  this = ::operator_new(0x2f8);
  StrawburstProps(this);
  return this;
}


/* StrawburstProps::~StrawburstProps() */

void __thiscall StrawburstProps::~StrawburstProps(StrawburstProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681e6a0;
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* StrawburstProps::~StrawburstProps() */

void __thiscall StrawburstProps::~StrawburstProps(StrawburstProps *this)

{
  ~StrawburstProps(this);
  AK::FreeHook(this);
  return;
}

