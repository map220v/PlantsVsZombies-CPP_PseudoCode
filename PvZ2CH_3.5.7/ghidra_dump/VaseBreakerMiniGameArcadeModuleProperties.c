// Class: VaseBreakerMiniGameArcadeModuleProperties


/* VaseBreakerMiniGameArcadeModuleProperties::StaticGetClass() */

long * VaseBreakerMiniGameArcadeModuleProperties::StaticGetClass(void)

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
  uVar2 = VaseBreakerArcadeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerMiniGameArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerMiniGameArcadeModuleProperties::GetClass() const */

long * VaseBreakerMiniGameArcadeModuleProperties::GetClass(void)

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
  uVar2 = VaseBreakerArcadeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerMiniGameArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerMiniGameArcadeModuleProperties::GetModuleClass() const */

long * VaseBreakerMiniGameArcadeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VaseBreakerMiniGameArcadeModule::sClass != (long *)0x0) {
    return VaseBreakerMiniGameArcadeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VaseBreakerMiniGameArcadeModule::sClass = plVar1;
  uVar2 = VaseBreakerArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerMiniGameArcadeModule",uVar2,
            VaseBreakerMiniGameArcadeModule::StaticNew);
  return VaseBreakerMiniGameArcadeModule::sClass;
}


/* VaseBreakerMiniGameArcadeModuleProperties::VaseBreakerMiniGameArcadeModuleProperties() */

void __thiscall
VaseBreakerMiniGameArcadeModuleProperties::VaseBreakerMiniGameArcadeModuleProperties
          (VaseBreakerMiniGameArcadeModuleProperties *this)

{
  VaseBreakerArcadeModuleProperties::VaseBreakerArcadeModuleProperties
            ((VaseBreakerArcadeModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06918600;
  return;
}


/* VaseBreakerMiniGameArcadeModuleProperties::StaticNew() */

VaseBreakerMiniGameArcadeModuleProperties *
VaseBreakerMiniGameArcadeModuleProperties::StaticNew(void)

{
  VaseBreakerMiniGameArcadeModuleProperties *this;
  
  this = ::operator_new(0x40);
  VaseBreakerMiniGameArcadeModuleProperties(this);
  return this;
}


/* VaseBreakerMiniGameArcadeModuleProperties::~VaseBreakerMiniGameArcadeModuleProperties() */

void __thiscall
VaseBreakerMiniGameArcadeModuleProperties::~VaseBreakerMiniGameArcadeModuleProperties
          (VaseBreakerMiniGameArcadeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918600;
  VaseBreakerArcadeModuleProperties::~VaseBreakerArcadeModuleProperties
            ((VaseBreakerArcadeModuleProperties *)this);
  return;
}


/* VaseBreakerMiniGameArcadeModuleProperties::~VaseBreakerMiniGameArcadeModuleProperties() */

void __thiscall
VaseBreakerMiniGameArcadeModuleProperties::~VaseBreakerMiniGameArcadeModuleProperties
          (VaseBreakerMiniGameArcadeModuleProperties *this)

{
  ~VaseBreakerMiniGameArcadeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

