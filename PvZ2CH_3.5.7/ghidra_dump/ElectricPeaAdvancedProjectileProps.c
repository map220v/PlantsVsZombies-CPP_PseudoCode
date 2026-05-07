// Class: ElectricPeaAdvancedProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAdvancedProjectileProps::StaticClassInit() */

void ElectricPeaAdvancedProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaAdvancedProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c10410,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAdvancedProjectileProps::StaticGetClass() */

long * ElectricPeaAdvancedProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaAdvancedProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAdvancedProjectileProps::GetClass() const */

long * ElectricPeaAdvancedProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaAdvancedProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAdvancedProjectileProps::~ElectricPeaAdvancedProjectileProps() */

void __thiscall
ElectricPeaAdvancedProjectileProps::~ElectricPeaAdvancedProjectileProps
          (ElectricPeaAdvancedProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067475a0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ElectricPeaAdvancedProjectileProps::~ElectricPeaAdvancedProjectileProps() */

void __thiscall
ElectricPeaAdvancedProjectileProps::~ElectricPeaAdvancedProjectileProps
          (ElectricPeaAdvancedProjectileProps *this)

{
  ~ElectricPeaAdvancedProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ElectricPeaAdvancedProjectileProps::ElectricPeaAdvancedProjectileProps() */

void __thiscall
ElectricPeaAdvancedProjectileProps::ElectricPeaAdvancedProjectileProps
          (ElectricPeaAdvancedProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067475a0;
  return;
}


/* ElectricPeaAdvancedProjectileProps::StaticNew() */

ElectricPeaAdvancedProjectileProps * ElectricPeaAdvancedProjectileProps::StaticNew(void)

{
  ElectricPeaAdvancedProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ElectricPeaAdvancedProjectileProps(this);
  return this;
}

