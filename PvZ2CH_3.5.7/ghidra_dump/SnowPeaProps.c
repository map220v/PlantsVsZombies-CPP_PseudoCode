// Class: SnowPeaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowPeaProps::StaticClassInit() */

void SnowPeaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnowPeaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8f920,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnowPeaProps::SnowPeaProps() */

void __thiscall SnowPeaProps::SnowPeaProps(SnowPeaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067a3340;
  return;
}


/* SnowPeaProps::StaticNew() */

SnowPeaProps * SnowPeaProps::StaticNew(void)

{
  SnowPeaProps *this;
  
  this = ::operator_new(0x2c0);
  SnowPeaProps(this);
  return this;
}


/* SnowPeaProps::~SnowPeaProps() */

void __thiscall SnowPeaProps::~SnowPeaProps(SnowPeaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3340;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SnowPeaProps::~SnowPeaProps() */

void __thiscall SnowPeaProps::~SnowPeaProps(SnowPeaProps *this)

{
  ~SnowPeaProps(this);
  AK::FreeHook(this);
  return;
}


/* SnowPeaProps::StaticGetClass() */

long * SnowPeaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnowPeaProps::GetClass() const */

long * SnowPeaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SnowPeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

