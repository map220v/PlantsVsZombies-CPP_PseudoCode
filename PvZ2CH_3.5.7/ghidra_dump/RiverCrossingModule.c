// Class: RiverCrossingModule


/* RiverCrossingModule::unregisterForEvents() */

void __thiscall RiverCrossingModule::unregisterForEvents(RiverCrossingModule *this)

{
  LawnApp::UnregisterBoardTouchGameplayObject(gLawnApp,this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* RiverCrossingModule::SetTutorial(bool) */

void __thiscall RiverCrossingModule::SetTutorial(RiverCrossingModule *this,bool param_1)

{
  this[0x28] = (RiverCrossingModule)param_1;
  return;
}


/* RiverCrossingModule::preventSave() */

undefined8 RiverCrossingModule::preventSave(void)

{
  return 1;
}


/* RiverCrossingModule::checkWin() */

RiverCrossingModule __thiscall RiverCrossingModule::checkWin(RiverCrossingModule *this)

{
  RiverCrossingModule RVar1;
  
  RVar1 = (RiverCrossingModule)0x0;
  if (this[0x29] != (RiverCrossingModule)0x0) {
    if (*(int *)(this + 0x60) == 1) {
      if (*(int *)(this + 0x48) == *(int *)(this + 0x44)) goto LAB_04a217e8;
    }
    else if ((*(int *)(this + 0x60) == 0) && (*(int *)(this + 0x50) == *(int *)(this + 0x18))) {
LAB_04a217e8:
      this[0x40] = (RiverCrossingModule)0x1;
      return this[0x29];
    }
    RVar1 = this[0x40];
  }
  return RVar1;
}


/* RiverCrossingModule::levelStarted() */

void RiverCrossingModule::levelStarted(void)

{
  return;
}


/* RiverCrossingModule::isInRiver(Sexy::Point) */

bool __thiscall RiverCrossingModule::isInRiver(undefined8 param_1,int *param_2)

{
  return *param_2 - 1U < 3;
}


/* RiverCrossingModule::onRiverEntitySpawned(RiverEntity*) */

void RiverCrossingModule::onRiverEntitySpawned(RiverEntity *param_1)

{
  return;
}


/* RiverCrossingModule::cancelTouch() */

void __thiscall RiverCrossingModule::cancelTouch(RiverCrossingModule *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::GetRiderPam() */

void __thiscall RiverCrossingModule::GetRiderPam(RiverCrossingModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_ZOMBIE_ZOMBIE_ICEAGE_DODORIDER");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::GetReviveTip() */

void __thiscall RiverCrossingModule::GetReviveTip(RiverCrossingModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"[REVIVE_DODORIDER_DIED_OUT_CANCELED]");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* RiverCrossingModule::onDodoRiderDying() */

void __thiscall RiverCrossingModule::onDodoRiderDying(RiverCrossingModule *this)

{
  if (this[0x40] == (RiverCrossingModule)0x0) {
    this[0x2a] = (RiverCrossingModule)0x1;
    if (*(RiverCrossingDodoRider **)(this + 0x20) != (RiverCrossingDodoRider *)0x0) {
      RiverCrossingDodoRider::setState(*(RiverCrossingDodoRider **)(this + 0x20),4);
      return;
    }
  }
  return;
}


/* RiverCrossingModule::onRiverEntityCloseToEdge(RiverEntity*) */

void __thiscall
RiverCrossingModule::onRiverEntityCloseToEdge(RiverCrossingModule *this,RiverEntity *param_1)

{
  char cVar1;
  
  if (((this[0x40] == (RiverCrossingModule)0x0) && (param_1 != (RiverEntity *)0x0)) &&
     (cVar1 = RiverEntity::IsMoving(param_1), cVar1 != '\0')) {
    RiverEntitiesManager::RemoveRiverEntity((RiverEntitiesManager *)(this + 0x78),param_1);
    return;
  }
  return;
}


/* RiverCrossingModule::IsRiderKilled() */

void __thiscall RiverCrossingModule::IsRiderKilled(RiverCrossingModule *this)

{
  RiverEntitiesManager::CheckDodoriderChomped
            ((RiverEntitiesManager *)(this + 0x78),*(RiverCrossingDodoRider **)(this + 0x20));
  return;
}


/* RiverCrossingModule::onPlayFloatingIceCarryingAnim() */

void __thiscall RiverCrossingModule::onPlayFloatingIceCarryingAnim(RiverCrossingModule *this)

{
  if (*(FloatingIce **)(this + 0x58) != (FloatingIce *)0x0) {
    FloatingIce::PlayCarryingAnim(*(FloatingIce **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onDodoRiderGoWithFloatingIce(float) */

void __thiscall
RiverCrossingModule::onDodoRiderGoWithFloatingIce(RiverCrossingModule *this,float param_1)

{
  char cVar1;
  float *pfVar2;
  long *plVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  code *pcVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x40] == (RiverCrossingModule)0x0) {
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x20);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar6 = *pfVar2;
    fVar5 = pfVar2[2];
    cVar1 = RiverCrossingDodoRider::IsFlying((RiverCrossingDodoRider *)this_00);
    if (cVar1 == '\0') {
      plVar3 = *(long **)(this + 0x20);
      pcVar4 = *(code **)(*plVar3 + 0x78);
      EATextSquish::Vec3::Vec3(aVStack_18,fVar6,param_1,fVar5);
      (*pcVar4)(plVar3,aVStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingModule::onStarvingChomperEatDodorider(StarvingChomper*) */

void __thiscall
RiverCrossingModule::onStarvingChomperEatDodorider
          (RiverCrossingModule *this,StarvingChomper *param_1)

{
  char cVar1;
  
  cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (((cVar1 != '\0') || (this[100] == (RiverCrossingModule)0x0)) && (*(long *)(this + 0x20) != 0))
  {
    StarvingChomper::setState(param_1,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::StaticClassInit() */

void RiverCrossingModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiverCrossingModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a26490,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingModule::StaticGetClass() */

long * RiverCrossingModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiverCrossingModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiverCrossingModule::setCanTouch(bool) */

void __thiscall RiverCrossingModule::setCanTouch(RiverCrossingModule *this,bool param_1)

{
  this[0x42] = (RiverCrossingModule)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::MakeDodoRiderArrival() */

void __thiscall RiverCrossingModule::MakeDodoRiderArrival(RiverCrossingModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x20) != 0) {
    DVec3::DVec3((DVec3 *)&local_18);
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = -(float)(iVar1 * 3);
    iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(2);
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x20);
    fVar4 = (float)(iVar1 - iVar2 / 2);
    local_14 = fVar4;
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
    local_10 = *(undefined4 *)(lVar3 + 8);
    RiverCrossingDodoRider::SetNextPosition(local_18,fVar4,local_10,this_00);
    RiverCrossingDodoRider::setState(*(RiverCrossingDodoRider **)(this + 0x20),3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::CheckDodoRiderCrossedtheRiver() */

void RiverCrossingModule::CheckDodoRiderCrossedtheRiver(void)

{
  long lVar1;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 < 1);
}


/* RiverCrossingModule::SetCarryingFloatingIce(FloatingIce*) */

void __thiscall
RiverCrossingModule::SetCarryingFloatingIce(RiverCrossingModule *this,FloatingIce *param_1)

{
  RiverEntitiesManager::unbindAllFloatingIce((RiverEntitiesManager *)(this + 0x78));
  *(FloatingIce **)(this + 0x58) = param_1;
  if (param_1 != (FloatingIce *)0x0) {
    FloatingIce::SetCarryingDodoRider(param_1,true);
    FloatingIce::SetPlayCarryingAnim(*(FloatingIce **)(this + 0x58),true);
    return;
  }
  return;
}


/* RiverCrossingModule::FixedToGridY(int) */

float __thiscall RiverCrossingModule::FixedToGridY(RiverCrossingModule *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)param_1;
  iVar4 = 0;
  while( true ) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 <= iVar4) {
      return 0.0;
    }
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar4);
    fVar7 = (float)iVar3;
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 + -1 <= iVar4) break;
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar4 + 1);
    fVar5 = (float)iVar3;
    iVar4 = iVar4 + 1;
    if (fVar6 <= fVar5) {
      uVar2 = (int)(fVar5 - fVar6) >> 0x1f;
      uVar1 = (int)(fVar7 - fVar6) >> 0x1f;
      if ((int)(((int)(fVar7 - fVar6) ^ uVar1) - uVar1) <
          (int)(((int)(fVar5 - fVar6) ^ uVar2) - uVar2)) {
        return fVar7;
      }
      return fVar5;
    }
  }
  return fVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::OnDodoRiderLanding() */

void __thiscall RiverCrossingModule::OnDodoRiderLanding(RiverCrossingModule *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  FloatingIce *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_28 [8];
  Point aPStack_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x20));
  local_18 = *(undefined8 *)pfVar6;
  fVar10 = *pfVar6;
  fVar9 = pfVar6[1];
  uVar2 = *(undefined8 *)pfVar6;
  uVar1 = *(undefined8 *)pfVar6;
  local_10 = pfVar6[2];
  iVar4 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar10);
  iVar5 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar9);
  pcVar8 = *(code **)(*(long *)this + 0xb0);
  BoardEntity::CalcGridPosition();
  cVar3 = (*pcVar8)(this,auStack_28);
  if (cVar3 == '\0') {
    pcVar8 = *(code **)(*(long *)this + 0xb0);
    Sexy::Point::Point(aPStack_20,iVar4,iVar5);
    cVar3 = (*pcVar8)(this,aPStack_20);
    if (cVar3 == '\0') {
      SetCarryingFloatingIce(this,(FloatingIce *)0x0);
      RiverEntitiesManager::unbindAllFloatingIce((RiverEntitiesManager *)(this + 0x78));
      goto LAB_04a23720;
    }
  }
  local_18 = uVar1;
  pFVar7 = (FloatingIce *)RiverEntitiesManager::CheckFloatingIce(fVar10,fVar9,local_10,this + 0x78);
  RiverCrossingDodoRider::setState(*(RiverCrossingDodoRider **)(this + 0x20),2);
  if (pFVar7 == (FloatingIce *)0x0) {
    SetCarryingFloatingIce(this,(FloatingIce *)0x0);
    pcVar8 = *(code **)(*(long *)this + 0xb0);
    Sexy::Point::Point(aPStack_20,iVar4,iVar5);
    cVar3 = (*pcVar8)(this,aPStack_20);
    if (cVar3 != '\0') {
      FUN_04a21cd0(*(long *)(this + 0x20) + 0xca);
    }
  }
  else {
    SetCarryingFloatingIce(this,pFVar7);
  }
  local_18 = uVar2;
  RiverCrossingDodoRider::SetNextPosition(fVar10,fVar9,local_10,*(undefined8 *)(this + 0x20));
LAB_04a23720:
  RiverCrossingDodoRider::OnDodoRiderLanded(*(RiverCrossingDodoRider **)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::calcDodoRiderNextPosition(MoveDirection) */

void __thiscall
RiverCrossingModule::calcDodoRiderNextPosition(RiverCrossingModule *this,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x20));
  fVar7 = *pfVar5;
  fVar8 = pfVar5[1];
  fVar1 = pfVar5[2];
  DVec3::DVec3((DVec3 *)&local_28);
  switch(param_2) {
  case 0:
    local_28 = fVar7;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = fVar8 - (float)iVar3;
    local_20 = fVar1;
    break;
  case 1:
    local_28 = fVar7;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = (float)iVar3 + fVar8;
    local_20 = fVar1;
    break;
  case 2:
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = fVar7 - (float)iVar3;
    fStack_24 = fVar8;
    local_20 = fVar1;
    break;
  case 3:
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = (float)iVar3 + fVar7;
    fStack_24 = fVar8;
    local_20 = fVar1;
  }
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
  iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(fStack_24);
  pcVar6 = *(code **)(*(long *)this + 0xb0);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  cVar2 = (*pcVar6)(this,(Point *)&local_18);
  if (cVar2 == '\0') {
    fStack_24 = (float)FixedToGridY(this,(int)fStack_24);
  }
  local_18 = CONCAT44(fStack_24,local_28);
  local_10 = local_20;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28,fStack_24,local_20);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onSpawnDodoRider(bool) */

void __thiscall RiverCrossingModule::onSpawnDodoRider(RiverCrossingModule *this,bool param_1)

{
  long lVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x40] == (RiverCrossingModule)0x0) {
    this[0x2a] = (RiverCrossingModule)0x0;
    lVar1 = (**(code **)(*(long *)this + 0xa0))();
    *(long *)(this + 0x20) = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)this + 0xa8))(asStack_10,this);
      GetPAMByName(asStack_10);
      std::string::~string(asStack_10);
      RiverCrossingDodoRider::SetWalkingRate
                (*(RiverCrossingDodoRider **)(this + 0x20),*(float *)(this + 0x6c));
      DJump::setHeight(*(DJump **)(this + 0x20),*(float *)(this + 0x70));
      pcVar2 = *(code **)(*(long *)this + 0xd8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar2)(this,param_1,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    this[0x43] = (RiverCrossingModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingModule::onDodoriderKilled(bool) */

void __thiscall RiverCrossingModule::onDodoriderKilled(RiverCrossingModule *this,bool param_1)

{
  ToxicWaterPerfumeBottleProjectile *this_00;
  
  if ((this[0x40] == (RiverCrossingModule)0x0) && (this[0x43] == (RiverCrossingModule)0x0)) {
    this[0x43] = (RiverCrossingModule)0x1;
    if ((param_1) && (*(int *)(this + 0x60) == 1)) {
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
    }
    else {
      *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      nop();
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x4c));
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* RiverCrossingModule::InitDodoRider(bool, Sexy::RtWeakPtr<Sexy::PopAnim>) */

void __thiscall
RiverCrossingModule::InitDodoRider(RiverCrossingModule *this,char param_1,RtWeakPtr *param_3)

{
  ResourceInfo *pRVar1;
  RiverCrossingDodoRider *this_00;
  
  this_00 = *(RiverCrossingDodoRider **)(this + 0x20);
  if (param_1 == '\0') {
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
    RiverCrossingDodoRider::RiverCrossingDodoRiderInitialize(this_00,(PopAnim *)pRVar1);
    return;
  }
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_3);
  RiverCrossingDodoRider::RiverCrossingExternDodoRiderInitialize((PopAnim *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::SpawnWaterSplashEffect(Sexy::SexyVector3, int) */

void RiverCrossingModule::SpawnWaterSplashEffect
               (float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  Effect_PopAnim *this;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  float fVar4;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  if (((DAT_06b78d78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b78d78), iVar1 != 0)) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    DAT_06b78e00 = (float)(iVar1 + 200);
    __cxa_guard_release(&DAT_06b78d78);
  }
  fVar4 = DAT_06b78e60;
  if (((DAT_06b78e68 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b78e68), fVar4 = DAT_06b78e60, iVar1 != 0)) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar4 = (float)((iVar1 + 0x32) * 4);
    DAT_06b78e60 = fVar4;
    __cxa_guard_release(&DAT_06b78e68);
  }
  local_40 = (float)ClampFloat(local_40,DAT_06b78e00,fVar4);
  EATextSquish::Vec3::Vec3(aVStack_18,-95.0,-90.0,0.0);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_40,aVStack_18);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_WATER_SPLASH");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  pRVar3 = (RtClass *)RiverSplash::StaticGetClass();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar2,pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_40,param_5);
  std::string::string((string *)aRStack_20,"water_splash_0");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,2);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onDodoriderJumpIntoRiver() */

void __thiscall RiverCrossingModule::onDodoriderJumpIntoRiver(RiverCrossingModule *this)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_c;
  
  lVar2 = ___stack_chk_guard;
  if ((this[0x40] == (RiverCrossingModule)0x0) &&
     (cVar3 = RiverCrossingDodoRider::IsFlying(*(RiverCrossingDodoRider **)(this + 0x20)),
     cVar3 == '\0')) {
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x20);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    uVar6 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
    Board::GetGridBoundingRect();
    local_28 = (undefined4)uVar6;
    uStack_24 = (undefined4)((ulong)uVar6 >> 0x20);
    SpawnWaterSplashEffect(local_28,uStack_24,uVar1,this,(iVar4 - local_c) + 300000);
    RiverCrossingDodoRider::JumpIntoWater();
  }
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::gameplayStarted() */

void __thiscall RiverCrossingModule::gameplayStarted(RiverCrossingModule *this)

{
  RiverEntitiesManager *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *this_01;
  UIWidget *pUVar5;
  RiverEntityProperties *pRVar6;
  Effect_Protrusion *extraout_x0;
  GridItemWaterMist *this_02;
  ToxicWaterPerfumeBottleProjectile *this_03;
  Effect_Protrusion *extraout_x0_00;
  ToxicWaterPerfumeBottleProjectile *this_04;
  undefined8 local_48;
  undefined8 local_40;
  RiverEntityProperties aRStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_20,"UIPlantfood");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,false);
  }
  std::string::string(asStack_20,"UIPowerupHolder");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,false);
  }
  std::string::string(asStack_20,"UIShovel");
  pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar5 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar5,false);
  }
  this_00 = (RiverEntitiesManager *)(this + 0x78);
  local_48 = FUN_04a240c0(*(undefined8 *)(this_01 + 0x58));
  local_40 = FUN_04a24110(*(undefined8 *)(this_01 + 0x60));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    pRVar6 = (RiverEntityProperties *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    RiverEntityProperties::RiverEntityProperties(aRStack_38,pRVar6);
    RiverEntityProperties::RiverEntityProperties((RiverEntityProperties *)asStack_20,aRStack_38);
    RiverEntitiesManager::addRiverEntitiesColsInfo(this_00,asStack_20);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)asStack_20);
    RiverEntityProperties::~RiverEntityProperties(aRStack_38);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_48);
  }
  RiverEntitiesManager::Initialize(this_00);
  RiverEntitiesManager::StartManagement(this_00);
  uVar3 = RiverCrossingProperties::GetRetryTimes((RiverCrossingProperties *)this_01);
  *(undefined4 *)(this + 0x4c) = uVar3;
  iVar4 = RiverCrossingProperties::GetCrossTarget((RiverCrossingProperties *)this_01);
  *(int *)(this + 0x50) = iVar4;
  *(uint *)(this + 0x60) = (uint)(iVar4 == 0);
  uVar3 = PakInterface::GetFileSearchOrder((PakInterface *)this_01);
  *(undefined4 *)(this + 0x48) = uVar3;
  if (*(int *)(this + 0x60) == 0) {
    pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x170);
    Sexy::RtName::RtName((RtName *)asStack_20,L"UICrossedRiverDodoRider");
    UIWidget::CreateWidget(asStack_20,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtName::~RtName((RtName *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    nop();
    (**(code **)(*(long *)this + 0xe8))(asStack_20,this);
    Effect_Protrusion::SetInstigator(extraout_x0,asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    nop();
    GridItemWaterMist::SetType(this_02,*(int *)(this + 0x50));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    nop();
    ToxicWaterPerfumeBottleProjectile::SetType(this_03,*(int *)(this + 0x18));
  }
  pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x178);
  Sexy::RtName::RtName((RtName *)asStack_20,L"UIRemainRiverDodoRider");
  UIWidget::CreateWidget(asStack_20,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtName::~RtName((RtName *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  nop();
  (**(code **)(*(long *)this + 0xf0))(asStack_20,this);
  Effect_Protrusion::SetInstigator(extraout_x0_00,asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_04,*(int *)(this + 0x4c));
  this[0x29] = (RiverCrossingModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingModule::CreateRider() */

void RiverCrossingModule::CreateRider(void)

{
  GameObject::Create<RiverCrossingDodoRider>();
  return;
}


/* RiverCrossingModule::loadComplete() */

void __thiscall RiverCrossingModule::loadComplete(RiverCrossingModule *this)

{
  ResilienceTutorialIntroProperties *this_00;
  undefined4 uVar1;
  
  this_00 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar1 = RiverCrossingProperties::GetDodoRiderWalkingRate((RiverCrossingProperties *)this_00);
  *(undefined4 *)(this + 0x6c) = uVar1;
  uVar1 = RiverCrossingProperties::GetDodoRiderFlyingRate((RiverCrossingProperties *)this_00);
  *(undefined4 *)(this + 0x70) = uVar1;
  (**(code **)(*(long *)this + 0xc0))(this);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SpawnDodoRider,false);
  return;
}


/* RiverCrossingModule::RequireNewDodoRider() */

void __thiscall RiverCrossingModule::RequireNewDodoRider(RiverCrossingModule *this)

{
  float fVar1;
  
  RiverEntitiesManager::unbindAllFloatingIce((RiverEntitiesManager *)(this + 0x78));
  if (*(int *)(this + 0x4c) < 1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x68) = fVar1 + 1.0;
  }
  else if (this[0x40] == (RiverCrossingModule)0x0) {
    if (((*(int *)(this + 0x50) != 0) || (*(int *)(this + 0x48) != *(int *)(this + 0x44))) &&
       ((*(int *)(this + 0x48) != 0 || (*(int *)(this + 0x50) != *(int *)(this + 0x18))))) {
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SpawnDodoRider,false);
      return;
    }
  }
  return;
}


/* RiverCrossingModule::onDodoRiderDied() */

void __thiscall RiverCrossingModule::onDodoRiderDied(RiverCrossingModule *this)

{
  if (this[0x40] == (RiverCrossingModule)0x0) {
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 0x48))();
      *(undefined8 *)(this + 0x20) = 0;
    }
    RequireNewDodoRider(this);
    return;
  }
  return;
}


/* RiverCrossingModule::CheckDodoRiderKilled() */

void __thiscall RiverCrossingModule::CheckDodoRiderKilled(RiverCrossingModule *this)

{
  char cVar1;
  
  if (((this[0x40] == (RiverCrossingModule)0x0) &&
      (((cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0' ||
        (this[100] == (RiverCrossingModule)0x0)) && (*(long *)(this + 0x20) != 0)))) &&
     (cVar1 = (**(code **)(*(long *)this + 200))(this), cVar1 != '\0')) {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::DodoriderKilled,false);
    return;
  }
  return;
}


/* RiverCrossingModule::RiverCrossingModule() */

void __thiscall RiverCrossingModule::RiverCrossingModule(RiverCrossingModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692f710;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  RiverEntitiesManager::RiverEntitiesManager((RiverEntitiesManager *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x180));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x42] = (RiverCrossingModule)0x1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x28] = (RiverCrossingModule)0x0;
  this[0x41] = (RiverCrossingModule)0x0;
  this[0x40] = (RiverCrossingModule)0x0;
  this[0x29] = (RiverCrossingModule)0x0;
  this[100] = (RiverCrossingModule)0x0;
  this[0x2a] = (RiverCrossingModule)0x0;
  this[0x43] = (RiverCrossingModule)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = uVar1;
  std::vector<StarvingChomper*,std::allocator<StarvingChomper*>>::clear
            ((vector<StarvingChomper*,std::allocator<StarvingChomper*>> *)(this + 0x188));
  std::vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>>::clear
            ((vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>> *)
             (this + 0x1a0));
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* RiverCrossingModule::StaticNew() */

RiverCrossingModule * RiverCrossingModule::StaticNew(void)

{
  RiverCrossingModule *this;
  
  this = ::operator_new(0x1b8);
  RiverCrossingModule(this);
  return this;
}


/* RiverCrossingModule::GetRiderUIImage() */

void __thiscall RiverCrossingModule::GetRiderUIImage(RiverCrossingModule *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b78dd0);
  return;
}


/* RiverCrossingModule::GetRemainUIImage() */

void __thiscall RiverCrossingModule::GetRemainUIImage(RiverCrossingModule *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b78d50);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::RenderRemainDodoRiders(Sexy::Graphics*) */

void __thiscall
RiverCrossingModule::RenderRemainDodoRiders(RiverCrossingModule *this,Graphics *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  wchar_t *pwVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  undefined8 uVar9;
  float local_68;
  float local_64;
  GraphicsAutoState aGStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_68)
  ;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  local_68 = (float)FUN_04a22824((float)iVar3 * 7.5 + 200.0);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_64 = (float)FUN_04a22824(160.0 - (float)iVar3 * 1.4);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06b78e38);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(int)local_68,(int)local_64);
  TodStringTranslate(L"%d");
  pwVar6 = (wchar_t *)FUN_054766ec((Insets *)&local_18);
  Sexy::StrFormat(pwVar6,auStack_58,(ulong)*(uint *)(this + 0x4c));
  FUN_05476c50((Insets *)&local_18);
  fVar1 = local_68;
  pLVar7 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b78e38);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  fVar2 = local_64;
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b78e38);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Insets::Insets
            (aIStack_48,(int)(fVar1 + (float)iVar3 * 0.23),(int)(fVar2 + (float)iVar4 * 0.44),0x3c,
             0x3c);
  Sexy::Color::Color((Color *)&local_38);
  if (*(int *)(this + 0x4c) < 2) {
    Sexy::Color::Color((Color *)&local_18,2);
    local_38 = local_18;
    uStack_30 = uStack_10;
  }
  else {
    Sexy::Color::Color((Color *)&local_18,0);
    local_38 = local_18;
    uStack_30 = uStack_10;
  }
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_38);
  WriteWordInRect(param_1,auStack_58,aIStack_48,uVar9,(Insets *)&local_18,5,1);
  fVar1 = local_68;
  pLVar7 = (LotteryResultProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b78e38);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  fVar2 = local_64;
  pSVar8 = (SalesProgressBar *)
           CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06b78e38);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Insets::Insets
            (aIStack_28,(int)(fVar1 + (float)iVar3 * 0.39),(int)(fVar2 + (float)iVar4 * 0.47),0x50,
             0x3c);
  TodStringTranslate(L"[RIVERCROSSING_REMAIN_DODORIDERS]");
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)&local_18,0);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,(Insets *)&local_18,5,1);
  FUN_05476c50(auStack_50);
  FUN_05476c50(auStack_58);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onReviveCancel() */

void __thiscall RiverCrossingModule::onReviveCancel(RiverCrossingModule *this)

{
  char cVar1;
  long *plVar2;
  string *extraout_x1;
  code *pcVar3;
  Sexy aSStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this[100] = (RiverCrossingModule)0x0;
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_04a25148(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    (**(code **)(*(long *)this + 0xe0))(aSStack_18,this);
    Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
    (*pcVar3)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string((string *)aSStack_18);
    this[0x29] = (RiverCrossingModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::DodoRiderMoveTo(MoveDirection) */

void RiverCrossingModule::DodoRiderMoveTo
               (undefined1 param_1 [16],float param_2,undefined4 param_3,
               RiverCrossingModule *param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  StarvingChomper *pSVar7;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(RiverCrossingDodoRider **)(param_4 + 0x20) != (RiverCrossingDodoRider *)0x0) &&
     (cVar1 = RiverCrossingDodoRider::canMove(*(RiverCrossingDodoRider **)(param_4 + 0x20)),
     cVar1 != '\0')) {
    RiverCrossingDodoRider::SetIsMoving(*(RiverCrossingDodoRider **)(param_4 + 0x20),true);
    local_18 = (float)calcDodoRiderNextPosition(param_4,param_5);
    local_14 = param_2;
    local_10 = param_3;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(local_18);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(local_14);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_4 + 0x188));
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_4 + 0x188));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      pSVar7 = (StarvingChomper *)*puVar5;
      BoardEntity::CalcGridPosition();
      if ((local_20 == iVar3) && (local_1c == iVar4)) {
        cVar1 = StarvingChomper::isInState(pSVar7,1);
        if (cVar1 == '\0') {
          RiverCrossingDodoRider::SetIsMoving(*(RiverCrossingDodoRider **)(param_4 + 0x20),false);
        }
        else {
          RiverEntitiesManager::unbindAllFloatingIce((RiverEntitiesManager *)(param_4 + 0x78));
          MessageRouter::Post<StarvingChomper*,StarvingChomper*>
                    ((MessageRouter *)gMessageRouter,Message::StarvingChomperEatDodorider,pSVar7);
        }
        goto LAB_04a25afc;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    pcVar6 = *(code **)(*(long *)param_4 + 0xb0);
    BoardEntity::CalcGridPosition();
    cVar1 = (*pcVar6)(param_4,(__normal_iterator *)&local_28);
    if (cVar1 == '\0') {
      pcVar6 = *(code **)(*(long *)param_4 + 0xb0);
      Sexy::Point::Point((Point *)&local_20,iVar3,iVar4);
      cVar1 = (*pcVar6)(param_4,(Point *)&local_20);
      if (cVar1 == '\0') {
        RiverCrossingDodoRider::SetNextPosition
                  (local_18,local_14,local_10,*(undefined8 *)(param_4 + 0x20));
        RiverCrossingDodoRider::setState(*(RiverCrossingDodoRider **)(param_4 + 0x20),1);
        goto LAB_04a25afc;
      }
    }
    RiverEntitiesManager::unbindAllFloatingIce((RiverEntitiesManager *)(param_4 + 0x78));
    RiverCrossingDodoRider::setState(*(RiverCrossingDodoRider **)(param_4 + 0x20),2);
    RiverCrossingDodoRider::SetNextPosition
              (local_18,local_14,local_10,*(undefined8 *)(param_4 + 0x20));
  }
LAB_04a25afc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::handleTouch(Sexy::Touch const&) */

void __thiscall RiverCrossingModule::handleTouch(RiverCrossingModule *this,Touch *param_1)

{
  undefined4 uVar1;
  RiverCrossingModule RVar2;
  uint uVar3;
  RiverCrossingModule RVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  int local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x40] != (RiverCrossingModule)0x0) ||
     (RVar2 = this[0x42], RVar2 == (RiverCrossingModule)0x0)) {
    this[0x2a] = (RiverCrossingModule)0x0;
    this[0x41] = (RiverCrossingModule)0x0;
    cancelTouch(this);
    RVar4 = (RiverCrossingModule)0x0;
    goto LAB_04a25c70;
  }
  if ((*(long *)(this + 0x30) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar8 = *(long *)param_1;
switchD_04a25cc8_caseD_0:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(long *)(this + 0x30) = lVar8;
    iVar5 = FUN_04a22834(uVar1);
    iVar6 = FUN_04a22834(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar5,(float)iVar6);
    this[0x41] = (RiverCrossingModule)0x0;
    *(ulong *)(this + 0x38) = CONCAT44(iStack_c,local_10);
    RVar4 = RVar2;
  }
  else {
    lVar8 = *(long *)param_1;
    RVar4 = (RiverCrossingModule)0x0;
    if (*(long *)(this + 0x30) != lVar8) goto LAB_04a25c70;
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      goto switchD_04a25cc8_caseD_0;
    case 1:
      if (((this[0x2a] == (RiverCrossingModule)0x0) && (this[0x43] == (RiverCrossingModule)0x0)) &&
         (*(long *)(this + 0x20) != 0)) {
        iVar5 = FUN_04a22834(*(undefined4 *)(param_1 + 0x10));
        iVar6 = FUN_04a22834(*(undefined4 *)(param_1 + 0x14));
        fVar9 = (float)iVar6;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar5,fVar9);
        local_18 = Sexy::SexyVector2::operator-
                             ((SexyVector2 *)&local_20,(SexyVector2 *)(this + 0x38));
        local_14 = fVar9;
        fVar9 = (float)VectorNorm((FPoint *)&local_18);
        fVar10 = 3600.0;
        if (3600.0 < fVar9) {
          this[0x41] = (RiverCrossingModule)0x1;
          fVar9 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_18);
          if (fVar9 < -0.5) {
            this[0x2a] = (RiverCrossingModule)0x1;
            BoardEntity::CalcGridPosition();
            if ((0 < local_10) &&
               (MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,1),
               this[0x28] == (RiverCrossingModule)0x0)) {
              DodoRiderMoveTo(this,2);
              RVar4 = RVar2;
              break;
            }
          }
          else if (0.5 < fVar9) {
            this[0x2a] = (RiverCrossingModule)0x1;
            BoardEntity::CalcGridPosition();
            iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
            if ((local_10 < iVar5 + -1) &&
               (MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,3),
               this[0x28] == (RiverCrossingModule)0x0)) {
              DodoRiderMoveTo(this,3);
              RVar4 = RVar2;
              break;
            }
          }
          else if (fVar10 < -0.5) {
            this[0x2a] = (RiverCrossingModule)0x1;
            BoardEntity::CalcGridPosition();
            if ((0 < iStack_c) &&
               (MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,2),
               this[0x28] == (RiverCrossingModule)0x0)) {
              DodoRiderMoveTo(this);
              RVar4 = RVar2;
              break;
            }
          }
          else if (0.5 < fVar10) {
            this[0x2a] = (RiverCrossingModule)0x1;
            BoardEntity::CalcGridPosition();
            iVar5 = BoardConstants::NUMBER_OF_ROWS();
            if ((iStack_c < iVar5 + -1) &&
               (MessageRouter::Post<int,int>
                          ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,4),
               this[0x28] == (RiverCrossingModule)0x0)) {
              DodoRiderMoveTo(this,1);
            }
          }
        }
      }
    default:
      RVar4 = RVar2;
      break;
    case 3:
      if ((((this[0x41] != (RiverCrossingModule)0x0) && (this[0x2a] != (RiverCrossingModule)0x0)) ||
          (this[0x43] != (RiverCrossingModule)0x0)) || (*(long *)(this + 0x20) == 0)) {
        this[0x2a] = (RiverCrossingModule)0x0;
        this[0x41] = (RiverCrossingModule)0x0;
        cancelTouch(this);
        RVar4 = RVar2;
        break;
      }
      iVar5 = FUN_04a22834(*(undefined4 *)(param_1 + 0x10));
      iVar6 = FUN_04a22834(*(undefined4 *)(param_1 + 0x14));
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar5,(float)iVar6);
      Sexy::Point::Point((Point *)&local_18,(int)local_20,(int)local_1c);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x20));
      fVar10 = *pfVar7;
      fVar9 = (float)local_18;
      uVar3 = (int)(fVar9 - fVar10) >> 0x1f;
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      if ((iVar5 + 10) / 2 < (int)(((int)(fVar9 - fVar10) ^ uVar3) - uVar3)) {
        fVar10 = (float)local_18;
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x20));
        fVar9 = *pfVar7;
        if (fVar10 < fVar9) {
          BoardEntity::CalcGridPosition();
          if (0 < local_10) {
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,1);
            if (this[0x28] == (RiverCrossingModule)0x0) {
              DodoRiderMoveTo(this,2);
            }
            goto LAB_04a25ed0;
          }
          fVar10 = (float)local_18;
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(this + 0x20));
          fVar9 = *pfVar7;
        }
        if (fVar9 < fVar10) {
          BoardEntity::CalcGridPosition();
          iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
          if ((local_10 < iVar5 + -1) &&
             (MessageRouter::Post<int,int>
                        ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,3),
             this[0x28] == (RiverCrossingModule)0x0)) {
            DodoRiderMoveTo(this,3);
          }
        }
      }
      else {
        fVar10 = (float)(int)local_14;
        lVar8 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                **)(this + 0x20));
        fVar9 = *(float *)(lVar8 + 4);
        if (fVar10 < fVar9) {
          BoardEntity::CalcGridPosition();
          if (0 < iStack_c) {
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,2);
            if (this[0x28] == (RiverCrossingModule)0x0) {
              DodoRiderMoveTo(this);
            }
            goto LAB_04a25ed0;
          }
          fVar10 = (float)(int)local_14;
          lVar8 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(this + 0x20));
          fVar9 = *(float *)(lVar8 + 4);
        }
        if (fVar9 < fVar10) {
          BoardEntity::CalcGridPosition();
          iVar5 = BoardConstants::NUMBER_OF_ROWS();
          if ((iStack_c < iVar5 + -1) &&
             (MessageRouter::Post<int,int>
                        ((MessageRouter *)gMessageRouter,Message::RiverCrossingHandleTouch,4),
             this[0x28] == (RiverCrossingModule)0x0)) {
            DodoRiderMoveTo(this,1);
          }
        }
      }
LAB_04a25ed0:
      this[0x41] = (RiverCrossingModule)0x0;
      cancelTouch(this);
      RVar4 = RVar2;
      break;
    case 4:
      cancelTouch(this);
      RVar4 = RVar2;
    }
  }
LAB_04a25c70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onReviveOK() */

void __thiscall RiverCrossingModule::onReviveOK(RiverCrossingModule *this)

{
  undefined *puVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  string asStack_10 [8];
  long local_8;
  
  this[0x42] = (RiverCrossingModule)0x1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x4c) = 1;
  this[100] = (RiverCrossingModule)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 0x4c));
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::SpawnDodoRider,true);
  puVar1 = gMessageRouter;
  std::string::string(asStack_10,"RiverCrossingRevive");
  MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
            ((MessageRouter *)puVar1,Message::MissionGemUse,asStack_10,10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RiverCrossingModule::AddResourceRequirements(RiverCrossingModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ZombieIceAgeDodoGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"RiverCrossing");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantChomper");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DelayLoad_Background_Pirate");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Eliminate");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::InitChomerGroup() */

void __thiscall RiverCrossingModule::InitChomerGroup(RiverCrossingModule *this)

{
  StarvingChomper *pSVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  PlantWarsLeaderBoardLineData *pPVar6;
  ResourceInfo *pRVar7;
  ResourceInfo *pRVar8;
  code *pcVar9;
  undefined8 local_60;
  undefined8 local_58;
  StarvingChomper *local_50;
  RtWeakPtr aRStack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_60 = FUN_04a23ffc(*(undefined8 *)(pRVar5 + 0x70));
  local_58 = FUN_04a2404c(*(undefined8 *)(pRVar5 + 0x78));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    pPVar6 = (PlantWarsLeaderBoardLineData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
              ((PlantWarsLeaderBoardLineData *)&local_20,pPVar6);
    if (local_18 == 0) {
      local_50 = GameObject::Create<StarvingChomper>();
      if (local_50 != (StarvingChomper *)0x0) {
        std::string::string(asStack_30,"POPANIM_PLANT_CHOMPER");
        GetPAMByName(asStack_30);
        std::string::~string(asStack_30);
        nop();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_40);
        if (*(int *)(this + 0x60) == 1) {
          std::string::string(asStack_38,"POPANIM_RIVERCROSSING_RIVERCROSSING_CHOMPER_EMO");
          GetPAMByName(asStack_38);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)asStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
          std::string::~string(asStack_38);
          nop();
        }
        pSVar1 = local_50;
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
        StarvingChomper::StarvingChomperInitialize(pSVar1,(PopAnim *)pRVar7,(PopAnim *)pRVar8,true);
        iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_20);
        iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(local_1c);
        pSVar1 = local_50;
        pcVar9 = *(code **)(*(long *)local_50 + 0x78);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,(float)iVar3,(float)iVar4,0.0);
        (*pcVar9)(pSVar1,asStack_30);
        std::vector<StarvingChomper*,std::allocator<StarvingChomper*>>::push_back
                  ((vector<StarvingChomper*,std::allocator<StarvingChomper*>> *)(this + 0x188),
                   &local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
    }
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::RequireNextChomerGroup() */

void __thiscall RiverCrossingModule::RequireNextChomerGroup(RiverCrossingModule *this)

{
  StarvingChomper *pSVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  PlantWarsLeaderBoardLineData *pPVar6;
  ResourceInfo *pRVar7;
  ResourceInfo *pRVar8;
  code *pcVar9;
  undefined8 local_60;
  undefined8 local_58;
  StarvingChomper *local_50;
  RtWeakPtr aRStack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  string asStack_38 [8];
  string asStack_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_60 = FUN_04a23ffc(*(undefined8 *)(pRVar5 + 0x70));
  local_58 = FUN_04a2404c(*(undefined8 *)(pRVar5 + 0x78));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2) {
    pPVar6 = (PlantWarsLeaderBoardLineData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
              ((PlantWarsLeaderBoardLineData *)&local_20,pPVar6);
    if (*(int *)(this + 0x18) == local_18) {
      local_50 = GameObject::Create<StarvingChomper>();
      if (local_50 != (StarvingChomper *)0x0) {
        std::string::string(asStack_30,"POPANIM_PLANT_CHOMPER");
        GetPAMByName(asStack_30);
        std::string::~string(asStack_30);
        nop();
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_40);
        if (*(int *)(this + 0x60) == 1) {
          std::string::string(asStack_38,"POPANIM_RIVERCROSSING_RIVERCROSSING_CHOMPER_EMO");
          GetPAMByName(asStack_38);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)asStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
          std::string::~string(asStack_38);
          nop();
        }
        pSVar1 = local_50;
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
        StarvingChomper::StarvingChomperInitialize(pSVar1,(PopAnim *)pRVar7,(PopAnim *)pRVar8,true);
        iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_20);
        iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(local_1c);
        pSVar1 = local_50;
        pcVar9 = *(code **)(*(long *)local_50 + 0x78);
        EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,(float)iVar3,(float)iVar4,0.0);
        (*pcVar9)(pSVar1,asStack_30);
        std::vector<StarvingChomper*,std::allocator<StarvingChomper*>>::push_back
                  ((vector<StarvingChomper*,std::allocator<StarvingChomper*>> *)(this + 0x188),
                   &local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
    }
    GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
              ((GridItemCardGameZombieActionData *)&local_20);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::registerForEvents() */

void __thiscall RiverCrossingModule::registerForEvents(RiverCrossingModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  CBMemberTranslatorX aCStack_110 [40];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<RiverCrossingModule,bool(RiverCrossingModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<RiverCrossingModule,bool(RiverCrossingModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<RiverCrossingModule,bool(RiverCrossingModule::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject
            (pBVar3,aDStack_68,4,
             (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_b0,aDStack_38)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiverEntitySpawned);
  local_120 = local_e8;
  MessageRouter::
  Subscribe<RiverEntity*,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(RiverEntity*)>>
            ((MessageRouter *)puVar1,Message::SpawnRiverEntity,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiverEntityCloseToEdge);
  local_130 = local_e0;
  uStack_128 = uStack_d8;
  local_120 = local_d0;
  MessageRouter::
  Subscribe<RiverEntity*,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(RiverEntity*)>>
            ((MessageRouter *)puVar1,Message::RiverEntityCloseToEdge,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSpawnDodoRider);
  local_140 = local_b8;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::SpawnDodoRider,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xd0);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DodoRiderDying,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDodoRiderDied);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DodoRiderDied,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDodoriderKilled);
  local_150 = local_b0;
  uStack_148 = uStack_a8;
  local_140 = local_a0;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(bool)>>
            ((MessageRouter *)puVar1,Message::DodoriderKilled,&local_150);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStarvingChomperEatDodorider);
  local_160 = local_88;
  local_170 = local_98;
  uStack_168 = uStack_90;
  MessageRouter::
  Subscribe<StarvingChomper*,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(StarvingChomper*)>>
            ((MessageRouter *)puVar1,Message::StarvingChomperEatDodorider,&local_170);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDodoriderJumpIntoRiver);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::DodoriderJumpIntoRiver,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDodoRiderLanding);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::DodoRiderLanding,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlayFloatingIceCarryingAnim);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::PlayFloatingIceCarryingAnim,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDodoRiderGoWithFloatingIce);
  local_190 = local_80;
  uStack_188 = uStack_78;
  local_180 = local_70;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<RiverCrossingModule,void(RiverCrossingModule::*)(float)>>
            ((MessageRouter *)puVar1,Message::DodoRiderGoWithFloatingIce,&local_190);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<RiverCrossingModule,void(RiverCrossingModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_110);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onDodoRiderCorssedtheRiver() */

void __thiscall RiverCrossingModule::onDodoRiderCorssedtheRiver(RiverCrossingModule *this)

{
  char cVar1;
  long lVar2;
  ToxicWaterPerfumeBottleProjectile *this_00;
  int *piVar3;
  ToxicWaterPerfumeBottleProjectile *this_01;
  string *extraout_x1;
  int iVar4;
  string asStack_28 [8];
  Sexy aSStack_20 [8];
  undefined1 auStack_18 [8];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x40] == (RiverCrossingModule)0x0) && (this[100] == (RiverCrossingModule)0x0)) {
    cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 != '\0') &&
       ((this[0x29] != (RiverCrossingModule)0x0 && (*(long *)(this + 0x20) != 0)))) {
      MakeDodoRiderArrival(this);
      std::vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>>::push_back
                ((vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>> *)
                 (this + 0x1a0),(RiverCrossingDodoRider **)(this + 0x20));
      iVar4 = *(int *)(this + 0x60);
      *(undefined8 *)(this + 0x20) = 0;
      if (iVar4 == 1) {
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
        nop();
        ToxicWaterPerfumeBottleProjectile::SetType(this_01,*(int *)(this + 0x4c));
        iVar4 = *(int *)(this + 0x60);
      }
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      if (iVar4 == 0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
        nop();
        local_10[0] = iVar4;
        piVar3 = eastl::max_alt<int>(local_10,(int *)(this + 0x18));
        ToxicWaterPerfumeBottleProjectile::SetType(this_00,*piVar3);
      }
    }
    lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06b78d88);
    if (lVar2 == 0) {
      std::string::string((string *)local_10,"1]");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)&DAT_06b78d88,(wstring *)local_10,0x19);
      std::string::~string((string *)local_10);
      nop();
      std::string::string((string *)local_10,"2]");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)&DAT_06b78d88,(wstring *)local_10,0x19);
      std::string::~string((string *)local_10);
      nop();
      std::string::string((string *)local_10,"3]");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)&DAT_06b78d88,(wstring *)local_10,0x19);
      std::string::~string((string *)local_10);
      nop();
      std::string::string((string *)local_10,"4]");
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)&DAT_06b78d88,(wstring *)local_10,0x19);
      std::string::~string((string *)local_10);
      nop();
    }
    ProbabilitySet<std::string>::PickItem();
    FUN_031f5e7c(aSStack_20,"[DODORIDER_SUCCESSFULLY_CROSSEDRIVER_",asStack_28);
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
    TodStringTranslate((wstring *)local_10);
    FUN_05476c50((wstring *)local_10);
    Board::DisplayAdviceAgain(*(Board **)(gLawnApp + 0x9f0),auStack_18,0x1a,0);
    (**(code **)(*(long *)this + 0xb8))(this);
    RequireNewDodoRider(this);
    FUN_05476c50(auStack_18);
    std::string::~string((string *)aSStack_20);
    std::string::~string(asStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiverCrossingModule::onUpdate() */

void __thiscall RiverCrossingModule::onUpdate(RiverCrossingModule *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x40] == (RiverCrossingModule)0x0) &&
     (fVar4 = (float)PVZ_T(), *(float *)(this + 0x68) < fVar4)) {
    uVar5 = PVZ_EOT();
    this[100] = (RiverCrossingModule)0x1;
    *(undefined4 *)(this + 0x68) = uVar5;
    LawnApp::ShowReviveUI(gLawnApp,6);
  }
  RiverEntitiesManager::Update((RiverEntitiesManager *)(this + 0x78));
  if (*(RiverCrossingDodoRider **)(this + 0x20) != (RiverCrossingDodoRider *)0x0) {
    RiverCrossingDodoRider::Update(*(RiverCrossingDodoRider **)(this + 0x20));
  }
  CheckDodoRiderKilled(this);
  if (((*(RiverCrossingDodoRider **)(this + 0x20) != (RiverCrossingDodoRider *)0x0) &&
      (cVar1 = RiverCrossingDodoRider::isInState(*(RiverCrossingDodoRider **)(this + 0x20),0),
      cVar1 == '\0')) && (cVar1 = CheckDodoRiderCrossedtheRiver(), cVar1 != '\0')) {
    onDodoRiderCorssedtheRiver(this);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1a0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1a0));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((RiverCrossingDodoRider *)*puVar3 != (RiverCrossingDodoRider *)0x0) {
      RiverCrossingDodoRider::Update((RiverCrossingDodoRider *)*puVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x188));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x188));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    StarvingChomper::Update((StarvingChomper *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiverCrossingModule::~RiverCrossingModule() */

void __thiscall RiverCrossingModule::~RiverCrossingModule(RiverCrossingModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0692f710;
  std::vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>>::~vector
            ((vector<RiverCrossingDodoRider*,std::allocator<RiverCrossingDodoRider*>> *)
             (this + 0x1a0));
  std::vector<StarvingChomper*,std::allocator<StarvingChomper*>>::~vector
            ((vector<StarvingChomper*,std::allocator<StarvingChomper*>> *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x180));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  RiverEntitiesManager::~RiverEntitiesManager((RiverEntitiesManager *)(this + 0x78));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RiverCrossingModule::~RiverCrossingModule() */

void __thiscall RiverCrossingModule::~RiverCrossingModule(RiverCrossingModule *this)

{
  ~RiverCrossingModule(this);
  AK::FreeHook(this);
  return;
}

