// Class: LootOverrideZombossRiftModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootOverrideZombossRiftModule::StaticClassInit() */

void LootOverrideZombossRiftModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LootOverrideZombossRiftModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03690980,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LootOverrideZombossRiftModule::StaticGetClass() */

long * LootOverrideZombossRiftModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LootOverrideZombossRiftModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LootOverrideZombossRiftModule::getFirstReadyLootBattery() */

ulong __thiscall
LootOverrideZombossRiftModule::getFirstReadyLootBattery(LootOverrideZombossRiftModule *this)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar5 = uVar3 & 0xffffffff;
    uVar2 = FUN_036900e4(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) {
      return 0xffffffff;
    }
    puVar1 = (ulong *)FUN_036900dc(uVar4,uVar3);
    uVar2 = *puVar1;
    uVar3 = uVar3 + 1;
    fVar6 = (float)PVZ_T();
  } while (fVar6 < (float)uVar2);
  return uVar5;
}


/* LootOverrideZombossRiftModule::resetLootTimer(int) */

void __thiscall
LootOverrideZombossRiftModule::resetLootTimer(LootOverrideZombossRiftModule *this,int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float *pfVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pfVar2 = (float *)FUN_036900d0(*(undefined8 *)(pRVar1 + 0x40),(long)param_1);
  plVar3 = (long *)FUN_036900dc(*(undefined8 *)(this + 0x18),(long)param_1);
  fVar4 = (float)PVZ_T();
  fVar5 = (float)RandRangeFloat(*pfVar2,pfVar2[1]);
  *plVar3 = (long)(fVar5 + fVar4);
  return;
}


/* LootOverrideZombossRiftModule::getLootFromBattery(int) */

undefined4 __thiscall
LootOverrideZombossRiftModule::getLootFromBattery(LootOverrideZombossRiftModule *this,int param_1)

{
  undefined4 uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar5 = *(undefined8 *)(pRVar2 + 0x40);
  uVar3 = FUN_036900a0(uVar5,*(undefined8 *)(pRVar2 + 0x48));
  uVar1 = 0;
  if ((ulong)(long)param_1 < uVar3) {
    lVar4 = FUN_036900d0(uVar5);
    uVar1 = *(undefined4 *)(lVar4 + 8);
  }
  return uVar1;
}


/* LootOverrideZombossRiftModule::onZombieSpawned(Zombie*) */

void __thiscall
LootOverrideZombossRiftModule::onZombieSpawned(LootOverrideZombossRiftModule *this,Zombie *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Zombie::GetLoot(param_1);
  if ((iVar1 == 0) && (iVar1 = getFirstReadyLootBattery(this), -1 < iVar1)) {
    uVar2 = getLootFromBattery(this,iVar1);
    Zombie::SetLoot(param_1,uVar2);
    resetLootTimer(this,iVar1);
    return;
  }
  return;
}


/* LootOverrideZombossRiftModule::LootOverrideZombossRiftModule() */

void __thiscall
LootOverrideZombossRiftModule::LootOverrideZombossRiftModule(LootOverrideZombossRiftModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667d040;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* LootOverrideZombossRiftModule::StaticNew() */

LootOverrideZombossRiftModule * LootOverrideZombossRiftModule::StaticNew(void)

{
  LootOverrideZombossRiftModule *this;
  
  this = ::operator_new(0x30);
  LootOverrideZombossRiftModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootOverrideZombossRiftModule::registerForEvents() */

void __thiscall
LootOverrideZombossRiftModule::registerForEvents(LootOverrideZombossRiftModule *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftEnterLootPhase);
  Sexy::Delegate0::Delegate0<LootOverrideZombossRiftModule,void(LootOverrideZombossRiftModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BossRiftEnterLootPhase,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<LootOverrideZombossRiftModule,void(LootOverrideZombossRiftModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LootOverrideZombossRiftModule::~LootOverrideZombossRiftModule() */

void __thiscall
LootOverrideZombossRiftModule::~LootOverrideZombossRiftModule(LootOverrideZombossRiftModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667d040;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LootOverrideZombossRiftModule::~LootOverrideZombossRiftModule() */

void __thiscall
LootOverrideZombossRiftModule::~LootOverrideZombossRiftModule(LootOverrideZombossRiftModule *this)

{
  ~LootOverrideZombossRiftModule(this);
  AK::FreeHook(this);
  return;
}


/* LootOverrideZombossRiftModule::onRiftEnterLootPhase() */

void __thiscall
LootOverrideZombossRiftModule::onRiftEnterLootPhase(LootOverrideZombossRiftModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar5 = 0;
  uVar3 = FUN_036900a0(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
  std::vector<unsigned_long,std::allocator<unsigned_long>>::resize
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x18),uVar3);
  while( true ) {
    uVar3 = FUN_036900a0(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48));
    bVar1 = uVar3 <= uVar5;
    iVar4 = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (bVar1) break;
    resetLootTimer(this,iVar4);
  }
  return;
}

