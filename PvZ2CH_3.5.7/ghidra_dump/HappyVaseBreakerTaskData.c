// Class: HappyVaseBreakerTaskData


/* HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData() */

void __thiscall HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData(HappyVaseBreakerTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c710;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData() */

void __thiscall HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData(HappyVaseBreakerTaskData *this)

{
  ~HappyVaseBreakerTaskData(this);
  AK::FreeHook(this);
  return;
}


/* HappyVaseBreakerTaskData::HappyVaseBreakerTaskData() */

void __thiscall HappyVaseBreakerTaskData::HappyVaseBreakerTaskData(HappyVaseBreakerTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_0670c710;
  return;
}


/* HappyVaseBreakerTaskData::StaticNew() */

HappyVaseBreakerTaskData * HappyVaseBreakerTaskData::StaticNew(void)

{
  HappyVaseBreakerTaskData *this;
  
  this = ::operator_new(0x58);
  HappyVaseBreakerTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskData::StaticClassInit() */

void HappyVaseBreakerTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a6fd80,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerTaskData::StaticGetClass() */

long * HappyVaseBreakerTaskData::StaticGetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTaskData::GetClass() const */

long * HappyVaseBreakerTaskData::GetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

