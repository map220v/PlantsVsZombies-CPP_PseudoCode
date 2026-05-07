// Class: ComponentRadiusBurst


/* ComponentRadiusBurst::onAnimationTriggered() */

void ComponentRadiusBurst::onAnimationTriggered(void)

{
  return;
}


/* ComponentRadiusBurst::ComponentRadiusBurst() */

void __thiscall ComponentRadiusBurst::ComponentRadiusBurst(ComponentRadiusBurst *this)

{
  undefined4 uVar1;
  
  ComponentBase::ComponentBase((ComponentBase *)this);
  this[0x29] = (ComponentRadiusBurst)0x0;
  *(undefined ***)this = &PTR_GetClass_06735e10;
  Sexy::Point::Point((Point *)(this + 0x2c),-1,-1);
  Sexy::Point::Point((Point *)(this + 0x34));
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x40));
  ComponentRadiusBurstProps::ComponentRadiusBurstProps((ComponentRadiusBurstProps *)(this + 0x88));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x114) = uVar1;
  *(undefined4 *)(this + 0x118) = uVar1;
  return;
}


/* ComponentRadiusBurst::~ComponentRadiusBurst() */

void __thiscall ComponentRadiusBurst::~ComponentRadiusBurst(ComponentRadiusBurst *this)

{
  *(undefined ***)this = &PTR_GetClass_06735e10;
  ComponentRadiusBurstProps::~ComponentRadiusBurstProps((ComponentRadiusBurstProps *)(this + 0x88));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x40));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentRadiusBurst::~ComponentRadiusBurst() */

void __thiscall ComponentRadiusBurst::~ComponentRadiusBurst(ComponentRadiusBurst *this)

{
  ~ComponentRadiusBurst(this);
  AK::FreeHook(this);
  return;
}


/* ComponentRadiusBurst::StaticNew() */

undefined8 ComponentRadiusBurst::StaticNew(void)

{
  return 0;
}


/* ComponentRadiusBurst::onBegin() */

void __thiscall ComponentRadiusBurst::onBegin(ComponentRadiusBurst *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x114) = uVar1;
  *(undefined4 *)(this + 0x118) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::StaticClassInit() */

void ComponentRadiusBurst::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentRadiusBurstProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b8edd0,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentRadiusBurst");
    (*pcVar3)(plVar2,asStack_10,FUN_03b8f348,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRadiusBurst::StaticGetClass() */

long * ComponentRadiusBurst::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRadiusBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentRadiusBurst::GetClass() const */

long * ComponentRadiusBurst::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentRadiusBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentRadiusBurst::radiusInBoardSpace() */

float __thiscall ComponentRadiusBurst::radiusInBoardSpace(ComponentRadiusBurst *this)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (float)iVar1 * *(float *)(this + 0x88);
}


/* ComponentRadiusBurst::updateTimes(float) */

void __thiscall ComponentRadiusBurst::updateTimes(ComponentRadiusBurst *this,float param_1)

{
  *(float *)(this + 0x110) = param_1;
  return;
}


/* ComponentRadiusBurst::pausePropagation() */

void __thiscall ComponentRadiusBurst::pausePropagation(ComponentRadiusBurst *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  updateTimes(this,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::calculateTimeForNextPropigate() */

void __thiscall ComponentRadiusBurst::calculateTimeForNextPropigate(ComponentRadiusBurst *this)

{
  float *pfVar1;
  float fVar2;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  local_c = 0.0;
  pfVar1 = eastl::max_alt<float>(&local_c,(float *)(this + 0x8c));
  if (local_8 == ___stack_chk_guard) {
    updateTimes(this,fVar2 + *pfVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::getOwnerOrigin() */

void __thiscall ComponentRadiusBurst::getOwnerOrigin(ComponentRadiusBurst *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtObject *pRVar5;
  Point *in_x8;
  Plant *this_00;
  GridItem *pGVar6;
  Zombie *this_01;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Plant *)0x0;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_00 = Sexy::RtObject::Cast<Plant>(pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  pGVar6 = (GridItem *)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar6 = Sexy::RtObject::Cast<GridItem>(pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  this_01 = (Zombie *)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = Sexy::RtObject::Cast<Zombie>(pRVar5);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if ((this_00 == (Plant *)0x0) || (cVar2 = Plant::IsSuspended(this_00), cVar2 != '\0')) {
    if (pGVar6 == (GridItem *)0x0) {
      if (this_01 == (Zombie *)0x0) {
        iVar4 = -1;
        iVar3 = -1;
      }
      else {
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
        iVar4 = SharkMinion::getRow((SharkMinion *)this_01);
      }
    }
    else {
      iVar3 = FUN_03b8ea24(*(undefined4 *)(pGVar6 + 0x130));
      iVar4 = FUN_03b8ea28(*(undefined4 *)(pGVar6 + 0x134));
    }
  }
  else {
    iVar3 = *(int *)(this_00 + 0x114);
    iVar4 = *(int *)(this_00 + 0x110);
  }
  Sexy::Point::Point(in_x8,iVar3,iVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::SetDisplacedOrigin(Sexy::Point) */

void __thiscall
ComponentRadiusBurst::SetDisplacedOrigin(ComponentRadiusBurst *this,TPoint<int> *param_2)

{
  ComponentRadiusBurst CVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getOwnerOrigin(this);
  CVar1 = (ComponentRadiusBurst)Sexy::TPoint<int>::operator!=(param_2,(TPoint *)&local_10);
  this[0x29] = CVar1;
  if (CVar1 == (ComponentRadiusBurst)0x0) {
    Sexy::Point::Point((Point *)&local_10,-1,-1);
    *(undefined8 *)(this + 0x2c) = local_10;
  }
  else {
    Sexy::Point::Point((Point *)&local_10,(TPoint *)param_2);
    *(undefined8 *)(this + 0x2c) = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::calculateOrigin() */

void __thiscall ComponentRadiusBurst::calculateOrigin(ComponentRadiusBurst *this)

{
  long lVar1;
  ComponentRadiusBurst CVar2;
  int local_10;
  int iStack_c;
  
  lVar1 = ___stack_chk_guard;
  CVar2 = this[0x29];
  if (CVar2 == (ComponentRadiusBurst)0x0) {
    getOwnerOrigin(this);
    if ((local_10 != -1) || (iStack_c != -1)) {
      CVar2 = (ComponentRadiusBurst)0x1;
      *(ulong *)(this + 0x34) = CONCAT44(iStack_c,local_10);
    }
  }
  else {
    *(undefined8 *)(this + 0x34) = *(undefined8 *)(this + 0x2c);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(CVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::getEntitiesInRadius(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, BoardEntityTypeFlag) */

void __thiscall
ComponentRadiusBurst::getEntitiesInRadius
          (ComponentRadiusBurst *this,undefined8 param_1,undefined4 param_3)

{
  char cVar1;
  Point *extraout_x1;
  Point *pPVar2;
  Point *extraout_x1_00;
  float fVar3;
  undefined4 uVar4;
  int local_28;
  int local_24;
  TPoint aTStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = calculateOrigin(this);
  pPVar2 = extraout_x1;
  if (cVar1 != '\0') {
    uVar4 = radiusInBoardSpace(this);
    pPVar2 = extraout_x1_00;
  }
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0x34),pPVar2);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_28,aTStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)local_28,(float)local_24);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar3 = (float)Board::calculateRoofOffsetZ(local_18);
    local_14 = local_14 - fVar3;
  }
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar4,param_1,param_3,(FastCurve *)&local_18,0xffffffff,0xffffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRadiusBurst::GetPlantsInRadius(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall ComponentRadiusBurst::GetPlantsInRadius(ComponentRadiusBurst *this,vector *param_1)

{
  getEntitiesInRadius(this,param_1,1);
  return;
}


/* ComponentRadiusBurst::GetPlantGroupsInRadius(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ComponentRadiusBurst::GetPlantGroupsInRadius(ComponentRadiusBurst *this,vector *param_1)

{
  getEntitiesInRadius(this,param_1,0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::GetGridItemsInRadius(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall
ComponentRadiusBurst::GetGridItemsInRadius(ComponentRadiusBurst *this,vector *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getEntitiesInRadius(this,param_1,4);
  calculateOrigin(this);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x34));
  TargetInfoProps::FilterUntargetableGridItemsAtLoc
            ((TargetInfoProps *)(this + 0xc0),param_1,aRStack_18,aPStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::GetZombiesInRadius(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall ComponentRadiusBurst::GetZombiesInRadius(ComponentRadiusBurst *this,vector *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getEntitiesInRadius(this,param_1,2);
  calculateOrigin(this);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x34));
  TargetInfoProps::FilterUntargetableZombiesAtLoc
            ((TargetInfoProps *)(this + 0xc0),param_1,aRStack_18,aPStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRadiusBurst::beginPropagate() */

void __thiscall ComponentRadiusBurst::beginPropagate(ComponentRadiusBurst *this)

{
  char cVar1;
  
  cVar1 = calculateOrigin(this);
  if (cVar1 != '\0') {
    *(float *)(this + 0x114) = *(float *)(this + 0x90) + *(float *)(this + 0x110);
    *(float *)(this + 0x118) = *(float *)(this + 0xb8) + *(float *)(this + 0x110);
    if (*(int *)(this + 0x94) < 1) {
      *(undefined4 *)(this + 0x11c) = 0;
    }
    else {
      *(int *)(this + 0x11c) = *(int *)(this + 0x94) + -1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::createRadiusEffect(Sexy::Point, std::string const&) */

void ComponentRadiusBurst::createRadiusEffect
               (long param_1,uint *param_2,string *param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  undefined4 uVar4;
  int local_80;
  int local_7c;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  RtWeakPtr aRStack_68 [8];
  float local_60 [2];
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x118) = uVar4;
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)*param_2,param_2[1],1,1,param_5)
    ;
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_80,(TPoint *)aRStack_68);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)local_60,(float)(local_80 + *(int *)(param_1 + 0xb0)),
               (float)(local_7c + *(int *)(param_1 + 0xb4)),0.0);
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_3);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Effect_PopAnim::SetCentered(this,true);
    if (*(char *)(param_1 + 0x108) == '\0') {
      iVar2 = 0x61a82;
    }
    else {
      iVar2 = Board::MakeRenderOrder(0x65130,param_2[1],1);
    }
    (**(code **)(*(long *)this + 0xb8))
              (*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),this);
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      local_58 = Board::calculateRoofOffsetZ(local_60[0]);
    }
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_60,iVar2);
    std::string::string((string *)aRStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,aRStack_68,0);
    std::string::~string((string *)aRStack_68);
    nop();
    iVar2 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(param_1 + 0x40));
    if (iVar2 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string((string *)aRStack_68,"onBurstCompleted");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_70,
                 aRStack_68);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_68);
      nop();
      Sexy::RtId::~RtId(aRStack_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentRadiusBurst::onUpdate() */

void __thiscall ComponentRadiusBurst::onUpdate(ComponentRadiusBurst *this)

{
  float fVar1;
  undefined4 uVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x110) <= fVar1) {
    (**(code **)(*(long *)this + 200))(this);
    (**(code **)(*(long *)this + 0xb8))(this);
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x118) <= fVar1) {
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x34));
    createRadiusEffect(this,aPStack_10,this + 0xa0);
    if (*(code **)(*(long *)this + 0xd0) != onAnimationTriggered) {
      (**(code **)(*(long *)this + 0xd0))(this);
    }
  }
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x114) <= fVar1) {
    (**(code **)(*(long *)this + 0xc0))(this);
    if (*(int *)(this + 0x11c) < 1) {
      uVar2 = PVZ_EOT();
      *(undefined4 *)(this + 0x114) = uVar2;
    }
    else {
      *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + -1;
      *(float *)(this + 0x114) = *(float *)(this + 0x114) + *(float *)(this + 0x98);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentRadiusBurst::onBurstCompleted() */

void __thiscall ComponentRadiusBurst::onBurstCompleted(ComponentRadiusBurst *this)

{
  RtInvokeVariant *pRVar1;
  
  pRVar1 = (RtInvokeVariant *)
           RtReflectionDelegate<Sexy::Delegate0>::GetDelegate
                     ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x40));
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn(pRVar1);
  return;
}


/* ComponentRadiusBurst::SetRadiusProps(ComponentRadiusBurstProps const&) */

void __thiscall
ComponentRadiusBurst::SetRadiusProps(ComponentRadiusBurst *this,ComponentRadiusBurstProps *param_1)

{
  ComponentRadiusBurstProps::operator=((ComponentRadiusBurstProps *)(this + 0x88),param_1);
  return;
}

