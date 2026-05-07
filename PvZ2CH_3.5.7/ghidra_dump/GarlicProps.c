// Class: GarlicProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GarlicProps::StaticClassInit() */

void GarlicProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GarlicStateInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04161fcc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GarlicProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04163c74,0x3a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GarlicProps::StaticGetClass() */

long * GarlicProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GarlicProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GarlicProps::GetClass() const */

long * GarlicProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GarlicProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GarlicProps::GarlicProps() */

void __thiscall GarlicProps::GarlicProps(GarlicProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067f2bd0;
  GarlicStateInfo::GarlicStateInfo((GarlicStateInfo *)(this + 0x2b8));
  GarlicStateInfo::GarlicStateInfo((GarlicStateInfo *)(this + 0x2e8));
  GarlicStateInfo::GarlicStateInfo((GarlicStateInfo *)(this + 0x318));
  *(undefined4 *)(this + 0x34c) = 0x41200000;
  *(undefined4 *)(this + 0x348) = 0;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x350));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x378));
  return;
}


/* GarlicProps::StaticNew() */

GarlicProps * GarlicProps::StaticNew(void)

{
  GarlicProps *this;
  
  this = ::operator_new(0x3a0);
  GarlicProps(this);
  return this;
}


/* GarlicProps::~GarlicProps() */

void __thiscall GarlicProps::~GarlicProps(GarlicProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067f2bd0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x378));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x350));
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x318));
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x2e8));
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GarlicProps::~GarlicProps() */

void __thiscall GarlicProps::~GarlicProps(GarlicProps *this)

{
  ~GarlicProps(this);
  AK::FreeHook(this);
  return;
}

