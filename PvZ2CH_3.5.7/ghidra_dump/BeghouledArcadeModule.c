// Class: BeghouledArcadeModule


/* BeghouledArcadeModule::StaticGetClass() */

long * BeghouledArcadeModule::StaticGetClass(void)

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
  uVar2 = ArcadeModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledArcadeModule",uVar2,StaticNew);
  return sClass;
}


/* BeghouledArcadeModule::BeghouledArcadeModule() */

void __thiscall BeghouledArcadeModule::BeghouledArcadeModule(BeghouledArcadeModule *this)

{
  ArcadeModule::ArcadeModule((ArcadeModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06737230;
  return;
}


/* BeghouledArcadeModule::StaticNew() */

BeghouledArcadeModule * BeghouledArcadeModule::StaticNew(void)

{
  BeghouledArcadeModule *this;
  
  this = ::operator_new(0x18);
  BeghouledArcadeModule(this);
  return this;
}


/* BeghouledArcadeModule::~BeghouledArcadeModule() */

void __thiscall BeghouledArcadeModule::~BeghouledArcadeModule(BeghouledArcadeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06737230;
  ArcadeModule::~ArcadeModule((ArcadeModule *)this);
  return;
}


/* BeghouledArcadeModule::~BeghouledArcadeModule() */

void __thiscall BeghouledArcadeModule::~BeghouledArcadeModule(BeghouledArcadeModule *this)

{
  ~BeghouledArcadeModule(this);
  AK::FreeHook(this);
  return;
}

