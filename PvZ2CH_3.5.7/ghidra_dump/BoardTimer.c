// Class: BoardTimer


/* BoardTimer::onGameplayEnded() */

void BoardTimer::onGameplayEnded(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::StaticClassInit() */

void BoardTimer::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardTimer");
    (*pcVar2)(plVar1,asStack_10,FUN_036d2184,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTimer::StaticGetClass() */

long * BoardTimer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoardTimer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardTimer::CalcPercentRemaining() */

float __thiscall BoardTimer::CalcPercentRemaining(BoardTimer *this)

{
  if (0.0 < *(float *)(this + 0x38)) {
    return 1.0 - *(float *)(this + 0x34) / *(float *)(this + 0x38);
  }
  return 1.0;
}


/* BoardTimer::RecordFinishRemainingTime() */

void __thiscall BoardTimer::RecordFinishRemainingTime(BoardTimer *this)

{
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x34);
  return;
}


/* BoardTimer::GetUsedTime() */

float __thiscall BoardTimer::GetUsedTime(BoardTimer *this)

{
  return *(float *)(this + 0x38) - *(float *)(this + 0x34);
}


/* BoardTimer::resetCountdown() */

void __thiscall BoardTimer::resetCountdown(BoardTimer *this)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined4 *)(this + 0x1c) = 0;
  iVar1 = DAT_06aad6e8;
  fVar3 = *(float *)(this + 0x34);
  *(undefined4 *)(this + 0x18) = 0x41200000;
  if ((fVar3 <= (float)iVar1) && (0.0 < fVar3)) {
    if ((float)DAT_06aad6f8 < fVar3) {
      *(undefined4 *)(this + 0x1c) = 1;
    }
    else if ((float)DAT_06aad708 < fVar3) {
      *(undefined4 *)(this + 0x1c) = 2;
    }
    else if ((float)DAT_06aad718 < fVar3) {
      *(undefined4 *)(this + 0x1c) = 3;
    }
    else {
      uVar2 = 5;
      if ((float)DAT_06aad728 < fVar3) {
        uVar2 = 4;
      }
      *(undefined4 *)(this + 0x1c) = uVar2;
    }
  }
  return;
}


/* BoardTimer::AddTime(float, bool) */

void __thiscall BoardTimer::AddTime(BoardTimer *this,float param_1,bool param_2)

{
  *(float *)(this + 0x34) = *(float *)(this + 0x34) + param_1;
  *(float *)(this + 0x38) = *(float *)(this + 0x38) + param_1;
  if (!param_2) {
    return;
  }
  resetCountdown(this);
  return;
}


/* BoardTimer::~BoardTimer() */

void __thiscall BoardTimer::~BoardTimer(BoardTimer *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06682830;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BoardTimer::~BoardTimer() */

void __thiscall BoardTimer::~BoardTimer(BoardTimer *this)

{
  ~BoardTimer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::BoardTimer() */

void __thiscall BoardTimer::BoardTimer(BoardTimer *this)

{
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (BoardTimer)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06682830;
  this[0x21] = (BoardTimer)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x30] = (BoardTimer)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x40),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTimer::StaticNew() */

BoardTimer * BoardTimer::StaticNew(void)

{
  BoardTimer *this;
  
  this = ::operator_new(0x70);
  BoardTimer(this);
  return this;
}


/* BoardTimer::updateLevelTimerUI() */

void __thiscall BoardTimer::updateLevelTimerUI(BoardTimer *this)

{
  bool bVar1;
  ToxicWaterPerfumeBottleProjectile *this_00;
  
  if (this[0x20] != (BoardTimer)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      nop();
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,(int)*(float *)(this + 0x34));
      return;
    }
  }
  return;
}


/* BoardTimer::initLevelTimer() */

void __thiscall BoardTimer::initLevelTimer(BoardTimer *this)

{
  updateLevelTimerUI(this);
  resetCountdown(this);
  return;
}


/* BoardTimer::onGameplayStarted() */

void BoardTimer::onGameplayStarted(void)

{
  BoardTimer *in_x0;
  
  updateLevelTimerUI(in_x0);
  resetCountdown(in_x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::Initialize(float, bool, bool, Sexy::Delegate0) */

void __thiscall
BoardTimer::Initialize
          (undefined4 param_1,BoardTimer *this,BoardTimer param_2,BoardTimer param_3,
          Delegate2 *param_5)

{
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  this[0x21] = param_3;
  this[0x20] = param_2;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x34) = param_1;
  *(undefined4 *)(this + 0x38) = param_1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x40),param_5);
  if (this[0x20] != (BoardTimer)0x0) {
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
    if (pRVar1 == (ResourceInfo *)0x0) {
      Sexy::RtName::RtName(aRStack_18,L"UIChallengeLevelTimer");
      UIWidget::CreateWidget(aRStack_18,1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtName::~RtName(aRStack_18);
    }
  }
  initLevelTimer(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTimer::playCountdownSound(int) */

void __thiscall BoardTimer::playCountdownSound(BoardTimer *this,int param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,&DAT_06aad678 + (long)param_1 * 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::updateCountdown() */

void __thiscall BoardTimer::updateCountdown(BoardTimer *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Board *pBVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x21] != (BoardTimer)0x0) {
    if (*(float *)(this + 0x34) <= *(float *)(this + 0x18)) {
      playCountdownSound(this,(int)(10.0 - *(float *)(this + 0x18)));
      lVar3 = (long)*(int *)(this + 0x1c);
      iVar1 = (&DAT_06aad6e8)[lVar3 * 4];
      *(float *)(this + 0x18) = *(float *)(this + 0x18) - 1.0;
      if (iVar1 < (int)*(float *)(this + 0x34)) goto LAB_036d26cc;
    }
    else {
      lVar3 = (long)*(int *)(this + 0x1c);
      if ((int)(&DAT_06aad6e8)[lVar3 * 4] < (int)*(float *)(this + 0x34)) goto LAB_036d26cc;
    }
    cVar2 = FUN_0547419c((string *)(&DAT_06aad6e0 + lVar3 * 0x10));
    if (cVar2 == '\0') {
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::ToWString((string *)(&DAT_06aad6e0 + lVar3 * 0x10));
      Board::DisplayAdviceAgain(pBVar4,auStack_10,0x11,0);
      FUN_05476c50(auStack_10);
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
    }
  }
LAB_036d26cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::onGameplayUpdate() */

void __thiscall BoardTimer::onGameplayUpdate(BoardTimer *this)

{
  char cVar1;
  float *pfVar2;
  float fVar3;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_036d198c(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887));
  if ((cVar1 != '\0') && (0.0 < *(float *)(this + 0x34))) {
    if (this[0x30] == (BoardTimer)0x0) {
      this[0x30] = (BoardTimer)0x1;
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    fVar3 = (float)PVZ_Dt();
    *(float *)(this + 0x34) = *(float *)(this + 0x34) - fVar3;
    local_c = 0.0;
    pfVar2 = eastl::max_alt<float>(&local_c,(float *)(this + 0x34));
    *(float *)(this + 0x34) = *pfVar2;
    updateLevelTimerUI(this);
    updateCountdown(this);
    if (*(float *)(this + 0x34) <= 0.0) {
      if (local_8 == ___stack_chk_guard) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x40));
        return;
      }
      goto LAB_036d2890;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_036d2890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTimer::registerForEvents() */

void __thiscall BoardTimer::registerForEvents(BoardTimer *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<BoardTimer,void(BoardTimer::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<BoardTimer,void(BoardTimer::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayUpdate);
  Sexy::Delegate0::Delegate0<BoardTimer,void(BoardTimer::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

