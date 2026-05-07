// Class: SchoolBusWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SchoolBusWaveAction::StaticClassInit() */

void SchoolBusWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SchoolBusWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_033e0544,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SchoolBusWaveAction::StaticGetClass() */

long * SchoolBusWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SchoolBusWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SchoolBusWaveAction::SchoolBusWaveAction() */

void __thiscall SchoolBusWaveAction::SchoolBusWaveAction(SchoolBusWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0661b530;
  return;
}


/* SchoolBusWaveAction::StaticNew() */

SchoolBusWaveAction * SchoolBusWaveAction::StaticNew(void)

{
  SchoolBusWaveAction *this;
  
  this = ::operator_new(0x18);
  SchoolBusWaveAction(this);
  return this;
}


/* SchoolBusWaveAction::~SchoolBusWaveAction() */

void __thiscall SchoolBusWaveAction::~SchoolBusWaveAction(SchoolBusWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0661b530;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* SchoolBusWaveAction::~SchoolBusWaveAction() */

void __thiscall SchoolBusWaveAction::~SchoolBusWaveAction(SchoolBusWaveAction *this)

{
  ~SchoolBusWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SchoolBusWaveAction::SpawnSchoolBus(SchoolBusDescription) */

void __thiscall SchoolBusWaveAction::SpawnSchoolBus(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  GriditemSchoolBusParams aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = *param_2;
  GriditemSchoolBusParams::GriditemSchoolBusParams
            (aGStack_28,(GriditemSchoolBusParams *)(param_2 + 4));
  GridItemSchoolBus::AddSchoolBusWithParams(param_2 + 2,uVar2,iVar1 + -1,aGStack_28,1);
  GriditemSchoolBusParams::~GriditemSchoolBusParams(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SchoolBusWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void SchoolBusWaveAction::WaveStart(WaveAction *param_1)

{
  char cVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  SchoolBusDescription aSStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    SchoolBusDescription::SchoolBusDescription(aSStack_38,(SchoolBusDescription *)(pFVar2 + 0x40));
    SpawnSchoolBus((SchoolBusWaveAction *)param_1,aSStack_38);
    SchoolBusDescription::~SchoolBusDescription(aSStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SchoolBusWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SchoolBusWaveAction::AddResourceRequirements(SchoolBusWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SchoolBus");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieChildrenAirbubbleGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieChildrenLollipopsGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

