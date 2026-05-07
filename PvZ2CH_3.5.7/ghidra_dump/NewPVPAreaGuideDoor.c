// Class: NewPVPAreaGuideDoor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoor::StaticClassInit() */

void NewPVPAreaGuideDoor::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaGuideDoor");
    (*pcVar2)(plVar1,asStack_10,FUN_034c1774,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaGuideDoor::StaticGetClass() */

long * NewPVPAreaGuideDoor::StaticGetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaGuideDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaGuideDoor::GetClass() const */

long * NewPVPAreaGuideDoor::GetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaGuideDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaGuideDoor::~NewPVPAreaGuideDoor() */

void __thiscall NewPVPAreaGuideDoor::~NewPVPAreaGuideDoor(NewPVPAreaGuideDoor *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d2e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NewPVPArea::~NewPVPArea((NewPVPArea *)this);
  return;
}


/* NewPVPAreaGuideDoor::~NewPVPAreaGuideDoor() */

void __thiscall NewPVPAreaGuideDoor::~NewPVPAreaGuideDoor(NewPVPAreaGuideDoor *this)

{
  ~NewPVPAreaGuideDoor(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPAreaGuideDoor::NewPVPAreaGuideDoor() */

void __thiscall NewPVPAreaGuideDoor::NewPVPAreaGuideDoor(NewPVPAreaGuideDoor *this)

{
  NewPVPArea::NewPVPArea((NewPVPArea *)this);
  *(undefined ***)this = &PTR_GetClass_0664d2e0;
  return;
}


/* NewPVPAreaGuideDoor::StaticNew() */

NewPVPAreaGuideDoor * NewPVPAreaGuideDoor::StaticNew(void)

{
  NewPVPAreaGuideDoor *this;
  
  this = ::operator_new(0x20);
  NewPVPAreaGuideDoor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoor::locateEffect(Sexy::Point, bool) */

void __thiscall NewPVPAreaGuideDoor::locateEffect(undefined8 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  NewPVPGuideStartDoor *this;
  ResourceInfo *pRVar4;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*param_2);
  iVar2 = BoardTransforms::GridToBoardSpaceX(param_2[1]);
  if (param_3 == '\0') {
    this = (NewPVPGuideStartDoor *)Board::AddEffect<GuideEndDoor>(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    this = Board::AddEffect<NewPVPGuideStartDoor>(*(Board **)(gLawnApp + 0x9f0));
  }
  std::string::string(asStack_28,"POPANIM_EFFECTS_GROUND_TUNNEL");
  GetPAMByName(asStack_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_20,(float)iVar1 + 10.0,(float)(param_2[1] * 6) + -30.0 + (float)iVar2,
             0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_20,-1);
  uVar3 = Board::MakeRenderOrder(0x61ae4,param_2[1],0);
  FUN_034ad7a8((Effect_PopAnim *)(this + 0x1c),uVar3);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  if (param_3 == '\0') {
    std::string::string(asStack_28,"idle1_1");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"idle_1");
    PVZ_EOT();
  }
  else {
    std::string::string(asStack_28,"idle1");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"idle");
    PVZ_EOT();
  }
  AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoor::generateDoor(Sexy::Point, Sexy::Point) */

void __thiscall
NewPVPAreaGuideDoor::generateDoor(NewPVPAreaGuideDoor *this,TPoint *param_2,Point *param_3)

{
  RtObject *this_00;
  RtObject *this_01;
  NewPVPGuideStartDoor *pNVar1;
  GuideEndDoor *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2);
  this_00 = (RtObject *)locateEffect(this,aPStack_10,1);
  Sexy::Point::Point(aPStack_10,(TPoint *)param_3);
  this_01 = (RtObject *)locateEffect(this,aPStack_10,0);
  pNVar1 = Sexy::RtObject::Cast<NewPVPGuideStartDoor>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aPStack_10,(RtWeakPtrBase *)aRStack_18);
  GuideStartDoor::InitDate((GuideStartDoor *)pNVar1,param_2,aPStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_02 = Sexy::RtObject::Cast<GuideEndDoor>(this_01);
  Effect_SmallSoundWave::SetSpawnPoint((Effect_SmallSoundWave *)this_02,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoor::onGameplayStarted() */

void __thiscall NewPVPAreaGuideDoor::onGameplayStarted(NewPVPAreaGuideDoor *this)

{
  bool bVar1;
  long extraout_x0;
  NewPVPGuideDoorLocation *pNVar2;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0x20));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pNVar2 = (NewPVPGuideDoorLocation *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    NewPVPGuideDoorLocation::NewPVPGuideDoorLocation((NewPVPGuideDoorLocation *)aRStack_18,pNVar2);
    Sexy::Point::Point(aPStack_28,(TPoint *)aRStack_18);
    Sexy::Point::Point(aPStack_20,aTStack_10);
    generateDoor(this,aPStack_28,aPStack_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaGuideDoor::Activate() */

void __thiscall NewPVPAreaGuideDoor::Activate(NewPVPAreaGuideDoor *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPArea::Activate((NewPVPArea *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPAreaGuideDoor,void(NewPVPAreaGuideDoor::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::LevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

