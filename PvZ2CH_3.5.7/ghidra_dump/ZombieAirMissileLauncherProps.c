// Class: ZombieAirMissileLauncherProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAirMissileLauncherProps::StaticClassInit() */

void ZombieAirMissileLauncherProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAirMissileLauncherProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047a1218,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAirMissileLauncherProps::StaticGetClass() */

long * ZombieAirMissileLauncherProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirMissileLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissileLauncherProps::GetClass() const */

long * ZombieAirMissileLauncherProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAirMissileLauncherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAirMissileLauncherProps::ZombieAirMissileLauncherProps() */

void __thiscall
ZombieAirMissileLauncherProps::ZombieAirMissileLauncherProps(ZombieAirMissileLauncherProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068ddd10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  return;
}


/* ZombieAirMissileLauncherProps::StaticNew() */

ZombieAirMissileLauncherProps * ZombieAirMissileLauncherProps::StaticNew(void)

{
  ZombieAirMissileLauncherProps *this;
  
  this = ::operator_new(0x240);
  ZombieAirMissileLauncherProps(this);
  return this;
}


/* ZombieAirMissileLauncherProps::~ZombieAirMissileLauncherProps() */

void __thiscall
ZombieAirMissileLauncherProps::~ZombieAirMissileLauncherProps(ZombieAirMissileLauncherProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068ddd10;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x228));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieAirMissileLauncherProps::~ZombieAirMissileLauncherProps() */

void __thiscall
ZombieAirMissileLauncherProps::~ZombieAirMissileLauncherProps(ZombieAirMissileLauncherProps *this)

{
  ~ZombieAirMissileLauncherProps(this);
  AK::FreeHook(this);
  return;
}

