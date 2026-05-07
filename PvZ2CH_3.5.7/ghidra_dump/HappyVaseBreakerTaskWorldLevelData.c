// Class: HappyVaseBreakerTaskWorldLevelData


/* HappyVaseBreakerTaskWorldLevelData::~HappyVaseBreakerTaskWorldLevelData() */

void __thiscall
HappyVaseBreakerTaskWorldLevelData::~HappyVaseBreakerTaskWorldLevelData
          (HappyVaseBreakerTaskWorldLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c780;
  std::string::~string((string *)(this + 0x58));
  HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData((HappyVaseBreakerTaskData *)this);
  return;
}


/* HappyVaseBreakerTaskWorldLevelData::~HappyVaseBreakerTaskWorldLevelData() */

void __thiscall
HappyVaseBreakerTaskWorldLevelData::~HappyVaseBreakerTaskWorldLevelData
          (HappyVaseBreakerTaskWorldLevelData *this)

{
  ~HappyVaseBreakerTaskWorldLevelData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskWorldLevelData::StaticClassInit() */

void HappyVaseBreakerTaskWorldLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerTaskWorldLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a70014,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerTaskWorldLevelData::StaticGetClass() */

long * HappyVaseBreakerTaskWorldLevelData::StaticGetClass(void)

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
  uVar2 = HappyVaseBreakerTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskWorldLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTaskWorldLevelData::GetClass() const */

long * HappyVaseBreakerTaskWorldLevelData::GetClass(void)

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
  uVar2 = HappyVaseBreakerTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskWorldLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTaskWorldLevelData::HappyVaseBreakerTaskWorldLevelData() */

void __thiscall
HappyVaseBreakerTaskWorldLevelData::HappyVaseBreakerTaskWorldLevelData
          (HappyVaseBreakerTaskWorldLevelData *this)

{
  HappyVaseBreakerTaskData::HappyVaseBreakerTaskData((HappyVaseBreakerTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_0670c780;
  Set8BytesTo0(this + 0x58);
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


/* HappyVaseBreakerTaskWorldLevelData::StaticNew() */

HappyVaseBreakerTaskWorldLevelData * HappyVaseBreakerTaskWorldLevelData::StaticNew(void)

{
  HappyVaseBreakerTaskWorldLevelData *this;
  
  this = ::operator_new(0x68);
  HappyVaseBreakerTaskWorldLevelData(this);
  return this;
}

