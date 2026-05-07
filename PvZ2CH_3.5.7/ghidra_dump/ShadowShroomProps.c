// Class: ShadowShroomProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowShroomProps::StaticClassInit() */

void ShadowShroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowShroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd14a0,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowShroomProps::StaticGetClass() */

long * ShadowShroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowShroomProps::GetClass() const */

long * ShadowShroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowShroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowShroomProps::ShadowShroomProps() */

void __thiscall ShadowShroomProps::ShadowShroomProps(ShadowShroomProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0673c2b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2e8) = 1;
  *(undefined4 *)(this + 700) = 0x41200000;
  *(undefined4 *)(this + 0x2c0) = 0x42700000;
  *(undefined4 *)(this + 0x2e0) = 0x3f000000;
  *(undefined4 *)(this + 0x2b8) = 0x42c80000;
  *(undefined4 *)(this + 0x2c4) = 0x42700000;
  *(undefined4 *)(this + 0x2e4) = 0x3f800000;
  return;
}


/* ShadowShroomProps::StaticNew() */

ShadowShroomProps * ShadowShroomProps::StaticNew(void)

{
  ShadowShroomProps *this;
  
  this = ::operator_new(0x2f0);
  ShadowShroomProps(this);
  return this;
}


/* ShadowShroomProps::~ShadowShroomProps() */

void __thiscall ShadowShroomProps::~ShadowShroomProps(ShadowShroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673c2b0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ShadowShroomProps::~ShadowShroomProps() */

void __thiscall ShadowShroomProps::~ShadowShroomProps(ShadowShroomProps *this)

{
  ~ShadowShroomProps(this);
  AK::FreeHook(this);
  return;
}

