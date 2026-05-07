// Class: Bomb


/* Bomb::CalcRenderOrder() const */

void __thiscall Bomb::CalcRenderOrder(Bomb *this)

{
  Board::MakeRenderOrder(0x64d48,*(undefined4 *)(this + 0xa4),0);
  return;
}


/* non-virtual thunk to Bomb::CalcRenderOrder() const */

void __thiscall Bomb::CalcRenderOrder(Bomb *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onEnterState_INIT(BombState) */

void Bomb::onEnterState_INIT(long *param_1)

{
  int iVar1;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 200.0 - (float)iVar1 * 0.5;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)((long)param_1 + 0xa4));
  local_14 = (float)iVar1 + 22.0;
  (**(code **)(*param_1 + 0x78))(param_1,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Bomb::getBombStateSerialization() */

void __thiscall Bomb::getBombStateSerialization(Bomb *this)

{
  FUN_03b9d570(*(undefined4 *)(this + 0xc0));
  return;
}


/* Bomb::killPlantsAround() const */

void __thiscall Bomb::killPlantsAround(Bomb *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0xa4);
  if (iVar2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + -1;
  }
  if (iVar3 <= iVar2 + 1) {
    do {
      iVar2 = 0;
      do {
        iVar1 = iVar2 + 1;
        Board::KillPlantNotInvincibleAt(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar3,true);
        iVar2 = iVar1;
      } while (iVar1 != 3);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(this + 0xa4) + 1);
  }
  return;
}


/* Bomb::isInState(BombState) const */

bool __thiscall Bomb::isInState(Bomb *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03b9d570(*(undefined4 *)(this + 0xc0));
  return iVar1 == param_2;
}


/* Bomb::onBombExplosionEnd(std::string const&) */

void __thiscall Bomb::onBombExplosionEnd(Bomb *this,string *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==((string *)&DAT_06acd330,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* Bomb::~Bomb() */

void __thiscall Bomb::~Bomb(Bomb *this)

{
  *(undefined ***)this = &PTR_GetClass_06736a30;
  *(undefined ***)(this + 0x10) = &PTR__Bomb_06736c90;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xc0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Bomb::~Bomb() */

void __thiscall Bomb::~Bomb(Bomb *this)

{
  ~Bomb(this + -0x10);
  return;
}


/* Bomb::~Bomb() */

void __thiscall Bomb::~Bomb(Bomb *this)

{
  ~Bomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Bomb::~Bomb() */

void __thiscall Bomb::~Bomb(Bomb *this)

{
  ~Bomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onDraw(Sexy::Graphics*) */

void __thiscall Bomb::onDraw(Bomb *this,Graphics *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  GraphicsAutoState aGStack_48 [8];
  Color aCStack_40 [12];
  int local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,0xffffffff);
  if ((cVar1 == '\0') && (cVar1 = isInState(this), cVar1 == '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
    uVar5 = *(undefined4 *)(this + 0x1c);
    fVar3 = (float)FUN_03b9d608(*(undefined4 *)(this + 0x18),uVar5,*(undefined4 *)(this + 0x20));
    fVar3 = (float)FUN_03b9d7ac(fVar3 + 20.0);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar3;
    fVar3 = (float)FUN_03b9d7ac(uVar5);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar3;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::SetRenderTransform(pPVar2,aSStack_30);
    fVar3 = (float)FUN_03b9d7ac(DAT_06acd320);
    fVar4 = (float)FUN_03b9d7ac(DAT_06acd324);
    Sexy::Graphics::Translate(param_1,(int)-fVar3,(int)-fVar4);
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    PopAnimRig::Draw(pPVar2,param_1);
    if (*(float *)(this + 0xa8) <= 0.0) {
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
    }
    else {
      Sexy::Color::Color(aCStack_40,1);
      fVar3 = *(float *)(this + 0xa8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      local_34 = (int)(fVar3 * 1275.0);
      Sexy::Graphics::SetColor(param_1,aCStack_40);
      Sexy::Graphics::FillRect(param_1,(TRect *)(gLawnApp + 0x71c));
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Bomb::onEnterState_CLOSETOEXPLOSION(BombState) */

void Bomb::onEnterState_CLOSETOEXPLOSION(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0xb8));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* Bomb::onUpdate() */

void __thiscall Bomb::onUpdate(Bomb *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  StateMachine<BombState>::UpdateState((StateMachine<BombState> *)(this + 0xc0));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb0));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0))
  ;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* Bomb::updateState_EXPLODE() */

void __thiscall Bomb::updateState_EXPLODE(Bomb *this)

{
  float fVar1;
  
  if (0.0 < *(float *)(this + 0xa8)) {
    fVar1 = (float)PVZ_Dt();
    fVar1 = *(float *)(this + 0xa8) - fVar1;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(this + 0xa8) = fVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::registerForEvents() */

void __thiscall Bomb::registerForEvents(Bomb *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFuseLitEnd);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ReadyForFuseLitEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::CreateSpawnEffect() */

void __thiscall Bomb::CreateSpawnEffect(Bomb *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_BOMB_BOMB_SPAWN");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  fVar3 = (float)FUN_03b9d608(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar4 = *(float *)(this + 0x1c);
  fVar3 = (fVar3 + 20.0) - DAT_06acd320;
  FUN_03b9d608(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar3,(fVar4 + 5.0) - DAT_06acd324,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03b9d550(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"Play_UI_Game_Mower_Appear_Single");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onEnterState_SPAWN(BombState) */

void Bomb::onEnterState_SPAWN(RealObject *param_1)

{
  int iVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_BOMB_BOMB_SPAWN");
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  fVar3 = (float)FUN_03b9d608(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x20));
  fVar4 = *(float *)(param_1 + 0x1c);
  fVar3 = (fVar3 + 20.0) - DAT_06acd320;
  FUN_03b9d608(*(undefined4 *)(param_1 + 0x18),fVar4,*(undefined4 *)(param_1 + 0x20));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar3,(fVar4 + 5.0) - DAT_06acd324,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_03b9d550(this + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"Play_UI_Game_Mower_Appear_Single");
  RealObject::PlayPositionalSound(param_1,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::updateState_CLOSETOEXPLOSION() */

void __thiscall Bomb::updateState_CLOSETOEXPLOSION(Bomb *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onBombCloseToExplosionEnd);
    Sexy::Delegate1<std::string_const&>::Delegate1<Bomb,void(Bomb::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,&DAT_06acd428,0,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onEnterState_READY(BombState) */

void Bomb::onEnterState_READY(long param_1)

{
  long *plVar1;
  Fuse *pFVar2;
  code *pcVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
  pcVar3 = *(code **)(*plVar1 + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar3)(plVar1,&DAT_06acd348,0,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  pFVar2 = (Fuse *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb8));
  Fuse::setState(pFVar2,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Bomb::Bomb() */

void __thiscall Bomb::Bomb(Bomb *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined ***)this = &PTR_GetClass_06736a30;
  *(undefined ***)(this + 0x10) = &PTR__Bomb_06736c90;
  *(undefined4 *)(this + 0xa8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  StateMachine<BombState>::StateMachine((StateMachine<BombState> *)(this + 0xc0));
  return;
}


/* Bomb::StaticNew() */

Bomb * Bomb::StaticNew(void)

{
  Bomb *this;
  
  this = ::operator_new(0x160);
  Bomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onDrawShadow(Sexy::Graphics*) */

void __thiscall Bomb::onDrawShadow(Bomb *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,0xffffffff);
  if (cVar1 == '\0') {
    cVar1 = isInState(this);
    if (cVar1 == '\0') {
      fVar4 = *(float *)(this + 0x1c);
      fVar3 = (float)FUN_03b9d608(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar3,fVar4 - 14.0);
      fVar3 = (float)FUN_03b9d7ac(0x3f800000);
      Sexy::SexyVector2::operator*=((SexyVector2 *)&local_38,fVar3);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      FUN_03b9d450(local_38,local_34,auStack_28,auStack_1c);
      pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                  ((CachedResourcePtr<Sexy::Image> *)&DAT_06acd3c0);
      Sexy::Graphics::DrawImageMatrix(param_1,pIVar2,(SexyMatrix3 *)aSStack_30,0.0,0.0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::onEnterState_EXPLODE(BombState) */

void Bomb::onEnterState_EXPLODE(RealObject *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474178(&DAT_06acd340);
  if (lVar1 != 0) {
    RealObject::PlayPositionalSound(param_1,(string *)&DAT_06acd340,0.0);
  }
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onBombExplosionEnd);
  Sexy::Delegate1<std::string_const&>::Delegate1<Bomb,void(Bomb::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,&DAT_06acd330,0,aDStack_38);
  killPlantsAround((Bomb *)param_1);
  MessageRouter::Post<Bomb*,Bomb*>
            ((MessageRouter *)gMessageRouter,Message::BombTriggered,(Bomb *)param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0x3e4ccccd;
  Board::ExplosionShakeBoard(*(Board **)(gLawnApp + 0x9f0),0x14,5,1.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::StaticClassInit() */

void Bomb::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<BombState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<BombState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"Bomb");
      (*pcVar4)(plVar1,asStack_150,FUN_03b9f464,0x160,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<BombState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BombState_INIT");
  StateDefinition<BombState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b9ee08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BombState_SPAWN");
  StateDefinition<BombState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b9ee08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BombState_READY");
  StateDefinition<BombState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b9ee08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BombState_CLOSETOEXPLOSION");
  StateDefinition<BombState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b9ee08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x238);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate0::Delegate0<Bomb,void(Bomb::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate1<BombState>::Delegate1<Bomb,void(Bomb::*)(BombState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BombState_EXPLODE");
  StateDefinition<BombState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03b9ee08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Bomb::StaticGetClass() */

long * Bomb::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ebf80,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Bomb::GetClass() const */

long * Bomb::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ebf80,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::setBombStateSerialization(int) */

void __thiscall Bomb::setBombStateSerialization(Bomb *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<BombState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<BombState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<BombState>::GetStateDefinition
                     ((StateMachineTable<BombState> *)pSVar2,param_1);
  StateDefinition<BombState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<BombState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xc0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::setState(BombState) */

void __thiscall Bomb::setState(Bomb *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<BombState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<BombState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<BombState>::GetStateDefinition
                     ((StateMachineTable<BombState> *)pSVar2,param_2);
  StateDefinition<BombState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<BombState>::SetContext(aSStack_a8,this);
  StateMachine<BombState>::SetState
            ((StateMachine<BombState> *)(this + 0xc0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Bomb::BombInitialize(BombProperties const&, int) */

void __thiscall Bomb::BombInitialize(Bomb *this,BombProperties *param_1,int param_2)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  Fuse *this_00;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xa4) = param_2;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xa8) = 0;
  GetPAMByName((string *)&DAT_06acd328);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  GameObject::Create<Fuse>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (Fuse *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8));
  Fuse::FuseInitialize(this_00,param_1,param_2);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Bomb::onFuseLitEnd() */

void __thiscall Bomb::onFuseLitEnd(Bomb *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xb8));
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb8))
    ;
    fVar3 = (float)FUN_03b9d55c(*(undefined4 *)(lVar2 + 0x154));
    if (0.0 < fVar3) {
      return;
    }
  }
  setState(this,3);
  return;
}


/* Bomb::onBombCloseToExplosionEnd(std::string const&) */

void __thiscall Bomb::onBombCloseToExplosionEnd(Bomb *this,string *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==((string *)&DAT_06acd428,param_1);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,4);
  return;
}


/* Bomb::updateState_SPAWN() */

void __thiscall Bomb::updateState_SPAWN(Bomb *this)

{
  setState(this,2);
  return;
}

