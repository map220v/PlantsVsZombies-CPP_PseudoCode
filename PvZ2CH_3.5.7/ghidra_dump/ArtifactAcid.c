// Class: ArtifactAcid


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::StaticClassInit() */

void ArtifactAcid::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactAcid");
    (*pcVar2)(plVar1,asStack_10,FUN_03748fcc,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcid::StaticGetClass() */

long * ArtifactAcid::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactAcid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactAcid::GetClass() const */

long * ArtifactAcid::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactAcid",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::OnNotifyAcidCursor(int, int) */

void __thiscall ArtifactAcid::OnNotifyAcidCursor(ArtifactAcid *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,param_1,param_2);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x40) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcid::~ArtifactAcid() */

void __thiscall ArtifactAcid::~ArtifactAcid(ArtifactAcid *this)

{
  *(undefined ***)this = &PTR_GetClass_0668e7b0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactAcid::~ArtifactAcid() */

void __thiscall ArtifactAcid::~ArtifactAcid(ArtifactAcid *this)

{
  ~ArtifactAcid(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::GetTriggerCooldown() */

void ArtifactAcid::GetTriggerCooldown(void)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(extraout_x0 + 0x150));
}


/* ArtifactAcid::shouldApplyAcidDamage(Zombie*) */

undefined8 __thiscall ArtifactAcid::shouldApplyAcidDamage(ArtifactAcid *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
       (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0')) ||
      ((((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
        ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
         ((cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0' ||
          (cVar1 = FUN_0373c274(*(undefined4 *)(param_1 + 0x28)), cVar1 != '\0')))))) ||
       (cVar1 = FUN_0373c80c(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0')))) ||
     (((bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidBasic>((RtObject *)param_1), bVar2 ||
       (bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidImp>((RtObject *)param_1), bVar2)) ||
      (bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidGargantuar>((RtObject *)param_1), bVar2)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* ArtifactAcid::shouldApplyAcidCondition(Zombie*) */

undefined8 __thiscall ArtifactAcid::shouldApplyAcidCondition(ArtifactAcid *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (((((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0'))
         || (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0')) ||
        (((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
          (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
         ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
          ((cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0' ||
           (cVar1 = FUN_0373c80c(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0')))))))) ||
       ((cVar1 = FUN_0373c274(*(undefined4 *)(param_1 + 0x28)), cVar1 != '\0' ||
        (((cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0' ||
          (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')) ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')))))) ||
      (((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
        (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2)) ||
       (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar2 ||
         ((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), bVar2 ||
          (bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), bVar2)))) ||
        (bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), bVar2)))))) ||
     (((bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidBasic>((RtObject *)param_1), bVar2 ||
       (bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidImp>((RtObject *)param_1), bVar2)) ||
      (bVar2 = Sexy::RtObject::IsA<ZombieArtifactAcidGargantuar>((RtObject *)param_1), bVar2)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::OnNotifyAcidReturn(int, int, bool) */

void __thiscall
ArtifactAcid::OnNotifyAcidReturn(ArtifactAcid *this,int param_1,int param_2,bool param_3)

{
  long extraout_x0;
  float fVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((0 < *(int *)(this + 0x34)) && (*(int *)(this + 0x34) = *(int *)(this + 0x34) + -1, !param_3))
  {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar1 = (float)PVZ_T();
    fVar2 = *(float *)(extraout_x0 + 0x150);
    this[0x3c] = (ArtifactAcid)0x1;
    *(float *)(this + 0x38) = fVar1 + fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcid::ArtifactAcid() */

void __thiscall ArtifactAcid::ArtifactAcid(ArtifactAcid *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668e7b0;
  Sexy::Point::Point((Point *)(this + 0x40));
  return;
}


/* ArtifactAcid::StaticNew() */

ArtifactAcid * ArtifactAcid::StaticNew(void)

{
  ArtifactAcid *this;
  
  this = ::operator_new(0x60);
  ArtifactAcid(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::spawnAcid(Sexy::Point const&) */

void __thiscall ArtifactAcid::spawnAcid(ArtifactAcid *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtObject *this_00;
  GridItemAcid *pGVar4;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if ((((cVar1 == '\0') &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
      (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (((*(int *)param_1 != -1 && (*(int *)(param_1 + 4) != -1)) &&
      (lVar2 = FUN_03754d00(), lVar2 == 0)))) {
    lVar2 = FUN_03755edc(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    lVar3 = FUN_03754ec8(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (lVar2 == 0) {
      if (lVar3 == 0) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"acid");
        this_00 = (RtObject *)
                  Board::AddGridItem(this_01,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
        pGVar4 = Sexy::RtObject::Cast<GridItemAcid>(this_00);
        std::string::~string(asStack_10);
        nop();
        FUN_03723c04(*(undefined4 *)(this + 0x48),pGVar4 + 0x1ec);
        FUN_03723c0c(*(undefined4 *)(this + 0x4c),pGVar4 + 0x1f0);
        FUN_03723c14(*(undefined4 *)(this + 0x50),pGVar4 + 500);
        FUN_03723c1c(*(undefined4 *)(this + 0x58),pGVar4 + 0x1f8);
        FUN_03723c24(*(undefined4 *)(this + 0x5c),pGVar4 + 0x1fc);
        FUN_03723aac(pGVar4 + 0x24,1);
      }
    }
    else {
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcid::spawnAcid() */

void __thiscall ArtifactAcid::spawnAcid(ArtifactAcid *this)

{
  spawnAcid(this,(Point *)(this + 0x40));
  return;
}


/* ArtifactAcid::DoTrigger() */

void __thiscall ArtifactAcid::DoTrigger(ArtifactAcid *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  spawnAcid(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactAcid::applyAcidExplosion(Zombie*) */

void __thiscall ArtifactAcid::applyAcidExplosion(ArtifactAcid *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Insets::Insets(aIStack_90,iVar3 + -1,iVar4 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,2,aIStack_90);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if ((this_00 != param_1) && (this_00 != (Zombie *)0x0)) {
        cVar1 = shouldApplyAcidDamage(this,this_00);
        if (cVar1 != '\0') {
          DamageInfo::DamageInfo(aDStack_68);
          local_60 = *(undefined4 *)(this + 0x54);
          local_58 = operator|(0x800000000,0x800000000000);
          (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        cVar1 = shouldApplyAcidCondition(this,this_00);
        if (cVar1 != '\0') {
          uVar6 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(this + 0x58),uVar6,0x80);
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x5c),0,this_00,0x80,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactAcid::OnNotifyAcidZombieDie(Zombie*) */

void __thiscall ArtifactAcid::OnNotifyAcidZombieDie(ArtifactAcid *this,Zombie *param_1)

{
  if ((param_1 != (Zombie *)0x0) && (0.0 < *(float *)(this + 0x54))) {
    applyAcidExplosion(this,param_1);
    return;
  }
  return;
}


/* ArtifactAcid::Activate() */

void __thiscall ArtifactAcid::Activate(ArtifactAcid *this)

{
  undefined *puVar1;
  char cVar2;
  ArtifactMgr *pAVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x34) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyAcidCursor);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArtifactAcid,void(ArtifactAcid::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyAcidCursor,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyAcidZombieDie);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ArtifactAcid,void(ArtifactAcid::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::NotifyAcidZombieDie,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyAcidReturn);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<ArtifactAcid,void(ArtifactAcid::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyAcidReturn,&local_b0);
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x30) = fVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar4 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x48) = fVar4;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
  }
  *(undefined4 *)(this + 0x4c) = uVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar3,3,1);
  }
  *(undefined4 *)(this + 0x50) = uVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar3,3,2);
  }
  *(undefined4 *)(this + 0x58) = uVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar3,3,3);
  }
  *(undefined4 *)(this + 0x5c) = uVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar5 = 0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar3,3,4);
  }
  *(undefined4 *)(this + 0x54) = uVar5;
  return;
}

