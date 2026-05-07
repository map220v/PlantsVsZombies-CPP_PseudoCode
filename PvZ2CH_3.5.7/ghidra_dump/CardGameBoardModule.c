// Class: CardGameBoardModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardModule::StaticClassInit() */

void CardGameBoardModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameBoardModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03573734,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoardModule::StaticGetClass() */

long * CardGameBoardModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameBoardModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardModule::OnGameplayStarted() */

void CardGameBoardModule::OnGameplayStarted(void)

{
  char cVar1;
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CardGameUtils::HasCompleteTutorial();
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"UIPauseButton");
    this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (this != (UIWidget *)0x0) {
      UIWidget::SetClickable(this,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameBoardModule::CardGameBoardModule() */

void __thiscall CardGameBoardModule::CardGameBoardModule(CardGameBoardModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665bb60;
  return;
}


/* CardGameBoardModule::StaticNew() */

CardGameBoardModule * CardGameBoardModule::StaticNew(void)

{
  CardGameBoardModule *this;
  
  this = ::operator_new(0x18);
  CardGameBoardModule(this);
  return this;
}


/* CardGameBoardModule::~CardGameBoardModule() */

void __thiscall CardGameBoardModule::~CardGameBoardModule(CardGameBoardModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665bb60;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardGameBoardModule::~CardGameBoardModule() */

void __thiscall CardGameBoardModule::~CardGameBoardModule(CardGameBoardModule *this)

{
  ~CardGameBoardModule(this);
  AK::FreeHook(this);
  return;
}


/* CardGameBoardModule::OnCardGameIntroStart() */

void CardGameBoardModule::OnCardGameIntroStart(void)

{
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::CreateBoard();
  return;
}


/* CardGameBoardModule::OnCardGamePickCardStart(int) */

void CardGameBoardModule::OnCardGamePickCardStart(int param_1)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::TurnPlayerBegan(iVar1);
  return;
}


/* CardGameBoardModule::OnCardGamePlayerActionStart() */

void CardGameBoardModule::OnCardGamePlayerActionStart(void)

{
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::TurnPlayerPlayCards();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* CardGameBoardModule::OnCardGamePlayerDiscardStart() */

void CardGameBoardModule::OnCardGamePlayerDiscardStart(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::TurnPlayerEnd();
  return;
}


/* CardGameBoardModule::onEndLevel() */

void CardGameBoardModule::onEndLevel(void)

{
  Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
  CardBoardMgr::RemoveBoard();
  return;
}


/* CardGameBoardModule::OnCreatePlant(Plant*) */

void __thiscall CardGameBoardModule::OnCreatePlant(CardGameBoardModule *this,Plant *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  if (param_1 != (Plant *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pRVar1 + 0x40);
  }
  return;
}


/* CardGameBoardModule::OnZombiePlaceOnBoard(Zombie*) */

void __thiscall CardGameBoardModule::OnZombiePlaceOnBoard(CardGameBoardModule *this,Zombie *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  if (param_1 != (Zombie *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    Zombie::SetZombieScale(param_1,*(float *)(pRVar1 + 0x40));
    return;
  }
  return;
}


/* CardGameBoardModule::OnNotifyGridItemPlaceOnBoard(GridItemAnimation*) */

void __thiscall
CardGameBoardModule::OnNotifyGridItemPlaceOnBoard
          (CardGameBoardModule *this,GridItemAnimation *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  if (param_1 != (GridItemAnimation *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar2 = (float)GridItemAnimation::GetScale(param_1);
    GridItemProtectorShield::SetShieldHP
              ((GridItemProtectorShield *)param_1,fVar2 * *(float *)(pRVar1 + 0x40));
    return;
  }
  return;
}


/* CardGameBoardModule::OnNotifyProjectileCreated(Projectile*) */

void __thiscall
CardGameBoardModule::OnNotifyProjectileCreated(CardGameBoardModule *this,Projectile *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  if (param_1 != (Projectile *)0x0) {
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar2 = (float)FUN_035732ac(*(undefined4 *)(param_1 + 0xc0));
    FUN_035732a4(fVar2 * *(float *)(pRVar1 + 0x40),param_1 + 0xc0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameBoardModule::registerForEvents() */

void __thiscall CardGameBoardModule::registerForEvents(CardGameBoardModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEndLevel);
  Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCardGameIntroStart);
  Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGameIntroStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCardGamePickCardStart);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<CardGameBoardModule,void(CardGameBoardModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::CardGamePickCardStart,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCardGamePlayerActionStart);
  Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGamePlayerActionStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCardGamePlayerDiscardStart);
  Sexy::Delegate0::Delegate0<CardGameBoardModule,void(CardGameBoardModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardGamePlayerDiscardStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_f0 = local_98;
  uStack_e8 = uStack_90;
  local_e0 = local_88;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<CardGameBoardModule,void(CardGameBoardModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombiePlaceOnBoard);
  local_110 = local_80;
  uStack_108 = uStack_78;
  local_100 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<CardGameBoardModule,void(CardGameBoardModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyProjectileCreated);
  local_130 = local_68;
  uStack_128 = uStack_60;
  local_120 = local_58;
  MessageRouter::
  Subscribe<Projectile*,Sexy::CBMemberTranslatorX<CardGameBoardModule,void(CardGameBoardModule::*)(Projectile*)>>
            ((MessageRouter *)puVar1,Message::NotifyProjectileCreated,&local_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyGridItemPlaceOnBoard);
  local_150 = local_50;
  uStack_148 = uStack_48;
  local_140 = local_40;
  MessageRouter::
  Subscribe<GridItemAnimation*,Sexy::CBMemberTranslatorX<CardGameBoardModule,void(CardGameBoardModule::*)(GridItemAnimation*)>>
            ((MessageRouter *)puVar1,Message::NotifyGridItemPlaceOnBoard,&local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

