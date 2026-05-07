// Class: ZombieDevilsAlienGargantuar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuar::findTarget() */

void __thiscall ZombieDevilsAlienGargantuar::findTarget(ZombieDevilsAlienGargantuar *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Zombie *pZVar4;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar5;
  RealObject *extraout_x0;
  Plant *extraout_x0_00;
  Zombie *pZVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x3a0))(auStack_30,this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pZVar4 = (Zombie *)Zombie::GetForcedTarget((Zombie *)this);
    (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,2,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00);
      if (((((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
           (cVar1 = Zombie::HasCondition(this_00,0x65), cVar1 == '\0')) &&
          ((cVar1 = Zombie::HasCondition(this_00,0x27), cVar1 == '\0' &&
           (cVar1 = Zombie::HasCondition(this_00,0x25), cVar1 == '\0')))) &&
         (((cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0' &&
           (cVar1 = Zombie::HasCondition(this_00,0x2c), cVar1 == '\0')) &&
          (((pZVar4 == this_00 || (pZVar4 == (Zombie *)0x0)) &&
           (cVar1 = Zombie::HasCondition(this_00,0x71), cVar1 == '\0')))))) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        bVar2 = std::operator!=((string *)(lVar5 + 8),"renai_toxicwater");
        pZVar6 = this_00;
        if (bVar2) goto LAB_0345fd28;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,4,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
      if (((cVar1 != '\0') &&
          (cVar1 = (**(code **)(*(long *)extraout_x0 + 0x218))(extraout_x0,this), cVar1 != '\0')) &&
         ((pZVar6 = (Zombie *)extraout_x0, pZVar4 == (Zombie *)extraout_x0 ||
          (pZVar4 == (Zombie *)0x0)))) goto LAB_0345fd28;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    (**(code **)(*(long *)this + 0xd0))((__normal_iterator *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,1,auStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      nop();
      cVar1 = Zombie::WillTargetPlant((Zombie *)this,extraout_x0_00);
      if ((cVar1 != '\0') &&
         ((pZVar6 = (Zombie *)extraout_x0_00, pZVar4 == (Zombie *)extraout_x0_00 ||
          (pZVar4 == (Zombie *)0x0)))) goto LAB_0345fd28;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    pZVar6 = (Zombie *)0x0;
LAB_0345fd28:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    pZVar6 = (Zombie *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pZVar6);
  }
  return;
}


/* ZombieDevilsAlienGargantuar::onInitialized() */

void __thiscall ZombieDevilsAlienGargantuar::onInitialized(ZombieDevilsAlienGargantuar *this)

{
  size_t in_x2;
  
  ZombieGargantuar::onInitialized((ZombieGargantuar *)this);
  this[0x808] = (ZombieDevilsAlienGargantuar)0x0;
  std::string::append((string *)(this + 0xb8),"spawn",in_x2);
  return;
}


/* ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar() */

void __thiscall
ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar(ZombieDevilsAlienGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_069b4d40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDevilsAlienGargantuar_069b5798;
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar() */

void __thiscall
ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar(ZombieDevilsAlienGargantuar *this)

{
  ~ZombieDevilsAlienGargantuar(this + -0x10);
  return;
}


/* ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar() */

void __thiscall
ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar(ZombieDevilsAlienGargantuar *this)

{
  ~ZombieDevilsAlienGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar() */

void __thiscall
ZombieDevilsAlienGargantuar::~ZombieDevilsAlienGargantuar(ZombieDevilsAlienGargantuar *this)

{
  ~ZombieDevilsAlienGargantuar(this + -0x10);
  return;
}


/* ZombieDevilsAlienGargantuar::updateState_Walk() */

void __thiscall ZombieDevilsAlienGargantuar::updateState_Walk(ZombieDevilsAlienGargantuar *this)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar2 <= (float)iVar1) {
    ZombieGargantuar::updateState_Walk((ZombieGargantuar *)this);
    return;
  }
  this[0x808] = (ZombieDevilsAlienGargantuar)0x1;
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  return;
}


/* ZombieDevilsAlienGargantuar::ZombieDevilsAlienGargantuar() */

void __thiscall
ZombieDevilsAlienGargantuar::ZombieDevilsAlienGargantuar(ZombieDevilsAlienGargantuar *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_069b4d40;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDevilsAlienGargantuar_069b5798;
  return;
}


/* ZombieDevilsAlienGargantuar::StaticNew() */

ZombieDevilsAlienGargantuar * ZombieDevilsAlienGargantuar::StaticNew(void)

{
  ZombieDevilsAlienGargantuar *this;
  
  this = ::operator_new(0x810);
  ZombieDevilsAlienGargantuar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuar::StaticClassInit() */

void ZombieDevilsAlienGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDevilsAlienGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_04d63080,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDevilsAlienGargantuar::StaticGetClass() */

long * ZombieDevilsAlienGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDevilsAlienGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDevilsAlienGargantuar::GetClass() const */

long * ZombieDevilsAlienGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDevilsAlienGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuar::SpawnSlime() */

void __thiscall ZombieDevilsAlienGargantuar::SpawnSlime(ZombieDevilsAlienGargantuar *this)

{
  char cVar1;
  int iVar2;
  GridItemSlime *pGVar3;
  long lVar4;
  RtObject *this_00;
  Board *this_01;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if (this[0x808] == (ZombieDevilsAlienGargantuar)0x0) {
    pGVar3 = (GridItemSlime *)FUN_04d66714(local_18,local_14);
    lVar4 = FUN_04d667f8(local_18,local_14);
  }
  else {
    local_18 = local_18 + -1;
    pGVar3 = (GridItemSlime *)FUN_04d66714(local_18,local_14);
    lVar4 = FUN_04d667f8(local_18,local_14);
  }
  if (pGVar3 == (GridItemSlime *)0x0) {
    if (((lVar4 == 0) &&
        (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_18),
        cVar1 == '\0')) &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_18), cVar1 == '\0')) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      iVar2 = Board::GetGridSquareType(this_01,local_18,local_14);
      if ((iVar2 != 0) && (iVar2 != 3)) {
        std::string::string(asStack_10,"devils_slime");
        this_00 = (RtObject *)Board::AddGridItem(this_01,asStack_10,local_18,local_14,1);
        pGVar3 = Sexy::RtObject::Cast<GridItemSlime>(this_00);
        std::string::~string(asStack_10);
        nop();
        FUN_04d616b0(pGVar3 + 0x24,1);
        FUN_04d61a38(pGVar3 + 0x1b0);
        GridItemSlime::SetIdle(pGVar3);
      }
    }
  }
  else {
    FUN_04d61a38(pGVar3 + 0x1b0);
    GridItemSlime::ResetTimer(pGVar3);
    (**(code **)(*(long *)pGVar3 + 0x198))(pGVar3,1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDevilsAlienGargantuar::playDeathAnimation() */

void __thiscall ZombieDevilsAlienGargantuar::playDeathAnimation(ZombieDevilsAlienGargantuar *this)

{
  Zombie::playDeathAnimation((Zombie *)this);
  SpawnSlime(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuar::FindFireSlimeTarget(Sexy::TRect<int>) */

void ZombieDevilsAlienGargantuar::FindFireSlimeTarget
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               RealObject *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RealObject *this;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtrBase *pRVar6;
  undefined8 local_60;
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,param_3);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
      if (bVar2) {
        this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        cVar1 = RealObject::IsOnOpposingTeam(this,param_2);
        if (cVar1 != '\0') {
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     &local_38,(RtWeakPtr *)aRStack_50);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    iVar3 = FUN_04d61928(local_38,local_30);
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       &local_38);
    if (cVar1 == '\0') {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
      BoardEntity::CalcGridPosition();
      EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
                ((BoardEntitySorter_Closest *)aRStack_48,aRStack_50);
      std::
      sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,EntityFinder::BoardEntitySorter_Closest>
                (uVar4,uVar5,(BoardEntitySorter_Closest *)aRStack_48);
      pRVar6 = (RtWeakPtrBase *)FUN_04d61934(local_38,(long)(iVar3 + -1));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,pRVar6);
      goto LAB_04d6cb40;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
LAB_04d6cb40:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDevilsAlienGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieDevilsAlienGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieDevilsAlienGargantuarProps *pZVar5;
  float *pfVar6;
  long *plVar7;
  Projectile *this;
  PrimalRafflesiaProjectile *pPVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  int local_60;
  int local_5c;
  RtMixedPtrBase aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieGargantuar::onPopAnimCommand(param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_4,"smash_left");
  if (bVar1) {
    pZVar5 = Zombie::GetProps<ZombieDevilsAlienGargantuarProps>((Zombie *)param_1);
    cVar2 = FUN_04d61a04(pZVar5 + 0x268);
  }
  else {
    bVar1 = std::operator==(param_4,"smash_righ");
    if (!bVar1) goto LAB_04d6cc5c;
    pZVar5 = Zombie::GetProps<ZombieDevilsAlienGargantuarProps>((Zombie *)param_1);
    cVar2 = FUN_04d61a04(pZVar5 + 0x268);
  }
  if (cVar2 != '\0') {
    BoardEntity::CalcGridPosition();
    Sexy::Insets::Insets((Insets *)&local_38,(Insets *)(pZVar5 + 0x26c));
    Sexy::Insets::Insets(aIStack_28,local_60 + local_38,local_5c + local_34,local_30,local_2c);
    Sexy::Insets::Insets((Insets *)local_18,aIStack_28);
    FindFireSlimeTarget(aRStack_58,param_1,(Insets *)local_18);
    DVec3::DVec3((DVec3 *)&local_48);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 == '\0') {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      local_44 = pfVar6[1];
      local_48 = *pfVar6 + 600.0;
      local_40 = 0;
    }
    else {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      local_18[0] = (**(code **)(*plVar7 + 0x3b0))(0x3f800000);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_48,(SexyVector3 *)local_18);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_48 = local_48 - (float)iVar3 * 0.33;
    }
    std::string::string((string *)local_18,"Play_Plant_PrimalRafflesia_Attack");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_18,0.0);
    std::string::~string((string *)local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(pZVar5 + 0x280));
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar2 != '\0') {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_50);
      this = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar10 + 50.0),fVar11 - 50.0,0,uVar9,(Insets *)local_18,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      if (this != (Projectile *)0x0) {
        fVar10 = (float)(**(code **)(*(long *)param_1 + 0x308))(0x3f800000,param_1);
        Projectile::LaunchAt(this,(SexyVector3 *)&local_48,200.0,fVar10 + 1.0);
        pPVar8 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)this);
        Sexy::SexyVector3::operator=((SexyVector3 *)(pPVar8 + 0x1a8),(SexyVector3 *)&local_48);
        pPVar8 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)this);
        FUN_04d61a48(pPVar8 + 0x1b4);
        pPVar8 = Sexy::RtObject::Cast<PrimalRafflesiaProjectile>((RtObject *)this);
        FUN_04d61a40(pPVar8 + 0x1b5);
        uVar4 = FUN_04d616ac(*(undefined4 *)(param_1 + 0x24));
        FUN_04d616b0(this + 0x24,uVar4);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
LAB_04d6cc5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

