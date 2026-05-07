// Class: PlantWarsZombiesAteYourBrainsModule


/* PlantWarsZombiesAteYourBrainsModule::stopTestingForZombieWin() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::stopTestingForZombieWin
          (PlantWarsZombiesAteYourBrainsModule *this)

{
  this[0x18] = (PlantWarsZombiesAteYourBrainsModule)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombiesAteYourBrainsModule::StaticClassInit() */

void PlantWarsZombiesAteYourBrainsModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsZombiesAteYourBrainsModule");
    (*pcVar2)(plVar1,asStack_10,FUN_046cef90,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombiesAteYourBrainsModule::StaticGetClass() */

long * PlantWarsZombiesAteYourBrainsModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsZombiesAteYourBrainsModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsZombiesAteYourBrainsModule::PlantWarsZombiesAteYourBrainsModule() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::PlantWarsZombiesAteYourBrainsModule
          (PlantWarsZombiesAteYourBrainsModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (PlantWarsZombiesAteYourBrainsModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_068b4020;
  return;
}


/* PlantWarsZombiesAteYourBrainsModule::StaticNew() */

PlantWarsZombiesAteYourBrainsModule * PlantWarsZombiesAteYourBrainsModule::StaticNew(void)

{
  PlantWarsZombiesAteYourBrainsModule *this;
  
  this = ::operator_new(0x20);
  PlantWarsZombiesAteYourBrainsModule(this);
  return this;
}


/* PlantWarsZombiesAteYourBrainsModule::~PlantWarsZombiesAteYourBrainsModule() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::~PlantWarsZombiesAteYourBrainsModule
          (PlantWarsZombiesAteYourBrainsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068b4020;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PlantWarsZombiesAteYourBrainsModule::~PlantWarsZombiesAteYourBrainsModule() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::~PlantWarsZombiesAteYourBrainsModule
          (PlantWarsZombiesAteYourBrainsModule *this)

{
  ~PlantWarsZombiesAteYourBrainsModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombiesAteYourBrainsModule::startTestingForZombieWin() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::startTestingForZombieWin
          (PlantWarsZombiesAteYourBrainsModule *this)

{
  undefined4 uVar1;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this[0x18] = (PlantWarsZombiesAteYourBrainsModule)0x1;
  local_8 = ___stack_chk_guard;
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_18,lVar2 + 0xb0);
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = PlantWarsUtils::CalcNodeType(asStack_10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsZombiesAteYourBrainsModule::checkDoesZombieWin(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
PlantWarsZombiesAteYourBrainsModule::checkDoesZombieWin
          (PlantWarsZombiesAteYourBrainsModule *this,RtWeakPtr *param_2)

{
  char cVar1;
  ResourceInfo *this_00;
  ResilienceTutorialIntroProperties *pRVar2;
  float *pfVar3;
  float fVar4;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar1 = Zombie::GetCanTriggerWin((Zombie *)this_00);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0'))
     && (cVar1 = Zombie::IsControlled((Zombie *)this_00), cVar1 == '\0')) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar4 = *(float *)(pRVar2 + 0x40);
    if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
       (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0')) {
      fVar4 = fVar4 + 30.0;
    }
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    return *pfVar3 - 200.0 <= fVar4;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsZombiesAteYourBrainsModule::onUpdate() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::onUpdate(PlantWarsZombiesAteYourBrainsModule *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (PlantWarsZombiesAteYourBrainsModule)0x0) {
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
        goto joined_r0x046d0014;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_48);
joined_r0x046d0014:
    if (cVar2 != '\0') {
      PlantWarsUtils::SetResultType(1);
      Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
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
/* PlantWarsZombiesAteYourBrainsModule::registerForEvents() */

void __thiscall
PlantWarsZombiesAteYourBrainsModule::registerForEvents(PlantWarsZombiesAteYourBrainsModule *this)

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
  Sexy::Delegate0::
  Delegate0<PlantWarsZombiesAteYourBrainsModule,void(PlantWarsZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopTestingForZombieWin);
  Sexy::Delegate0::
  Delegate0<PlantWarsZombiesAteYourBrainsModule,void(PlantWarsZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::
  Delegate0<PlantWarsZombiesAteYourBrainsModule,void(PlantWarsZombiesAteYourBrainsModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

