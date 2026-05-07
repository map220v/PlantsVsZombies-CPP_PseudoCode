// Class: RunningSubwayUtils


/* RunningSubwayUtils::IsDisabledRegion(Sexy::SexyVector3 const&) */

bool RunningSubwayUtils::IsDisabledRegion(SexyVector3 *param_1)

{
  long lVar1;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    lVar1 = Board::FindRegionWithFlags(*(long *)(gLawnApp + 0x9f0),param_1,0x80);
    return lVar1 != 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayUtils::IsDisabledRegion(Sexy::Point const&) */

void RunningSubwayUtils::IsDisabledRegion(Point *param_1)

{
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_20,(float)local_1c,0.0);
  IsDisabledRegion((SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayUtils::GetRunningPlayerBaseSpeed() */

undefined1  [16] RunningSubwayUtils::GetRunningPlayerBaseSpeed(void)

{
  LevelModuleManager *this;
  RunningSubwayModule *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  this = (LevelModuleManager *)FUN_033e94cc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<RunningSubwayModule>(this);
  if (this_00 != (RunningSubwayModule *)0x0) {
    RunningSubwayModule::GetBaseSpeed(this_00);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}


/* RunningSubwayUtils::SetSpeedValue(float) */

void RunningSubwayUtils::SetSpeedValue(float param_1)

{
  LevelModuleManager *this;
  RunningSubwayModule *pRVar1;
  undefined4 in_register_00005004;
  
  this = (LevelModuleManager *)FUN_033e94cc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pRVar1 = LevelModuleManager::GetModuleByClass<RunningSubwayModule>(this);
  if (pRVar1 != (RunningSubwayModule *)0x0) {
    FUN_033e94f0(CONCAT44(in_register_00005004,param_1),pRVar1 + 0xa4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RunningSubwayUtils::GetRunningPlayerRect() */

void __thiscall RunningSubwayUtils::GetRunningPlayerRect(RunningSubwayUtils *this)

{
  long lVar1;
  LevelModuleManager *this_00;
  RunningSubwayModule *pRVar2;
  Insets *in_x8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  Sexy::Insets::Insets(in_x8);
  this_00 = (LevelModuleManager *)FUN_033e94cc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pRVar2 = LevelModuleManager::GetModuleByClass<RunningSubwayModule>(this_00);
  if (pRVar2 != (RunningSubwayModule *)0x0) {
    RunningSubwayModule::CalcRunningPlayerSelfRect();
    *(undefined8 *)in_x8 = local_18;
    *(undefined8 *)(in_x8 + 8) = uStack_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RunningSubwayUtils::IsPlayingRunningSubway() */

bool RunningSubwayUtils::IsPlayingRunningSubway(void)

{
  bool bVar1;
  long lVar2;
  RtObject *this;
  RunningSubwayStage *pRVar3;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = false;
    if (lVar2 != 0) {
      this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      pRVar3 = Sexy::RtObject::Cast<RunningSubwayStage>(this);
      bVar1 = pRVar3 != (RunningSubwayStage *)0x0;
    }
    return bVar1;
  }
  return false;
}

