// Class: ZombieSkyCityTwinsPlane


/* ZombieSkyCityTwinsPlane::updateState_Glide() */

void __thiscall ZombieSkyCityTwinsPlane::updateState_Glide(ZombieSkyCityTwinsPlane *this)

{
  Effect_Barrage::Update((Effect_Barrage *)(this + 0x858));
  Zombie::updateState_Glide((Zombie *)this);
  return;
}


/* ZombieSkyCityTwinsPlane::updateState_Walk() */

void __thiscall ZombieSkyCityTwinsPlane::updateState_Walk(ZombieSkyCityTwinsPlane *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    Zombie::updateState_Walk((Zombie *)this);
    return;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  iVar2 = BoardTransforms::GridToBoardSpaceX(6);
  if ((float)iVar2 <= fVar4) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x11,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::StaticClassInit() */

void ZombieSkyCityTwinsPlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityTwinsPlane");
    (*pcVar2)(plVar1,asStack_10,FUN_047aaaa8,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityTwinsPlane::StaticGetClass() */

long * ZombieSkyCityTwinsPlane::StaticGetClass(void)

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
  uVar2 = ZombieSkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityTwinsPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityTwinsPlane::GetClass() const */

long * ZombieSkyCityTwinsPlane::GetClass(void)

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
  uVar2 = ZombieSkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityTwinsPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityTwinsPlane::SetPooyanBossHP(float) */

void __thiscall
ZombieSkyCityTwinsPlane::SetPooyanBossHP(ZombieSkyCityTwinsPlane *this,float param_1)

{
  char cVar1;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_047a9d3c(param_1,this + 0x284);
  Zombie::SetHitpoints((Zombie *)this,param_1);
  return;
}


/* ZombieSkyCityTwinsPlane::GetBarragePtr() */

ZombieSkyCityTwinsPlane * __thiscall
ZombieSkyCityTwinsPlane::GetBarragePtr(ZombieSkyCityTwinsPlane *this)

{
  return this + 0x858;
}


/* ZombieSkyCityTwinsPlane::GetBarragePtr2() */

ZombieSkyCityTwinsPlane * __thiscall
ZombieSkyCityTwinsPlane::GetBarragePtr2(ZombieSkyCityTwinsPlane *this)

{
  return this + 0x8d0;
}


/* ZombieSkyCityTwinsPlane::onExitState_Eat(ZombieState) */

void __thiscall
ZombieSkyCityTwinsPlane::onExitState_Eat(ZombieSkyCityTwinsPlane *this,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = Zombie::GetFlag((Zombie *)this);
  SetFlag<DebugLogFlags>(uVar1,1,0);
  ZombieSkyCity::onExitState_Eat((ZombieSkyCity *)this,param_2);
  return;
}


/* ZombieSkyCityTwinsPlane::onEnterState_Walk(ZombieState) */

void __thiscall
ZombieSkyCityTwinsPlane::onEnterState_Walk(ZombieSkyCityTwinsPlane *this,undefined4 param_2)

{
  char cVar1;
  ZombieAnimRig *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  float fVar4;
  
  pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,*(float *)(lVar3 + 0x10));
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 == '\0') {
    Zombie::onEnterState_Walk(this,param_2);
    return;
  }
  pZVar2 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar4 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  ZombieAnimRig::SetDesiredWalkVelocity(pZVar2,fVar4 * 4.0);
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* ZombieSkyCityTwinsPlane::onEnterState_Glide(ZombieState) */

void __thiscall ZombieSkyCityTwinsPlane::onEnterState_Glide(ZombieSkyCityTwinsPlane *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    cVar1 = Effect_Barrage::IsInitlized((Effect_Barrage *)(this + 0x858));
    if (cVar1 != '\0') {
      Effect_Barrage::StartBasicBarrage((Effect_Barrage *)(this + 0x858));
    }
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0xd8));
  if (lVar2 == 0) {
    Zombie::AddBarrageXItem((Zombie *)this,3,10);
    Zombie::AddBarrageXItem((Zombie *)this,4,0xc);
    Zombie::AddBarrageXItem((Zombie *)this,5,0xf);
    Zombie::AddBarrageXItem((Zombie *)this,6,0x14);
    Zombie::AddBarrageXItem((Zombie *)this,7,0x19);
    Zombie::AddBarrageXItem((Zombie *)this,8,0x12);
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)(this + 0x108));
  if (lVar2 == 0) {
    Zombie::AddBarrageYItem((Zombie *)this,1,0x21);
    Zombie::AddBarrageYItem((Zombie *)this,2,0x22);
    Zombie::AddBarrageYItem((Zombie *)this,3,0x21);
  }
  nop();
  return;
}


/* ZombieSkyCityTwinsPlane::ShouldDoSuperDamage(int) */

uint __thiscall
ZombieSkyCityTwinsPlane::ShouldDoSuperDamage(ZombieSkyCityTwinsPlane *this,int param_1)

{
  vector<float,std::allocator<float>> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  pLVar1 = gLawnApp;
  uVar3 = operator|(1,2);
  cVar2 = LawnApp::IsInModule(pLVar1,uVar3);
  if (cVar2 != '\0') {
    return 2;
  }
  this_00 = (vector<float,std::allocator<float>> *)(this + 0x948);
  pfVar4 = (float *)std::vector<float,std::allocator<float>>::at(this_00,0);
  fVar6 = *pfVar4;
  pfVar4 = (float *)std::vector<float,std::allocator<float>>::at(this_00,1);
  fVar5 = *pfVar4;
  if (((0.0 < fVar5) || (0.0 < fVar6)) && (-1 < param_1)) {
    if (param_1 < 2) {
      pfVar4 = (float *)std::vector<float,std::allocator<float>>::at(this_00,(long)param_1);
      if (0.0 < *pfVar4) {
        return param_1;
      }
      return 0xffffffff;
    }
    if (param_1 == 2) {
      if ((0.0 < fVar6) && (0.0 < fVar5)) {
        return 2;
      }
      return (uint)(0.0 < fVar5);
    }
  }
  return 0xfffffffe;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::eatTarget(BoardEntity*) */

void __thiscall
ZombieSkyCityTwinsPlane::eatTarget(ZombieSkyCityTwinsPlane *this,BoardEntity *param_1)

{
  GridItemAirship *pGVar1;
  Zombie *pZVar2;
  Plant *pPVar3;
  GridItem *pGVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pPVar3 = (Plant *)0x0;
  }
  else {
    pGVar1 = Sexy::RtObject::Cast<GridItemAirship>((RtObject *)param_1);
    if (pGVar1 != (GridItemAirship *)0x0) goto LAB_047aae98;
    pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (pZVar2 != (Zombie *)0x0) {
      (**(code **)(*(long *)this + 0x960))(this,pZVar2);
      goto LAB_047aae98;
    }
    if (pGVar4 != (GridItem *)0x0) {
      pcVar5 = *(code **)(*(long *)this + 0x970);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar5)(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_047aae98;
    }
  }
  (**(code **)(*(long *)this + 0x968))(this,pPVar3);
LAB_047aae98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityTwinsPlane::ZombieSkyCityTwinsPlane() */

void __thiscall ZombieSkyCityTwinsPlane::ZombieSkyCityTwinsPlane(ZombieSkyCityTwinsPlane *this)

{
  ZombieSkyCity::ZombieSkyCity((ZombieSkyCity *)this);
  *(undefined ***)this = &PTR_GetClass_068e2220;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityTwinsPlane_068e2c90;
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x858));
  Effect_Barrage::Effect_Barrage((Effect_Barrage *)(this + 0x8d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x948));
  return;
}


/* ZombieSkyCityTwinsPlane::StaticNew() */

ZombieSkyCityTwinsPlane * ZombieSkyCityTwinsPlane::StaticNew(void)

{
  ZombieSkyCityTwinsPlane *this;
  
  this = ::operator_new(0x960);
  ZombieSkyCityTwinsPlane(this);
  return this;
}


/* ZombieSkyCityTwinsPlane::CheckDamageValue(float) */

undefined1 __thiscall
ZombieSkyCityTwinsPlane::CheckDamageValue(ZombieSkyCityTwinsPlane *this,float param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  ZombieSkyCityTwinsPlaneProps *pZVar2;
  float *pfVar3;
  float fVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = *(float *)(lVar1 + 0x18) * 0.5;
  pZVar2 = Zombie::GetProps<ZombieSkyCityTwinsPlaneProps>((Zombie *)this);
  pfVar3 = (float *)FUN_047a9d58(*(undefined8 *)(pZVar2 + 0x238),1);
  if (param_1 <= fVar4 * *pfVar3) {
    return 2;
  }
  pZVar2 = Zombie::GetProps<ZombieSkyCityTwinsPlaneProps>((Zombie *)this);
  pfVar3 = (float *)FUN_047a9d58(*(undefined8 *)(pZVar2 + 0x238),0);
  return param_1 <= fVar4 * *pfVar3;
}


/* ZombieSkyCityTwinsPlane::DoDamageHalf(float, int) */

void __thiscall
ZombieSkyCityTwinsPlane::DoDamageHalf(ZombieSkyCityTwinsPlane *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  float fVar6;
  
  if (-1 < param_2) {
    uVar3 = FUN_047a9d44(*(undefined8 *)(this + 0x948),*(undefined8 *)(this + 0x950));
    if ((ulong)(long)param_2 < uVar3) {
      pfVar4 = (float *)std::vector<float,std::allocator<float>>::at
                                  ((vector<float,std::allocator<float>> *)(this + 0x948),
                                   (long)param_2);
      iVar1 = CheckDamageValue(this,*pfVar4);
      fVar6 = *pfVar4;
      *pfVar4 = fVar6 - param_1;
      iVar2 = CheckDamageValue(this,fVar6 - param_1);
      if ((0 < iVar2) && (iVar1 != iVar2)) {
        if (iVar2 == 1) {
          pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
          ZombieAnimRig_TwinsPlane::ShowLittleDamage((ZombieAnimRig_TwinsPlane *)pZVar5,param_2);
          return;
        }
        if (iVar2 == 2) {
          pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
          ZombieAnimRig_TwinsPlane::ShowBigDamage((ZombieAnimRig_TwinsPlane *)pZVar5,param_2);
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::TakeDamage(DamageInfo const&) */

void __thiscall
ZombieSkyCityTwinsPlane::TakeDamage(ZombieSkyCityTwinsPlane *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_10,-1,-1);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(param_1 + 0x18),(TPoint *)aPStack_10);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == iVar3) {
      uVar4 = ShouldDoSuperDamage(this,1);
      if ((uVar4 == 0xffffffff) && (iVar5 == 0)) {
        uVar4 = ShouldDoSuperDamage(this,0);
      }
    }
    else {
      uVar4 = ShouldDoSuperDamage(this,0);
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
      if ((iVar3 == iVar5) && (uVar4 == 0xffffffff)) {
        uVar4 = ShouldDoSuperDamage(this,1);
      }
    }
  }
  else {
    iVar3 = (**(code **)(*(long *)this + 0x300))(this,3);
    uVar4 = ShouldDoSuperDamage(this,iVar3);
  }
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),2);
  if (bVar2) {
    Zombie::TakeDamage((Zombie *)this,param_1);
  }
  else if (uVar4 != 0xffffffff) {
    fVar6 = (float)FUN_047a9d38(*(undefined4 *)(this + 0x280));
    Zombie::TakeDamage((Zombie *)this,param_1);
    if (uVar4 != 0xfffffffe) {
      fVar7 = (float)FUN_047a9d38(*(undefined4 *)(this + 0x280));
      if (uVar4 < 2) {
        DoDamageHalf(this,fVar6 - fVar7,uVar4);
      }
      else if (uVar4 == 2) {
        fVar6 = (fVar6 - fVar7) * 0.5;
        DoDamageHalf(this,fVar6,0);
        DoDamageHalf(this,fVar6,1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::onEnterState_Eat(ZombieState) */

void __thiscall
ZombieSkyCityTwinsPlane::onEnterState_Eat(ZombieSkyCityTwinsPlane *this,undefined4 param_2)

{
  ZombieAnimRig *this_00;
  ZombieSkyCityTwinsPlaneProps *pZVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieSkyCityTwinsPlaneProps>((Zombie *)this);
  ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar1 + 0x250));
  uVar2 = Zombie::GetFlag((Zombie *)this);
  SetFlag<DebugLogFlags>(uVar2,1,1);
  std::string::string(asStack_10,"Play_UI_Game_Shovel_Dig");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  ZombieSkyCity::onEnterState_Eat(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::IsAnyPlantInGridInterval() */

void __thiscall ZombieSkyCityTwinsPlane::IsAnyPlantInGridInterval(ZombieSkyCityTwinsPlane *this)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ZombieSkyCityTwinsPlaneProps *pZVar5;
  int iVar6;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pZVar5 = Zombie::GetProps<ZombieSkyCityTwinsPlaneProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar5 + 0x254);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = iVar3 - iVar1;
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar4 = iVar4 + -1;
  iVar6 = 2;
  if (iVar4 < 0) {
    iVar6 = 1;
    iVar4 = 0;
  }
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,iVar1 + 1,iVar6);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
  bVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::findTarget() */

void __thiscall ZombieSkyCityTwinsPlane::findTarget(ZombieSkyCityTwinsPlane *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ZombieSkyCityProps *pZVar8;
  Plant *pPVar9;
  undefined8 local_40;
  undefined8 local_38;
  TRect<int> aTStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pRVar5 = (RtObject *)Zombie::GetForcedTarget((Zombie *)this);
    (**(code **)(*(long *)this + 0x3a0))(aTStack_30,this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar6 = operator|(2,4);
    uVar4 = operator|(uVar6,1);
    (**(code **)(*(long *)this + 0xd0))((Point *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,uVar4,aTStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
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
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      if (((pRVar5 == (RtObject *)0x0) || ((RtObject *)*puVar7 == pRVar5)) &&
         (((((pPVar9 = (Plant *)Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7),
             pPVar9 != (Plant *)0x0 &&
             ((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pPVar9),
              cVar1 != '\0' &&
              (cVar1 = (**(code **)(*(long *)pPVar9 + 0x328))(pPVar9), cVar1 == '\0')))) &&
            (cVar1 = Zombie::HasCondition(pPVar9,0x27), cVar1 == '\0')) &&
           ((cVar1 = Zombie::HasCondition(pPVar9,0x25), cVar1 == '\0' &&
            (cVar1 = Zombie::HasCondition(pPVar9,0x65), cVar1 == '\0')))) ||
          (((pPVar9 = (Plant *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7),
            pPVar9 != (Plant *)0x0 &&
            ((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pPVar9),
             cVar1 != '\0' &&
             (cVar1 = (**(code **)(*(long *)pPVar9 + 0x218))(pPVar9,this), cVar1 != '\0')))) ||
           ((pPVar9 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7), pPVar9 != (Plant *)0x0 &&
            (cVar1 = Zombie::WillTargetPlant((Zombie *)this,pPVar9), cVar1 != '\0'))))))))
      goto LAB_047ab740;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    pZVar8 = Zombie::GetProps<ZombieSkyCityProps>((Zombie *)this);
    if (pZVar8 != (ZombieSkyCityProps *)0x0) {
      Sexy::Point::Point((Point *)&local_38,0,0);
      cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(pZVar8 + 0x228),(TPoint *)&local_38);
      if (cVar1 != '\0') {
        Sexy::TRect<int>::Offset(aTStack_30,(TPoint *)(pZVar8 + 0x228));
        (**(code **)(*(long *)this + 0xd0))((Point *)&local_38,this);
        EntityFinder::GetEntitiesTouchingRectangle
                  (avStack_20,4,aTStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          puVar7 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          pPVar9 = (Plant *)Sexy::RtObject::Cast<GridItemAirship>((RtObject *)*puVar7);
          if (((pPVar9 != (Plant *)0x0) &&
              (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pPVar9),
              cVar1 != '\0')) &&
             (cVar1 = (**(code **)(*(long *)pPVar9 + 0x218))(pPVar9,this), cVar1 != '\0'))
          goto LAB_047ab740;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
        }
      }
    }
    pPVar9 = (Plant *)0x0;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    pPVar9 = (Plant *)0x0;
  }
LAB_047ab5ac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar9);
  }
  return;
LAB_047ab740:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  goto LAB_047ab5ac;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlane::InitBodyHealth() */

void __thiscall ZombieSkyCityTwinsPlane::InitBodyHealth(ZombieSkyCityTwinsPlane *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  local_c = *(float *)(lVar1 + 0x18) * 0.5;
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)(this + 0x948),&local_c);
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)(this + 0x948),&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityTwinsPlane::onZombieInitialize() */

void __thiscall ZombieSkyCityTwinsPlane::onZombieInitialize(ZombieSkyCityTwinsPlane *this)

{
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  InitBodyHealth(this);
  return;
}


/* ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane() */

void __thiscall ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane(ZombieSkyCityTwinsPlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068e2220;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityTwinsPlane_068e2c90;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x948));
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x8d0));
  Effect_Barrage::~Effect_Barrage((Effect_Barrage *)(this + 0x858));
  ZombieSkyCity::~ZombieSkyCity((ZombieSkyCity *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane() */

void __thiscall ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane(ZombieSkyCityTwinsPlane *this)

{
  ~ZombieSkyCityTwinsPlane(this + -0x10);
  return;
}


/* ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane() */

void __thiscall ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane(ZombieSkyCityTwinsPlane *this)

{
  ~ZombieSkyCityTwinsPlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane() */

void __thiscall ZombieSkyCityTwinsPlane::~ZombieSkyCityTwinsPlane(ZombieSkyCityTwinsPlane *this)

{
  ~ZombieSkyCityTwinsPlane(this + -0x10);
  return;
}

