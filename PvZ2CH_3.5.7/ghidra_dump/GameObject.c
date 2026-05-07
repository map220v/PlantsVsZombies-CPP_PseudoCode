// Class: GameObject


/* GameObject::GameObject() */

void __thiscall GameObject::GameObject(GameObject *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0676a5a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  return;
}


/* BoardSaveState* GameObject::Create<BoardSaveState>(PVZDB::TableIndex) */

BoardSaveState * GameObject::Create<BoardSaveState>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BoardSaveState::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BoardSaveState *)CONCAT44(extraout_var,extraout_w0);
}


/* Plant* GameObject::Create<Plant>(PVZDB::TableIndex) */

Plant * GameObject::Create<Plant>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Plant::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Plant *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimationMgr* GameObject::Create<AnimationMgr>(PVZDB::TableIndex) */

AnimationMgr * GameObject::Create<AnimationMgr>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimationMgr::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimationMgr *)CONCAT44(extraout_var,extraout_w0);
}


/* ShakeBoard* GameObject::Create<ShakeBoard>(PVZDB::TableIndex) */

ShakeBoard * GameObject::Create<ShakeBoard>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ShakeBoard::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ShakeBoard *)CONCAT44(extraout_var,extraout_w0);
}


/* ExplosionShakeBoard* GameObject::Create<ExplosionShakeBoard>(PVZDB::TableIndex) */

ExplosionShakeBoard * GameObject::Create<ExplosionShakeBoard>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ExplosionShakeBoard::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ExplosionShakeBoard *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateLawnMowers* GameObject::Create<AnimateLawnMowers>(PVZDB::TableIndex) */

AnimateLawnMowers * GameObject::Create<AnimateLawnMowers>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateLawnMowers::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateLawnMowers *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateBombs* GameObject::Create<AnimateBombs>(PVZDB::TableIndex) */

AnimateBombs * GameObject::Create<AnimateBombs>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateBombs::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateBombs *)CONCAT44(extraout_var,extraout_w0);
}


/* BouncingArrow* GameObject::Create<BouncingArrow>(PVZDB::TableIndex) */

BouncingArrow * GameObject::Create<BouncingArrow>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BouncingArrow::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BouncingArrow *)CONCAT44(extraout_var,extraout_w0);
}


/* RunningPlayer* GameObject::Create<RunningPlayer>(PVZDB::TableIndex) */

RunningPlayer * GameObject::Create<RunningPlayer>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = RunningPlayer::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (RunningPlayer *)CONCAT44(extraout_var,extraout_w0);
}


/* ArtifactBoostPropertySheet* GameObject::Create<ArtifactBoostPropertySheet>(PVZDB::TableIndex) */

ArtifactBoostPropertySheet * GameObject::Create<ArtifactBoostPropertySheet>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ArtifactBoostPropertySheet::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ArtifactBoostPropertySheet *)CONCAT44(extraout_var,extraout_w0);
}


/* TimeEvent* GameObject::Create<TimeEvent>(PVZDB::TableIndex) */

TimeEvent * GameObject::Create<TimeEvent>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = TimeEvent::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (TimeEvent *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_PopAnim* GameObject::Create<Effect_PopAnim>(PVZDB::TableIndex) */

Effect_PopAnim * GameObject::Create<Effect_PopAnim>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_PopAnim::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_PopAnim *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_PopAnim* GameObject::CreateOutsideTable<Effect_PopAnim>() */

Effect_PopAnim * GameObject::CreateOutsideTable<Effect_PopAnim>(void)

{
  Effect_PopAnim *pEVar1;
  
  pEVar1 = Create<Effect_PopAnim>();
  return pEVar1;
}


/* CardEffectProcessor* GameObject::Create<CardEffectProcessor>(PVZDB::TableIndex) */

CardEffectProcessor * GameObject::Create<CardEffectProcessor>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = CardEffectProcessor::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (CardEffectProcessor *)CONCAT44(extraout_var,extraout_w0);
}


/* PteroFlyWithZombieEntity* GameObject::Create<PteroFlyWithZombieEntity>(PVZDB::TableIndex) */

PteroFlyWithZombieEntity * GameObject::Create<PteroFlyWithZombieEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = PteroFlyWithZombieEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (PteroFlyWithZombieEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* NewRayEntity* GameObject::Create<NewRayEntity>(PVZDB::TableIndex) */

NewRayEntity * GameObject::Create<NewRayEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = NewRayEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (NewRayEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* StarChallengeModuleProperties*
   GameObject::Create<StarChallengeModuleProperties>(PVZDB::TableIndex) */

StarChallengeModuleProperties *
GameObject::Create<StarChallengeModuleProperties>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = StarChallengeModuleProperties::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (StarChallengeModuleProperties *)CONCAT44(extraout_var,extraout_w0);
}


/* BonusChallengeModuleProperties*
   GameObject::Create<BonusChallengeModuleProperties>(PVZDB::TableIndex) */

BonusChallengeModuleProperties *
GameObject::Create<BonusChallengeModuleProperties>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BonusChallengeModuleProperties::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BonusChallengeModuleProperties *)CONCAT44(extraout_var,extraout_w0);
}


/* MoldColonyChallengeProps* GameObject::Create<MoldColonyChallengeProps>(PVZDB::TableIndex) */

MoldColonyChallengeProps * GameObject::Create<MoldColonyChallengeProps>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = MoldColonyChallengeProps::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (MoldColonyChallengeProps *)CONCAT44(extraout_var,extraout_w0);
}


/* GridItemPlacementChallengeModuleProps*
   GameObject::Create<GridItemPlacementChallengeModuleProps>(PVZDB::TableIndex) */

GridItemPlacementChallengeModuleProps *
GameObject::Create<GridItemPlacementChallengeModuleProps>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridItemPlacementChallengeModuleProps::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridItemPlacementChallengeModuleProps *)CONCAT44(extraout_var,extraout_w0);
}


/* LightningBolt* GameObject::Create<LightningBolt>(PVZDB::TableIndex) */

LightningBolt * GameObject::Create<LightningBolt>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LightningBolt::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LightningBolt *)CONCAT44(extraout_var,extraout_w0);
}


/* SkateBoardMower* GameObject::Create<SkateBoardMower>(PVZDB::TableIndex) */

SkateBoardMower * GameObject::Create<SkateBoardMower>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SkateBoardMower::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SkateBoardMower *)CONCAT44(extraout_var,extraout_w0);
}


/* UFO* GameObject::Create<UFO>(PVZDB::TableIndex) */

UFO * GameObject::Create<UFO>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = UFO::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (UFO *)CONCAT44(extraout_var,extraout_w0);
}


/* ArtifactBeeEntity* GameObject::Create<ArtifactBeeEntity>(PVZDB::TableIndex) */

ArtifactBeeEntity * GameObject::Create<ArtifactBeeEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ArtifactBeeEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ArtifactBeeEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* LightningBoltToGround* GameObject::Create<LightningBoltToGround>(PVZDB::TableIndex) */

LightningBoltToGround * GameObject::Create<LightningBoltToGround>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LightningBoltToGround::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LightningBoltToGround *)CONCAT44(extraout_var,extraout_w0);
}


/* SilverkeyTentacleShadow* GameObject::Create<SilverkeyTentacleShadow>(PVZDB::TableIndex) */

SilverkeyTentacleShadow * GameObject::Create<SilverkeyTentacleShadow>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SilverkeyTentacleShadow::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SilverkeyTentacleShadow *)CONCAT44(extraout_var,extraout_w0);
}


/* BlueberryZapCloud* GameObject::Create<BlueberryZapCloud>(PVZDB::TableIndex) */

BlueberryZapCloud * GameObject::Create<BlueberryZapCloud>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BlueberryZapCloud::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BlueberryZapCloud *)CONCAT44(extraout_var,extraout_w0);
}


/* MoveBoard* GameObject::Create<MoveBoard>(PVZDB::TableIndex) */

MoveBoard * GameObject::Create<MoveBoard>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = MoveBoard::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (MoveBoard *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimMgrSendAudioEvent* GameObject::Create<AnimMgrSendAudioEvent>(PVZDB::TableIndex) */

AnimMgrSendAudioEvent * GameObject::Create<AnimMgrSendAudioEvent>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimMgrSendAudioEvent::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimMgrSendAudioEvent *)CONCAT44(extraout_var,extraout_w0);
}


/* ShowAdvice* GameObject::Create<ShowAdvice>(PVZDB::TableIndex) */

ShowAdvice * GameObject::Create<ShowAdvice>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ShowAdvice::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ShowAdvice *)CONCAT44(extraout_var,extraout_w0);
}


/* RichManSquash* GameObject::Create<RichManSquash>(PVZDB::TableIndex) */

RichManSquash * GameObject::Create<RichManSquash>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = RichManSquash::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (RichManSquash *)CONCAT44(extraout_var,extraout_w0);
}


/* Shield* GameObject::Create<Shield>(PVZDB::TableIndex) */

Shield * GameObject::Create<Shield>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Shield::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Shield *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentDamageRadius* GameObject::Create<ComponentDamageRadius>(PVZDB::TableIndex) */

ComponentDamageRadius * GameObject::Create<ComponentDamageRadius>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentDamageRadius::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentDamageRadius *)CONCAT44(extraout_var,extraout_w0);
}


/* BoardEntity_Football* GameObject::Create<BoardEntity_Football>(PVZDB::TableIndex) */

BoardEntity_Football * GameObject::Create<BoardEntity_Football>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BoardEntity_Football::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BoardEntity_Football *)CONCAT44(extraout_var,extraout_w0);
}


/* GameObject::GameObject(GameObject const&) */

void __thiscall GameObject::GameObject(GameObject *this,GameObject *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0676a5a0;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  return;
}


/* ComponentWarmingRadius* GameObject::Create<ComponentWarmingRadius>(PVZDB::TableIndex) */

ComponentWarmingRadius * GameObject::Create<ComponentWarmingRadius>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentWarmingRadius::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentWarmingRadius *)CONCAT44(extraout_var,extraout_w0);
}


/* NewLightningBolt* GameObject::Create<NewLightningBolt>(PVZDB::TableIndex) */

NewLightningBolt * GameObject::Create<NewLightningBolt>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = NewLightningBolt::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (NewLightningBolt *)CONCAT44(extraout_var,extraout_w0);
}


/* PenetratingRayEntity* GameObject::Create<PenetratingRayEntity>(PVZDB::TableIndex) */

PenetratingRayEntity * GameObject::Create<PenetratingRayEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = PenetratingRayEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (PenetratingRayEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_HammerEffect* GameObject::Create<Effect_HammerEffect>(PVZDB::TableIndex) */

Effect_HammerEffect * GameObject::Create<Effect_HammerEffect>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_HammerEffect::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_HammerEffect *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_HammerEffect* GameObject::CreateOutsideTable<Effect_HammerEffect>() */

Effect_HammerEffect * GameObject::CreateOutsideTable<Effect_HammerEffect>(void)

{
  Effect_HammerEffect *pEVar1;
  
  pEVar1 = Create<Effect_HammerEffect>();
  return pEVar1;
}


/* ComponentRunner* GameObject::Create<ComponentRunner>(PVZDB::TableIndex) */

ComponentRunner * GameObject::Create<ComponentRunner>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentRunner::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentRunner *)CONCAT44(extraout_var,extraout_w0);
}


/* GameObject::TEMPNAMEPLACEHOLDERVALUE(GameObject const&) */

GameObject * __thiscall GameObject::operator=(GameObject *this,GameObject *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  return this;
}


/* Fuse* GameObject::Create<Fuse>(PVZDB::TableIndex) */

Fuse * GameObject::Create<Fuse>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Fuse::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Fuse *)CONCAT44(extraout_var,extraout_w0);
}


/* Bomb* GameObject::Create<Bomb>(PVZDB::TableIndex) */

Bomb * GameObject::Create<Bomb>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Bomb::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Bomb *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentVisualStretcher* GameObject::Create<ComponentVisualStretcher>(PVZDB::TableIndex) */

ComponentVisualStretcher * GameObject::Create<ComponentVisualStretcher>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentVisualStretcher::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentVisualStretcher *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentDamageTossRadius* GameObject::Create<ComponentDamageTossRadius>(PVZDB::TableIndex) */

ComponentDamageTossRadius * GameObject::Create<ComponentDamageTossRadius>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentDamageTossRadius::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentDamageTossRadius *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareAlarmSagittifoliaFencePiece*
   GameObject::Create<GridSquareAlarmSagittifoliaFencePiece>(PVZDB::TableIndex) */

GridSquareAlarmSagittifoliaFencePiece *
GameObject::Create<GridSquareAlarmSagittifoliaFencePiece>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareAlarmSagittifoliaFencePiece::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareAlarmSagittifoliaFencePiece *)CONCAT44(extraout_var,extraout_w0);
}


/* AlarmSagittifoliaFence* GameObject::Create<AlarmSagittifoliaFence>(PVZDB::TableIndex) */

AlarmSagittifoliaFence * GameObject::Create<AlarmSagittifoliaFence>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AlarmSagittifoliaFence::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AlarmSagittifoliaFence *)CONCAT44(extraout_var,extraout_w0);
}


/* ElectricArcStream* GameObject::Create<ElectricArcStream>(PVZDB::TableIndex) */

ElectricArcStream * GameObject::Create<ElectricArcStream>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ElectricArcStream::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ElectricArcStream *)CONCAT44(extraout_var,extraout_w0);
}


/* IcyCurrantFence* GameObject::Create<IcyCurrantFence>(PVZDB::TableIndex) */

IcyCurrantFence * GameObject::Create<IcyCurrantFence>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = IcyCurrantFence::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (IcyCurrantFence *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamImpCannonActionHandler*
   GameObject::Create<ZombossSteamImpCannonActionHandler>(PVZDB::TableIndex) */

ZombossSteamImpCannonActionHandler *
GameObject::Create<ZombossSteamImpCannonActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamImpCannonActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamImpCannonActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamJumpActionHandler*
   GameObject::Create<ZombossSteamJumpActionHandler>(PVZDB::TableIndex) */

ZombossSteamJumpActionHandler *
GameObject::Create<ZombossSteamJumpActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamJumpActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamJumpActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamRandomJumpActionHandler*
   GameObject::Create<ZombossSteamRandomJumpActionHandler>(PVZDB::TableIndex) */

ZombossSteamRandomJumpActionHandler *
GameObject::Create<ZombossSteamRandomJumpActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamRandomJumpActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamRandomJumpActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamRushActionHandler*
   GameObject::Create<ZombossSteamRushActionHandler>(PVZDB::TableIndex) */

ZombossSteamRushActionHandler *
GameObject::Create<ZombossSteamRushActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamRushActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamRushActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamFireActionHandler*
   GameObject::Create<ZombossSteamFireActionHandler>(PVZDB::TableIndex) */

ZombossSteamFireActionHandler *
GameObject::Create<ZombossSteamFireActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamFireActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamFireActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamTrainSpawnActionHandler*
   GameObject::Create<ZombossSteamTrainSpawnActionHandler>(PVZDB::TableIndex) */

ZombossSteamTrainSpawnActionHandler *
GameObject::Create<ZombossSteamTrainSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamTrainSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamTrainSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamSpawnActionHandler*
   GameObject::Create<ZombossSteamSpawnActionHandler>(PVZDB::TableIndex) */

ZombossSteamSpawnActionHandler *
GameObject::Create<ZombossSteamSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamRestActionHandler*
   GameObject::Create<ZombossSteamRestActionHandler>(PVZDB::TableIndex) */

ZombossSteamRestActionHandler *
GameObject::Create<ZombossSteamRestActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamRestActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamRestActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSteamThrowActionHandler*
   GameObject::Create<ZombossSteamThrowActionHandler>(PVZDB::TableIndex) */

ZombossSteamThrowActionHandler *
GameObject::Create<ZombossSteamThrowActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSteamThrowActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSteamThrowActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_StaticImage* GameObject::Create<Effect_StaticImage>(PVZDB::TableIndex) */

Effect_StaticImage * GameObject::Create<Effect_StaticImage>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_StaticImage::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_StaticImage *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_StaticImage* GameObject::CreateOutsideTable<Effect_StaticImage>() */

Effect_StaticImage * GameObject::CreateOutsideTable<Effect_StaticImage>(void)

{
  Effect_StaticImage *pEVar1;
  
  pEVar1 = Create<Effect_StaticImage>();
  return pEVar1;
}


/* Effect_ScreenFade* GameObject::Create<Effect_ScreenFade>(PVZDB::TableIndex) */

Effect_ScreenFade * GameObject::Create<Effect_ScreenFade>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_ScreenFade::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_ScreenFade *)CONCAT44(extraout_var,extraout_w0);
}


/* CannonRocket* GameObject::Create<CannonRocket>(PVZDB::TableIndex) */

CannonRocket * GameObject::Create<CannonRocket>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = CannonRocket::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (CannonRocket *)CONCAT44(extraout_var,extraout_w0);
}


/* JamStageMechanic* GameObject::Create<JamStageMechanic>(PVZDB::TableIndex) */

JamStageMechanic * GameObject::Create<JamStageMechanic>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = JamStageMechanic::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (JamStageMechanic *)CONCAT44(extraout_var,extraout_w0);
}


/* HeianSmokeBomb* GameObject::Create<HeianSmokeBomb>(PVZDB::TableIndex) */

HeianSmokeBomb * GameObject::Create<HeianSmokeBomb>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = HeianSmokeBomb::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (HeianSmokeBomb *)CONCAT44(extraout_var,extraout_w0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObject::StaticClassInit() */

void GameObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"RtReflectionDelegateBase");
    (*pcVar3)(plVar2,asStack_10,FUN_03d43ba8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GameObject");
    (*pcVar3)(plVar2,asStack_10,FUN_03d444f8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameObject::StaticGetClass() */

long * GameObject::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameObject::GetClass() const */

long * GameObject::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"GameObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GameObject::IsDestroyed() const */

byte __thiscall GameObject::IsDestroyed(GameObject *this)

{
  byte bVar1;
  
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 8));
  return bVar1 ^ 1;
}


/* GameObject::StaticNew() */

GameObject * GameObject::StaticNew(void)

{
  GameObject *this;
  
  this = ::operator_new(0x10);
  GameObject(this);
  return this;
}


/* GameObject::~GameObject() */

void __thiscall GameObject::~GameObject(GameObject *this)

{
  *(undefined ***)this = &PTR_GetClass_0676a5a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* GameObject::~GameObject() */

void __thiscall GameObject::~GameObject(GameObject *this)

{
  ~GameObject(this);
  AK::FreeHook(this);
  return;
}


/* GameObject::initialize(Sexy::RtId) */

void __thiscall GameObject::initialize(GameObject *this,RtId *param_2)

{
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 8),param_2);
  (**(code **)(*(long *)this + 0x50))(this);
  (**(code **)(*(long *)this + 0x60))(this);
  return;
}


/* GameObject::CallInitialize(Sexy::RtId) */

void __thiscall GameObject::CallInitialize(GameObject *this,RtId *param_2)

{
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 8),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObject::PostLoad() */

void __thiscall GameObject::PostLoad(GameObject *this)

{
  RtDb *pRVar1;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtDb *)Sexy::RtDb::GetDb();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this + 8));
  Sexy::RtDb::SetObjectDeletionMode(pRVar1,aRStack_10,1);
  Sexy::RtId::~RtId(aRStack_10);
  (**(code **)(*(long *)this + 0x50))(this);
  (**(code **)(*(long *)this + 0x68))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObject::Destroy() */

void __thiscall GameObject::Destroy(GameObject *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  RtId *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 8);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x70))(this);
    MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
    (**(code **)(*(long *)this + 0x58))(this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)this_00);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    pRVar2 = (RtId *)Sexy::RtDb::GetDb();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_18);
    Sexy::RtDb::ReleaseId(pRVar2);
    Sexy::RtId::~RtId(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObject::Create(Sexy::RtClass*, PVZDB::TableIndex) */

void GameObject::Create(long param_1,undefined8 param_2)

{
  GameObject *extraout_x0;
  PVZDB *pPVar1;
  undefined8 uVar2;
  _func_void *extraout_x1;
  exception_ptr aeStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03d43a7c(*(undefined8 *)(param_1 + 0x18));
  nop();
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_18,extraout_x1);
  if ((int)param_2 != -1) {
    pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar2 = PVZDB::GetTable(pPVar1,param_2);
    Sexy::RtDbTable::AllocId(aRStack_10,uVar2,extraout_x0,1,1,0);
    Sexy::RtId::operator=((RtId *)aeStack_18,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
  }
  Sexy::RtId::RtId(aRStack_10,(RtId *)aeStack_18);
  initialize(extraout_x0,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtId::~RtId((RtId *)aeStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameObject::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall GameObject::Serialize(GameObject *this,RtSerializeContext *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03d43a9c(*(undefined8 *)(param_1 + 8));
  Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"objdata");
  Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,uVar2,aRStack_40,0);
  Sexy::RtObject::Serialize((RtObject *)this,aRStack_38);
  Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
  lVar3 = FUN_03d43a9c(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_03d43a98(*(undefined1 *)(lVar3 + 0x10));
  if (cVar1 != '\0') {
    MessageRouter::Broadcast<GameObject*,GameObject*>
              ((MessageRouter *)gMessageRouter,Message::GameObjectSerializedIn,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* AircraftLine* GameObject::Create<AircraftLine>(PVZDB::TableIndex) */

AircraftLine * GameObject::Create<AircraftLine>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AircraftLine::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AircraftLine *)CONCAT44(extraout_var,extraout_w0);
}


/* LawnMower* GameObject::Create<LawnMower>(PVZDB::TableIndex) */

LawnMower * GameObject::Create<LawnMower>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LawnMower::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LawnMower *)CONCAT44(extraout_var,extraout_w0);
}


/* LevelModuleDifficultyUIProps* GameObject::Create<LevelModuleDifficultyUIProps>(PVZDB::TableIndex)
    */

LevelModuleDifficultyUIProps * GameObject::Create<LevelModuleDifficultyUIProps>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LevelModuleDifficultyUIProps::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LevelModuleDifficultyUIProps *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareCoveringFlame* GameObject::Create<GridSquareCoveringFlame>(PVZDB::TableIndex) */

GridSquareCoveringFlame * GameObject::Create<GridSquareCoveringFlame>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareCoveringFlame::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareCoveringFlame *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareCoveringPoison* GameObject::Create<GridSquareCoveringPoison>(PVZDB::TableIndex) */

GridSquareCoveringPoison * GameObject::Create<GridSquareCoveringPoison>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareCoveringPoison::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareCoveringPoison *)CONCAT44(extraout_var,extraout_w0);
}


/* PlantGroup* GameObject::Create<PlantGroup>(PVZDB::TableIndex) */

PlantGroup * GameObject::Create<PlantGroup>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = PlantGroup::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (PlantGroup *)CONCAT44(extraout_var,extraout_w0);
}


/* Barbarian* GameObject::Create<Barbarian>(PVZDB::TableIndex) */

Barbarian * GameObject::Create<Barbarian>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Barbarian::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Barbarian *)CONCAT44(extraout_var,extraout_w0);
}


/* StarLightningCloud* GameObject::Create<StarLightningCloud>(PVZDB::TableIndex) */

StarLightningCloud * GameObject::Create<StarLightningCloud>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = StarLightningCloud::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (StarLightningCloud *)CONCAT44(extraout_var,extraout_w0);
}


/* LightningCloud* GameObject::Create<LightningCloud>(PVZDB::TableIndex) */

LightningCloud * GameObject::Create<LightningCloud>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LightningCloud::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LightningCloud *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareMoonFlowerGlow* GameObject::Create<GridSquareMoonFlowerGlow>(PVZDB::TableIndex) */

GridSquareMoonFlowerGlow * GameObject::Create<GridSquareMoonFlowerGlow>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareMoonFlowerGlow::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareMoonFlowerGlow *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentConditionRadius* GameObject::Create<ComponentConditionRadius>(PVZDB::TableIndex) */

ComponentConditionRadius * GameObject::Create<ComponentConditionRadius>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentConditionRadius::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentConditionRadius *)CONCAT44(extraout_var,extraout_w0);
}


/* SnapdragonFlyDragon* GameObject::Create<SnapdragonFlyDragon>(PVZDB::TableIndex) */

SnapdragonFlyDragon * GameObject::Create<SnapdragonFlyDragon>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SnapdragonFlyDragon::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SnapdragonFlyDragon *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentProjectileConverter* GameObject::Create<ComponentProjectileConverter>(PVZDB::TableIndex)
    */

ComponentProjectileConverter * GameObject::Create<ComponentProjectileConverter>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentProjectileConverter::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentProjectileConverter *)CONCAT44(extraout_var,extraout_w0);
}


/* CarrotMissile* GameObject::Create<CarrotMissile>(PVZDB::TableIndex) */

CarrotMissile * GameObject::Create<CarrotMissile>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = CarrotMissile::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (CarrotMissile *)CONCAT44(extraout_var,extraout_w0);
}


/* MagicCard* GameObject::Create<MagicCard>(PVZDB::TableIndex) */

MagicCard * GameObject::Create<MagicCard>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = MagicCard::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (MagicCard *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentPlantLauncher* GameObject::Create<ComponentPlantLauncher>(PVZDB::TableIndex) */

ComponentPlantLauncher * GameObject::Create<ComponentPlantLauncher>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentPlantLauncher::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentPlantLauncher *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentObjectImpactor* GameObject::Create<ComponentObjectImpactor>(PVZDB::TableIndex) */

ComponentObjectImpactor * GameObject::Create<ComponentObjectImpactor>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentObjectImpactor::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentObjectImpactor *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentPropagatedBurst* GameObject::Create<ComponentPropagatedBurst>(PVZDB::TableIndex) */

ComponentPropagatedBurst * GameObject::Create<ComponentPropagatedBurst>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentPropagatedBurst::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentPropagatedBurst *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareElectricCurrantFencePiece*
   GameObject::Create<GridSquareElectricCurrantFencePiece>(PVZDB::TableIndex) */

GridSquareElectricCurrantFencePiece *
GameObject::Create<GridSquareElectricCurrantFencePiece>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareElectricCurrantFencePiece::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareElectricCurrantFencePiece *)CONCAT44(extraout_var,extraout_w0);
}


/* ElectricCurrantFence* GameObject::Create<ElectricCurrantFence>(PVZDB::TableIndex) */

ElectricCurrantFence * GameObject::Create<ElectricCurrantFence>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ElectricCurrantFence::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ElectricCurrantFence *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareElectricCurrantGlowPiece*
   GameObject::Create<GridSquareElectricCurrantGlowPiece>(PVZDB::TableIndex) */

GridSquareElectricCurrantGlowPiece *
GameObject::Create<GridSquareElectricCurrantGlowPiece>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareElectricCurrantGlowPiece::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareElectricCurrantGlowPiece *)CONCAT44(extraout_var,extraout_w0);
}


/* RayEntity* GameObject::Create<RayEntity>(PVZDB::TableIndex) */

RayEntity * GameObject::Create<RayEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = RayEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (RayEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* DandelionBomb* GameObject::Create<DandelionBomb>(PVZDB::TableIndex) */

DandelionBomb * GameObject::Create<DandelionBomb>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = DandelionBomb::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (DandelionBomb *)CONCAT44(extraout_var,extraout_w0);
}


/* HorsebeanPlane* GameObject::Create<HorsebeanPlane>(PVZDB::TableIndex) */

HorsebeanPlane * GameObject::Create<HorsebeanPlane>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = HorsebeanPlane::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (HorsebeanPlane *)CONCAT44(extraout_var,extraout_w0);
}


/* ColdSnapdragonFlyDragon* GameObject::Create<ColdSnapdragonFlyDragon>(PVZDB::TableIndex) */

ColdSnapdragonFlyDragon * GameObject::Create<ColdSnapdragonFlyDragon>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ColdSnapdragonFlyDragon::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ColdSnapdragonFlyDragon *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentLinearBurst* GameObject::Create<ComponentLinearBurst>(PVZDB::TableIndex) */

ComponentLinearBurst * GameObject::Create<ComponentLinearBurst>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentLinearBurst::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentLinearBurst *)CONCAT44(extraout_var,extraout_w0);
}


/* ElaeocarpusWind* GameObject::Create<ElaeocarpusWind>(PVZDB::TableIndex) */

ElaeocarpusWind * GameObject::Create<ElaeocarpusWind>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ElaeocarpusWind::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ElaeocarpusWind *)CONCAT44(extraout_var,extraout_w0);
}


/* OliveOilUnit* GameObject::Create<OliveOilUnit>(PVZDB::TableIndex) */

OliveOilUnit * GameObject::Create<OliveOilUnit>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = OliveOilUnit::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (OliveOilUnit *)CONCAT44(extraout_var,extraout_w0);
}


/* EgretflowerPlane* GameObject::Create<EgretflowerPlane>(PVZDB::TableIndex) */

EgretflowerPlane * GameObject::Create<EgretflowerPlane>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = EgretflowerPlane::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (EgretflowerPlane *)CONCAT44(extraout_var,extraout_w0);
}


/* ThunderSnapdragonFlyDragon* GameObject::Create<ThunderSnapdragonFlyDragon>(PVZDB::TableIndex) */

ThunderSnapdragonFlyDragon * GameObject::Create<ThunderSnapdragonFlyDragon>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ThunderSnapdragonFlyDragon::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ThunderSnapdragonFlyDragon *)CONCAT44(extraout_var,extraout_w0);
}


/* ArmorflameClusterBomb* GameObject::Create<ArmorflameClusterBomb>(PVZDB::TableIndex) */

ArmorflameClusterBomb * GameObject::Create<ArmorflameClusterBomb>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ArmorflameClusterBomb::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ArmorflameClusterBomb *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentWarmingRadiusForHeroPlant*
   GameObject::Create<ComponentWarmingRadiusForHeroPlant>(PVZDB::TableIndex) */

ComponentWarmingRadiusForHeroPlant *
GameObject::Create<ComponentWarmingRadiusForHeroPlant>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentWarmingRadiusForHeroPlant::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentWarmingRadiusForHeroPlant *)CONCAT44(extraout_var,extraout_w0);
}


/* HighTideSign* GameObject::Create<HighTideSign>(PVZDB::TableIndex) */

HighTideSign * GameObject::Create<HighTideSign>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = HighTideSign::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (HighTideSign *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRocket* GameObject::Create<ZombossRocket>(PVZDB::TableIndex) */

ZombossRocket * GameObject::Create<ZombossRocket>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRocket::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRocket *)CONCAT44(extraout_var,extraout_w0);
}


/* LotteryResultIconWidget* GameObject::Create<LotteryResultIconWidget>(PVZDB::TableIndex) */

LotteryResultIconWidget * GameObject::Create<LotteryResultIconWidget>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = LotteryResultIconWidget::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (LotteryResultIconWidget *)CONCAT44(extraout_var,extraout_w0);
}


/* IntroBoardDispatch* GameObject::Create<IntroBoardDispatch>(PVZDB::TableIndex) */

IntroBoardDispatch * GameObject::Create<IntroBoardDispatch>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = IntroBoardDispatch::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (IntroBoardDispatch *)CONCAT44(extraout_var,extraout_w0);
}


/* TutorialIconEffect* GameObject::Create<TutorialIconEffect>(PVZDB::TableIndex) */

TutorialIconEffect * GameObject::Create<TutorialIconEffect>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = TutorialIconEffect::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (TutorialIconEffect *)CONCAT44(extraout_var,extraout_w0);
}


/* MowerRemover* GameObject::Create<MowerRemover>(PVZDB::TableIndex) */

MowerRemover * GameObject::Create<MowerRemover>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = MowerRemover::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (MowerRemover *)CONCAT44(extraout_var,extraout_w0);
}


/* CoinShowerSequence* GameObject::Create<CoinShowerSequence>(PVZDB::TableIndex) */

CoinShowerSequence * GameObject::Create<CoinShowerSequence>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = CoinShowerSequence::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (CoinShowerSequence *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_BouncingArrow* GameObject::Create<Effect_BouncingArrow>(PVZDB::TableIndex) */

Effect_BouncingArrow * GameObject::Create<Effect_BouncingArrow>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_BouncingArrow::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_BouncingArrow *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_BouncingArrow* GameObject::CreateOutsideTable<Effect_BouncingArrow>() */

Effect_BouncingArrow * GameObject::CreateOutsideTable<Effect_BouncingArrow>(void)

{
  Effect_BouncingArrow *pEVar1;
  
  pEVar1 = Create<Effect_BouncingArrow>();
  return pEVar1;
}


/* ZombiePushGriditemActionHandler*
   GameObject::Create<ZombiePushGriditemActionHandler>(PVZDB::TableIndex) */

ZombiePushGriditemActionHandler *
GameObject::Create<ZombiePushGriditemActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombiePushGriditemActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombiePushGriditemActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieProjectileActionHandler*
   GameObject::Create<ZombieProjectileActionHandler>(PVZDB::TableIndex) */

ZombieProjectileActionHandler *
GameObject::Create<ZombieProjectileActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieProjectileActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieProjectileActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieProjectileEliteActionHandler*
   GameObject::Create<ZombieProjectileEliteActionHandler>(PVZDB::TableIndex) */

ZombieProjectileEliteActionHandler *
GameObject::Create<ZombieProjectileEliteActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieProjectileEliteActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieProjectileEliteActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieProjectileLaunchActionHandler*
   GameObject::Create<ZombieProjectileLaunchActionHandler>(PVZDB::TableIndex) */

ZombieProjectileLaunchActionHandler *
GameObject::Create<ZombieProjectileLaunchActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieProjectileLaunchActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieProjectileLaunchActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieDropZombiesOnBoardActionHandler*
   GameObject::Create<ZombieDropZombiesOnBoardActionHandler>(PVZDB::TableIndex) */

ZombieDropZombiesOnBoardActionHandler *
GameObject::Create<ZombieDropZombiesOnBoardActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieDropZombiesOnBoardActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieDropZombiesOnBoardActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieInstantTargetAttackActionHandler*
   GameObject::Create<ZombieInstantTargetAttackActionHandler>(PVZDB::TableIndex) */

ZombieInstantTargetAttackActionHandler *
GameObject::Create<ZombieInstantTargetAttackActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieInstantTargetAttackActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieInstantTargetAttackActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* DrawMessage* GameObject::Create<DrawMessage>(PVZDB::TableIndex) */

DrawMessage * GameObject::Create<DrawMessage>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = DrawMessage::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (DrawMessage *)CONCAT44(extraout_var,extraout_w0);
}


/* BladeKee* GameObject::Create<BladeKee>(PVZDB::TableIndex) */

BladeKee * GameObject::Create<BladeKee>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = BladeKee::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (BladeKee *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossCrosshair* GameObject::Create<ZombossCrosshair>(PVZDB::TableIndex) */

ZombossCrosshair * GameObject::Create<ZombossCrosshair>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossCrosshair::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossCrosshair *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossJumpActionHandler* GameObject::Create<ZombossJumpActionHandler>(PVZDB::TableIndex) */

ZombossJumpActionHandler * GameObject::Create<ZombossJumpActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossJumpActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossJumpActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossImpCannonActionHandler*
   GameObject::Create<ZombossImpCannonActionHandler>(PVZDB::TableIndex) */

ZombossImpCannonActionHandler *
GameObject::Create<ZombossImpCannonActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossImpCannonActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossImpCannonActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* FlyingFireball* GameObject::Create<FlyingFireball>(PVZDB::TableIndex) */

FlyingFireball * GameObject::Create<FlyingFireball>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = FlyingFireball::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (FlyingFireball *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDarkSpawnActionHandler*
   GameObject::Create<ZombossDarkSpawnActionHandler>(PVZDB::TableIndex) */

ZombossDarkSpawnActionHandler *
GameObject::Create<ZombossDarkSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDarkSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDarkSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDarkFireBreathActionHandler*
   GameObject::Create<ZombossDarkFireBreathActionHandler>(PVZDB::TableIndex) */

ZombossDarkFireBreathActionHandler *
GameObject::Create<ZombossDarkFireBreathActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDarkFireBreathActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDarkFireBreathActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDarkLobFireballsActionHandler*
   GameObject::Create<ZombossDarkLobFireballsActionHandler>(PVZDB::TableIndex) */

ZombossDarkLobFireballsActionHandler *
GameObject::Create<ZombossDarkLobFireballsActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDarkLobFireballsActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDarkLobFireballsActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDarkWalkActionHandler* GameObject::Create<ZombossDarkWalkActionHandler>(PVZDB::TableIndex)
    */

ZombossDarkWalkActionHandler * GameObject::Create<ZombossDarkWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDarkWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDarkWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCitySpawnActionHandler*
   GameObject::Create<ZombossSkyCitySpawnActionHandler>(PVZDB::TableIndex) */

ZombossSkyCitySpawnActionHandler *
GameObject::Create<ZombossSkyCitySpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCitySpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCitySpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityWalkActionHandler*
   GameObject::Create<ZombossSkyCityWalkActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityWalkActionHandler *
GameObject::Create<ZombossSkyCityWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityLineShootActionHandler*
   GameObject::Create<ZombossSkyCityLineShootActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityLineShootActionHandler *
GameObject::Create<ZombossSkyCityLineShootActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityLineShootActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityLineShootActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityThrowAircraftActionHandler*
   GameObject::Create<ZombossSkyCityThrowAircraftActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityThrowAircraftActionHandler *
GameObject::Create<ZombossSkyCityThrowAircraftActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityThrowAircraftActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityThrowAircraftActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCitySandstormActionHandler*
   GameObject::Create<ZombossSkyCitySandstormActionHandler>(PVZDB::TableIndex) */

ZombossSkyCitySandstormActionHandler *
GameObject::Create<ZombossSkyCitySandstormActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCitySandstormActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCitySandstormActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityRushDownActionHandler*
   GameObject::Create<ZombossSkyCityRushDownActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityRushDownActionHandler *
GameObject::Create<ZombossSkyCityRushDownActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityRushDownActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityRushDownActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityAttackNearByActionHandler*
   GameObject::Create<ZombossSkyCityAttackNearByActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityAttackNearByActionHandler *
GameObject::Create<ZombossSkyCityAttackNearByActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityAttackNearByActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityAttackNearByActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSkyCityBarrageActionHandler*
   GameObject::Create<ZombossSkyCityBarrageActionHandler>(PVZDB::TableIndex) */

ZombossSkyCityBarrageActionHandler *
GameObject::Create<ZombossSkyCityBarrageActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSkyCityBarrageActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSkyCityBarrageActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDropZombieActionHandler*
   GameObject::Create<ZombossDropZombieActionHandler>(PVZDB::TableIndex) */

ZombossDropZombieActionHandler *
GameObject::Create<ZombossDropZombieActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDropZombieActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDropZombieActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentZombieMovement* GameObject::Create<ComponentZombieMovement>(PVZDB::TableIndex) */

ComponentZombieMovement * GameObject::Create<ComponentZombieMovement>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentZombieMovement::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentZombieMovement *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDropSandbagActionHandler*
   GameObject::Create<ZombossDropSandbagActionHandler>(PVZDB::TableIndex) */

ZombossDropSandbagActionHandler *
GameObject::Create<ZombossDropSandbagActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDropSandbagActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDropSandbagActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossWalkActionHandler* GameObject::Create<ZombossWalkActionHandler>(PVZDB::TableIndex) */

ZombossWalkActionHandler * GameObject::Create<ZombossWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSpawnActionHandler* GameObject::Create<ZombossSpawnActionHandler>(PVZDB::TableIndex) */

ZombossSpawnActionHandler * GameObject::Create<ZombossSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSummonActionHandler* GameObject::Create<ZombossSummonActionHandler>(PVZDB::TableIndex) */

ZombossSummonActionHandler * GameObject::Create<ZombossSummonActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSummonActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSummonActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRushActionHandler* GameObject::Create<ZombossRushActionHandler>(PVZDB::TableIndex) */

ZombossRushActionHandler * GameObject::Create<ZombossRushActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRushActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRushActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossFireActionHandler* GameObject::Create<ZombossFireActionHandler>(PVZDB::TableIndex) */

ZombossFireActionHandler * GameObject::Create<ZombossFireActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossFireActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossFireActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHelmLostActionHandler* GameObject::Create<ZombossHelmLostActionHandler>(PVZDB::TableIndex)
    */

ZombossHelmLostActionHandler * GameObject::Create<ZombossHelmLostActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHelmLostActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHelmLostActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossCoverUpActionHandler* GameObject::Create<ZombossCoverUpActionHandler>(PVZDB::TableIndex)
    */

ZombossCoverUpActionHandler * GameObject::Create<ZombossCoverUpActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossCoverUpActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossCoverUpActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSpawnGlacierColumnActionHandler*
   GameObject::Create<ZombossSpawnGlacierColumnActionHandler>(PVZDB::TableIndex) */

ZombossSpawnGlacierColumnActionHandler *
GameObject::Create<ZombossSpawnGlacierColumnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSpawnGlacierColumnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSpawnGlacierColumnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossFreezingWindRowActionHandler*
   GameObject::Create<ZombossFreezingWindRowActionHandler>(PVZDB::TableIndex) */

ZombossFreezingWindRowActionHandler *
GameObject::Create<ZombossFreezingWindRowActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossFreezingWindRowActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossFreezingWindRowActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSpawnShieldActionHandler*
   GameObject::Create<ZombossSpawnShieldActionHandler>(PVZDB::TableIndex) */

ZombossSpawnShieldActionHandler *
GameObject::Create<ZombossSpawnShieldActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSpawnShieldActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSpawnShieldActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* PooyanShooter* GameObject::Create<PooyanShooter>(PVZDB::TableIndex) */

PooyanShooter * GameObject::Create<PooyanShooter>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = PooyanShooter::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (PooyanShooter *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieElectricProjectileActionHandler*
   GameObject::Create<ZombieElectricProjectileActionHandler>(PVZDB::TableIndex) */

ZombieElectricProjectileActionHandler *
GameObject::Create<ZombieElectricProjectileActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieElectricProjectileActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieElectricProjectileActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ScoreEffect* GameObject::Create<ScoreEffect>(PVZDB::TableIndex) */

ScoreEffect * GameObject::Create<ScoreEffect>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ScoreEffect::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ScoreEffect *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossEightiesSwapJamActionHandler*
   GameObject::Create<ZombossEightiesSwapJamActionHandler>(PVZDB::TableIndex) */

ZombossEightiesSwapJamActionHandler *
GameObject::Create<ZombossEightiesSwapJamActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossEightiesSwapJamActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossEightiesSwapJamActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossEightiesDropSpeakerActionHandler*
   GameObject::Create<ZombossEightiesDropSpeakerActionHandler>(PVZDB::TableIndex) */

ZombossEightiesDropSpeakerActionHandler *
GameObject::Create<ZombossEightiesDropSpeakerActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossEightiesDropSpeakerActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossEightiesDropSpeakerActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossEightiesFireSpeakerRayActionHandler*
   GameObject::Create<ZombossEightiesFireSpeakerRayActionHandler>(PVZDB::TableIndex) */

ZombossEightiesFireSpeakerRayActionHandler *
GameObject::Create<ZombossEightiesFireSpeakerRayActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossEightiesFireSpeakerRayActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossEightiesFireSpeakerRayActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* GridSquareLaser* GameObject::Create<GridSquareLaser>(PVZDB::TableIndex) */

GridSquareLaser * GameObject::Create<GridSquareLaser>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = GridSquareLaser::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (GridSquareLaser *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSpawnDinoActionHandler*
   GameObject::Create<ZombossSpawnDinoActionHandler>(PVZDB::TableIndex) */

ZombossSpawnDinoActionHandler *
GameObject::Create<ZombossSpawnDinoActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSpawnDinoActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSpawnDinoActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDinoLaserActionHandler*
   GameObject::Create<ZombossDinoLaserActionHandler>(PVZDB::TableIndex) */

ZombossDinoLaserActionHandler *
GameObject::Create<ZombossDinoLaserActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDinoLaserActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDinoLaserActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossDinoWalkActionHandler* GameObject::Create<ZombossDinoWalkActionHandler>(PVZDB::TableIndex)
    */

ZombossDinoWalkActionHandler * GameObject::Create<ZombossDinoWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossDinoWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossDinoWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossFanPullActionHandler* GameObject::Create<ZombossFanPullActionHandler>(PVZDB::TableIndex)
    */

ZombossFanPullActionHandler * GameObject::Create<ZombossFanPullActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossFanPullActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossFanPullActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* SharkMinion* GameObject::Create<SharkMinion>(PVZDB::TableIndex) */

SharkMinion * GameObject::Create<SharkMinion>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SharkMinion::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SharkMinion *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossBeachDiveActionHandler*
   GameObject::Create<ZombossBeachDiveActionHandler>(PVZDB::TableIndex) */

ZombossBeachDiveActionHandler *
GameObject::Create<ZombossBeachDiveActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossBeachDiveActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossBeachDiveActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossSharkMinionAttackActionHandler*
   GameObject::Create<ZombossSharkMinionAttackActionHandler>(PVZDB::TableIndex) */

ZombossSharkMinionAttackActionHandler *
GameObject::Create<ZombossSharkMinionAttackActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossSharkMinionAttackActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossSharkMinionAttackActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* Effect_FloatingText* GameObject::Create<Effect_FloatingText>(PVZDB::TableIndex) */

Effect_FloatingText * GameObject::Create<Effect_FloatingText>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = Effect_FloatingText::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (Effect_FloatingText *)CONCAT44(extraout_var,extraout_w0);
}


/* SnakeNode* GameObject::Create<SnakeNode>(PVZDB::TableIndex) */

SnakeNode * GameObject::Create<SnakeNode>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SnakeNode::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SnakeNode *)CONCAT44(extraout_var,extraout_w0);
}


/* EliminateItem* GameObject::Create<EliminateItem>(PVZDB::TableIndex) */

EliminateItem * GameObject::Create<EliminateItem>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = EliminateItem::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (EliminateItem *)CONCAT44(extraout_var,extraout_w0);
}


/* EliminateColor* GameObject::Create<EliminateColor>(PVZDB::TableIndex) */

EliminateColor * GameObject::Create<EliminateColor>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = EliminateColor::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (EliminateColor *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentOnDeath_SpawnZombie* GameObject::Create<ComponentOnDeath_SpawnZombie>(PVZDB::TableIndex)
    */

ComponentOnDeath_SpawnZombie * GameObject::Create<ComponentOnDeath_SpawnZombie>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentOnDeath_SpawnZombie::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentOnDeath_SpawnZombie *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentZombieWhackTouch* GameObject::Create<ComponentZombieWhackTouch>(PVZDB::TableIndex) */

ComponentZombieWhackTouch * GameObject::Create<ComponentZombieWhackTouch>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentZombieWhackTouch::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentZombieWhackTouch *)CONCAT44(extraout_var,extraout_w0);
}


/* SkatingGuacodile* GameObject::Create<SkatingGuacodile>(PVZDB::TableIndex) */

SkatingGuacodile * GameObject::Create<SkatingGuacodile>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = SkatingGuacodile::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (SkatingGuacodile *)CONCAT44(extraout_var,extraout_w0);
}


/* FloatingIce* GameObject::Create<FloatingIce>(PVZDB::TableIndex) */

FloatingIce * GameObject::Create<FloatingIce>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = FloatingIce::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (FloatingIce *)CONCAT44(extraout_var,extraout_w0);
}


/* StarvingChomper* GameObject::Create<StarvingChomper>(PVZDB::TableIndex) */

StarvingChomper * GameObject::Create<StarvingChomper>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = StarvingChomper::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (StarvingChomper *)CONCAT44(extraout_var,extraout_w0);
}


/* RiverCrossingDodoRider* GameObject::Create<RiverCrossingDodoRider>(PVZDB::TableIndex) */

RiverCrossingDodoRider * GameObject::Create<RiverCrossingDodoRider>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = RiverCrossingDodoRider::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (RiverCrossingDodoRider *)CONCAT44(extraout_var,extraout_w0);
}


/* PVPSkillBombRocket* GameObject::Create<PVPSkillBombRocket>(PVZDB::TableIndex) */

PVPSkillBombRocket * GameObject::Create<PVPSkillBombRocket>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = PVPSkillBombRocket::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (PVPSkillBombRocket *)CONCAT44(extraout_var,extraout_w0);
}


/* IntroWorldCupIconWidget* GameObject::Create<IntroWorldCupIconWidget>(PVZDB::TableIndex) */

IntroWorldCupIconWidget * GameObject::Create<IntroWorldCupIconWidget>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = IntroWorldCupIconWidget::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (IntroWorldCupIconWidget *)CONCAT44(extraout_var,extraout_w0);
}


/* TimeEnergyAnimation* GameObject::Create<TimeEnergyAnimation>(PVZDB::TableIndex) */

TimeEnergyAnimation * GameObject::Create<TimeEnergyAnimation>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = TimeEnergyAnimation::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (TimeEnergyAnimation *)CONCAT44(extraout_var,extraout_w0);
}


/* WatergunBeamEntity* GameObject::Create<WatergunBeamEntity>(PVZDB::TableIndex) */

WatergunBeamEntity * GameObject::Create<WatergunBeamEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = WatergunBeamEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (WatergunBeamEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* ComponentLightingDamageRadius*
   GameObject::Create<ComponentLightingDamageRadius>(PVZDB::TableIndex) */

ComponentLightingDamageRadius *
GameObject::Create<ComponentLightingDamageRadius>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ComponentLightingDamageRadius::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ComponentLightingDamageRadius *)CONCAT44(extraout_var,extraout_w0);
}


/* TwinsAssistPerson* GameObject::Create<TwinsAssistPerson>(PVZDB::TableIndex) */

TwinsAssistPerson * GameObject::Create<TwinsAssistPerson>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = TwinsAssistPerson::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (TwinsAssistPerson *)CONCAT44(extraout_var,extraout_w0);
}


/* DevilsParasiteEntity* GameObject::Create<DevilsParasiteEntity>(PVZDB::TableIndex) */

DevilsParasiteEntity * GameObject::Create<DevilsParasiteEntity>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = DevilsParasiteEntity::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (DevilsParasiteEntity *)CONCAT44(extraout_var,extraout_w0);
}


/* CthulhuEyeballEasyButton* GameObject::Create<CthulhuEyeballEasyButton>(PVZDB::TableIndex) */

CthulhuEyeballEasyButton * GameObject::Create<CthulhuEyeballEasyButton>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = CthulhuEyeballEasyButton::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (CthulhuEyeballEasyButton *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMower* GameObject::Create<AnimateArtifactMower>(PVZDB::TableIndex) */

AnimateArtifactMower * GameObject::Create<AnimateArtifactMower>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMower::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMower *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerSwarm* GameObject::Create<AnimateArtifactMowerSwarm>(PVZDB::TableIndex) */

AnimateArtifactMowerSwarm * GameObject::Create<AnimateArtifactMowerSwarm>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerSwarm::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerSwarm *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerHolo* GameObject::Create<AnimateArtifactMowerHolo>(PVZDB::TableIndex) */

AnimateArtifactMowerHolo * GameObject::Create<AnimateArtifactMowerHolo>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerHolo::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerHolo *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerSoulBell* GameObject::Create<AnimateArtifactMowerSoulBell>(PVZDB::TableIndex)
    */

AnimateArtifactMowerSoulBell * GameObject::Create<AnimateArtifactMowerSoulBell>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerSoulBell::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerSoulBell *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerWithPrismTower*
   GameObject::Create<AnimateArtifactMowerWithPrismTower>(PVZDB::TableIndex) */

AnimateArtifactMowerWithPrismTower *
GameObject::Create<AnimateArtifactMowerWithPrismTower>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerWithPrismTower::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerWithPrismTower *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerGuitar* GameObject::Create<AnimateArtifactMowerGuitar>(PVZDB::TableIndex) */

AnimateArtifactMowerGuitar * GameObject::Create<AnimateArtifactMowerGuitar>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerGuitar::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerGuitar *)CONCAT44(extraout_var,extraout_w0);
}


/* AnimateArtifactMowerWithCalabash*
   GameObject::Create<AnimateArtifactMowerWithCalabash>(PVZDB::TableIndex) */

AnimateArtifactMowerWithCalabash *
GameObject::Create<AnimateArtifactMowerWithCalabash>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = AnimateArtifactMowerWithCalabash::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (AnimateArtifactMowerWithCalabash *)CONCAT44(extraout_var,extraout_w0);
}


/* MaybeeBee* GameObject::Create<MaybeeBee>(PVZDB::TableIndex) */

MaybeeBee * GameObject::Create<MaybeeBee>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = MaybeeBee::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (MaybeeBee *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieRomanHealerHealActionHandler*
   GameObject::Create<ZombieRomanHealerHealActionHandler>(PVZDB::TableIndex) */

ZombieRomanHealerHealActionHandler *
GameObject::Create<ZombieRomanHealerHealActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieRomanHealerHealActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieRomanHealerHealActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieEliteElectricProjectileActionHandler*
   GameObject::Create<ZombieEliteElectricProjectileActionHandler>(PVZDB::TableIndex) */

ZombieEliteElectricProjectileActionHandler *
GameObject::Create<ZombieEliteElectricProjectileActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieEliteElectricProjectileActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieEliteElectricProjectileActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieRomanMedusaPetrifyActionHandler*
   GameObject::Create<ZombieRomanMedusaPetrifyActionHandler>(PVZDB::TableIndex) */

ZombieRomanMedusaPetrifyActionHandler *
GameObject::Create<ZombieRomanMedusaPetrifyActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieRomanMedusaPetrifyActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieRomanMedusaPetrifyActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieWalkActionHandler* GameObject::Create<ZombieWalkActionHandler>(PVZDB::TableIndex) */

ZombieWalkActionHandler * GameObject::Create<ZombieWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieTimedActionHandler* GameObject::Create<ZombieTimedActionHandler>(PVZDB::TableIndex) */

ZombieTimedActionHandler * GameObject::Create<ZombieTimedActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieTimedActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieTimedActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieIdleActionHandler* GameObject::Create<ZombieIdleActionHandler>(PVZDB::TableIndex) */

ZombieIdleActionHandler * GameObject::Create<ZombieIdleActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieIdleActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieIdleActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombiePlayAnimationActionHandler*
   GameObject::Create<ZombiePlayAnimationActionHandler>(PVZDB::TableIndex) */

ZombiePlayAnimationActionHandler *
GameObject::Create<ZombiePlayAnimationActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombiePlayAnimationActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombiePlayAnimationActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieStunActionHandler* GameObject::Create<ZombieStunActionHandler>(PVZDB::TableIndex) */

ZombieStunActionHandler * GameObject::Create<ZombieStunActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieStunActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieStunActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieMirrorQueenMirrorMagicActionHandler*
   GameObject::Create<ZombieMirrorQueenMirrorMagicActionHandler>(PVZDB::TableIndex) */

ZombieMirrorQueenMirrorMagicActionHandler *
GameObject::Create<ZombieMirrorQueenMirrorMagicActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieMirrorQueenMirrorMagicActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieMirrorQueenMirrorMagicActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieMirrorQueenIdleActionHandler*
   GameObject::Create<ZombieMirrorQueenIdleActionHandler>(PVZDB::TableIndex) */

ZombieMirrorQueenIdleActionHandler *
GameObject::Create<ZombieMirrorQueenIdleActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieMirrorQueenIdleActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieMirrorQueenIdleActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieMirrorQueenSummonActionHandler*
   GameObject::Create<ZombieMirrorQueenSummonActionHandler>(PVZDB::TableIndex) */

ZombieMirrorQueenSummonActionHandler *
GameObject::Create<ZombieMirrorQueenSummonActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieMirrorQueenSummonActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieMirrorQueenSummonActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotBaseZombieActionHandler*
   GameObject::Create<ZombossRobotBaseZombieActionHandler>(PVZDB::TableIndex) */

ZombossRobotBaseZombieActionHandler *
GameObject::Create<ZombossRobotBaseZombieActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotBaseZombieActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotBaseZombieActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotSpawnNormalZombieActionHandler*
   GameObject::Create<ZombossRobotSpawnNormalZombieActionHandler>(PVZDB::TableIndex) */

ZombossRobotSpawnNormalZombieActionHandler *
GameObject::Create<ZombossRobotSpawnNormalZombieActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotSpawnNormalZombieActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotSpawnNormalZombieActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotSpitOutBallActionHandler*
   GameObject::Create<ZombossRobotSpitOutBallActionHandler>(PVZDB::TableIndex) */

ZombossRobotSpitOutBallActionHandler *
GameObject::Create<ZombossRobotSpitOutBallActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotSpitOutBallActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotSpitOutBallActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotThrowCarActionHandler*
   GameObject::Create<ZombossRobotThrowCarActionHandler>(PVZDB::TableIndex) */

ZombossRobotThrowCarActionHandler *
GameObject::Create<ZombossRobotThrowCarActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotThrowCarActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotThrowCarActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotAirDropZombieActionHandler*
   GameObject::Create<ZombossRobotAirDropZombieActionHandler>(PVZDB::TableIndex) */

ZombossRobotAirDropZombieActionHandler *
GameObject::Create<ZombossRobotAirDropZombieActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotAirDropZombieActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotAirDropZombieActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossRobotTrampleActionHandler*
   GameObject::Create<ZombossRobotTrampleActionHandler>(PVZDB::TableIndex) */

ZombossRobotTrampleActionHandler *
GameObject::Create<ZombossRobotTrampleActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossRobotTrampleActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossRobotTrampleActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieTeleportActionHandler* GameObject::Create<ZombieTeleportActionHandler>(PVZDB::TableIndex)
    */

ZombieTeleportActionHandler * GameObject::Create<ZombieTeleportActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieTeleportActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieTeleportActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieSpawnActionHandler* GameObject::Create<ZombieSpawnActionHandler>(PVZDB::TableIndex) */

ZombieSpawnActionHandler * GameObject::Create<ZombieSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombieSpawnArtifactDoveActionHandler*
   GameObject::Create<ZombieSpawnArtifactDoveActionHandler>(PVZDB::TableIndex) */

ZombieSpawnArtifactDoveActionHandler *
GameObject::Create<ZombieSpawnArtifactDoveActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombieSpawnArtifactDoveActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombieSpawnArtifactDoveActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* HydraFlyingFireball* GameObject::Create<HydraFlyingFireball>(PVZDB::TableIndex) */

HydraFlyingFireball * GameObject::Create<HydraFlyingFireball>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = HydraFlyingFireball::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (HydraFlyingFireball *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHydraSpawnActionHandler*
   GameObject::Create<ZombossHydraSpawnActionHandler>(PVZDB::TableIndex) */

ZombossHydraSpawnActionHandler *
GameObject::Create<ZombossHydraSpawnActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHydraSpawnActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHydraSpawnActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHydraPullActionHandler*
   GameObject::Create<ZombossHydraPullActionHandler>(PVZDB::TableIndex) */

ZombossHydraPullActionHandler *
GameObject::Create<ZombossHydraPullActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHydraPullActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHydraPullActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHydraLobFireballsActionHandler*
   GameObject::Create<ZombossHydraLobFireballsActionHandler>(PVZDB::TableIndex) */

ZombossHydraLobFireballsActionHandler *
GameObject::Create<ZombossHydraLobFireballsActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHydraLobFireballsActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHydraLobFireballsActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHydraWalkActionHandler*
   GameObject::Create<ZombossHydraWalkActionHandler>(PVZDB::TableIndex) */

ZombossHydraWalkActionHandler *
GameObject::Create<ZombossHydraWalkActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHydraWalkActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHydraWalkActionHandler *)CONCAT44(extraout_var,extraout_w0);
}


/* ZombossHydraSprayActionHandler*
   GameObject::Create<ZombossHydraSprayActionHandler>(PVZDB::TableIndex) */

ZombossHydraSprayActionHandler *
GameObject::Create<ZombossHydraSprayActionHandler>(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_w0;
  undefined4 extraout_var;
  
  uVar1 = ZombossHydraSprayActionHandler::StaticGetClass();
  Create(uVar1,param_1);
  nop();
  return (ZombossHydraSprayActionHandler *)CONCAT44(extraout_var,extraout_w0);
}

