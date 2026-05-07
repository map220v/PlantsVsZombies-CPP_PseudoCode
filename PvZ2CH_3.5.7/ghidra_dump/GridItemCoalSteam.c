// Class: GridItemCoalSteam


/* GridItemCoalSteam::onDeathAnimStopped(std::string const&) */

void GridItemCoalSteam::onDeathAnimStopped(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteam::GetAnimLabelName(GridItemCoalState) */

void GridItemCoalSteam::GetAnimLabelName(string *param_1,undefined8 param_2,int param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  if (param_3 != 3) {
    if (param_3 == 4) {
      std::string::append(param_1,"r4",(size_t)__n);
      goto LAB_03c3651c;
    }
    if (param_3 != 1) goto LAB_03c3651c;
  }
  std::string::append(param_1,"r1",(size_t)__n);
LAB_03c3651c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* GridItemCoalSteam::CalcRenderOrder() const */

void __thiscall GridItemCoalSteam::CalcRenderOrder(GridItemCoalSteam *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemCoalSteam::CalcRenderOrder() const */

void __thiscall GridItemCoalSteam::CalcRenderOrder(GridItemCoalSteam *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemCoalSteam::~GridItemCoalSteam() */

void __thiscall GridItemCoalSteam::~GridItemCoalSteam(GridItemCoalSteam *this)

{
  *(undefined ***)this = &PTR_GetClass_0674fa10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalSteam_0674fcd0;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemCoalSteam::~GridItemCoalSteam() */

void __thiscall GridItemCoalSteam::~GridItemCoalSteam(GridItemCoalSteam *this)

{
  ~GridItemCoalSteam(this + -0x10);
  return;
}


/* GridItemCoalSteam::~GridItemCoalSteam() */

void __thiscall GridItemCoalSteam::~GridItemCoalSteam(GridItemCoalSteam *this)

{
  ~GridItemCoalSteam(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCoalSteam::~GridItemCoalSteam() */

void __thiscall GridItemCoalSteam::~GridItemCoalSteam(GridItemCoalSteam *this)

{
  ~GridItemCoalSteam(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteam::StaticClassInit() */

void GridItemCoalSteam::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCoalSteam");
    (*pcVar2)(plVar1,asStack_10,FUN_03c37f68,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalSteam::StaticGetClass() */

long * GridItemCoalSteam::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCoalSteam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteam::GetClass() const */

long * GridItemCoalSteam::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCoalSteam",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteam::GridItemCoalSteam() */

void __thiscall GridItemCoalSteam::GridItemCoalSteam(GridItemCoalSteam *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0674fa10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalSteam_0674fcd0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemCoalSteam::StaticNew() */

GridItemCoalSteam * GridItemCoalSteam::StaticNew(void)

{
  GridItemCoalSteam *this;
  
  this = ::operator_new(0x1b0);
  GridItemCoalSteam(this);
  return this;
}


/* GridItemCoalSteam::GetCantPlantReason() const */

undefined8 GridItemCoalSteam::GetCantPlantReason(void)

{
  return 0x5c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteam::setState(GridItemCoalState) */

void __thiscall GridItemCoalSteam::setState(GridItemCoalSteam *this,undefined4 param_2)

{
  PopAnimRig *pPVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    param_2 = 3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    lVar4 = *(long *)this;
    uVar2 = 1;
    break;
  case 2:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    (**(code **)(*(long *)this + 0x2a8))(asStack_58,this,2);
    pcVar3 = onBirthAnimStopped;
    goto LAB_03c392cc;
  case 3:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    lVar4 = *(long *)this;
    uVar2 = 3;
    break;
  case 4:
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    (**(code **)(*(long *)this + 0x2a8))(asStack_58,this,4);
    pcVar3 = onDeathAnimStopped;
LAB_03c392cc:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar3);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemCoalSteam,void(GridItemCoalSteam::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  default:
    goto switchD_03c39274_default;
  }
  (**(code **)(lVar4 + 0x2a8))(asStack_50,this,uVar2);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
switchD_03c39274_default:
  *(undefined4 *)(this + 0x1ac) = param_2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemCoalSteam::SetIdle() */

void __thiscall GridItemCoalSteam::SetIdle(GridItemCoalSteam *this)

{
  setState(this,3);
  return;
}


/* GridItemCoalSteam::ResetTimer() */

void __thiscall GridItemCoalSteam::ResetTimer(GridItemCoalSteam *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemCoalSteam::onBirthAnimStopped(std::string const&) */

void GridItemCoalSteam::onBirthAnimStopped(string *param_1)

{
  setState((GridItemCoalSteam *)param_1,3);
  return;
}


/* GridItemCoalSteam::onUpdate() */

void __thiscall GridItemCoalSteam::onUpdate(GridItemCoalSteam *this)

{
  GridItemSteamCoalProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 3) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemSteamCoalProps>();
    if (*(float *)(pGVar1 + 0xd0) < fVar2 - fVar3) {
      setState(this,4);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteam::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemCoalSteam::GatherPlantingRestrictions
          (GridItemCoalSteam *this,PlantType *param_1,vector *param_2)

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


/* GridItemCoalSteam::SetBirth() */

void __thiscall GridItemCoalSteam::SetBirth(GridItemCoalSteam *this)

{
  setState(this,2);
  return;
}

