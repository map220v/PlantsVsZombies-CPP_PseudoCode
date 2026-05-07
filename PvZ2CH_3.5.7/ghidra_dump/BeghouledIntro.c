// Class: BeghouledIntro


/* BeghouledIntro::BeghouledIntro() */

void __thiscall BeghouledIntro::BeghouledIntro(BeghouledIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06737520;
  return;
}


/* BeghouledIntro::StaticNew() */

BeghouledIntro * BeghouledIntro::StaticNew(void)

{
  BeghouledIntro *this;
  
  this = ::operator_new(0x50);
  BeghouledIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledIntro::StaticClassInit() */

void BeghouledIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03ba2d54,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledIntro::StaticGetClass() */

long * BeghouledIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledIntro::~BeghouledIntro() */

void __thiscall BeghouledIntro::~BeghouledIntro(BeghouledIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06737520;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* BeghouledIntro::~BeghouledIntro() */

void __thiscall BeghouledIntro::~BeghouledIntro(BeghouledIntro *this)

{
  ~BeghouledIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledIntro::onShowPlant() */

void BeghouledIntro::onShowPlant(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_BEGHOULED_SWAP]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x17,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Set");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledIntro::enableBeghouledGameplay() */

void BeghouledIntro::enableBeghouledGameplay(void)

{
  BeghouledModule *this;
  
  this = (BeghouledModule *)FUN_03baa4e8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  BeghouledModule::EnableSwapping(this,true);
  return;
}


/* BeghouledIntro::onStandardIntroComplete() */

void BeghouledIntro::onStandardIntroComplete(void)

{
  StandardLevelIntro::onStandardIntroComplete();
  enableBeghouledGameplay();
  return;
}

