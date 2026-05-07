// Class: AnimateArtifactMowerSwarm


/* AnimateArtifactMowerSwarm::StopFire() */

void __thiscall AnimateArtifactMowerSwarm::StopFire(AnimateArtifactMowerSwarm *this)

{
  (**(code **)(*(long *)this + 0x98))(this,3);
  return;
}


/* AnimateArtifactMowerSwarm::TriggerEndCallback(StandaloneEffect*) */

void AnimateArtifactMowerSwarm::TriggerEndCallback(StandaloneEffect *param_1)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSwarm::StaticClassInit() */

void AnimateArtifactMowerSwarm::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnimateArtifactMowerSwarm");
    (*pcVar2)(plVar1,asStack_10,FUN_04dc85a8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerSwarm::StaticGetClass() */

long * AnimateArtifactMowerSwarm::StaticGetClass(void)

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
  uVar2 = AnimateArtifactMower::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMowerSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerSwarm::GetClass() const */

long * AnimateArtifactMowerSwarm::GetClass(void)

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
  uVar2 = AnimateArtifactMower::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMowerSwarm",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMowerSwarm::~AnimateArtifactMowerSwarm() */

void __thiscall
AnimateArtifactMowerSwarm::~AnimateArtifactMowerSwarm(AnimateArtifactMowerSwarm *this)

{
  *(undefined ***)this = &PTR_GetClass_069c43b0;
  AnimateArtifactMower::~AnimateArtifactMower((AnimateArtifactMower *)this);
  return;
}


/* AnimateArtifactMowerSwarm::~AnimateArtifactMowerSwarm() */

void __thiscall
AnimateArtifactMowerSwarm::~AnimateArtifactMowerSwarm(AnimateArtifactMowerSwarm *this)

{
  ~AnimateArtifactMowerSwarm(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSwarm::SwarmFireProjectile(BoardEntity*, int) */

void AnimateArtifactMowerSwarm::SwarmFireProjectile(BoardEntity *param_1,int param_2)

{
  Effect_PopAnim *pEVar1;
  uint uVar2;
  string asStack_18 [8];
  string asStack_10 [4];
  uint local_c;
  long local_8;
  ulong uVar3;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    BoardEntity::CalcGridPosition();
    if (local_c < 2) {
      uVar3 = 0;
    }
    else {
      uVar2 = 2;
      if (local_c == 2) {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  if (*(int *)(param_1 + 0x40) != (int)uVar3) {
    *(int *)(param_1 + 0x40) = (int)uVar3;
    Sexy::StrFormat("%d",asStack_10,uVar3);
    std::operator+("shoot",asStack_10);
    std::string::~string(asStack_10);
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_18,0);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMowerSwarm::Create() */

void AnimateArtifactMowerSwarm::Create(void)

{
  GameObject::Create<AnimateArtifactMowerSwarm>();
  return;
}


/* AnimateArtifactMowerSwarm::AnimateArtifactMowerSwarm() */

void __thiscall
AnimateArtifactMowerSwarm::AnimateArtifactMowerSwarm(AnimateArtifactMowerSwarm *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  AnimateArtifactMower::AnimateArtifactMower((AnimateArtifactMower *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_069c43b0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SwarmFireProjectile);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BoardEntity*,int,Sexy::CBMemberTranslatorX<AnimateArtifactMowerSwarm,void(AnimateArtifactMowerSwarm::*)(BoardEntity*,int)>>
            ((MessageRouter *)puVar1,Message::NotifySwarmFireProjectile,&local_40);
  return;
}


/* AnimateArtifactMowerSwarm::StaticNew() */

AnimateArtifactMowerSwarm * AnimateArtifactMowerSwarm::StaticNew(void)

{
  AnimateArtifactMowerSwarm *this;
  
  this = ::operator_new(0x48);
  AnimateArtifactMowerSwarm(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMowerSwarm::PlayAnimation(ArtifactAnimState) */

void __thiscall
AnimateArtifactMowerSwarm::PlayAnimation(AnimateArtifactMowerSwarm *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *pSVar3;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (param_2 == 0) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(this + 0x40) = 0xffffffff;
    }
    else if (param_2 == 1) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_60,"prepare");
      std::string::string(asStack_58,"ok");
      PVZ_EOT();
      Effect_PopAnim::PlaySingleAndLoopingAnimation(pEVar2,asStack_60,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    else if (param_2 == 2) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"recharging");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"TriggerEndCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (RtId *)asStack_60,asStack_58);
      StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else if (param_2 == 3) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      *(undefined4 *)(this + 0x40) = 0xffffffff;
    }
    else {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AnimateArtifactMower::PlayAnimation() %d is invalid",(ulong)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

