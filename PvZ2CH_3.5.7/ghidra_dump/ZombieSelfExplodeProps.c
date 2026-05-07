// Class: ZombieSelfExplodeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSelfExplodeProps::StaticClassInit() */

void ZombieSelfExplodeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSelfExplodeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c07d8,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSelfExplodeProps::ZombieSelfExplodeProps() */

void __thiscall ZombieSelfExplodeProps::ZombieSelfExplodeProps(ZombieSelfExplodeProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0d60;
  *(undefined4 *)(this + 0x210) = 0x42a00000;
  return;
}


/* ZombieSelfExplodeProps::StaticNew() */

ZombieSelfExplodeProps * ZombieSelfExplodeProps::StaticNew(void)

{
  ZombieSelfExplodeProps *this;
  
  this = ::operator_new(0x218);
  ZombieSelfExplodeProps(this);
  return this;
}


/* ZombieSelfExplodeProps::~ZombieSelfExplodeProps() */

void __thiscall ZombieSelfExplodeProps::~ZombieSelfExplodeProps(ZombieSelfExplodeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0d60;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieSelfExplodeProps::~ZombieSelfExplodeProps() */

void __thiscall ZombieSelfExplodeProps::~ZombieSelfExplodeProps(ZombieSelfExplodeProps *this)

{
  ~ZombieSelfExplodeProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieSelfExplodeProps::StaticGetClass() */

long * ZombieSelfExplodeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSelfExplodeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSelfExplodeProps::GetClass() const */

long * ZombieSelfExplodeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSelfExplodeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

