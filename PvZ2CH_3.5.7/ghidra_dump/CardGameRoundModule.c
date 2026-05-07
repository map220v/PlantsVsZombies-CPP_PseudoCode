// Class: CardGameRoundModule


/* CardGameRoundModule::onLevelInit() */

void CardGameRoundModule::onLevelInit(void)

{
  return;
}


/* CardGameRoundModule::onUpdate() */

void CardGameRoundModule::onUpdate(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRoundModule::StaticClassInit() */

void CardGameRoundModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameRoundModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04e11b98,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameRoundModule::StaticGetClass() */

long * CardGameRoundModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameRoundModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameRoundModule::postInitialize() */

void __thiscall CardGameRoundModule::postInitialize(CardGameRoundModule *this)

{
  std::vector<CardGameRound*,std::allocator<CardGameRound*>>::clear
            ((vector<CardGameRound*,std::allocator<CardGameRound*>> *)(this + 0x18));
  return;
}


/* CardGameRoundModule::CardGameRoundModule() */

void __thiscall CardGameRoundModule::CardGameRoundModule(CardGameRoundModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069d6360;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* CardGameRoundModule::StaticNew() */

CardGameRoundModule * CardGameRoundModule::StaticNew(void)

{
  CardGameRoundModule *this;
  
  this = ::operator_new(0x30);
  CardGameRoundModule(this);
  return this;
}


/* CardGameRoundModule::~CardGameRoundModule() */

void __thiscall CardGameRoundModule::~CardGameRoundModule(CardGameRoundModule *this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(this + 0x18);
  *(undefined ***)this = &PTR_GetModuleClass_069d6360;
  iVar1 = FUN_04e113d8(uVar4,*(undefined8 *)(this + 0x20));
  if (0 < iVar1) {
    lVar5 = 0;
    while( true ) {
      plVar2 = (long *)FUN_04e113e4(uVar4,lVar5);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        puVar3 = (undefined8 *)FUN_04e113e4(*(undefined8 *)(this + 0x18),lVar5);
        *puVar3 = 0;
      }
      lVar5 = lVar5 + 1;
      if (iVar1 <= (int)lVar5) break;
      uVar4 = *(undefined8 *)(this + 0x18);
    }
  }
  std::vector<CardGameRound*,std::allocator<CardGameRound*>>::clear
            ((vector<CardGameRound*,std::allocator<CardGameRound*>> *)(this + 0x18));
  std::vector<CardGameRound*,std::allocator<CardGameRound*>>::~vector
            ((vector<CardGameRound*,std::allocator<CardGameRound*>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardGameRoundModule::~CardGameRoundModule() */

void __thiscall CardGameRoundModule::~CardGameRoundModule(CardGameRoundModule *this)

{
  ~CardGameRoundModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRoundModule::registerForEvents() */

void __thiscall CardGameRoundModule::registerForEvents(CardGameRoundModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelInit);
  Sexy::Delegate0::Delegate0<CardGameRoundModule,void(CardGameRoundModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<CardGameRoundModule,void(CardGameRoundModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CardGameRoundModule,void(CardGameRoundModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRoundModule::onGameplayStarted() */

void __thiscall CardGameRoundModule::onGameplayStarted(CardGameRoundModule *this)

{
  long lVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  CardGameRound *this_00;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  code *pcVar6;
  CardGameRound *local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CardGameRound*,std::allocator<CardGameRound*>>::clear
            ((vector<CardGameRound*,std::allocator<CardGameRound*>> *)(this + 0x18));
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = FUN_04e113ec(*(undefined8 *)(pRVar3 + 0x40),*(undefined8 *)(pRVar3 + 0x48));
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      this_00 = ::operator_new(0x30);
      CardGameRound::CardGameRound(this_00);
      lVar1 = lVar5 + 1;
      pcVar6 = *(code **)(*(long *)this_00 + 0x10);
      local_18 = this_00;
      pRVar4 = (RtWeakPtrBase *)FUN_04e11414(*(undefined8 *)(pRVar3 + 0x40),lVar5);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar4);
      (*pcVar6)(this_00,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      std::vector<CardGameRound*,std::allocator<CardGameRound*>>::push_back
                ((vector<CardGameRound*,std::allocator<CardGameRound*>> *)(this + 0x18),&local_18);
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

