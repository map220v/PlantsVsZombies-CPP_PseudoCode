// Class: ZombieLostCityGuide


/* ZombieLostCityGuide::OnGuideAnimationDone(std::string const&) */

void ZombieLostCityGuide::OnGuideAnimationDone(string *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)param_1);
  if (iVar1 != 0x1f) {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,1,0);
  return;
}


/* ZombieLostCityGuide::~ZombieLostCityGuide() */

void __thiscall ZombieLostCityGuide::~ZombieLostCityGuide(ZombieLostCityGuide *this)

{
  *(undefined ***)this = &PTR_GetClass_06923140;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityGuide_06923b70;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityGuide::~ZombieLostCityGuide() */

void __thiscall ZombieLostCityGuide::~ZombieLostCityGuide(ZombieLostCityGuide *this)

{
  ~ZombieLostCityGuide(this + -0x10);
  return;
}


/* ZombieLostCityGuide::~ZombieLostCityGuide() */

void __thiscall ZombieLostCityGuide::~ZombieLostCityGuide(ZombieLostCityGuide *this)

{
  ~ZombieLostCityGuide(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityGuide::~ZombieLostCityGuide() */

void __thiscall ZombieLostCityGuide::~ZombieLostCityGuide(ZombieLostCityGuide *this)

{
  ~ZombieLostCityGuide(this + -0x10);
  return;
}


/* ZombieLostCityGuide::ZombieLostCityGuide() */

void __thiscall ZombieLostCityGuide::ZombieLostCityGuide(ZombieLostCityGuide *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  *(undefined ***)this = &PTR_GetClass_06923140;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityGuide_06923b70;
  return;
}


/* ZombieLostCityGuide::StaticNew() */

ZombieLostCityGuide * ZombieLostCityGuide::StaticNew(void)

{
  ZombieLostCityGuide *this;
  
  this = ::operator_new(0x808);
  ZombieLostCityGuide(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGuide::IsValidGuideDoorInRow() */

void __thiscall ZombieLostCityGuide::IsValidGuideDoorInRow(ZombieLostCityGuide *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  GuideEndDoor *this_00;
  long lVar6;
  GuideStartDoor *this_01;
  PVZDB *pPVar7;
  RtDbTable *this_02;
  RtObject *this_03;
  int extraout_w1;
  int extraout_w1_00;
  int iVar8;
  int extraout_w1_01;
  int extraout_w1_02;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x31);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_02 = (RtDbTable *)PVZDB::GetTable(pPVar7,0x31);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    this_03 = (RtObject *)Sexy::RtDbTable::GetObjectForId(this_02,aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    iVar8 = extraout_w1_01;
    if ((this_03 != (RtObject *)0x0) &&
       ((bVar2 = Sexy::RtObject::IsA<GuideEndDoor>(this_03), bVar2 ||
        (bVar2 = Sexy::RtObject::IsA<GuideStartDoor>(this_03), iVar8 = extraout_w1_02, bVar2)))) {
      this_00 = Sexy::RtObject::Cast<GuideEndDoor>(this_03);
      if (this_00 != (GuideEndDoor *)0x0) {
        lVar6 = GuideStartDoor::GetSelfPosition((GuideStartDoor *)this_00);
        iVar8 = *(int *)(lVar6 + 4);
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        if (iVar8 == iVar3) break;
      }
      this_01 = Sexy::RtObject::Cast<GuideStartDoor>(this_03);
      iVar8 = extraout_w1;
      if (this_01 != (GuideStartDoor *)0x0) {
        lVar6 = GuideStartDoor::GetSelfPosition(this_01);
        iVar3 = *(int *)(lVar6 + 4);
        iVar4 = SharkMinion::getRow((SharkMinion *)this);
        iVar8 = extraout_w1_00;
        if (iVar3 == iVar4) break;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar8);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* ZombieLostCityGuide::CheckAndGenerateDoor() */

void __thiscall ZombieLostCityGuide::CheckAndGenerateDoor(ZombieLostCityGuide *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar3 = rand();
  if ((iVar2 == ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 1) + 6) &&
     (*(int *)(this + 0x800) < 1)) {
    cVar1 = IsValidGuideDoorInRow(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGuide::onEnterState_Guide(ZombieState) */

void ZombieLostCityGuide::onEnterState_Guide(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnGuideAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Guide::DoGuideAnimation((ZombieAnimRig_Guide *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGuide::LocateEffect(Sexy::Point, bool) */

void __thiscall ZombieLostCityGuide::LocateEffect(undefined8 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  GuideStartDoor *this;
  ResourceInfo *pRVar4;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*param_2);
  iVar2 = BoardTransforms::GridToBoardSpaceX(param_2[1]);
  if (param_3 == '\0') {
    this = (GuideStartDoor *)Board::AddEffect<GuideEndDoor>(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    this = Board::AddEffect<GuideStartDoor>(*(Board **)(gLawnApp + 0x9f0));
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
  FUN_049a5a54((Effect_PopAnim *)(this + 0x1c),uVar3);
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
/* ZombieLostCityGuide::GenerateDoor(Sexy::Point, Sexy::Point) */

void __thiscall
ZombieLostCityGuide::GenerateDoor(ZombieLostCityGuide *this,TPoint *param_2,Point *param_3)

{
  RtObject *this_00;
  RtObject *this_01;
  GuideStartDoor *pGVar1;
  GuideEndDoor *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2);
  this_00 = (RtObject *)LocateEffect(this,aPStack_10,1);
  Sexy::Point::Point(aPStack_10,(TPoint *)param_3);
  this_01 = (RtObject *)LocateEffect(this,aPStack_10,0);
  pGVar1 = Sexy::RtObject::Cast<GuideStartDoor>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aPStack_10,(RtWeakPtrBase *)aRStack_18);
  GuideStartDoor::InitDate(pGVar1,param_2,aPStack_10);
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
/* ZombieLostCityGuide::StaticClassInit() */

void ZombieLostCityGuide::StaticClassInit(void)

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
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieLostCityGuide");
      (*pcVar4)(plVar1,asStack_150,FUN_049a8108,0x808,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityGuide,void(ZombieLostCityGuide::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieLostCityGuide,void(ZombieLostCityGuide::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieLostCityGuide,void(ZombieLostCityGuide::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Guide");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_049a7d94(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLostCityGuide::StaticGetClass() */

long * ZombieLostCityGuide::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGuide::GetClass() const */

long * ZombieLostCityGuide::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieLostCityGuide",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityGuide::updateState_Walk() */

void __thiscall ZombieLostCityGuide::updateState_Walk(ZombieLostCityGuide *this)

{
  CheckAndGenerateDoor(this);
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityGuide::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieLostCityGuide::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  TPoint<int> aTStack_30 [8];
  Point aPStack_28 [8];
  TPoint aTStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_4,"guide");
  if (bVar1) {
    *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + 1;
    BoardEntity::CalcGridPosition();
    Sexy::Point::Point(aPStack_18,(TPoint *)aTStack_30);
    Sexy::Point::Point(aPStack_28,-4,0);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)aPStack_28);
    Sexy::Point::Point(aPStack_10,aTStack_20);
    GenerateDoor((ZombieLostCityGuide *)param_1,aPStack_18,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

