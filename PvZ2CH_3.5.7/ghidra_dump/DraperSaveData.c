// Class: DraperSaveData


/* DraperSaveData::~DraperSaveData() */

void __thiscall DraperSaveData::~DraperSaveData(DraperSaveData *this)

{
  *(undefined ***)this = &PTR_GetClass_0675ca70;
  nop();
  return;
}


/* DraperSaveData::~DraperSaveData() */

void __thiscall DraperSaveData::~DraperSaveData(DraperSaveData *this)

{
  ~DraperSaveData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraperSaveData::StaticClassInit() */

void DraperSaveData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DraperSaveData");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb1ad4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DraperSaveData::StaticGetClass() */

long * DraperSaveData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DraperSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraperSaveData::GetClass() const */

long * DraperSaveData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DraperSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DraperSaveData::DraperSaveData() */

void __thiscall DraperSaveData::DraperSaveData(DraperSaveData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR_GetClass_0675ca70;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* DraperSaveData::StaticNew() */

DraperSaveData * DraperSaveData::StaticNew(void)

{
  DraperSaveData *this;
  
  this = ::operator_new(0x30);
  DraperSaveData(this);
  return this;
}


/* DraperSaveData::SetLastPurchaseTimeAndCountAndTotal(long, int, int) */

void __thiscall
DraperSaveData::SetLastPurchaseTimeAndCountAndTotal
          (DraperSaveData *this,long param_1,int param_2,int param_3)

{
  *(long *)(this + 0x18) = param_1;
  *(int *)(this + 0x28) = param_2;
  *(float *)(this + 0x2c) = (float)param_3;
  DraperHelpers::SaveLocalDraperState(*(int *)(this + 0x20));
  return;
}


/* DraperSaveData::SetLastPlayTime(long) */

void __thiscall DraperSaveData::SetLastPlayTime(DraperSaveData *this,long param_1)

{
  *(long *)(this + 8) = param_1;
  *(long *)(this + 0x10) = param_1;
  DraperHelpers::SaveLocalDraperState(*(int *)(this + 0x20));
  return;
}

