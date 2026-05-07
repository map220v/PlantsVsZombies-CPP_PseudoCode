// Class: TutorialIconMoveScaleAction


/* TutorialIconMoveScaleAction::TutorialIconMoveScaleAction(float, float, float, CurveType,
   TutorialIconEffect*, Sexy::SexyVector3 const&) */

void __thiscall
TutorialIconMoveScaleAction::TutorialIconMoveScaleAction
          (TutorialIconMoveScaleAction *this,undefined8 param_2,undefined8 param_3,
          undefined8 *param_4)

{
  TutorialIconScaleAction::TutorialIconScaleAction();
  *(undefined ***)this = &PTR_nop_06853430;
  DVec3::DVec3((DVec3 *)(this + 0x30));
  *(undefined8 *)(this + 0x3c) = *param_4;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_4 + 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconMoveScaleAction::beginOthers() */

void __thiscall TutorialIconMoveScaleAction::beginOthers(TutorialIconMoveScaleAction *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  FUN_044b41cc(lVar1 + 0x38,0);
  if (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        **)(this + 0x10) ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  }
  else {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_18 = *puVar2;
    local_10 = *(undefined4 *)(puVar2 + 1);
  }
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x30),(SexyVector3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialIconMoveScaleAction::updateOthers(float) */

void TutorialIconMoveScaleAction::updateOthers(float param_1)

{
  long in_x0;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = CurveEvaluate<Sexy::SexyVector3>
                          (in_x0 + 0x30,in_x0 + 0x3c,*(undefined4 *)(in_x0 + 0x18));
  (**(code **)(**(long **)(in_x0 + 0x10) + 0x78))(*(long **)(in_x0 + 0x10),local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialIconMoveScaleAction::onEnd() */

void TutorialIconMoveScaleAction::onEnd(void)

{
  TutorialEffectMgr *pTVar1;
  
  pTVar1 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  TutorialEffectMgr::TryRemoveIconEffect(pTVar1);
  pTVar1 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  TutorialEffectMgr::ShowOriginalIcon(pTVar1,true);
  pTVar1 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  TutorialEffectMgr::NotifyTutorialEffectEnd(pTVar1);
  return;
}

