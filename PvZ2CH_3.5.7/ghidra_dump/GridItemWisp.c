// Class: GridItemWisp


/* GridItemWisp::CalcRenderOrder() const */

void __thiscall GridItemWisp::CalcRenderOrder(GridItemWisp *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemWisp::CalcRenderOrder() const */

void __thiscall GridItemWisp::CalcRenderOrder(GridItemWisp *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemWisp::~GridItemWisp() */

void __thiscall GridItemWisp::~GridItemWisp(GridItemWisp *this)

{
  *(undefined ***)this = &PTR_GetClass_069a5e60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWisp_069a6118;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWisp::~GridItemWisp() */

void __thiscall GridItemWisp::~GridItemWisp(GridItemWisp *this)

{
  ~GridItemWisp(this + -0x10);
  return;
}


/* GridItemWisp::~GridItemWisp() */

void __thiscall GridItemWisp::~GridItemWisp(GridItemWisp *this)

{
  ~GridItemWisp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWisp::~GridItemWisp() */

void __thiscall GridItemWisp::~GridItemWisp(GridItemWisp *this)

{
  ~GridItemWisp(this + -0x10);
  return;
}


/* GridItemWisp::GridItemWisp() */

void __thiscall GridItemWisp::GridItemWisp(GridItemWisp *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069a5e60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWisp_069a6118;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0x78;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemWisp::StaticNew() */

GridItemWisp * GridItemWisp::StaticNew(void)

{
  GridItemWisp *this;
  
  this = ::operator_new(0x1c0);
  GridItemWisp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWisp::StaticClassInit() */

void GridItemWisp::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWisp");
    (*pcVar2)(plVar1,asStack_10,FUN_04cfd608,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWisp::StaticGetClass() */

long * GridItemWisp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWisp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWisp::GetClass() const */

long * GridItemWisp::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemWisp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWisp::PlayIdle() */

void GridItemWisp::PlayIdle(void)

{
  int iVar1;
  PopAnimRig *pPVar2;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_78,"idle");
  nop();
  iVar1 = RandRangeInt(0,1);
  if (0 < iVar1) {
    Sexy::StrFormat("%d",asStack_58,(ulong)(iVar1 + 1));
    thunk_FUN_054757c0(asStack_78,asStack_58);
    std::string::~string(asStack_58);
  }
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"PlayIdle");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_78,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWisp::setState(GridItemWispState) */

void __thiscall GridItemWisp::setState(GridItemWisp *this,int param_2)

{
  int iVar1;
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
    std::string::string((string *)aRStack_78,"birth");
    nop();
    iVar1 = RandRangeInt(0,2);
    if (0 < iVar1) {
      Sexy::StrFormat("%d",asStack_58,(ulong)(iVar1 + 1));
      thunk_FUN_054757c0((string *)aRStack_78,asStack_58);
      std::string::~string(asStack_58);
    }
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)asStack_68);
    std::string::string(asStack_58,"onSplatFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,(string *)aRStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)aRStack_78);
  }
  else if (param_2 == 4) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"fade");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onSplatFaded");
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
  }
  else if (param_2 == 1) {
    PlayIdle();
    param_2 = 3;
  }
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWisp::onGridItemInitialize() */

void __thiscall GridItemWisp::onGridItemInitialize(GridItemWisp *this)

{
  GridItemWispProps *pGVar1;
  undefined4 uVar2;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,2);
  uVar2 = PVZ_T();
  this[0x1b8] = (GridItemWisp)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  *(undefined4 *)(this + 0x1bc) = 0x3f800000;
  pGVar1 = GridItem::GetProps<GridItemWispProps>();
  *(int *)(this + 0x1b4) = (int)*(float *)(pGVar1 + 0xd4);
  return;
}


/* GridItemWisp::ResetTimer() */

void __thiscall GridItemWisp::ResetTimer(GridItemWisp *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemWisp::onSplatFaded(std::string const&) */

void GridItemWisp::onSplatFaded(string *param_1)

{
  setState((GridItemWisp *)param_1,5);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* GridItemWisp::onSplatFinished(std::string const&) */

void GridItemWisp::onSplatFinished(string *param_1)

{
  PlayIdle();
  setState((GridItemWisp *)param_1,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWisp::causeDamage() */

void __thiscall GridItemWisp::causeDamage(GridItemWisp *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  string *psVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  Zombie *this_00;
  GridItem *pGVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar12;
  DamageInfo *pDVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_68,"jackolantern");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_68);
  nop();
  iVar4 = *(int *)(this + 0x1b0);
  fVar12 = (float)PVZ_Dt();
  iVar5 = *(int *)(this + 0x1b4);
  pDVar13._0_4_ = (DamageInfo *)((float)iVar4 * *(float *)(this + 0x1bc) * fVar12);
  fVar12 = (float)PVZ_Dt();
  if (this[0x1b8] != (GridItemWisp)0x0) {
    pDVar13._0_4_ =
         (DamageInfo *)((float)pDVar13._0_4_ + fVar12 * (float)iVar5 * *(float *)(this + 0x1bc));
  }
  uVar7 = operator|(0x400,0x1000);
  uVar7 = operator|(uVar7,0x10000);
  Sexy::Point::Point((Point *)local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  iVar5 = 0;
  DamageInfo::DamageInfo(pDVar13._0_4_,local_80,local_7c,asStack_68,uVar7,this,(Point *)local_90);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(2,4);
  uVar8 = FUN_04cfac3c(*(undefined4 *)(this + 0x130));
  iVar4 = FUN_04cfac40(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar8 & 0xffffffff),iVar4,1,1,iVar5);
  EntityFinder::GetEntitiesTouchingRectangle
            ((FastCurve *)&local_80,uVar3,(Point *)local_90,0xffffffff,0xffffffff);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_80);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    iVar4 = FUN_04cfac40(*(undefined4 *)(this + 0x134));
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)*puVar9;
    lVar10 = std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    iVar5 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar10 + 4));
    if (iVar4 == iVar5) {
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
      pGVar11 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_01);
      if (this_00 != (Zombie *)0x0) {
        uVar3 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(this_00,uVar3);
        if ((cVar2 == '\0') &&
           (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
           cVar2 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x110))(this_00,asStack_68);
        }
      }
      if ((pGVar11 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar11 + 0x200))(pGVar11), cVar2 != '\0')) {
        (**(code **)(*(long *)pGVar11 + 0x110))(pGVar11,asStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWisp::onUpdate() */

void __thiscall GridItemWisp::onUpdate(GridItemWisp *this)

{
  GridItemWispProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  causeDamage(this);
  if (*(int *)(this + 0x1ac) == 3) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemWispProps>();
    if (*(float *)(pGVar1 + 0xd0) < fVar2 - fVar3) {
      setState(this,4);
      return;
    }
  }
  return;
}

