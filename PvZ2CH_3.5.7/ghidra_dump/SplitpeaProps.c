// Class: SplitpeaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SplitpeaProps::StaticClassInit() */

void SplitpeaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SplitpeaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8fce0,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SplitpeaProps::SplitpeaProps() */

void __thiscall SplitpeaProps::SplitpeaProps(SplitpeaProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 700) = 1;
  *(undefined ***)this = &PTR_GetClass_067a3480;
  return;
}


/* SplitpeaProps::StaticNew() */

SplitpeaProps * SplitpeaProps::StaticNew(void)

{
  SplitpeaProps *this;
  
  this = ::operator_new(0x2c0);
  SplitpeaProps(this);
  return this;
}


/* SplitpeaProps::~SplitpeaProps() */

void __thiscall SplitpeaProps::~SplitpeaProps(SplitpeaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3480;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SplitpeaProps::~SplitpeaProps() */

void __thiscall SplitpeaProps::~SplitpeaProps(SplitpeaProps *this)

{
  ~SplitpeaProps(this);
  AK::FreeHook(this);
  return;
}


/* SplitpeaProps::StaticGetClass() */

long * SplitpeaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SplitpeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SplitpeaProps::GetClass() const */

long * SplitpeaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SplitpeaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

