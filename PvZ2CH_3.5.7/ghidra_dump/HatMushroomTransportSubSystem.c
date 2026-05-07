// Class: HatMushroomTransportSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::StaticClassInit() */

void HatMushroomTransportSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HatMushroomTransportSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03b21a9c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomTransportSubSystem::StaticGetClass() */

long * HatMushroomTransportSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomTransportSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HatMushroomTransportSubSystem::GetClass() const */

long * HatMushroomTransportSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"HatMushroomTransportSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::getIteratorOfZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
HatMushroomTransportSubSystem::getIteratorOfZombie
          (HatMushroomTransportSubSystem *this,RtWeakPtrBase *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_01;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator<((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    this_01 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_01,param_2);
    uVar3 = local_18;
    if (cVar1 != '\0') goto LAB_03b1dcfc;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
LAB_03b1dcfc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* HatMushroomTransportSubSystem::HatMushroomTransportSubSystem() */

void __thiscall
HatMushroomTransportSubSystem::HatMushroomTransportSubSystem(HatMushroomTransportSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0672de20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* HatMushroomTransportSubSystem::StaticNew() */

HatMushroomTransportSubSystem * HatMushroomTransportSubSystem::StaticNew(void)

{
  HatMushroomTransportSubSystem *this;
  
  this = ::operator_new(0x58);
  HatMushroomTransportSubSystem(this);
  return this;
}


/* HatMushroomTransportSubSystem::registerForEvents() */

void __thiscall
HatMushroomTransportSubSystem::registerForEvents(HatMushroomTransportSubSystem *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<HatMushroomTransportSubSystem,void(HatMushroomTransportSubSystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieBleedingOut);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<HatMushroomTransportSubSystem,void(HatMushroomTransportSubSystem::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieBleedingOut,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::placeZombieInNewPosition(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
HatMushroomTransportSubSystem::placeZombieInNewPosition
          (HatMushroomTransportSubSystem *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined *this_00;
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  Zombie *pZVar6;
  undefined8 local_28;
  float local_20;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_01);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceY(local_1c);
  local_18._4_4_ = (float)iVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)param_2);
  local_28 = getIteratorOfZombie(this,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  local_18._0_4_ = (float)local_18 + *(float *)(lVar3 + 0x14);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  local_20 = (float)iVar1;
  pfVar4 = eastl::min_alt<float>((float *)&local_18,&local_20);
  local_18._0_4_ = *pfVar4;
  lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  if (*(float *)(lVar3 + 0x14) == 0.0) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
    local_18._0_4_ = (float)iVar1;
  }
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar5 + 0x78))(plVar5,&local_18);
  this_00 = gMessageRouter;
  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)this_00,Message::ZombieReaddedToBoard,pZVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HatMushroomTransportSubSystem::~HatMushroomTransportSubSystem() */

void __thiscall
HatMushroomTransportSubSystem::~HatMushroomTransportSubSystem(HatMushroomTransportSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0672de20;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<TransportingZombie,std::allocator<TransportingZombie>>::~vector
            ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)(this + 0x28));
  std::vector<TransportingZombie,std::allocator<TransportingZombie>>::~vector
            ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* HatMushroomTransportSubSystem::~HatMushroomTransportSubSystem() */

void __thiscall
HatMushroomTransportSubSystem::~HatMushroomTransportSubSystem(HatMushroomTransportSubSystem *this)

{
  ~HatMushroomTransportSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::createStuckEffect(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
HatMushroomTransportSubSystem::createStuckEffect
          (float param_1,undefined8 param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  char *__s;
  float fVar7;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_1 <= 0.0) {
    __s = "POPANIM_EFFECTS_HATMUSHROOM_TRANSPORT_SPECIAL";
  }
  else {
    __s = "POPANIM_EFFECTS_HATMUSHROOM_TRANSPORT_NORMAL";
  }
  std::string::string(asStack_28,__s);
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,fVar7,*(float *)(lVar5 + 4),120.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,0x64960);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_03b1b14c(this + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"appear");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"idle");
  AnimationSequence::AddLoopingAnimation(param_1 + 0.3,aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::stuckZombie(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
HatMushroomTransportSubSystem::stuckZombie
          (HatMushroomTransportSubSystem *param_1,HatMushroomTransportSubSystem *this,
          RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  createStuckEffect(param_1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::createWarpingEffectAt(Sexy::RtWeakPtr<Zombie>, bool, bool) */

void __thiscall
HatMushroomTransportSubSystem::createWarpingEffectAt
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,char param_3,char param_4)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  char *__s;
  float fVar7;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_4 == '\0') {
    __s = "POPANIM_EFFECTS_HATMUSHROOM_TRANSPORT_SPECIAL";
  }
  else {
    __s = "POPANIM_EFFECTS_HATMUSHROOM_TRANSPORT_NORMAL";
  }
  std::string::string(asStack_28,__s);
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,fVar7,*(float *)(lVar5 + 4),120.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,0x64960);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_03b1b14c(this + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this,true);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  if (param_3 == '\0') {
    std::string::string(asStack_28,"down");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    plVar6 = (long *)UIWidget::GetAtlasImage((UIWidget *)this);
    (**(code **)(*plVar6 + 0x80))(0x40088889);
  }
  else {
    std::string::string(asStack_28,"up");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    plVar6 = (long *)UIWidget::GetAtlasImage((UIWidget *)this);
    (**(code **)(*plVar6 + 0x80))(0x3faaaaab);
  }
  Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::warpZombieOut(Sexy::RtWeakPtr<Zombie>, bool) */

void __thiscall
HatMushroomTransportSubSystem::warpZombieOut
          (HatMushroomTransportSubSystem *this,RtMixedPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  Zombie *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (Zombie *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::StartWarpOut(this_00,2.0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    createWarpingEffectAt(this,aRStack_10,1,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::reapearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
HatMushroomTransportSubSystem::reapearZombie
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  Zombie *pZVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  long *plVar5;
  string *psVar6;
  RtObject *this;
  ZombieFutureProtector *this_00;
  string asStack_38 [8];
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtName aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar2,false);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_38,"artifact_time");
  Sexy::ToWString(asStack_38);
  Sexy::RtName::RtName(aRStack_20,awStack_30);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar3,0x86,aRStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtName::~RtName(aRStack_20);
  FUN_05476c50(awStack_30);
  std::string::~string(asStack_38);
  nop();
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_20,
             (vector *)(pRVar4 + 0x158));
  Zombie::EndConditions(pZVar2,aRStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)aRStack_20);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar5 + 0x80))(plVar5,0);
  pZVar2 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  psVar6 = (string *)Zombie::GetTypeName(pZVar2);
  bVar1 = std::operator==(psVar6,"future_protector");
  if (bVar1) {
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    this_00 = Sexy::RtObject::Cast<ZombieFutureProtector>(this);
    ZombieFutureProtector::deactivateShield(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::warpZombieIn(Sexy::RtWeakPtr<Zombie>, bool) */

void __thiscall
HatMushroomTransportSubSystem::warpZombieIn
          (HatMushroomTransportSubSystem *this,RtMixedPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  Zombie *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    reapearZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    placeZombieInNewPosition(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::StartWarpIn(pZVar2,2.0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    createWarpingEffectAt(this,aRStack_10,0,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::transportZombieToRightmostGrid(Sexy::RtWeakPtr<Zombie>, float,
   float) */

void __thiscall
HatMushroomTransportSubSystem::transportZombieToRightmostGrid
          (float param_1,undefined4 param_2,HatMushroomTransportSubSystem *this,
          RtWeakPtrBase *param_4)

{
  bool bVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_4);
  local_30 = getIteratorOfZombie(this,aRStack_38);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (bVar1) {
    TransportingZombie::TransportingZombie((TransportingZombie *)&local_28);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&local_28,(RtWeakPtr *)param_4);
    local_20 = PVZ_T();
    local_10 = (param_1 + 1.9) / (param_1 + 5.9);
    local_c = (param_1 + 3.9) / (param_1 + 5.9);
    local_18 = param_1;
    local_14 = param_2;
    std::vector<TransportingZombie,std::allocator<TransportingZombie>>::push_back
              ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)(this + 0x28),
               (TransportingZombie *)&local_28);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::onZombieDestroyed(Zombie*) */

void HatMushroomTransportSubSystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::onZombieBleedingOut(Zombie*, DamageInfo const*) */

void HatMushroomTransportSubSystem::onZombieBleedingOut(Zombie *param_1,DamageInfo *param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (param_1 + 0x40),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HatMushroomTransportSubSystem::Update() */

void __thiscall HatMushroomTransportSubSystem::Update(HatMushroomTransportSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  undefined8 uVar5;
  RtWeakPtr *this_02;
  ResourceInfo *this_03;
  float *pfVar6;
  Zombie *pZVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x40));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar4);
      uVar8 = *(undefined8 *)(this + 0x10);
      iVar3 = FUN_03b1b1d4(uVar8,*(undefined8 *)(this + 0x18));
      iVar3 = iVar3 + -1;
      lVar9 = (long)iVar3;
      if (-1 < iVar3) {
        while( true ) {
          pRVar4 = (RtWeakPtrBase *)FUN_03b1b1fc(uVar8,lVar9);
          cVar2 = Sexy::RtWeakPtrBase::operator==(pRVar4,(RtWeakPtrBase *)aRStack_40);
          if (cVar2 != '\0') {
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(this_00);
            local_20 = __gnu_cxx::
                       __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                       ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                    *)&local_28,lVar9);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)local_18,(__normal_iterator *)&local_20);
            std::vector<TransportingZombie,std::allocator<TransportingZombie>>::erase
                      ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)this_00,
                       local_18[0]);
          }
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          lVar9 = lVar9 + -1;
          uVar8 = *(undefined8 *)(this + 0x10);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_18,(__normal_iterator *)&local_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  std::vector<TransportingZombie,std::allocator<TransportingZombie>>::
  insert<__gnu_cxx::__normal_iterator<TransportingZombie*,std::vector<TransportingZombie,std::allocator<TransportingZombie>>>,void>
            ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)this_00,local_18[0],
             uVar8,uVar5);
  std::vector<TransportingZombie,std::allocator<TransportingZombie>>::clear
            ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)this_01);
  uVar8 = *(undefined8 *)(this + 0x10);
  iVar3 = FUN_03b1b1d4(uVar8,*(undefined8 *)(this + 0x18));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    lVar9 = (long)iVar3;
    while( true ) {
      this_02 = (RtWeakPtr *)FUN_03b1b1fc(uVar8,lVar9);
      this_03 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
      fVar11 = (float)PVZ_T();
      fVar12 = *(float *)(this_02 + 0x18);
      fVar11 = (fVar11 - *(float *)(this_02 + 8)) / (*(float *)(this_02 + 0x10) + 5.9);
      if (fVar11 < fVar12) {
        if (this_02[0xe] == (RtWeakPtr)0x0) {
          this_02[0xe] = (RtWeakPtr)0x1;
          uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02)
          ;
          pZVar7 = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar7,0,uVar8,0x18,1);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_02);
                    /* WARNING: Load size is inaccurate */
          stuckZombie(*(HatMushroomTransportSubSystem **)(this_02 + 0x10),this,
                      (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       *)local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18)
          ;
        }
      }
      else {
        fVar13 = *(float *)(this_02 + 0x1c);
        if (fVar11 < fVar13) {
          fVar11 = (fVar11 - fVar12) / (fVar13 - fVar12);
          fVar11 = (float)FUN_03b1b37c(0x42c00000,fVar11 * fVar11);
          pcVar10 = *(code **)(*(long *)this_03 + 0x78);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_03);
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar6,pfVar6[1],fVar11);
          (*pcVar10)(this_03,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)local_18);
          if (this_02[0xc] == (RtWeakPtr)0x0) {
            uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
            cVar2 = Zombie::HasCondition(uVar8,0x18);
            if (cVar2 != '\0') {
              pZVar7 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
              Zombie::EndCondition(pZVar7,0x18);
            }
            this_02[0xc] = (RtWeakPtr)0x1;
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_02);
            warpZombieOut(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)local_18,0.0 < *(float *)(this_02 + 0x10));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
          }
        }
        else if (fVar11 < 1.0) {
          fVar11 = 1.0 - (fVar11 - fVar13) / (1.0 - fVar13);
          fVar11 = (float)FUN_03b1b37c(0x41c00000,fVar11 * fVar11);
          pcVar10 = *(code **)(*(long *)this_03 + 0x78);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_03);
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar6,pfVar6[1],fVar11);
          (*pcVar10)(this_03,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)local_18);
          if (this_02[0xd] == (RtWeakPtr)0x0) {
            this_02[0xd] = (RtWeakPtr)0x1;
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)this_02);
            warpZombieIn(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                               *)local_18,0.0 < *(float *)(this_02 + 0x10));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
          }
        }
        else {
          pcVar10 = *(code **)(*(long *)this_03 + 0x78);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_03);
          EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar6,pfVar6[1],0.0);
          (*pcVar10)(this_03,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)local_18);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(this_00);
          local_20 = __gnu_cxx::
                     __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                     ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                  *)&local_28,lVar9);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_18,(__normal_iterator *)&local_20);
          std::vector<TransportingZombie,std::allocator<TransportingZombie>>::erase
                    ((vector<TransportingZombie,std::allocator<TransportingZombie>> *)this_00,
                     local_18[0]);
        }
      }
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      lVar9 = lVar9 + -1;
      uVar8 = *(undefined8 *)(this + 0x10);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

