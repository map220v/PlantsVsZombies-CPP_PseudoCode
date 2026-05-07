// Class: ZombieDarkWizardProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkWizardProps::StaticClassInit() */

void ZombieDarkWizardProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDarkWizardProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04664408,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkWizardProps::StaticGetClass() */

long * ZombieDarkWizardProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkWizardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizardProps::GetClass() const */

long * ZombieDarkWizardProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkWizardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkWizardProps::ZombieDarkWizardProps() */

void __thiscall ZombieDarkWizardProps::ZombieDarkWizardProps(ZombieDarkWizardProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06890490;
  Set8BytesTo0(this + 0x210);
  Sexy::Point::Point((Point *)(this + 0x218));
  Set8BytesTo0((string *)(this + 0x220));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x228));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x230));
  Set8BytesTo0(this + 0x238);
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x240));
  std::string::append((string *)(this + 0x220),"Play_RaZombie_WandActivate",in_x2);
  return;
}


/* ZombieDarkWizardProps::StaticNew() */

ZombieDarkWizardProps * ZombieDarkWizardProps::StaticNew(void)

{
  ZombieDarkWizardProps *this;
  
  this = ::operator_new(0x268);
  ZombieDarkWizardProps(this);
  return this;
}


/* ZombieDarkWizardProps::~ZombieDarkWizardProps() */

void __thiscall ZombieDarkWizardProps::~ZombieDarkWizardProps(ZombieDarkWizardProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06890490;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x240));
  std::string::~string((string *)(this + 0x238));
  std::string::~string((string *)(this + 0x220));
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieDarkWizardProps::~ZombieDarkWizardProps() */

void __thiscall ZombieDarkWizardProps::~ZombieDarkWizardProps(ZombieDarkWizardProps *this)

{
  ~ZombieDarkWizardProps(this);
  AK::FreeHook(this);
  return;
}

