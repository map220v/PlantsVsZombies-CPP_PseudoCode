// Class: ArtifactLightning


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::StaticClassInit() */

void ArtifactLightning::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactLightning");
    (*pcVar2)(plVar1,asStack_10,FUN_037611d4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactLightning::StaticGetClass() */

long * ArtifactLightning::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactLightning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactLightning::GetClass() const */

long * ArtifactLightning::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactLightning",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::GenerateLightning() */

void __thiscall ArtifactLightning::GenerateLightning(ArtifactLightning *this)

{
  long extraout_x0;
  ArtifactMgr *pAVar1;
  ThunderSubSystem *pTVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  ArtifactThunderData::ArtifactThunderData((ArtifactThunderData *)&local_20);
  local_20 = *(undefined4 *)(extraout_x0 + 0x150);
  pAVar1 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar1,0,0);
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fStack_1c = fVar3 + fVar3 * fVar4;
  local_18 = *(undefined4 *)(extraout_x0 + 0x154);
  pAVar1 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar1,0,1);
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  local_14 = fVar3 + fVar3 * fVar4;
  pAVar1 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  local_10 = (float)ArtifactMgr::CalculateFieldValue(pAVar1,0,2);
  local_10 = local_10 * 0.01;
  pAVar1 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar1,0,3);
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  fStack_c = fVar3 + fVar3 * fVar4;
  pTVar2 = Board::GetGameSubSystem<ThunderSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  local_30 = CONCAT44(fStack_c,local_10);
  local_40 = CONCAT44(fStack_1c,local_20);
  uStack_38 = CONCAT44(local_14,local_18);
  ThunderSubSystem::AddRandomThunderToZombies(pTVar2,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::DoTrigger() */

void __thiscall ArtifactLightning::DoTrigger(ArtifactLightning *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  GenerateLightning(this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 100) = fVar2 + *(float *)(extraout_x0 + 0x15c);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactLightning::ArtifactLightning() */

void __thiscall ArtifactLightning::ArtifactLightning(ArtifactLightning *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668b010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ArtifactLightning::StaticNew() */

ArtifactLightning * ArtifactLightning::StaticNew(void)

{
  ArtifactLightning *this;
  
  this = ::operator_new(0x70);
  ArtifactLightning(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::GeneratePassiveCharge(Zombie*) */

void __thiscall ArtifactLightning::GeneratePassiveCharge(ArtifactLightning *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long extraout_x0;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *extraout_x0_00;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  iVar9 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)(int)fVar11,(float)(int)fVar12);
  iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar3 * 1.44,aRStack_20,2,(FastCurve *)&local_28,iVar4 + -1,iVar5 + 1);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar7,uVar8);
  fVar11 = (float)Sexy::Rand(1.0);
  iVar3 = 2;
  if (fVar11 < 0.5) {
    iVar3 = 1;
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if ((((extraout_x0_00 != (long *)0x0) &&
         (cVar2 = (**(code **)(*extraout_x0_00 + 0x328))(), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*extraout_x0_00 + 0x330))(extraout_x0_00), cVar2 == '\0')) &&
       ((cVar2 = FUN_0373c274((int)extraout_x0_00[5]), cVar2 == '\0' &&
        (cVar2 = RealObject::IsOnTeam(extraout_x0_00,1), cVar2 == '\0')))) {
      iVar9 = iVar9 + 1;
      fVar11 = (float)Sexy::Rand(1.0);
      uVar10 = 0x5b;
      if (0.5 <= fVar11) {
        uVar10 = 0x5c;
      }
      fVar11 = (float)Artifact::GetBoostValue((Artifact *)this,2);
      Zombie::ApplyCondition
                ((Zombie *)((fVar11 + 1.0) * *(float *)(extraout_x0 + 0x150)),0,extraout_x0_00,
                 uVar10,1);
      if (iVar3 == iVar9) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactLightning::ZombieDied(Zombie*, DamageInfo const*) */

void ArtifactLightning::ZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = Zombie::HasCondition(param_2,0x5b);
  if (cVar1 == '\0') {
    cVar1 = Zombie::HasCondition(param_2,0x5c);
    if ((cVar1 != '\0') && (fVar2 = (float)Sexy::Rand(1.0), fVar2 < *(float *)(param_1 + 0x60)))
    goto LAB_037554bc;
  }
  else {
    fVar2 = (float)Sexy::Rand(1.0);
    if (fVar2 < *(float *)(param_1 + 0x60)) {
LAB_037554bc:
      GeneratePassiveCharge((ArtifactLightning *)param_1,(Zombie *)param_2);
      return;
    }
  }
  return;
}


/* ArtifactLightning::~ArtifactLightning() */

void __thiscall ArtifactLightning::~ArtifactLightning(ArtifactLightning *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b010;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactLightning::~ArtifactLightning() */

void __thiscall ArtifactLightning::~ArtifactLightning(ArtifactLightning *this)

{
  ~ArtifactLightning(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::onLightningAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactLightning::onLightningAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    this = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
           (param_1 + 0x40);
    cVar2 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      (this);
    if (cVar2 == '\0') {
      pRVar3 = (RtWeakPtrBase *)FUN_0372469c(*(undefined8 *)(param_1 + 0x40),0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,pRVar3);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_78);
      if ((bVar1) &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_78), cVar2 != '\0')) {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
        cVar2 = (**(code **)(*plVar4 + 0x328))();
        if (cVar2 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
          cVar2 = (**(code **)(*plVar4 + 0x330))();
          if (cVar2 == '\0') {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
            fVar6 = (float)FUN_03723b88(*(undefined4 *)(lVar5 + 0x280));
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
            fVar7 = (float)FUN_03723b9c(*(undefined4 *)(lVar5 + 0x2a8));
            fVar6 = (fVar7 + fVar6) * *(float *)(param_1 + 0x5c);
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_58 = 0x80;
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
            local_60 = fVar6;
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
            (**(code **)(*plVar4 + 0x110))(plVar4,(DamageInfo *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
        }
      }
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_70);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                (this,local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::GeneratePassiveLightning(Zombie*) */

void __thiscall ArtifactLightning::GeneratePassiveLightning(ArtifactLightning *this,Zombie *param_1)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  float *pfVar2;
  char *pcVar3;
  TimeChallengeEndLevelUI *this_01;
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_58,"POPANIM_THUNDER_BLUELIGHTNING");
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,*pfVar2 - 100.0,pfVar2[1] - 116.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_50,-1);
  FUN_03723aa0(this_00 + 0x1c,900000);
  std::string::string((string *)aRStack_50,"lightning");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_50,0);
  std::string::~string((string *)aRStack_50);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_SkyCity_Lightning_Release");
  this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLightningAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactLightning,void(ArtifactLightning::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)asStack_58);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40),aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::GeneratePassiveFieldLightning() */

void __thiscall ArtifactLightning::GeneratePassiveFieldLightning(ArtifactLightning *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long extraout_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *this_00;
  int iVar6;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  EntityFinder::GetEntitiesOnBoard(aRStack_20,2);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar4,uVar5);
  iVar1 = *(int *)(extraout_x0 + 0x160);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if ((((((this_00 != (Zombie *)0x0) &&
           (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(), cVar3 == '\0')) &&
          (cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0')) &&
         ((cVar3 = Zombie::IsBerserk(this_00), cVar3 == '\0' &&
          (cVar3 = Zombie::HasFogImmune(this_00), cVar3 == '\0')))) &&
        ((cVar3 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar3 == '\0' &&
         ((cVar3 = RealObject::IsOnTeam(this_00,1), cVar3 == '\0' &&
          (cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar3 == '\0')))))) &&
       (cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0')) {
      iVar6 = iVar6 + 1;
      GeneratePassiveLightning(this,this_00);
      if (iVar6 == iVar1) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactLightning::Update() */

void __thiscall ArtifactLightning::Update(ArtifactLightning *this)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 100) <= fVar2) {
      GenerateLightning(this);
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 100) = uVar4;
    }
    if (0.0 < *(float *)(this + 0x5c)) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      fVar2 = (float)PVZ_T();
      if (*(float *)(this + 0x68) <= fVar2) {
        GeneratePassiveFieldLightning(this);
        fVar5 = *(float *)(extraout_x0 + 0x164);
        fVar2 = (float)Artifact::GetBoostValue((Artifact *)this,6);
        fVar3 = (float)PVZ_T();
        *(float *)(this + 0x68) = (fVar3 + fVar5) - fVar5 * fVar2;
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
/* ArtifactLightning::onZombieConditionApplied(Zombie*, int, float) */

void ArtifactLightning::onZombieConditionApplied(Zombie *param_1,int param_2,float param_3)

{
  char cVar1;
  long extraout_x0;
  Zombie *pZVar2;
  int in_w2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  pZVar2 = (Zombie *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((((in_w2 == *(int *)(extraout_x0 + 0x158)) &&
       (cVar1 = (**(code **)(*(long *)pZVar2 + 0x328))(pZVar2), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)pZVar2 + 0x330))(pZVar2), cVar1 == '\0')) &&
     ((0.0 < *(float *)(param_1 + 0x58) &&
      (fVar3 = (float)Sexy::Rand(1.0), fVar3 < *(float *)(param_1 + 0x58))))) {
    GeneratePassiveLightning((ArtifactLightning *)param_1,pZVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactLightning::Activate() */

void __thiscall ArtifactLightning::Activate(ArtifactLightning *this)

{
  undefined *puVar1;
  char cVar2;
  ArtifactMgr *pAVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Artifact::Activate((Artifact *)this);
  fVar5 = 0.0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 100) = uVar4;
  *(undefined4 *)(this + 0x68) = 0;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x58) = fVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,1);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x5c) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar5 * fVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar5 = 0.0;
  if (cVar2 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x60) = fVar5;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ZombieDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ArtifactLightning,void(ArtifactLightning::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}

