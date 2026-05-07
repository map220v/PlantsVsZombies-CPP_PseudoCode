// Class: BoomFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerProps::StaticClassInit() */

void BoomFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04116114,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerProps::StaticGetClass() */

long * BoomFlowerProps::StaticGetClass(void)

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
  uVar2 = PlantLauncherProps::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerProps::GetClass() const */

long * BoomFlowerProps::GetClass(void)

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
  uVar2 = PlantLauncherProps::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerProps::BoomFlowerProps() */

void __thiscall BoomFlowerProps::BoomFlowerProps(BoomFlowerProps *this)

{
  PlantLauncherProps::PlantLauncherProps((PlantLauncherProps *)this);
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined ***)this = &PTR_GetClass_067e6870;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = 0x40a00000;
  *(undefined4 *)(this + 0x2e4) = 0x3f800000;
  *(undefined4 *)(this + 0x2e8) = 0x3f800000;
  *(undefined4 *)(this + 0x2ec) = 0x42480000;
  *(undefined4 *)(this + 0x2f0) = 0x42480000;
  *(undefined4 *)(this + 0x2f4) = 0x3e19999a;
  return;
}


/* BoomFlowerProps::StaticNew() */

BoomFlowerProps * BoomFlowerProps::StaticNew(void)

{
  BoomFlowerProps *this;
  
  this = ::operator_new(0x2f8);
  BoomFlowerProps(this);
  return this;
}


/* BoomFlowerProps::~BoomFlowerProps() */

void __thiscall BoomFlowerProps::~BoomFlowerProps(BoomFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067e6870;
  PlantLauncherProps::~PlantLauncherProps((PlantLauncherProps *)this);
  return;
}


/* BoomFlowerProps::~BoomFlowerProps() */

void __thiscall BoomFlowerProps::~BoomFlowerProps(BoomFlowerProps *this)

{
  ~BoomFlowerProps(this);
  AK::FreeHook(this);
  return;
}

