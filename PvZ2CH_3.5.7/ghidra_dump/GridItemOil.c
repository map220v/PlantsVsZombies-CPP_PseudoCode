// Class: GridItemOil


/* GridItemOil::CalcRenderOrder() const */

void __thiscall GridItemOil::CalcRenderOrder(GridItemOil *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemOil::CalcRenderOrder() const */

void __thiscall GridItemOil::CalcRenderOrder(GridItemOil *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOil::StaticClassInit() */

void GridItemOil::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemOil");
    (*pcVar2)(plVar1,asStack_10,FUN_04cf0b00,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOil::StaticGetClass() */

long * GridItemOil::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOil::GetClass() const */

long * GridItemOil::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemOil",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemOil::GridItemOil() */

void __thiscall GridItemOil::GridItemOil(GridItemOil *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069a40f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemOil_069a43a8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemOil::StaticNew() */

GridItemOil * GridItemOil::StaticNew(void)

{
  GridItemOil *this;
  
  this = ::operator_new(0x1d8);
  GridItemOil(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOil::applyOil() */

void __thiscall GridItemOil::applyOil(GridItemOil *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GridItemOilProps *pGVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_04ceecf0(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_04ceecf4(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  pGVar5 = GridItem::GetProps<GridItemOilProps>();
                    /* WARNING: Load size is inaccurate */
  pZVar7._0_4_ = *(Zombie **)(pGVar5 + 0xd0);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar6,(RealObject *)this);
    if (cVar2 != '\0') {
      nop();
      Zombie::ApplyCondition(pZVar7._0_4_,0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOil::setState(GridItemOilState) */

void __thiscall GridItemOil::setState(GridItemOil *this,int param_2)

{
  char cVar1;
  PopAnimRig *pPVar2;
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
    param_2 = 3;
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)this);
    if (cVar1 != '\0') {
      GridItemAnimation::GetLinkedAnimRig();
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      std::string::string(asStack_58,"animation2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50)
      ;
      PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,(DummyInit *)aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
  }
  else if (param_2 == 4) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"animation3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onDeathFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)this);
    if (cVar1 != '\0') {
      GridItemAnimation::GetLinkedAnimRig();
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      std::string::string(asStack_58,"animation3");
      Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
  }
  else if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"animation");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onSpawnFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)this);
    if (cVar1 != '\0') {
      GridItemAnimation::GetLinkedAnimRig();
      pPVar2 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      std::string::string(asStack_58,"animation");
      Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
  }
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOil::ResetTimer(float) */

void __thiscall GridItemOil::ResetTimer(GridItemOil *this,float param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x1ac) != 5) {
    uVar1 = PVZ_T();
    *(float *)(this + 0x1b4) = param_1;
    *(undefined4 *)(this + 0x1a8) = uVar1;
    setState(this,2);
    return;
  }
  return;
}


/* GridItemOil::OnWashedOut() */

void __thiscall GridItemOil::OnWashedOut(GridItemOil *this)

{
  if (*(int *)(this + 0x1ac) != 4) {
    setState(this,4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOil::onGridItemInitialize() */

void __thiscall GridItemOil::onGridItemInitialize(GridItemOil *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  GridItemOilProps *pGVar4;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PopAnim *pPVar5;
  code *pcVar6;
  undefined4 uVar7;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemOilProps>();
  cVar2 = FUN_0547419c((string *)(pGVar4 + 0xb8));
  if (cVar2 == '\0') {
    this_00 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string(asStack_18,"linkedEffect");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    GetPAMByName((string *)(pGVar4 + 0xb8));
    pPVar5 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    AttachedEffect::InitializeWithAnimation(this_01,pPVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    pcVar6 = *(code **)(*(long *)this_01 + 0x18);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)asStack_18,*(float *)(pGVar4 + 0xc0),*(float *)(pGVar4 + 0xc4),
               *(float *)(pGVar4 + 200));
    iVar1 = *(int *)(pGVar4 + 0xcc);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    (*pcVar6)(this_01,this,asStack_18,iVar1 + iVar3);
    this[0x194] = (GridItemOil)0x1;
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  uVar7 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar7;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemOil::onSpawnFinished(std::string const&) */

void GridItemOil::onSpawnFinished(string *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"animation2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)param_1);
  if (cVar1 != '\0') {
    GridItemAnimation::GetLinkedAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  setState((GridItemOil *)param_1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemOil::onDeathFinished(std::string const&) */

void GridItemOil::onDeathFinished(string *param_1)

{
  setState((GridItemOil *)param_1,5);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* GridItemOil::~GridItemOil() */

void __thiscall GridItemOil::~GridItemOil(GridItemOil *this)

{
  *(undefined ***)this = &PTR_GetClass_069a40f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemOil_069a43a8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemOil::~GridItemOil() */

void __thiscall GridItemOil::~GridItemOil(GridItemOil *this)

{
  ~GridItemOil(this + -0x10);
  return;
}


/* GridItemOil::~GridItemOil() */

void __thiscall GridItemOil::~GridItemOil(GridItemOil *this)

{
  ~GridItemOil(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemOil::~GridItemOil() */

void __thiscall GridItemOil::~GridItemOil(GridItemOil *this)

{
  ~GridItemOil(this + -0x10);
  return;
}


/* GridItemOil::InitializeProperties(float, float, std::vector<std::string,
   std::allocator<std::string > >, ZombieConditions) */

void __thiscall
GridItemOil::InitializeProperties
          (undefined4 param_1,undefined4 param_2,GridItemOil *this,vector *param_4,
          undefined4 param_5)

{
  *(undefined4 *)(this + 0x1b0) = param_1;
  *(undefined4 *)(this + 0x1b4) = param_2;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1b8),param_4);
  *(undefined4 *)(this + 0x1d0) = param_5;
  return;
}


/* GridItemOil::onUpdate() */

void __thiscall GridItemOil::onUpdate(GridItemOil *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  applyOil(this);
  if ((*(int *)(this + 0x1ac) == 3) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1b4) < fVar1 - *(float *)(this + 0x1a8))) {
    setState(this,4);
    return;
  }
  return;
}

