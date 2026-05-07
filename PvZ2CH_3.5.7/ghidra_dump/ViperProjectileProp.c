// Class: ViperProjectileProp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ViperProjectileProp::StaticClassInit() */

void ViperProjectileProp::StaticClassInit(void)

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
    std::string::string(asStack_10,"ViperProjectileProp");
    (*pcVar2)(plVar1,asStack_10,FUN_04d19dd8,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ViperProjectileProp::StaticGetClass() */

long * ViperProjectileProp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ViperProjectileProp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViperProjectileProp::GetClass() const */

long * ViperProjectileProp::GetClass(void)

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
  (*pcVar3)(plVar1,"ViperProjectileProp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ViperProjectileProp::~ViperProjectileProp() */

void __thiscall ViperProjectileProp::~ViperProjectileProp(ViperProjectileProp *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9330;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ViperProjectileProp::~ViperProjectileProp() */

void __thiscall ViperProjectileProp::~ViperProjectileProp(ViperProjectileProp *this)

{
  ~ViperProjectileProp(this);
  AK::FreeHook(this);
  return;
}


/* ViperProjectileProp::ViperProjectileProp() */

void __thiscall ViperProjectileProp::ViperProjectileProp(ViperProjectileProp *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069a9330;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  return;
}


/* ViperProjectileProp::StaticNew() */

ViperProjectileProp * ViperProjectileProp::StaticNew(void)

{
  ViperProjectileProp *this;
  
  this = ::operator_new(0x1f0);
  ViperProjectileProp(this);
  return this;
}

