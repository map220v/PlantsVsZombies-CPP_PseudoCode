// Class: ZombieIceAgeChief


/* ZombieIceAgeChief::onZombieInitialize() */

void __thiscall ZombieIceAgeChief::onZombieInitialize(ZombieIceAgeChief *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieIceAgeChief::onAnimationDone(std::string const&) */

void ZombieIceAgeChief::onAnimationDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieIceAgeChief::~ZombieIceAgeChief() */

void __thiscall ZombieIceAgeChief::~ZombieIceAgeChief(ZombieIceAgeChief *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4660;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeChief_068d5098;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieIceAgeChief::~ZombieIceAgeChief() */

void __thiscall ZombieIceAgeChief::~ZombieIceAgeChief(ZombieIceAgeChief *this)

{
  ~ZombieIceAgeChief(this + -0x10);
  return;
}


/* ZombieIceAgeChief::~ZombieIceAgeChief() */

void __thiscall ZombieIceAgeChief::~ZombieIceAgeChief(ZombieIceAgeChief *this)

{
  ~ZombieIceAgeChief(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieIceAgeChief::~ZombieIceAgeChief() */

void __thiscall ZombieIceAgeChief::~ZombieIceAgeChief(ZombieIceAgeChief *this)

{
  ~ZombieIceAgeChief(this + -0x10);
  return;
}


/* ZombieIceAgeChief::ZombieIceAgeChief() */

void __thiscall ZombieIceAgeChief::ZombieIceAgeChief(ZombieIceAgeChief *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068d4660;
  *(undefined ***)(this + 0x10) = &PTR__ZombieIceAgeChief_068d5098;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieIceAgeChief::StaticNew() */

ZombieIceAgeChief * ZombieIceAgeChief::StaticNew(void)

{
  ZombieIceAgeChief *this;
  
  this = ::operator_new(0x808);
  ZombieIceAgeChief(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChief::PlayWindEffect(Sexy::Point const&) */

void __thiscall ZombieIceAgeChief::PlayWindEffect(ZombieIceAgeChief *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  PopAnimRig *pPVar4;
  Effect_PopAnim *this_01;
  Point aPStack_40 [8];
  int local_38;
  int local_34;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_40,-700,-0x6d);
  BoardTransforms::GridToBoardSpace(param_1);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_38,(TPoint *)aPStack_40);
  uVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(param_1 + 4),0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_FROSTBITE_CHILL_WIND");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_38,(float)local_34,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_04770888(this_00 + 0x1c,uVar1);
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::SetDrawScale(pPVar4,0.4);
  Sexy::Point::Point(aPStack_30,-0x78,-0x50);
  BoardTransforms::GridToBoardSpace(param_1);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_28,(TPoint *)aPStack_30);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_ICEAGE_CHIEF_WIND");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"freezing");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  iVar2 = FUN_04770890(*(undefined4 *)(this_00 + 0x1c),this_00 + 0x20);
  FUN_04770888(this_01 + 0x1c,iVar2 + -1);
  pPVar4 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_01);
  PopAnimRig::SetDrawScale(pPVar4,0.4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChief::onEnterState_SpawnWind(ZombieState) */

void ZombieIceAgeChief::onEnterState_SpawnWind(Zombie *param_1)

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
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Chief::PlaySpawnWind((ZombieAnimRig_Chief *)pZVar1,aRStack_50);
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
/* ZombieIceAgeChief::SpwanWind(Sexy::Point const&) */

void __thiscall ZombieIceAgeChief::SpwanWind(ZombieIceAgeChief *this,Point *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  Plant *this_00;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlayWindEffect(this,param_1);
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::ZombieIceAgeChiefSpwanWind,
             *(int *)(param_1 + 4));
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_047708a0(uVar4);
    if ((lVar2 != 0) && (lVar2 = FUN_0477198c(uVar4), lVar2 == 0)) {
      Sexy::Insets::Insets(aIStack_30,0,*(int *)(param_1 + 4),*(int *)param_1,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
        if (this_00 != (Plant *)0x0) {
          Plant::AddFrost(this_00,100);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChief::StaticClassInit() */

void ZombieIceAgeChief::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieIceAgeChief");
      (*pcVar4)(plVar1,asStack_150,FUN_047726f8,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeChief,void(ZombieIceAgeChief::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieIceAgeChief,void(ZombieIceAgeChief::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieIceAgeChief,void(ZombieIceAgeChief::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_IceChief_SpawnWind");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0477249c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieIceAgeChief::StaticGetClass() */

long * ZombieIceAgeChief::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeChief",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieIceAgeChief::GetClass() const */

long * ZombieIceAgeChief::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieIceAgeChief",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieIceAgeChief::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieIceAgeChief::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int *piVar2;
  float fVar3;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_3,"freezing");
  if ((bVar1) && (bVar1 = std::operator==(param_4,"use_action"), bVar1)) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(param_1 + 0x800) < fVar3) {
      BoardEntity::CalcGridPosition();
      local_14 = BoardConstants::NUMBER_OF_COLUMNS();
      piVar2 = eastl::min_alt<int>(local_10,&local_14);
      local_10[0] = *piVar2;
      (**(code **)(*(long *)param_1 + 0xa20))(param_1,local_10);
    }
  }
  else {
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieIceAgeChief::onEnterState_Walk(ZombieState) */

void ZombieIceAgeChief::onEnterState_Walk(Zombie *param_1)

{
  ZombieIceAgeChiefProps *pZVar1;
  float fVar2;
  
  Zombie::onEnterState_Walk();
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieIceAgeChiefProps>(param_1);
  *(float *)(param_1 + 0x800) = fVar2 + *(float *)(pZVar1 + 0x210);
  return;
}


/* ZombieIceAgeChief::updateState_Walk() */

void __thiscall ZombieIceAgeChief::updateState_Walk(ZombieIceAgeChief *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  cVar1 = RealObject::IsOnTeam(this,1);
  if (cVar1 != '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  lVar4 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar4 == 0) {
    fVar6 = (float)PVZ_T();
    if (((fVar6 <= *(float *)(this + 0x800)) ||
        (iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this), iVar2 < 0)) ||
       (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 <= iVar2)) {
      return;
    }
    uVar5 = 0x1f;
  }
  else {
    uVar5 = 2;
  }
  Zombie::setZombieState((Zombie *)this,uVar5,0);
  return;
}

