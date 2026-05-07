// Class: SpartanBambooProps


/* SpartanBambooProps::GetPacketCoolDownTime(int) const */

float __thiscall SpartanBambooProps::GetPacketCoolDownTime(SpartanBambooProps *this,int param_1)

{
  return *(float *)(this + 0x30) - (float)((param_1 + -1) * 3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpartanBambooProps::StaticClassInit() */

void SpartanBambooProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpartanBambooProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04e46154,0x360,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpartanBambooProps::StaticGetClass() */

long * SpartanBambooProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SpartanBambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpartanBambooProps::GetClass() const */

long * SpartanBambooProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SpartanBambooProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpartanBambooProps::SpartanBambooProps() */

void __thiscall SpartanBambooProps::SpartanBambooProps(SpartanBambooProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069deb00;
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c8));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2f0));
  ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  *(undefined4 *)(this + 0x2c0) = 0x42c80000;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0x3f800000;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined4 *)(this + 0x354) = 0x43af0000;
  *(undefined4 *)(this + 0x350) = 0;
  *(undefined4 *)(this + 0x358) = 0x3f99999a;
  *(undefined4 *)(this + 0x35c) = 0x44af0000;
  return;
}


/* SpartanBambooProps::StaticNew() */

SpartanBambooProps * SpartanBambooProps::StaticNew(void)

{
  SpartanBambooProps *this;
  
  this = ::operator_new(0x360);
  SpartanBambooProps(this);
  return this;
}


/* SpartanBambooProps::~SpartanBambooProps() */

void __thiscall SpartanBambooProps::~SpartanBambooProps(SpartanBambooProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069deb00;
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x318));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2f0));
  ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SpartanBambooProps::~SpartanBambooProps() */

void __thiscall SpartanBambooProps::~SpartanBambooProps(SpartanBambooProps *this)

{
  ~SpartanBambooProps(this);
  AK::FreeHook(this);
  return;
}

