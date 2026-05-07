// Class: ElectricPeaAvatarProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAvatarProjectileProps::StaticClassInit() */

void ElectricPeaAvatarProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaAvatarProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c10a34,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAvatarProjectileProps::StaticGetClass() */

long * ElectricPeaAvatarProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaAvatarProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAvatarProjectileProps::GetClass() const */

long * ElectricPeaAvatarProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricPeaAvatarProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAvatarProjectileProps::~ElectricPeaAvatarProjectileProps() */

void __thiscall
ElectricPeaAvatarProjectileProps::~ElectricPeaAvatarProjectileProps
          (ElectricPeaAvatarProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06747a80;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ElectricPeaAvatarProjectileProps::~ElectricPeaAvatarProjectileProps() */

void __thiscall
ElectricPeaAvatarProjectileProps::~ElectricPeaAvatarProjectileProps
          (ElectricPeaAvatarProjectileProps *this)

{
  ~ElectricPeaAvatarProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ElectricPeaAvatarProjectileProps::ElectricPeaAvatarProjectileProps() */

void __thiscall
ElectricPeaAvatarProjectileProps::ElectricPeaAvatarProjectileProps
          (ElectricPeaAvatarProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_06747a80;
  *(undefined4 *)(this + 0x1e4) = 0x42c80000;
  return;
}


/* ElectricPeaAvatarProjectileProps::StaticNew() */

ElectricPeaAvatarProjectileProps * ElectricPeaAvatarProjectileProps::StaticNew(void)

{
  ElectricPeaAvatarProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  ElectricPeaAvatarProjectileProps(this);
  return this;
}

