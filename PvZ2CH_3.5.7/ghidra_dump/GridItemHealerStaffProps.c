// Class: GridItemHealerStaffProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHealerStaffProps::StaticClassInit() */

void GridItemHealerStaffProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHealerStaffProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee8604,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHealerStaffProps::StaticGetClass() */

long * GridItemHealerStaffProps::StaticGetClass(void)

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
  uVar2 = GridItemEntityTargetingProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHealerStaffProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHealerStaffProps::GetClass() const */

long * GridItemHealerStaffProps::GetClass(void)

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
  uVar2 = GridItemEntityTargetingProps::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHealerStaffProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHealerStaffProps::GridItemHealerStaffProps() */

void __thiscall GridItemHealerStaffProps::GridItemHealerStaffProps(GridItemHealerStaffProps *this)

{
  GridItemEntityTargetingProps::GridItemEntityTargetingProps((GridItemEntityTargetingProps *)this);
  *(undefined ***)this = &PTR_GetClass_06a00080;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x168));
  return;
}


/* GridItemHealerStaffProps::StaticNew() */

GridItemHealerStaffProps * GridItemHealerStaffProps::StaticNew(void)

{
  GridItemHealerStaffProps *this;
  
  this = ::operator_new(400);
  GridItemHealerStaffProps(this);
  return this;
}


/* GridItemHealerStaffProps::~GridItemHealerStaffProps() */

void __thiscall GridItemHealerStaffProps::~GridItemHealerStaffProps(GridItemHealerStaffProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00080;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x168));
  GridItemEntityTargetingProps::~GridItemEntityTargetingProps((GridItemEntityTargetingProps *)this);
  return;
}


/* GridItemHealerStaffProps::~GridItemHealerStaffProps() */

void __thiscall GridItemHealerStaffProps::~GridItemHealerStaffProps(GridItemHealerStaffProps *this)

{
  ~GridItemHealerStaffProps(this);
  AK::FreeHook(this);
  return;
}

