// Class: StarChallengeBeatTheLevel


/* StarChallengeBeatTheLevel::gameplayEnded() */

void __thiscall StarChallengeBeatTheLevel::gameplayEnded(StarChallengeBeatTheLevel *this)

{
  char cVar1;
  
  cVar1 = Board::PlayEndedInVictory(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    return;
  }
  Challenge::Complete((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBeatTheLevel::StaticClassInit() */

void StarChallengeBeatTheLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeBeatTheLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_04473ff0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBeatTheLevel::StaticGetClass() */

long * StarChallengeBeatTheLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBeatTheLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBeatTheLevel::StarChallengeBeatTheLevel() */

void __thiscall
StarChallengeBeatTheLevel::StarChallengeBeatTheLevel(StarChallengeBeatTheLevel *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684da40;
  return;
}


/* StarChallengeBeatTheLevel::StaticNew() */

StarChallengeBeatTheLevel * StarChallengeBeatTheLevel::StaticNew(void)

{
  StarChallengeBeatTheLevel *this;
  
  this = ::operator_new(0x20);
  StarChallengeBeatTheLevel(this);
  return this;
}


/* StarChallengeBeatTheLevel::~StarChallengeBeatTheLevel() */

void __thiscall
StarChallengeBeatTheLevel::~StarChallengeBeatTheLevel(StarChallengeBeatTheLevel *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684da40;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeBeatTheLevel::~StarChallengeBeatTheLevel() */

void __thiscall
StarChallengeBeatTheLevel::~StarChallengeBeatTheLevel(StarChallengeBeatTheLevel *this)

{
  ~StarChallengeBeatTheLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBeatTheLevel::registerForEvents() */

void __thiscall StarChallengeBeatTheLevel::registerForEvents(StarChallengeBeatTheLevel *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeBeatTheLevel,void(StarChallengeBeatTheLevel::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

