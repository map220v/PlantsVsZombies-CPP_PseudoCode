// Class: SunGunProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunGunProps::StaticClassInit() */

void SunGunProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunGunProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f9811c,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunGunProps::SunGunProps() */

void __thiscall SunGunProps::SunGunProps(SunGunProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5460;
  *(undefined4 *)(this + 0x2b8) = 0x42340000;
  return;
}


/* SunGunProps::StaticNew() */

SunGunProps * SunGunProps::StaticNew(void)

{
  SunGunProps *this;
  
  this = ::operator_new(0x2c0);
  SunGunProps(this);
  return this;
}


/* SunGunProps::~SunGunProps() */

void __thiscall SunGunProps::~SunGunProps(SunGunProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5460;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SunGunProps::~SunGunProps() */

void __thiscall SunGunProps::~SunGunProps(SunGunProps *this)

{
  ~SunGunProps(this);
  AK::FreeHook(this);
  return;
}


/* SunGunProps::StaticGetClass() */

long * SunGunProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunGunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunGunProps::GetClass() const */

long * SunGunProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SunGunProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

