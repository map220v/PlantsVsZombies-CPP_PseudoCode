// Class: FairyTaleFogWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogWaveAction::StaticClassInit() */

void FairyTaleFogWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"FairyTaleFogWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04ecb778,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogWaveAction::StaticGetClass() */

long * FairyTaleFogWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FairyTaleFogWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FairyTaleFogWaveAction::FairyTaleFogWaveAction() */

void __thiscall FairyTaleFogWaveAction::FairyTaleFogWaveAction(FairyTaleFogWaveAction *this)

{
  undefined4 uVar1;
  
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069f77e0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* FairyTaleFogWaveAction::StaticNew() */

FairyTaleFogWaveAction * FairyTaleFogWaveAction::StaticNew(void)

{
  FairyTaleFogWaveAction *this;
  
  this = ::operator_new(0x20);
  FairyTaleFogWaveAction(this);
  return this;
}


/* FairyTaleFogWaveAction::~FairyTaleFogWaveAction() */

void __thiscall FairyTaleFogWaveAction::~FairyTaleFogWaveAction(FairyTaleFogWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069f77e0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* FairyTaleFogWaveAction::~FairyTaleFogWaveAction() */

void __thiscall FairyTaleFogWaveAction::~FairyTaleFogWaveAction(FairyTaleFogWaveAction *this)

{
  ~FairyTaleFogWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void FairyTaleFogWaveAction::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  long lVar2;
  RtObject *this;
  NextWaveButton *this_00;
  Board *pBVar3;
  float fVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  if (*(float *)(pFVar1 + 0x54) != 0.0) {
    std::string::string(asStack_18,"UINextWaveButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 == 0) {
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string(asStack_10,"UINextWaveButton");
      this = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
      this_00 = Sexy::RtObject::Cast<NextWaveButton>(this);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_00 != (NextWaveButton *)0x0) {
        UIWidget::SetVisible((UIWidget *)this_00,false);
        FUN_04eca7c8(this_00 + 0x189,0);
      }
    }
    fVar4 = (float)PVZ_T();
    *(float *)(param_1 + 0x18) = fVar4 + 3.0;
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(asStack_10,L"[WARNING_FAIRY_TALE_FOG_TIP]",asStack_18);
    Board::DisplayAdviceAgain(pBVar3,asStack_10,0x11,0);
    FUN_05476c50(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FairyTaleFogWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void FairyTaleFogWaveAction::WaveUpdate(int param_1,MTRand *param_2)

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
  FairyTaleFogSubSystem::TryFogAppear
            (this_00,(string *)(pFVar1 + 0x58),(TRect *)(pFVar1 + 0x40),*(int *)(pFVar1 + 0x50),
             *(float *)(pFVar1 + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FairyTaleFogWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
FairyTaleFogWaveAction::AddResourceRequirements(FairyTaleFogWaveAction *this,set *param_1)

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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

