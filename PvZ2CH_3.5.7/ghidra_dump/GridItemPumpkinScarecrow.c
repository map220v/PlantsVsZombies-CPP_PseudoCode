// Class: GridItemPumpkinScarecrow


/* GridItemPumpkinScarecrow::onDeathAnimationDone(std::string const&) */

void GridItemPumpkinScarecrow::onDeathAnimationDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemPumpkinScarecrow::CalcRenderOrder() const */

void __thiscall GridItemPumpkinScarecrow::CalcRenderOrder(GridItemPumpkinScarecrow *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x635d8,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemPumpkinScarecrow::CalcRenderOrder() const */

void __thiscall GridItemPumpkinScarecrow::CalcRenderOrder(GridItemPumpkinScarecrow *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::StaticClassInit() */

void GridItemPumpkinScarecrow::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPumpkinScarecrow");
    (*pcVar2)(plVar1,asStack_10,FUN_04c944c8,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::StaticGetClass() */

long * GridItemPumpkinScarecrow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPumpkinScarecrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPumpkinScarecrow::GetClass() const */

long * GridItemPumpkinScarecrow::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPumpkinScarecrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::GridItemPumpkinScarecrow() */

void __thiscall GridItemPumpkinScarecrow::GridItemPumpkinScarecrow(GridItemPumpkinScarecrow *this)

{
  LawnApp *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  this[0x1ac] = (GridItemPumpkinScarecrow)0x0;
  *(undefined ***)this = &PTR_GetClass_06995800;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPumpkinScarecrow_06995ab8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  this[0x1c0] = (GridItemPumpkinScarecrow)0x0;
  *(undefined4 *)(this + 0x1c4) = 0xffffffff;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"ZombiePumpkinScarecrowBird");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::StaticNew() */

GridItemPumpkinScarecrow * GridItemPumpkinScarecrow::StaticNew(void)

{
  GridItemPumpkinScarecrow *this;
  
  this = ::operator_new(0x1c8);
  GridItemPumpkinScarecrow(this);
  return this;
}


/* GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow() */

void __thiscall GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow(GridItemPumpkinScarecrow *this)

{
  *(undefined ***)this = &PTR_GetClass_06995800;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPumpkinScarecrow_06995ab8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow() */

void __thiscall GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow(GridItemPumpkinScarecrow *this)

{
  ~GridItemPumpkinScarecrow(this + -0x10);
  return;
}


/* GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow() */

void __thiscall GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow(GridItemPumpkinScarecrow *this)

{
  ~GridItemPumpkinScarecrow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow() */

void __thiscall GridItemPumpkinScarecrow::~GridItemPumpkinScarecrow(GridItemPumpkinScarecrow *this)

{
  ~GridItemPumpkinScarecrow(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::playIdleWithoutBird() */

void __thiscall GridItemPumpkinScarecrow::playIdleWithoutBird(GridItemPumpkinScarecrow *this)

{
  PopAnimRig *pPVar1;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("idle%dempty",asStack_48,(ulong)*(uint *)(this + 0x1a8));
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::playIdleWithBird() */

void __thiscall GridItemPumpkinScarecrow::playIdleWithBird(GridItemPumpkinScarecrow *this)

{
  PopAnimRig *pPVar1;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("idle%d",asStack_48,(ulong)*(uint *)(this + 0x1a8));
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::standUpNewBird() */

void __thiscall GridItemPumpkinScarecrow::standUpNewBird(GridItemPumpkinScarecrow *this)

{
  long lVar1;
  long *plVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  (**(code **)(*plVar2 + 0x48))();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c4) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::pickBirdPosTypeToFlyOut() */

void __thiscall GridItemPumpkinScarecrow::pickBirdPosTypeToFlyOut(GridItemPumpkinScarecrow *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GridItemPumpkinScarecrowProps *pGVar4;
  
  pGVar4 = GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  iVar2 = FUN_04c93c40(*(undefined8 *)(pGVar4 + 0xd0),*(undefined8 *)(pGVar4 + 0xd8));
  iVar1 = *(int *)(this + 0x1a8);
  iVar3 = Sexy::Rand(iVar2 - iVar1);
  *(int *)(this + 0x1c4) = (iVar3 - (iVar2 - iVar1)) + 3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::playSpawnAnimation() */

void GridItemPumpkinScarecrow::playSpawnAnimation(void)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_58,"spawn");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onSpawnAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::thrownPlant() */

void __thiscall GridItemPumpkinScarecrow::thrownPlant(GridItemPumpkinScarecrow *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Plant *this_00;
  undefined8 *puVar6;
  GridItem *pGVar7;
  RtObject *this_01;
  code *pcVar8;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar5 = operator|(1,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar5,uVar4,uVar3);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_01 = (RtObject *)*puVar6;
    bVar1 = Sexy::RtObject::IsA<Plant>(this_01);
    if (((!bVar1) || (nop(), this_00 == (Plant *)0x0)) || (*(float *)(this_00 + 0xd8) <= 0.0)) {
      pGVar7 = Sexy::RtObject::Cast<GridItem>(this_01);
      if (((pGVar7 != (GridItem *)0x0) &&
          (cVar2 = (**(code **)(*(long *)pGVar7 + 0x1f8))(), cVar2 != '\0')) &&
         (this != (GridItemPumpkinScarecrow *)pGVar7)) {
        pcVar8 = *(code **)(*(long *)pGVar7 + 0x120);
        DamageInfo::DamageInfo(aDStack_68);
        (*pcVar8)(pGVar7,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      Plant::beThrown(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::calcDamageState() */

void __thiscall GridItemPumpkinScarecrow::calcDamageState(GridItemPumpkinScarecrow *this)

{
  GridItemPumpkinScarecrowProps *pGVar1;
  ulong uVar2;
  float *pfVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)&local_20,(vector *)(pGVar1 + 0xd0));
  lVar6 = *(long *)this;
  pcVar4 = *(code **)(lVar6 + 0x1d8);
  if (pcVar4 == GridItem::GetHitpoints) {
    fVar8 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar4 = *(code **)(lVar6 + 0x1e0);
  }
  else {
    fVar8 = (float)(*pcVar4)();
    pcVar4 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar4 == GridItem::GetMaxHitpoints) {
    fVar9 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar9 = (float)(*pcVar4)();
  }
  uVar2 = FUN_04c93c40(local_20,local_18);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xffffffff;
    if (uVar5 == uVar2) {
      uVar7 = 0xffffffff;
      break;
    }
    pfVar3 = (float *)FUN_04c93c58(local_20,uVar5);
    uVar5 = uVar5 + 1;
  } while (fVar8 / fVar9 <= *pfVar3);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::flyInANewBird() */

void __thiscall GridItemPumpkinScarecrow::flyInANewBird(GridItemPumpkinScarecrow *this)

{
  undefined4 uVar1;
  string *psVar2;
  RtObject *this_00;
  ZombiePumpkinScarecrowBird *pZVar3;
  undefined4 *puVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_20,"pumpkin_scarecrow_bird");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  this_00 = (RtObject *)(*pcVar6)(plVar5,aRStack_18,0xfffffffb,0);
  pZVar3 = Sexy::RtObject::Cast<ZombiePumpkinScarecrowBird>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  uVar1 = FUN_04c93c2c(*(undefined4 *)(this + 0x50));
  (**(code **)(*(long *)pZVar3 + 0x198))(pZVar3,uVar1);
  (**(code **)(*(long *)pZVar3 + 0x9d8))(pZVar3);
  puVar4 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  ZombiePumpkinScarecrowBird::flyToScarecrow(*puVar4,puVar4[1],puVar4[2],pZVar3);
  pcVar6 = *(code **)(*(long *)pZVar3 + 0x78);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,1000.0,0.0,100.0);
  (*pcVar6)(pZVar3,aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::flyOutABird() */

void __thiscall GridItemPumpkinScarecrow::flyOutABird(GridItemPumpkinScarecrow *this)

{
  undefined4 uVar1;
  string *psVar2;
  RtObject *this_00;
  ZombiePumpkinScarecrowBird *pZVar3;
  long *plVar4;
  code *pcVar5;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pickBirdPosTypeToFlyOut(this);
  if (*(int *)(this + 0x1c4) != -1) {
    plVar4 = *(long **)(gLawnApp + 0x9f0);
    pcVar5 = *(code **)(*plVar4 + 0x318);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_18,"pumpkin_scarecrow_bird");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
    this_00 = (RtObject *)(*pcVar5)(plVar4,aRStack_10,0xfffffffb,0);
    pZVar3 = Sexy::RtObject::Cast<ZombiePumpkinScarecrowBird>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    uVar1 = FUN_04c93c2c(*(undefined4 *)(this + 0x50));
    (**(code **)(*(long *)pZVar3 + 0x198))(pZVar3,uVar1);
    (**(code **)(*(long *)pZVar3 + 0x9d8))(pZVar3);
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)this);
    BoardEntity::PlaceOnBoard((SexyVector3 *)pZVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::onDamageStateChanged(int) */

void __thiscall
GridItemPumpkinScarecrow::onDamageStateChanged(GridItemPumpkinScarecrow *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  if ((param_1 != -1) && (iVar1 = *(int *)(this + 0x1a8), 0 < iVar1 - param_1)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      flyOutABird(this);
    } while (iVar2 != iVar1 - param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::setDamageState(int) */

void __thiscall GridItemPumpkinScarecrow::setDamageState(GridItemPumpkinScarecrow *this,int param_1)

{
  int iVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x1ac] == (GridItemPumpkinScarecrow)0x0) &&
     (iVar1 = *(int *)(this + 0x1a8), iVar1 != param_1)) {
    *(int *)(this + 0x1a8) = param_1;
    onDamageStateChanged(this,iVar1);
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    Sexy::StrFormat("idle%d",asStack_40,(ulong)*(uint *)(this + 0x1a8));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::onSpawnAnimationDone(std::string const&) */

void GridItemPumpkinScarecrow::onSpawnAnimationDone(string *param_1)

{
  setDamageState((GridItemPumpkinScarecrow *)param_1,0);
  thrownPlant((GridItemPumpkinScarecrow *)param_1);
  return;
}


/* GridItemPumpkinScarecrow::onDying() */

void __thiscall GridItemPumpkinScarecrow::onDying(GridItemPumpkinScarecrow *this)

{
  bool bVar1;
  int iVar2;
  GridItemPumpkinScarecrowProps *pGVar3;
  undefined8 uVar4;
  RtObject *this_00;
  ZombiePumpkinScarecrowBird *this_01;
  undefined8 uVar5;
  int iVar6;
  
  pGVar3 = GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  if (*(int *)(this + 0x1a8) != -1) {
    uVar4 = *(undefined8 *)(pGVar3 + 0xd0);
    uVar5 = *(undefined8 *)(pGVar3 + 0xd8);
    *(undefined4 *)(this + 0x1a8) = 0xffffffff;
    iVar2 = FUN_04c93c40(uVar4,uVar5);
    if (this[0x1c0] == (GridItemPumpkinScarecrow)0x0) {
      iVar2 = iVar2 + 1;
    }
    if (0 < iVar2) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        flyOutABird(this);
      } while (iVar6 != iVar2);
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (!bVar1) {
    return;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  this_01 = Sexy::RtObject::Cast<ZombiePumpkinScarecrowBird>(this_00);
  ZombiePumpkinScarecrowBird::flyAway(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::startDying() */

void __thiscall GridItemPumpkinScarecrow::startDying(GridItemPumpkinScarecrow *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] == (GridItemPumpkinScarecrow)0x0) {
    onDying(this);
    this[0x1ac] = (GridItemPumpkinScarecrow)0x1;
    FUN_04c93c38(0x3f800000,this + 0x128);
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"die");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onDeathAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::onTakeDamage(DamageInfo const&) */

void GridItemPumpkinScarecrow::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  
  GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  iVar1 = calcDamageState((GridItemPumpkinScarecrow *)param_1);
  if (iVar1 != -1) {
    setDamageState((GridItemPumpkinScarecrow *)param_1,iVar1);
    return;
  }
  startDying((GridItemPumpkinScarecrow *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::updateBird() */

void GridItemPumpkinScarecrow::updateBird(void)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  GridItemPumpkinScarecrowProps *pGVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  SexyVector3 *this_00;
  SexyVector3 *pSVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x1ac] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0) {
    pGVar2 = GridItem::GetProps<GridItemPumpkinScarecrowProps>();
    fVar4 = (float)PVZ_T();
    fVar5 = *(float *)(in_x0 + 0x1b0);
    if (fVar5 < fVar4) {
      fVar5 = *(float *)(pGVar2 + 0xe8) + fVar5;
      *(float *)(in_x0 + 0x1b0) = fVar5;
      flyInANewBird((GridItemPumpkinScarecrow *)in_x0);
      in_x0[0x1c0] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x0;
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x1b8));
    if (bVar1) {
      this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1b8));
      this_00 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this);
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(in_x0);
      local_18 = Sexy::SexyVector3::operator-(this_00,pSVar3);
      local_14 = fVar5;
      fVar4 = (float)DVec3::getLength((DVec3 *)&local_18);
      if ((fVar4 < 100.0) &&
         (in_x0[0x1c0] ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           )0x0)) {
        in_x0[0x1c0] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        )0x1;
        flyOutABird((GridItemPumpkinScarecrow *)in_x0);
        playIdleWithoutBird((GridItemPumpkinScarecrow *)in_x0);
      }
      if ((fVar4 < 30.0) && (*(int *)(in_x0 + 0x1c4) != -1)) {
        *(undefined4 *)(in_x0 + 0x1c4) = 0xffffffff;
        standUpNewBird((GridItemPumpkinScarecrow *)in_x0);
        if (local_8 == ___stack_chk_guard) {
          playIdleWithBird((GridItemPumpkinScarecrow *)in_x0);
          return;
        }
        goto LAB_04c956c0;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_04c956c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPumpkinScarecrow::onGridItemInitialize() */

void __thiscall GridItemPumpkinScarecrow::onGridItemInitialize(GridItemPumpkinScarecrow *this)

{
  GridItemPumpkinScarecrowProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemPumpkinScarecrowProps>();
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  FUN_04c93c30(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_04c93c38(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  playSpawnAnimation();
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1b0) = fVar2 + *(float *)(pGVar1 + 0xe8);
  return;
}


/* GridItemPumpkinScarecrow::onUpdate() */

void __thiscall GridItemPumpkinScarecrow::onUpdate(GridItemPumpkinScarecrow *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  updateBird();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPumpkinScarecrow::GatherPlantingRestrictions(PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemPumpkinScarecrow::GatherPlantingRestrictions
          (GridItemPumpkinScarecrow *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x7c;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

