// Class: LuckyChestTaskGradeData


/* LuckyChestTaskGradeData::~LuckyChestTaskGradeData() */

void __thiscall LuckyChestTaskGradeData::~LuckyChestTaskGradeData(LuckyChestTaskGradeData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670d490;
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* LuckyChestTaskGradeData::~LuckyChestTaskGradeData() */

void __thiscall LuckyChestTaskGradeData::~LuckyChestTaskGradeData(LuckyChestTaskGradeData *this)

{
  ~LuckyChestTaskGradeData(this);
  AK::FreeHook(this);
  return;
}


/* LuckyChestTaskGradeData::LuckyChestTaskGradeData() */

void __thiscall LuckyChestTaskGradeData::LuckyChestTaskGradeData(LuckyChestTaskGradeData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0670d490;
  return;
}


/* LuckyChestTaskGradeData::StaticNew() */

LuckyChestTaskGradeData * LuckyChestTaskGradeData::StaticNew(void)

{
  LuckyChestTaskGradeData *this;
  
  this = ::operator_new(0x58);
  LuckyChestTaskGradeData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyChestTaskGradeData::StaticClassInit() */

void LuckyChestTaskGradeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LuckyChestTaskGradeData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a74510,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuckyChestTaskGradeData::StaticGetClass() */

long * LuckyChestTaskGradeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestTaskGradeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckyChestTaskGradeData::GetClass() const */

long * LuckyChestTaskGradeData::GetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestTaskGradeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

