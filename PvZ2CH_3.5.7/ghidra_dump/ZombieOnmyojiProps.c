// Class: ZombieOnmyojiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieOnmyojiProps::StaticClassInit() */

void ZombieOnmyojiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieOnmyojiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef42e4,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieOnmyojiProps::StaticGetClass() */

long * ZombieOnmyojiProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieOnmyojiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieOnmyojiProps::GetClass() const */

long * ZombieOnmyojiProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieOnmyojiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieOnmyojiProps::ZombieOnmyojiProps() */

void __thiscall ZombieOnmyojiProps::ZombieOnmyojiProps(ZombieOnmyojiProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06a04c30;
  return;
}


/* ZombieOnmyojiProps::StaticNew() */

ZombieOnmyojiProps * ZombieOnmyojiProps::StaticNew(void)

{
  ZombieOnmyojiProps *this;
  
  this = ::operator_new(0x228);
  ZombieOnmyojiProps(this);
  return this;
}


/* ZombieOnmyojiProps::~ZombieOnmyojiProps() */

void __thiscall ZombieOnmyojiProps::~ZombieOnmyojiProps(ZombieOnmyojiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a04c30;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieOnmyojiProps::~ZombieOnmyojiProps() */

void __thiscall ZombieOnmyojiProps::~ZombieOnmyojiProps(ZombieOnmyojiProps *this)

{
  ~ZombieOnmyojiProps(this);
  AK::FreeHook(this);
  return;
}

