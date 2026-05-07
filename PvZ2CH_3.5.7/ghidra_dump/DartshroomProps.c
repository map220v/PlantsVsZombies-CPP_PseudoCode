// Class: DartshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartshroomProps::StaticClassInit() */

void DartshroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DartshroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8d998,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DartshroomProps::DartshroomProps() */

void __thiscall DartshroomProps::DartshroomProps(DartshroomProps *this)

{
  CabbagepultProps::CabbagepultProps((CabbagepultProps *)this);
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined4 *)(this + 0x2c8) = 4;
  *(undefined ***)this = &PTR_GetClass_067a4b00;
  return;
}


/* DartshroomProps::StaticNew() */

DartshroomProps * DartshroomProps::StaticNew(void)

{
  DartshroomProps *this;
  
  this = ::operator_new(0x2d0);
  DartshroomProps(this);
  return this;
}


/* DartshroomProps::~DartshroomProps() */

void __thiscall DartshroomProps::~DartshroomProps(DartshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4b00;
  CabbagepultProps::~CabbagepultProps((CabbagepultProps *)this);
  return;
}


/* DartshroomProps::~DartshroomProps() */

void __thiscall DartshroomProps::~DartshroomProps(DartshroomProps *this)

{
  ~DartshroomProps(this);
  AK::FreeHook(this);
  return;
}


/* DartshroomProps::StaticGetClass() */

long * DartshroomProps::StaticGetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"DartshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartshroomProps::GetClass() const */

long * DartshroomProps::GetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"DartshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

