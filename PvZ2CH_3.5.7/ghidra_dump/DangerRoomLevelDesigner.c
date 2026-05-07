// Class: DangerRoomLevelDesigner


/* DangerRoomLevelDesigner::ModifyBoardLayout(int, Sexy::MTRand&) const */

int DangerRoomLevelDesigner::ModifyBoardLayout(int param_1,MTRand *param_2)

{
  return param_1;
}


/* DangerRoomLevelDesigner::GenerateEvents(int, Sexy::MTRand&, WaveManagerProperties*) const */

int DangerRoomLevelDesigner::GenerateEvents
              (int param_1,MTRand *param_2,WaveManagerProperties *param_3)

{
  return param_1;
}


/* DangerRoomLevelDesigner::~DangerRoomLevelDesigner() */

void __thiscall DangerRoomLevelDesigner::~DangerRoomLevelDesigner(DangerRoomLevelDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c3c0;
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* DangerRoomLevelDesigner::~DangerRoomLevelDesigner() */

void __thiscall DangerRoomLevelDesigner::~DangerRoomLevelDesigner(DangerRoomLevelDesigner *this)

{
  ~DangerRoomLevelDesigner(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomLevelDesigner::DangerRoomLevelDesigner() */

void __thiscall DangerRoomLevelDesigner::DangerRoomLevelDesigner(DangerRoomLevelDesigner *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0675c3c0;
  return;
}


/* DangerRoomLevelDesigner::GenerateExtraModules(int, Sexy::MTRand&, LevelModuleManager*) const */

int DangerRoomLevelDesigner::GenerateExtraModules
              (int param_1,MTRand *param_2,LevelModuleManager *param_3)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomLevelDesigner::StaticClassInit() */

void DangerRoomLevelDesigner::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomLevelDesigner");
    (*pcVar2)(plVar1,asStack_10,FUN_03ca84a0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomLevelDesigner::StaticGetClass() */

long * DangerRoomLevelDesigner::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomLevelDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomLevelDesigner::GetClass() const */

long * DangerRoomLevelDesigner::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomLevelDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomLevelDesigner::StaticNew() */

DangerRoomLevelDesigner * DangerRoomLevelDesigner::StaticNew(void)

{
  DangerRoomLevelDesigner *this;
  
  this = ::operator_new(0x10);
  DangerRoomLevelDesigner(this);
  return this;
}

