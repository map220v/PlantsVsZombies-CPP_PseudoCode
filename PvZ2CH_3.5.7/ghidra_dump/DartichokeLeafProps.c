// Class: DartichokeLeafProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeafProps::StaticClassInit() */

void DartichokeLeafProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DartichokeLeafProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042e1894,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DartichokeLeafProps::StaticGetClass() */

long * DartichokeLeafProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeLeafProps::GetClass() const */

long * DartichokeLeafProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeLeafProps::~DartichokeLeafProps() */

void __thiscall DartichokeLeafProps::~DartichokeLeafProps(DartichokeLeafProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06830cb0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* DartichokeLeafProps::~DartichokeLeafProps() */

void __thiscall DartichokeLeafProps::~DartichokeLeafProps(DartichokeLeafProps *this)

{
  ~DartichokeLeafProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeLeafProps::DartichokeLeafProps() */

void __thiscall DartichokeLeafProps::DartichokeLeafProps(DartichokeLeafProps *this)

{
  undefined4 uVar1;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  uVar1 = _FUN_042e4b18;
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06830cb0;
  *(undefined4 *)(this + 0x1e8) = uVar1;
  *(undefined4 *)(this + 0x1e4) = 0x40a00000;
  return;
}


/* DartichokeLeafProps::StaticNew() */

DartichokeLeafProps * DartichokeLeafProps::StaticNew(void)

{
  DartichokeLeafProps *this;
  
  this = ::operator_new(0x1f0);
  DartichokeLeafProps(this);
  return this;
}

