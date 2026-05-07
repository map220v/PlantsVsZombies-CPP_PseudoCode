// Class: HocusCrocusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HocusCrocusProps::StaticClassInit() */

void HocusCrocusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HocusCrocusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b26498,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HocusCrocusProps::StaticGetClass() */

long * HocusCrocusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HocusCrocusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HocusCrocusProps::GetClass() const */

long * HocusCrocusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HocusCrocusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HocusCrocusProps::HocusCrocusProps() */

void __thiscall HocusCrocusProps::HocusCrocusProps(HocusCrocusProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f000000;
  *(undefined4 *)(this + 0x2cc) = 3;
  *(undefined ***)this = &PTR_GetClass_0672def0;
  *(undefined4 *)(this + 700) = 0x40a00000;
  *(undefined4 *)(this + 0x2e8) = 3;
  *(undefined4 *)(this + 0x2c0) = 0x3f000000;
  *(undefined4 *)(this + 0x2d0) = 0x3f000000;
  *(undefined4 *)(this + 0x2d8) = 0x3f000000;
  *(undefined4 *)(this + 0x2c8) = 0x41200000;
  *(undefined4 *)(this + 0x2ec) = 0x40c00000;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 0x2d4) = 0x3e800000;
  *(undefined4 *)(this + 0x2dc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined4 *)(this + 0x2e4) = 0x3f800000;
  *(undefined4 *)(this + 0x2f0) = 0x40800000;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2f8));
  return;
}


/* HocusCrocusProps::StaticNew() */

HocusCrocusProps * HocusCrocusProps::StaticNew(void)

{
  HocusCrocusProps *this;
  
  this = ::operator_new(800);
  HocusCrocusProps(this);
  return this;
}


/* HocusCrocusProps::~HocusCrocusProps() */

void __thiscall HocusCrocusProps::~HocusCrocusProps(HocusCrocusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672def0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2f8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HocusCrocusProps::~HocusCrocusProps() */

void __thiscall HocusCrocusProps::~HocusCrocusProps(HocusCrocusProps *this)

{
  ~HocusCrocusProps(this);
  AK::FreeHook(this);
  return;
}

