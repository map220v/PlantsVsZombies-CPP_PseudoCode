// Class: StephaniaSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::StaticClassInit() */

void StephaniaSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"StephaniaSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_040f88ec,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StephaniaSubsystem::StaticGetClass() */

long * StephaniaSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaSubsystem::GetClass() const */

long * StephaniaSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"StephaniaSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StephaniaSubsystem::isTargetGridPierce(int, std::vector<int, std::allocator<int> >) */

bool __thiscall
StephaniaSubsystem::isTargetGridPierce(undefined8 param_1_00,int param_1,undefined8 *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_040f48f0(*param_3,(long)param_1);
  return *piVar1 == 1;
}


/* StephaniaSubsystem::StephaniaSubsystem() */

void __thiscall StephaniaSubsystem::StephaniaSubsystem(StephaniaSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067e1b30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* StephaniaSubsystem::StaticNew() */

StephaniaSubsystem * StephaniaSubsystem::StaticNew(void)

{
  StephaniaSubsystem *this;
  
  this = ::operator_new(0x40);
  StephaniaSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::dealDamageTo(DamageInfo, bool, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
StephaniaSubsystem::dealDamageTo
          (undefined8 param_1,undefined8 param_2,char param_3,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_4);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_4);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar3,uVar4);
    puVar2 = (undefined8 *)FUN_040f4ae4(*(undefined8 *)param_4);
    (**(code **)(*(long *)*puVar2 + 0x110))((long *)*puVar2,param_2);
  }
  else {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_4);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_4);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      (**(code **)(*(long *)*puVar2 + 0x110))((long *)*puVar2,param_2);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::FindHitInfo(StandaloneEffect*) */

void __thiscall StephaniaSubsystem::FindHitInfo(StephaniaSubsystem *this,StandaloneEffect *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 extraout_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  nop();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_040f6f64(uVar2,uVar3,extraout_x0);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aed118;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::FindMinorHitInfo(StandaloneEffect*) */

void __thiscall
StephaniaSubsystem::FindMinorHitInfo(StephaniaSubsystem *this,StandaloneEffect *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 extraout_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  nop();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_040f75b0(uVar2,uVar3,extraout_x0);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aed150;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::createMinorSplitAttack(int, int) */

void StephaniaSubsystem::createMinorSplitAttack(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Effect_PopAnim *this;
  ResourceInfo *pRVar5;
  int in_w2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtMixedPtrBase aRStack_80 [8];
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_60,"POPANIM_EFFECTS_STEPHANIA_LVL5_PROJECTILE");
  GetPAMByName(asStack_60);
  std::string::~string(asStack_60);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
  if (cVar1 != '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar5,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this,true);
    iVar2 = BoardTransforms::GridToBoardSpaceX(param_2);
    iVar3 = BoardTransforms::GridToBoardSpaceY(in_w2);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)iVar2,(float)iVar3 - 35.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_60,-1);
    Effect_PopAnim::SetPopAnimDelegates(this);
    uVar4 = Board::MakeRenderOrder(0x61e68,in_w2,0);
    FUN_040f4884(this + 0x1c,uVar4);
    std::string::string(asStack_78,"minor_split_effect");
    nop();
    Effect_PopAnim::PlaySingleAnimation(this,asStack_78,0);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onMinorSplitEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_78);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::createSplitAttack(int, int, int) */

void StephaniaSubsystem::createSplitAttack(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Effect_PopAnim *this;
  ResourceInfo *pRVar5;
  char *pcVar6;
  int in_w3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_88 [8];
  RtMixedPtrBase aRStack_80 [8];
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w3 == 5) {
    pcVar6 = "POPANIM_EFFECTS_STEPHANIA_LVL5_PROJECTILE";
  }
  else {
    pcVar6 = "POPANIM_EFFECTS_STEPHANIA_PROJECTILE";
  }
  std::string::string(asStack_88,pcVar6);
  nop();
  GetPAMByName(asStack_88);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
  if (cVar1 != '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar5,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this,true);
    iVar2 = BoardTransforms::GridToBoardSpaceX(param_2);
    iVar3 = BoardTransforms::GridToBoardSpaceY(param_3);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)iVar2,(float)iVar3 - 35.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_60,-1);
    Effect_PopAnim::SetPopAnimDelegates(this);
    uVar4 = Board::MakeRenderOrder(0x61e68,param_3,0);
    FUN_040f4884(this + 0x1c,uVar4);
    if (in_w3 == 5) {
      pcVar6 = "lvl5_split_effect";
    }
    else {
      pcVar6 = "split_effect";
    }
    std::string::string(asStack_78,pcVar6);
    nop();
    Effect_PopAnim::PlaySingleAnimation(this,asStack_78,0);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_60,"onSplitEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,aRStack_60);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_78);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  std::string::~string(asStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StephaniaSubsystem::~StephaniaSubsystem() */

void __thiscall StephaniaSubsystem::~StephaniaSubsystem(StephaniaSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067e1b30;
  std::vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>>::~vector
            ((vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>> *)(this + 0x28));
  std::vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>>::~vector
            ((vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* StephaniaSubsystem::~StephaniaSubsystem() */

void __thiscall StephaniaSubsystem::~StephaniaSubsystem(StephaniaSubsystem *this)

{
  ~StephaniaSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::RemoveHitInfo(Sexy::RtWeakPtr<Effect_PopAnim>) */

void __thiscall StephaniaSubsystem::RemoveHitInfo(StephaniaSubsystem *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_28 = FUN_040f9850(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>>::erase
              ((vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>> *)this_00,local_18,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::RemoveMinorHitInfo(Sexy::RtWeakPtr<Effect_PopAnim>) */

void __thiscall
StephaniaSubsystem::RemoveMinorHitInfo(StephaniaSubsystem *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,param_2);
  local_28 = FUN_040f739c(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>>::erase
              ((vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>> *)this_00,
               local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::GenerateMinorSplitHit(int, int, float) */

void __thiscall
StephaniaSubsystem::GenerateMinorSplitHit
          (StephaniaSubsystem *this,int param_1,int param_2,float param_3)

{
  bool bVar1;
  undefined4 in_register_00005004;
  RtWeakPtr aRStack_38 [8];
  Point aPStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  WidgetImg aWStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createMinorSplitAttack((int)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    Sexy::Point::Point(aPStack_30,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_38);
    StephaniaMinorHitInfo::StephaniaMinorHitInfo
              ((StephaniaMinorHitInfo *)CONCAT44(in_register_00005004,param_3),aWStack_20,aPStack_30
               ,aRStack_28);
    std::vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>>::push_back
              ((vector<StephaniaMinorHitInfo,std::allocator<StephaniaMinorHitInfo>> *)(this + 0x28),
               (StephaniaMinorHitInfo *)aWStack_20);
    WidgetImg::~WidgetImg(aWStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::GenerateSplitHit(int, int, bool, int, float) */

void __thiscall
StephaniaSubsystem::GenerateSplitHit
          (StephaniaSubsystem *this,int param_1,int param_2,bool param_3,int param_4,float param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  RtWeakPtr aRStack_88 [8];
  Point aPStack_80 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  uint local_58 [6];
  int local_40;
  undefined4 uStack_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createSplitAttack((int)this,param_1,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_88);
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
    if (param_4 < 3) {
      if (param_4 == 2) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
        local_58[0] = 0;
        do {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_40,(int *)local_58);
          local_58[0] = local_58[0] + 1;
        } while ((int)local_58[0] < 5);
        iVar5 = 0;
        uVar2 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_40);
        uVar3 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_40);
        std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                  (uVar2,uVar3);
        do {
          uVar2 = CONCAT44(uStack_3c,local_40);
          piVar4 = (int *)FUN_040f48f0(uVar2,0);
          if (*piVar4 == iVar5) {
            local_58[0] = 1;
          }
          else {
            piVar4 = (int *)FUN_040f48f0(uVar2,1);
            local_58[0] = (uint)(*piVar4 == iVar5);
          }
          iVar5 = iVar5 + 1;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_70,(int *)local_58);
        } while (iVar5 != 5);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_40);
      }
      else {
        iVar5 = 5;
        do {
          local_40 = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_70,&local_40);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar5 = 5;
      do {
        local_40 = 1;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_70,&local_40);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    Sexy::Point::Point(aPStack_80,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_88);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_58,(vector *)avStack_70);
    StephaniaHitInfo::StephaniaHitInfo
              ((StephaniaHitInfo *)param_5,(StephaniaHitInfo *)&local_40,aPStack_80,aRStack_78,
               param_3,param_4,(vector<int,std::allocator<int>> *)local_58);
    std::vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>>::push_back
              ((vector<StephaniaHitInfo,std::allocator<StephaniaHitInfo>> *)(this + 0x10),
               (StephaniaHitInfo *)&local_40);
    StephaniaHitInfo::~StephaniaHitInfo((StephaniaHitInfo *)&local_40);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_70);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&, int,
   int) */

void __thiscall
StephaniaSubsystem::findTargets(StephaniaSubsystem *this,vector *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  BoardEntity **ppBVar4;
  Zombie *this_00;
  long *extraout_x0;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar3,param_2,param_3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ppBVar4 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = RealObject::IsOnOpposingTeam(*ppBVar4,1);
    if (cVar2 != '\0') {
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*ppBVar4);
      if (this_00 == (Zombie *)0x0) {
        nop();
        if (((extraout_x0 != (long *)0x0) &&
            (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0'))
        goto LAB_040fb324;
      }
      else {
        uVar3 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(this_00,uVar3);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0')) &&
           (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) {
LAB_040fb324:
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar4);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::DoMinorSplashDamage(StephaniaMinorHitInfo const&) */

void __thiscall
StephaniaSubsystem::DoMinorSplashDamage(StephaniaSubsystem *this,StephaniaMinorHitInfo *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  string *psVar5;
  long extraout_x0;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_f8 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [8];
  float local_c0;
  string asStack_68 [96];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  uVar8 = 0;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"stephania");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_118);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  DamageInfo::DamageInfo(aDStack_c8);
  local_c0 = *(float *)(param_1 + 0x10) * *(float *)(extraout_x0 + 700);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_110);
  Sexy::Point::Point((Point *)asStack_68,iVar2,iVar1 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar2 + -1,iVar1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar2,iVar1 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  while( true ) {
    uVar3 = local_110;
    uVar6 = FUN_040f48f8(local_110,local_108);
    if (uVar6 <= uVar8) break;
    piVar7 = (int *)FUN_040f4904(uVar3,uVar8);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_f8);
    findTargets(this,(vector *)avStack_f8,*piVar7,piVar7[1]);
    cVar4 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_f8);
    if (cVar4 == '\0') {
      DamageInfo::DamageInfo((DamageInfo *)asStack_68,aDStack_c8);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                (avStack_e0,(vector *)avStack_f8);
      dealDamageTo(this,asStack_68,1,avStack_e0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_e0);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
    uVar8 = uVar8 + 1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_f8);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110);
  DamageInfo::~DamageInfo(aDStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::onMinorSplitEffectFinishedCallback(StandaloneEffect*) */

void __thiscall
StephaniaSubsystem::onMinorSplitEffectFinishedCallback
          (StephaniaSubsystem *this,StandaloneEffect *param_1)

{
  bool bVar1;
  StephaniaMinorHitInfo *pSVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  StephaniaMinorHitInfo aSStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (StephaniaMinorHitInfo *)FindMinorHitInfo(this,param_1);
  StephaniaMinorHitInfo::StephaniaMinorHitInfo(aSStack_20,pSVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    DoMinorSplashDamage(this,aSStack_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_18);
    RemoveMinorHitInfo(this,aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  WidgetImg::~WidgetImg((WidgetImg *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::DoSplashDamage(StephaniaHitInfo const&) */

void __thiscall
StephaniaSubsystem::DoSplashDamage(StephaniaSubsystem *this,StephaniaHitInfo *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  string *psVar7;
  long extraout_x0;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_118 [8];
  undefined8 local_110;
  undefined8 local_108;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_f8 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [8];
  float local_c0;
  string asStack_68 [96];
  long local_8;
  
  iVar2 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 4);
  uVar11 = 0xffffffff;
  local_8 = ___stack_chk_guard;
  iVar1 = iVar2 + -1;
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  uVar10 = 0;
  std::string::string(asStack_68,"stephania");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_118);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  DamageInfo::DamageInfo(aDStack_c8);
  local_c0 = *(float *)(param_1 + 0x30) * *(float *)(extraout_x0 + 0x2b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_110);
  Sexy::Point::Point((Point *)asStack_68,iVar2,iVar3 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar1,iVar3 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar1,iVar3);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar1,iVar3 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  Sexy::Point::Point((Point *)asStack_68,iVar2,iVar3 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110,(Point *)asStack_68);
  while( true ) {
    uVar4 = local_110;
    uVar8 = FUN_040f48f8(local_110,local_108);
    if (uVar8 <= uVar10) break;
    piVar9 = (int *)FUN_040f4904(uVar4,uVar10);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_f8);
    findTargets(this,(vector *)avStack_f8,*piVar9,piVar9[1]);
    cVar5 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_f8);
    if (cVar5 == '\0') {
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)asStack_68,(vector *)(param_1 + 0x18));
      uVar6 = isTargetGridPierce(this,uVar10 & 0xffffffff,asStack_68);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_68);
      DamageInfo::DamageInfo((DamageInfo *)asStack_68,aDStack_c8);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                (avStack_e0,(vector *)avStack_f8);
      dealDamageTo(this,asStack_68,uVar6,avStack_e0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_e0);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
      if ((*(int *)(param_1 + 0x14) == 5) && (uVar11 < 3)) {
        GenerateMinorSplitHit(this,*piVar9,piVar9[1],*(float *)(param_1 + 0x30));
      }
    }
    uVar10 = uVar10 + 1;
    uVar11 = uVar11 + 1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_f8);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_110);
  DamageInfo::~DamageInfo(aDStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StephaniaSubsystem::onSplitEffectFinishedCallback(StandaloneEffect*) */

void __thiscall
StephaniaSubsystem::onSplitEffectFinishedCallback
          (StephaniaSubsystem *this,StandaloneEffect *param_1)

{
  bool bVar1;
  StephaniaHitInfo *pSVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  StephaniaHitInfo aSStack_40 [8];
  RtWeakPtr aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (StephaniaHitInfo *)FindHitInfo(this,param_1);
  StephaniaHitInfo::StephaniaHitInfo(aSStack_40,pSVar2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if (bVar1) {
    DoSplashDamage(this,aSStack_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_38);
    RemoveHitInfo(this,aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  StephaniaHitInfo::~StephaniaHitInfo(aSStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

