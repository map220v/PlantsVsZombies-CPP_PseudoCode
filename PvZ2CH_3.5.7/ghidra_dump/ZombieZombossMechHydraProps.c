// Class: ZombieZombossMechHydraProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechHydraProps::StaticClassInit() */

void ZombieZombossMechHydraProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechHydraProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f54780,0x2c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechHydraProps::StaticGetClass() */

long * ZombieZombossMechHydraProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechDarkProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechHydraProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechHydraProps::GetClass() const */

long * ZombieZombossMechHydraProps::GetClass(void)

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
  uVar2 = ZombieZombossMechDarkProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechHydraProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechHydraProps::ZombieZombossMechHydraProps() */

void __thiscall
ZombieZombossMechHydraProps::ZombieZombossMechHydraProps(ZombieZombossMechHydraProps *this)

{
  ZombieZombossMechDarkProps::ZombieZombossMechDarkProps((ZombieZombossMechDarkProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a1ed80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a8));
  return;
}


/* ZombieZombossMechHydraProps::StaticNew() */

ZombieZombossMechHydraProps * ZombieZombossMechHydraProps::StaticNew(void)

{
  ZombieZombossMechHydraProps *this;
  
  this = ::operator_new(0x2c0);
  ZombieZombossMechHydraProps(this);
  return this;
}


/* ZombieZombossMechHydraProps::~ZombieZombossMechHydraProps() */

void __thiscall
ZombieZombossMechHydraProps::~ZombieZombossMechHydraProps(ZombieZombossMechHydraProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1ed80;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2a8));
  ZombieZombossMechDarkProps::~ZombieZombossMechDarkProps((ZombieZombossMechDarkProps *)this);
  return;
}


/* ZombieZombossMechHydraProps::~ZombieZombossMechHydraProps() */

void __thiscall
ZombieZombossMechHydraProps::~ZombieZombossMechHydraProps(ZombieZombossMechHydraProps *this)

{
  ~ZombieZombossMechHydraProps(this);
  AK::FreeHook(this);
  return;
}

