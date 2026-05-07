// Class: HeianSmokeBomb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBomb::StaticClassInit() */

void HeianSmokeBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianSmokeBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_03d26a00,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianSmokeBomb::StaticGetClass() */

long * HeianSmokeBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianSmokeBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSmokeBomb::GetClass() const */

long * HeianSmokeBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianSmokeBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianSmokeBomb::HeianSmokeBomb() */

void __thiscall HeianSmokeBomb::HeianSmokeBomb(HeianSmokeBomb *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06765fa0;
  *(undefined ***)(this + 0x10) = &PTR__HeianSmokeBomb_06766188;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc0));
  ZombieDropData::ZombieDropData((ZombieDropData *)(this + 0xd0));
  this[0xa1] = (HeianSmokeBomb)0x0;
  this[0xa2] = (HeianSmokeBomb)0x0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  return;
}


/* HeianSmokeBomb::StaticNew() */

HeianSmokeBomb * HeianSmokeBomb::StaticNew(void)

{
  HeianSmokeBomb *this;
  
  this = ::operator_new(0xe8);
  HeianSmokeBomb(this);
  return this;
}


/* HeianSmokeBomb::~HeianSmokeBomb() */

void __thiscall HeianSmokeBomb::~HeianSmokeBomb(HeianSmokeBomb *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xb0);
  *(undefined ***)this = &PTR_GetClass_06765fa0;
  *(undefined ***)(this + 0x10) = &PTR__HeianSmokeBomb_06766188;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  if (*(long **)(this + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb8) + 0x18))();
    *(undefined8 *)(this + 0xb8) = 0;
  }
  PVPZoneData::~PVPZoneData((PVPZoneData *)(this + 0xd0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to HeianSmokeBomb::~HeianSmokeBomb() */

void __thiscall HeianSmokeBomb::~HeianSmokeBomb(HeianSmokeBomb *this)

{
  ~HeianSmokeBomb(this + -0x10);
  return;
}


/* HeianSmokeBomb::~HeianSmokeBomb() */

void __thiscall HeianSmokeBomb::~HeianSmokeBomb(HeianSmokeBomb *this)

{
  ~HeianSmokeBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeianSmokeBomb::~HeianSmokeBomb() */

void __thiscall HeianSmokeBomb::~HeianSmokeBomb(HeianSmokeBomb *this)

{
  ~HeianSmokeBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBomb::createDropEffect() */

void __thiscall HeianSmokeBomb::createDropEffect(HeianSmokeBomb *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  PopAnimRig *pPVar2;
  StandaloneEffect *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0xb8) = this_00;
  std::string::string(asStack_58,"POPANIM_EFFECTS_HEIAN_SMOKE_BOMB");
  GetPAMByName(asStack_58);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xb8),true);
  this_01 = *(StandaloneEffect **)(this + 0xb8);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_50,*(float *)(this + 0xc0),*(float *)(this + 0xc4),0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this_01,(SexyVector3 *)aRStack_50,800000);
  StandaloneEffect::SetKeepAlive(*(StandaloneEffect **)(this + 0xb8),false);
  Effect_PopAnim::GetPopAnimRigPtr();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"animation");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimStopped);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<HeianSmokeBomb,void(HeianSmokeBomb::*)(std::string_const&)>(aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBomb::setState(HeianSmokeBomb::SmokeBombState) */

void __thiscall HeianSmokeBomb::setState(HeianSmokeBomb *this,int param_2)

{
  StandaloneEffect *pSVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0xa4) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(pSVar1,true);
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    std::string::string(asStack_10,"idle");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else if (param_2 == 1) {
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    StandaloneEffect::SetVisibility(pSVar1,false);
    createDropEffect(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBomb::Activate(bool, float, int, int, ZombieDropData const&) */

void __thiscall
HeianSmokeBomb::Activate
          (HeianSmokeBomb *this,bool param_1,float param_2,int param_3,int param_4,
          ZombieDropData *param_5)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa2] != (HeianSmokeBomb)param_1) {
    if (param_1) {
      *(float *)(this + 0xac) = param_2;
      this[0xa2] = (HeianSmokeBomb)0x1;
      this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0);
      *(undefined4 *)(this + 0xa8) = 0;
      iVar1 = BoardTransforms::GridToBoardSpaceX(param_4);
      *(float *)(this + 0xc0) = (float)(iVar1 + -5);
      iVar1 = BoardTransforms::GridToBoardSpaceY(param_3);
      *(float *)(this + 0xc4) = (float)(iVar1 + -0x1c);
      ZombieDropData::operator=((ZombieDropData *)(this + 0xd0),param_5);
      *(int *)(this + 200) = param_4;
      *(int *)(this + 0xcc) = param_3;
      Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_18,"POPANIM_EFFECTS_HEIAN_SMOKE_BOMB");
      GetPAMByName(asStack_18);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
      Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      nop();
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Effect_PopAnim::SetCentered(pEVar2,true);
      pSVar4 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(pSVar4,false);
      pSVar4 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar4,false);
      setState(this,0);
    }
    this[0xa2] = (HeianSmokeBomb)param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianSmokeBomb::onUpdate() */

void __thiscall HeianSmokeBomb::onUpdate(HeianSmokeBomb *this)

{
  long lVar1;
  StandaloneEffect *this_00;
  PopAnimRig *this_01;
  float fVar2;
  float fVar3;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0xb8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xb8));
  }
  if (this[0xa2] != (HeianSmokeBomb)0x0) {
    if (*(int *)(this + 0xa4) == 0) {
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar2 = (float)FUN_03d24e84(*(undefined4 *)(lVar1 + 0x3c));
      fVar3 = *(float *)(this + 0xac);
      fVar2 = fVar2 + *(float *)(this + 0xa8);
      *(float *)(this + 0xa8) = fVar2;
      if (fVar3 <= fVar2) {
        setState(this,1);
      }
      else {
        this_00 = (StandaloneEffect *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
        EATextSquish::Vec3::Vec3
                  (aVStack_18,*(float *)(this + 0xc0),(fVar2 / fVar3) * *(float *)(this + 0xc4),0.0)
        ;
        StandaloneEffect::SetBoardSpaceOrigin(this_00,(SexyVector3 *)aVStack_18,800000);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
      Effect_PopAnim::GetPopAnimRigPtr();
      this_01 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar2 = (float)FUN_03d24e80(*(undefined4 *)(lVar1 + 0x38));
      lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
      fVar3 = (float)FUN_03d24e84(*(undefined4 *)(lVar1 + 0x3c));
      PopAnimRig::UpdateAnim(this_01,fVar2,fVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
    }
    else if ((*(int *)(this + 0xa4) == 1) && (this[0xa1] == (HeianSmokeBomb)0x0)) {
      this[0xa1] = (HeianSmokeBomb)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianSmokeBomb::onAnimStopped(std::string const&) */

void __thiscall HeianSmokeBomb::onAnimStopped(HeianSmokeBomb *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"animation");
  if (!bVar1) {
    return;
  }
  MessageRouter::Post<HeianSmokeBomb*,HeianSmokeBomb*>
            ((MessageRouter *)gMessageRouter,Message::SmokeBombExploded,this);
  return;
}

