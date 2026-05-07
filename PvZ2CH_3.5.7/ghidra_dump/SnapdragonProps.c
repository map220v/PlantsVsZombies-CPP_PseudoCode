// Class: SnapdragonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnapdragonProps::StaticClassInit() */

void SnapdragonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnapdragonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0422f894,0x4d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnapdragonProps::StaticGetClass() */

long * SnapdragonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnapdragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnapdragonProps::GetClass() const */

long * SnapdragonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SnapdragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnapdragonProps::SnapdragonProps() */

void __thiscall SnapdragonProps::SnapdragonProps(SnapdragonProps *this)

{
  size_t in_x2;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06810dc0;
  Set8BytesTo0((string *)(this + 0x2b8));
  ComponentLinearBurstProps::ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x2c8));
  ComponentLinearBurstProps::ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x360));
  ComponentLinearBurstProps::ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x3f8));
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 0x490));
  std::string::append((string *)(this + 0x2b8),"",in_x2);
  return;
}


/* SnapdragonProps::StaticNew() */

SnapdragonProps * SnapdragonProps::StaticNew(void)

{
  SnapdragonProps *this;
  
  this = ::operator_new(0x4d8);
  SnapdragonProps(this);
  return this;
}


/* SnapdragonProps::~SnapdragonProps() */

void __thiscall SnapdragonProps::~SnapdragonProps(SnapdragonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06810dc0;
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 0x490));
  ComponentLinearBurstProps::~ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x3f8))
  ;
  ComponentLinearBurstProps::~ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x360))
  ;
  ComponentLinearBurstProps::~ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x2c8))
  ;
  std::string::~string((string *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SnapdragonProps::~SnapdragonProps() */

void __thiscall SnapdragonProps::~SnapdragonProps(SnapdragonProps *this)

{
  ~SnapdragonProps(this);
  AK::FreeHook(this);
  return;
}

