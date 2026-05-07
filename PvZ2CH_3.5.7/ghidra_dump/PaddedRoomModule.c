// Class: PaddedRoomModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PaddedRoomModule::StaticClassInit() */

void PaddedRoomModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PaddedRoomModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03f0b32c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PaddedRoomModule::StaticGetClass() */

long * PaddedRoomModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PaddedRoomModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PaddedRoomModule::PaddedRoomModule() */

void __thiscall PaddedRoomModule::PaddedRoomModule(PaddedRoomModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06793900;
  return;
}


/* PaddedRoomModule::StaticNew() */

PaddedRoomModule * PaddedRoomModule::StaticNew(void)

{
  PaddedRoomModule *this;
  
  this = ::operator_new(0x18);
  PaddedRoomModule(this);
  return this;
}


/* PaddedRoomModule::~PaddedRoomModule() */

void __thiscall PaddedRoomModule::~PaddedRoomModule(PaddedRoomModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06793900;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PaddedRoomModule::~PaddedRoomModule() */

void __thiscall PaddedRoomModule::~PaddedRoomModule(PaddedRoomModule *this)

{
  ~PaddedRoomModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PaddedRoomModule::onLoadComplete() */

void PaddedRoomModule::onLoadComplete(void)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar3;
  long lVar4;
  int extraout_w1;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x15);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = PlayerInfo::GetPowerupUnlockState(this_00,(string *)(lVar4 + 8));
    if (cVar2 != '\0') {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Board::AddPowerup(this_01,(string *)(lVar4 + 8));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PaddedRoomModule::registerForEvents() */

void __thiscall PaddedRoomModule::registerForEvents(PaddedRoomModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<PaddedRoomModule,void(PaddedRoomModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

