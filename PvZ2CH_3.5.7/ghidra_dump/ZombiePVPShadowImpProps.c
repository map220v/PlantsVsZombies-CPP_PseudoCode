// Class: ZombiePVPShadowImpProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPShadowImpProps::StaticClassInit() */

void ZombiePVPShadowImpProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPShadowImpProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04995100,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPShadowImpProps::StaticGetClass() */

long * ZombiePVPShadowImpProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPShadowImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPShadowImpProps::GetClass() const */

long * ZombiePVPShadowImpProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPShadowImpProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPShadowImpProps::ZombiePVPShadowImpProps() */

void __thiscall ZombiePVPShadowImpProps::ZombiePVPShadowImpProps(ZombiePVPShadowImpProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_0691b880;
  return;
}


/* ZombiePVPShadowImpProps::StaticNew() */

ZombiePVPShadowImpProps * ZombiePVPShadowImpProps::StaticNew(void)

{
  ZombiePVPShadowImpProps *this;
  
  this = ::operator_new(0x218);
  ZombiePVPShadowImpProps(this);
  return this;
}


/* ZombiePVPShadowImpProps::~ZombiePVPShadowImpProps() */

void __thiscall ZombiePVPShadowImpProps::~ZombiePVPShadowImpProps(ZombiePVPShadowImpProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0691b880;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePVPShadowImpProps::~ZombiePVPShadowImpProps() */

void __thiscall ZombiePVPShadowImpProps::~ZombiePVPShadowImpProps(ZombiePVPShadowImpProps *this)

{
  ~ZombiePVPShadowImpProps(this);
  AK::FreeHook(this);
  return;
}

