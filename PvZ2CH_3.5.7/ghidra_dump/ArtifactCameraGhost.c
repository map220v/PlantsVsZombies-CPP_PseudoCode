// Class: ArtifactCameraGhost


/* ArtifactCameraGhost::~ArtifactCameraGhost() */

void __thiscall ArtifactCameraGhost::~ArtifactCameraGhost(ArtifactCameraGhost *this)

{
  *(undefined ***)this = &PTR_GetClass_0669c610;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactCameraGhost_0669c800;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactCameraGhost::~ArtifactCameraGhost() */

void __thiscall ArtifactCameraGhost::~ArtifactCameraGhost(ArtifactCameraGhost *this)

{
  ~ArtifactCameraGhost(this + -0x10);
  return;
}


/* ArtifactCameraGhost::~ArtifactCameraGhost() */

void __thiscall ArtifactCameraGhost::~ArtifactCameraGhost(ArtifactCameraGhost *this)

{
  ~ArtifactCameraGhost(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactCameraGhost::~ArtifactCameraGhost() */

void __thiscall ArtifactCameraGhost::~ArtifactCameraGhost(ArtifactCameraGhost *this)

{
  ~ArtifactCameraGhost(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::StaticClassInit() */

void ArtifactCameraGhost::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCameraGhost");
    (*pcVar2)(plVar1,asStack_10,FUN_037ed130,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCameraGhost::StaticGetClass() */

long * ArtifactCameraGhost::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactCameraGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraGhost::GetClass() const */

long * ArtifactCameraGhost::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactCameraGhost",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCameraGhost::ArtifactCameraGhost() */

void __thiscall ArtifactCameraGhost::ArtifactCameraGhost(ArtifactCameraGhost *this)

{
  undefined4 uVar1;
  
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (ArtifactCameraGhost)0x0;
  this[0x1a6] = (ArtifactCameraGhost)0x0;
  *(undefined ***)this = &PTR_GetClass_0669c610;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactCameraGhost_0669c800;
  this[0x1a7] = (ArtifactCameraGhost)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  *(undefined4 *)(this + 0x1a8) = 0x40a00000;
  return;
}


/* ArtifactCameraGhost::StaticNew() */

ArtifactCameraGhost * ArtifactCameraGhost::StaticNew(void)

{
  ArtifactCameraGhost *this;
  
  this = ::operator_new(0x1b0);
  ArtifactCameraGhost(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::onStartAnimStopped(std::string const&) */

void __thiscall ArtifactCameraGhost::onStartAnimStopped(ArtifactCameraGhost *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"ghost_start");
  if (bVar1) {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    std::string::string(asStack_40,"ghost_loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"threat_start");
    if (bVar1) {
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
      std::string::string(asStack_40,"threat_loop");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      this[0x1a6] = (ArtifactCameraGhost)0x1;
    }
    else {
      bVar1 = std::operator==(param_1,"threat_end");
      if (bVar1) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::onProjectileInitialized() */

void __thiscall ArtifactCameraGhost::onProjectileInitialized(ArtifactCameraGhost *this)

{
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::string::string(asStack_58,"ghost_start");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ArtifactCameraGhost,void(ArtifactCameraGhost::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::StartThreat() */

void __thiscall ArtifactCameraGhost::StartThreat(ArtifactCameraGhost *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (ArtifactCameraGhost)0x0) {
    this[0x1a5] = (ArtifactCameraGhost)0x1;
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar2 + *(float *)(this + 0x1a8);
    Projectile::SetVelocity((Projectile *)this,0.0,0.0,0.0);
    Projectile::SetAcceleration((Projectile *)this,0.0,0.0,0.0);
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    std::string::string(asStack_58,"threat_start");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onStartAnimStopped);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ArtifactCameraGhost,void(ArtifactCameraGhost::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::CanThreatZombie(Zombie*) */

void __thiscall ArtifactCameraGhost::CanThreatZombie(ArtifactCameraGhost *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ZombieZombossMech *pZVar5;
  RtObject *this_00;
  ArtifactCamera *this_01;
  string *psVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((((param_1 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0'))
         && (iVar4 = Zombie::GetFacing(param_1), iVar4 == 0)) &&
        (((cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar2 == '\0')) &&
         ((cVar2 = FUN_037ed2e4(*(undefined4 *)(param_1 + 0xcc)), cVar2 == '\0' &&
          ((cVar2 = Zombie::IsInvisible(param_1), cVar2 == '\0' &&
           (cVar2 = Zombie::IsBoss(param_1), cVar2 == '\0')))))))) &&
       ((pZVar5 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
        pZVar5 == (ZombieZombossMech *)0x0 &&
        (((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasCondition(param_1,0x92), cVar2 == '\0')))))) &&
      (((bVar3 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), !bVar3 &&
        (bVar3 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), !bVar3)) &&
       (((bVar3 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), !bVar3 &&
         ((bVar3 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), !bVar3 &&
          (bVar3 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), !bVar3)))) &&
        (bVar3 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), !bVar3)))))) &&
     (((bVar3 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1), !bVar3 &&
       (bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), !bVar3)) &&
      (bVar3 = Sexy::RtObject::IsA<ZombieAirbubble>((RtObject *)param_1), !bVar3)))) {
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    ArtifactMgr::GetActivatedArtifact();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = Sexy::RtObject::Cast<ArtifactCamera>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (this_01 != (ArtifactCamera *)0x0) {
      psVar6 = (string *)Zombie::GetTypeName(param_1);
      cVar2 = ArtifactCamera::IsInThreatZombieBlacklist(this_01,psVar6);
      if (cVar2 == '\0') goto LAB_037ee108;
    }
  }
  cVar1 = '\0';
LAB_037ee108:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* ArtifactCameraGhost::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
ArtifactCameraGhost::OnCollideEntity(ArtifactCameraGhost *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  if ((((param_1 != (BoardEntity *)0x0) && (this[0x1a5] == (ArtifactCameraGhost)0x0)) &&
      (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) &&
     (cVar1 = CanThreatZombie(this,pZVar2), cVar1 != '\0')) {
    StartThreat(this);
    return 0;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCameraGhost::onUpdate(float) */

void ArtifactCameraGhost::onUpdate(float param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ArtifactCameraGhost *in_x0;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this;
  PopAnimRig *pPVar6;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  string asStack_60 [8];
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1a5] != (ArtifactCameraGhost)0x0) {
    fVar10 = (float)PVZ_T();
    if (*(float *)(in_x0 + 0x1ac) <= fVar10) {
      if (in_x0[0x1a7] == (ArtifactCameraGhost)0x0) {
        in_x0[0x1a7] = (ArtifactCameraGhost)0x1;
        pPVar6 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
        std::string::string(asStack_60,"threat_end");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)in_x0,onStartAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<ArtifactCameraGhost,void(ArtifactCameraGhost::*)(std::string_const&)>
                  (aDStack_38,(CBMemberTranslatorX *)&local_50);
        PopAnimRig::PlayAndStop(pPVar6,asStack_60,0,aDStack_38);
        std::string::~string(asStack_60);
        nop();
      }
    }
    else if (in_x0[0x1a6] != (ArtifactCameraGhost)0x0) {
      uVar9 = 0;
      Projectile::CalcCollisionRectBoardSpace();
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_58 = local_58 + iVar3;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      EntityFinder::GetEntitiesInRectangle
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
                 asStack_60);
      while (uVar1 = local_50, uVar4 = FUN_037ec70c(local_50,local_48), uVar9 < uVar4) {
        puVar5 = (undefined8 *)FUN_037ec718(uVar1,uVar9);
        this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        cVar2 = CanThreatZombie(in_x0,this);
        if ((cVar2 == '\0') ||
           ((iVar3 = Zombie::GetSizeType(this), iVar3 != 1 &&
            (iVar3 = Zombie::GetSizeType(this), iVar3 != 0)))) {
          uVar9 = uVar9 + 1;
        }
        else {
          cVar2 = Zombie::HasCondition(this,0x95);
          if (cVar2 == '\0') {
            uVar9 = uVar9 + 1;
            Zombie::ApplyCondition((Zombie *)0x3f800000,0,this,0x95,1);
          }
          else {
            uVar9 = uVar9 + 1;
            pEVar7 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                     Zombie::GetConditionTracker(this);
            lVar8 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar7,0x95);
            fVar10 = (float)PVZ_T();
            *(float *)(lVar8 + 4) = fVar10 + 3.0;
          }
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

