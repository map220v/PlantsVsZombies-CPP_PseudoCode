// Class: ZombossVictoryOutroModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossVictoryOutroModule::startCoinShower() */

void __thiscall ZombossVictoryOutroModule::startCoinShower(ZombossVictoryOutroModule *this)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  char *pcVar4;
  long lVar5;
  AnimationController *pAVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_WinMusic");
  FUN_044ee558(this + 0x60);
  fVar8 = (float)FUN_044ee564(*(undefined4 *)(this + 0x60));
  fVar8 = fVar8 + *(float *)(pRVar3 + 0x4c);
  cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,2);
  if (cVar1 != '\0') {
    cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 == '\0') && (iVar7 = 0, 0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
      do {
        iVar2 = iVar7 + 1;
        FUN_044f09dc(iVar7);
        iVar7 = iVar2;
      } while (iVar2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        iVar7 = 0;
        do {
          lVar5 = FUN_044f09dc(iVar7);
          if ((lVar5 != 0) && (iVar2 = FUN_044ee590(*(undefined4 *)(lVar5 + 0xcc)), iVar2 == 2)) {
            iVar2 = 0;
            std::string::string((string *)&uStack_18,"Play_UI_Game_Mower_Appear_Single");
            pAVar6 = (AnimationController *)MowerRemover::Create(iVar7,(string *)&uStack_18);
            std::string::~string((string *)&uStack_18);
            nop();
            AnimationMgr::Add((AnimationMgr *)(this + 0x50),pAVar6,fVar8);
            if (0 < *(int *)(pRVar3 + 0x48)) {
              do {
                iVar2 = iVar2 + 1;
                fVar9 = (float)FUN_044ee6b4(*(undefined4 *)(lVar5 + 0x18),
                                            *(undefined4 *)(lVar5 + 0x1c),
                                            *(undefined4 *)(lVar5 + 0x20));
                fVar10 = *(float *)(lVar5 + 0x1c);
                FUN_044ee6b4(*(undefined4 *)(lVar5 + 0x18),fVar10,*(undefined4 *)(lVar5 + 0x20));
                EATextSquish::Vec3::Vec3((Vec3 *)&uStack_18,fVar9,fVar10,*(float *)(pRVar3 + 0x5c));
                std::string::string(asStack_20,"coin_gold");
                pAVar6 = (AnimationController *)
                         CoinShowerSequence::Create
                                   (uStack_18,uStack_14,uStack_10,0x40a00000,this,asStack_20);
                std::string::~string(asStack_20);
                nop();
                AnimationMgr::Add((AnimationMgr *)(this + 0x50),pAVar6,fVar8);
                fVar8 = fVar8 + *(float *)(pRVar3 + 0x50) / (float)*(int *)(pRVar3 + 0x48);
              } while (iVar2 < *(int *)(pRVar3 + 0x48));
            }
          }
          iVar7 = iVar7 + 1;
          fVar8 = fVar8 + *(float *)(pRVar3 + 0x54);
        } while (iVar7 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      }
    }
  }
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x20) = *(float *)(pRVar3 + 0x58) + *(float *)(pRVar3 + 0x54) + fVar8 + fVar9;
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossVictoryOutroModule::StaticClassInit() */

void ZombossVictoryOutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossVictoryOutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_047509e8,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossVictoryOutroModule::StaticGetClass() */

long * ZombossVictoryOutroModule::StaticGetClass(void)

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
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossVictoryOutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossVictoryOutroModule::ZombossVictoryOutroModule() */

void __thiscall
ZombossVictoryOutroModule::ZombossVictoryOutroModule(ZombossVictoryOutroModule *this)

{
  VictoryOutroModule::VictoryOutroModule((VictoryOutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068cc240;
  return;
}


/* ZombossVictoryOutroModule::StaticNew() */

ZombossVictoryOutroModule * ZombossVictoryOutroModule::StaticNew(void)

{
  ZombossVictoryOutroModule *this;
  
  this = ::operator_new(0x90);
  ZombossVictoryOutroModule(this);
  return this;
}


/* ZombossVictoryOutroModule::startBoardFade() */

void ZombossVictoryOutroModule::startBoardFade(void)

{
  ZombossBattleModule *this;
  
  this = (ZombossBattleModule *)FUN_04751f9c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (ZombossBattleModule *)0x0) {
    ZombossBattleModule::TriggerZombossExit(this);
    return;
  }
  return;
}


/* ZombossVictoryOutroModule::onUpdate() */

void __thiscall ZombossVictoryOutroModule::onUpdate(ZombossVictoryOutroModule *this)

{
  char cVar1;
  ZombossBattleModule *this_00;
  
  VictoryOutroModule::onUpdate((VictoryOutroModule *)this);
  this_00 = (ZombossBattleModule *)
            FUN_04751f9c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((*(int *)(this + 0x18) != 7) &&
     ((this_00 == (ZombossBattleModule *)0x0 ||
      (cVar1 = ZombossBattleModule::IsZombossDone(this_00), cVar1 != '\0')))) {
    VictoryOutroModule::startBoardFade((VictoryOutroModule *)this);
    return;
  }
  return;
}


/* ZombossVictoryOutroModule::~ZombossVictoryOutroModule() */

void __thiscall
ZombossVictoryOutroModule::~ZombossVictoryOutroModule(ZombossVictoryOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068cc240;
  VictoryOutroModule::~VictoryOutroModule((VictoryOutroModule *)this);
  return;
}


/* ZombossVictoryOutroModule::~ZombossVictoryOutroModule() */

void __thiscall
ZombossVictoryOutroModule::~ZombossVictoryOutroModule(ZombossVictoryOutroModule *this)

{
  ~ZombossVictoryOutroModule(this);
  AK::FreeHook(this);
  return;
}

