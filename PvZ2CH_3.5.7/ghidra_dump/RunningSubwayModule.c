// Class: RunningSubwayModule


/* RunningSubwayModule::preventSave() */

undefined8 RunningSubwayModule::preventSave(void)

{
  return 1;
}


/* RunningSubwayModule::levelStarted() */

void RunningSubwayModule::levelStarted(void)

{
  return;
}


/* RunningSubwayModule::cancelTouch() */

void __thiscall RunningSubwayModule::cancelTouch(RunningSubwayModule *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::StaticClassInit() */

void RunningSubwayModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTrackInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033f2304,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RunningSkillInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033e9520,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RunningSubwayModule");
    (*pcVar3)(plVar2,asStack_10,FUN_033f2458,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::StaticGetClass() */

long * RunningSubwayModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RunningSubwayModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::GetRunningPlayerPam() */

void __thiscall RunningSubwayModule::GetRunningPlayerPam(RunningSubwayModule *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_RUNNING_SUBWAY_PLAYER");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::getGridItemTypeName(RunningSubwayObjectType) */

void RunningSubwayModule::getGridItemTypeName(string *param_1,undefined8 param_2,int param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  if ((param_3 == 1) || (param_3 != 2)) {
    std::string::append(param_1,"running_subway_coin",(size_t)__n);
  }
  else {
    std::string::append(param_1,"running_subway_obstacle",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* RunningSubwayModule::reachTarget() */

bool __thiscall RunningSubwayModule::reachTarget(RunningSubwayModule *this)

{
  return *(int *)(this + 0xcc) <= *(int *)(this + 200);
}


/* RunningSubwayModule::checkWin() */

RunningSubwayModule __thiscall RunningSubwayModule::checkWin(RunningSubwayModule *this)

{
  RunningSubwayModule RVar1;
  
  RVar1 = this[0x21];
  if ((RVar1 == (RunningSubwayModule)0x0) &&
     (RVar1 = (RunningSubwayModule)0x0, this[0x20] != (RunningSubwayModule)0x0)) {
    RVar1 = (RunningSubwayModule)reachTarget(this);
    if (RVar1 != (RunningSubwayModule)0x0) {
      this[0x21] = (RunningSubwayModule)0x1;
      return RVar1;
    }
    RVar1 = this[0x21];
  }
  return RVar1;
}


/* RunningSubwayModule::isInSkill() */

bool __thiscall RunningSubwayModule::isInSkill(RunningSubwayModule *this)

{
  return *(float *)(this + 0xac) != 0.0;
}


/* RunningSubwayModule::onNotifyGotHit() */

void __thiscall RunningSubwayModule::onNotifyGotHit(RunningSubwayModule *this)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(this + 0xb8) != 0) {
    cVar1 = isInSkill(this);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(this + 0xb8) + -1;
      *(int *)(this + 0xb8) = iVar2;
    }
    else {
      iVar2 = *(int *)(this + 0xb8);
    }
    if (iVar2 == 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::calcRunningPlayerNextPosition(RunningPlayerMoveDirection) */

void __thiscall
RunningSubwayModule::calcRunningPlayerNextPosition(RunningSubwayModule *this,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x18));
  fVar5 = pfVar4[1];
  fVar1 = *pfVar4;
  fVar2 = pfVar4[2];
  DVec3::DVec3((DVec3 *)&local_28);
  if (param_2 == 0) {
    local_28 = fVar1;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = fVar5 - (float)iVar3;
    local_20 = fVar2;
  }
  else if (param_2 == 1) {
    local_28 = fVar1;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = (float)iVar3 + fVar5;
    local_20 = fVar2;
  }
  BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
  BoardTransforms::BoardSpaceToGridYUnbounded(fStack_24);
  local_18 = CONCAT44(fStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::canMove(bool, Sexy::Point const&) */

void __thiscall RunningSubwayModule::canMove(RunningSubwayModule *this,bool param_1,Point *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(int *)(param_2 + 4) < 1) {
LAB_033ecb94:
      bVar1 = 0;
      goto LAB_033ecb98;
    }
    iVar2 = *(int *)param_2;
    iVar3 = *(int *)(param_2 + 4) + -1;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar2 + -1 <= iVar3) goto LAB_033ecb94;
    iVar2 = *(int *)param_2;
    iVar3 = *(int *)(param_2 + 4) + 1;
  }
  Sexy::Point::Point(aPStack_10,iVar2,iVar3);
  bVar1 = RunningSubwayUtils::IsDisabledRegion(aPStack_10);
  bVar1 = bVar1 ^ 1;
LAB_033ecb98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* RunningSubwayModule::GetSkillButton() */

void __thiscall RunningSubwayModule::GetSkillButton(RunningSubwayModule *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  return;
}


/* RunningSubwayModule::canGenerateNextGridMap() */

bool __thiscall RunningSubwayModule::canGenerateNextGridMap(RunningSubwayModule *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x80));
  bVar1 = false;
  if (bVar2) {
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x88));
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    bVar1 = (int)*pfVar4 <= iVar3;
  }
  return bVar1;
}


/* RunningSubwayModule::AddCurrentScore(int) */

void __thiscall RunningSubwayModule::AddCurrentScore(RunningSubwayModule *this,int param_1)

{
  ToxicWaterPerfumeBottleProjectile *this_00;
  
  *(int *)(this + 200) = *(int *)(this + 200) + param_1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_00,*(int *)(this + 200));
  return;
}


/* RunningSubwayModule::SetCurrentSkillEnergyCount(int) */

void __thiscall
RunningSubwayModule::SetCurrentSkillEnergyCount(RunningSubwayModule *this,int param_1)

{
  bool bVar1;
  long lVar2;
  
  *(int *)(this + 0xb0) = param_1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
  if (!bVar1) {
    return;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  FUN_033e9500(lVar2 + 0x1e8,*(undefined4 *)(this + 0xb0));
  return;
}


/* RunningSubwayModule::onNotifyCoinCollected() */

void __thiscall RunningSubwayModule::onNotifyCoinCollected(RunningSubwayModule *this)

{
  int iVar1;
  
  iVar1 = FUN_033e94f8(*(undefined4 *)(this + 0xb0));
  SetCurrentSkillEnergyCount(this,iVar1 + 1);
  return;
}


/* RunningSubwayModule::updateRunningPlayer() */

void __thiscall RunningSubwayModule::updateRunningPlayer(RunningSubwayModule *this)

{
  if (*(RunningPlayer **)(this + 0x18) != (RunningPlayer *)0x0) {
    RunningPlayer::Update(*(RunningPlayer **)(this + 0x18));
    return;
  }
  return;
}


/* RunningSubwayModule::RunningPlayerMoveTo(RunningPlayerMoveDirection) */

void RunningSubwayModule::RunningPlayerMoveTo
               (undefined1 param_1 [16],float param_2,undefined4 param_3,
               RunningSubwayModule *param_4,undefined4 param_5)

{
  char cVar1;
  float fVar2;
  
  if (*(RunningPlayer **)(param_4 + 0x18) != (RunningPlayer *)0x0) {
    cVar1 = RunningPlayer::canMove(*(RunningPlayer **)(param_4 + 0x18));
    if (cVar1 != '\0') {
      FlyingFireball::SetSpawnsDragonImp(*(FlyingFireball **)(param_4 + 0x18),true);
      fVar2 = (float)calcRunningPlayerNextPosition(param_4,param_5);
      BoardTransforms::BoardSpaceToGridXUnbounded(fVar2);
      BoardTransforms::BoardSpaceToGridYUnbounded(param_2);
      RiverCrossingDodoRider::SetNextPosition(fVar2,param_2,param_3,*(undefined8 *)(param_4 + 0x18))
      ;
      RunningPlayer::StartMove(*(RunningPlayer **)(param_4 + 0x18));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::handleTouch(Sexy::Touch const&) */

void __thiscall RunningSubwayModule::handleTouch(RunningSubwayModule *this,Touch *param_1)

{
  undefined4 uVar1;
  RunningSubwayModule RVar2;
  RunningSubwayModule RVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  RunningPlayer *this_00;
  float fVar8;
  float fVar9;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x21] != (RunningSubwayModule)0x0) || (this[0x3d] == (RunningSubwayModule)0x0)) ||
     (RVar2 = this[0x20], RVar2 == (RunningSubwayModule)0x0)) {
    this[0x30] = (RunningSubwayModule)0x0;
    this[0x3c] = (RunningSubwayModule)0x0;
    cancelTouch(this);
    RVar3 = (RunningSubwayModule)0x0;
    goto LAB_033ee59c;
  }
  if ((*(long *)(this + 0x28) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    lVar7 = *(long *)param_1;
switchD_033ee600_caseD_0:
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(long *)(this + 0x28) = lVar7;
    iVar5 = FUN_033e9f20(uVar1);
    iVar6 = FUN_033e9f20(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar5,(float)iVar6);
    this[0x3c] = (RunningSubwayModule)0x0;
    *(undefined8 *)(this + 0x34) = local_10;
    RVar3 = RVar2;
    goto LAB_033ee59c;
  }
  lVar7 = *(long *)param_1;
  RVar3 = (RunningSubwayModule)0x0;
  if (*(long *)(this + 0x28) != lVar7) goto LAB_033ee59c;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    goto switchD_033ee600_caseD_0;
  case 1:
    if (((this[0x30] == (RunningSubwayModule)0x0) && (*(long *)(this + 0x18) != 0)) &&
       (this[0x3e] == (RunningSubwayModule)0x0)) {
      iVar5 = FUN_033e9f20(*(undefined4 *)(param_1 + 0x10));
      iVar6 = FUN_033e9f20(*(undefined4 *)(param_1 + 0x14));
      fVar8 = (float)iVar6;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar5,fVar8);
      local_18 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_20,(SexyVector2 *)(this + 0x34))
      ;
      local_14 = fVar8;
      fVar8 = (float)VectorNorm((FPoint *)&local_18);
      fVar9 = 3600.0;
      if (3600.0 < fVar8) {
        this[0x3c] = (RunningSubwayModule)0x1;
        Sexy::SexyVector2::Normalize((SexyVector2 *)&local_18);
        if (fVar9 < -0.5) {
          this[0x30] = (RunningSubwayModule)0x1;
          RunningPlayer::CalcRealGridPosition(*(RunningPlayer **)(this + 0x18));
          cVar4 = canMove(this,true,(Point *)&local_10);
          if (cVar4 != '\0') {
            RunningPlayerMoveTo(this,0);
            RVar3 = RVar2;
            break;
          }
        }
        else if (0.5 < fVar9) {
          this[0x30] = (RunningSubwayModule)0x1;
          RunningPlayer::CalcRealGridPosition(*(RunningPlayer **)(this + 0x18));
          cVar4 = canMove(this,false,(Point *)&local_10);
          if (cVar4 != '\0') {
            RunningPlayerMoveTo(this,1);
            RVar3 = RVar2;
            break;
          }
        }
      }
    }
  default:
    RVar3 = RVar2;
    break;
  case 3:
    if (((this[0x3c] != (RunningSubwayModule)0x0) && (this[0x30] != (RunningSubwayModule)0x0)) ||
       ((*(long *)(this + 0x18) == 0 || (this[0x3e] != (RunningSubwayModule)0x0)))) {
      this[0x30] = (RunningSubwayModule)0x0;
      this[0x3c] = (RunningSubwayModule)0x0;
      cancelTouch(this);
      RVar3 = RVar2;
      break;
    }
    iVar5 = FUN_033e9f20(*(undefined4 *)(param_1 + 0x10));
    iVar6 = FUN_033e9f20(*(undefined4 *)(param_1 + 0x14));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar5,(float)iVar6);
    Sexy::Point::Point((Point *)&local_18,(int)local_20,(int)local_1c);
    this_00 = *(RunningPlayer **)(this + 0x18);
    fVar9 = (float)(int)local_14;
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
    fVar8 = *(float *)(lVar7 + 4);
    if (fVar9 < fVar8) {
      RunningPlayer::CalcRealGridPosition(this_00);
      cVar4 = canMove(this,true,(Point *)&local_10);
      if (cVar4 == '\0') {
        this_00 = *(RunningPlayer **)(this + 0x18);
        fVar9 = (float)(int)local_14;
        lVar7 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
        fVar8 = *(float *)(lVar7 + 4);
        goto LAB_033ee7a4;
      }
      RunningPlayerMoveTo(this,0);
    }
    else {
LAB_033ee7a4:
      if (fVar8 < fVar9) {
        RunningPlayer::CalcRealGridPosition(this_00);
        cVar4 = canMove(this,false,(Point *)&local_10);
        if (cVar4 != '\0') {
          RunningPlayerMoveTo(this,1);
        }
      }
    }
    this[0x3c] = (RunningSubwayModule)0x0;
    cancelTouch(this);
    RVar3 = RVar2;
    break;
  case 4:
    cancelTouch(this);
    RVar3 = RVar2;
  }
LAB_033ee59c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar3);
}


/* RunningSubwayModule::GetScorePerGrid() */

undefined4 __thiscall RunningSubwayModule::GetScorePerGrid(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x88);
}


/* RunningSubwayModule::GetBaseSkillEnergyCount() */

undefined4 __thiscall RunningSubwayModule::GetBaseSkillEnergyCount(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x6c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::initSkillButton() */

void __thiscall RunningSubwayModule::initSkillButton(RunningSubwayModule *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0xd0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 != '\0') {
    Sexy::RtName::RtName(aRStack_18,L"UIRunningSubwaySkill");
    UIWidget::CreateWidget(aRStack_18,1);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  (**(code **)(*plVar3 + 0x1a0))();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_033e9500(lVar4 + 0x1e8,*(undefined4 *)(this + 0xb0));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  uVar2 = ZombossBattleModule::GetZombossStartStageIndex((ZombossBattleModule *)this);
  FUN_033e950c(lVar4 + 0x1ec,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::canActivateSkill() */

bool __thiscall RunningSubwayModule::canActivateSkill(RunningSubwayModule *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0xb0);
  iVar3 = ZombossBattleModule::GetZombossStartStageIndex((ZombossBattleModule *)this);
  bVar2 = false;
  if (iVar3 <= iVar1) {
    bVar2 = *(float *)(this + 0xac) == 0.0;
  }
  return bVar2;
}


/* RunningSubwayModule::checkActivateSkill() */

void __thiscall RunningSubwayModule::checkActivateSkill(RunningSubwayModule *this)

{
  char cVar1;
  bool bVar2;
  RunningSubwaySkillButton *this_00;
  
  cVar1 = canActivateSkill(this);
  if (cVar1 != '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
    if (bVar2) {
      this_00 = (RunningSubwaySkillButton *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      RunningSubwaySkillButton::SetCanActivate(this_00,true);
      return;
    }
  }
  return;
}


/* RunningSubwayModule::GetBaseSkillSpeedMultiplier() */

undefined4 __thiscall RunningSubwayModule::GetBaseSkillSpeedMultiplier(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 100);
}


/* RunningSubwayModule::initSkill() */

void __thiscall RunningSubwayModule::initSkill(RunningSubwayModule *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetBaseSkillEnergyCount(this);
  SetCurrentSkillEnergyCount(this,iVar1);
  *(undefined4 *)(this + 0xac) = 0;
  uVar2 = GetBaseSkillSpeedMultiplier(this);
  *(undefined4 *)(this + 0xb4) = uVar2;
  return;
}


/* RunningSubwayModule::GetSkillDuration() */

undefined4 __thiscall RunningSubwayModule::GetSkillDuration(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x68);
}


/* RunningSubwayModule::GetBaseSpeed() */

undefined4 __thiscall RunningSubwayModule::GetBaseSpeed(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x58);
}


/* RunningSubwayModule::GetMoveRate() */

undefined4 __thiscall RunningSubwayModule::GetMoveRate(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x70);
}


/* RunningSubwayModule::GetPlayerCollisionRect() const */

void RunningSubwayModule::GetPlayerCollisionRect(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  Insets *in_x8;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pRVar1 + 0x74));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::CalcRunningPlayerSelfRect() const */

void RunningSubwayModule::CalcRunningPlayerSelfRect(void)

{
  long in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar1;
  TRect<int> *in_x8;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlayerCollisionRect();
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           **)(in_x0 + 0x18);
  *(int *)in_x8 = *(int *)in_x8 + (int)local_10;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + (int)local_c;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this);
  Sexy::TRect<int>::Offset(in_x8,(int)*pfVar1,(int)pfVar1[1]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::GetBaseHitPoints() */

undefined4 __thiscall RunningSubwayModule::GetBaseHitPoints(RunningSubwayModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x5c);
}


/* RunningSubwayModule::initHP() */

void __thiscall RunningSubwayModule::initHP(RunningSubwayModule *this)

{
  undefined4 uVar1;
  
  uVar1 = GetBaseHitPoints(this);
  *(undefined4 *)(this + 0xb8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::initUI() */

void __thiscall RunningSubwayModule::initUI(RunningSubwayModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  ResilienceTutorialIntroProperties *pRVar1;
  ToxicWaterPerfumeBottleProjectile *this_01;
  GridItemWaterMist *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xc0);
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(pRVar1 + 0x84);
  *(undefined4 *)(this + 200) = 0;
  Sexy::RtName::RtName(aRStack_18,L"UIRunningSubwayTarget");
  UIWidget::CreateWidget(aRStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_01,*(int *)(this + 200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_02,*(int *)(this + 0xcc));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::endSkill() */

void __thiscall RunningSubwayModule::endSkill(RunningSubwayModule *this)

{
  char cVar1;
  bool bVar2;
  RunningSubwaySkillButton *this_00;
  RunningPlayer *this_01;
  
  this_01 = *(RunningPlayer **)(this + 0x18);
  if ((this_01 == (RunningPlayer *)0x0) || (cVar1 = FUN_033e94e8(this_01[0x168]), cVar1 == '\0')) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
    if (bVar2) {
LAB_033f0530:
      this_00 = (RunningSubwaySkillButton *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      RunningSubwaySkillButton::SetCanActivate(this_00,false);
      return;
    }
  }
  else {
    RunningPlayer::SetInSpecial(this_01,false);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xd0));
    if (bVar2) goto LAB_033f0530;
  }
  return;
}


/* RunningSubwayModule::updateSkill() */

void __thiscall RunningSubwayModule::updateSkill(RunningSubwayModule *this)

{
  float fVar1;
  
  if ((*(float *)(this + 0xac) != 0.0) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xac) < fVar1))
  {
    endSkill(this);
    checkActivateSkill(this);
    return;
  }
  checkActivateSkill(this);
  return;
}


/* RunningSubwayModule::activateSkill() */

void __thiscall RunningSubwayModule::activateSkill(RunningSubwayModule *this)

{
  char cVar1;
  RunningPlayer *this_00;
  
  this_00 = *(RunningPlayer **)(this + 0x18);
  if ((this_00 != (RunningPlayer *)0x0) && (cVar1 = FUN_033e94e8(this_00[0x168]), cVar1 == '\0')) {
    RunningPlayer::SetInSpecial(this_00,true);
    return;
  }
  return;
}


/* RunningSubwayModule::onNotifyActivateSkill() */

void __thiscall RunningSubwayModule::onNotifyActivateSkill(RunningSubwayModule *this)

{
  char cVar1;
  RunningPlayer *this_00;
  
  this_00 = *(RunningPlayer **)(this + 0x18);
  if ((this_00 != (RunningPlayer *)0x0) && (cVar1 = FUN_033e94e8(this_00[0x168]), cVar1 == '\0')) {
    RunningPlayer::SetInSpecial(this_00,true);
    return;
  }
  return;
}


/* RunningSubwayModule::autoActivateSkill() */

void __thiscall RunningSubwayModule::autoActivateSkill(RunningSubwayModule *this)

{
  char cVar1;
  
  cVar1 = canActivateSkill(this);
  if (cVar1 == '\0') {
    return;
  }
  activateSkill(this);
  return;
}


/* RunningSubwayModule::SetCurrentSpeed(float) */

void __thiscall RunningSubwayModule::SetCurrentSpeed(RunningSubwayModule *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0xa0) = param_1;
  fVar1 = (float)PVZ_Dt();
  MessageRouter::Post<float,float>
            ((_func_void_float *)gMessageRouter,fVar1 * *(float *)(this + 0xa0));
  return;
}


/* RunningSubwayModule::initSpeed() */

void __thiscall RunningSubwayModule::initSpeed(RunningSubwayModule *this)

{
  float fVar1;
  
  fVar1 = (float)GetBaseSpeed(this);
  SetCurrentSpeed(this,fVar1);
  return;
}


/* RunningSubwayModule::onNotifyStartRunning() */

void RunningSubwayModule::onNotifyStartRunning(void)

{
  RunningSubwayModule *in_x0;
  float fVar1;
  
  fVar1 = (float)GetBaseSpeed(in_x0);
  SetCurrentSpeed(in_x0,fVar1);
  return;
}


/* RunningSubwayModule::endSkillValue() */

void __thiscall RunningSubwayModule::endSkillValue(RunningSubwayModule *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_033e94ec(*(undefined4 *)(this + 0xa0));
  SetCurrentSpeed(this,fVar2 / *(float *)(this + 0xb4));
  iVar1 = GetBaseSkillEnergyCount(this);
  SetCurrentSkillEnergyCount(this,iVar1);
  *(undefined4 *)(this + 0xac) = 0;
  return;
}


/* RunningSubwayModule::onNotifyJumpOffBoard() */

void __thiscall RunningSubwayModule::onNotifyJumpOffBoard(RunningSubwayModule *this)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_033e94ec(*(undefined4 *)(this + 0xa0));
  SetCurrentSpeed(this,fVar2 / *(float *)(this + 0xb4));
  iVar1 = GetBaseSkillEnergyCount(this);
  SetCurrentSkillEnergyCount(this,iVar1);
  *(undefined4 *)(this + 0xac) = 0;
  return;
}


/* RunningSubwayModule::activateSkillValue() */

void __thiscall RunningSubwayModule::activateSkillValue(RunningSubwayModule *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)GetSkillDuration(this);
  *(float *)(this + 0xac) = fVar2 + fVar1;
  fVar1 = (float)FUN_033e94ec(*(undefined4 *)(this + 0xa0));
  SetCurrentSpeed(this,fVar1 * *(float *)(this + 0xb4));
  return;
}


/* RunningSubwayModule::onNotifyJumpOnBoard() */

void __thiscall RunningSubwayModule::onNotifyJumpOnBoard(RunningSubwayModule *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)GetSkillDuration(this);
  *(float *)(this + 0xac) = fVar2 + fVar1;
  fVar1 = (float)FUN_033e94ec(*(undefined4 *)(this + 0xa0));
  SetCurrentSpeed(this,fVar1 * *(float *)(this + 0xb4));
  return;
}


/* RunningSubwayModule::RunningSubwayModule() */

void __thiscall RunningSubwayModule::RunningSubwayModule(RunningSubwayModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661c2e0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  GridItemTrackInfo::GridItemTrackInfo((GridItemTrackInfo *)(this + 0x80));
  GridItemTrackInfo::GridItemTrackInfo((GridItemTrackInfo *)(this + 0x90));
  RunningSkillInfo::RunningSkillInfo((RunningSkillInfo *)(this + 0xac));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  this[0x20] = (RunningSubwayModule)0x0;
  this[0x21] = (RunningSubwayModule)0x0;
  this[0x22] = (RunningSubwayModule)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x3c] = (RunningSubwayModule)0x0;
  this[0x3d] = (RunningSubwayModule)0x1;
  this[0x30] = (RunningSubwayModule)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  this[0x3e] = (RunningSubwayModule)0x0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


/* RunningSubwayModule::StaticNew() */

RunningSubwayModule * RunningSubwayModule::StaticNew(void)

{
  RunningSubwayModule *this;
  
  this = ::operator_new(0xd8);
  RunningSubwayModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::onTargetFailed() */

void __thiscall RunningSubwayModule::onTargetFailed(RunningSubwayModule *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_033f1880(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    FUN_05478178(auStack_10,L"[POOYAN_FAILED_SCORE_TIP]",auStack_18);
    (*pcVar3)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    nop();
    this[0x20] = (RunningSubwayModule)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::onRunningPlayerDied() */

void __thiscall RunningSubwayModule::onRunningPlayerDied(RunningSubwayModule *this)

{
  if (this[0x21] == (RunningSubwayModule)0x0) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 0x48))();
      *(undefined8 *)(this + 0x18) = 0;
    }
    onTargetFailed(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::testMoveBoard() */

void __thiscall RunningSubwayModule::testMoveBoard(RunningSubwayModule *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  GridItem *this_00;
  GridItemRunningSubwayObject *this_01;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  undefined8 local_38;
  Vec3 aVStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0xa4) != 0.0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,4);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar3);
      if ((this_00 != (GridItem *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<GridItemRunningSubwayObject>((RtObject *)this_00), bVar1)) {
        this_01 = Sexy::RtObject::Cast<GridItemRunningSubwayObject>((RtObject *)this_00);
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        EATextSquish::Vec3::Vec3(aVStack_30,*pfVar4 - *(float *)(this + 0xa4),pfVar4[1],pfVar4[2]);
        GridItemRunningSubwayObject::SetNextPosition(this_01,(SexyVector3 *)aVStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    fVar6 = *(float *)(this + 0xa8);
    fVar5 = *(float *)(this + 0xa4);
    *(float *)(this + 0xa8) = fVar5 + fVar6;
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    if ((float)iVar2 <= fVar5 + fVar6) {
      iVar2 = GetScorePerGrid(this);
      AddCurrentScore(this,iVar2);
      *(undefined4 *)(this + 0xa8) = 0;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
    else {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::~RunningSubwayModule() */

void __thiscall RunningSubwayModule::~RunningSubwayModule(RunningSubwayModule *this)

{
  char cVar1;
  long *plVar2;
  RtMixedPtrBase *this_00;
  
  this_00 = (RtMixedPtrBase *)(this + 0xd0);
  *(undefined ***)this = &PTR_GetModuleClass_0661c2e0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x90));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x80));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x60));
  std::vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItem>,std::allocator<Sexy::RtWeakPtr<GridItem>>> *)
             (this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RunningSubwayModule::~RunningSubwayModule() */

void __thiscall RunningSubwayModule::~RunningSubwayModule(RunningSubwayModule *this)

{
  ~RunningSubwayModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::pickNextGridMap() */

void RunningSubwayModule::pickNextGridMap(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_20,(vector *)(pRVar1 + 0x40));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar2,uVar3);
  FUN_033e96f0(local_20[0],0);
  FUN_05475d88();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall RunningSubwayModule::AddResourceRequirements(RunningSubwayModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"ZombieSkyCityBattlePlaneGroup");
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
  std::string::string(asStack_10,"Pooyan");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Running_Subway_Effect");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Running_Subway");
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


/* RunningSubwayModule::getCollisionEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, Sexy::TRect<int> const&) const */

void __thiscall
RunningSubwayModule::getCollisionEntities(RunningSubwayModule *this,vector *param_1,TRect *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(SharkMinion **)(this + 0x18) == (SharkMinion *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x18));
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,4,param_2,uVar1,uVar1);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
            (uVar2,uVar3,BoardEntity::BoardEntityLeftToRightSortFunc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::checkRunningPlayerCollision() */

void __thiscall RunningSubwayModule::checkRunningPlayerCollision(RunningSubwayModule *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  GridItem *this_00;
  GridItemRunningSubwayObject *pGVar4;
  undefined8 local_40;
  undefined8 local_38;
  TRect aTStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] != (RunningSubwayModule)0x0) {
    CalcRunningPlayerSelfRect();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    getCollisionEntities(this,(vector *)avStack_20,aTStack_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar3);
      if ((this_00 != (GridItem *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<GridItemRunningSubwayObject>((RtObject *)this_00), bVar1)) {
        pGVar4 = Sexy::RtObject::Cast<GridItemRunningSubwayObject>((RtObject *)this_00);
        cVar2 = FUN_033ed3a8(*(undefined4 *)(pGVar4 + 0x28));
        if (cVar2 == '\0') {
          (**(code **)(*(long *)pGVar4 + 0x2f8))(pGVar4,*(undefined8 *)(this + 0x18));
        }
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::addGridItem(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&, int,
   int) */

void __thiscall
RunningSubwayModule::addGridItem(RunningSubwayModule *this,vector *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  BoardGridMapProps *this_00;
  undefined8 uVar2;
  Board *this_01;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardGridMapProps *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  uVar1 = BoardGridMapProps::At(this_00,(long)param_2,(long)param_3);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  getGridItemTypeName((string *)&local_10,this,uVar1);
  uVar2 = Board::AddGridItem(this_01,(string *)&local_10,param_3,param_2,1);
  std::string::~string((string *)&local_10);
  local_10 = uVar2;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,(BoardEntity **)&local_10)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::pickAndGenerate(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   int) */

void __thiscall
RunningSubwayModule::pickAndGenerate(RunningSubwayModule *this,vector *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  BoardGridMapProps *this_00;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pickNextGridMap();
  uVar6 = 0;
  Sexy::ToWString(asStack_30);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  iVar5 = 0;
  PVZDB::GetIdByAlias(aRStack_20,uVar2,0x7c,aRStack_18);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x40),aRStack_20);
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  uVar4 = (long)param_2;
  iVar3 = param_2;
  if (0 < iVar1) {
    do {
      for (; iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 < iVar1 + param_2; iVar3 = iVar3 + 1
          ) {
        this_00 = (BoardGridMapProps *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        iVar1 = BoardGridMapProps::At(this_00,uVar6,uVar4);
        if (iVar1 != 0) {
          addGridItem(this,param_1,iVar5,iVar3);
        }
        uVar4 = uVar4 + 1;
      }
      uVar6 = uVar6 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
      iVar5 = (int)uVar6;
      uVar4 = (long)param_2;
      iVar3 = param_2;
    } while (iVar5 < iVar1);
  }
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::registerForEvents() */

void __thiscall RunningSubwayModule::registerForEvents(RunningSubwayModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  Board *pBVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<RunningSubwayModule,bool(RunningSubwayModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,preventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<RunningSubwayModule,bool(RunningSubwayModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<RunningSubwayModule,bool(RunningSubwayModule::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar3,aDStack_68,4,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyCoinCollected);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyCoinCollected,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyGotHit);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGotHit,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRunningPlayerKilled);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyPlayerKilled,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRunningPlayerDied);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::RunningPlayerDied,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStartRunning);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyStartRunning,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyJumpOnBoard);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyJumpOnBoard,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyJumpOffBoard);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyJumpOffBoard,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyActivateSkill);
  Sexy::Delegate0::Delegate0<RunningSubwayModule,void(RunningSubwayModule::*)()>
            ((Delegate0 *)aDStack_38,aCStack_80);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::NotifyActivateSkill,(Delegate0 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::CreateRunningPlayer() */

void RunningSubwayModule::CreateRunningPlayer(void)

{
  GameObject::Create<RunningPlayer>();
  return;
}


/* RunningSubwayModule::onRunningPlayerDying() */

void __thiscall RunningSubwayModule::onRunningPlayerDying(RunningSubwayModule *this)

{
  if (this[0x21] == (RunningSubwayModule)0x0) {
    this[0x30] = (RunningSubwayModule)0x1;
    if (*(RunningPlayer **)(this + 0x18) != (RunningPlayer *)0x0) {
      RunningPlayer::setState(*(RunningPlayer **)(this + 0x18),4);
      return;
    }
  }
  return;
}


/* RunningSubwayModule::onRunningPlayerKilled() */

void __thiscall RunningSubwayModule::onRunningPlayerKilled(RunningSubwayModule *this)

{
  if ((this[0x21] == (RunningSubwayModule)0x0) && (this[0x3e] == (RunningSubwayModule)0x0)) {
    this[0x3e] = (RunningSubwayModule)0x1;
    SetCurrentSpeed(this,0.0);
    onRunningPlayerDying(this);
    return;
  }
  return;
}


/* RunningSubwayModule::startRun() */

void __thiscall RunningSubwayModule::startRun(RunningSubwayModule *this)

{
  if (*(RunningPlayer **)(this + 0x18) != (RunningPlayer *)0x0) {
    RunningPlayer::setState(*(RunningPlayer **)(this + 0x18),1);
    return;
  }
  return;
}


/* RunningSubwayModule::onGamePlayStarted() */

void __thiscall RunningSubwayModule::onGamePlayStarted(RunningSubwayModule *this)

{
  initSkill(this);
  initHP(this);
  initUI(this);
  initSkillButton(this);
  startRun(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::gameplayStarted() */

void __thiscall RunningSubwayModule::gameplayStarted(RunningSubwayModule *this)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UISkyCannon");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIGemBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  FUN_033e9850(*(long *)(gLawnApp + 0x9f0) + 0x887);
  this[0x20] = (RunningSubwayModule)0x1;
  onGamePlayStarted(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayModule::InitRunningPlayer(Sexy::RtWeakPtr<Sexy::PopAnim>) */

void __thiscall RunningSubwayModule::InitRunningPlayer(RunningSubwayModule *this,RtWeakPtr *param_2)

{
  ResourceInfo *pRVar1;
  RunningPlayer *this_00;
  
  this_00 = *(RunningPlayer **)(this + 0x18);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  RunningPlayer::RunningPlayerInitialize(this_00,(PopAnim *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::trySpawnRunningPlayer() */

void __thiscall RunningSubwayModule::trySpawnRunningPlayer(RunningSubwayModule *this)

{
  long lVar1;
  RiverCrossingDodoRider *this_00;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21] == (RunningSubwayModule)0x0) {
    this[0x30] = (RunningSubwayModule)0x0;
    lVar1 = CreateRunningPlayer();
    *(long *)(this + 0x18) = lVar1;
    if (lVar1 != 0) {
      GetRunningPlayerPam(this);
      GetPAMByName(asStack_10);
      std::string::~string(asStack_10);
      this_00 = *(RiverCrossingDodoRider **)(this + 0x18);
      fVar2 = (float)GetMoveRate(this);
      RiverCrossingDodoRider::SetWalkingRate(this_00,fVar2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      InitRunningPlayer(this,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::pickClosestGridItem(GridItemTrackInfo&, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
RunningSubwayModule::pickClosestGridItem
          (undefined8 param_1_00,GridItemTrackInfo *param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined1 auStack_28 [8];
  Point aPStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  Sexy::Point::Point(aPStack_20,0,0);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)aRStack_18,aPStack_20);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar1,uVar2,aRStack_18);
  uVar1 = *(undefined8 *)param_3;
  lVar3 = FUN_033e96e4(uVar1,*(undefined8 *)(param_3 + 8));
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_033e984c(uVar1);
    Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_20,(RtWeakPtrBase *)aRStack_30);
    GridItem::GetGridLocation();
    GridItemTrackInfo::GridItemTrackInfo((GridItemTrackInfo *)aRStack_18,aPStack_20,auStack_28);
    GridItemTrackInfo::operator=(param_1,(GridItemTrackInfo *)aRStack_18);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayModule::generateGridMap() */

void __thiscall RunningSubwayModule::generateGridMap(RunningSubwayModule *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GridItem *pGVar6;
  code *pcVar7;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x90);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    GridItemTrackInfo::operator=((GridItemTrackInfo *)(this + 0x80),(GridItemTrackInfo *)this_00);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  pickAndGenerate(this,(vector *)avStack_38,0);
  if (*(int *)(this + 0x78) == 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    pickClosestGridItem(this,this + 0x80,avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
    pickAndGenerate(this,(vector *)avStack_38,0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    pickClosestGridItem(this,this_00,avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), pGVar6 != (GridItem *)0x0))
      {
        iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)pGVar6);
        iVar3 = SharkMinion::getRow((SharkMinion *)pGVar6);
        pcVar7 = *(code **)(*(long *)pGVar6 + 0x1f0);
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        Sexy::Point::Point((Point *)avStack_20,iVar4 + iVar2,iVar3);
        (*pcVar7)(pGVar6,avStack_20,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  else {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
    pickClosestGridItem(this,this_00,avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      if (((RtObject *)*puVar5 != (RtObject *)0x0) &&
         (pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5), pGVar6 != (GridItem *)0x0))
      {
        iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)pGVar6);
        iVar3 = SharkMinion::getRow((SharkMinion *)pGVar6);
        pcVar7 = *(code **)(*(long *)pGVar6 + 0x1f0);
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        Sexy::Point::Point((Point *)avStack_20,iVar2 + iVar4 * 2,iVar3);
        (*pcVar7)(pGVar6,avStack_20,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
  }
  *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* RunningSubwayModule::checkMapGeneration() */

void __thiscall RunningSubwayModule::checkMapGeneration(RunningSubwayModule *this)

{
  char cVar1;
  
  if (((this[0x20] != (RunningSubwayModule)0x0) && (this[0x21] == (RunningSubwayModule)0x0)) &&
     (cVar1 = canGenerateNextGridMap(this), cVar1 != '\0')) {
    generateGridMap(this);
    return;
  }
  return;
}


/* RunningSubwayModule::onUpdate() */

void __thiscall RunningSubwayModule::onUpdate(RunningSubwayModule *this)

{
  updateSkill(this);
  updateRunningPlayer(this);
  checkRunningPlayerCollision(this);
  checkMapGeneration(this);
  testMoveBoard(this);
  return;
}


/* RunningSubwayModule::loadComplete() */

void __thiscall RunningSubwayModule::loadComplete(RunningSubwayModule *this)

{
  generateGridMap(this);
  trySpawnRunningPlayer(this);
  return;
}

