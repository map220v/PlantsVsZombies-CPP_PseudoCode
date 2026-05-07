// Class: GridItemKongmingLantern


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::StaticClassInit() */

void GridItemKongmingLantern::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemKongmingLantern");
    (*pcVar2)(plVar1,asStack_10,FUN_03476a80,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemKongmingLantern::StaticGetClass() */

long * GridItemKongmingLantern::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemKongmingLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemKongmingLantern::GetClass() const */

long * GridItemKongmingLantern::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemKongmingLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::randomlySelectTarget() */

void __thiscall GridItemKongmingLantern::randomlySelectTarget(GridItemKongmingLantern *this)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uStack_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  iVar2 = RandRangeInt(0,4);
  pcVar3 = *(code **)(*(long *)this + 0x2d0);
  *(ulong *)(this + 0x1f0) = CONCAT44(uStack_c,iVar2);
  (*pcVar3)((float)(8 - iVar2),this,this + 0x1f0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemKongmingLantern::GridItemKongmingLantern() */

void __thiscall GridItemKongmingLantern::GridItemKongmingLantern(GridItemKongmingLantern *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0663c730;
  *(undefined ***)(this + 0x10) = &PTR__GridItemKongmingLantern_0663ca38;
  Sexy::Point::Point((Point *)(this + 0x1f0));
  return;
}


/* GridItemKongmingLantern::StaticNew() */

GridItemKongmingLantern * GridItemKongmingLantern::StaticNew(void)

{
  GridItemKongmingLantern *this;
  
  this = ::operator_new(0x200);
  GridItemKongmingLantern(this);
  return this;
}


/* GridItemKongmingLantern::~GridItemKongmingLantern() */

void __thiscall GridItemKongmingLantern::~GridItemKongmingLantern(GridItemKongmingLantern *this)

{
  *(undefined ***)this = &PTR_GetClass_0663c730;
  *(undefined ***)(this + 0x10) = &PTR__GridItemKongmingLantern_0663ca38;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemKongmingLantern::~GridItemKongmingLantern() */

void __thiscall GridItemKongmingLantern::~GridItemKongmingLantern(GridItemKongmingLantern *this)

{
  ~GridItemKongmingLantern(this + -0x10);
  return;
}


/* GridItemKongmingLantern::~GridItemKongmingLantern() */

void __thiscall GridItemKongmingLantern::~GridItemKongmingLantern(GridItemKongmingLantern *this)

{
  ~GridItemKongmingLantern(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemKongmingLantern::~GridItemKongmingLantern() */

void __thiscall GridItemKongmingLantern::~GridItemKongmingLantern(GridItemKongmingLantern *this)

{
  ~GridItemKongmingLantern(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::onGridItemInitialize() */

void __thiscall GridItemKongmingLantern::onGridItemInitialize(GridItemKongmingLantern *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,2);
  FUN_03475684(this + 0x195);
  *(undefined4 *)(this + 0x1e8) = 0;
  this[0x1ec] = (GridItemKongmingLantern)0x0;
  this[0x1ed] = (GridItemKongmingLantern)0x0;
  *(undefined4 *)(this + 0x1f8) = 0;
  randomlySelectTarget(this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::onUpdate() */

void __thiscall GridItemKongmingLantern::onUpdate(GridItemKongmingLantern *this)

{
  char cVar1;
  RtObject *this_00;
  AnimRigKongmingLantern *pAVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(this + 0x1f0),(TPoint *)asStack_58);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x1f0) = 10;
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pAVar2 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(this_00);
    std::string::string(asStack_68,"auto");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    AnimRigKongmingLantern::playDown(pAVar2,asStack_68,aRStack_50);
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
  lVar4 = *(long *)this;
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
    if (pcVar3 == GridItem::GetMaxHitpoints) goto LAB_03477610;
LAB_03477688:
    fVar6 = (float)(*pcVar3)();
    if (fVar6 * 0.6 < fVar5) goto LAB_03477628;
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
    if (pcVar3 != GridItem::GetMaxHitpoints) goto LAB_03477688;
LAB_03477610:
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    if (fVar6 * 0.6 < fVar5) goto LAB_03477628;
  }
  lVar4 = *(long *)this;
  *(undefined4 *)(this + 0x1f8) = 1;
  if (*(code **)(lVar4 + 0x1d8) == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar5 = (float)(**(code **)(lVar4 + 0x1d8))();
    lVar4 = *(long *)this;
  }
  if (*(code **)(lVar4 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(**(code **)(lVar4 + 0x1e0))();
  }
  if (fVar5 <= fVar6 * 0.3) {
    *(undefined4 *)(this + 0x1f8) = 2;
  }
LAB_03477628:
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::OverrideProjectileCollision(Projectile*) */

void __thiscall
GridItemKongmingLantern::OverrideProjectileCollision
          (GridItemKongmingLantern *this,Projectile *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  RtObject *pRVar5;
  AnimRigKongmingLantern *pAVar6;
  char *__s;
  ulong uVar7;
  undefined8 uVar8;
  AnimRigKongmingLantern *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Projectile::GetProps(param_1);
  if (this[0x1ed] == (GridItemKongmingLantern)0x0) {
    iVar1 = *(int *)(this + 0x1f8);
    this[0x1ed] = (GridItemKongmingLantern)0x1;
    if (iVar1 == 1) {
      GridItemAnimation::GetAnimRig();
      pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      local_98 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(pRVar5);
      __s = "two";
    }
    else if (iVar1 == 2) {
      GridItemAnimation::GetAnimRig();
      pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      local_98 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(pRVar5);
      __s = "three";
    }
    else {
      if (iVar1 != 0) goto LAB_03477880;
      GridItemAnimation::GetAnimRig();
      pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      local_98 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(pRVar5);
      __s = "one";
    }
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    AnimRigKongmingLantern::playHit(local_98,asStack_68,aRStack_50);
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
LAB_03477880:
  uVar8 = *(undefined8 *)(lVar2 + 0x198);
  uVar7 = 0;
  uVar3 = FUN_034755b8(uVar8,*(undefined8 *)(lVar2 + 0x1a0));
  if (uVar3 != 0) {
    do {
      if ((*(int *)(this + 0x1f8) == 2) && (piVar4 = (int *)FUN_034755c4(uVar8,uVar7), *piVar4 == 2)
         ) {
        this[0x1ec] = (GridItemKongmingLantern)0x1;
        GridItemAnimation::GetAnimRig();
        pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
        pAVar6 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(pRVar5);
        std::string::string(asStack_68,"hit");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        AnimRigKongmingLantern::playDown(pAVar6,asStack_68,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_68);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        uVar8 = *(undefined8 *)(lVar2 + 0x198);
        uVar3 = FUN_034755b8(uVar8,*(undefined8 *)(lVar2 + 0x1a0));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  GridItemBoardEntityConditionTarget::OverrideProjectileCollision
            ((GridItemBoardEntityConditionTarget *)this,param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::checkAndKillPlants() */

void __thiscall GridItemKongmingLantern::checkAndKillPlants(GridItemKongmingLantern *this)

{
  bool bVar1;
  Insets *pIVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  code *pcVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = (Insets *)(**(code **)(*(long *)this + 0x178))();
  Sexy::Insets::Insets(aIStack_90,pIVar2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInRectangle(avStack_80,1,aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar1) {
LAB_03477edc:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (pPVar4 != (Plant *)0x0) {
      pcVar5 = *(code **)(*(long *)pPVar4 + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,2,0,aPStack_a0,0);
      (*pcVar5)(pPVar4,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      goto LAB_03477edc;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::onAnimStoppedCallback(std::string const&) */

void __thiscall
GridItemKongmingLantern::onAnimStoppedCallback(GridItemKongmingLantern *this,string *param_1)

{
  bool bVar1;
  RtObject *pRVar2;
  AnimRigKongmingLantern *pAVar3;
  PopAnimRig *pPVar4;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  int local_68 [2];
  RtId aRStack_60 [4];
  int local_5c;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"hit_one");
  if (bVar1) {
    this[0x1ed] = (GridItemKongmingLantern)0x0;
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  bVar1 = std::operator==(param_1,"hit_two");
  if (bVar1) {
    this[0x1ed] = (GridItemKongmingLantern)0x0;
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle_two");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  bVar1 = std::operator==(param_1,"hit_three");
  if (bVar1) {
    this[0x1ed] = (GridItemKongmingLantern)0x0;
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle_three");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar4,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  bVar1 = std::operator==(param_1,"hit_down");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    pAVar3 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(pRVar2);
    std::string::string((string *)local_68,"hit");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    AnimRigKongmingLantern::playDisappear(pAVar3,(string *)local_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)local_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  bVar1 = std::operator==(param_1,"auto_down");
  if (bVar1) {
    checkAndKillPlants(this);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_58,"bonfire");
    GridItem::GetGridLocation();
    GridItem::GetGridLocation();
    pRVar2 = (RtObject *)Board::AddGridItem(this_00,asStack_58,local_68[0],local_5c,1);
    Sexy::RtObject::Cast<GridItemBonfire>(pRVar2);
    std::string::~string(asStack_58);
    nop();
    (**(code **)(*(long *)this + 0x48))(this);
  }
  bVar1 = std::operator==(param_1,"hit_disappear");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x230))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemKongmingLantern::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemKongmingLantern::TakeDamage(GridItemKongmingLantern *this,DamageInfo *param_1)

{
  GridItemKongmingLantern GVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 extraout_x0;
  RtObject *this_00;
  AnimRigKongmingLantern *pAVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d8 [8];
  RtMixedPtr aRStack_d0 [8];
  string asStack_c8 [8];
  RtId aRStack_c0 [8];
  RtWeakPtr aRStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_b0 [72];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x1ec] != (GridItemKongmingLantern)0x0) ||
      (cVar2 = AccessoryContent::IsUnlocked((AccessoryContent *)this), cVar2 != '\0')) ||
     (cVar2 = (**(code **)(*(long *)this + 0x1f8))(this), cVar2 == '\0')) goto LAB_034783d0;
  if (*(RealObject **)param_1 != (RealObject *)0x0) {
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,*(RealObject **)param_1);
    if (cVar2 == '\0') goto LAB_034783d0;
    bVar3 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1);
    if (bVar3) {
      cVar2 = (**(code **)(*(long *)this + 0x200))(this);
      if (cVar2 == '\0') goto LAB_034783d0;
      nop();
      cVar2 = (**(code **)(*(long *)this + 0x210))(this,extraout_x0);
      if (cVar2 == '\0') goto LAB_034783d0;
    }
  }
  uVar7 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = FUN_034755cc(uVar9,*(undefined8 *)(param_1 + 0x40));
    if (uVar5 <= uVar7) break;
    puVar4 = (undefined4 *)FUN_034755d8(uVar9,uVar7);
                    /* WARNING: Load size is inaccurate */
    GridItem::ApplyCondition(*(GridItem **)(puVar4 + 1),this,*puVar4);
    uVar7 = uVar7 + 1;
  }
  bVar3 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
  if (bVar3) {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar11 = (float)GridItem::GetHitpoints((GridItem *)this);
      pcVar8 = GridItem::GetHitpoints;
    }
    else {
      fVar11 = (float)(**(code **)(*(long *)this + 0x1d8))();
      pcVar8 = *(code **)(*(long *)this + 0x1d8);
    }
  }
  else {
    fVar11 = *(float *)(param_1 + 8);
    pcVar8 = *(code **)(*(long *)this + 0x1d8);
  }
  if (pcVar8 == GridItem::GetHitpoints) {
    fVar10 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar10 = (float)(*pcVar8)();
  }
  FUN_034754c8(fVar10 - fVar11,this + 0x128);
  DamageInfo::DamageInfo(aDStack_68,param_1);
  local_60 = fVar11;
  (**(code **)(*(long *)this + 0x278))(this,aDStack_68);
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar11 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar11 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar11 <= 0.0) {
    ToolPacketData::GetProps();
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_b8);
    if (bVar3) {
      GVar1 = this[0x1ec];
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
      if (GVar1 == (GridItemKongmingLantern)0x0) {
        this[0x1ec] = (GridItemKongmingLantern)0x1;
        GridItemAnimation::GetAnimRig();
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d8);
        pAVar6 = Sexy::RtObject::Cast<AnimRigKongmingLantern>(this_00);
        std::string::string(asStack_c8,"hit");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d0);
        std::string::string((string *)aRStack_b8,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_b0,aRStack_c0,aRStack_b8);
        AnimRigKongmingLantern::playDown(pAVar6,asStack_c8,aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
        std::string::~string((string *)aRStack_b8);
        nop();
        Sexy::RtId::~RtId(aRStack_c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0)
        ;
        std::string::~string(asStack_c8);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d8);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
LAB_034783d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

