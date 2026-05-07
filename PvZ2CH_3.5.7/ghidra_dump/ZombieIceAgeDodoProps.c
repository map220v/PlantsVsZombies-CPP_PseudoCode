// Class: ZombieIceAgeDodoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeDodoProps::StaticClassInit() */

void ZombieIceAgeDodoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieIceAgeDodoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0476340c,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeDodoProps::StaticGetClass() */

long * ZombieIceAgeDodoProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeDodoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeDodoProps::GetClass() const */

long * ZombieIceAgeDodoProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieIceAgeDodoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeDodoProps::ZombieIceAgeDodoProps() */

void __thiscall ZombieIceAgeDodoProps::ZombieIceAgeDodoProps(ZombieIceAgeDodoProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x228) = 1;
  *(undefined4 *)(this + 0x22c) = 1;
  *(undefined ***)this = &PTR_GetClass_068cee30;
  *(undefined4 *)(this + 0x230) = 1;
  *(undefined4 *)(this + 0x234) = 1;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x248));
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x270));
  Set8BytesTo0(this + 0x298);
  return;
}


/* ZombieIceAgeDodoProps::StaticNew() */

ZombieIceAgeDodoProps * ZombieIceAgeDodoProps::StaticNew(void)

{
  ZombieIceAgeDodoProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieIceAgeDodoProps(this);
  return this;
}


/* ZombieIceAgeDodoProps::~ZombieIceAgeDodoProps() */

void __thiscall ZombieIceAgeDodoProps::~ZombieIceAgeDodoProps(ZombieIceAgeDodoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068cee30;
  std::string::~string((string *)(this + 0x298));
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x270));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x248));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieIceAgeDodoProps::~ZombieIceAgeDodoProps() */

void __thiscall ZombieIceAgeDodoProps::~ZombieIceAgeDodoProps(ZombieIceAgeDodoProps *this)

{
  ~ZombieIceAgeDodoProps(this);
  AK::FreeHook(this);
  return;
}

