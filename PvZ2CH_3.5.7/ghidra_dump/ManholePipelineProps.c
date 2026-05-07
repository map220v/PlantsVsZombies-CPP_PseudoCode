// Class: ManholePipelineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineProps::StaticClassInit() */

void ManholePipelineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ManholePipelineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_038ea688,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipelineProps::StaticGetClass() */

long * ManholePipelineProps::StaticGetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ManholePipelineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ManholePipelineProps::GetClass() const */

long * ManholePipelineProps::GetClass(void)

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
  uVar2 = GridItemPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ManholePipelineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ManholePipelineProps::ManholePipelineProps() */

void __thiscall ManholePipelineProps::ManholePipelineProps(ManholePipelineProps *this)

{
  GridItemPropertySheet::GridItemPropertySheet((GridItemPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066bdec0;
  Set8BytesTo0(this + 0x98);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xa0));
  return;
}


/* ManholePipelineProps::StaticNew() */

ManholePipelineProps * ManholePipelineProps::StaticNew(void)

{
  ManholePipelineProps *this;
  
  this = ::operator_new(0xa8);
  ManholePipelineProps(this);
  return this;
}


/* ManholePipelineProps::~ManholePipelineProps() */

void __thiscall ManholePipelineProps::~ManholePipelineProps(ManholePipelineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066bdec0;
  std::string::~string((string *)(this + 0x98));
  GridItemPropertySheet::~GridItemPropertySheet((GridItemPropertySheet *)this);
  return;
}


/* ManholePipelineProps::~ManholePipelineProps() */

void __thiscall ManholePipelineProps::~ManholePipelineProps(ManholePipelineProps *this)

{
  ~ManholePipelineProps(this);
  AK::FreeHook(this);
  return;
}

