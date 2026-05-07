// Class: FutureStageProperties


/* FutureStageProperties::GetModuleClass() const */

long * FutureStageProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FutureStage::sClass != (long *)0x0) {
    return FutureStage::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FutureStage::sClass = plVar1;
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"FutureStage",uVar2,FutureStage::StaticNew);
  FutureStage::StaticClassInit();
  return FutureStage::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStageProperties::StaticClassInit() */

void FutureStageProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"FutureStageProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03cec940,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStageProperties::StaticGetClass() */

long * FutureStageProperties::StaticGetClass(void)

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
  uVar2 = StageModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FutureStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureStageProperties::GetClass() const */

long * FutureStageProperties::GetClass(void)

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
  uVar2 = StageModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"FutureStageProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureStageProperties::FutureStageProperties() */

void __thiscall FutureStageProperties::FutureStageProperties(FutureStageProperties *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  FutureStageProperties *this_01;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModuleProperties::StageModuleProperties((StageModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06761630;
  this_01 = this + 0x130;
  do {
    this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this_01 + 0x10);
    Sexy::Color::Color((Color *)this_01);
    this_01 = (FutureStageProperties *)this_00;
  } while (this_00 !=
           (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  Sexy::Color::Color((Color *)&local_18,5);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,2);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,4);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,7);
  *(undefined8 *)(this + 0x160) = local_18;
  *(undefined8 *)(this + 0x168) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,8);
  *(undefined8 *)(this + 0x170) = local_18;
  *(undefined8 *)(this + 0x178) = uStack_10;
  *(undefined4 *)(this + 0x198) = 0x40200000;
  *(undefined4 *)(this + 0x1a0) = 0x40200000;
  *(undefined4 *)(this + 0x19c) = 0x3f800000;
  *(undefined4 *)(this + 0x1a4) = 0x3f000000;
  *(undefined4 *)(this + 0x1a8) = 0x40a00000;
  *(undefined4 *)(this + 0x1ac) = 0x3f000000;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureStageProperties::StaticNew() */

FutureStageProperties * FutureStageProperties::StaticNew(void)

{
  FutureStageProperties *this;
  
  this = ::operator_new(0x1b0);
  FutureStageProperties(this);
  return this;
}


/* FutureStageProperties::~FutureStageProperties() */

void __thiscall FutureStageProperties::~FutureStageProperties(FutureStageProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06761630;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x180));
  StageModuleProperties::~StageModuleProperties((StageModuleProperties *)this);
  return;
}


/* FutureStageProperties::~FutureStageProperties() */

void __thiscall FutureStageProperties::~FutureStageProperties(FutureStageProperties *this)

{
  ~FutureStageProperties(this);
  AK::FreeHook(this);
  return;
}

