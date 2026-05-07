// Class: OppoNewerDailyReward


/* OppoNewerDailyReward::~OppoNewerDailyReward() */

void __thiscall OppoNewerDailyReward::~OppoNewerDailyReward(OppoNewerDailyReward *this)

{
  FUN_0325e604(*(undefined8 *)this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x038fb2d8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* OppoNewerDailyReward::OppoNewerDailyReward(OppoNewerDailyReward const&) */

void __thiscall
OppoNewerDailyReward::OppoNewerDailyReward(OppoNewerDailyReward *this,OppoNewerDailyReward *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  PIInterpolatorPoint *pPVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_038f99d8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<rewardItem,std::allocator<rewardItem>>::_Vector_base((ulong)this,paVar2);
  FUN_038fb0a0(*(undefined8 *)param_1);
  uVar3 = FUN_038fb0f0(*(undefined8 *)(param_1 + 8));
  pPVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<Sexy::PIInterpolatorPoint_const*,std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>>,Sexy::PIInterpolatorPoint*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(PIInterpolatorPoint **)(this + 8) = pPVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OppoNewerDailyReward::TEMPNAMEPLACEHOLDERVALUE(OppoNewerDailyReward const&) */

OppoNewerDailyReward * __thiscall
OppoNewerDailyReward::operator=(OppoNewerDailyReward *this,OppoNewerDailyReward *param_1)

{
  std::vector<rewardItem,std::allocator<rewardItem>>::operator=
            ((vector<rewardItem,std::allocator<rewardItem>> *)this,(vector *)param_1);
  return this;
}

