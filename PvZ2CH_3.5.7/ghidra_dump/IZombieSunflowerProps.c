// Class: IZombieSunflowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieSunflowerProps::StaticClassInit() */

void IZombieSunflowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieSunflowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0341b3f8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieSunflowerProps::StaticGetClass() */

long * IZombieSunflowerProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieSunflowerProps::GetClass() const */

long * IZombieSunflowerProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"IZombieSunflowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieSunflowerProps::IZombieSunflowerProps() */

void __thiscall IZombieSunflowerProps::IZombieSunflowerProps(IZombieSunflowerProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x19;
  *(undefined4 *)(this + 0x214) = 300;
  *(undefined ***)this = &PTR_GetClass_06623600;
  return;
}


/* IZombieSunflowerProps::StaticNew() */

IZombieSunflowerProps * IZombieSunflowerProps::StaticNew(void)

{
  IZombieSunflowerProps *this;
  
  this = ::operator_new(0x218);
  IZombieSunflowerProps(this);
  return this;
}


/* IZombieSunflowerProps::~IZombieSunflowerProps() */

void __thiscall IZombieSunflowerProps::~IZombieSunflowerProps(IZombieSunflowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06623600;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* IZombieSunflowerProps::~IZombieSunflowerProps() */

void __thiscall IZombieSunflowerProps::~IZombieSunflowerProps(IZombieSunflowerProps *this)

{
  ~IZombieSunflowerProps(this);
  AK::FreeHook(this);
  return;
}

