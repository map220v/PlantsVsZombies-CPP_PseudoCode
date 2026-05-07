// Class: PerkHandlerModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModule::StaticClassInit() */

void PerkHandlerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PerkHandlerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036e38d0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerkHandlerModule::StaticGetClass() */

long * PerkHandlerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PerkHandlerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PerkHandlerModule::PerkHandlerModule() */

void __thiscall PerkHandlerModule::PerkHandlerModule(PerkHandlerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06685b90;
  return;
}


/* PerkHandlerModule::StaticNew() */

PerkHandlerModule * PerkHandlerModule::StaticNew(void)

{
  PerkHandlerModule *this;
  
  this = ::operator_new(0x18);
  PerkHandlerModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModule::onPerkActivated(PennyPerk*) */

void __thiscall PerkHandlerModule::onPerkActivated(PerkHandlerModule *this,PennyPerk *param_1)

{
  long *plVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PennyPerk *)0x0) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    MiniGamePerk::GetProps();
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    (**(code **)(*plVar1 + 0x88))(auStack_10);
    Board::DisplayAdviceAgain(pBVar2,auStack_10,0x1c,0);
    FUN_05476c50(auStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModule::registerForEvents() */

void __thiscall PerkHandlerModule::registerForEvents(PerkHandlerModule *this)

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
            ((ReceivedDataCallback *)this,initializePerks);
  Sexy::Delegate0::Delegate0<PerkHandlerModule,void(PerkHandlerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PreSeedchooserFlowComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPerkActivated);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<PennyPerk*,Sexy::CBMemberTranslatorX<PerkHandlerModule,void(PerkHandlerModule::*)(PennyPerk*)>>
            ((MessageRouter *)puVar1,Message::RiftLevelPerkActivation,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModule::~PerkHandlerModule() */

void __thiscall PerkHandlerModule::~PerkHandlerModule(PerkHandlerModule *this)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 local_40;
  string asStack_38 [8];
  GridItemPoolEntry aGStack_30 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetModuleClass_06685b90;
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetSelectedPerks();
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    uVar3 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    FUN_05475d88(asStack_38,lVar4 + 0x10);
    PennyPerkMgr::DeselectPerk(uVar3,asStack_38);
    std::string::~string(asStack_38);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
  }
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_20);
  LevelModule::~LevelModule((LevelModule *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PerkHandlerModule::~PerkHandlerModule() */

void __thiscall PerkHandlerModule::~PerkHandlerModule(PerkHandlerModule *this)

{
  ~PerkHandlerModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PerkHandlerModule::initializePerks() */

void PerkHandlerModule::initializePerks(void)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  GridItemPoolEntry aGStack_30 [8];
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetSelectedPerks();
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0x74);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aGStack_30);
    (*pcVar6)(extraout_x0,aRStack_38,local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
  }
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

