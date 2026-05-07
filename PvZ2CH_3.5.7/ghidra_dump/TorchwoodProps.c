// Class: TorchwoodProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TorchwoodProps::StaticClassInit() */

void TorchwoodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TorchwoodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04074108,0x538,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TorchwoodProps::StaticGetClass() */

long * TorchwoodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TorchwoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TorchwoodProps::GetClass() const */

long * TorchwoodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"TorchwoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TorchwoodProps::TorchwoodProps() */

void __thiscall TorchwoodProps::TorchwoodProps(TorchwoodProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067c8080;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d0));
  ComponentProjectileConverterProps::ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x4e8));
  ComponentProjectileConverterProps::ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x510));
  return;
}


/* TorchwoodProps::StaticNew() */

TorchwoodProps * TorchwoodProps::StaticNew(void)

{
  TorchwoodProps *this;
  
  this = ::operator_new(0x538);
  TorchwoodProps(this);
  return this;
}


/* TorchwoodProps::~TorchwoodProps() */

void __thiscall TorchwoodProps::~TorchwoodProps(TorchwoodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067c8080;
  ComponentProjectileConverterProps::~ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x510));
  ComponentProjectileConverterProps::~ComponentProjectileConverterProps
            ((ComponentProjectileConverterProps *)(this + 0x4e8));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x3d0));
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TorchwoodProps::~TorchwoodProps() */

void __thiscall TorchwoodProps::~TorchwoodProps(TorchwoodProps *this)

{
  ~TorchwoodProps(this);
  AK::FreeHook(this);
  return;
}

