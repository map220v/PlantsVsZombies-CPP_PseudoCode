// Class: GridItemfire


/* GridItemfire::CalcRenderOrder() const */

void __thiscall GridItemfire::CalcRenderOrder(GridItemfire *this)

{
  Board::MakeRenderOrder(0x64960,*(undefined4 *)(this + 0x1bc),*(undefined4 *)(this + 0x1b8));
  return;
}


/* non-virtual thunk to GridItemfire::CalcRenderOrder() const */

void __thiscall GridItemfire::CalcRenderOrder(GridItemfire *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemfire::~GridItemfire() */

void __thiscall GridItemfire::~GridItemfire(GridItemfire *this)

{
  *(undefined ***)this = &PTR_GetClass_069dc730;
  *(undefined ***)(this + 0x10) = &PTR__GridItemfire_069dc9f0;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemfire::~GridItemfire() */

void __thiscall GridItemfire::~GridItemfire(GridItemfire *this)

{
  ~GridItemfire(this + -0x10);
  return;
}


/* GridItemfire::~GridItemfire() */

void __thiscall GridItemfire::~GridItemfire(GridItemfire *this)

{
  ~GridItemfire(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemfire::~GridItemfire() */

void __thiscall GridItemfire::~GridItemfire(GridItemfire *this)

{
  ~GridItemfire(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfire::StaticClassInit() */

void GridItemfire::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemfire");
    (*pcVar2)(plVar1,asStack_10,FUN_04e375f8,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemfire::StaticGetClass() */

long * GridItemfire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemfire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemfire::GetClass() const */

long * GridItemfire::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemfire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemfire::GridItemfire() */

void __thiscall GridItemfire::GridItemfire(GridItemfire *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069dc730;
  *(undefined ***)(this + 0x10) = &PTR__GridItemfire_069dc9f0;
  *(undefined4 *)(this + 0x1a8) = 0;
  Sexy::Point::Point((Point *)(this + 0x1b8));
  return;
}


/* GridItemfire::StaticNew() */

GridItemfire * GridItemfire::StaticNew(void)

{
  GridItemfire *this;
  
  this = ::operator_new(0x1d0);
  GridItemfire(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfire::onAnimation(std::string const&) */

void __thiscall GridItemfire::onAnimation(GridItemfire *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"h2_idle");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"h2_idle2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    (**(code **)(*(long *)this + 0x2a8))(this,2);
  }
  else {
    bVar1 = std::operator==(param_1,"idle3");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x2a8))(this,4);
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemfire::ResetLifetime() */

void __thiscall GridItemfire::ResetLifetime(GridItemfire *this)

{
  GridItemfireProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemfireProps>();
  fVar2 = (float)PVZ_T();
  *(long *)(this + 0x1c0) = (long)(fVar2 + *(float *)(pGVar1 + 0xd4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfire::setState(GridItemfireState) */

void __thiscall GridItemfire::setState(GridItemfire *this,int param_2)

{
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
  if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    __s = "h2_idle";
  }
  else {
    if (param_2 != 3) goto LAB_04e37e10;
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    __s = "idle3";
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
LAB_04e37e10:
  *(int *)(this + 0x1c8) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfire::causeDamage() */

void __thiscall GridItemfire::causeDamage(GridItemfire *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GridItemfireProps *pGVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  int iVar9;
  DamageInfo *pDVar10;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar5 = GridItem::GetProps<GridItemfireProps>();
                    /* WARNING: Load size is inaccurate */
  pDVar10._0_4_ = *(DamageInfo **)(this + 0x1a8);
  uVar6 = operator|(0x400,0x1000);
  uVar6 = operator|(uVar6,0x10000);
  Sexy::Point::Point((Point *)local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  iVar9 = 0;
  DamageInfo::DamageInfo(pDVar10._0_4_,local_80,local_7c,aDStack_68,uVar6,this,(Point *)local_90);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar7 = FUN_04e35528(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04e3552c(*(undefined4 *)(this + 0x134));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(uVar7 & 0xffffffff),iVar3,1,1,iVar9);
  uVar4 = FUN_04e3552c(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesTouchingRectangle((FastCurve *)&local_80,2,(Point *)local_90,uVar4,uVar4)
  ;
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
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
    if (this_00 != (Zombie *)0x0) {
      uVar4 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar4);
      if (((cVar2 == '\0') && (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) &&
         (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 == '\0')) {
        (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
        *(long *)(this + 0x1b0) = (long)((float)*(long *)(this + 0x1b0) + *(float *)(pGVar5 + 0xd0))
        ;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemfire::onGridItemInitialize() */

void __thiscall GridItemfire::onGridItemInitialize(GridItemfire *this)

{
  long lVar1;
  float *pfVar2;
  GridItemfireProps *this_00;
  float fVar3;
  float fVar4;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  fVar4 = pfVar2[1];
  this_00 = GridItem::GetProps<GridItemfireProps>();
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)this_00,fVar3,fVar4);
  *(undefined8 *)(this + 0x1b8) = local_10;
  fVar3 = (float)PVZ_T();
  *(long *)(this + 0x1c0) = (long)(fVar3 + *(float *)(this_00 + 0xd4));
  fVar3 = (float)PVZ_T();
  *(long *)(this + 0x1b0) = (long)fVar3;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x2a8))(this,1);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemfire::onUpdate() */

void __thiscall GridItemfire::onUpdate(GridItemfire *this)

{
  long lVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1c8) == 2) {
    lVar1 = *(long *)(this + 0x1c0);
    fVar2 = (float)PVZ_T();
    if ((float)lVar1 <= fVar2) {
      (**(code **)(*(long *)this + 0x2a8))(this,3);
    }
    lVar1 = *(long *)(this + 0x1b0);
    fVar2 = (float)PVZ_T();
    if ((float)lVar1 <= fVar2) {
      causeDamage(this);
      return;
    }
  }
  return;
}

