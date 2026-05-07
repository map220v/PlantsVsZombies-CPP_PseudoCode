// Class: TidalChangeWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TidalChangeWaveAction::StaticClassInit() */

void TidalChangeWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"TidalChangeWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_0493e408,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TidalChangeWaveAction::StaticGetClass() */

long * TidalChangeWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TidalChangeWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TidalChangeWaveAction::TidalChangeWaveAction() */

void __thiscall TidalChangeWaveAction::TidalChangeWaveAction(TidalChangeWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06912350;
  return;
}


/* TidalChangeWaveAction::StaticNew() */

TidalChangeWaveAction * TidalChangeWaveAction::StaticNew(void)

{
  TidalChangeWaveAction *this;
  
  this = ::operator_new(0x18);
  TidalChangeWaveAction(this);
  return this;
}


/* TidalChangeWaveAction::~TidalChangeWaveAction() */

void __thiscall TidalChangeWaveAction::~TidalChangeWaveAction(TidalChangeWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06912350;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* TidalChangeWaveAction::~TidalChangeWaveAction() */

void __thiscall TidalChangeWaveAction::~TidalChangeWaveAction(TidalChangeWaveAction *this)

{
  ~TidalChangeWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* TidalChangeWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void TidalChangeWaveAction::WaveStart(WaveAction *param_1)

{
  TideModule *this;
  FairyTaleWindWaveActionProps *this_00;
  float fVar1;
  
  this = (TideModule *)FUN_0493e748(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  fVar1 = (float)TideModule::GetWaveLocation(this);
  fVar1 = (float)TidalChangeWaveActionProps::GetFinalTidePosition
                           ((TidalChangeWaveActionProps *)this_00,fVar1);
  TideModule::SetWaveLocation(this,fVar1,4.0);
  WaveAction::notifyWaveEvents(param_1);
  return;
}

