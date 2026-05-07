// Class: FairyTaleWindWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWindWaveAction::StaticClassInit() */

void FairyTaleWindWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"FairyTaleWindWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04ecbb40,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleWindWaveAction::StaticGetClass() */

long * FairyTaleWindWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FairyTaleWindWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleWindWaveAction::FairyTaleWindWaveAction() */

void __thiscall FairyTaleWindWaveAction::FairyTaleWindWaveAction(FairyTaleWindWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069f7930;
  return;
}


/* FairyTaleWindWaveAction::StaticNew() */

FairyTaleWindWaveAction * FairyTaleWindWaveAction::StaticNew(void)

{
  FairyTaleWindWaveAction *this;
  
  this = ::operator_new(0x20);
  FairyTaleWindWaveAction(this);
  return this;
}


/* FairyTaleWindWaveAction::~FairyTaleWindWaveAction() */

void __thiscall FairyTaleWindWaveAction::~FairyTaleWindWaveAction(FairyTaleWindWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069f7930;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* FairyTaleWindWaveAction::~FairyTaleWindWaveAction() */

void __thiscall FairyTaleWindWaveAction::~FairyTaleWindWaveAction(FairyTaleWindWaveAction *this)

{
  ~FairyTaleWindWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWindWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void FairyTaleWindWaveAction::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  Board *pBVar2;
  float fVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  if (*(float *)(pFVar1 + 0x58) != 0.0) {
    fVar3 = (float)PVZ_T();
    *(float *)(param_1 + 0x18) = fVar3 + 3.0;
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[WARNING_FAIRY_TALE_WIND_TIP]",auStack_18);
    Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,0);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleWindWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void FairyTaleWindWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  WaveAction *this;
  FairyTaleWindWaveActionProps *pFVar1;
  FairyTaleFogSubSystem *this_00;
  float fVar2;
  undefined4 uVar3;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  fVar2 = (float)PVZ_T();
  if (fVar2 < *(float *)(this + 0x18)) {
    return;
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar3;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  this_00 = Board::GetGameSubSystem<FairyTaleFogSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  FairyTaleFogSubSystem::TryWindAppear
            (this_00,*(float *)(pFVar1 + 0x58),(vector *)(pFVar1 + 0x40),*(float *)(pFVar1 + 0x5c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleWindWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
FairyTaleWindWaveAction::AddResourceRequirements(FairyTaleWindWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"FairyTaleFog");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"HeianWind");
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

