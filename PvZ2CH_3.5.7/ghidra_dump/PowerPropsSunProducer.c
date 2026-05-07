// Class: PowerPropsSunProducer


/* PowerPropsSunProducer::~PowerPropsSunProducer() */

void __thiscall PowerPropsSunProducer::~PowerPropsSunProducer(PowerPropsSunProducer *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5c20;
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsSunProducer::~PowerPropsSunProducer() */

void __thiscall PowerPropsSunProducer::~PowerPropsSunProducer(PowerPropsSunProducer *this)

{
  ~PowerPropsSunProducer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsSunProducer::StaticClassInit() */

void PowerPropsSunProducer::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsSunProducer");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa1e18,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsSunProducer::PowerPropsSunProducer() */

void __thiscall PowerPropsSunProducer::PowerPropsSunProducer(PowerPropsSunProducer *this)

{
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_067a5c20;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* PowerPropsSunProducer::StaticNew() */

PowerPropsSunProducer * PowerPropsSunProducer::StaticNew(void)

{
  PowerPropsSunProducer *this;
  
  this = ::operator_new(0x20);
  PowerPropsSunProducer(this);
  return this;
}


/* PowerPropsSunProducer::StaticGetClass() */

long * PowerPropsSunProducer::StaticGetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsSunProducer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsSunProducer::GetClass() const */

long * PowerPropsSunProducer::GetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsSunProducer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsSunProducer::PowerPropsSunProducer(int, float) */

void __thiscall
PowerPropsSunProducer::PowerPropsSunProducer(PowerPropsSunProducer *this,int param_1,float param_2)

{
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(int *)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR_GetClass_067a5c20;
  *(float *)(this + 0x1c) = param_2;
  return;
}


/* PowerPropsSunProducer::PowerPropsSunProducer(PowerPropsSunProducer const&) */

void __thiscall
PowerPropsSunProducer::PowerPropsSunProducer
          (PowerPropsSunProducer *this,PowerPropsSunProducer *param_1)

{
  undefined4 uVar1;
  
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR_GetClass_067a5c20;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

