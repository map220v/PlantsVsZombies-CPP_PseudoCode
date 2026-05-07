// Class: SquashProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SquashProps::StaticClassInit() */

void SquashProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TargetProbabilityItem");
    (*pcVar3)(plVar2,asStack_10,FUN_03f811b8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SquashProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03f90f30,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SquashProps::GetLiveRateNormal(int) const */

SquashProps * __thiscall SquashProps::GetLiveRateNormal(SquashProps *this,int param_1)

{
  if (param_1 - 2U < 3) {
    this = (SquashProps *)&DAT_05752d40;
  }
  return this;
}


/* SquashProps::GetLiveRateInPVP(int) const */

undefined1  [16] __thiscall SquashProps::GetLiveRateInPVP(SquashProps *this,int param_1)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(this + 0x2d8);
  uVar1 = FUN_03f81468(uVar3,*(undefined8 *)(this + 0x2e0));
  if ((ulong)(long)(param_1 + -1) < uVar1) {
    puVar2 = (uint *)FUN_03f81474(uVar3,(long)(param_1 + -1));
    return ZEXT416(*puVar2);
  }
  GetLiveRateNormal(this,param_1);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_00;
  return auVar4;
}


/* SquashProps::SquashProps() */

void __thiscall SquashProps::SquashProps(SquashProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x20;
  *(undefined ***)this = &PTR_GetClass_067a3c00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  return;
}


/* SquashProps::StaticNew() */

SquashProps * SquashProps::StaticNew(void)

{
  SquashProps *this;
  
  this = ::operator_new(0x2f0);
  SquashProps(this);
  return this;
}


/* SquashProps::~SquashProps() */

void __thiscall SquashProps::~SquashProps(SquashProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3c00;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<TargetProbabilityItem,std::allocator<TargetProbabilityItem>>::~vector
            ((vector<TargetProbabilityItem,std::allocator<TargetProbabilityItem>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SquashProps::~SquashProps() */

void __thiscall SquashProps::~SquashProps(SquashProps *this)

{
  ~SquashProps(this);
  AK::FreeHook(this);
  return;
}


/* SquashProps::StaticGetClass() */

long * SquashProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SquashProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SquashProps::GetClass() const */

long * SquashProps::GetClass(void)

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
  (*pcVar3)(plVar1,"SquashProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

