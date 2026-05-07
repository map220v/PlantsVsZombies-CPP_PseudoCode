// Class: StarChallengeSaveMowers


/* StarChallengeSaveMowers::gameplayEnded() */

void __thiscall StarChallengeSaveMowers::gameplayEnded(StarChallengeSaveMowers *this)

{
  char cVar1;
  
  cVar1 = FUN_04479aa4(*(undefined4 *)(this + 0x1c));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSaveMowers::StaticClassInit() */

void StarChallengeSaveMowers::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSaveMowers");
    (*pcVar2)(plVar1,asStack_10,FUN_04479f14,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSaveMowers::StaticGetClass() */

long * StarChallengeSaveMowers::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSaveMowers",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSaveMowers::StarChallengeSaveMowers() */

void __thiscall StarChallengeSaveMowers::StarChallengeSaveMowers(StarChallengeSaveMowers *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684e300;
  return;
}


/* StarChallengeSaveMowers::StaticNew() */

StarChallengeSaveMowers * StarChallengeSaveMowers::StaticNew(void)

{
  StarChallengeSaveMowers *this;
  
  this = ::operator_new(0x20);
  StarChallengeSaveMowers(this);
  return this;
}


/* StarChallengeSaveMowers::~StarChallengeSaveMowers() */

void __thiscall StarChallengeSaveMowers::~StarChallengeSaveMowers(StarChallengeSaveMowers *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684e300;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeSaveMowers::~StarChallengeSaveMowers() */

void __thiscall StarChallengeSaveMowers::~StarChallengeSaveMowers(StarChallengeSaveMowers *this)

{
  ~StarChallengeSaveMowers(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSaveMowers::registerForEvents() */

void __thiscall StarChallengeSaveMowers::registerForEvents(StarChallengeSaveMowers *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Challenge::registerForEvents((Challenge *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMowerTriggered);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<StarChallengeSaveMowers,void(StarChallengeSaveMowers::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerTriggered,&local_90);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeSaveMowers,void(StarChallengeSaveMowers::*)()>
            (aDStack_38,aCStack_68);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSaveMowers::onMowerTriggered(LawnMower*) */

void StarChallengeSaveMowers::onMowerTriggered(LawnMower *param_1)

{
  char cVar1;
  char *pcVar2;
  TGALogMgr *this;
  size_t in_x2;
  DString aDStack_68 [16];
  TGAPVZ1ModeData aTStack_58 [8];
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04479aa4(*(undefined4 *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Fail();
    cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar1 != '\0') {
      TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_58);
      DString::DString(aDStack_68,2);
      pcVar2 = (char *)DString::c_str(aDStack_68);
      std::string::append((string *)aTStack_58,pcVar2,in_x2);
      DString::~DString(aDStack_68);
      Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
      PVZ1ModeNetworkMgr::GetCurrentLevel();
      FUN_05474278(auStack_50,aDStack_68);
      std::string::~string((string *)aDStack_68);
      cVar1 = PVZ1ModeUtils::IsHardMode();
      if (cVar1 == '\0') {
        pcVar2 = "0";
      }
      else {
        pcVar2 = "1";
      }
      std::string::append(asStack_48,pcVar2,in_x2);
      std::string::append(asStack_40,"4",in_x2);
      this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogPVZ1Mode(this,aTStack_58);
      TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

