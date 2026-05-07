// Class: ZombieBullRiderProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBullRiderProps::StaticClassInit() */

void ZombieBullRiderProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBullRiderProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bf9e0,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBullRiderProps::ZombieBullRiderProps() */

void __thiscall ZombieBullRiderProps::ZombieBullRiderProps(ZombieBullRiderProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x218) = 0x3fc00000;
  *(undefined ***)this = &PTR_GetClass_068b0970;
  *(undefined4 *)(this + 0x210) = 0x43480000;
  *(undefined4 *)(this + 0x214) = 0x43480000;
  return;
}


/* ZombieBullRiderProps::StaticNew() */

ZombieBullRiderProps * ZombieBullRiderProps::StaticNew(void)

{
  ZombieBullRiderProps *this;
  
  this = ::operator_new(0x220);
  ZombieBullRiderProps(this);
  return this;
}


/* ZombieBullRiderProps::~ZombieBullRiderProps() */

void __thiscall ZombieBullRiderProps::~ZombieBullRiderProps(ZombieBullRiderProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0970;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBullRiderProps::~ZombieBullRiderProps() */

void __thiscall ZombieBullRiderProps::~ZombieBullRiderProps(ZombieBullRiderProps *this)

{
  ~ZombieBullRiderProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieBullRiderProps::StaticGetClass() */

long * ZombieBullRiderProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBullRiderProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBullRiderProps::GetClass() const */

long * ZombieBullRiderProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBullRiderProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

