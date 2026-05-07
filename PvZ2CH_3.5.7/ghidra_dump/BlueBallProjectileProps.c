// Class: BlueBallProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueBallProjectileProps::StaticClassInit() */

void BlueBallProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlueBallProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04299920,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueBallProjectileProps::StaticGetClass() */

long * BlueBallProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BlueBallProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlueBallProjectileProps::GetClass() const */

long * BlueBallProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BlueBallProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlueBallProjectileProps::~BlueBallProjectileProps() */

void __thiscall BlueBallProjectileProps::~BlueBallProjectileProps(BlueBallProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06827f00;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* BlueBallProjectileProps::~BlueBallProjectileProps() */

void __thiscall BlueBallProjectileProps::~BlueBallProjectileProps(BlueBallProjectileProps *this)

{
  ~BlueBallProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* BlueBallProjectileProps::BlueBallProjectileProps() */

void __thiscall BlueBallProjectileProps::BlueBallProjectileProps(BlueBallProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_06827f00;
  *(undefined4 *)(this + 0x1e8) = 0;
  return;
}


/* BlueBallProjectileProps::StaticNew() */

BlueBallProjectileProps * BlueBallProjectileProps::StaticNew(void)

{
  BlueBallProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  BlueBallProjectileProps(this);
  return this;
}

