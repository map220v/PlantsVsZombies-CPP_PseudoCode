// Class: HollyBarrierLeafProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HollyBarrierLeafProps::StaticClassInit() */

void HollyBarrierLeafProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HollyBarrierLeafProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0428a6c8,0x338,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HollyBarrierLeafProps::StaticGetClass() */

long * HollyBarrierLeafProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HollyBarrierLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyBarrierLeafProps::GetClass() const */

long * HollyBarrierLeafProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HollyBarrierLeafProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HollyBarrierLeafProps::HollyBarrierLeafProps() */

void __thiscall HollyBarrierLeafProps::HollyBarrierLeafProps(HollyBarrierLeafProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06825d90;
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x2b8));
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x2d8));
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x2f8));
  DamageLifetime::DamageLifetime((DamageLifetime *)(this + 0x318));
  return;
}


/* HollyBarrierLeafProps::StaticNew() */

HollyBarrierLeafProps * HollyBarrierLeafProps::StaticNew(void)

{
  HollyBarrierLeafProps *this;
  
  this = ::operator_new(0x338);
  HollyBarrierLeafProps(this);
  return this;
}


/* HollyBarrierLeafProps::~HollyBarrierLeafProps() */

void __thiscall HollyBarrierLeafProps::~HollyBarrierLeafProps(HollyBarrierLeafProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06825d90;
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x318));
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x2f8));
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x2d8));
  DamageLifetime::~DamageLifetime((DamageLifetime *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* HollyBarrierLeafProps::~HollyBarrierLeafProps() */

void __thiscall HollyBarrierLeafProps::~HollyBarrierLeafProps(HollyBarrierLeafProps *this)

{
  ~HollyBarrierLeafProps(this);
  AK::FreeHook(this);
  return;
}

