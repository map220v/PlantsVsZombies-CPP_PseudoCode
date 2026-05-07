// Class: ArtifactHydraulic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::StaticClassInit() */

void ArtifactHydraulic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactHydraulic");
    (*pcVar2)(plVar1,asStack_10,FUN_03769710,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHydraulic::StaticGetClass() */

long * ArtifactHydraulic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactHydraulic::GetClass() const */

long * ArtifactHydraulic::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::onEffectComplete(StandaloneEffect*) */

void ArtifactHydraulic::onEffectComplete(StandaloneEffect *param_1)

{
  long lVar1;
  ArtifactHydraulicSubSystem *this;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactHydraulicSubSystem::SqueezeTarget(this);
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(param_1 + 0x5c) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::onSkillEffectComplete(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactHydraulic::onSkillEffectComplete
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ArtifactHydraulicSubSystem *pAVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"shock");
  if (bVar1) {
    pAVar2 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pRVar3 = (RtWeakPtrBase *)FUN_0372469c(*(undefined8 *)(param_1 + 0x68),0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
                    /* WARNING: Load size is inaccurate */
    ArtifactHydraulicSubSystem::SqueezeZombie
              (*(ArtifactHydraulicSubSystem **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               pAVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::onSkillEffectComplete1(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactHydraulic::onSkillEffectComplete1
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ArtifactHydraulicSubSystem *pAVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"shock");
  if (bVar1) {
    pAVar2 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pRVar3 = (RtWeakPtrBase *)FUN_0372469c(*(undefined8 *)(param_1 + 0x68),1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
                    /* WARNING: Load size is inaccurate */
    ArtifactHydraulicSubSystem::SqueezeZombie
              (*(ArtifactHydraulicSubSystem **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               pAVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::onSkillEffectComplete2(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactHydraulic::onSkillEffectComplete2
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ArtifactHydraulicSubSystem *pAVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"shock");
  if (bVar1) {
    pAVar2 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pRVar3 = (RtWeakPtrBase *)FUN_0372469c(*(undefined8 *)(param_1 + 0x68),2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
                    /* WARNING: Load size is inaccurate */
    ArtifactHydraulicSubSystem::SqueezeZombie
              (*(ArtifactHydraulicSubSystem **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
               pAVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::onNotifyArtifactHydraulicCursor(int, int) */

void __thiscall
ArtifactHydraulic::onNotifyArtifactHydraulicCursor(ArtifactHydraulic *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ArtifactHydraulicSubSystem *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar3;
  TimeChallengeEndLevelUI *this_02;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68 [3];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = param_1 - (uint)(param_1 == iVar1 + -1);
  }
  if (param_2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    iVar2 = param_2 - (uint)(param_2 == iVar2 + -1);
  }
  Sexy::Point::Point((Point *)local_68,iVar1,iVar2);
  *(undefined8 *)(this + 0x5c) = local_68[0];
  this_00 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  AddEnergyEffect::SetStartPosition((AddEnergyEffect *)this_00,(SexyVector2 *)(this + 0x5c));
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_70,"POPANIM_EFFECTS_ARTIFACT_HYDRAULIC_EFFECT");
  GetPAMByName(asStack_70);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  std::string::~string(asStack_70);
  nop();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2);
  EATextSquish::Vec3::Vec3((Vec3 *)local_68,(float)iVar1,(float)iVar2,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)local_68,-1);
  Effect_PopAnim::SetCentered(this_01,true);
  Effect_PopAnim::GetPopAnimRigPtr();
  this_02 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSquishEffectComplete);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_50,(Point *)local_68);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string((string *)local_68,"onEffectComplete");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aDStack_50,asStack_70,
             (Point *)local_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_01,aDStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aDStack_50);
  std::string::~string((string *)local_68);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::string((string *)local_68,"yyq_put");
  Effect_PopAnim::PlaySingleAnimation(this_01,(Point *)local_68,0);
  std::string::~string((string *)local_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHydraulic::~ArtifactHydraulic() */

void __thiscall ArtifactHydraulic::~ArtifactHydraulic(ArtifactHydraulic *this)

{
  *(undefined ***)this = &PTR_GetClass_06695c70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x68));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactHydraulic::~ArtifactHydraulic() */

void __thiscall ArtifactHydraulic::~ArtifactHydraulic(ArtifactHydraulic *this)

{
  ~ArtifactHydraulic(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactHydraulic::onSquishEffectComplete(std::string const&, float, std::string const&,
   std::string const&) */

void ArtifactHydraulic::onSquishEffectComplete
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char *pcVar2;
  ArtifactHydraulicSubSystem *this;
  
  bVar1 = std::operator==(param_4,"shock");
  if (!bVar1) {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_PVZ_CoconutCannon_PF_Impact");
  this = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactHydraulicSubSystem::SquishTarget(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::Activate() */

void __thiscall ArtifactHydraulic::Activate(ArtifactHydraulic *this)

{
  char cVar1;
  ArtifactHydraulicSubSystem *pAVar2;
  long extraout_x0;
  ArtifactMgr *pAVar3;
  undefined4 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
  }
  *(undefined4 *)(this + 0x40) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
  }
  *(undefined4 *)(this + 0x48) = uVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) * (1.0 - fVar5);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,2,1);
  }
  *(undefined4 *)(this + 0x4c) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar3,2,2);
  }
  *(undefined4 *)(this + 0x50) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    fVar5 = (float)PVZ_EOT();
  }
  else {
    fVar5 = (float)PVZ_T();
    fVar5 = fVar5 + *(float *)(this + 0x48);
  }
  *(float *)(this + 0x44) = fVar5;
  pAVar2 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  nop();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_20,
             (vector *)(extraout_x0 + 0x150));
                    /* WARNING: Load size is inaccurate */
  ArtifactHydraulicSubSystem::InitHydraulic
            (*(ArtifactHydraulicSubSystem **)(this + 0x40),pAVar2,
             (vector<std::string,std::allocator<std::string>> *)local_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pAVar2 = Board::GetGameSubSystem<ArtifactHydraulicSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    FUN_03723db4(pAVar2 + 0x10);
  }
  Sexy::Point::Point((Point *)local_20,-1,-1);
  *(undefined8 *)(this + 0x5c) = local_20[0];
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::ArtifactHydraulic() */

void __thiscall ArtifactHydraulic::ArtifactHydraulic(ArtifactHydraulic *this)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06695c70;
  Sexy::Point::Point((Point *)(this + 0x5c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyArtifactHydraulicCursor);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArtifactHydraulic,void(ArtifactHydraulic::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyArtifactHydraulicCursor,&local_50);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::resize
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x68),3,(RtWeakPtr *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  local_28 = 0;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::resize
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x80),3,
             (Effect_PopAnim **)&local_28);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x54) = 3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactHydraulic::StaticNew() */

ArtifactHydraulic * ArtifactHydraulic::StaticNew(void)

{
  ArtifactHydraulic *this;
  
  this = ::operator_new(0x98);
  ArtifactHydraulic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulic::doPassive2() */

void __thiscall ArtifactHydraulic::doPassive2(ArtifactHydraulic *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Zombie *this_00;
  float *pfVar8;
  Effect_PopAnim *pEVar9;
  ResourceInfo *pRVar10;
  TimeChallengeEndLevelUI *pTVar11;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined8 local_90;
  Point aPStack_88 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50 [3];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Point::Point((Point *)local_50,-1,-1);
  cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(this + 0x5c),(TPoint *)local_50);
  if (cVar1 != '\0') {
    Sexy::Insets::Insets
              ((Insets *)local_50,*(int *)(this + 0x5c) + -1,*(int *)(this + 0x60) + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,2,(Point *)local_50);
  }
  uVar15 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_68);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_68);
  Sexy::Point::Point(aPStack_88,0,0);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_50,aPStack_88);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar3,uVar4,(Point *)local_50);
  uVar3 = local_68;
  iVar18 = *(int *)(this + 0x54);
  lVar5 = FUN_03724708(local_68,local_60);
  if (lVar5 != 0) {
    do {
      if (iVar18 < 1) break;
      puVar6 = (undefined8 *)FUN_03724714(uVar3,uVar15);
      uVar16 = *puVar6;
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_80);
      local_90 = FUN_03746764(uVar3,uVar4,uVar16);
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)local_50);
      if (!bVar2) {
        puVar6 = (undefined8 *)FUN_03724714(local_68,uVar15);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((((this_00 != (Zombie *)0x0) &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
           ((cVar1 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar1 == '\0' &&
            (cVar1 = RealObject::IsOnOpposingTeam(this_00,2), cVar1 == '\0')))) {
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_00);
          iVar13 = (int)(*pfVar8 - 100.0);
          iVar17 = (int)(pfVar8[1] - 114.0);
          iVar14 = (int)pfVar8[2];
          if (iVar18 == 3) {
            pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)aPStack_88,"POPANIM_EFFECTS_ARTIFACT_HYDRAULIC_EFFECT");
            GetPAMByName((string *)aPStack_88);
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_50);
            Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar10,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            std::string::~string((string *)aPStack_88);
            nop();
            EATextSquish::Vec3::Vec3((Vec3 *)local_50,(float)iVar13,(float)iVar17,(float)iVar14);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar9,(SexyVector3 *)local_50,-1);
            Effect_PopAnim::GetPopAnimRigPtr();
            pTVar11 = (TimeChallengeEndLevelUI *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,onSkillEffectComplete);
            Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
            Delegate4<ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                      (aDStack_38,(Point *)local_50);
            TimeChallengeEndLevelUI::SetContinueCallBack(pTVar11,aDStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            FUN_03723aa0(pEVar9 + 0x1c,500000);
            std::string::string((string *)local_50,"yyq_dz");
            Effect_PopAnim::PlaySingleAnimation(pEVar9,(Point *)local_50,0);
            std::string::~string((string *)local_50);
            nop();
            pRVar12 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_0372469c(*(undefined8 *)(this + 0x68),0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar12,(RtWeakPtrBase *)local_50)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0x80),0);
            *puVar6 = pEVar9;
          }
          else if (iVar18 == 2) {
            pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)aPStack_88,"POPANIM_EFFECTS_ARTIFACT_HYDRAULIC_EFFECT");
            GetPAMByName((string *)aPStack_88);
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_50);
            Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar10,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            std::string::~string((string *)aPStack_88);
            nop();
            EATextSquish::Vec3::Vec3((Vec3 *)local_50,(float)iVar13,(float)iVar17,(float)iVar14);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar9,(SexyVector3 *)local_50,-1);
            Effect_PopAnim::GetPopAnimRigPtr();
            pTVar11 = (TimeChallengeEndLevelUI *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,onSkillEffectComplete1);
            Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
            Delegate4<ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                      (aDStack_38,(Point *)local_50);
            TimeChallengeEndLevelUI::SetContinueCallBack(pTVar11,aDStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            FUN_03723aa0(pEVar9 + 0x1c,500000);
            std::string::string((string *)local_50,"yyq_dz");
            Effect_PopAnim::PlaySingleAnimation(pEVar9,(Point *)local_50,0);
            std::string::~string((string *)local_50);
            nop();
            pRVar12 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_0372469c(*(undefined8 *)(this + 0x68),1);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar12,(RtWeakPtrBase *)local_50)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0x80),1);
            *puVar6 = pEVar9;
          }
          else if (iVar18 == 1) {
            pEVar9 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            std::string::string((string *)aPStack_88,"POPANIM_EFFECTS_ARTIFACT_HYDRAULIC_EFFECT");
            GetPAMByName((string *)aPStack_88);
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_50);
            Effect_PopAnim::CreatePopAnimRig(pEVar9,(PopAnim *)pRVar10,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            std::string::~string((string *)aPStack_88);
            nop();
            EATextSquish::Vec3::Vec3((Vec3 *)local_50,(float)iVar13,(float)iVar17,(float)iVar14);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)pEVar9,(SexyVector3 *)local_50,-1);
            Effect_PopAnim::GetPopAnimRigPtr();
            pTVar11 = (TimeChallengeEndLevelUI *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,onSkillEffectComplete2);
            Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
            Delegate4<ArtifactHydraulic,void(ArtifactHydraulic::*)(std::string_const&,float,std::string_const&,std::string_const&)>
                      (aDStack_38,(Point *)local_50);
            TimeChallengeEndLevelUI::SetContinueCallBack(pTVar11,aDStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_88);
            FUN_03723aa0(pEVar9 + 0x1c,500000);
            std::string::string((string *)local_50,"yyq_dz");
            Effect_PopAnim::PlaySingleAnimation(pEVar9,(Point *)local_50,0);
            std::string::~string((string *)local_50);
            nop();
            pRVar12 = (RtWeakPtr<SpartanBambooMatrixSystem> *)
                      FUN_0372469c(*(undefined8 *)(this + 0x68),2);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar12,(RtWeakPtrBase *)local_50)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            puVar6 = (undefined8 *)FUN_03724854(*(undefined8 *)(this + 0x80),2);
            *puVar6 = pEVar9;
          }
          iVar18 = iVar18 + -1;
        }
      }
      uVar3 = local_68;
      uVar15 = uVar15 + 1;
      uVar7 = FUN_03724708(local_68,local_60);
    } while (uVar15 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactHydraulic::Update() */

void __thiscall ArtifactHydraulic::Update(ArtifactHydraulic *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
    if ((cVar1 != '\0') && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x44) < fVar2)) {
      doPassive2(this);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar2 + *(float *)(this + 0x48);
    }
    if ((this[0x3c] != (ArtifactHydraulic)0x0) &&
       (fVar2 = (float)Artifact::GetTriggerLeftTime((Artifact *)this), fVar2 <= 0.0)) {
      this[0x3c] = (ArtifactHydraulic)0x0;
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* ArtifactHydraulic::AutoClick(int) */

void __thiscall ArtifactHydraulic::AutoClick(ArtifactHydraulic *this,int param_1)

{
  if (this[0x3f] == (ArtifactHydraulic)0x0) {
    if (param_1 == 2) {
      doPassive2(this);
    }
    else {
      onNotifyArtifactHydraulicCursor(this,3,1);
    }
    this[0x3f] = (ArtifactHydraulic)0x1;
  }
  return;
}

