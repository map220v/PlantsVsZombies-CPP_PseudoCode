// Class: Artifact


/* Artifact::AutoClick(int) */

int Artifact::AutoClick(int param_1)

{
  return param_1;
}


/* Artifact::DisplayPassiveSkill(float) */

void Artifact::DisplayPassiveSkill(float param_1)

{
  return;
}


/* Artifact::ActivateSpeciallyOnDisplayBoard(int) */

int Artifact::ActivateSpeciallyOnDisplayBoard(int param_1)

{
  return param_1;
}


/* Artifact::OnStartBuff() */

void __thiscall Artifact::OnStartBuff(Artifact *this)

{
  this[0x3d] = (Artifact)0x1;
  return;
}


/* Artifact::OnNotifyArtifactToolUsed() */

void __thiscall Artifact::OnNotifyArtifactToolUsed(Artifact *this)

{
  int iVar1;
  
  if ((0 < *(int *)(this + 0x34)) &&
     (iVar1 = *(int *)(this + 0x34) + -1, *(int *)(this + 0x34) = iVar1, iVar1 == 0)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::StaticClassInit() */

void Artifact::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CommonData");
    (*pcVar3)(plVar2,asStack_10,FUN_03723f3c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Artifact");
    (*pcVar3)(plVar2,asStack_10,FUN_0375e728,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Artifact::StaticGetClass() */

long * Artifact::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"Artifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Artifact::GetClass() const */

long * Artifact::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"Artifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Artifact::IsFieldActivated(FieldType) */

bool __thiscall Artifact::IsFieldActivated(Artifact *this,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  switch(param_2) {
  case 0:
    return true;
  case 1:
    iVar1 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    return 1 < iVar1;
  case 2:
    iVar1 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    return 2 < iVar1;
  case 3:
    iVar1 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    bVar2 = 3 < iVar1;
  }
  return bVar2;
}


/* Artifact::TriggerMain() */

void __thiscall Artifact::TriggerMain(Artifact *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x88))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x90))(this);
  }
  return;
}


/* Artifact::OnNotifyArtifactButtonDepress(int) */

void __thiscall Artifact::OnNotifyArtifactButtonDepress(Artifact *this,int param_1)

{
  *(int *)(this + 0x34) = param_1;
  TriggerMain(this);
  return;
}


/* Artifact::~Artifact() */

void __thiscall Artifact::~Artifact(Artifact *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a930;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* Artifact::~Artifact() */

void __thiscall Artifact::~Artifact(Artifact *this)

{
  ~Artifact(this);
  AK::FreeHook(this);
  return;
}


/* Artifact::GetMaxUsedTimes() */

ulong __thiscall Artifact::GetMaxUsedTimes(Artifact *this)

{
  char cVar1;
  DangerRoomManager *this_00;
  ulong uVar2;
  
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  cVar1 = ArtifactMgr::IsDangerRoom();
  if (cVar1 == '\0') {
    return (ulong)*(uint *)(this + 0x24);
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetArtifactMaxTimes(this_00);
  return uVar2;
}


/* Artifact::CanTriggerMain() */

char __thiscall Artifact::CanTriggerMain(Artifact *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((this[0x18] != (Artifact)0x0) && (cVar1 = IsFieldActivated(this,0), cVar1 != '\0')) {
    iVar2 = DangerRoomManager::GetMaxLastWeekLevel((DangerRoomManager *)this);
    iVar3 = (**(code **)(*(long *)this + 0xa0))(this);
    if ((iVar2 <= iVar3) &&
       (fVar5 = *(float *)(this + 0x38), fVar4 = (float)PVZ_T(), fVar5 <= fVar4)) {
      return cVar1;
    }
  }
  return '\0';
}


/* Artifact::GetTriggerLeftTime() */

float __thiscall Artifact::GetTriggerLeftTime(Artifact *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x38);
  fVar1 = (float)PVZ_T();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}


/* Artifact::Update() */

void __thiscall Artifact::Update(Artifact *this)

{
  float fVar1;
  
  if ((this[0x3c] != (Artifact)0x0) && (fVar1 = (float)GetTriggerLeftTime(this), fVar1 <= 0.0)) {
    this[0x3c] = (Artifact)0x0;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::GetArtResourceGroups() */

void Artifact::GetArtResourceGroups(void)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1 + 0x108);
}


/* Artifact::EnsureResourceGroupsLoaded() */

void Artifact::EnsureResourceGroupsLoaded(void)

{
  LawnApp *this;
  char cVar1;
  vector *pvVar2;
  Board *this_00;
  
  this = gLawnApp;
  pvVar2 = (vector *)GetArtResourceGroups();
  cVar1 = LawnApp::IsGroupLoadComplete(this,pvVar2);
  if (cVar1 != '\0') {
    return;
  }
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  pvVar2 = (vector *)GetArtResourceGroups();
  Board::LoadResourceGroupsForGameplay(this_00,pvVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::GetBoostValue(ArtifactBoostType) */

void __thiscall Artifact::GetBoostValue(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ResourceInfo *pRVar2;
  NameMapperBase *this;
  ArtifactMgr *pAVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this = (NameMapperBase *)ArtifactMapper::GetInstance();
  uVar1 = NameMapperBase::GetIdForName(this,(string *)(pRVar2 + 0x10));
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetBoostValue(pAVar3,uVar1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::OnGetArtifactBoosts(int, int) */

void __thiscall Artifact::OnGetArtifactBoosts(Artifact *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  NameMapperBase *this_00;
  ArtifactMgr *this_01;
  long lVar4;
  float fVar5;
  float fVar6;
  string asStack_18 [8];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xd0))();
  if (cVar1 == '\0') goto LAB_03743dcc;
  iVar2 = PlantNameMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  switch(param_2) {
  case 4:
    fVar6 = (float)(**(code **)(*(long *)this + 0xd8))(this,asStack_18);
    break;
  default:
    fVar6 = 0.0;
    goto LAB_03743e6c;
  case 6:
    fVar6 = (float)(**(code **)(*(long *)this + 0xe0))(this,asStack_18);
    break;
  case 8:
    fVar6 = (float)(**(code **)(*(long *)this + 0xe8))(this,asStack_18);
    break;
  case 10:
    fVar6 = (float)(**(code **)(*(long *)this + 0xf0))(this,asStack_18);
  }
  if (0.0 < fVar6) {
    fVar5 = (float)GetBoostValue(this,7);
    fVar6 = fVar5 * fVar6 + fVar6;
  }
LAB_03743e6c:
  EntityComponent_GroundEffect::GetEffect();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(pRVar3 + 0x10));
  local_10[0] = 0.0;
  this_01 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetGlobalExtraValue(this_01,local_10,param_1,param_2,iVar2);
  fVar6 = fVar6 + local_10[0];
  lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  FUN_03723d2c(fVar6,lVar4 + 0x20);
  std::string::~string(asStack_18);
LAB_03743dcc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::Artifact() */

void __thiscall Artifact::Artifact(Artifact *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_0668a930;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  TitleIconState::TitleIconState((TitleIconState *)(this + 0x24));
  this[0x18] = (Artifact)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x34) = 0;
  uVar2 = PVZ_EOT();
  this[0x3c] = (Artifact)0x0;
  this[0x3d] = (Artifact)0x0;
  this[0x3e] = (Artifact)0x0;
  this[0x3f] = (Artifact)0x0;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyArtifactToolUsed);
  Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyArtifactToolUsed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyArtifactButtonDepress);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<Artifact,void(Artifact::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyArtifactButtonDepress,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetArtifactBoosts);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::Subscribe<int,int,Sexy::CBMemberTranslatorX<Artifact,void(Artifact::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GetArtifactBoosts,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartBuff);
  Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>(aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartBuff,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Artifact::StaticNew() */

Artifact * Artifact::StaticNew(void)

{
  Artifact *this;
  
  this = ::operator_new(0x40);
  Artifact(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::onPostLoad() */

void __thiscall Artifact::onPostLoad(Artifact *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)FUN_03723d28(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (pLVar1 != (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xb8);
    Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Artifact::Activate() */

void __thiscall Artifact::Activate(Artifact *this)

{
  undefined *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ArtifactMgr *this_01;
  DangerRoomManager *this_02;
  LevelModuleManager *pLVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x18] = (Artifact)0x1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x38) = 0;
  this_01 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::FillCommonData(this_01,(CommonData *)(this + 0x24));
  fVar7 = *(float *)(this + 0x28);
  fVar6 = (float)GetBoostValue(this,4);
  *(float *)(this + 0x28) = *(float *)(this + 0x28) - fVar7 * fVar6;
  fVar6 = (float)GetBoostValue(this,5);
  *(int *)(this + 0x24) = (int)(fVar6 + (float)*(int *)(this + 0x24));
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  cVar1 = ArtifactMgr::IsDangerRoom();
  if (cVar1 == '\0') {
    cVar1 = RiftUtils::IsRiftTimedLevel();
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*(long *)this + 0xa0))(this);
    }
  }
  else {
    this_02 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = DangerRoomManager::GetArtifactUsedTimes(this_02);
  }
  *(undefined4 *)(this + 0x34) = uVar2;
  pLVar4 = (LevelModuleManager *)FUN_03723d28(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = gMessageRouter;
  if (pLVar4 == (LevelModuleManager *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xb8);
    Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>(aDStack_38,aCStack_50);
    MessageRouter::Subscribe
              ((MessageRouter *)this_00,Message::ArtifactDisplayBoardUpdate,aDStack_38);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xb8);
    Sexy::Delegate0::Delegate0<Artifact,void(Artifact::*)()>(aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnGameplayUpdate(pLVar4,aDStack_38);
  }
  iVar3 = GameStateMgr::GetState(gGameStateMgr);
  fVar6 = (float)GetBoostValue(this,9);
  if (((0.0 < fVar6) && (iVar3 == 5)) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),(int)fVar6);
  }
  fVar6 = (float)GetBoostValue(this,10);
  if ((0.0 < fVar6) && (iVar3 == 5)) {
    lVar5 = Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    FUN_03723d34(lVar5 + 100,(int)fVar6);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

