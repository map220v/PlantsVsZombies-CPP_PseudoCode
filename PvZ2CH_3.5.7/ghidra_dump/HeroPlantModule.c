// Class: HeroPlantModule


/* HeroPlantModule::StopCollect() */

void __thiscall HeroPlantModule::StopCollect(HeroPlantModule *this)

{
  this[0x19] = (HeroPlantModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModule::OnSunMoneyAdded(int) */

void __thiscall HeroPlantModule::OnSunMoneyAdded(HeroPlantModule *this,int param_1)

{
  long *plVar1;
  BoardHeroPlantManager *this_00;
  Board *this_01;
  float fVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] == (HeroPlantModule)0x0) {
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + param_1;
  }
  else if ((byte)this[0x19] < (0 < param_1)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
    std::string::string((string *)local_18,"UISunBank");
    plVar1 = (long *)UIWidget::GetWidgetBySheetName((string *)local_18);
    std::string::~string((string *)local_18);
    nop();
    if (plVar1 == (long *)0x0) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
    }
    else {
      this_01 = (Board *)0x0;
      if (*(long *)(gLawnApp + 0x9f0) != 0) {
        DVec3::DVec3((DVec3 *)local_18);
        (**(code **)(*plVar1 + 0xb0))((Point *)&local_30,plVar1);
        Board::TranslateUIWidgetPositionToBoardPosition
                  (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        fVar2 = (float)FUN_042ba724(*(undefined4 *)(this_01 + 0xb5c));
        uVar3 = FUN_042ba9c0((float)local_30 - fVar2);
        local_18[0] = uVar3;
        fVar2 = (float)FUN_042ba728(*(undefined4 *)(this_01 + 0xb60));
        local_24 = FUN_042ba9c0((float)local_2c - fVar2);
        local_28 = uVar3;
      }
    }
    Board::AddHeroPlantFakeSun(this_01,(SexyVector3 *)&local_28,param_1);
    this_00 = (BoardHeroPlantManager *)
              Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
    BoardHeroPlantManager::IncreaseSunmoneyCondtion(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModule::StaticClassInit() */

void HeroPlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_042bacd4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantModule::StaticGetClass() */

long * HeroPlantModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModule::onPaidSunmoneyAtGridForPlant(int, int, int) */

void __thiscall
HeroPlantModule::onPaidSunmoneyAtGridForPlant
          (HeroPlantModule *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  BoardHeroPlantManager *this_00;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x18] != (HeroPlantModule)0x0) && ((byte)this[0x19] < (0 < param_1))) {
    iVar1 = BoardTransforms::GridToBoardSpaceX(param_2);
    iVar2 = BoardTransforms::GridToBoardSpaceY(param_3);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar1,(float)iVar2,0.0);
    Board::AddHeroPlantFakeSun(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)aVStack_18,param_1);
    this_00 = (BoardHeroPlantManager *)
              Board::GetBoardHeroPlantManager(*(Board **)(gLawnApp + 0x9f0));
    BoardHeroPlantManager::IncreaseSunmoneyCondtion(this_00,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantModule::HeroPlantModule() */

void __thiscall HeroPlantModule::HeroPlantModule(HeroPlantModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (HeroPlantModule)0x0;
  this[0x19] = (HeroPlantModule)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_0682bf10;
  return;
}


/* HeroPlantModule::StaticNew() */

HeroPlantModule * HeroPlantModule::StaticNew(void)

{
  HeroPlantModule *this;
  
  this = ::operator_new(0x20);
  HeroPlantModule(this);
  return this;
}


/* HeroPlantModule::~HeroPlantModule() */

void __thiscall HeroPlantModule::~HeroPlantModule(HeroPlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0682bf10;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* HeroPlantModule::~HeroPlantModule() */

void __thiscall HeroPlantModule::~HeroPlantModule(HeroPlantModule *this)

{
  ~HeroPlantModule(this);
  AK::FreeHook(this);
  return;
}


/* HeroPlantModule::onInit() */

void __thiscall HeroPlantModule::onInit(HeroPlantModule *this)

{
  HeroPlantMgr *this_00;
  
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x18] = (HeroPlantModule)0x1;
  OnSunMoneyAdded(this,*(int *)(this + 0x1c));
  this_00 = (HeroPlantMgr *)Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
  HeroPlantMgr::ResetLog(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModule::registerForEvents() */

void __thiscall HeroPlantModule::registerForEvents(HeroPlantModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<HeroPlantModule,void(HeroPlantModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSunMoneyAdded);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<HeroPlantModule,void(HeroPlantModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunMoneyAdded,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

