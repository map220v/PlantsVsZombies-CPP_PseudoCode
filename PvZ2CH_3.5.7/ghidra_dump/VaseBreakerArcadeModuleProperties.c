// Class: VaseBreakerArcadeModuleProperties


/* VaseBreakerArcadeModuleProperties::StaticGetClass() */

long * VaseBreakerArcadeModuleProperties::StaticGetClass(void)

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
  uVar2 = ArcadeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerArcadeModuleProperties::GetClass() const */

long * VaseBreakerArcadeModuleProperties::GetClass(void)

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
  uVar2 = ArcadeModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerArcadeModuleProperties::GetModuleClass() const */

long * VaseBreakerArcadeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VaseBreakerArcadeModule::sClass != (long *)0x0) {
    return VaseBreakerArcadeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VaseBreakerArcadeModule::sClass = plVar1;
  uVar2 = ArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerArcadeModule",uVar2,VaseBreakerArcadeModule::StaticNew);
  return VaseBreakerArcadeModule::sClass;
}


/* VaseBreakerArcadeModuleProperties::VaseBreakerArcadeModuleProperties() */

void __thiscall
VaseBreakerArcadeModuleProperties::VaseBreakerArcadeModuleProperties
          (VaseBreakerArcadeModuleProperties *this)

{
  ArcadeModuleProperties::ArcadeModuleProperties((ArcadeModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06918490;
  return;
}


/* VaseBreakerArcadeModuleProperties::StaticNew() */

VaseBreakerArcadeModuleProperties * VaseBreakerArcadeModuleProperties::StaticNew(void)

{
  VaseBreakerArcadeModuleProperties *this;
  
  this = ::operator_new(0x40);
  VaseBreakerArcadeModuleProperties(this);
  return this;
}


/* VaseBreakerArcadeModuleProperties::~VaseBreakerArcadeModuleProperties() */

void __thiscall
VaseBreakerArcadeModuleProperties::~VaseBreakerArcadeModuleProperties
          (VaseBreakerArcadeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918490;
  ArcadeModuleProperties::~ArcadeModuleProperties((ArcadeModuleProperties *)this);
  return;
}


/* VaseBreakerArcadeModuleProperties::~VaseBreakerArcadeModuleProperties() */

void __thiscall
VaseBreakerArcadeModuleProperties::~VaseBreakerArcadeModuleProperties
          (VaseBreakerArcadeModuleProperties *this)

{
  ~VaseBreakerArcadeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

