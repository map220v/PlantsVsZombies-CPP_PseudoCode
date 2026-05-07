// Class: GridItemButter


/* GridItemButter::CalcRenderOrder() const */

void __thiscall GridItemButter::CalcRenderOrder(GridItemButter *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemButter::CalcRenderOrder() const */

void __thiscall GridItemButter::CalcRenderOrder(GridItemButter *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemButter::~GridItemButter() */

void __thiscall GridItemButter::~GridItemButter(GridItemButter *this)

{
  *(undefined ***)this = &PTR_GetClass_0672fdb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemButter_06730068;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemButter::~GridItemButter() */

void __thiscall GridItemButter::~GridItemButter(GridItemButter *this)

{
  ~GridItemButter(this + -0x10);
  return;
}


/* GridItemButter::~GridItemButter() */

void __thiscall GridItemButter::~GridItemButter(GridItemButter *this)

{
  ~GridItemButter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemButter::~GridItemButter() */

void __thiscall GridItemButter::~GridItemButter(GridItemButter *this)

{
  ~GridItemButter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::StaticClassInit() */

void GridItemButter::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemButter");
    (*pcVar2)(plVar1,asStack_10,FUN_03b35e34,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemButter::StaticGetClass() */

long * GridItemButter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemButter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemButter::GetClass() const */

long * GridItemButter::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemButter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemButter::GridItemButter() */

void __thiscall GridItemButter::GridItemButter(GridItemButter *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0672fdb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemButter_06730068;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1c8) = 1;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x3f800000;
  return;
}


/* GridItemButter::StaticNew() */

GridItemButter * GridItemButter::StaticNew(void)

{
  GridItemButter *this;
  
  this = ::operator_new(0x1d8);
  GridItemButter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::SetButterType(GridItemButterType) */

void __thiscall GridItemButter::SetButterType(GridItemButter *this,int param_2)

{
  GridItemButterProps *pGVar1;
  char cVar2;
  GridItemButterProps *pGVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1cc) == param_2) goto LAB_03b36eac;
  *(int *)(this + 0x1cc) = param_2;
  pGVar3 = GridItem::GetProps<GridItemButterProps>();
  pGVar1 = pGVar3 + 0x98;
  FUN_05475d88(asStack_18,pGVar1);
  FUN_05475d88(asStack_10,pGVar3 + 0xa0);
  switch(*(undefined4 *)(this + 0x1cc)) {
  case 1:
    pGVar3 = pGVar3 + 0xd0;
    cVar2 = FUN_0547419c(pGVar3);
    goto joined_r0x03b36f40;
  case 2:
    pGVar3 = pGVar3 + 0xd8;
    cVar2 = FUN_0547419c(pGVar3);
joined_r0x03b36f40:
    if (cVar2 == '\0') {
LAB_03b36f20:
      thunk_FUN_05475e00(asStack_18,pGVar3);
    }
    break;
  case 3:
    pGVar3 = pGVar3 + 0xe0;
    cVar2 = FUN_0547419c(pGVar3);
    goto joined_r0x03b36f58;
  case 4:
    cVar2 = FUN_0547419c(pGVar1);
    if (cVar2 == '\0') {
      thunk_FUN_05475e00(asStack_18,pGVar1);
    }
    break;
  case 5:
    pGVar3 = pGVar3 + 0xe8;
    cVar2 = FUN_0547419c(pGVar3);
joined_r0x03b36f58:
    if (cVar2 != '\0') break;
    goto LAB_03b36f20;
  }
  GridItemAnimation::setAnimRig((GridItemAnimation *)this,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
LAB_03b36eac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::onGridItemInitialize() */

void __thiscall GridItemButter::onGridItemInitialize(GridItemButter *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  GridItemButterProps *pGVar4;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PopAnim *pPVar5;
  code *pcVar6;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemButterProps>();
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
    this[0x194] = (GridItemButter)0x1;
  }
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::setState(GridItemButterState) */

void __thiscall GridItemButter::setState(GridItemButter *this,int param_2)

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
    std::string::string(asStack_58,"onButterSplatFaded");
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
    std::string::string(asStack_58,"onButterSplatFinished");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::onButterSplatFinished(std::string const&) */

void GridItemButter::onButterSplatFinished(string *param_1)

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
  setState((GridItemButter *)param_1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemButter::onButterSplatFaded(std::string const&) */

void GridItemButter::onButterSplatFaded(string *param_1)

{
  setState((GridItemButter *)param_1,5);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* GridItemButter::canTargetZombie(Zombie const*) */

void __thiscall GridItemButter::canTargetZombie(GridItemButter *this,Zombie *param_1)

{
  FUN_03b38200(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::damageTarget(Zombie*) */

void __thiscall GridItemButter::damageTarget(GridItemButter *this,Zombie *param_1)

{
  char cVar1;
  string *psVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  DamageInfo *pDVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"buttercup");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_68);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  GridItem::GetProps<GridItemButterProps>();
  uVar4 = *(undefined8 *)(this + 0x1c0);
                    /* WARNING: Load size is inaccurate */
  pDVar5._0_4_ = *(DamageInfo **)(this + 0x1b4);
  Sexy::Point::Point(aPStack_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo(pDVar5._0_4_,local_88,local_84,asStack_68,uVar4,this,aPStack_90,0);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,asStack_68);
  uVar3 = 4;
  if (*(int *)(this + 0x1cc) != 3) {
    uVar3 = 3;
  }
  cVar1 = FUN_03b38348(param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1bc),0,param_1,uVar3,1);
  }
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::applyButter(Sexy::RtWeakPtr<Zombie>) */

void __thiscall GridItemButter::applyButter(GridItemButter *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2), cVar2 != '\0'))
  {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    nop();
    if ((extraout_x0 != (Zombie *)0x0) && (cVar2 = canTargetZombie(this,extraout_x0), cVar2 != '\0')
       ) {
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_30,"ButtercupDefault");
      Sexy::ToWString(asStack_30);
      Sexy::RtName::RtName(aRStack_18,awStack_28);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,5,aRStack_18);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtName::~RtName(aRStack_18);
      FUN_05476c50(awStack_28);
      std::string::~string(asStack_30);
      nop();
      if (*(int *)(this + 0x1cc) == 5) {
        *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar4 + 0x340);
      }
      else if (*(int *)(this + 0x1cc) == 4) {
        *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar4 + 0x33c);
      }
      else {
        *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar4 + 0x338);
      }
      damageTarget(this,extraout_x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::setButterProps(float, float, float, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemButter::setButterProps
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,GridItemButter *this,
          RtWeakPtrBase *param_5)

{
  long lVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1b8) = param_1;
  *(undefined4 *)(this + 0x1b4) = param_2;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1bc) = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  applyButter(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::ReinitButter(float, float, float, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemButter::ReinitButter
          (GridItemButter *param_1,undefined8 param_2,undefined8 param_3,GridItemButter *this,
          RtWeakPtrBase *param_5)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  setButterProps(param_1,param_2,param_3,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  setState(this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::InitButter(float, float, float, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GridItemButter::InitButter
          (GridItemButter *param_1,undefined8 param_2,undefined8 param_3,GridItemButter *this,
          RtWeakPtrBase *param_5)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  setButterProps(param_1,param_2,param_3,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  setState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::targetNewZombies() */

void __thiscall GridItemButter::targetNewZombies(GridItemButter *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  Zombie *this_00;
  ZombieModernBalloon *this_01;
  undefined8 uVar7;
  ResourceInfo *pRVar8;
  undefined8 local_58;
  undefined8 local_50;
  string asStack_48 [8];
  wstring awStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  RtName aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_03b336d8(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_03b336dc(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if (*plVar6 != 0) {
        nop();
        cVar1 = Zombie::HasCondition();
        if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(this_00,4), cVar1 == '\0')) &&
            (this_00 != (Zombie *)0x0)) &&
           (((cVar1 = canTargetZombie(this,this_00), cVar1 != '\0' &&
             (cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0')) &&
            ((this_01 = Sexy::RtObject::Cast<ZombieModernBalloon>((RtObject *)this_00),
             this_01 == (ZombieModernBalloon *)0x0 ||
             (iVar5 = Zombie::getZombieStateSerialization((Zombie *)this_01), iVar5 != 0x20)))))) {
          uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
          std::string::string(asStack_48,"ButtercupDefault");
          Sexy::ToWString(asStack_48);
          Sexy::RtName::RtName(aRStack_30,awStack_40);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar7,5,aRStack_30);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtName::~RtName(aRStack_30);
          FUN_05476c50(awStack_40);
          std::string::~string(asStack_48);
          nop();
          if (*(int *)(this + 0x1cc) == 5) {
            *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar8 + 0x37c);
          }
          else if (*(int *)(this + 0x1cc) == 4) {
            *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar8 + 0x378);
          }
          else {
            *(float *)(this + 0x1b4) = *(float *)(this + 0x1d0) * *(float *)(pRVar8 + 0x374);
          }
          damageTarget(this,this_00);
          std::string::string((string *)aRStack_30,"Play_Splat");
          RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_30,0.0);
          std::string::~string((string *)aRStack_30);
          nop();
          *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + -1;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  iVar5 = *(int *)(this + 0x1c8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5 < 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemButter::onUpdate() */

void __thiscall GridItemButter::onUpdate(GridItemButter *this)

{
  char cVar1;
  Board *this_00;
  float fVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  BoardEntity::CalcGridPosition();
  cVar1 = Board::IsShallowWater(this_00,aPStack_10);
  if (cVar1 == '\0') {
    if (*(int *)(this + 0x1ac) == 3) {
      fVar2 = (float)PVZ_T();
      if (*(float *)(this + 0x1b8) < fVar2 - *(float *)(this + 0x1a8)) {
        setState(this,4);
      }
      cVar1 = targetNewZombies(this);
      if (cVar1 != '\0') {
        setState(this,4);
      }
    }
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

