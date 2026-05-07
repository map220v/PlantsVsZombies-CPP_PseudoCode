// Class: GridItemSmokeManhole


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSmokeManhole::GatherPlantingRestrictions
          (GridItemSmokeManhole *this,PlantType *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  if ((param_1 == (PlantType *)0x0) ||
     (bVar1 = std::operator==((string *)(param_1 + 8),"flattenedshroom"), !bVar1)) {
    local_c = 0x5e;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::StaticClassInit() */

void GridItemSmokeManhole::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSmokeManhole");
    (*pcVar2)(plVar1,asStack_10,FUN_038f0630,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSmokeManhole::StaticGetClass() */

long * GridItemSmokeManhole::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSmokeManhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSmokeManhole::GetClass() const */

long * GridItemSmokeManhole::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSmokeManhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSmokeManhole::AddCoolDownTime(float) */

void __thiscall GridItemSmokeManhole::AddCoolDownTime(GridItemSmokeManhole *this,float param_1)

{
  *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) + param_1;
  return;
}


/* GridItemSmokeManhole::InRoarState() */

void __thiscall GridItemSmokeManhole::InRoarState(GridItemSmokeManhole *this)

{
  if (*(float *)(this + 0x1a8) != 0.0) {
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  return;
}


/* GridItemSmokeManhole::~GridItemSmokeManhole() */

void __thiscall GridItemSmokeManhole::~GridItemSmokeManhole(GridItemSmokeManhole *this)

{
  *(undefined ***)(this + 0x10) = &PTR__GridItemSmokeManhole_066be478;
  *(undefined ***)this = &PTR_GetClass_066be1e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemSmokeManhole::~GridItemSmokeManhole() */

void __thiscall GridItemSmokeManhole::~GridItemSmokeManhole(GridItemSmokeManhole *this)

{
  ~GridItemSmokeManhole(this + -0x10);
  return;
}


/* GridItemSmokeManhole::~GridItemSmokeManhole() */

void __thiscall GridItemSmokeManhole::~GridItemSmokeManhole(GridItemSmokeManhole *this)

{
  ~GridItemSmokeManhole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSmokeManhole::~GridItemSmokeManhole() */

void __thiscall GridItemSmokeManhole::~GridItemSmokeManhole(GridItemSmokeManhole *this)

{
  ~GridItemSmokeManhole(this + -0x10);
  return;
}


/* GridItemSmokeManhole::GridItemSmokeManhole() */

void __thiscall GridItemSmokeManhole::GridItemSmokeManhole(GridItemSmokeManhole *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined4 *)(this + 0x194) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066be1e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSmokeManhole_066be478;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x1c8) = 0;
  return;
}


/* GridItemSmokeManhole::StaticNew() */

GridItemSmokeManhole * GridItemSmokeManhole::StaticNew(void)

{
  GridItemSmokeManhole *this;
  
  this = ::operator_new(0x1d0);
  GridItemSmokeManhole(this);
  return this;
}


/* GridItemSmokeManhole::HasPollutionSmoke() */

void __thiscall GridItemSmokeManhole::HasPollutionSmoke(GridItemSmokeManhole *this)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (!bVar1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  FUN_038ee5f0(*(undefined1 *)(lVar2 + 0x109));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::BlowSmoke() */

void __thiscall GridItemSmokeManhole::BlowSmoke(GridItemSmokeManhole *this)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasPollutionSmoke(this);
  if (cVar1 != '\0') {
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
    std::string::string(asStack_10,"blow_off");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::AbsorbSmoke() */

void __thiscall GridItemSmokeManhole::AbsorbSmoke(GridItemSmokeManhole *this)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasPollutionSmoke(this);
  if (cVar1 != '\0') {
    pEVar2 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
    std::string::string(asStack_10,"absorb");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::onRoarEnd(GridItemSmokeManhole*) */

void __thiscall
GridItemSmokeManhole::onRoarEnd(GridItemSmokeManhole *this,GridItemSmokeManhole *param_1)

{
  RtWeakPtr *this_00;
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined4 *puVar4;
  Plant *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == this) {
    this_00 = (RtWeakPtr *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x194) = 4;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      puVar4 = (undefined4 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      uVar1 = puVar4[1];
      local_38 = *puVar4;
      local_34 = uVar1;
      local_24 = PVZ_T();
      local_20 = (float)PVZ_T();
      local_20 = local_20 + 1.0;
      iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
      local_30 = (float)iVar3;
      local_18 = 2;
      local_2c = uVar1;
      this_02 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Plant::addRelocationEvent(this_02,(RelocationEvent *)&local_38);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_40);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::InReadyState() */

void __thiscall GridItemSmokeManhole::InReadyState(GridItemSmokeManhole *this)

{
  Effect_PopAnim *pEVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1a0) <= fVar2) {
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    std::string::string(asStack_10,"first_alert");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    *(undefined4 *)(this + 0x194) = 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::InAlertState() */

void __thiscall GridItemSmokeManhole::InAlertState(GridItemSmokeManhole *this)

{
  Effect_PopAnim *pEVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x19c) <= fVar2) {
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    std::string::string(asStack_10,"roar");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    *(undefined4 *)(this + 0x194) = 1;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::InFirstAlertState() */

void __thiscall GridItemSmokeManhole::InFirstAlertState(GridItemSmokeManhole *this)

{
  Effect_PopAnim *pEVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x198) <= fVar2) {
    pEVar1 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    std::string::string(asStack_10,"first_roar");
    Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    *(undefined4 *)(this + 0x194) = 1;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::InCooldownState() */

void __thiscall GridItemSmokeManhole::InCooldownState(GridItemSmokeManhole *this)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x1a0) <= fVar3) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
    if (bVar1) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
      std::string::string(asStack_10,"block");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
      std::string::string(asStack_10,"alert");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    *(undefined4 *)(this + 0x194) = 3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::BlockSmoke(PlantFlattenedshroom*) */

void __thiscall
GridItemSmokeManhole::BlockSmoke(GridItemSmokeManhole *this,PlantFlattenedshroom *param_1)

{
  Effect_PopAnim *pEVar1;
  undefined4 uVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantFlattenedshroom *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x1ac) = uVar2;
    fVar3 = (float)PlantFlattenedshroom::GetBlockTime(param_1);
    AddCoolDownTime(this,fVar3);
    if (*(int *)(this + 0x194) == 3) {
      *(undefined4 *)(this + 0x194) = 5;
      pEVar1 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
      std::string::string((string *)aRStack_10,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_10,0);
      std::string::~string((string *)aRStack_10);
      nop();
    }
    else if (*(int *)(this + 0x194) != 5) goto LAB_038ef8e0;
    *(float *)(this + 0x1a0) = *(float *)(this + 0x1a0) + *(float *)(this + 0x1a8);
    *(float *)(this + 0x19c) = *(float *)(this + 0x19c) + *(float *)(this + 0x1a8);
  }
LAB_038ef8e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::SetupAnimation() */

void __thiscall GridItemSmokeManhole::SetupAnimation(GridItemSmokeManhole *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  undefined4 uVar1;
  int iVar2;
  GridItemSmokeManholeProps *pGVar3;
  long lVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  StandaloneEffect *pSVar7;
  float fVar8;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b0);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8);
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  pGVar3 = GridItem::GetProps<GridItemSmokeManholeProps>();
  fVar8 = *(float *)(pGVar3 + 0x98);
  pGVar3 = GridItem::GetProps<GridItemSmokeManholeProps>();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aPStack_18,(float)local_28 + fVar8,(float)local_24 + *(float *)(pGVar3 + 0x9c),
             0.0);
  Board::AddEffect<Effect_SmokeManhole>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Board::AddEffect<Effect_SmokePollution>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_038ee5fc(lVar4 + 0x110,this);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pGVar3 = GridItem::GetProps<GridItemSmokeManholeProps>();
  GetPAMByName((string *)(pGVar3 + 0xa0));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar5,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)aPStack_18,-1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar1 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
  iVar2 = Board::MakeRenderOrder(0x61ae4,uVar1,0);
  FUN_038ee5e0(lVar4 + 0x1c,iVar2 + 1);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_20,"ready");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar5,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  FUN_038ee5f4(lVar4 + 0x110,this);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  pGVar3 = GridItem::GetProps<GridItemSmokeManholeProps>();
  GetPAMByName((string *)(pGVar3 + 0xa8));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar5 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_PopAnim::SetCentered(pEVar5,true);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar7,(SexyVector3 *)aPStack_18,-1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  uVar1 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_038ee5e0(lVar4 + 0x1c,uVar1);
  pSVar7 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetVisibility(pSVar7,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSmokeManhole::GetReady(float) */

void __thiscall GridItemSmokeManhole::GetReady(GridItemSmokeManhole *this,float param_1)

{
  GridItemSmokeManholeProps *pGVar1;
  float fVar2;
  
  *(undefined4 *)(this + 0x194) = 0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x198) = fVar2 + param_1;
  fVar2 = (float)PVZ_T();
  pGVar1 = GridItem::GetProps<GridItemSmokeManholeProps>();
  *(float *)(this + 0x1a0) = fVar2 + *(float *)(pGVar1 + 0xb8);
  return;
}


/* GridItemSmokeManhole::GetDamage() */

float __thiscall GridItemSmokeManhole::GetDamage(GridItemSmokeManhole *this)

{
  GridItemSmokeManholeProps *pGVar1;
  
  if (0.0 < *(float *)(this + 0x1c8)) {
    return *(float *)(this + 0x1c8);
  }
  pGVar1 = GridItem::GetProps<GridItemSmokeManholeProps>();
  return *(float *)(pGVar1 + 0xb0);
}


/* GridItemSmokeManhole::onSmokeEnd() */

void __thiscall GridItemSmokeManhole::onSmokeEnd(GridItemSmokeManhole *this)

{
  GridItemSmokeManholeProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemSmokeManholeProps>();
  *(undefined4 *)(this + 0x194) = 5;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x19c) =
       *(float *)(pGVar1 + 0xb8) + *(float *)(pGVar1 + 0xb4) + *(float *)(this + 0x1a8) + fVar2;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a0) = *(float *)(this + 0x1a8) + *(float *)(pGVar1 + 0xb4) + fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::UnBlockSmoke(PlantFlattenedshroom*) */

void __thiscall
GridItemSmokeManhole::UnBlockSmoke(GridItemSmokeManhole *this,PlantFlattenedshroom *param_1)

{
  ResourceInfo *pRVar1;
  GridItemSmokeManholeProps *pGVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1c0));
  if (*(ResourceInfo **)(param_1 + 0x10) == pRVar1) {
    pGVar2 = GridItem::GetProps<GridItemSmokeManholeProps>();
    fVar3 = (float)PVZ_T();
    fVar5 = *(float *)(this + 0x1ac);
    fVar4 = (float)PVZ_T();
    if (fVar3 - fVar5 <=
        ((*(float *)(pGVar2 + 0xb8) + *(float *)(this + 0x1a8) + *(float *)(pGVar2 + 0xb4)) -
        *(float *)(this + 0x19c)) + fVar4) {
      fVar3 = (float)PVZ_T();
      fVar4 = *(float *)(this + 0x19c);
      fVar3 = fVar3 - *(float *)(this + 0x1ac);
    }
    else {
      fVar3 = (float)PVZ_T();
      fVar4 = *(float *)(this + 0x19c);
      fVar3 = ((*(float *)(pGVar2 + 0xb8) + *(float *)(this + 0x1a8) + *(float *)(pGVar2 + 0xb4)) -
              fVar4) + fVar3;
    }
    if (0.0 < fVar4) {
      *(float *)(this + 0x19c) = fVar4 - fVar3;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::DamagePlant(int, int, Plant*) */

void __thiscall
GridItemSmokeManhole::DamagePlant(GridItemSmokeManhole *this,int param_1,int param_2,Plant *param_3)

{
  DamageInfo *pDVar1;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 != (Plant *)0x0) {
    pDVar1._0_4_ = (DamageInfo *)GetDamage(this);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar1._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    (**(code **)(*(long *)param_3 + 0x110))(param_3,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::InIdleState() */

void __thiscall GridItemSmokeManhole::InIdleState(GridItemSmokeManhole *this)

{
  int iVar1;
  int iVar2;
  Plant *pPVar3;
  Board *pBVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_Dt();
  fVar5 = fVar5 + *(float *)(this + 0x1a4);
  if (fVar5 <= 1.0) {
    *(float *)(this + 0x1a4) = fVar5;
  }
  else {
    *(float *)(this + 0x1a4) = fVar5 - 1.0;
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1,iVar2,asStack_10);
    DamagePlant(this,iVar1,iVar2,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + -1,iVar2,asStack_10);
    DamagePlant(this,iVar1 + -1,iVar2,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + 1,iVar2,asStack_10);
    DamagePlant(this,iVar1 + 1,iVar2,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1,iVar2 + -1,asStack_10);
    DamagePlant(this,iVar1,iVar2 + -1,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1,iVar2 + 1,asStack_10);
    DamagePlant(this,iVar1,iVar2 + 1,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + -1,iVar2 + -1,asStack_10);
    DamagePlant(this,iVar1 + -1,iVar2 + -1,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + 1,iVar2 + -1,asStack_10);
    DamagePlant(this,iVar1 + 1,iVar2 + -1,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + -1,iVar2 + 1,asStack_10);
    DamagePlant(this,iVar1 + -1,iVar2 + 1,pPVar3);
    std::string::~string(asStack_10);
    nop();
    iVar1 = FUN_038ee5e8(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_038ee5ec(*(undefined4 *)(this + 0x134));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"");
    pPVar3 = (Plant *)Board::GetPlantAt(pBVar4,iVar1 + 1,iVar2 + 1,asStack_10);
    DamagePlant(this,iVar1 + 1,iVar2 + 1,pPVar3);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSmokeManhole::onUpdate() */

void __thiscall GridItemSmokeManhole::onUpdate(GridItemSmokeManhole *this)

{
  switch(*(undefined4 *)(this + 0x194)) {
  case 0:
    InReadyState(this);
    return;
  case 1:
    InRoarState(this);
    return;
  case 2:
    InFirstAlertState(this);
    return;
  case 3:
    InAlertState(this);
    return;
  case 4:
    InIdleState(this);
    return;
  case 5:
    InCooldownState(this);
    return;
  default:
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSmokeManhole::registerForEvents() */

void __thiscall GridItemSmokeManhole::registerForEvents(GridItemSmokeManhole *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRoarEnd);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<GridItemSmokeManhole*,Sexy::CBMemberTranslatorX<GridItemSmokeManhole,void(GridItemSmokeManhole::*)(GridItemSmokeManhole*)>>
            ((MessageRouter *)puVar1,Message::SmokeDiffusion,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSmokeEnd);
  Sexy::Delegate0::Delegate0<GridItemSmokeManhole,void(GridItemSmokeManhole::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SmokeEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

