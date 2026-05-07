// Class: GeishaSuperProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaSuperProjectileProps::StaticClassInit() */

void GeishaSuperProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaSuperProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2d7dc,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaSuperProjectileProps::StaticGetClass() */

long * GeishaSuperProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeishaSuperProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaSuperProjectileProps::GetClass() const */

long * GeishaSuperProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GeishaSuperProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaSuperProjectileProps::~GeishaSuperProjectileProps() */

void __thiscall
GeishaSuperProjectileProps::~GeishaSuperProjectileProps(GeishaSuperProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674bb30;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* GeishaSuperProjectileProps::~GeishaSuperProjectileProps() */

void __thiscall
GeishaSuperProjectileProps::~GeishaSuperProjectileProps(GeishaSuperProjectileProps *this)

{
  ~GeishaSuperProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* GeishaSuperProjectileProps::GeishaSuperProjectileProps() */

void __thiscall
GeishaSuperProjectileProps::GeishaSuperProjectileProps(GeishaSuperProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0674bb30;
  return;
}


/* GeishaSuperProjectileProps::StaticNew() */

GeishaSuperProjectileProps * GeishaSuperProjectileProps::StaticNew(void)

{
  GeishaSuperProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  GeishaSuperProjectileProps(this);
  return this;
}

