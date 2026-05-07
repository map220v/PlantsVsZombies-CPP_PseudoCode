// Class: RambutanSmallSnowballProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanSmallSnowballProjectileProps::StaticClassInit() */

void RambutanSmallSnowballProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RambutanSmallSnowballProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038a2fd4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RambutanSmallSnowballProjectileProps::StaticGetClass() */

long * RambutanSmallSnowballProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RambutanSmallSnowballProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanSmallSnowballProjectileProps::GetClass() const */

long * RambutanSmallSnowballProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RambutanSmallSnowballProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanSmallSnowballProjectileProps::~RambutanSmallSnowballProjectileProps() */

void __thiscall
RambutanSmallSnowballProjectileProps::~RambutanSmallSnowballProjectileProps
          (RambutanSmallSnowballProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066b1cd0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* RambutanSmallSnowballProjectileProps::~RambutanSmallSnowballProjectileProps() */

void __thiscall
RambutanSmallSnowballProjectileProps::~RambutanSmallSnowballProjectileProps
          (RambutanSmallSnowballProjectileProps *this)

{
  ~RambutanSmallSnowballProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* RambutanSmallSnowballProjectileProps::RambutanSmallSnowballProjectileProps() */

void __thiscall
RambutanSmallSnowballProjectileProps::RambutanSmallSnowballProjectileProps
          (RambutanSmallSnowballProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  this[0x1e4] = (RambutanSmallSnowballProjectileProps)0x0;
  *(undefined ***)this = &PTR_GetClass_066b1cd0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* RambutanSmallSnowballProjectileProps::StaticNew() */

RambutanSmallSnowballProjectileProps * RambutanSmallSnowballProjectileProps::StaticNew(void)

{
  RambutanSmallSnowballProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  RambutanSmallSnowballProjectileProps(this);
  return this;
}

