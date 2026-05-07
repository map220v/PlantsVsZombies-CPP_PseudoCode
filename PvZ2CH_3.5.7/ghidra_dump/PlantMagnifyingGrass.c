// Class: PlantMagnifyingGrass


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::isTargetValid(BoardEntity*) */

void __thiscall PlantMagnifyingGrass::isTargetValid(PlantMagnifyingGrass *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  RealObject *this_00;
  long *extraout_x0;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      pcVar4 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      cVar2 = (*pcVar4)(this_00,aRStack_10,0);
      if ((cVar2 == '\0') ||
         (cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar2 == '\0'
         )) {
        bVar3 = 0;
      }
      else {
        bVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
        bVar3 = bVar3 ^ 1;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_03c01900;
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    if (bVar1) {
      nop();
      bVar3 = (**(code **)(*extraout_x0 + 0x200))();
      goto LAB_03c01900;
    }
  }
  bVar3 = 0;
LAB_03c01900:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantMagnifyingGrass::onCancelEvent() */

void __thiscall PlantMagnifyingGrass::onCancelEvent(PlantMagnifyingGrass *this)

{
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


/* PlantMagnifyingGrass::FindTargetAndFire(PlantWeapon) */

char PlantMagnifyingGrass::FindTargetAndFire(long *param_1)

{
  char cVar1;
  
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x460))(param_1);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::StaticClassInit() */

void PlantMagnifyingGrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrismBeamTracker");
    (*pcVar3)(plVar2,asStack_10,FUN_0404412c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantMagnifyingGrass");
    (*pcVar3)(plVar2,asStack_10,FUN_0404478c,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnifyingGrass::StaticGetClass() */

long * PlantMagnifyingGrass::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagnifyingGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagnifyingGrass::GetClass() const */

long * PlantMagnifyingGrass::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMagnifyingGrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMagnifyingGrass::SetTouchEnabled(bool) */

void __thiscall PlantMagnifyingGrass::SetTouchEnabled(PlantMagnifyingGrass *this,bool param_1)

{
  this[0x94] = (PlantMagnifyingGrass)param_1;
  return;
}


/* PlantMagnifyingGrass::ClearTouch() */

void __thiscall PlantMagnifyingGrass::ClearTouch(PlantMagnifyingGrass *this)

{
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantMagnifyingGrass::Fire(PlantFramework *param_1,RtWeakPtrBase *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  RtObject *this;
  MagnifyingGrassProjectile *this_00;
  RealObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x28] == (PlantFramework)0x0) {
    this = (RtObject *)0x0;
  }
  else {
    this_01 = *(RealObject **)(param_1 + 0x10);
    std::string::string(asStack_10,"Play_Plant_MagGrass_Attack");
    RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    Plant::ResetLaunchTimer(*(Plant **)(param_1 + 0x10),false);
    param_1[0x28] = (PlantFramework)0x0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 1;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,param_2);
    this = (RtObject *)PlantFramework::Fire(param_1,asStack_10,param_3,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (((this != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<MagnifyingGrassProjectile>(this), bVar1)) &&
       (nop(), this_00 != (MagnifyingGrassProjectile *)0x0)) {
      iVar2 = FUN_04040e00(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 2) {
        MagnifyingGrassProjectile::SetChargeAttack(this_00,(bool)param_1[0x95],2.25);
      }
      else if (2 < iVar2) {
        MagnifyingGrassProjectile::SetChargeAttack(this_00,(bool)param_1[0x95],2.5);
      }
    }
    param_1[0x95] = (PlantFramework)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PlantMagnifyingGrass::startSunSuck() */

void __thiscall PlantMagnifyingGrass::startSunSuck(PlantMagnifyingGrass *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawLaserFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Effect_PopAnim*) */

void PlantMagnifyingGrass::drawLaserFromToScreenSpace
               (Graphics *param_1,SexyVector2 *param_2,SexyVector2 *param_3,SexyVector2 *param_4,
               SexyVector2 *param_5,Effect_PopAnim *param_6)

{
  PopAnimRig *this;
  undefined1 uVar1;
  UIWidget *in_x6;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = SUB81(param_5,0);
  local_8 = ___stack_chk_guard;
  local_40[0] = Sexy::SexyVector2::operator-(param_4,param_3);
  fVar2 = (float)DVec2::getLength((DVec2 *)local_40);
  local_38[0] = Sexy::SexyVector2::operator-((SexyVector2 *)param_6,param_5);
  fVar3 = (float)DVec2::getLength((DVec2 *)local_38);
  fVar4 = (float)CalcAngleForVectorRepg((SexyVector2 *)local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_38,fVar2 / fVar3,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)param_3,(SexyVector2 *)local_38,fVar4,param_5,(SexyVector2 *)0x1,
             (bool)uVar1);
  this = (PopAnimRig *)UIWidget::GetAtlasImage(in_x6);
  PopAnimRig::SetRenderTransform(this,aSStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,true);
  StandaloneEffect::Draw((StandaloneEffect *)in_x6,(Graphics *)param_2);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawLaserFromTo(Sexy::Graphics*, Sexy::SexyVector3 const&,
   Sexy::SexyVector3 const&, Sexy::Point const&, Sexy::Point const&, Effect_PopAnim*) */

void PlantMagnifyingGrass::drawLaserFromTo
               (Graphics *param_1,SexyVector3 *param_2,SexyVector3 *param_3,Point *param_4,
               Point *param_5,Effect_PopAnim *param_6)

{
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = boardToScreenSpace(param_3);
  local_20[0] = boardToScreenSpace((SexyVector3 *)param_4);
  local_18[0] = artPointToScreenPoint(param_5);
  local_10[0] = artPointToScreenPoint((Point *)param_6);
  drawLaserFromToScreenSpace
            (param_1,(SexyVector2 *)param_2,(SexyVector2 *)local_28,(SexyVector2 *)local_20,
             (SexyVector2 *)local_18,(Effect_PopAnim *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawLaserFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Effect_PopAnim*,
   int) */

void __thiscall
PlantMagnifyingGrass::drawLaserFromToScreenSpace
          (PlantMagnifyingGrass *this,Graphics *param_1,SexyVector2 *param_2,SexyVector2 *param_3,
          SexyVector2 *param_4,SexyVector2 *param_5,Effect_PopAnim *param_6,int param_7)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  UIWidget *this_01;
  long *plVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [12];
  int local_c;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  this_01 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  UIWidget::GetAtlasImage(this_01);
  PopAnimRig::GetPAMColor();
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  local_c = param_7;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar1 + 0x78))(plVar1,aIStack_18);
  drawLaserFromToScreenSpace
            ((Graphics *)this,(SexyVector2 *)param_1,param_2,param_3,param_4,
             (Effect_PopAnim *)param_5);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar1 + 0x78))(plVar1,aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnifyingGrass::Idle() */

void __thiscall PlantMagnifyingGrass::Idle(PlantMagnifyingGrass *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::LoadPopanimEffect(std::string, int) */

void PlantMagnifyingGrass::LoadPopanimEffect
               (undefined8 param_1,undefined8 param_2,string *param_3,undefined4 param_4)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_04040de8(this + 0x1c,param_4);
  std::string::string((string *)aRStack_18,"idle");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::LoadAvatarPopanimEffect(std::string, int) */

void PlantMagnifyingGrass::LoadAvatarPopanimEffect
               (undefined8 param_1,long param_2,string *param_3,undefined4 param_4)

{
  char cVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_04040de8(this + 0x1c,param_4);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_2 + 0x10));
  if (cVar1 == '\0') {
    std::string::string((string *)aRStack_18,"animation");
    PVZ_EOT();
  }
  else {
    std::string::string((string *)aRStack_18,"animation2");
    PVZ_EOT();
  }
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::Initialize() */

void __thiscall PlantMagnifyingGrass::Initialize(PlantMagnifyingGrass *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined8 *)(this + 0x88) = 0;
  this[0x28] = (PlantMagnifyingGrass)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0x94] = (PlantMagnifyingGrass)0x1;
  this[0x95] = (PlantMagnifyingGrass)0x0;
  *(undefined4 *)(this + 0x2c) = uVar3;
  iVar2 = Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  std::string::string(asStack_18,"POPANIM_EFFECTS_MAGNIFYING_GRASS_PLANTFOOD_BEAM");
  LoadAvatarPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_MAGNIFYING_GRASS_PLANTFOOD_HIT");
  LoadAvatarPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2 + 1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_MAGNIFYING_GRASS_PLANTFOOD_BEAM_IN");
  LoadPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x78),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_MAGNIFYING_GRASS_PLANTFOOD_ORIGIN");
  LoadPopanimEffect((RtWeakPtr<Sexy::ResourceInfo> *)&local_10,this,asStack_18,iVar2 + 1);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x80),(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::string::~string(asStack_18);
  nop();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  *(undefined8 *)(this + 0x34) = local_10;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  *(undefined8 *)(this + 0x3c) = local_10;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 != '\0') {
    *(undefined1 *)(*(long *)(this + 0x10) + 0x119) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::AddToRenderQueue(RenderQueue*) */

void __thiscall
PlantMagnifyingGrass::AddToRenderQueue(PlantMagnifyingGrass *this,RenderQueue *param_1)

{
  int iVar1;
  long *extraout_x0;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = (**(code **)(*extraout_x0 + 0x88))();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawSunProducerBeams);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantMagnifyingGrass,void(PlantMagnifyingGrass::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,iVar1 + -1,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawMainBeamAndOrigin);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PlantMagnifyingGrass,void(PlantMagnifyingGrass::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,iVar1 + 1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::registerForEvents() */

void __thiscall PlantMagnifyingGrass::registerForEvents(PlantMagnifyingGrass *this)

{
  char cVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantMagnifyingGrass,bool(PlantMagnifyingGrass::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantMagnifyingGrass,void(PlantMagnifyingGrass::*)()>
              (aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,2,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::PlantMagnifyingGrass() */

void __thiscall PlantMagnifyingGrass::PlantMagnifyingGrass(PlantMagnifyingGrass *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bd990;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x3c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x44));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x4c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  this[0x28] = (PlantMagnifyingGrass)0x0;
  *(undefined8 *)(this + 0x60) = local_10;
  *(undefined4 *)(this + 0x30) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xb4) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  this[0x95] = (PlantMagnifyingGrass)0x0;
  this[0x94] = (PlantMagnifyingGrass)0x1;
  *(undefined4 *)(this + 0x2c) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnifyingGrass::StaticNew() */

PlantMagnifyingGrass * PlantMagnifyingGrass::StaticNew(void)

{
  PlantMagnifyingGrass *this;
  
  this = ::operator_new(0xb8);
  PlantMagnifyingGrass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawMainBeamAndOrigin(Sexy::Graphics*) */

void __thiscall
PlantMagnifyingGrass::drawMainBeamAndOrigin(PlantMagnifyingGrass *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  char cVar1;
  long lVar2;
  SexyVector3 *pSVar3;
  UIWidget *this_02;
  PopAnimRig *this_03;
  StandaloneEffect *pSVar4;
  ResourceInfo *pRVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  GraphicsAutoState aGStack_90 [8];
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60 [2];
  float local_58;
  DVec3 aDStack_50 [16];
  undefined4 local_40;
  float local_3c;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  lVar2 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  DVec3::DVec3((DVec3 *)local_60);
  DVec3::DVec3(aDStack_50);
  if (*(int *)(this + 0x30) != 0) {
    this_00 = (RtWeakPtr *)(this + 0x68);
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    Sexy::SexyVector3::operator=((SexyVector3 *)local_60,pSVar3);
    fVar8 = *(float *)(this + 0x50);
    local_60[0] = (float)*(int *)(lVar2 + 0x2c8) + local_60[0];
    local_58 = local_58 - (float)*(int *)(lVar2 + 0x2cc);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_40,*(float *)(this + 0x4c),fVar8,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_50,(SexyVector3 *)&local_40);
    local_88 = boardToScreenSpace((SexyVector3 *)local_60);
    local_84 = fVar8;
    local_80 = boardToScreenSpace((SexyVector3 *)aDStack_50);
    fStack_7c = fVar8;
    local_78 = artPointToScreenPoint((Point *)(lVar2 + 0x2d8));
    local_74 = fVar8;
    local_70 = artPointToScreenPoint((Point *)(lVar2 + 0x2e0));
    local_6c = fVar8;
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    drawLaserFromToScreenSpace
              ((Graphics *)this,(SexyVector2 *)param_1,(SexyVector2 *)&local_88,
               (SexyVector2 *)&local_80,(SexyVector2 *)&local_78,(Effect_PopAnim *)&local_70);
    cVar1 = shouldDrawPreviousBeam((SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x34));
    if (cVar1 == '\0') {
      cVar1 = shouldDrawPreviousBeam((SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x3c));
    }
    else {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      drawLaserFromToScreenSpace
                (this,param_1,(SexyVector2 *)&local_88,(SexyVector2 *)(this + 0x34),
                 (SexyVector2 *)&local_78,(SexyVector2 *)&local_70,(Effect_PopAnim *)pRVar5,0x4c);
      cVar1 = shouldDrawPreviousBeam((SexyVector2 *)&local_80,(SexyVector2 *)(this + 0x3c));
    }
    if (cVar1 != '\0') {
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      drawLaserFromToScreenSpace
                (this,param_1,(SexyVector2 *)&local_88,(SexyVector2 *)(this + 0x3c),
                 (SexyVector2 *)&local_78,(SexyVector2 *)&local_70,(Effect_PopAnim *)pRVar5,0x19);
    }
    *(undefined8 *)(this + 0x3c) = *(undefined8 *)(this + 0x34);
    *(ulong *)(this + 0x34) = CONCAT44(fStack_7c,local_80);
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80);
    local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_80,(SexyVector2 *)&local_88);
    local_64 = fVar8;
    fVar6 = (float)CalcAngleForVectorRepg((SexyVector2 *)&local_68);
    fVar7 = (float)FUN_040410d4(0x3f800000);
    local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06ae9208,fVar7);
    local_3c = fVar8;
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)&local_88,fVar6,1.0,(SexyVector2 *)&local_40,true);
    this_02 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    this_03 = (PopAnimRig *)UIWidget::GetAtlasImage(this_02);
    PopAnimRig::SetRenderTransform(this_03,aSStack_30);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    StandaloneEffect::SetVisibility(pSVar4,true);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    StandaloneEffect::Draw(pSVar4,param_1);
    pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    StandaloneEffect::SetVisibility(pSVar4,false);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantMagnifyingGrass::GetSunMoneyPerShot() */

int __thiscall PlantMagnifyingGrass::GetSunMoneyPerShot(PlantMagnifyingGrass *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  DangerRoomManager *this_00;
  float fVar4;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar2 != '\0')) {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar2 = DangerRoomManager::IsTrainingMode(this_00);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  lVar3 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  if (this[0x95] == (PlantMagnifyingGrass)0x0) {
    iVar1 = *(int *)(lVar3 + 0x2b8);
    fVar4 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    return (int)((float)iVar1 - fVar4);
  }
  iVar1 = *(int *)(lVar3 + 0x2b8);
  fVar4 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  return (int)((float)(iVar1 << 1) - fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::spendSun() */

void __thiscall PlantMagnifyingGrass::spendSun(PlantMagnifyingGrass *this)

{
  int iVar1;
  int iVar2;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04042a48(*(undefined8 *)(this + 0x10));
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = GetSunMoneyPerShot(this);
  Board::TakeSunMoney(this_00,iVar1,false,false);
  iVar2 = GetSunMoneyPerShot(this);
  iVar1 = *(int *)(this + 0xb4);
  *(int *)(this + 0xb4) = iVar2 + iVar1;
  if (499 < iVar2 + iVar1) {
    std::string::string(asStack_10,"grass_effect");
    Achievement::Queue(asStack_10,100.0);
    std::string::~string(asStack_10);
    nop();
    Achievement::ShowAll();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::positionBeamHitForBlasting(Sexy::SexyVector2 const&) */

void PlantMagnifyingGrass::positionBeamHitForBlasting(SexyVector2 *param_1)

{
  long lVar1;
  StandaloneEffect *this;
  UIWidget *this_00;
  PopAnimRig *this_01;
  SexyVector2 *in_x1;
  float fVar2;
  float fVar3;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04042a48(*(undefined8 *)(param_1 + 0x10));
  fVar2 = (float)FUN_040410d4(0x3f800000);
  local_48[0] = Sexy::SexyVector2::operator*(param_1 + 0x4c,fVar2);
  local_40[0] = Sexy::SexyVector2::operator-((SexyVector2 *)local_48,in_x1);
  fVar3 = (float)*(int *)(lVar1 + 0x2ec);
  Sexy::FastCurve::SetOutRange(aFStack_38,(float)*(int *)(lVar1 + 0x2e8),fVar3);
  fVar2 = (float)FUN_040410d4(0x3f800000);
  Sexy::SexyVector2::operator*=((SexyVector2 *)aFStack_38,fVar2);
  fVar2 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)local_40);
  fVar2 = acosf(fVar2);
  if (0.0 <= fVar3) {
    fVar2 = -fVar2;
  }
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x70))
  ;
  StandaloneEffect::SetVisibility(this,true);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_48,fVar2,1.0,(SexyVector2 *)aFStack_38,true);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x70));
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawSunProducerBeams(Sexy::Graphics*) */

void __thiscall
PlantMagnifyingGrass::drawSunProducerBeams(PlantMagnifyingGrass *this,Graphics *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  PrismBeamTracker *this_00;
  ulong uVar4;
  Plant *this_01;
  ulong uVar5;
  undefined8 uVar6;
  GraphicsAutoState aGStack_30 [8];
  DVec3 aDStack_28 [16];
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  uVar5 = 0;
  lVar2 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  uVar6 = *(undefined8 *)(this + 0x98);
  lVar3 = FUN_04040e78(uVar6,*(undefined8 *)(this + 0xa0));
  if (lVar3 != 0) {
    do {
      this_00 = (PrismBeamTracker *)FUN_04040e58(uVar6,uVar5);
      cVar1 = PrismBeamTracker::IsBeamVisible(this_00);
      if (((cVar1 != '\0') &&
          (this_01 = (Plant *)PrismBeamTracker::GetOriginatingPlant(this_00),
          this_01 != (Plant *)0x0)) && (cVar1 = Plant::IsOnBoard(this_01), cVar1 != '\0')) {
        DVec3::DVec3(aDStack_28);
        DVec3::DVec3(aDStack_18);
        PrismBeamTracker::GetBeamEndPoints
                  (this_00,(SexyVector3 *)aDStack_28,(SexyVector3 *)aDStack_18);
        Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x78));
        drawLaserFromTo((Graphics *)this,(SexyVector3 *)param_1,(SexyVector3 *)aDStack_28,
                        (Point *)aDStack_18,(Point *)(lVar2 + 0x310),
                        (Effect_PopAnim *)(lVar2 + 0x318));
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x98);
      uVar4 = FUN_04040e78(uVar6,*(undefined8 *)(this + 0xa0));
    } while (uVar5 < uVar4);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::drawSunSuck(Sexy::Graphics*) */

void __thiscall PlantMagnifyingGrass::drawSunSuck(PlantMagnifyingGrass *this,Graphics *param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  Image *pIVar4;
  long *plVar5;
  string *extraout_x1;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  GraphicsAutoState aGStack_98 [8];
  RtWeakPtr aRStack_90 [8];
  float local_88;
  float local_84;
  Vec3 aVStack_78 [16];
  float local_68;
  float local_64;
  undefined4 local_60;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Color aCStack_38 [16];
  int local_28;
  float local_24;
  undefined4 local_20;
  int local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_98,param_1);
  lVar2 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  fVar6 = (float)PVZ_T();
  fVar10 = *(float *)(this + 0x2c);
  fVar8 = *(float *)(lVar2 + 700);
  fVar7 = (float)PVZ_EOT();
  if (((fVar6 - fVar10) / fVar8 < 1.0) && (fVar10 < fVar7)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_88,0.0,0.0,0.0);
    std::string::string((string *)&local_18,"UISunBank");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)&local_18,extraout_x1);
    std::string::~string((string *)&local_18);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_90);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      (**(code **)(*plVar5 + 0xb0))((SexyVector3 *)&local_28);
      Board::GetBoardBaseOffset();
      local_88 = (float)(local_28 - local_18);
      Board::GetBoardBaseOffset();
      local_84 = (float)((int)local_24 - (int)local_14);
    }
    uVar9 = 0;
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    fVar6 = (float)FUN_040410d4(*puVar3);
    fVar7 = (float)FUN_040410d4((float)puVar3[1] - 30.0);
    EATextSquish::Vec3::Vec3(aVStack_78,fVar6,fVar7,0.0);
    local_28 = 0;
    local_18 = 0x3f800000;
    fVar6 = CurveEvaluate<float>((SexyVector3 *)&local_28,(string *)&local_18,2);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_78,fVar6);
    local_24 = fVar7;
    local_20 = uVar9;
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,1.0 - fVar6);
    local_14 = fVar7;
    local_10 = uVar9;
    local_68 = (float)Sexy::SexyVector3::operator+
                                ((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_64 = fVar7;
    local_60 = uVar9;
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Color::Color((Color *)aIStack_58,1);
    Sexy::Color::Color((Color *)aIStack_48,3);
    Sexy::Insets::Insets((Insets *)&local_28,aIStack_58);
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_48);
    Sexy::ColorLerp((Sexy *)aCStack_38,fVar6,(SexyVector3 *)&local_28,(string *)&local_18);
    Sexy::Graphics::SetColor(param_1,aCStack_38);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae91a0);
    Sexy::Graphics::DrawImage(param_1,pIVar4,(int)local_68,(int)local_64);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::Draw(Sexy::Graphics*) */

void __thiscall PlantMagnifyingGrass::Draw(PlantMagnifyingGrass *this,Graphics *param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_2c;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  drawSunSuck(this,param_1);
  PlantFramework::Draw((Graphics *)this);
  lVar4 = *(long *)(this + 0x10);
  iVar1 = FUN_04040e00(lVar4);
  if (1 < iVar1) {
    fVar8 = *(float *)(param_1 + 0x18);
    if (*(long *)(this + 0x88) == 0) {
      *(float *)(lVar4 + 0xc4) = fVar8;
    }
    else {
      local_18[0] = 0x3f800000;
      local_2c = (float)PVZ_T();
      local_2c = local_2c - *(float *)(this + 0x90);
      local_28[0] = 0;
      pfVar2 = eastl::max_alt<float>(&local_2c,(float *)local_28);
      pfVar2 = eastl::min_alt<float>((float *)local_18,pfVar2);
      lVar3 = *(long *)(this + 0x10);
      fVar10 = *pfVar2;
      lVar4 = *(long *)(this + 0x88);
      *(float *)(lVar3 + 0xc4) = fVar8 + fVar10 * 0.3;
      if (lVar4 != 0) {
        fVar7 = *(float *)(lVar3 + 0x1c);
        fVar8 = (float)FUN_04040f30(*(undefined4 *)(lVar3 + 0x18),fVar7,
                                    *(undefined4 *)(lVar3 + 0x20));
        Sexy::Graphics::SetDrawMode(param_1,1);
        local_18[0] = 0x3f800000;
        local_2c = (float)PVZ_T();
        local_2c = local_2c - *(float *)(this + 0x90);
        local_28[0] = 0;
        pfVar2 = eastl::max_alt<float>(&local_2c,(float *)local_28);
        pfVar2 = eastl::min_alt<float>((float *)local_18,pfVar2);
        fVar9 = fVar10 * 20.0 + 65.0;
        fVar10 = *pfVar2;
        uVar5 = FUN_040410d4(fVar8 - 10.0);
        uVar6 = FUN_040410d4(fVar7 - 30.0);
        Sexy::Insets::Insets((Insets *)local_28,0x40,0,0,100);
        Sexy::Insets::Insets((Insets *)local_18,0xff,0xb4,0xb4,100);
        DrawRadialCooldown(fVar10,uVar5,uVar6,fVar9 - 10.0,param_1,(Insets *)local_28,
                           (Insets *)local_18);
        fVar10 = fVar10 - 3.0;
        uVar5 = FUN_040410d4(fVar8 - 10.0);
        uVar6 = FUN_040410d4(fVar7 - 30.0);
        Sexy::Insets::Insets((Insets *)local_28,0x40,0,0,100);
        Sexy::Insets::Insets((Insets *)local_18,0xff,0x80,0x80,100);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        DrawRadialCooldown(fVar10,uVar5,uVar6,fVar9,param_1,(Insets *)local_28,(Insets *)local_18);
        Sexy::Graphics::SetDrawMode(param_1,0);
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
/* PlantMagnifyingGrass::tryFireRegularShot(bool) */

void __thiscall PlantMagnifyingGrass::tryFireRegularShot(PlantMagnifyingGrass *this,bool param_1)

{
  PlantAnimRig_MagnifyingGrass *pPVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x28] == (PlantMagnifyingGrass)0x0) {
    if (!param_1) {
      spendSun(this);
    }
    this[0x28] = (PlantMagnifyingGrass)0x1;
    startSunSuck(this);
    pPVar1 = (PlantAnimRig_MagnifyingGrass *)FUN_0404381c(*(undefined8 *)(this + 0x10));
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PlantAnimRig_MagnifyingGrass::PlayTapAttack(pPVar1,aDStack_38);
    uVar3 = PVZ_EOT();
    uVar2 = 1;
    *(undefined4 *)(*(long *)(this + 0x10) + 300) = uVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::AutoFire() */

void __thiscall PlantMagnifyingGrass::AutoFire(PlantMagnifyingGrass *this)

{
  bool bVar1;
  PlantAnimRig_MagnifyingGrass *pPVar2;
  undefined4 uVar3;
  DummyInit aDStack_38 [48];
  long local_8;
  
  this[0x28] = (PlantMagnifyingGrass)0x1;
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAnimRig_MagnifyingGrass *)FUN_0404381c(*(undefined8 *)(this + 0x10));
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PlantAnimRig_MagnifyingGrass::PlayTapAttack(pPVar2,aDStack_38);
  uVar3 = PVZ_EOT();
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 300) = uVar3;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::DoTapAttack() */

void PlantMagnifyingGrass::DoTapAttack(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  PlantMagnifyingGrass *in_x0;
  wchar16 *pwVar4;
  PlantAnimRig_MagnifyingGrass *pPVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  byte bVar7;
  Board *this;
  undefined4 uVar8;
  LineBreakCategory aLStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  pLVar6 = aLStack_48;
  bVar7 = 0;
  local_8 = ___stack_chk_guard;
  FUN_04042a48(*(undefined8 *)(in_x0 + 0x10));
  this = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = GetSunMoneyPerShot(in_x0);
  bVar1 = Board::CanTakeSunMoney(this,iVar3);
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_40,"FreePlanting");
  bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)asStack_40,pLVar6,in_x3,in_x4);
  std::string::~string(asStack_40);
  nop();
  if (in_x0[0x28] == (PlantMagnifyingGrass)0x0) {
    bVar7 = bVar2 | bVar1;
    if (bVar7 != 0) {
      if (bVar2 == 0) {
        spendSun(in_x0);
      }
      in_x0[0x28] = (PlantMagnifyingGrass)0x1;
      startSunSuck(in_x0);
      pPVar5 = (PlantAnimRig_MagnifyingGrass *)FUN_0404381c(*(undefined8 *)(in_x0 + 0x10));
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PlantAnimRig_MagnifyingGrass::PlayTapAttack(pPVar5,aDStack_38);
      uVar8 = PVZ_EOT();
      *(undefined4 *)(*(long *)(in_x0 + 0x10) + 300) = uVar8;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar7);
}


/* PlantMagnifyingGrass::onTouchEvent(Sexy::Touch const&) */

undefined8 __thiscall PlantMagnifyingGrass::onTouchEvent(PlantMagnifyingGrass *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  TRect<int> *pTVar4;
  undefined8 uVar5;
  Plant *pPVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  if ((this[0x94] != (PlantMagnifyingGrass)0x0) &&
     (cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar1 == '\0')) {
    pPVar6 = *(Plant **)(this + 0x10);
    cVar1 = FUN_04040df4(pPVar6[0x278]);
    if ((cVar1 == '\0') &&
       (((cVar1 = Plant::IsWatering(pPVar6), cVar1 == '\0' &&
         (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) &&
        (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17), cVar1 == '\0')))) {
      pPVar6 = *(Plant **)(this + 0x10);
      iVar2 = FUN_04040e00(pPVar6);
      if (iVar2 < 2) {
        if ((*(long *)(this + 0x88) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
          fVar8 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x10));
          fVar9 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x14));
          pTVar4 = (TRect<int> *)(**(code **)(*(long *)pPVar6 + 0x178))(pPVar6);
          cVar1 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar8,(int)fVar9);
          if (cVar1 != '\0') {
            *(undefined8 *)(this + 0x88) = *(undefined8 *)param_1;
            return 0;
          }
        }
        else {
          if (*(long *)(this + 0x88) != *(long *)param_1) {
            return 0;
          }
          if (*(int *)(param_1 + 0x30) != 4) {
            if (*(int *)(param_1 + 0x30) != 3) {
              return 0;
            }
            ClearTouch(this);
            if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
               (cVar1 = FUN_04040df8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)),
               cVar1 == '\0')) {
              return 0;
            }
            cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x1f8))(*(long **)(this + 0x10));
            if (cVar1 != '\0') {
              return 0;
            }
            plVar7 = *(long **)(this + 0x10);
            cVar1 = FUN_02fd4128((int)plVar7[5]);
            if (cVar1 != '\0') {
              return 0;
            }
            fVar8 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x10));
            fVar9 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x14));
            pTVar4 = (TRect<int> *)(**(code **)(*plVar7 + 0x178))(plVar7);
            cVar1 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar8,(int)fVar9);
            if (cVar1 == '\0') {
              return 0;
            }
            goto LAB_04043e1c;
          }
        }
      }
      else {
        if (*(code **)(*(long *)pPVar6 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar1 = Plant::IsInPlantFoodState(pPVar6);
        }
        else {
          cVar1 = (**(code **)(*(long *)pPVar6 + 0x1f8))();
        }
        if (cVar1 != '\0') {
          return 0;
        }
        lVar3 = FUN_0404379c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
        if ((lVar3 == 0) && (cVar1 == '\0')) {
          return 0;
        }
        if (((*(long *)(this + 0x88) != 0) || (*(int *)(param_1 + 0x30) != 0)) &&
           (*(long *)(this + 0x88) != *(long *)param_1)) {
          return 0;
        }
        fVar8 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x10));
        fVar9 = (float)FUN_040410e4((float)*(int *)(param_1 + 0x14));
        pTVar4 = (TRect<int> *)
                 (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
        cVar1 = Sexy::TRect<int>::Contains(pTVar4,(int)fVar8,(int)fVar9);
        if (cVar1 != '\0') {
          iVar2 = *(int *)(param_1 + 0x30);
          if (iVar2 == 3) {
            ClearTouch(this);
            if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
               (cVar1 = FUN_04040df8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)),
               cVar1 == '\0')) {
              return 0;
            }
            cVar1 = (**(code **)(**(long **)(this + 0x10) + 0x1f8))(*(long **)(this + 0x10));
            if (cVar1 != '\0') {
              return 0;
            }
LAB_04043e1c:
            uVar5 = DoTapAttack();
            return uVar5;
          }
          if (iVar2 != 4) {
            if (iVar2 != 0) {
              return 0;
            }
            uVar10 = PVZ_T();
            *(undefined8 *)(this + 0x88) = *(undefined8 *)param_1;
            *(undefined4 *)(this + 0x90) = uVar10;
            return 0;
          }
        }
      }
      ClearTouch(this);
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::findClosestTarget() */

void __thiscall PlantMagnifyingGrass::findClosestTarget(PlantMagnifyingGrass *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ResourceInfo *pRVar7;
  ulong uVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float unaff_s10;
  ResistenceValueInfo aRStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_58);
  pRVar10 = (ResourceInfo *)0x0;
  lVar4 = *(long *)(this + 0x10);
  uVar14 = *(undefined4 *)(lVar4 + 0x1c);
  local_50 = FUN_04040f30(*(undefined4 *)(lVar4 + 0x18),uVar14,*(undefined4 *)(lVar4 + 0x20));
  local_4c = uVar14;
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),0,10,
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(4,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             aIStack_30);
  lVar4 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  fVar15 = *(float *)(lVar4 + 0x2f4);
  fVar11 = (float)Sexy::SexyMath::DegToRad(*(float *)(lVar4 + 0x2f0));
  uVar9 = local_20;
  lVar4 = FUN_04040e38(local_20,local_18);
  pRVar7 = pRVar10;
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04040e44(uVar9,uVar8);
      pRVar10 = (ResourceInfo *)*puVar5;
      cVar1 = isTargetValid(this,(BoardEntity *)pRVar10);
      if (cVar1 == '\0') {
LAB_04043fc0:
        pRVar10 = pRVar7;
        fVar12 = unaff_s10;
      }
      else {
        local_48 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,(BoardEntity *)pRVar10)
        ;
        local_44 = uVar14;
        local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
        local_3c = uVar14;
        fVar12 = (float)VectorNorm((FPoint *)&local_40);
        if (fVar15 * fVar15 < fVar12) goto LAB_04043fc0;
        uVar14 = 0;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,1.0,0.0);
        fVar13 = (float)Sexy::SexyVector2::AngleBetween
                                  ((SexyVector2 *)&local_38,(SexyVector2 *)&local_40);
        if ((fVar11 < fVar13) || ((unaff_s10 <= fVar12 && (pRVar7 != (ResourceInfo *)0x0))))
        goto LAB_04043fc0;
      }
      unaff_s10 = fVar12;
      uVar9 = local_20;
      uVar8 = uVar8 + 1;
      uVar6 = FUN_04040e38(local_20,local_18);
      pRVar7 = pRVar10;
    } while (uVar8 < uVar6);
  }
  if (pRVar10 != (ResourceInfo *)0x0) {
    this_00 = (RtWeakPtr *)(this + 0x58);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      cVar1 = isTargetValid(this,(BoardEntity *)pRVar7);
      if (cVar1 != '\0') {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        local_40 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,(BoardEntity *)pRVar7);
        local_3c = uVar14;
        local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_40,(SexyVector2 *)&local_50);
        local_34 = uVar14;
        fVar11 = (float)VectorNorm((FPoint *)&local_38);
        if (15.0 < ABS(fVar11 - unaff_s10)) {
          pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        }
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::damageTarget(BoardEntity*, bool) */

void __thiscall
PlantMagnifyingGrass::damageTarget(PlantMagnifyingGrass *this,BoardEntity *param_1,bool param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  DamageInfo *pDVar9;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  fVar8 = *(float *)(lVar2 + 0x2c0);
  fVar6 = (float)PVZ_Dt();
  fVar7 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  pDVar9._0_4_ = (DamageInfo *)(fVar6 * fVar7 * fVar8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    pcVar5 = *(code **)(*(long *)param_1 + 0x110);
    uVar3 = operator|(0x2000,0x1000);
    uVar4 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar9._0_4_,local_70,local_6c,aDStack_68,uVar3,uVar4,aPStack_78,0);
    (*pcVar5)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    if (param_2) {
      fVar7 = *(float *)(lVar2 + 0x328);
      pcVar5 = *(code **)(*(long *)param_1 + 0x110);
      fVar6 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      uVar4 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar6 * fVar7),local_70,local_6c,aDStack_68,uVar3,uVar4,aPStack_78,0
                );
      (*pcVar5)(param_1,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  else {
    pcVar5 = *(code **)(*(long *)param_1 + 0x110);
    uVar3 = operator|(0x2000,0x1000);
    uVar4 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)((float)pDVar9._0_4_ * 1.5),local_70,local_6c,aDStack_68,uVar3,uVar4,
               aPStack_78,0);
    (*pcVar5)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    if (param_2) {
      fVar7 = *(float *)(lVar2 + 0x328);
      pcVar5 = *(code **)(*(long *)param_1 + 0x110);
      fVar6 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      uVar4 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar7 * 1.5 * fVar6),local_70,local_6c,aDStack_68,uVar3,uVar4,
                 aPStack_78,0);
      (*pcVar5)(param_1,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnifyingGrass::~PlantMagnifyingGrass() */

void __thiscall PlantMagnifyingGrass::~PlantMagnifyingGrass(PlantMagnifyingGrass *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  RtWeakPtr *this_02;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_03;
  
  this_03 = (RtWeakPtr *)(this + 0x68);
  *(undefined ***)this = &PTR_GetClass_067bd990;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_00 = (RtWeakPtr *)(this + 0x70);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtWeakPtr *)(this + 0x78);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_02 = (RtWeakPtr *)(this + 0x80);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  std::vector<PrismBeamTracker,std::allocator<PrismBeamTracker>>::~vector
            ((vector<PrismBeamTracker,std::allocator<PrismBeamTracker>> *)(this + 0x98));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMagnifyingGrass::~PlantMagnifyingGrass() */

void __thiscall PlantMagnifyingGrass::~PlantMagnifyingGrass(PlantMagnifyingGrass *this)

{
  ~PlantMagnifyingGrass(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::buildPrismBeams() */

void __thiscall PlantMagnifyingGrass::buildPrismBeams(PlantMagnifyingGrass *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  Insets *pIVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  PrismBeamTracker *pPVar12;
  float fVar13;
  Plant *local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar5 = local_38;
  lVar3 = FUN_04040e38(local_38,local_30);
  if (lVar3 != 0) {
    do {
      FUN_04040e44(uVar5,uVar10);
      nop();
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      bVar1 = std::operator==((string *)(lVar3 + 8),"sunflower");
      if ((bVar1) || (bVar1 = std::operator==((string *)(lVar3 + 8),"twinsunflower"), bVar1)) {
        std::vector<Plant*,std::allocator<Plant*>>::push_back
                  ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_50);
      }
      uVar5 = local_38;
      uVar10 = uVar10 + 1;
      uVar4 = FUN_04040e38(local_38,local_30);
    } while (uVar10 < uVar4);
  }
  lVar3 = FUN_04040e4c(local_20,local_18);
  if (lVar3 != 0) {
    if (((DAT_06ae9200 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae9200), iVar2 != 0)) {
      Sexy::Color::Color((Color *)&DAT_06ae9218,2);
      Sexy::Color::Color((Color *)&DAT_06ae9228,4);
      Sexy::Color::Color((Color *)&DAT_06ae9238,5);
      Sexy::Color::Color((Color *)&DAT_06ae9248,6);
      Sexy::Color::Color((Color *)&DAT_06ae9258,7);
      __cxa_guard_release(&DAT_06ae9200);
    }
    if (((DAT_06ae9278 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae9278), iVar2 != 0)) {
      std::vector<Sexy::Color,std::allocator<Sexy::Color>>::vector<Sexy::Color*,void>
                ((Color *)&DAT_06ae92c0,(Color *)&DAT_06ae9218,(allocator *)&DAT_06ae9268);
      __cxa_guard_release(&DAT_06ae9278);
      __cxa_atexit(std::vector<Sexy::Color,std::allocator<Sexy::Color>>::~vector,&DAT_06ae92c0,
                   &DAT_06a88000);
    }
    DAT_06ae92b8 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04046618(uVar5,uVar6);
    fVar13 = *(float *)(*(long *)(this + 0x10) + 0x130);
    fVar11 = (float)PVZ_T();
    fVar11 = (fVar13 - fVar11) - 1.0;
    uVar10 = FUN_04040e4c(local_20,local_18);
    if (1 < uVar10) {
      fVar11 = fVar11 / (float)uVar10;
    }
    std::vector<PrismBeamTracker,std::allocator<PrismBeamTracker>>::resize
              ((vector<PrismBeamTracker,std::allocator<PrismBeamTracker>> *)(this + 0x98),uVar10);
    uVar10 = 0;
    while( true ) {
      uVar4 = FUN_04040e4c(local_20,local_18);
      if (uVar4 <= uVar10) break;
      fVar13 = (float)PVZ_T();
      uVar5 = FUN_04040e58(*(undefined8 *)(this + 0x98),uVar10);
      plVar7 = (long *)FUN_04040e68(local_20,uVar10);
      lVar3 = *plVar7;
      uVar9 = *(undefined8 *)(this + 0x10);
      pIVar8 = (Insets *)FUN_04040e70(DAT_06ae92c0,(long)*(int *)(lVar3 + 0x110));
      Sexy::Insets::Insets((Insets *)aRStack_48,pIVar8);
      pPVar12 = (PrismBeamTracker *)PVZ_T();
      uVar6 = FUN_04042a48(*(undefined8 *)(this + 0x10));
      PrismBeamTracker::InitBeam
                (pPVar12,fVar11 * (float)(int)uVar10 + 0.5 + fVar13,0x3f000000,uVar5,lVar3,uVar9,
                 (Insets *)aRStack_48,uVar6);
      uVar10 = uVar10 + 1;
    }
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::setBeamState(PlantMagnifyingGrass::BeamState) */

void __thiscall PlantMagnifyingGrass::setBeamState(PlantMagnifyingGrass *this,int param_2)

{
  int iVar1;
  StandaloneEffect *this_00;
  Effect_PopAnim *this_01;
  long lVar2;
  long lVar3;
  RealObject *pRVar4;
  float fVar5;
  float fVar6;
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x30) != param_2) {
    *(int *)(this + 0x30) = param_2;
    if (param_2 == 1) {
      buildPrismBeams(this);
      *(undefined4 *)(this + 0xb0) = 0xffffffff;
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
      std::string::string(asStack_28,"start");
      AnimationSequence::AddSingleAnimation((PIInterpolator *)asStack_20,asStack_28,0);
      std::string::~string(asStack_28);
      nop();
      std::string::string(asStack_28,"idle");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation((PIInterpolator *)asStack_20,asStack_28,0);
      std::string::~string(asStack_28);
      nop();
      this_01 = (Effect_PopAnim *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
      Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)asStack_20);
      lVar2 = FUN_04042a48(*(undefined8 *)(this + 0x10));
      lVar3 = *(long *)(this + 0x10);
      fVar6 = *(float *)(lVar3 + 0x1c);
      fVar5 = (float)FUN_04040f30(*(undefined4 *)(lVar3 + 0x18),fVar6,*(undefined4 *)(lVar3 + 0x20))
      ;
      pRVar4 = *(RealObject **)(this + 0x10);
      iVar1 = *(int *)(lVar2 + 0x2cc);
      *(float *)(this + 0x4c) = fVar5 + 5.0 + (float)*(int *)(lVar2 + 0x2c8);
      *(float *)(this + 0x50) = (float)iVar1 + fVar6;
      std::string::string(asStack_28,"Play_Plant_MagGrass_Nitro_Start");
      RealObject::PlayPositionalSound(pRVar4,asStack_28,0.0);
      std::string::~string(asStack_28);
      nop();
      AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
    }
    else if (param_2 == 0) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
      StandaloneEffect::SetVisibility(this_00,false);
      std::vector<PrismBeamTracker,std::allocator<PrismBeamTracker>>::clear
                ((vector<PrismBeamTracker,std::allocator<PrismBeamTracker>> *)(this + 0x98));
    }
    else if (param_2 == 2) {
      pRVar4 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_20,"Play_Plant_MagGrass_Nitro_End");
      RealObject::PlayPositionalSound(pRVar4,asStack_20,0.0);
      std::string::~string(asStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMagnifyingGrass::UpdateUnconditionally() */

void __thiscall PlantMagnifyingGrass::UpdateUnconditionally(PlantMagnifyingGrass *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  BoardEntity *pBVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  PrismBeamTracker *pPVar9;
  StandaloneEffect *this_00;
  bool bVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04040e00(*(undefined8 *)(this + 0x10));
  if (((1 < iVar2) && (*(long *)(this + 0x88) != 0)) &&
     (fVar15 = (float)PVZ_T(), 1.0 <= fVar15 - *(float *)(this + 0x90))) {
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (cVar1 = FUN_04040df8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 != '\0'))
    {
      this[0x95] = (PlantMagnifyingGrass)0x1;
      DoTapAttack();
    }
    ClearTouch(this);
  }
  if (*(int *)(this + 0x30) == 0) goto LAB_04046c0c;
  lVar3 = FUN_04042a48(*(undefined8 *)(this + 0x10));
  lVar4 = *(long *)(this + 0x10);
  fVar15 = *(float *)(lVar4 + 0x1c);
  local_28 = (float)FUN_04040f30(*(undefined4 *)(lVar4 + 0x18),fVar15,*(undefined4 *)(lVar4 + 0x20))
  ;
  local_28 = local_28 + (float)*(int *)(lVar3 + 0x2c8);
  fVar15 = fVar15 + (float)*(int *)(lVar3 + 0x2cc);
  fStack_24 = fVar15;
  fVar12 = (float)FUN_040410d4(0x3f800000);
  local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_28,fVar12);
  local_1c = fVar15;
  if (*(int *)(this + 0x30) == 2) {
    pBVar5 = (BoardEntity *)0x0;
    *(ulong *)(this + 0x44) = CONCAT44(fStack_24,local_28);
    fVar15 = 5.0;
    *(float *)(this + 0x44) = *(float *)(this + 0x44) + 5.0;
  }
  else {
    pBVar5 = (BoardEntity *)findClosestTarget(this);
    if (pBVar5 == (BoardEntity *)0x0) {
      *(ulong *)(this + 0x44) = CONCAT44(fStack_24,local_28);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar15 = (float)PVZ_T();
      fVar15 = cosf(fVar15 * 0.618);
      *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar15 * 100.0 + (float)iVar2 * 5.0;
      fVar15 = (float)PVZ_T();
      fVar12 = sinf(fVar15 * 1.618);
      fVar15 = 250.0;
      *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar12 * 250.0;
    }
    else {
      uVar13 = PlantUltomato::getPositionForTarget((PlantUltomato *)this,pBVar5);
      uVar11 = CONCAT44(fVar15,uVar13);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      *(undefined8 *)(this + 0x44) = uVar11;
    }
  }
  local_18 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 0x44),(SexyVector2 *)(this + 0x4c))
  ;
  local_14 = fVar15;
  fVar12 = (float)DVec2::getLength((DVec2 *)&local_18);
  fVar16 = *(float *)(lVar3 + 0x2c4);
  fVar14 = (float)PVZ_Dt();
  local_10 = 0x3f800000;
  local_2c = (fVar14 * fVar16) / fVar12;
  pfVar6 = eastl::min_alt<float>(&local_2c,(float *)&local_10);
  local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_18,*pfVar6);
  local_c = fVar15;
  Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x4c),(TPoint *)&local_10);
  iVar2 = *(int *)(this + 0xb0);
  uVar11 = *(undefined8 *)(this + 0x98);
  uVar7 = FUN_04040e78(uVar11,*(undefined8 *)(this + 0xa0));
  if ((ulong)(long)(iVar2 + 1) < uVar7) {
    pPVar9 = (PrismBeamTracker *)FUN_04040e58(uVar11,(long)(iVar2 + 1));
    cVar1 = PrismBeamTracker::IsDone(pPVar9);
    if (cVar1 == '\0') goto LAB_04046d84;
    bVar10 = true;
    *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  }
  else {
LAB_04046d84:
    bVar10 = false;
  }
  if (5.0 <= fVar12) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
    StandaloneEffect::SetVisibility(this_00,false);
  }
  else if (*(int *)(this + 0x30) == 2) {
    setBeamState(this,0);
  }
  else if ((pBVar5 != (BoardEntity *)0x0) && (*(int *)(this + 0x30) == 1)) {
    positionBeamHitForBlasting((SexyVector2 *)this);
    damageTarget(this,pBVar5,bVar10);
  }
  uVar7 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x98);
    uVar8 = FUN_04040e78(uVar11,*(undefined8 *)(this + 0xa0));
    if (uVar8 <= uVar7) break;
    pPVar9 = (PrismBeamTracker *)FUN_04040e58(uVar11,uVar7);
    cVar1 = PrismBeamTracker::IsBeamVisible(pPVar9);
    if ((cVar1 == '\0') || (cVar1 = PrismBeamTracker::IsContracting(pPVar9), cVar1 == '\0')) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar7 = uVar7 + 1;
      PrismBeamTracker::PlayContractionSound(pPVar9);
    }
  }
LAB_04046c0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMagnifyingGrass::ApplyPlantfood() */

void __thiscall PlantMagnifyingGrass::ApplyPlantfood(PlantMagnifyingGrass *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setBeamState(this,1);
  return;
}


/* PlantMagnifyingGrass::CancelPlantfood() */

void __thiscall PlantMagnifyingGrass::CancelPlantfood(PlantMagnifyingGrass *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setBeamState(this,2);
  return;
}

