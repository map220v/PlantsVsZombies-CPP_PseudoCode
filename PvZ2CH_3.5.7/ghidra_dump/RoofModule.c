// Class: RoofModule


/* RoofModule::OnUpdate() */

void RoofModule::OnUpdate(void)

{
  return;
}


/* RoofModule::OnLoadComplete() */

void RoofModule::OnLoadComplete(void)

{
  return;
}


/* RoofModule::OnPlantPlanted(Plant*) */

void RoofModule::OnPlantPlanted(Plant *param_1)

{
  return;
}


/* RoofModule::OnZombieAddedToBoard(Zombie*) */

void RoofModule::OnZombieAddedToBoard(Zombie *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofModule::StaticClassInit() */

void RoofModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoofModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6e910,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofModule::StaticGetClass() */

long * RoofModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoofModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RoofModule::RoofModule() */

void __thiscall RoofModule::RoofModule(RoofModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0676ebc0;
  return;
}


/* RoofModule::StaticNew() */

RoofModule * RoofModule::StaticNew(void)

{
  RoofModule *this;
  
  this = ::operator_new(0x18);
  RoofModule(this);
  return this;
}


/* RoofModule::~RoofModule() */

void __thiscall RoofModule::~RoofModule(RoofModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0676ebc0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RoofModule::~RoofModule() */

void __thiscall RoofModule::~RoofModule(RoofModule *this)

{
  ~RoofModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofModule::OnGamePlayStarted() */

void __thiscall RoofModule::OnGamePlayStarted(RoofModule *this)

{
  int iVar1;
  int iVar2;
  RtObject *pRVar3;
  RoofProperties *pRVar4;
  long lVar5;
  Board *this_00;
  ulong uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)BasePowerup::GetType((BasePowerup *)this);
  pRVar4 = Sexy::RtObject::Cast<RoofProperties>(pRVar3);
  iVar1 = *(int *)(pRVar4 + 0x40);
  pRVar3 = (RtObject *)BasePowerup::GetType((BasePowerup *)this);
  uVar6 = (ulong)iVar1;
  pRVar4 = Sexy::RtObject::Cast<RoofProperties>(pRVar3);
  if (uVar6 <= (ulong)(long)*(int *)(pRVar4 + 0x44)) {
    do {
      lVar5 = 0;
      do {
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"flowerpot");
        iVar2 = (int)lVar5;
        lVar5 = lVar5 + 1;
        Board::AddPlant(this_00,iVar1,iVar2,asStack_10,-1,false,false,true,false);
        std::string::~string(asStack_10);
        nop();
      } while (lVar5 != 5);
      uVar6 = uVar6 + 1;
      iVar1 = iVar1 + 1;
      pRVar3 = (RtObject *)BasePowerup::GetType((BasePowerup *)this);
      pRVar4 = Sexy::RtObject::Cast<RoofProperties>(pRVar3);
    } while (uVar6 <= (ulong)(long)*(int *)(pRVar4 + 0x44));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofModule::registerForEvents() */

void __thiscall RoofModule::registerForEvents(RoofModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
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
            ((ReceivedDataCallback *)this,OnLoadComplete);
  Sexy::Delegate0::Delegate0<RoofModule,void(RoofModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGamePlayStarted);
  Sexy::Delegate0::Delegate0<RoofModule,void(RoofModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<RoofModule,void(RoofModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantPlanted);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::Subscribe<Plant*,Sexy::CBMemberTranslatorX<RoofModule,void(RoofModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieAddedToBoard);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RoofModule,void(RoofModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

