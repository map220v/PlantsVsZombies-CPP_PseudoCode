// Class: DinoTreadWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTreadWaveAction::StaticClassInit() */

void DinoTreadWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoTreadWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04942f3c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoTreadWaveAction::StaticGetClass() */

long * DinoTreadWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoTreadWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoTreadWaveAction::DinoTreadWaveAction() */

void __thiscall DinoTreadWaveAction::DinoTreadWaveAction(DinoTreadWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069128f0;
  return;
}


/* DinoTreadWaveAction::StaticNew() */

DinoTreadWaveAction * DinoTreadWaveAction::StaticNew(void)

{
  DinoTreadWaveAction *this;
  
  this = ::operator_new(0x20);
  DinoTreadWaveAction(this);
  return this;
}


/* DinoTreadWaveAction::~DinoTreadWaveAction() */

void __thiscall DinoTreadWaveAction::~DinoTreadWaveAction(DinoTreadWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069128f0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* DinoTreadWaveAction::~DinoTreadWaveAction() */

void __thiscall DinoTreadWaveAction::~DinoTreadWaveAction(DinoTreadWaveAction *this)

{
  ~DinoTreadWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTreadWaveAction::SpawnShadow() */

void __thiscall DinoTreadWaveAction::SpawnShadow(DinoTreadWaveAction *this)

{
  int iVar1;
  int iVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  Effect_DinoFootShadow *this_00;
  float fVar4;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  Vec3 aVStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar4 = (float)(iVar1 * iVar2 + 200);
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  Sexy::Point::Point((Point *)&local_28,0,0);
  if (pFVar3 != (FairyTaleWindWaveActionProps *)0x0) {
    local_28 = RandRangeInt(*(int *)(pFVar3 + 0x4c),*(int *)(pFVar3 + 0x50));
    local_24 = *(int *)(pFVar3 + 0x48);
  }
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(local_24);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4,(float)iVar1,0.0);
  local_14 = local_14 - 26.0;
  this_00 = Board::AddEffect<Effect_DinoFootShadow>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar4,local_14);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)&local_20,1000000);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar1,local_14);
  Effect_DinoFootShadow::SetMoveEndPos(local_20,local_1c,this_00);
  Effect_DinoFootShadow::StartMove(this_00);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinoTreadWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void DinoTreadWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  DinoTreadWaveAction *this;
  float fVar1;
  undefined4 uVar2;
  
  this = (DinoTreadWaveAction *)(ulong)(uint)param_1;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x18) < fVar1) {
    SpawnShadow(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x18) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTreadWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void DinoTreadWaveAction::WaveStart
               (WaveAction *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = PVZ_T();
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  if (pFVar2 != (FairyTaleWindWaveActionProps *)0x0) {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(pFVar2 + 0x54);
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
      AudioMgr::SendEvent(pcVar3,"Play_Zomb_Zomboss_Dino_FS");
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),10,-5,1.25);
      }
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
/* DinoTreadWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall DinoTreadWaveAction::AddResourceRequirements(DinoTreadWaveAction *this,set *param_1)

{
  bool bVar1;
  char cVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  undefined8 uVar4;
  string *psVar5;
  EffectObjectType *this_00;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_04943158(*(undefined8 *)(pFVar3 + 0x10));
  local_10 = FUN_049431a8(*(undefined8 *)(pFVar3 + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar4);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
               asStack_20);
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::string::string((string *)&local_10,"ZombieDinoZombossAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             (string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
  std::string::string((string *)&local_10,"effectobject_dinotread");
  ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_10);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_18);
  if (cVar2 != '\0') {
    this_00 = (EffectObjectType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    EffectObjectType::AddResourceRequirements(this_00,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

