// Class: ZombieBalletProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBalletProps::StaticClassInit() */

void ZombieBalletProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBalletProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0464b104,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBalletProps::StaticGetClass() */

long * ZombieBalletProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBalletProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBalletProps::GetClass() const */

long * ZombieBalletProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBalletProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBalletProps::ZombieBalletProps() */

void __thiscall ZombieBalletProps::ZombieBalletProps(ZombieBalletProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068873d0;
  *(undefined4 *)(this + 0x210) = 0x42480000;
  return;
}


/* ZombieBalletProps::StaticNew() */

ZombieBalletProps * ZombieBalletProps::StaticNew(void)

{
  ZombieBalletProps *this;
  
  this = ::operator_new(0x218);
  ZombieBalletProps(this);
  return this;
}


/* ZombieBalletProps::~ZombieBalletProps() */

void __thiscall ZombieBalletProps::~ZombieBalletProps(ZombieBalletProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068873d0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBalletProps::~ZombieBalletProps() */

void __thiscall ZombieBalletProps::~ZombieBalletProps(ZombieBalletProps *this)

{
  ~ZombieBalletProps(this);
  AK::FreeHook(this);
  return;
}

