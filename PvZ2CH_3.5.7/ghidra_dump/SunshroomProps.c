// Class: SunshroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunshroomProps::StaticClassInit() */

void SunshroomProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SunshroomGrowthStates");
    (*pcVar3)(plVar2,asStack_10,FUN_03f819f4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SunshroomProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03f8f5e8,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunshroomProps::SunshroomProps() */

void __thiscall SunshroomProps::SunshroomProps(SunshroomProps *this)

{
  SunflowerProps::SunflowerProps((SunflowerProps *)this);
  *(undefined ***)this = &PTR_GetClass_067a4740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined4 *)(this + 0x2e4) = 0x3f800000;
  *(undefined4 *)(this + 0x2e8) = 0x3f800000;
  return;
}


/* SunshroomProps::StaticNew() */

SunshroomProps * SunshroomProps::StaticNew(void)

{
  SunshroomProps *this;
  
  this = ::operator_new(0x2f0);
  SunshroomProps(this);
  return this;
}


/* SunshroomProps::~SunshroomProps() */

void __thiscall SunshroomProps::~SunshroomProps(SunshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a4740;
  std::
  vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
  ::~vector((vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
             *)(this + 0x2c8));
  SunflowerProps::~SunflowerProps((SunflowerProps *)this);
  return;
}


/* SunshroomProps::~SunshroomProps() */

void __thiscall SunshroomProps::~SunshroomProps(SunshroomProps *this)

{
  ~SunshroomProps(this);
  AK::FreeHook(this);
  return;
}


/* SunshroomProps::StaticGetClass() */

long * SunshroomProps::StaticGetClass(void)

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
  uVar2 = SunflowerProps::StaticGetClass();
  (*pcVar3)(plVar1,"SunshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunshroomProps::GetClass() const */

long * SunshroomProps::GetClass(void)

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
  uVar2 = SunflowerProps::StaticGetClass();
  (*pcVar3)(plVar1,"SunshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

