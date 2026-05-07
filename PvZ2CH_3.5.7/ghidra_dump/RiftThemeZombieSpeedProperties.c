// Class: RiftThemeZombieSpeedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombieSpeedProperties::StaticClassInit() */

void RiftThemeZombieSpeedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeZombieSpeedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037072b0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeZombieSpeedProperties::StaticGetClass() */

long * RiftThemeZombieSpeedProperties::StaticGetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeZombieSpeedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpeedProperties::GetClass() const */

long * RiftThemeZombieSpeedProperties::GetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeZombieSpeedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpeedProperties::RiftThemeZombieSpeedProperties() */

void __thiscall
RiftThemeZombieSpeedProperties::RiftThemeZombieSpeedProperties(RiftThemeZombieSpeedProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06687260;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* RiftThemeZombieSpeedProperties::StaticNew() */

RiftThemeZombieSpeedProperties * RiftThemeZombieSpeedProperties::StaticNew(void)

{
  RiftThemeZombieSpeedProperties *this;
  
  this = ::operator_new(0x50);
  RiftThemeZombieSpeedProperties(this);
  return this;
}


/* RiftThemeZombieSpeedProperties::~RiftThemeZombieSpeedProperties() */

void __thiscall
RiftThemeZombieSpeedProperties::~RiftThemeZombieSpeedProperties
          (RiftThemeZombieSpeedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06687260;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeZombieSpeedProperties::~RiftThemeZombieSpeedProperties() */

void __thiscall
RiftThemeZombieSpeedProperties::~RiftThemeZombieSpeedProperties
          (RiftThemeZombieSpeedProperties *this)

{
  ~RiftThemeZombieSpeedProperties(this);
  AK::FreeHook(this);
  return;
}

