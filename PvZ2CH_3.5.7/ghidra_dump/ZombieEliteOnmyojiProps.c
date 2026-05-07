// Class: ZombieEliteOnmyojiProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteOnmyojiProps::StaticClassInit() */

void ZombieEliteOnmyojiProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteOnmyojiProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef7b7c,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteOnmyojiProps::StaticGetClass() */

long * ZombieEliteOnmyojiProps::StaticGetClass(void)

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
  uVar2 = ZombieOnmyojiProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteOnmyojiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteOnmyojiProps::GetClass() const */

long * ZombieEliteOnmyojiProps::GetClass(void)

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
  uVar2 = ZombieOnmyojiProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteOnmyojiProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteOnmyojiProps::ZombieEliteOnmyojiProps() */

void __thiscall ZombieEliteOnmyojiProps::ZombieEliteOnmyojiProps(ZombieEliteOnmyojiProps *this)

{
  ZombieOnmyojiProps::ZombieOnmyojiProps((ZombieOnmyojiProps *)this);
  *(undefined4 *)(this + 0x22c) = 99;
  *(undefined ***)this = &PTR_GetClass_06a07c00;
  *(undefined4 *)(this + 0x230) = 3;
  *(undefined4 *)(this + 0x234) = 3;
  *(undefined4 *)(this + 0x228) = 0x41f00000;
  *(undefined4 *)(this + 0x224) = 0x43160000;
  return;
}


/* ZombieEliteOnmyojiProps::StaticNew() */

ZombieEliteOnmyojiProps * ZombieEliteOnmyojiProps::StaticNew(void)

{
  ZombieEliteOnmyojiProps *this;
  
  this = ::operator_new(0x238);
  ZombieEliteOnmyojiProps(this);
  return this;
}


/* ZombieEliteOnmyojiProps::~ZombieEliteOnmyojiProps() */

void __thiscall ZombieEliteOnmyojiProps::~ZombieEliteOnmyojiProps(ZombieEliteOnmyojiProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a07c00;
  ZombieOnmyojiProps::~ZombieOnmyojiProps((ZombieOnmyojiProps *)this);
  return;
}


/* ZombieEliteOnmyojiProps::~ZombieEliteOnmyojiProps() */

void __thiscall ZombieEliteOnmyojiProps::~ZombieEliteOnmyojiProps(ZombieEliteOnmyojiProps *this)

{
  ~ZombieEliteOnmyojiProps(this);
  AK::FreeHook(this);
  return;
}

