// Class: LevelOfTheDaySchedule


/* LevelOfTheDaySchedule::~LevelOfTheDaySchedule() */

void __thiscall LevelOfTheDaySchedule::~LevelOfTheDaySchedule(LevelOfTheDaySchedule *this)

{
  *(undefined ***)this = &PTR_GetClass_069253b0;
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelOfTheDaySchedule::~LevelOfTheDaySchedule() */

void __thiscall LevelOfTheDaySchedule::~LevelOfTheDaySchedule(LevelOfTheDaySchedule *this)

{
  ~LevelOfTheDaySchedule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySchedule::StaticClassInit() */

void LevelOfTheDaySchedule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDaySchedule");
    (*pcVar2)(plVar1,asStack_10,FUN_049b5c8c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDaySchedule::StaticGetClass() */

long * LevelOfTheDaySchedule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelOfTheDaySchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDaySchedule::GetClass() const */

long * LevelOfTheDaySchedule::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelOfTheDaySchedule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDaySchedule::AvailableTimeInSeconds() const */

int __thiscall LevelOfTheDaySchedule::AvailableTimeInSeconds(LevelOfTheDaySchedule *this)

{
  return *(int *)(this + 0x78) * 0x15180;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDaySchedule::LevelOfTheDaySchedule() */

void __thiscall LevelOfTheDaySchedule::LevelOfTheDaySchedule(LevelOfTheDaySchedule *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_069253b0;
  *(undefined8 *)(this + 0x20) = 0;
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  this[0x38] = (LevelOfTheDaySchedule)0x1;
  Set8BytesTo0(this + 0x40);
  std::string::string((string *)(this + 0x48),"Default");
  nop();
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0(this + 0x60);
  Set8BytesTo0(this + 0x68);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x70) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 2;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDaySchedule::StaticNew() */

LevelOfTheDaySchedule * LevelOfTheDaySchedule::StaticNew(void)

{
  LevelOfTheDaySchedule *this;
  
  this = ::operator_new(0x80);
  LevelOfTheDaySchedule(this);
  return this;
}


/* LevelOfTheDaySchedule::LevelOfTheDaySchedule(LevelOfTheDaySchedule const&) */

void __thiscall
LevelOfTheDaySchedule::LevelOfTheDaySchedule
          (LevelOfTheDaySchedule *this,LevelOfTheDaySchedule *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined ***)this = &PTR_GetClass_069253b0;
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  this[0x38] = param_1[0x38];
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  FUN_05475d88(this + 0x50,param_1 + 0x50);
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  FUN_05475d88(this + 0x60,param_1 + 0x60);
  FUN_05475d88(this + 0x68,param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = uVar2;
  return;
}

