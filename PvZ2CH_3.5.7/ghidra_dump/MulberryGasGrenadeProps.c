// Class: MulberryGasGrenadeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryGasGrenadeProps::StaticClassInit() */

void MulberryGasGrenadeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryGasGrenadeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0d55c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryGasGrenadeProps::StaticGetClass() */

long * MulberryGasGrenadeProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MulberryGasGrenadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryGasGrenadeProps::GetClass() const */

long * MulberryGasGrenadeProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MulberryGasGrenadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryGasGrenadeProps::~MulberryGasGrenadeProps() */

void __thiscall MulberryGasGrenadeProps::~MulberryGasGrenadeProps(MulberryGasGrenadeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06746e20;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MulberryGasGrenadeProps::~MulberryGasGrenadeProps() */

void __thiscall MulberryGasGrenadeProps::~MulberryGasGrenadeProps(MulberryGasGrenadeProps *this)

{
  ~MulberryGasGrenadeProps(this);
  AK::FreeHook(this);
  return;
}


/* MulberryGasGrenadeProps::MulberryGasGrenadeProps() */

void __thiscall MulberryGasGrenadeProps::MulberryGasGrenadeProps(MulberryGasGrenadeProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_06746e20;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* MulberryGasGrenadeProps::StaticNew() */

MulberryGasGrenadeProps * MulberryGasGrenadeProps::StaticNew(void)

{
  MulberryGasGrenadeProps *this;
  
  this = ::operator_new(0x1e8);
  MulberryGasGrenadeProps(this);
  return this;
}

