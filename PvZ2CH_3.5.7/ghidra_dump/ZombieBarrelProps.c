// Class: ZombieBarrelProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBarrelProps::StaticClassInit() */

void ZombieBarrelProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieBarrelProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bff68,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBarrelProps::ZombieBarrelProps() */

void __thiscall ZombieBarrelProps::ZombieBarrelProps(ZombieBarrelProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b0a90;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x218));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x240));
  *(undefined4 *)(this + 0x210) = 0x41200000;
  return;
}


/* ZombieBarrelProps::StaticNew() */

ZombieBarrelProps * ZombieBarrelProps::StaticNew(void)

{
  ZombieBarrelProps *this;
  
  this = ::operator_new(0x268);
  ZombieBarrelProps(this);
  return this;
}


/* ZombieBarrelProps::~ZombieBarrelProps() */

void __thiscall ZombieBarrelProps::~ZombieBarrelProps(ZombieBarrelProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0a90;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x240));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x218));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBarrelProps::~ZombieBarrelProps() */

void __thiscall ZombieBarrelProps::~ZombieBarrelProps(ZombieBarrelProps *this)

{
  ~ZombieBarrelProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieBarrelProps::StaticGetClass() */

long * ZombieBarrelProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBarrelProps::GetClass() const */

long * ZombieBarrelProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBarrelProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

