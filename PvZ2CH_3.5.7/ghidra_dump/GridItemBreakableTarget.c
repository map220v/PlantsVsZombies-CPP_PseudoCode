// Class: GridItemBreakableTarget


/* GridItemBreakableTarget::deathAnimDoneHandler() */

void GridItemBreakableTarget::deathAnimDoneHandler(void)

{
  return;
}


/* GridItemBreakableTarget::~GridItemBreakableTarget() */

void __thiscall GridItemBreakableTarget::~GridItemBreakableTarget(GridItemBreakableTarget *this)

{
  *(undefined ***)this = &PTR_GetClass_06786640;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBreakableTarget_06786920;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemBreakableTarget::~GridItemBreakableTarget() */

void __thiscall GridItemBreakableTarget::~GridItemBreakableTarget(GridItemBreakableTarget *this)

{
  ~GridItemBreakableTarget(this + -0x10);
  return;
}


/* GridItemBreakableTarget::~GridItemBreakableTarget() */

void __thiscall GridItemBreakableTarget::~GridItemBreakableTarget(GridItemBreakableTarget *this)

{
  ~GridItemBreakableTarget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBreakableTarget::~GridItemBreakableTarget() */

void __thiscall GridItemBreakableTarget::~GridItemBreakableTarget(GridItemBreakableTarget *this)

{
  ~GridItemBreakableTarget(this + -0x10);
  return;
}


/* GridItemBreakableTarget::IsControlled() const */

GridItemBreakableTarget __thiscall
GridItemBreakableTarget::IsControlled(GridItemBreakableTarget *this)

{
  return this[0x1be];
}


/* GridItemBreakableTarget::SetIsControlled(bool) */

void __thiscall GridItemBreakableTarget::SetIsControlled(GridItemBreakableTarget *this,bool param_1)

{
  this[0x1be] = (GridItemBreakableTarget)param_1;
  return;
}


/* GridItemBreakableTarget::onDeathAnimDone(std::string const&) */

void GridItemBreakableTarget::onDeathAnimDone(string *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(code **)(lVar1 + 0x2c0) != deathAnimDoneHandler) {
    (**(code **)(lVar1 + 0x2c0))();
    lVar1 = *(long *)param_1;
  }
  (**(code **)(lVar1 + 0x230))(param_1);
  return;
}


/* GridItemBreakableTarget::CollidesWithType(CollisionTypeFlags) const */

byte GridItemBreakableTarget::CollidesWithType(long param_1)

{
  return *(byte *)(param_1 + 0x1bd) ^ 1;
}


/* GridItemBreakableTarget::Heal() */

void __thiscall GridItemBreakableTarget::Heal(GridItemBreakableTarget *this)

{
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_03e22da0(this + 0x128);
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_03e22da0(this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::StaticClassInit() */

void GridItemBreakableTarget::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBreakableTarget");
    (*pcVar2)(plVar1,asStack_10,FUN_03e231a0,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBreakableTarget::StaticGetClass() */

long * GridItemBreakableTarget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBreakableTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBreakableTarget::GetClass() const */

long * GridItemBreakableTarget::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBreakableTarget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBreakableTarget::GridItemBreakableTarget() */

void __thiscall GridItemBreakableTarget::GridItemBreakableTarget(GridItemBreakableTarget *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06786640;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBreakableTarget_06786920;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x1a8),0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x1b0),1.0,1.0);
  uVar1 = PVZ_EOT();
  this[0x1bc] = (GridItemBreakableTarget)0x0;
  this[0x1bd] = (GridItemBreakableTarget)0x0;
  this[0x1be] = (GridItemBreakableTarget)0x0;
  *(undefined4 *)(this + 0x1c0) = 0xffffffff;
  *(undefined4 *)(this + 0x1b8) = uVar1;
  return;
}


/* GridItemBreakableTarget::StaticNew() */

GridItemBreakableTarget * GridItemBreakableTarget::StaticNew(void)

{
  GridItemBreakableTarget *this;
  
  this = ::operator_new(0x1c8);
  GridItemBreakableTarget(this);
  return this;
}


/* GridItemBreakableTarget::StartRegenImmediately() */

void __thiscall GridItemBreakableTarget::StartRegenImmediately(GridItemBreakableTarget *this)

{
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}


/* GridItemBreakableTarget::IsHealthFull() */

bool __thiscall GridItemBreakableTarget::IsHealthFull(GridItemBreakableTarget *this)

{
  code *pcVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)this;
  pcVar1 = *(code **)(lVar2 + 0x1d8);
  if (pcVar1 == GridItem::GetHitpoints) {
    fVar3 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar1 = *(code **)(lVar2 + 0x1e0);
  }
  else {
    fVar3 = (float)(*pcVar1)();
    pcVar1 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar1 == GridItem::GetMaxHitpoints) {
    fVar4 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    return fVar4 <= fVar3;
  }
  fVar4 = (float)(*pcVar1)();
  return fVar4 <= fVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::CalcRenderOrder() const */

void GridItemBreakableTarget::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  Board::MakeRenderOrder(0x61e68,local_c,-local_10);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GridItemBreakableTarget::CalcRenderOrder() const */

void __thiscall GridItemBreakableTarget::CalcRenderOrder(GridItemBreakableTarget *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::onSpawnAnimDone(std::string const&) */

void GridItemBreakableTarget::onSpawnAnimDone(string *param_1)

{
  GridItemBreakableTargetProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::onHitAnimDone(std::string const&) */

void GridItemBreakableTarget::onHitAnimDone(string *param_1)

{
  GridItemBreakableTargetProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,pGVar1 + 0xd8,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  param_1[0x1bc] = (string)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBreakableTarget::getRenderOffset() */

undefined4 __thiscall GridItemBreakableTarget::getRenderOffset(GridItemBreakableTarget *this)

{
  GridItemBreakableTargetProps *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  uVar2 = Sexy::SexyVector2::operator-((SexyVector2 *)(pGVar1 + 0xa8),(SexyVector2 *)(this + 0x1a8))
  ;
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::getRenderScale() */

void __thiscall GridItemBreakableTarget::getRenderScale(GridItemBreakableTarget *this)

{
  GridItemBreakableTargetProps *pGVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  Sexy::FastCurve::SetOutRange
            (local_10,*(float *)(this + 0x1b0) * *(float *)(pGVar1 + 0xb0),
             *(float *)(this + 0x1b4) * *(float *)(pGVar1 + 0xb4));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::spawnBreakEffect(int) */

void GridItemBreakableTarget::spawnBreakEffect(int param_1)

{
  char cVar1;
  int iVar2;
  RealObject *this;
  GridItemBreakableTargetProps *pGVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  undefined8 *puVar5;
  string asStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  this = (RealObject *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemBreakableTargetProps>();
  cVar1 = FUN_0547419c((string *)(pGVar3 + 0xf0));
  if (cVar1 == '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    if (((DAT_06add1c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06add1c8), iVar2 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06add110,0.0,35.0);
      __cxa_guard_release(&DAT_06add1c8);
    }
    GetPAMByName((string *)(pGVar3 + 0xf0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = (float)*puVar5;
    local_10 = DAT_06add114 + *(float *)(puVar5 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),DAT_06add110 + local_18);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    iVar2 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03e22d90(this_00 + 0x1c,iVar2 + 1);
    std::string::string(asStack_20,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_20,2);
    std::string::~string(asStack_20);
    nop();
  }
  RealObject::PlayPositionalSound(this,(string *)(pGVar3 + 0xf8),0.0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::onTakeDamage(DamageInfo const&) */

void GridItemBreakableTarget::onTakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GridItemBreakableTargetProps *pGVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  PopAnimRig *pPVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x1bc] == (DamageInfo)0x0) {
    GridItemAnimation::GetAnimRig();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    if (bVar1) {
      pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
      lVar5 = FUN_05474184(pGVar4 + 0xe0);
      if (lVar5 != 0) {
        GridItemAnimation::GetAnimRig();
        pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onHitAnimDone");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,aRStack_58);
        PopAnimRig::PlayAndStop(pPVar7,pGVar4 + 0xe0,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        param_1[0x1bc] = (DamageInfo)0x1;
      }
      lVar5 = *(long *)param_1;
      if (*(code **)(lVar5 + 0x1d8) == GridItem::GetHitpoints) {
        fVar9 = (float)GridItem::GetHitpoints((GridItem *)param_1);
      }
      else {
        fVar9 = (float)(**(code **)(lVar5 + 0x1d8))();
        lVar5 = *(long *)param_1;
      }
      if (*(code **)(lVar5 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar10 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
      }
      else {
        fVar10 = (float)(**(code **)(lVar5 + 0x1e0))();
      }
      GridItemAnimation::GetAnimRig();
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
      iVar3 = DamageLifetime::OnHealthChanged
                        ((DamageLifetime *)(pGVar4 + 0x110),fVar9,fVar10,(PopAnimRig *)pRVar6,
                         *(int *)(param_1 + 0x1c0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      if (*(int *)(param_1 + 0x1c0) != iVar3) {
        (**(code **)(*(long *)param_1 + 0x2c8))(param_1);
        *(int *)(param_1 + 0x1c0) = iVar3;
        cVar2 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)param_1);
        if (cVar2 != '\0') {
          iVar3 = *(int *)(param_1 + 0x1c0);
          GridItemAnimation::GetLinkedAnimRig();
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
          DamageLifetime::SetAnimRigToPhase
                    ((DamageLifetime *)(pGVar4 + 0x110),iVar3,(PopAnimRig *)pRVar6);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        }
      }
    }
  }
  uVar8 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1b8) = uVar8;
  (**(code **)(*(long *)param_1 + 0x288))(0x3e800000,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::startDeathAnim() */

void __thiscall GridItemBreakableTarget::startDeathAnim(GridItemBreakableTarget *this)

{
  GridItemBreakableTargetProps *pGVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x1bd] = (GridItemBreakableTarget)0x1;
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDeathAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,pGVar1 + 0xe8,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::onGridItemInitialize() */

void __thiscall GridItemBreakableTarget::onGridItemInitialize(GridItemBreakableTarget *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  GridItemBreakableTargetProps *pGVar4;
  long lVar5;
  PopAnimRig *pPVar6;
  GridItemPropertySheet *pGVar7;
  ResourceInfo *pRVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
  lVar5 = FUN_05474184(pGVar4 + 0xd0);
  if (lVar5 == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar6 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar6,pGVar4 + 0xd8,0,(DummyInit *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  }
  else {
    GridItemAnimation::GetAnimRig();
    pPVar6 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpawnAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar6,pGVar4 + 0xd0,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  pGVar7 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03e22d98(*(undefined4 *)(pGVar7 + 0x10),this + 300);
  (**(code **)(*(long *)this + 0x2a8))(this);
  lVar5 = *(long *)this;
  pcVar9 = *(code **)(lVar5 + 0x1d8);
  if (pcVar9 == GridItem::GetHitpoints) {
    fVar10 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar9 = *(code **)(lVar5 + 0x1e0);
  }
  else {
    fVar10 = (float)(*pcVar9)();
    pcVar9 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar9 == GridItem::GetMaxHitpoints) {
    fVar11 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar11 = (float)(*pcVar9)();
  }
  GridItemAnimation::GetAnimRig();
  pPVar6 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  uVar3 = DamageLifetime::OnHealthChanged
                    ((DamageLifetime *)(pGVar4 + 0x110),fVar10,fVar11,pPVar6,-1);
  *(undefined4 *)(this + 0x1c0) = uVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  cVar2 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)this);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(this + 0x1c0);
    GridItemAnimation::GetLinkedAnimRig();
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_58);
    DamageLifetime::SetAnimRigToPhase((DamageLifetime *)(pGVar4 + 0x110),iVar1,(PopAnimRig *)pRVar8)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b8) = uVar3;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::onUpdate() */

void __thiscall GridItemBreakableTarget::onUpdate(GridItemBreakableTarget *this)

{
  GridItemBreakableTargetProps *pGVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  if (pGVar1[0x100] != (GridItemBreakableTargetProps)0x0) {
    lVar3 = *(long *)this;
    if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      lVar3 = *(long *)this;
    }
    if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
    }
    if (((fVar4 < fVar5) && (fVar4 = (float)PVZ_EOT(), *(float *)(this + 0x1b8) < fVar4)) &&
       (fVar4 = (float)PVZ_T(), *(float *)(pGVar1 + 0x108) < fVar4 - *(float *)(this + 0x1b8))) {
      lVar3 = *(long *)this;
      if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
        local_10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
      }
      else {
        local_10 = (float)(**(code **)(lVar3 + 0x1e0))(this);
        lVar3 = *(long *)this;
      }
      if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
        fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      }
      fVar5 = (float)PVZ_Dt();
      local_c = fVar4 + *(float *)(pGVar1 + 0x104) * fVar5;
      pfVar2 = eastl::min_alt<float>(&local_10,&local_c);
      if (local_8 == ___stack_chk_guard) {
        FUN_03e22da0(*pfVar2,this + 0x128);
        return;
      }
      goto LAB_03e24560;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03e24560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBreakableTarget::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemBreakableTarget::TakeDamage(GridItemBreakableTarget *this,DamageInfo *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  GridItemBreakableTargetProps *pGVar4;
  float fVar5;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  bVar2 = TestFlag<DamageTypeFlags>(local_58[0],2);
  if (bVar2) {
    SetFlag<DamageTypeFlags>(local_58,2,0);
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      local_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
  }
  pGVar4 = GridItem::GetProps<GridItemBreakableTargetProps>();
  fVar1 = local_60;
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar5 <= fVar1) {
    cVar3 = FUN_0547419c(pGVar4 + 0xe8);
    if (cVar3 == '\0') {
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        local_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
      local_60 = local_60 - 1.0;
      if (this[0x1bd] == (GridItemBreakableTarget)0x0) {
        startDeathAnim(this);
      }
    }
    (**(code **)(*(long *)this + 0x2c8))(this,*(undefined4 *)(this + 0x1c0));
  }
  GridItem::TakeDamage((GridItem *)this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

