// Class: MatchFlowerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MatchFlowerProps::StaticClassInit() */

void MatchFlowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MatchFlowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04137a88,0x588,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MatchFlowerProps::StaticGetClass() */

long * MatchFlowerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MatchFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MatchFlowerProps::GetClass() const */

long * MatchFlowerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MatchFlowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MatchFlowerProps::MatchFlowerProps() */

void __thiscall MatchFlowerProps::MatchFlowerProps(MatchFlowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 0x2cc) = 8;
  *(undefined ***)this = &PTR_GetClass_067ec170;
  *(undefined4 *)(this + 0x2d0) = 4;
  *(undefined4 *)(this + 0x2c0) = 0x41700000;
  *(undefined4 *)(this + 700) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2c4) = 0x3fa00000;
  *(undefined4 *)(this + 0x2c8) = 0x3e99999a;
  ComponentProjectileConverterProps::ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x2d8));
  ComponentObjectImpactorProps::ComponentObjectImpactorProps
            ((ComponentObjectImpactorProps *)(this + 0x300));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x358));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x470));
  return;
}


/* MatchFlowerProps::StaticNew() */

MatchFlowerProps * MatchFlowerProps::StaticNew(void)

{
  MatchFlowerProps *this;
  
  this = ::operator_new(0x588);
  MatchFlowerProps(this);
  return this;
}


/* MatchFlowerProps::~MatchFlowerProps() */

void __thiscall MatchFlowerProps::~MatchFlowerProps(MatchFlowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ec170;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x470));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x358));
  ComponentObjectImpactorProps::~ComponentObjectImpactorProps
            ((ComponentObjectImpactorProps *)(this + 0x300));
  ComponentProjectileConverterProps::~ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* MatchFlowerProps::~MatchFlowerProps() */

void __thiscall MatchFlowerProps::~MatchFlowerProps(MatchFlowerProps *this)

{
  ~MatchFlowerProps(this);
  AK::FreeHook(this);
  return;
}

