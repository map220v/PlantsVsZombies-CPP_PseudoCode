// Class: ShadowPeashooterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowPeashooterProps::StaticClassInit() */

void ShadowPeashooterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowPeashooterProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f988f0,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowPeashooterProps::ShadowPeashooterProps() */

void __thiscall ShadowPeashooterProps::ShadowPeashooterProps(ShadowPeashooterProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined4 *)(this + 0x2c8) = 3;
  *(undefined4 *)(this + 0x2e8) = 0x3f000000;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 700) = 0;
  *(undefined4 *)(this + 0x2f0) = 0x3f000000;
  *(undefined4 *)(this + 0x2ec) = 0x3f800000;
  *(undefined4 *)(this + 0x2f4) = 0x3f000000;
  *(undefined4 *)(this + 0x2f8) = 0x41200000;
  return;
}


/* ShadowPeashooterProps::StaticNew() */

ShadowPeashooterProps * ShadowPeashooterProps::StaticNew(void)

{
  ShadowPeashooterProps *this;
  
  this = ::operator_new(0x300);
  ShadowPeashooterProps(this);
  return this;
}


/* ShadowPeashooterProps::~ShadowPeashooterProps() */

void __thiscall ShadowPeashooterProps::~ShadowPeashooterProps(ShadowPeashooterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5640;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ShadowPeashooterProps::~ShadowPeashooterProps() */

void __thiscall ShadowPeashooterProps::~ShadowPeashooterProps(ShadowPeashooterProps *this)

{
  ~ShadowPeashooterProps(this);
  AK::FreeHook(this);
  return;
}


/* ShadowPeashooterProps::StaticGetClass() */

long * ShadowPeashooterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowPeashooterProps::GetClass() const */

long * ShadowPeashooterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowPeashooterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

