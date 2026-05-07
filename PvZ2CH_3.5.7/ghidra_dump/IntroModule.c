// Class: IntroModule


/* IntroModule::~IntroModule() */

void __thiscall IntroModule::~IntroModule(IntroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678aea0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* IntroModule::~IntroModule() */

void __thiscall IntroModule::~IntroModule(IntroModule *this)

{
  ~IntroModule(this);
  AK::FreeHook(this);
  return;
}


/* IntroModule::registerForEvents() */

void IntroModule::registerForEvents(void)

{
  long lVar1;
  
  lVar1 = LevelModule::getManager();
  FUN_03e40334(lVar1 + 0x80);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::onFinishReadySetPlant() */

void __thiscall IntroModule::onFinishReadySetPlant(IntroModule *this)

{
  PrimeText *this_00;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x18));
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x18),(Delegate2 *)aDStack_38);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::StaticClassInit() */

void IntroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03e4086c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroModule::StaticGetClass() */

long * IntroModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::IntroModule() */

void __thiscall IntroModule::IntroModule(IntroModule *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678aea0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x18),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x18),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroModule::StaticNew() */

IntroModule * IntroModule::StaticNew(void)

{
  IntroModule *this;
  
  this = ::operator_new(0x48);
  IntroModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::AddReadySetPlantToAnimMgr(AnimationMgr*, float&, Sexy::Delegate0, bool) */

void __thiscall
IntroModule::AddReadySetPlantToAnimMgr
          (IntroModule *this,AnimationMgr *param_1,float *param_2,Delegate2 *param_4,char param_5)

{
  AnimationController *pAVar1;
  float fVar2;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x18),param_4);
  fVar2 = (float)(**(code **)(*(long *)this + 0xa8))(this);
  *param_2 = *param_2 + fVar2;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowReady");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(param_1,pAVar1,*param_2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  *param_2 = *param_2 + 0.5;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onShowSet");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(param_1,pAVar1,*param_2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  fVar2 = *param_2;
  if (param_5 == '\0') {
    *param_2 = fVar2 + 0.5;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
    std::string::string(asStack_10,"onShowPlant");
    pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
    AnimationMgr::Add(param_1,pAVar1,*param_2);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtId::~RtId(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    fVar2 = *param_2 + 0.32;
  }
  *param_2 = fVar2 + 0.5;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onFinishReadySetPlant");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(param_1,pAVar1,*param_2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::onShowReady() */

void IntroModule::onShowReady(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_STANDARD_1]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Ready_x1");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::onShowSet() */

void IntroModule::onShowSet(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_STANDARD_2]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x16,0);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroModule::onShowPlant() */

void IntroModule::onShowPlant(void)

{
  char *pcVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[WARNING_STANDARD_3]",auStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x17,0);
  FUN_05476c50(auStack_10);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Game_Wave_Plant");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

