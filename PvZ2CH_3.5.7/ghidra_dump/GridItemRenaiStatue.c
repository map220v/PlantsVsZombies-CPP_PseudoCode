// Class: GridItemRenaiStatue


/* GridItemRenaiStatue::GetCantPlantReason() const */

undefined8 GridItemRenaiStatue::GetCantPlantReason(void)

{
  return 99;
}


/* GridItemRenaiStatue::CanBeCarved() */

undefined8 GridItemRenaiStatue::CanBeCarved(void)

{
  return 0;
}


/* GridItemRenaiStatue::IsDamageable() const */

bool __thiscall GridItemRenaiStatue::IsDamageable(GridItemRenaiStatue *this)

{
  return *(int *)(this + 0x1c8) != 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::GetRockEffectName() */

void __thiscall GridItemRenaiStatue::GetRockEffectName(GridItemRenaiStatue *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_STATUE_ROCK_EFFECT");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridItemRenaiStatue::onZombieSpawned(Zombie*) */

void GridItemRenaiStatue::onZombieSpawned(Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = RiftUtils::IsPlayingRiftLevel();
  if ((cVar1 == '\0') &&
     (iVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0)),
     *(int *)(param_1 + 0x1c4) <= iVar2)) {
    (**(code **)(*(long *)param_1 + 0x2d0))(param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::StaticClassInit() */

void GridItemRenaiStatue::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiStatue");
    (*pcVar2)(plVar1,asStack_10,FUN_03d12560,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::StaticGetClass() */

long * GridItemRenaiStatue::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatue::GetClass() const */

long * GridItemRenaiStatue::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatue::IsCarving() */

void __thiscall GridItemRenaiStatue::IsCarving(GridItemRenaiStatue *this)

{
  FUN_03d0fa44(*(undefined4 *)(this + 0x1c8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::onUpdate() */

void __thiscall GridItemRenaiStatue::onUpdate(GridItemRenaiStatue *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onUpdate((GridItemBreakableTarget *)this);
  if (*(int *)(this + 0x1c8) == 2) {
    pcVar2 = *(code **)(*(long *)this + 0x1f0);
    GridItem::GetGridLocation();
    (*pcVar2)(this,&local_18,1);
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = *puVar1;
    local_10 = *(undefined4 *)(puVar1 + 1);
    fVar3 = (float)Sexy::Rand(*(float *)(this + 0x1e0) + *(float *)(this + 0x1e0));
    fVar4 = (float)Sexy::Rand(*(float *)(this + 0x1e0) + *(float *)(this + 0x1e0));
    local_18 = CONCAT44(fVar4 + local_18._4_4_,fVar3 + (float)local_18);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,fVar3,fVar4);
    FUN_03d0fa24(local_20,local_1c,this + 0x1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::~GridItemRenaiStatue() */

void __thiscall GridItemRenaiStatue::~GridItemRenaiStatue(GridItemRenaiStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_06764120;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatue_06764448;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatue::~GridItemRenaiStatue() */

void __thiscall GridItemRenaiStatue::~GridItemRenaiStatue(GridItemRenaiStatue *this)

{
  ~GridItemRenaiStatue(this + -0x10);
  return;
}


/* GridItemRenaiStatue::~GridItemRenaiStatue() */

void __thiscall GridItemRenaiStatue::~GridItemRenaiStatue(GridItemRenaiStatue *this)

{
  ~GridItemRenaiStatue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatue::~GridItemRenaiStatue() */

void __thiscall GridItemRenaiStatue::~GridItemRenaiStatue(GridItemRenaiStatue *this)

{
  ~GridItemRenaiStatue(this + -0x10);
  return;
}


/* GridItemRenaiStatue::GridItemRenaiStatue() */

void __thiscall GridItemRenaiStatue::GridItemRenaiStatue(GridItemRenaiStatue *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06764120;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatue_06764448;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  return;
}


/* GridItemRenaiStatue::StaticNew() */

GridItemRenaiStatue * GridItemRenaiStatue::StaticNew(void)

{
  GridItemRenaiStatue *this;
  
  this = ::operator_new(0x1e8);
  GridItemRenaiStatue(this);
  return this;
}


/* GridItemRenaiStatue::onDestroy() */

void __thiscall GridItemRenaiStatue::onDestroy(GridItemRenaiStatue *this)

{
  RtMixedPtrBase *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  long *plVar2;
  
  GridItem::onDestroy((GridItem *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x1d0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0x1d8);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::onDustEffectDone(std::string const&) */

void __thiscall GridItemRenaiStatue::onDustEffectDone(GridItemRenaiStatue *this,string *param_1)

{
  bool bVar1;
  StandaloneEffect *this_00;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"start");
  if (bVar1) {
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
    std::string::string(asStack_10,"round");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"end");
    if (bVar1) {
      this_00 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
      StandaloneEffect::SetVisibility(this_00,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::DisableEffects() */

void __thiscall GridItemRenaiStatue::DisableEffects(GridItemRenaiStatue *this)

{
  StandaloneEffect *this_00;
  UIWidget *this_01;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  StandaloneEffect::SetVisibility(this_00,false);
  this_01 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  std::string::string(asStack_58,"end");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDustEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&)>
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
/* GridItemRenaiStatue::PlayDustEffect() */

void __thiscall GridItemRenaiStatue::PlayDustEffect(GridItemRenaiStatue *this)

{
  StandaloneEffect *this_00;
  UIWidget *this_01;
  PopAnimRig *pPVar1;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  StandaloneEffect::SetVisibility(this_00,true);
  this_01 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  pPVar1 = (PopAnimRig *)UIWidget::GetAtlasImage(this_01);
  std::string::string(asStack_58,"start");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDustEffectDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&)>
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
/* GridItemRenaiStatue::onPostLoad() */

void __thiscall GridItemRenaiStatue::onPostLoad(GridItemRenaiStatue *this)

{
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x310);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::CreateMinorEffects() */

void __thiscall GridItemRenaiStatue::CreateMinorEffects(GridItemRenaiStatue *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  StandaloneEffect *pSVar3;
  long lVar4;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d0);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1d8);
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -10),0.0);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*(long *)this + 0x2f8))(asStack_28,this);
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)aPStack_18,-1);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar1,true);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_03d0fa0c(lVar4 + 0x1c,0x61a81);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar3,false);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(pSVar3,true);
  local_14 = local_14 - 45.0;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  std::string::string(asStack_28,"POPANIM_EFFECTS_STATUE_DUST_EFFECT");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar3,(SexyVector3 *)aPStack_18,-1);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_PopAnim::SetCentered(pEVar1,true);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  FUN_03d0fa0c(lVar4 + 0x1c,0xc3501);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetVisibility(pSVar3,false);
  pSVar3 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetKeepAlive(pSVar3,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::registerForEvents() */

void __thiscall GridItemRenaiStatue::registerForEvents(GridItemRenaiStatue *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::PlayRockEffect() */

void __thiscall GridItemRenaiStatue::PlayRockEffect(GridItemRenaiStatue *this)

{
  bool bVar1;
  StandaloneEffect *this_00;
  GridItemRenaiStatueProps *pGVar2;
  Effect_PopAnim *pEVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0));
  StandaloneEffect::SetVisibility(this_00,true);
  pGVar2 = GridItem::GetProps<GridItemRenaiStatueProps>();
  bVar1 = std::operator==((string *)(pGVar2 + 0x138),"renai_carver");
  if (bVar1) {
    __s = "rubble0";
  }
  else {
    __s = "rubble1";
  }
  std::string::string(asStack_10,__s);
  nop();
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d0))
  ;
  Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_10,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::GetCarveTime() */

undefined4 GridItemRenaiStatue::GetCarveTime(void)

{
  GridItemRenaiStatueProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemRenaiStatueProps>();
  return *(undefined4 *)(pGVar1 + 0x140);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::setState(StatueState) */

void __thiscall GridItemRenaiStatue::setState(GridItemRenaiStatue *this,int param_2)

{
  undefined4 uVar1;
  long *extraout_x0;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x1c8) != param_2) || (param_2 == 2)) {
    *(int *)(this + 0x1c8) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    if (param_2 == 1) {
      uVar1 = *(undefined4 *)(this + 0x1cc);
      pcVar2 = *(code **)(*extraout_x0 + 0x118);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      (*pcVar2)(extraout_x0,uVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      (**(code **)(*(long *)this + 0x300))(this);
      PlayDustEffect(this);
    }
    else if (param_2 == 2) {
      uVar1 = *(undefined4 *)(this + 0x1cc);
      pcVar2 = *(code **)(*extraout_x0 + 0x110);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimEnded");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      (*pcVar2)(extraout_x0,uVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      (**(code **)(*(long *)this + 0x300))(this);
    }
    else if (param_2 == 0) {
      DisableEffects(this);
    }
    (**(code **)(*(long *)this + 0x2f0))(this,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::onGridItemInitialize() */

void __thiscall GridItemRenaiStatue::onGridItemInitialize(GridItemRenaiStatue *this)

{
  GridItemRenaiStatueProps *pGVar1;
  TimeChallengeEndLevelUI *this_00;
  long *extraout_x0;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  pGVar1 = GridItem::GetProps<GridItemRenaiStatueProps>();
  uVar2 = *(undefined4 *)(pGVar1 + 0x10);
  pGVar1 = GridItem::GetProps<GridItemRenaiStatueProps>();
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(pGVar1 + 0x144);
  FUN_03d0fa14(uVar2,this + 300);
  FUN_03d0fa1c(uVar2,this + 0x128);
  FUN_03d0fb18(this + 0x24);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x310);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemRenaiStatue,void(GridItemRenaiStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  FUN_03d0fa38(this + 0x1cc,0);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  nop();
  (**(code **)(*extraout_x0 + 0x120))();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  CreateMinorEffects(this);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::TryRevive() */

void __thiscall GridItemRenaiStatue::TryRevive(GridItemRenaiStatue *this)

{
  char cVar1;
  
  cVar1 = FUN_03d0fa44(*(undefined4 *)(this + 0x1c8),2);
  if (cVar1 != '\0') {
    return;
  }
  setState(this,2);
  return;
}


/* GridItemRenaiStatue::TryCarve() */

void __thiscall GridItemRenaiStatue::TryCarve(GridItemRenaiStatue *this)

{
  setState(this,1);
  return;
}


/* GridItemRenaiStatue::TryRecover() */

void __thiscall GridItemRenaiStatue::TryRecover(GridItemRenaiStatue *this)

{
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemRenaiStatue::GatherPlantingRestrictions
          (GridItemRenaiStatue *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatue::SpawnZombies() */

void __thiscall GridItemRenaiStatue::SpawnZombies(GridItemRenaiStatue *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  ZombieType *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  SexyVector3 *pSVar7;
  long *plVar8;
  code *pcVar9;
  Board *this_01;
  RtMixedPtrBase aRStack_78 [8];
  int local_70;
  int local_6c;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  GridItem::GetProps<GridItemRenaiStatueProps>();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if (cVar1 != '\0') {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this_00 = (ZombieType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    ZombieType::AddInGameResourceRequirements(this_00,(set *)amStack_38);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar6 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>(avStack_50,uVar5,uVar6,aVStack_60);
    Board::LoadResourceGroupsForGameplay(this_01,(vector *)avStack_50);
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    EATextSquish::Vec3::Vec3(aVStack_60,0.0,0.0,0.0);
    BoardEntity::CalcGridPosition();
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(local_70);
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_6c);
    EATextSquish::Vec3::Vec3((Vec3 *)avStack_50,(float)iVar2,(float)iVar3,0.0);
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_78);
    pSVar7 = (SexyVector3 *)(*pcVar9)(plVar8,aRStack_68,0xfffffffb,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    BoardEntity::PlaceOnBoard(pSVar7);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  (**(code **)(*(long *)this + 0x230))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatue::onAnimEnded(std::string const&) */

void GridItemRenaiStatue::onAnimEnded(string *param_1)

{
  if (*(int *)(param_1 + 0x1c8) == 2) {
    FUN_03d0fa38(param_1 + 0x1cc,*(int *)(param_1 + 0x1cc) + 1);
    if (*(int *)(param_1 + 0x1cc) != 3) {
      setState((GridItemRenaiStatue *)param_1,2);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c8) != 1) {
      return;
    }
    FUN_03d0fa38(param_1 + 0x1cc,*(int *)(param_1 + 0x1cc) + 1);
    if (*(int *)(param_1 + 0x1cc) != 3) {
      setState((GridItemRenaiStatue *)param_1,0);
      MessageRouter::Post<GridItemRenaiStatue*,GridItemRenaiStatue*>
                ((MessageRouter *)gMessageRouter,Message::NotifyStatueFinishCarve,
                 (GridItemRenaiStatue *)param_1);
      return;
    }
  }
  SpawnZombies((GridItemRenaiStatue *)param_1);
  return;
}

