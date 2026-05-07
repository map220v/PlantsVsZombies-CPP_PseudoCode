// Class: DinoRunWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoRunWaveAction::StaticClassInit() */

void DinoRunWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoRunWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04943cc0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoRunWaveAction::StaticGetClass() */

long * DinoRunWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoRunWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoRunWaveAction::DinoRunWaveAction() */

void __thiscall DinoRunWaveAction::DinoRunWaveAction(DinoRunWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06912a40;
  return;
}


/* DinoRunWaveAction::StaticNew() */

DinoRunWaveAction * DinoRunWaveAction::StaticNew(void)

{
  DinoRunWaveAction *this;
  
  this = ::operator_new(0x20);
  DinoRunWaveAction(this);
  return this;
}


/* DinoRunWaveAction::~DinoRunWaveAction() */

void __thiscall DinoRunWaveAction::~DinoRunWaveAction(DinoRunWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06912a40;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* DinoRunWaveAction::~DinoRunWaveAction() */

void __thiscall DinoRunWaveAction::~DinoRunWaveAction(DinoRunWaveAction *this)

{
  ~DinoRunWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoRunWaveAction::SpawnDinoRun() */

void __thiscall DinoRunWaveAction::SpawnDinoRun(DinoRunWaveAction *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  Effect_DinoRun *this_00;
  float fVar5;
  FastCurve aFStack_20 [8];
  Vec3 aVStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  if (pFVar4 == (FairyTaleWindWaveActionProps *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(pFVar4 + 0x48);
  }
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar5 = (float)(iVar1 * iVar2 + 200);
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar3);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar5,(float)iVar1,0.0);
  this_00 = Board::AddEffect<Effect_DinoRun>(*(Board **)(gLawnApp + 0x9f0));
  Effect_DinoRun::SetKeyRow(this_00,iVar3);
  Sexy::FastCurve::SetOutRange(aFStack_20,fVar5,local_14);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)aFStack_20,1000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoRunWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void DinoRunWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  DinoRunWaveAction *this;
  float fVar1;
  undefined4 uVar2;
  
  this = (DinoRunWaveAction *)(ulong)(uint)param_1;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x18) < fVar1) {
    SpawnDinoRun(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x18) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoRunWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void DinoRunWaveAction::WaveStart
               (WaveAction *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  char *pcVar3;
  float fVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  fVar4 = (float)PVZ_T();
  *(float *)(param_1 + 0x18) = fVar4;
  if (pFVar2 != (FairyTaleWindWaveActionProps *)0x0) {
    *(float *)(param_1 + 0x18) = fVar4 + *(float *)(pFVar2 + 0x4c);
  }
  if (param_4 == '\0') {
    DinoRunActionProps::GetWaveStartMessage();
    cVar1 = FUN_054765e8(auStack_10);
    if (cVar1 == '\0') {
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),auStack_10,0x11,1);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Necromancy");
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_Plant_DragonRoar_PlantFood_Roar");
    }
    FUN_05476c50(auStack_10);
  }
  WaveAction::notifyWaveEvents(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoRunWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall DinoRunWaveAction::AddResourceRequirements(DinoRunWaveAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_04943fd4(*(undefined8 *)(pFVar2 + 0x10));
  local_10 = FUN_04944024(*(undefined8 *)(pFVar2 + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_20);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::string::string((string *)&local_10,"PlantDragonRoarAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

