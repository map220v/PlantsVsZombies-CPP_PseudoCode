// Class: ZombiePvpWizardProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizardProps::StaticClassInit() */

void ZombiePvpWizardProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpWizardProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0499cfac,0x270,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpWizardProps::StaticGetClass() */

long * ZombiePvpWizardProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpWizardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpWizardProps::GetClass() const */

long * ZombiePvpWizardProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePvpWizardProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpWizardProps::ZombiePvpWizardProps() */

void __thiscall ZombiePvpWizardProps::ZombiePvpWizardProps(ZombiePvpWizardProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0691ece0;
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
  *(undefined4 *)(this + 0x268) = 0;
  return;
}


/* ZombiePvpWizardProps::StaticNew() */

ZombiePvpWizardProps * ZombiePvpWizardProps::StaticNew(void)

{
  ZombiePvpWizardProps *this;
  
  this = ::operator_new(0x270);
  ZombiePvpWizardProps(this);
  return this;
}


/* ZombiePvpWizardProps::~ZombiePvpWizardProps() */

void __thiscall ZombiePvpWizardProps::~ZombiePvpWizardProps(ZombiePvpWizardProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0691ece0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x240));
  std::string::~string((string *)(this + 0x238));
  std::string::~string((string *)(this + 0x220));
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePvpWizardProps::~ZombiePvpWizardProps() */

void __thiscall ZombiePvpWizardProps::~ZombiePvpWizardProps(ZombiePvpWizardProps *this)

{
  ~ZombiePvpWizardProps(this);
  AK::FreeHook(this);
  return;
}

