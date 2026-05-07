// Class: ZombiesAteYourBrainsModule


/* ZombiesAteYourBrainsModule::startTestingForZombieWin() */

void __thiscall
ZombiesAteYourBrainsModule::startTestingForZombieWin(ZombiesAteYourBrainsModule *this)

{
  this[0x18] = (ZombiesAteYourBrainsModule)0x1;
  return;
}


/* ZombiesAteYourBrainsModule::stopTestingForZombieWin() */

void __thiscall
ZombiesAteYourBrainsModule::stopTestingForZombieWin(ZombiesAteYourBrainsModule *this)

{
  this[0x18] = (ZombiesAteYourBrainsModule)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsModule::StaticClassInit() */

void ZombiesAteYourBrainsModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiesAteYourBrainsModule");
    (*pcVar2)(plVar1,asStack_10,FUN_046ce5ac,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsModule::StaticGetClass() */

long * ZombiesAteYourBrainsModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiesAteYourBrainsModule::ZombiesAteYourBrainsModule() */

void __thiscall
ZombiesAteYourBrainsModule::ZombiesAteYourBrainsModule(ZombiesAteYourBrainsModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (ZombiesAteYourBrainsModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_068b3d60;
  return;
}


/* ZombiesAteYourBrainsModule::StaticNew() */

ZombiesAteYourBrainsModule * ZombiesAteYourBrainsModule::StaticNew(void)

{
  ZombiesAteYourBrainsModule *this;
  
  this = ::operator_new(0x20);
  ZombiesAteYourBrainsModule(this);
  return this;
}


/* ZombiesAteYourBrainsModule::~ZombiesAteYourBrainsModule() */

void __thiscall
ZombiesAteYourBrainsModule::~ZombiesAteYourBrainsModule(ZombiesAteYourBrainsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068b3d60;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombiesAteYourBrainsModule::~ZombiesAteYourBrainsModule() */

void __thiscall
ZombiesAteYourBrainsModule::~ZombiesAteYourBrainsModule(ZombiesAteYourBrainsModule *this)

{
  ~ZombiesAteYourBrainsModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombiesAteYourBrainsModule::checkDoesZombieWin(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
ZombiesAteYourBrainsModule::checkDoesZombieWin(ZombiesAteYourBrainsModule *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  ResourceInfo *this_00;
  ResilienceTutorialIntroProperties *pRVar3;
  float *pfVar4;
  float fVar5;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar2 = Zombie::GetCanTriggerWin((Zombie *)this_00);
  if ((((cVar2 == '\0') || (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 != '\0')
       ) || (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 != '\0')) ||
     ((cVar2 = Zombie::IsControlled((Zombie *)this_00), cVar2 != '\0' ||
      (cVar2 = Zombie::IsIZombie((Zombie *)this_00), cVar2 != '\0')))) {
    bVar1 = false;
  }
  else {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar5 = *(float *)(pRVar3 + 0x40);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar5 = fVar5 + 30.0;
    }
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    bVar1 = *pfVar4 - 200.0 <= fVar5;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsModule::onUpdate() */

void __thiscall ZombiesAteYourBrainsModule::onUpdate(ZombiesAteYourBrainsModule *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ZombiesAteYourBrainsOutro *pZVar4;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (ZombiesAteYourBrainsModule)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_48);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
      cVar2 = checkDoesZombieWin(this,aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_48);
        goto joined_r0x046cfe3c;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_48);
joined_r0x046cfe3c:
    if ((((cVar2 != '\0') &&
         (cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1), cVar2 != '\0')) &&
        (pZVar4 = (ZombiesAteYourBrainsOutro *)
                  FUN_046cfb90(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
        pZVar4 != (ZombiesAteYourBrainsOutro *)0x0)) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_28,(RtWeakPtrBase *)a_Stack_48);
      ZombiesAteYourBrainsOutro::SetWinningZombie(pZVar4,aIStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsModule::registerForEvents() */

void __thiscall ZombiesAteYourBrainsModule::registerForEvents(ZombiesAteYourBrainsModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startTestingForZombieWin);
  Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsModule,void(ZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopTestingForZombieWin);
  Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsModule,void(ZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsModule,void(ZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

