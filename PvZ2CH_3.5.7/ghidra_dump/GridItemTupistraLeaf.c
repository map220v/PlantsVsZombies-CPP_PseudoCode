// Class: GridItemTupistraLeaf


/* GridItemTupistraLeaf::onDeadFinished(std::string const&) */

void GridItemTupistraLeaf::onDeadFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemTupistraLeaf::CalcRenderOrder() const */

void __thiscall GridItemTupistraLeaf::CalcRenderOrder(GridItemTupistraLeaf *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemTupistraLeaf::CalcRenderOrder() const */

void __thiscall GridItemTupistraLeaf::CalcRenderOrder(GridItemTupistraLeaf *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemTupistraLeaf::~GridItemTupistraLeaf() */

void __thiscall GridItemTupistraLeaf::~GridItemTupistraLeaf(GridItemTupistraLeaf *this)

{
  *(undefined ***)this = &PTR_GetClass_067f10c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTupistraLeaf_067f1378;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemTupistraLeaf::~GridItemTupistraLeaf() */

void __thiscall GridItemTupistraLeaf::~GridItemTupistraLeaf(GridItemTupistraLeaf *this)

{
  ~GridItemTupistraLeaf(this + -0x10);
  return;
}


/* GridItemTupistraLeaf::~GridItemTupistraLeaf() */

void __thiscall GridItemTupistraLeaf::~GridItemTupistraLeaf(GridItemTupistraLeaf *this)

{
  ~GridItemTupistraLeaf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTupistraLeaf::~GridItemTupistraLeaf() */

void __thiscall GridItemTupistraLeaf::~GridItemTupistraLeaf(GridItemTupistraLeaf *this)

{
  ~GridItemTupistraLeaf(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeaf::StaticClassInit() */

void GridItemTupistraLeaf::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTupistraLeaf");
    (*pcVar2)(plVar1,asStack_10,FUN_04156960,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTupistraLeaf::StaticGetClass() */

long * GridItemTupistraLeaf::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTupistraLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTupistraLeaf::GetClass() const */

long * GridItemTupistraLeaf::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemTupistraLeaf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTupistraLeaf::GridItemTupistraLeaf() */

void __thiscall GridItemTupistraLeaf::GridItemTupistraLeaf(GridItemTupistraLeaf *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067f10c0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTupistraLeaf_067f1378;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  *(undefined4 *)(this + 0x1b4) = 0x3f800000;
  return;
}


/* GridItemTupistraLeaf::StaticNew() */

GridItemTupistraLeaf * GridItemTupistraLeaf::StaticNew(void)

{
  GridItemTupistraLeaf *this;
  
  this = ::operator_new(0x1b8);
  GridItemTupistraLeaf(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeaf::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemTupistraLeaf::isZombieTypeBlacklisted(GridItemTupistraLeaf *this,string *param_1)

{
  char cVar1;
  GridItemTupistraLeafProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemTupistraLeafProps>();
  local_18 = FUN_04157158(*(undefined8 *)(pGVar2 + 0xd8));
  local_10 = FUN_041571a8(*(undefined8 *)(pGVar2 + 0xe0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_041575b4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_041575b4;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeaf::setState(GridItemTupistraLeafState) */

void __thiscall GridItemTupistraLeaf::setState(GridItemTupistraLeaf *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"birth");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onResetFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
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
  else if (param_2 == 3) {
    (**(code **)(*(long *)this + 0x48))();
  }
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTupistraLeaf::SetIdle() */

void __thiscall GridItemTupistraLeaf::SetIdle(GridItemTupistraLeaf *this)

{
  setState(this,2);
  return;
}


/* GridItemTupistraLeaf::ResetTimer() */

void __thiscall GridItemTupistraLeaf::ResetTimer(GridItemTupistraLeaf *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,2);
  return;
}


/* GridItemTupistraLeaf::onResetFinished(std::string const&) */

void GridItemTupistraLeaf::onResetFinished(string *param_1)

{
  setState((GridItemTupistraLeaf *)param_1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTupistraLeaf::tryAffectZombies() */

void __thiscall GridItemTupistraLeaf::tryAffectZombies(GridItemTupistraLeaf *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  GridItemTupistraLeafProps *pGVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar6 = GridItem::GetProps<GridItemTupistraLeafProps>();
  fVar9 = *(float *)(this + 0x1b4);
  fVar10 = *(float *)(pGVar6 + 0xf0);
  Sexy::Point::Point((Point *)&local_88,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar9 * fVar10),local_80,local_7c,aDStack_68,this,(Point *)&local_88,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(2,4);
  uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar5 = SharkMinion::getRow((SharkMinion *)this);
  EntityFinder::GetEntitiesAtGridSquare((FastCurve *)&local_80,uVar3,uVar4,uVar5);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if ((this_00 != (Zombie *)0x0) &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(), cVar2 == '\0')) {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar2 = isZombieTypeBlacklisted(this,(string *)(lVar8 + 8));
      if ((cVar2 == '\0') &&
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
         cVar2 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTupistraLeaf::onUpdate() */

void __thiscall GridItemTupistraLeaf::onUpdate(GridItemTupistraLeaf *this)

{
  GridItemTupistraLeafProps *pGVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemTupistraLeafProps>();
    if (*(float *)(pGVar1 + 0xd0) < fVar2 - fVar4) {
      setState(this,3);
      return;
    }
    fVar2 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x1b0);
    pGVar1 = GridItem::GetProps<GridItemTupistraLeafProps>();
    if (*(float *)(pGVar1 + 0xf4) < fVar2 - fVar4) {
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x1b0) = uVar3;
      tryAffectZombies(this);
      return;
    }
  }
  return;
}

