// Class: LawnBrainModule


/* LawnBrainModule::GetEntryAnimDuration() */

undefined4 __thiscall LawnBrainModule::GetEntryAnimDuration(LawnBrainModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x40);
}


/* LawnBrainModule::initializeModule() */

void __thiscall LawnBrainModule::initializeModule(LawnBrainModule *this)

{
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  return;
}


/* LawnBrainModule::checkWin() */

bool __thiscall LawnBrainModule::checkWin(LawnBrainModule *this)

{
  return *(int *)(this + 0x18) == 0;
}


/* LawnBrainModule::onBrainDie(GridItemBrain*) */

void LawnBrainModule::onBrainDie(GridItemBrain *param_1)

{
  char cVar1;
  
  if ((0 < *(int *)(param_1 + 0x18)) &&
     (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnBrainModule::StaticClassInit() */

void LawnBrainModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LawnBrainModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03e6b04c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnBrainModule::StaticGetClass() */

long * LawnBrainModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LawnBrainModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnBrainModule::LawnBrainModule() */

void __thiscall LawnBrainModule::LawnBrainModule(LawnBrainModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678d330;
  return;
}


/* LawnBrainModule::StaticNew() */

LawnBrainModule * LawnBrainModule::StaticNew(void)

{
  LawnBrainModule *this;
  
  this = ::operator_new(0x20);
  LawnBrainModule(this);
  return this;
}


/* LawnBrainModule::~LawnBrainModule() */

void __thiscall LawnBrainModule::~LawnBrainModule(LawnBrainModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678d330;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LawnBrainModule::~LawnBrainModule() */

void __thiscall LawnBrainModule::~LawnBrainModule(LawnBrainModule *this)

{
  ~LawnBrainModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnBrainModule::createBrains() */

void __thiscall LawnBrainModule::createBrains(LawnBrainModule *this)

{
  PopAnim *pPVar1;
  undefined8 uVar2;
  GridItemBrain *this_00;
  GridItemBrain *this_01;
  GridItemBrain *this_02;
  GridItemBrain *this_03;
  GridItemBrain *this_04;
  GridItemBrain *this_05;
  GridItemBrain *this_06;
  GridItemBrain *this_07;
  GridItemBrain *this_08;
  GridItemBrain *this_09;
  Board *pBVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnim *)ArenaBattleModule::getMowerAnim((ArenaBattleModule *)this);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = ArenaBattleModule::getMowerAudio((ArenaBattleModule *)this);
  FUN_05475d88(asStack_18,uVar2);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(pBVar3 + 0xfc)) {
    if (*(int *)(pBVar3 + 0x1c0) != 0) {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(pBVar3,asStack_10,0,0,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      GridItemBrain::LawnBrainInitialize(this_00,pPVar1,0);
    }
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    if (1 < *(int *)(pBVar3 + 0xfc)) {
      if (*(int *)(pBVar3 + 0x1c4) != 0) {
        std::string::string(asStack_10,"brain");
        Board::AddGridItem(pBVar3,asStack_10,0,1,1);
        nop();
        std::string::~string(asStack_10);
        nop();
        GridItemBrain::LawnBrainInitialize(this_09,pPVar1,1);
      }
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      if (2 < *(int *)(pBVar3 + 0xfc)) {
        if (*(int *)(pBVar3 + 0x1c8) != 0) {
          std::string::string(asStack_10,"brain");
          Board::AddGridItem(pBVar3,asStack_10,0,2,1);
          nop();
          std::string::~string(asStack_10);
          nop();
          GridItemBrain::LawnBrainInitialize(this_08,pPVar1,2);
        }
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        if (3 < *(int *)(pBVar3 + 0xfc)) {
          if (*(int *)(pBVar3 + 0x1cc) != 0) {
            std::string::string(asStack_10,"brain");
            Board::AddGridItem(pBVar3,asStack_10,0,3,1);
            nop();
            std::string::~string(asStack_10);
            nop();
            GridItemBrain::LawnBrainInitialize(this_07,pPVar1,3);
          }
          pBVar3 = *(Board **)(gLawnApp + 0x9f0);
          if (4 < *(int *)(pBVar3 + 0xfc)) {
            if (*(int *)(pBVar3 + 0x1d0) != 0) {
              std::string::string(asStack_10,"brain");
              Board::AddGridItem(pBVar3,asStack_10,0,4,1);
              nop();
              std::string::~string(asStack_10);
              nop();
              GridItemBrain::LawnBrainInitialize(this_06,pPVar1,4);
            }
            pBVar3 = *(Board **)(gLawnApp + 0x9f0);
            if (5 < *(int *)(pBVar3 + 0xfc)) {
              if (*(int *)(pBVar3 + 0x1d4) != 0) {
                std::string::string(asStack_10,"brain");
                Board::AddGridItem(pBVar3,asStack_10,0,5,1);
                nop();
                std::string::~string(asStack_10);
                nop();
                GridItemBrain::LawnBrainInitialize(this_05,pPVar1,5);
              }
              pBVar3 = *(Board **)(gLawnApp + 0x9f0);
              if (6 < *(int *)(pBVar3 + 0xfc)) {
                if (*(int *)(pBVar3 + 0x1d8) != 0) {
                  std::string::string(asStack_10,"brain");
                  Board::AddGridItem(pBVar3,asStack_10,0,6,1);
                  nop();
                  std::string::~string(asStack_10);
                  nop();
                  GridItemBrain::LawnBrainInitialize(this_04,pPVar1,6);
                }
                pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                if (7 < *(int *)(pBVar3 + 0xfc)) {
                  if (*(int *)(pBVar3 + 0x1dc) != 0) {
                    std::string::string(asStack_10,"brain");
                    Board::AddGridItem(pBVar3,asStack_10,0,7,1);
                    nop();
                    std::string::~string(asStack_10);
                    nop();
                    GridItemBrain::LawnBrainInitialize(this_03,pPVar1,7);
                  }
                  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                  if (8 < *(int *)(pBVar3 + 0xfc)) {
                    if (*(int *)(pBVar3 + 0x1e0) != 0) {
                      std::string::string(asStack_10,"brain");
                      Board::AddGridItem(pBVar3,asStack_10,0,8,1);
                      nop();
                      std::string::~string(asStack_10);
                      nop();
                      GridItemBrain::LawnBrainInitialize(this_02,pPVar1,8);
                    }
                    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                    if ((9 < *(int *)(pBVar3 + 0xfc)) && (*(int *)(pBVar3 + 0x1e4) != 0)) {
                      std::string::string(asStack_10,"brain");
                      Board::AddGridItem(pBVar3,asStack_10,0,9,1);
                      nop();
                      std::string::~string(asStack_10);
                      nop();
                      GridItemBrain::LawnBrainInitialize(this_01,pPVar1,9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnBrainModule::onReadyForBrains() */

void LawnBrainModule::onReadyForBrains(void)

{
  PopAnim *pPVar1;
  undefined8 uVar2;
  GridItemBrain *this;
  GridItemBrain *this_00;
  GridItemBrain *this_01;
  GridItemBrain *this_02;
  GridItemBrain *this_03;
  GridItemBrain *this_04;
  GridItemBrain *this_05;
  GridItemBrain *this_06;
  GridItemBrain *this_07;
  GridItemBrain *this_08;
  ArenaBattleModule *in_x0;
  Board *pBVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pPVar1 = (PopAnim *)ArenaBattleModule::getMowerAnim(in_x0);
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = ArenaBattleModule::getMowerAudio(in_x0);
  FUN_05475d88(asStack_18,uVar2);
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(pBVar3 + 0xfc)) {
    if (*(int *)(pBVar3 + 0x1c0) != 0) {
      std::string::string(asStack_10,"brain");
      Board::AddGridItem(pBVar3,asStack_10,0,0,1);
      nop();
      std::string::~string(asStack_10);
      nop();
      GridItemBrain::LawnBrainInitialize(this,pPVar1,0);
    }
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    if (1 < *(int *)(pBVar3 + 0xfc)) {
      if (*(int *)(pBVar3 + 0x1c4) != 0) {
        std::string::string(asStack_10,"brain");
        Board::AddGridItem(pBVar3,asStack_10,0,1,1);
        nop();
        std::string::~string(asStack_10);
        nop();
        GridItemBrain::LawnBrainInitialize(this_08,pPVar1,1);
      }
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      if (2 < *(int *)(pBVar3 + 0xfc)) {
        if (*(int *)(pBVar3 + 0x1c8) != 0) {
          std::string::string(asStack_10,"brain");
          Board::AddGridItem(pBVar3,asStack_10,0,2,1);
          nop();
          std::string::~string(asStack_10);
          nop();
          GridItemBrain::LawnBrainInitialize(this_07,pPVar1,2);
        }
        pBVar3 = *(Board **)(gLawnApp + 0x9f0);
        if (3 < *(int *)(pBVar3 + 0xfc)) {
          if (*(int *)(pBVar3 + 0x1cc) != 0) {
            std::string::string(asStack_10,"brain");
            Board::AddGridItem(pBVar3,asStack_10,0,3,1);
            nop();
            std::string::~string(asStack_10);
            nop();
            GridItemBrain::LawnBrainInitialize(this_06,pPVar1,3);
          }
          pBVar3 = *(Board **)(gLawnApp + 0x9f0);
          if (4 < *(int *)(pBVar3 + 0xfc)) {
            if (*(int *)(pBVar3 + 0x1d0) != 0) {
              std::string::string(asStack_10,"brain");
              Board::AddGridItem(pBVar3,asStack_10,0,4,1);
              nop();
              std::string::~string(asStack_10);
              nop();
              GridItemBrain::LawnBrainInitialize(this_05,pPVar1,4);
            }
            pBVar3 = *(Board **)(gLawnApp + 0x9f0);
            if (5 < *(int *)(pBVar3 + 0xfc)) {
              if (*(int *)(pBVar3 + 0x1d4) != 0) {
                std::string::string(asStack_10,"brain");
                Board::AddGridItem(pBVar3,asStack_10,0,5,1);
                nop();
                std::string::~string(asStack_10);
                nop();
                GridItemBrain::LawnBrainInitialize(this_04,pPVar1,5);
              }
              pBVar3 = *(Board **)(gLawnApp + 0x9f0);
              if (6 < *(int *)(pBVar3 + 0xfc)) {
                if (*(int *)(pBVar3 + 0x1d8) != 0) {
                  std::string::string(asStack_10,"brain");
                  Board::AddGridItem(pBVar3,asStack_10,0,6,1);
                  nop();
                  std::string::~string(asStack_10);
                  nop();
                  GridItemBrain::LawnBrainInitialize(this_03,pPVar1,6);
                }
                pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                if (7 < *(int *)(pBVar3 + 0xfc)) {
                  if (*(int *)(pBVar3 + 0x1dc) != 0) {
                    std::string::string(asStack_10,"brain");
                    Board::AddGridItem(pBVar3,asStack_10,0,7,1);
                    nop();
                    std::string::~string(asStack_10);
                    nop();
                    GridItemBrain::LawnBrainInitialize(this_02,pPVar1,7);
                  }
                  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                  if (8 < *(int *)(pBVar3 + 0xfc)) {
                    if (*(int *)(pBVar3 + 0x1e0) != 0) {
                      std::string::string(asStack_10,"brain");
                      Board::AddGridItem(pBVar3,asStack_10,0,8,1);
                      nop();
                      std::string::~string(asStack_10);
                      nop();
                      GridItemBrain::LawnBrainInitialize(this_01,pPVar1,8);
                    }
                    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
                    if ((9 < *(int *)(pBVar3 + 0xfc)) && (*(int *)(pBVar3 + 0x1e4) != 0)) {
                      std::string::string(asStack_10,"brain");
                      Board::AddGridItem(pBVar3,asStack_10,0,9,1);
                      nop();
                      std::string::~string(asStack_10);
                      nop();
                      GridItemBrain::LawnBrainInitialize(this_00,pPVar1,9);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string(asStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnBrainModule::registerForEvents() */

void __thiscall LawnBrainModule::registerForEvents(LawnBrainModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<LawnBrainModule,bool(LawnBrainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForBrains);
  Sexy::Delegate0::Delegate0<LawnBrainModule,void(LawnBrainModule::*)()>
            ((Delegate0 *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ReadyForLawnItems,(Delegate0 *)aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBrainDie);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<GridItemBrain*,Sexy::CBMemberTranslatorX<LawnBrainModule,void(LawnBrainModule::*)(GridItemBrain*)>>
            ((MessageRouter *)puVar1,Message::BrainDie,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

