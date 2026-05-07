// Class: BeghouledArcadeModuleProperties


/* BeghouledArcadeModuleProperties::StaticGetClass() */

long * BeghouledArcadeModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* BeghouledArcadeModuleProperties::GetClass() const */

long * BeghouledArcadeModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BeghouledArcadeModuleProperties",uVar2,StaticNew);
  return sClass;
}


/* BeghouledArcadeModuleProperties::GetModuleClass() const */

long * BeghouledArcadeModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeghouledArcadeModule::sClass != (long *)0x0) {
    return BeghouledArcadeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeghouledArcadeModule::sClass = plVar1;
  uVar2 = ArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledArcadeModule",uVar2,BeghouledArcadeModule::StaticNew);
  return BeghouledArcadeModule::sClass;
}


/* BeghouledArcadeModuleProperties::BeghouledArcadeModuleProperties() */

void __thiscall
BeghouledArcadeModuleProperties::BeghouledArcadeModuleProperties
          (BeghouledArcadeModuleProperties *this)

{
  ArcadeModuleProperties::ArcadeModuleProperties((ArcadeModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06737180;
  return;
}


/* BeghouledArcadeModuleProperties::StaticNew() */

BeghouledArcadeModuleProperties * BeghouledArcadeModuleProperties::StaticNew(void)

{
  BeghouledArcadeModuleProperties *this;
  
  this = ::operator_new(0x40);
  BeghouledArcadeModuleProperties(this);
  return this;
}


/* BeghouledArcadeModuleProperties::~BeghouledArcadeModuleProperties() */

void __thiscall
BeghouledArcadeModuleProperties::~BeghouledArcadeModuleProperties
          (BeghouledArcadeModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06737180;
  ArcadeModuleProperties::~ArcadeModuleProperties((ArcadeModuleProperties *)this);
  return;
}


/* BeghouledArcadeModuleProperties::~BeghouledArcadeModuleProperties() */

void __thiscall
BeghouledArcadeModuleProperties::~BeghouledArcadeModuleProperties
          (BeghouledArcadeModuleProperties *this)

{
  ~BeghouledArcadeModuleProperties(this);
  AK::FreeHook(this);
  return;
}

