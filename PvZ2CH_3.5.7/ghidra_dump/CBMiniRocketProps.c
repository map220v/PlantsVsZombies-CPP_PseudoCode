// Class: CBMiniRocketProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CBMiniRocketProps::StaticClassInit() */

void CBMiniRocketProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CBMiniRocketProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0414682c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CBMiniRocketProps::StaticGetClass() */

long * CBMiniRocketProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CBMiniRocketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBMiniRocketProps::GetClass() const */

long * CBMiniRocketProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CBMiniRocketProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CBMiniRocketProps::~CBMiniRocketProps() */

void __thiscall CBMiniRocketProps::~CBMiniRocketProps(CBMiniRocketProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ef600;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* CBMiniRocketProps::~CBMiniRocketProps() */

void __thiscall CBMiniRocketProps::~CBMiniRocketProps(CBMiniRocketProps *this)

{
  ~CBMiniRocketProps(this);
  AK::FreeHook(this);
  return;
}


/* CBMiniRocketProps::CBMiniRocketProps() */

void __thiscall CBMiniRocketProps::CBMiniRocketProps(CBMiniRocketProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067ef600;
  return;
}


/* CBMiniRocketProps::StaticNew() */

CBMiniRocketProps * CBMiniRocketProps::StaticNew(void)

{
  CBMiniRocketProps *this;
  
  this = ::operator_new(0x1e8);
  CBMiniRocketProps(this);
  return this;
}

