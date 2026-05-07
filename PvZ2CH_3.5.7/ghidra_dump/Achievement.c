// Class: Achievement


/* Achievement::Queue(std::string const&, float) */

void Achievement::Queue(string *param_1,float param_2)

{
  nop();
  return;
}


/* Achievement::ShowAll() */

void Achievement::ShowAll(void)

{
  nop();
  return;
}


/* Achievement::IsNewAchievement(std::string const&) */

bool Achievement::IsNewAchievement(string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"king_nut");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"yarr_matey"), !bVar1)) {
    bVar1 = std::operator==(param_1,"giddyup");
    return bVar1;
  }
  return true;
}


/* Achievement::SubmitOneShotAchievement(std::string const&) */

void Achievement::SubmitOneShotAchievement(string *param_1)

{
  AchievementDriverMgr *this;
  
  this = (AchievementDriverMgr *)Sexy::LazySingleton<AchievementDriverMgr>::GetInstance();
  AchievementDriverMgr::SubmitOneShotAchievement(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Achievement::Init(GameCenterProxy*) */

void Achievement::Init(GameCenterProxy *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  DAT_06ab8680 = param_1;
  local_40 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)FUN_038f3cf4);
  Sexy::Delegate0::Delegate0<void(*)()>(aDStack_38,(CBFunctionTranslatorX *)&local_40);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4208);
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBFunctionTranslatorX<void(*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4134);
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBFunctionTranslatorX<void(*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4084);
  MessageRouter::Subscribe<Zombie*,Sexy::CBFunctionTranslatorX<void(*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ExplorerTorchExtinguished,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f5048);
  MessageRouter::Subscribe<Plant*,Sexy::CBFunctionTranslatorX<void(*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4de0);
  MessageRouter::Subscribe<Plant*,Sexy::CBFunctionTranslatorX<void(*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f3f2c);
  MessageRouter::Subscribe<Plant*,int,Sexy::CBFunctionTranslatorX<void(*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::PlantUpgraded,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f3d68);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::StarCompleted,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Achievement::Shutdown() */

void Achievement::Shutdown(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  local_40 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)FUN_038f3cf4);
  Sexy::Delegate0::Delegate0<void(*)()>(aDStack_38,(CBFunctionTranslatorX *)&local_40);
  MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4208);
  MessageRouter::
  Unsubscribe<Zombie*,DamageInfo_const&,Sexy::CBFunctionTranslatorX<void(*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4134);
  MessageRouter::
  Unsubscribe<Zombie*,DamageInfo_const*,Sexy::CBFunctionTranslatorX<void(*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4084);
  MessageRouter::Unsubscribe<Zombie*,Sexy::CBFunctionTranslatorX<void(*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ExplorerTorchExtinguished,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f5048);
  MessageRouter::Unsubscribe<Plant*,Sexy::CBFunctionTranslatorX<void(*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f4de0);
  MessageRouter::Unsubscribe<Plant*,Sexy::CBFunctionTranslatorX<void(*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f3f2c);
  MessageRouter::Unsubscribe<Plant*,int,Sexy::CBFunctionTranslatorX<void(*)(Plant*,int)>>
            ((MessageRouter *)puVar1,Message::PlantUpgraded,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)FUN_038f3d68);
  MessageRouter::
  Unsubscribe<std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::StarCompleted,uVar2);
  DAT_06ab8680 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

