// Class: ArtifactSwarm


/* ArtifactSwarm::SwtchShootType(float) */

void __thiscall ArtifactSwarm::SwtchShootType(ArtifactSwarm *this,float param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x5c);
  if (fVar1 < param_1) {
    *(float *)(this + 0x7c) = param_1 - fVar1;
  }
  *(uint *)(this + 0x78) = (uint)(fVar1 < param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::StaticClassInit() */

void ArtifactSwarm::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSwarm");
    (*pcVar2)(plVar1,asStack_10,FUN_0373aa20,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarm::StaticGetClass() */

long * ArtifactSwarm::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarm::GetClass() const */

long * ArtifactSwarm::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSwarm::RecoveryProjectile(int) */

void __thiscall ArtifactSwarm::RecoveryProjectile(ArtifactSwarm *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = ClampInt(param_1 + *(int *)(this + 0x44),0,*(int *)(this + 0x48));
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* ArtifactSwarm::CanShootState() */

bool __thiscall ArtifactSwarm::CanShootState(ArtifactSwarm *this)

{
  return 1 < *(int *)(this + 0x40) - 2U && *(int *)(this + 0x40) != 5;
}


/* ArtifactSwarm::~ArtifactSwarm() */

void __thiscall ArtifactSwarm::~ArtifactSwarm(ArtifactSwarm *this)

{
  *(undefined ***)this = &PTR_GetClass_06695700;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSwarm::~ArtifactSwarm() */

void __thiscall ArtifactSwarm::~ArtifactSwarm(ArtifactSwarm *this)

{
  ~ArtifactSwarm(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactSwarm::CanTriggerMain() */

char __thiscall ArtifactSwarm::CanTriggerMain(ArtifactSwarm *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((this[0x18] != (ArtifactSwarm)0x0) &&
     (cVar1 = Artifact::IsFieldActivated((Artifact *)this,0), cVar1 != '\0')) {
    iVar2 = DangerRoomManager::GetMaxLastWeekLevel((DangerRoomManager *)this);
    iVar3 = (**(code **)(*(long *)this + 0xa0))(this);
    if ((iVar2 <= iVar3) &&
       (((fVar5 = *(float *)(this + 0x38), fVar4 = (float)PVZ_T(), fVar5 <= fVar4 &&
         (0 < *(int *)(this + 0x44))) && (cVar1 = CanShootState(this), cVar1 != '\0')))) {
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::ShootProjectile(int) */

void __thiscall ArtifactSwarm::ShootProjectile(ArtifactSwarm *this,int param_1)

{
  int iVar1;
  int iVar2;
  ArtifactSwarmSubSystem *this_00;
  float fVar3;
  
  if (param_1 == 0) {
    iVar2 = *(int *)(this + 0x4c);
    if (*(int *)(this + 0x44) < *(int *)(this + 0x4c)) {
      iVar2 = *(int *)(this + 0x44);
    }
  }
  else {
    iVar1 = *(int *)(this + 0x44);
    iVar2 = *(int *)(this + 0x4c);
    if (iVar2 <= iVar1) {
      if (*(float *)(this + 0x7c) / *(float *)(this + 0x60) < 1.0) {
        fVar3 = (float)iVar1 * (*(float *)(this + 0x7c) / *(float *)(this + 0x60));
      }
      else {
        fVar3 = (float)iVar1;
      }
      iVar2 = ClampInt((int)fVar3,iVar2,iVar1);
    }
  }
  this_00 = Board::GetGameSubSystem<ArtifactSwarmSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactSwarmSubSystem::LaunchProjectile(this_00,iVar2,_FUN_0374d73c);
  return;
}


/* ArtifactSwarm::SwitchToState(int) */

void __thiscall ArtifactSwarm::SwitchToState(ArtifactSwarm *this,int param_1)

{
  float fVar1;
  
  if (param_1 == 0) {
    fVar1 = (float)PVZ_T();
    *(undefined4 *)(this + 0x40) = 0;
    *(float *)(this + 0x6c) = fVar1 + *(float *)(this + 100);
    return;
  }
  if (param_1 == 1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x70) = fVar1 + *(float *)(this + 0x60);
  }
  else if (param_1 == 3) {
    ShootProjectile(this,*(int *)(this + 0x78));
  }
  else if (param_1 == 4) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x74) = fVar1 + 1.0;
  }
  else if (param_1 == 5) {
    ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
    MessageRouter::Post((_func_void *)gMessageRouter);
    *(undefined4 *)(this + 0x40) = 5;
    return;
  }
  *(int *)(this + 0x40) = param_1;
  return;
}


/* ArtifactSwarm::Update() */

void __thiscall ArtifactSwarm::Update(ArtifactSwarm *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 == 0) {
    if ((*(int *)(this + 0x44) < *(int *)(this + 0x48)) &&
       (fVar3 = *(float *)(this + 0x6c), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
      SwitchToState(this,4);
      return;
    }
  }
  else if (2 < iVar1 - 1U) {
    if (iVar1 == 4) {
      fVar3 = *(float *)(this + 0x74);
      fVar2 = (float)PVZ_T();
      if (fVar3 < fVar2) {
        fVar2 = (float)PVZ_T();
        *(float *)(this + 0x74) = fVar2 + 1.0;
        RecoveryProjectile(this,*(int *)(this + 0x68));
        if (*(int *)(this + 0x48) <= *(int *)(this + 0x44)) goto LAB_0374d8b8;
      }
    }
    else if (((iVar1 == 5) && (this[0x3c] != (ArtifactSwarm)0x0)) &&
            (fVar2 = (float)Artifact::GetTriggerLeftTime((Artifact *)this), fVar2 <= 0.0)) {
      this[0x3c] = (ArtifactSwarm)0x0;
      MessageRouter::Post((_func_void *)gMessageRouter);
LAB_0374d8b8:
      SwitchToState(this,0);
      return;
    }
  }
  return;
}


/* ArtifactSwarm::StartShoot() */

void __thiscall ArtifactSwarm::StartShoot(ArtifactSwarm *this)

{
  SwitchToState(this,3);
  return;
}


/* ArtifactSwarm::SwarmFireProjectileFinish() */

void __thiscall ArtifactSwarm::SwarmFireProjectileFinish(ArtifactSwarm *this)

{
  SwitchToState(this,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::Fire(Sexy::SexyVector3, Sexy::RtWeakPtr<ProjectilePropertySheet>, BoardEntity*) */

void ArtifactSwarm::Fire(Board *param_1,float param_2,undefined4 param_3,long param_4,
                        RtWeakPtrBase *param_5,
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *param_6)

{
  Projectile *this;
  SexyVector3 *pSVar1;
  DVec3 *this_00;
  ArtifactSwarmProjectile *pAVar2;
  undefined8 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_5);
  this = (Projectile *)Board::AddProjectile(param_1._0_4_,param_2,param_3,uVar3,aRStack_20,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (param_6 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(param_6);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar1);
    local_14 = local_14 - 30.0;
    fVar4 = atan2f(local_14 - param_2,local_18 - (float)param_1._0_4_);
    FUN_03723af0(-fVar4,this + 0xc4);
    this_00 = (DVec3 *)Projectile::GetVelocity(this);
    fVar4 = (float)DVec3::getLength(this_00);
    Projectile::SetRotatedVelocity(this,fVar4);
  }
  FUN_03723aac(this + 0x24,1);
  FUN_03723b20(*(float *)(param_4 + 0x54) + 1.0,this + 0x184);
  pAVar2 = Sexy::RtObject::Cast<ArtifactSwarmProjectile>((RtObject *)this);
  if (pAVar2 != (ArtifactSwarmProjectile *)0x0) {
    FUN_03723d7c(*(undefined4 *)(param_4 + 0x58),pAVar2 + 0x1a8);
  }
  if (0 < *(int *)(param_4 + 0x44)) {
    *(int *)(param_4 + 0x44) = *(int *)(param_4 + 0x44) + -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::SwarmFireProjectile(BoardEntity*, int) */

void __thiscall
ArtifactSwarm::SwarmFireProjectile(ArtifactSwarm *this,BoardEntity *param_1,int param_2)

{
  char cVar1;
  RtObject *this_00;
  ArtifactSwarmProperties *pAVar2;
  Point *extraout_x1;
  ArtifactSwarmProperties *pAVar3;
  int local_28;
  int local_24;
  Point aPStack_20 [4];
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  Sexy::Point::Point(aPStack_20,0,2);
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_20,extraout_x1);
  local_18 = (float)local_28;
  local_10 = 0;
  if (param_1 == (BoardEntity *)0x0) {
    local_14 = (float)local_24 - 50.0;
  }
  else {
    BoardEntity::CalcGridPosition();
    if (local_1c == 0) {
      local_14 = (float)local_24 - 100.0;
    }
    else if (local_1c - 1U < 2) {
      local_14 = (float)local_24 - 80.0;
    }
    else {
      local_14 = (float)(local_24 + -0x1e);
    }
  }
  EntityComponent_GroundEffect::GetEffect();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
  pAVar2 = Sexy::RtObject::Cast<ArtifactSwarmProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
  if ((*(int *)(this + 0x78) == 0) ||
     (cVar1 = Artifact::IsFieldActivated((Artifact *)this,3), cVar1 == '\0')) {
    pAVar3 = pAVar2 + 0x150;
  }
  else {
    pAVar3 = pAVar2 + 0x160;
    if (param_2 % 5 != 4) {
      pAVar3 = pAVar2 + 0x158;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aPStack_20,(RtWeakPtrBase *)pAVar3);
  Fire(local_18,local_14,local_10,this,aPStack_20,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::AutoClick(int) */

void ArtifactSwarm::AutoClick(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ArtifactSwarm *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(char *)((ulong)(uint)param_1 + 0x3f) == '\0') &&
     (lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr(), lVar4 != 0)) {
    iVar2 = ArtifactMgr::GetActivatedArtifactUsedTime();
    iVar3 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = ArtifactMgr::CanTriggerActivatedArtifact();
    if ((iVar2 < iVar3) && (cVar1 != '\0')) {
      this = (ArtifactSwarm *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      cVar1 = CanShootState(this);
      if (cVar1 != '\0') {
        MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,2.0);
        MessageRouter::Post((_func_void *)gMessageRouter);
        *(undefined1 *)((ulong)(uint)param_1 + 0x3f) = 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSwarm::ArtifactSwarm() */

void __thiscall ArtifactSwarm::ArtifactSwarm(ArtifactSwarm *this)

{
  undefined *puVar1;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06695700;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwitchToState);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactSwarm,void(ArtifactSwarm::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifySwarmSwitchState,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwtchShootType);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<ArtifactSwarm,void(ArtifactSwarm::*)(float)>>
            ((MessageRouter *)puVar1,Message::NotifySwarmSwitchShootType,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwarmFireProjectile);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<BoardEntity*,int,Sexy::CBMemberTranslatorX<ArtifactSwarm,void(ArtifactSwarm::*)(BoardEntity*,int)>>
            ((MessageRouter *)puVar1,Message::NotifySwarmFireProjectile,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwarmFireProjectileFinish);
  Sexy::Delegate0::Delegate0<ArtifactSwarm,void(ArtifactSwarm::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifySwarmFireProjectileFinish,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StartShoot);
  Sexy::Delegate0::Delegate0<ArtifactSwarm,void(ArtifactSwarm::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifySwarmStartShoot,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSwarm::StaticNew() */

ArtifactSwarm * ArtifactSwarm::StaticNew(void)

{
  ArtifactSwarm *this;
  
  this = ::operator_new(0x80);
  ArtifactSwarm(this);
  return this;
}


/* ArtifactSwarm::Activate() */

void __thiscall ArtifactSwarm::Activate(ArtifactSwarm *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  undefined4 uVar4;
  
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x34) = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(float *)(this + 0x30) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(int *)(this + 0x48) = (int)fVar3;
  *(int *)(this + 0x44) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(int *)(this + 0x4c) = (int)fVar3;
  *(int *)(this + 0x50) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  *(undefined4 *)(this + 0x5c) = uVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,0,3);
  *(undefined4 *)(this + 0x60) = uVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,0,4);
  *(undefined4 *)(this + 100) = uVar4;
  if (cVar1 == '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,5);
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(int *)(this + 0x68) = (int)fVar3;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x6c) = uVar4;
  *(undefined4 *)(this + 0x70) = uVar4;
  *(undefined4 *)(this + 0x74) = uVar4;
  uVar4 = Artifact::GetBoostValue((Artifact *)this,1);
  *(undefined4 *)(this + 0x54) = uVar4;
  uVar4 = Artifact::GetBoostValue((Artifact *)this,3);
  *(undefined4 *)(this + 0x58) = uVar4;
  return;
}

