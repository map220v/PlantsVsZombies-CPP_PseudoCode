// Class: UnchartedBirthdayLevelFinishedChallengeListener


/* UnchartedBirthdayLevelFinishedChallengeListener::~UnchartedBirthdayLevelFinishedChallengeListener()
    */

void __thiscall
UnchartedBirthdayLevelFinishedChallengeListener::~UnchartedBirthdayLevelFinishedChallengeListener
          (UnchartedBirthdayLevelFinishedChallengeListener *this)

{
  *(undefined ***)this = &PTR_GetClass_06710ef0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* UnchartedBirthdayLevelFinishedChallengeListener::~UnchartedBirthdayLevelFinishedChallengeListener()
    */

void __thiscall
UnchartedBirthdayLevelFinishedChallengeListener::~UnchartedBirthdayLevelFinishedChallengeListener
          (UnchartedBirthdayLevelFinishedChallengeListener *this)

{
  ~UnchartedBirthdayLevelFinishedChallengeListener(this);
  AK::FreeHook(this);
  return;
}


/* UnchartedBirthdayLevelFinishedChallengeListener::UnchartedBirthdayLevelFinishedChallengeListener()
    */

void __thiscall
UnchartedBirthdayLevelFinishedChallengeListener::UnchartedBirthdayLevelFinishedChallengeListener
          (UnchartedBirthdayLevelFinishedChallengeListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_06710ef0;
  return;
}


/* UnchartedBirthdayLevelFinishedChallengeListener::StaticNew() */

UnchartedBirthdayLevelFinishedChallengeListener *
UnchartedBirthdayLevelFinishedChallengeListener::StaticNew(void)

{
  UnchartedBirthdayLevelFinishedChallengeListener *this;
  
  this = ::operator_new(0x18);
  UnchartedBirthdayLevelFinishedChallengeListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayLevelFinishedChallengeListener::StaticClassInit() */

void UnchartedBirthdayLevelFinishedChallengeListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedBirthdayLevelFinishedChallengeListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a8fda4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBirthdayLevelFinishedChallengeListener::StaticGetClass() */

long * UnchartedBirthdayLevelFinishedChallengeListener::StaticGetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedBirthdayLevelFinishedChallengeListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBirthdayLevelFinishedChallengeListener::GetClass() const */

long * UnchartedBirthdayLevelFinishedChallengeListener::GetClass(void)

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
  uVar2 = GeneralTaskListener::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedBirthdayLevelFinishedChallengeListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBirthdayLevelFinishedChallengeListener::onLevelFinished(bool) */

void __thiscall
UnchartedBirthdayLevelFinishedChallengeListener::onLevelFinished
          (UnchartedBirthdayLevelFinishedChallengeListener *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  UnchartedBirthdayTaskData *pUVar3;
  long lVar4;
  UnchartedModeNetworkMgr *this_01;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) &&
     (((cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday(), cVar1 != '\0' ||
       (cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar1 != '\0')) &&
      (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20)),
      bVar2)))) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pUVar3 = Sexy::RtObject::Cast<UnchartedBirthdayTaskData>(this_00);
    if ((pUVar3 != (UnchartedBirthdayTaskData *)0x0) &&
       (lVar4 = FUN_03a79ce8(*(undefined8 *)(pUVar3 + 0x58),*(undefined8 *)(pUVar3 + 0x60)),
       lVar4 != 0)) {
      this_01 = (UnchartedModeNetworkMgr *)
                Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
      cVar1 = UnchartedModeNetworkMgr::IsTaskIdValidInCurrentLevel(this_01,*(int *)(lVar4 + 8));
      if (cVar1 != '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(pUVar3 + 0x58));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(pUVar3 + 0x58));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar2) {
          psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
          ;
          cVar1 = PVZ2UnchartedModeUtils::HasSelectedCollection(psVar5);
          if (cVar1 == '\0') goto LAB_03a97ed8;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        (**(code **)(*(long *)this + 0x58))(this,1);
      }
    }
  }
LAB_03a97ed8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UnchartedBirthdayLevelFinishedChallengeListener::RegisterListener(GeneralTask*) */

void __thiscall
UnchartedBirthdayLevelFinishedChallengeListener::RegisterListener
          (UnchartedBirthdayLevelFinishedChallengeListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelFinished);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UnchartedBirthdayLevelFinishedChallengeListener,void(UnchartedBirthdayLevelFinishedChallengeListener::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyUnchartedBirthdayFinished,&local_40);
  this[8] = (UnchartedBirthdayLevelFinishedChallengeListener)0x1;
  return;
}

