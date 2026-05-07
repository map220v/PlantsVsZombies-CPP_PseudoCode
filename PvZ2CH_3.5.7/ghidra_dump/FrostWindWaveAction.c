// Class: FrostWindWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrostWindWaveAction::StaticClassInit() */

void FrostWindWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"FrostWindWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_0493edf8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrostWindWaveAction::StaticGetClass() */

long * FrostWindWaveAction::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FrostWindWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrostWindWaveAction::FrostWindWaveAction() */

void __thiscall FrostWindWaveAction::FrostWindWaveAction(FrostWindWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069124a0;
  return;
}


/* FrostWindWaveAction::StaticNew() */

FrostWindWaveAction * FrostWindWaveAction::StaticNew(void)

{
  FrostWindWaveAction *this;
  
  this = ::operator_new(0x20);
  FrostWindWaveAction(this);
  return this;
}


/* FrostWindWaveAction::~FrostWindWaveAction() */

void __thiscall FrostWindWaveAction::~FrostWindWaveAction(FrostWindWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069124a0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* FrostWindWaveAction::~FrostWindWaveAction() */

void __thiscall FrostWindWaveAction::~FrostWindWaveAction(FrostWindWaveAction *this)

{
  ~FrostWindWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrostWindWaveAction::SpawnWindStatic(FrostWindDescription const&) */

void FrostWindWaveAction::SpawnWindStatic(FrostWindDescription *param_1)

{
  int iVar1;
  int iVar2;
  StandaloneEffect *this;
  PopAnimRig *pPVar3;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)param_1 == 1) {
    iVar2 = 0;
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"effectobject_frostwind");
  this = (StandaloneEffect *)Board::AddEffectObject(this_00,asStack_10,iVar2,iVar1);
  std::string::~string(asStack_10);
  nop();
  StandaloneEffect::SetKeepAlive(this,false);
  if (*(int *)param_1 == 0) {
    pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
    PopAnimRig::SetMirrorX(pPVar3,true);
  }
  pPVar3 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this);
  PopAnimRig::SetDrawScale(pPVar3,0.8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrostWindWaveAction::SpawnWind(FrostWindDescription const&) */

void __thiscall
FrostWindWaveAction::SpawnWind(FrostWindWaveAction *this,FrostWindDescription *param_1)

{
  float fVar1;
  
  SpawnWindStatic(param_1);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c) = fVar1 + 0.4;
  return;
}


/* FrostWindWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void FrostWindWaveAction::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  long lVar2;
  FrostWindDescription *pFVar3;
  undefined8 uVar4;
  
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar4 = *(undefined8 *)(pFVar1 + 0x40);
  lVar2 = FUN_0493ec28(uVar4,*(undefined8 *)(pFVar1 + 0x48));
  if (lVar2 != 0) {
    pFVar3 = (FrostWindDescription *)FUN_0493ec50(uVar4,0);
    SpawnWind((FrostWindWaveAction *)param_1,pFVar3);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  WaveAction::notifyWaveEvents(param_1);
  return;
}


/* FrostWindWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void FrostWindWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  int iVar1;
  WaveAction *this;
  FairyTaleWindWaveActionProps *pFVar2;
  long lVar3;
  undefined8 uVar4;
  FrostWindDescription *pFVar5;
  float fVar6;
  float fVar7;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  lVar3 = FUN_0493ec28(*(undefined8 *)(pFVar2 + 0x40),*(undefined8 *)(pFVar2 + 0x48));
  if (((lVar3 != 0) && ((ulong)(long)*(int *)(this + 0x18) < lVar3 - 1U)) &&
     (fVar7 = *(float *)(this + 0x1c), fVar6 = (float)PVZ_T(), fVar7 <= fVar6)) {
    iVar1 = *(int *)(this + 0x18);
    uVar4 = *(undefined8 *)(pFVar2 + 0x40);
    *(int *)(this + 0x18) = iVar1 + 1;
    pFVar5 = (FrostWindDescription *)FUN_0493ec50(uVar4,(long)(iVar1 + 1));
    SpawnWind((FrostWindWaveAction *)this,pFVar5);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrostWindWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall FrostWindWaveAction::AddResourceRequirements(FrostWindWaveAction *this,set *param_1)

{
  bool bVar1;
  FairyTaleWindWaveActionProps *pFVar2;
  undefined8 uVar3;
  string *psVar4;
  EffectObjectType *this_00;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  local_18 = FUN_0493f3ec(*(undefined8 *)(pFVar2 + 0x10));
  local_10 = FUN_0493f43c(*(undefined8 *)(pFVar2 + 0x18));
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
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
  std::string::string((string *)&local_10,"effectobject_frostwind");
  ObjectTypeDirectory<EffectObjectType>::GetTypeFromTypeName(psVar4);
  std::string::~string((string *)&local_10);
  nop();
  this_00 = (EffectObjectType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  EffectObjectType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

