// Class: KiwiBeastProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KiwiBeastProps::StaticClassInit() */

void KiwiBeastProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"KiwiBeastProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bfbe3c,0x7b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KiwiBeastProps::StaticGetClass() */

long * KiwiBeastProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"KiwiBeastProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiBeastProps::GetClass() const */

long * KiwiBeastProps::GetClass(void)

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
  (*pcVar3)(plVar1,"KiwiBeastProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* KiwiBeastProps::KiwiBeastProps() */

void __thiscall KiwiBeastProps::KiwiBeastProps(KiwiBeastProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067425a0;
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x2c0));
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x3b8));
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x4b0));
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x5a8));
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x6a0));
  return;
}


/* KiwiBeastProps::StaticNew() */

KiwiBeastProps * KiwiBeastProps::StaticNew(void)

{
  KiwiBeastProps *this;
  
  this = ::operator_new(0x7b0);
  KiwiBeastProps(this);
  return this;
}


/* KiwiBeastProps::~KiwiBeastProps() */

void __thiscall KiwiBeastProps::~KiwiBeastProps(KiwiBeastProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067425a0;
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x6a0));
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x5a8));
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x4b0));
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x3b8));
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* KiwiBeastProps::~KiwiBeastProps() */

void __thiscall KiwiBeastProps::~KiwiBeastProps(KiwiBeastProps *this)

{
  ~KiwiBeastProps(this);
  AK::FreeHook(this);
  return;
}

