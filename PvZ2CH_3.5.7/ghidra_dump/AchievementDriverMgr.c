// Class: AchievementDriverMgr


/* AchievementDriverMgr::~AchievementDriverMgr() */

void __thiscall AchievementDriverMgr::~AchievementDriverMgr(AchievementDriverMgr *this)

{
  *(undefined ***)this = &PTR__AchievementDriverMgr_06615c90;
  Sexy::LazySingleton<AchievementDriverMgr>::~LazySingleton
            ((LazySingleton<AchievementDriverMgr> *)this);
  return;
}


/* AchievementDriverMgr::~AchievementDriverMgr() */

void __thiscall AchievementDriverMgr::~AchievementDriverMgr(AchievementDriverMgr *this)

{
  ~AchievementDriverMgr(this);
  AK::FreeHook(this);
  return;
}


/* AchievementDriverMgr::InitializeSDK() */

void __thiscall AchievementDriverMgr::InitializeSDK(AchievementDriverMgr *this)

{
  long *plVar1;
  
  plVar1 = (long *)INewAchievementDriver::CreateNewAchievementDriver();
  *(long **)(this + 8) = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementDriverMgr::SubmitOneShotAchievement(std::string const&) */

void __thiscall
AchievementDriverMgr::SubmitOneShotAchievement(AchievementDriverMgr *this,string *param_1)

{
  long *plVar1;
  code *pcVar2;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    FUN_033bc268(afStack_28,this);
    (*pcVar2)(0x3ff0000000000000,plVar1,param_1,1,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementDriverMgr::QueryAllAchievement(std::function<void (std::vector<AchievementInfo,
   std::allocator<AchievementInfo> >)>) */

void AchievementDriverMgr::QueryAllAchievement(long param_1)

{
  long *plVar1;
  code *pcVar2;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
    FUN_033bc2c4(afStack_28);
    (*pcVar2)(plVar1,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AchievementDriverMgr::AchievementDriverMgr() */

void __thiscall AchievementDriverMgr::AchievementDriverMgr(AchievementDriverMgr *this)

{
  Sexy::LazySingleton<AchievementDriverMgr>::LazySingleton
            ((LazySingleton<AchievementDriverMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__AchievementDriverMgr_06615c90;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementDriverMgr::SetAchievement(std::string const&, int, double, std::function<void (bool)>)
    */

void __thiscall
AchievementDriverMgr::SetAchievement
          (undefined8 param_3,AchievementDriverMgr *this,undefined8 param_1,undefined8 param_4,
          function *param_5)

{
  long *plVar1;
  code *pcVar2;
  function<void(bool)> afStack_28 [32];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::function<void(bool)>::function(afStack_28,param_5);
    (*pcVar2)(param_3,plVar1,param_1,param_4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

