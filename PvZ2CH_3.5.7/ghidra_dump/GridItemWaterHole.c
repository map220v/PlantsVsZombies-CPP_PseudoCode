// Class: GridItemWaterHole


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::CalcRenderOrder() const */

void __thiscall GridItemWaterHole::CalcRenderOrder(GridItemWaterHole *this)

{
  long lVar1;
  BoardTransforms *this_00;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  Board::MakeRenderOrder(199999,local_c,local_10);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemWaterHole::CalcRenderOrder() const */

void __thiscall GridItemWaterHole::CalcRenderOrder(GridItemWaterHole *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::StaticClassInit() */

void GridItemWaterHole::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWaterHole");
    (*pcVar2)(plVar1,asStack_10,FUN_0374cdd4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterHole::StaticGetClass() */

long * GridItemWaterHole::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWaterHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterHole::GetClass() const */

long * GridItemWaterHole::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWaterHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWaterHole::GetCantPlantReason() const */

undefined8 GridItemWaterHole::GetCantPlantReason(void)

{
  return 0x15;
}


/* GridItemWaterHole::onAnimation(std::string const&) */

void __thiscall GridItemWaterHole::onAnimation(GridItemWaterHole *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"water");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x2a8))(this,2);
    return;
  }
  bVar1 = std::operator==(param_1,"water03");
  if (!bVar1) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* GridItemWaterHole::canDevour(Zombie*) */

char __thiscall GridItemWaterHole::canDevour(GridItemWaterHole *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if ((((((cVar1 != '\0') ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
        (fVar4 = (float)FUN_03723b88(*(undefined4 *)(param_1 + 0x280)), fVar4 <= 0.0)) ||
       (((cVar1 = FUN_0373c274(*(undefined4 *)(param_1 + 0x28)), cVar1 != '\0' ||
         (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
        ((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
         ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
          (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')))))))) ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
       ((((((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2 ||
            (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar2)) ||
           (cVar1 = Zombie::HasCondition(param_1,0x81), cVar1 != '\0')) ||
          ((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), bVar2 ||
           (bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), bVar2)))) ||
         ((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), bVar2 ||
          ((bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), bVar2 ||
           (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), bVar2)))))) ||
        (bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), bVar2)))))) ||
     ((((bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1), bVar2 ||
        (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), bVar2)) ||
       (bVar2 = Sexy::RtObject::IsA<ZombieAirbubble>((RtObject *)param_1), bVar2)) ||
      ((iVar3 = Zombie::GetSizeType(param_1), iVar3 == 2 ||
       (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')))))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::playDropEffect(bool) */

void GridItemWaterHole::playDropEffect(bool param_1)

{
  Effect_PopAnim *this;
  PopAnim *pPVar1;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,(float)(local_2c + -10),0.0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_TRIDENT_EFFECT");
  GetPAMByName(asStack_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"sh");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aPStack_18,-1);
  FUN_03723aa0(this + 0x1c,0x65131);
  Effect_PopAnim::SetCentered(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterHole::GridItemWaterHole() */

void __thiscall GridItemWaterHole::GridItemWaterHole(GridItemWaterHole *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06694bf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWaterHole_06694eb0;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemWaterHole::StaticNew() */

GridItemWaterHole * GridItemWaterHole::StaticNew(void)

{
  GridItemWaterHole *this;
  
  this = ::operator_new(0x1d0);
  GridItemWaterHole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::isStraightDevouredZombie(Zombie*) */

void __thiscall GridItemWaterHole::isStraightDevouredZombie(GridItemWaterHole *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  GridItemWaterHoleProps *pGVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemWaterHoleProps>();
  local_18 = FUN_037450a8(*(undefined8 *)(pGVar3 + 0xd8));
  local_10 = FUN_037450f8(*(undefined8 *)(pGVar3 + 0xe0));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar4);
    psVar5 = (string *)Zombie::GetTypeName(param_1);
    cVar1 = std::operator==(asStack_20,psVar5);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_0375a058;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (param_1 != (Zombie *)0x0) {
    bVar2 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)param_1);
    cVar1 = '\x01';
    if (bVar2) goto LAB_0375a058;
  }
  cVar1 = '\0';
LAB_0375a058:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::setState(GridItemWaterHoleState) */

void __thiscall GridItemWaterHole::setState(GridItemWaterHole *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"water02");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    if (param_2 == 4) {
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      __s = "water03";
    }
    else {
      if (param_2 != 1) goto LAB_0375c194;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      __s = "water";
    }
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimation");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
LAB_0375c194:
  *(int *)(this + 0x1b4) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterHole::~GridItemWaterHole() */

void __thiscall GridItemWaterHole::~GridItemWaterHole(GridItemWaterHole *this)

{
  *(undefined ***)this = &PTR_GetClass_06694bf0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWaterHole_06694eb0;
  std::
  vector<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>>>
             *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWaterHole::~GridItemWaterHole() */

void __thiscall GridItemWaterHole::~GridItemWaterHole(GridItemWaterHole *this)

{
  ~GridItemWaterHole(this + -0x10);
  return;
}


/* GridItemWaterHole::~GridItemWaterHole() */

void __thiscall GridItemWaterHole::~GridItemWaterHole(GridItemWaterHole *this)

{
  ~GridItemWaterHole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWaterHole::~GridItemWaterHole() */

void __thiscall GridItemWaterHole::~GridItemWaterHole(GridItemWaterHole *this)

{
  ~GridItemWaterHole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::killZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemWaterHole::killZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char *pcVar1;
  Zombie *this;
  long *plVar2;
  code *pcVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zombie_Splash");
  this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(this,false);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar2 + 0x80))(plVar2,1);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pcVar3 = *(code **)(*plVar2 + 0x120);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
  (*pcVar3)(plVar2,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemWaterHole::GatherPlantingRestrictions
          (GridItemWaterHole *this,PlantType *param_1,vector *param_2)

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
/* GridItemWaterHole::setupZombieToBeDevoured(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemWaterHole::setupZombieToBeDevoured
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  Zombie *pZVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  RealObject *this;
  ulong uVar7;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::GetHasPlantFood(pZVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::HasCondition(uVar4,0x12);
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x13);
  }
  else {
    local_24 = 0x12;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x13);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x14);
  }
  else {
    local_24 = 0x13;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x14);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x15);
  }
  else {
    local_24 = 0x14;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x15);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x16);
  }
  else {
    local_24 = 0x15;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x16);
  }
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x17);
  }
  else {
    local_24 = 0x16;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar4,0x17);
  }
  if (cVar1 != '\0') {
    local_24 = 0x17;
    std::vector<ZombieConditions,std::allocator<ZombieConditions>>::push_back
              ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20,
               (ZombieConditions *)&local_24);
  }
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsBeingPulledByOlivePit(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::ClearConditions(pZVar3);
  bVar2 = (bool)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetHasPlantFood(bVar2);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pZVar3 = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3,0,uVar4,0x18,1);
  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::ApplyCondition(pZVar3,0,uVar4,0x81,1);
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_037246e8(local_20,local_18);
    if (uVar6 <= uVar7) break;
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    puVar5 = (undefined4 *)FUN_037246f4(local_20,uVar7);
    Zombie::ApplyCondition(pZVar3,0,uVar4,*puVar5,1);
    uVar7 = uVar7 + 1;
  }
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetMarkedForDeath(pZVar3);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIsControlled(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar3,true);
  pZVar3 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresCollisions(pZVar3,true);
  this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  RealObject::SetDisableSnapToGround(this,true);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::devouring(Sexy::RtWeakPtr<Zombie>, float) */

void __thiscall
GridItemWaterHole::devouring(float param_1,GridItemWaterHole *this,RtMixedPtrBase *param_3)

{
  char cVar1;
  Zombie *pZVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  GridItemWaterHoleProps *pGVar4;
  float fVar5;
  CurveSequence<Sexy::SexyVector3> *pCVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  float local_48;
  PIInterpolator aPStack_40 [24];
  Vec3 aVStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if ((cVar1 != '\0') && (0.0 < param_1)) {
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    cVar1 = isStraightDevouredZombie(this,pZVar2);
    if (cVar1 == '\0') {
      param_1 = param_1 * 0.33333334;
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_50 = *puVar3;
    local_48 = *(float *)(puVar3 + 1);
    Sexy::PIInterpolator::PIInterpolator(aPStack_40);
    fVar5 = (float)PVZ_T();
    CurveSequence<Sexy::SexyVector3>::StartSequence
              ((CurveSequence<Sexy::SexyVector3> *)aPStack_40,fVar5,(SexyVector3 *)&local_50);
    pGVar4 = GridItem::GetProps<GridItemWaterHoleProps>();
                    /* WARNING: Load size is inaccurate */
    pCVar6._0_4_ = *(CurveSequence<Sexy::SexyVector3> **)(pGVar4 + 0xd4);
    EATextSquish::Vec3::Vec3(aVStack_28,(float)local_50,local_50._4_4_,local_48 - param_1);
    CurveSequence<Sexy::SexyVector3>::AddCurve
              (pCVar6._0_4_,aPStack_40,(SexyVector3 *)&local_50,aVStack_28,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    ToolPacketData::GetProps();
    std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>::
    pair<Sexy::RtWeakPtr<GameObject>,CurveSequence<Sexy::SexyVector3>&,void>
              ((pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>> *)aVStack_28,
               (RtWeakPtr *)aRStack_58,(CurveSequence *)aPStack_40);
    std::
    vector<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>>>
    ::push_back((vector<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>>>
                 *)(this + 0x1b8),(pair *)aVStack_28);
    std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>::~pair
              ((pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>> *)aVStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    (**(code **)(*(long *)this + 0x2a8))(this,3);
    CurveSequence<Sexy::SexyVector3>::~CurveSequence((CurveSequence<Sexy::SexyVector3> *)aPStack_40)
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::tryBeginDevour(Zombie*) */

void __thiscall GridItemWaterHole::tryBeginDevour(GridItemWaterHole *this,Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  setupZombieToBeDevoured(this,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::Insets::Insets((Insets *)aRStack_18);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  (**(code **)(*plVar2 + 0x90))(plVar2,aRStack_18);
  fVar3 = (float)FUN_03728ad0(0x3f800000);
  cVar1 = (**(code **)(*(long *)param_1 + 0x378))(param_1);
  if (cVar1 == '\0') {
    fVar4 = 0.9;
  }
  else {
    fVar4 = 0.3;
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,(RtWeakPtrBase *)aRStack_28);
  devouring((GridItemWaterHole *)(fVar3 * (float)local_c * fVar4),this,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Zombie::GetSizeType(param_1);
  playDropEffect(SUB81(this,0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::applydevour() */

void __thiscall GridItemWaterHole::applydevour(GridItemWaterHole *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  BoardTransforms *this_00;
  undefined8 *puVar4;
  Zombie *pZVar5;
  int in_w4;
  RealObject *this_01;
  uint local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)local_48,local_44,1,1,in_w4);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_30[0] = (int)((double)local_30[0] - (double)iVar3 * 0.3);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
LAB_0378ef08:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RealObject *)*puVar4;
    cVar1 = RealObject::IsOnOpposingTeam(this_01,(RealObject *)this);
    if (cVar1 == '\0') {
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
      cVar1 = canDevour(this,pZVar5);
      if (cVar1 != '\0') {
        tryBeginDevour(this,pZVar5);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        goto LAB_0378ef08;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWaterHole::onUpdate() */

void GridItemWaterHole::onUpdate(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  GridItemAnimation *in_x0;
  pair *ppVar4;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [4];
  pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>> apStack_28 [8];
  CurveSequence<Sexy::SexyVector3> aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate(in_x0);
  if (*(int *)(in_x0 + 0x1b4) == 2) {
    applydevour((GridItemWaterHole *)in_x0);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= *(float *)(in_x0 + 0x1b0)) goto LAB_0378f070;
  }
  else {
    if (*(int *)(in_x0 + 0x1b4) != 3) goto LAB_0378f070;
    bVar1 = false;
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(in_x0 + 0x1b8));
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x1b8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      ppVar4 = (pair *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>::pair(apStack_28,ppVar4);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)apStack_28);
      if (cVar3 != '\0') {
        fVar7 = (float)PVZ_T();
        cVar3 = CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(aCStack_20,fVar7);
        if (cVar3 == '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)apStack_28);
          killZombie();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38)
          ;
        }
        else {
          bVar1 = true;
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)apStack_28);
          pcVar6 = *(code **)(*plVar5 + 0x78);
          fVar7 = (float)PVZ_T();
          local_38[0] = CurveSequence<Sexy::SexyVector3>::GetValueAt(aCStack_20,fVar7);
          (*pcVar6)(plVar5,(RtWeakPtr<Sexy::SoundResource> *)local_38);
        }
      }
      std::pair<Sexy::RtWeakPtr<Zombie>,CurveSequence<Sexy::SexyVector3>>::~pair(apStack_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_48);
    }
    if (bVar1) goto LAB_0378f070;
  }
  (**(code **)(*(long *)in_x0 + 0x2a8))();
LAB_0378f070:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWaterHole::onGridItemInitialize() */

void __thiscall GridItemWaterHole::onGridItemInitialize(GridItemWaterHole *this)

{
  GridItemWaterHoleProps *pGVar1;
  code *pcVar2;
  float fVar3;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemWaterHoleProps>();
  fVar3 = (float)PVZ_T();
  pcVar2 = *(code **)(*(long *)this + 0x2a8);
  *(float *)(this + 0x1b0) = fVar3 + *(float *)(pGVar1 + 0xd0);
  (*pcVar2)(this,1);
  return;
}

