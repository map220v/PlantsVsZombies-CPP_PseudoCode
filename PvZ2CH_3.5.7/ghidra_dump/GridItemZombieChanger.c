// Class: GridItemZombieChanger


/* GridItemZombieChanger::~GridItemZombieChanger() */

void __thiscall GridItemZombieChanger::~GridItemZombieChanger(GridItemZombieChanger *this)

{
  *(undefined ***)this = &PTR_GetClass_06689e50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieChanger_0668a108;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombieChanger::~GridItemZombieChanger() */

void __thiscall GridItemZombieChanger::~GridItemZombieChanger(GridItemZombieChanger *this)

{
  ~GridItemZombieChanger(this + -0x10);
  return;
}


/* GridItemZombieChanger::~GridItemZombieChanger() */

void __thiscall GridItemZombieChanger::~GridItemZombieChanger(GridItemZombieChanger *this)

{
  ~GridItemZombieChanger(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieChanger::~GridItemZombieChanger() */

void __thiscall GridItemZombieChanger::~GridItemZombieChanger(GridItemZombieChanger *this)

{
  ~GridItemZombieChanger(this + -0x10);
  return;
}


/* GridItemZombieChanger::IsDamageableByPlants() const */

bool __thiscall GridItemZombieChanger::IsDamageableByPlants(GridItemZombieChanger *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = RealObject::IsOnTeam(this,2);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(this + 0x1a8) == 3;
  }
  return bVar1;
}


/* GridItemZombieChanger::TakeDamage(DamageInfo const&) */

void __thiscall GridItemZombieChanger::TakeDamage(GridItemZombieChanger *this,DamageInfo *param_1)

{
  if (*(int *)(this + 0x1a8) != 3) {
    return;
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  return;
}


/* GridItemZombieChanger::CalcRenderOrder() const */

void __thiscall GridItemZombieChanger::CalcRenderOrder(GridItemZombieChanger *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0371653c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x635ce,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemZombieChanger::CalcRenderOrder() const */

void __thiscall GridItemZombieChanger::CalcRenderOrder(GridItemZombieChanger *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::StaticClassInit() */

void GridItemZombieChanger::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieChanger");
    (*pcVar2)(plVar1,asStack_10,FUN_0371759c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieChanger::StaticGetClass() */

long * GridItemZombieChanger::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieChanger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieChanger::GetClass() const */

long * GridItemZombieChanger::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieChanger",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieChanger::GridItemZombieChanger() */

void __thiscall GridItemZombieChanger::GridItemZombieChanger(GridItemZombieChanger *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06689e50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieChanger_0668a108;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* GridItemZombieChanger::StaticNew() */

GridItemZombieChanger * GridItemZombieChanger::StaticNew(void)

{
  GridItemZombieChanger *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombieChanger(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::CanChangeZombie(Zombie*) */

void __thiscall GridItemZombieChanger::CanChangeZombie(GridItemZombieChanger *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Zombie::GetSizeType(param_1);
  if ((((((iVar3 == 0) && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
        && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
       ((cVar1 = FUN_03716ca8(*(undefined4 *)(param_1 + 0xcc)), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')))) &&
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0' &&
       ((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
        (cVar1 = Zombie::IsInvisible(param_1), cVar1 == '\0')))))) &&
     (iVar3 = Zombie::getZombieStateSerialization(param_1), iVar3 == 1)) {
    std::string::string(asStack_10,"changerZombie");
    bVar2 = Zombie::HasTag(param_1,asStack_10);
    bVar2 = bVar2 ^ 1;
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::KillGridItem() */

void __thiscall GridItemZombieChanger::KillGridItem(GridItemZombieChanger *this)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_UI_MODIFYPARTS_ZOMBIECHANGER");
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"die");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(local_18._4_4_);
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_03716524(this_00 + 0x1c,uVar1);
  GridItem::KillGridItem((GridItem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::SetChangerState(ZombieChangerState) */

void __thiscall
GridItemZombieChanger::SetChangerState(GridItemZombieChanger *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  GridItemZombieChangerProps *pGVar2;
  char *__s;
  float fVar3;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = param_2;
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    std::string::string(asStack_58,"prepare");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    goto switchD_03717c6c_default;
  case 2:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    __s = "start";
    break;
  case 3:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    std::string::string(asStack_58,"loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    fVar3 = (float)PVZ_T();
    pGVar2 = GridItem::GetProps<GridItemZombieChangerProps>();
    *(float *)(this + 0x1ac) = fVar3 + *(float *)(pGVar2 + 0xd4);
    goto switchD_03717c6c_default;
  case 4:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    __s = "over1";
    break;
  case 5:
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    __s = "over2";
    break;
  default:
    goto switchD_03717c6c_default;
  }
  std::string::string(asStack_58,__s);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(local_a0,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
switchD_03717c6c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemZombieChanger::onGridItemInitialize() */

void __thiscall GridItemZombieChanger::onGridItemInitialize(GridItemZombieChanger *this)

{
  GridItemZombieChangerProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemZombieChangerProps>();
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_0371652c(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03716534(this + 0x128);
  SetChangerState(this,1);
  RealObject::JoinTeam((RealObject *)this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::SpawnZombie(bool) */

void __thiscall GridItemZombieChanger::SpawnZombie(GridItemZombieChanger *this,bool param_1)

{
  char cVar1;
  int iVar2;
  GridItemZombieChangerProps *pGVar3;
  string *psVar4;
  ZombieType *this_00;
  Zombie *this_01;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemZombieChangerProps>();
  Set8BytesTo0(asStack_28);
  if (param_1) {
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(pGVar3 + 0xd8));
    if (cVar1 == '\0') {
      iVar2 = FUN_037165a0(*(undefined8 *)(pGVar3 + 0xd8),*(undefined8 *)(pGVar3 + 0xe0));
      iVar2 = Sexy::Rand(iVar2);
      uVar6 = FUN_037165ac(*(undefined8 *)(pGVar3 + 0xd8),(long)iVar2);
      thunk_FUN_05475e00(asStack_28,uVar6);
    }
  }
  else {
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(pGVar3 + 0xf0));
    if (cVar1 == '\0') {
      iVar2 = FUN_037165a0(*(undefined8 *)(pGVar3 + 0xf0),*(undefined8 *)(pGVar3 + 0xf8));
      iVar2 = Sexy::Rand(iVar2);
      uVar6 = FUN_037165ac(*(undefined8 *)(pGVar3 + 0xf0),(long)iVar2);
      thunk_FUN_05475e00(asStack_28,uVar6);
    }
  }
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  plVar7 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar7 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  this_01 = (Zombie *)(*pcVar8)(plVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  (**(code **)(*(long *)this_01 + 0x9d8))(this_01);
  std::string::string((string *)&local_18,"changerZombie");
  Zombie::AddTag(this_01,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar5 + 1);
  local_18 = (float)*puVar5;
  _local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),local_18 - 20.0);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieChanger::onAnimationDone(std::string const&) */

void __thiscall GridItemZombieChanger::onAnimationDone(GridItemZombieChanger *this,string *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = std::operator==(param_1,"start");
  if (bVar1) {
    SetChangerState(this,3);
    return;
  }
  bVar2 = std::operator==(param_1,"over1");
  bVar1 = true;
  if ((!bVar2) && (bVar3 = std::operator==(param_1,"over2"), bVar1 = bVar2, !bVar3)) {
    return;
  }
  SpawnZombie(this,bVar1);
  SetChangerState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieChanger::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemZombieChanger::GatherPlantingRestrictions
          (GridItemZombieChanger *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_c = 0x2f;
  local_8 = ___stack_chk_guard;
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
/* GridItemZombieChanger::onUpdate() */

void __thiscall GridItemZombieChanger::onUpdate(GridItemZombieChanger *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GridItemZombieChangerProps *pGVar4;
  ulong uVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1a8) == 1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    uVar3 = SharkMinion::getRow((SharkMinion *)this);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,uVar2,
               uVar3);
    uVar9 = local_20;
    uVar5 = FUN_0371658c(local_20,local_18);
    for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
      puVar6 = (undefined8 *)FUN_03716598(uVar9,uVar8);
      if ((RtObject *)*puVar6 != (RtObject *)0x0) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((pZVar7 != (Zombie *)0x0) && (cVar1 = CanChangeZombie(this,pZVar7), cVar1 != '\0')) {
          FUN_037165b4(pZVar7 + 0x59a);
          (**(code **)(*(long *)pZVar7 + 0x48))(pZVar7);
          SetChangerState(this,2);
          break;
        }
        uVar9 = local_20;
        uVar5 = FUN_0371658c(local_20,local_18);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else if ((*(int *)(this + 0x1a8) == 3) &&
          (fVar10 = (float)PVZ_T(), *(float *)(this + 0x1ac) < fVar10)) {
    pGVar4 = GridItem::GetProps<GridItemZombieChangerProps>();
    fVar10 = (float)Sexy::Rand(1.0);
    if (fVar10 < *(float *)(pGVar4 + 0xd0)) {
      SetChangerState(this,4);
    }
    else {
      SetChangerState(this,5);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

