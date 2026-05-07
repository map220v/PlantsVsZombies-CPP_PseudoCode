// Class: GridItemBall


/* GridItemBall::CalcRenderOrder() const */

void __thiscall GridItemBall::CalcRenderOrder(GridItemBall *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemBall::CalcRenderOrder() const */

void __thiscall GridItemBall::CalcRenderOrder(GridItemBall *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemBall::~GridItemBall() */

void __thiscall GridItemBall::~GridItemBall(GridItemBall *this)

{
  *(undefined ***)this = &PTR_GetClass_066943f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBall_066946a8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemBall::~GridItemBall() */

void __thiscall GridItemBall::~GridItemBall(GridItemBall *this)

{
  ~GridItemBall(this + -0x10);
  return;
}


/* GridItemBall::~GridItemBall() */

void __thiscall GridItemBall::~GridItemBall(GridItemBall *this)

{
  ~GridItemBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBall::~GridItemBall() */

void __thiscall GridItemBall::~GridItemBall(GridItemBall *this)

{
  ~GridItemBall(this + -0x10);
  return;
}


/* GridItemBall::GetCantPlantReason() const */

undefined8 GridItemBall::GetCantPlantReason(void)

{
  return 0x4b;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBall::StaticClassInit() */

void GridItemBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBall");
    (*pcVar2)(plVar1,asStack_10,FUN_0374c374,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBall::StaticGetClass() */

long * GridItemBall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBall::GetClass() const */

long * GridItemBall::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBall::GridItemBall() */

void __thiscall GridItemBall::GridItemBall(GridItemBall *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_066943f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBall_066946a8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* GridItemBall::StaticNew() */

GridItemBall * GridItemBall::StaticNew(void)

{
  GridItemBall *this;
  
  this = ::operator_new(0x1b8);
  GridItemBall(this);
  return this;
}


/* GridItemBall::CanBeTargetedBy(BoardEntity const*) const */

undefined1 __thiscall GridItemBall::CanBeTargetedBy(GridItemBall *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<TestDragon>((RtObject *)param_1);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBall::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemBall::onDrawShadow(GridItemBall *this,Graphics *param_1)

{
  Image *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GraphicsAutoState aGStack_78 [8];
  Point aPStack_70 [8];
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_50,0.0,0.0,1.0);
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpace(aPStack_70);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_40,(float)local_68,(float)local_64,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,local_40,local_3c);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,local_50,local_4c);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_60,(TPoint *)&local_58);
  fVar3 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_03728ac0(local_60);
  fVar4 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar3 +
       (float)(int)((fVar2 - fVar3) * *(float *)(param_1 + 0x18));
  fVar2 = (float)FUN_03728ac0(local_5c);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar4 +
       (float)(int)((fVar2 - fVar4) * *(float *)(param_1 + 0x1c));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.85,0.85);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_48,local_48);
  Sexy::SexyTransform2D::Scale(aSStack_30,local_58,local_54);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  pIVar1 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06aaf558);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar1,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBall::setState(GridItemBallState) */

void __thiscall GridItemBall::setState(GridItemBall *this,int param_2)

{
  PopAnimRig *pPVar1;
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_80,"idle");
  nop();
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_80,0,(DummyInit *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  }
  else if (param_2 == 3) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"fly_end");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"OnPopAnimDone");
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
  *(int *)(this + 0x1ac) = param_2;
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBall::Kill() */

void __thiscall GridItemBall::Kill(GridItemBall *this)

{
  setState(this,3);
  return;
}


/* GridItemBall::SetResetting() */

void __thiscall GridItemBall::SetResetting(GridItemBall *this)

{
  setState(this,1);
  return;
}


/* GridItemBall::ResetTimer() */

void __thiscall GridItemBall::ResetTimer(GridItemBall *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemBall::OnPopAnimDone(std::string const&) */

void __thiscall GridItemBall::OnPopAnimDone(GridItemBall *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"fly_end");
  if (!bVar1) {
    return;
  }
  setState(this,2);
  return;
}


/* GridItemBall::onUpdate() */

void __thiscall GridItemBall::onUpdate(GridItemBall *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(int *)(this + 0x1ac) == 2) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1b0) < fVar1 - *(float *)(this + 0x1a8))) {
    setState(this,3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBall::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemBall::GatherPlantingRestrictions(GridItemBall *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

