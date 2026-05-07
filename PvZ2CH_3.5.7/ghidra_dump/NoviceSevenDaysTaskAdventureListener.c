// Class: NoviceSevenDaysTaskAdventureListener


/* NoviceSevenDaysTaskAdventureListener::~NoviceSevenDaysTaskAdventureListener() */

void __thiscall
NoviceSevenDaysTaskAdventureListener::~NoviceSevenDaysTaskAdventureListener
          (NoviceSevenDaysTaskAdventureListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670ed70;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskAdventureListener::~NoviceSevenDaysTaskAdventureListener() */

void __thiscall
NoviceSevenDaysTaskAdventureListener::~NoviceSevenDaysTaskAdventureListener
          (NoviceSevenDaysTaskAdventureListener *this)

{
  ~NoviceSevenDaysTaskAdventureListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskAdventureListener::NoviceSevenDaysTaskAdventureListener() */

void __thiscall
NoviceSevenDaysTaskAdventureListener::NoviceSevenDaysTaskAdventureListener
          (NoviceSevenDaysTaskAdventureListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670ed70;
  return;
}


/* NoviceSevenDaysTaskAdventureListener::StaticNew() */

NoviceSevenDaysTaskAdventureListener * NoviceSevenDaysTaskAdventureListener::StaticNew(void)

{
  NoviceSevenDaysTaskAdventureListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskAdventureListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskAdventureListener::StaticClassInit() */

void NoviceSevenDaysTaskAdventureListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskAdventureListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a85a54,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskAdventureListener::StaticGetClass() */

long * NoviceSevenDaysTaskAdventureListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskAdventureListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskAdventureListener::GetClass() const */

long * NoviceSevenDaysTaskAdventureListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskAdventureListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskAdventureListener::JumpToTargetTask() */

bool NoviceSevenDaysTaskAdventureListener::JumpToTargetTask(void)

{
  char cVar1;
  
  cVar1 = GetSecondWorldLevelCompleted(1);
  if (cVar1 != '\0') {
    Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
    QuickJumpUtil::ShowAdventure();
  }
  return cVar1 != '\0';
}


/* NoviceSevenDaysTaskAdventureListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskAdventureListener::RegisterListener
          (NoviceSevenDaysTaskAdventureListener *this,GeneralTask *param_1)

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
            ((ReceivedDataCallback *)this,onPlantAdventureFinish);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskAdventureListener,void(NoviceSevenDaysTaskAdventureListener::*)(int)>>
            ((MessageRouter *)puVar1,Message::FinishPlantAdventure,&local_40);
  this[8] = (NoviceSevenDaysTaskAdventureListener)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskAdventureListener::onPlantAdventureFinish(int) */

void NoviceSevenDaysTaskAdventureListener::onPlantAdventureFinish(int param_1)

{
  vector<std::string,std::allocator<std::string>> *this;
  bool bVar1;
  char cVar2;
  long *plVar3;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(plVar3[2] + 0x20));
  if (!bVar1) {
    WorldMapUtils::GetWorldDataForEdit();
    goto LAB_03a9efb4;
  }
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(plVar3[2] + 0x20));
  pNVar4 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
  lVar5 = WorldMapUtils::GetWorldDataForEdit();
  if ((lVar5 == 0) || (pNVar4 == (NoviceSevenDaysTaskWorldLevelData *)0x0)) goto LAB_03a9efb4;
  this = (vector<std::string,std::allocator<std::string>> *)(pNVar4 + 0x70);
  WorldDataManager::GetWorldNameById((int)lVar5);
  cVar2 = std::vector<std::string,std::allocator<std::string>>::empty(this);
  if (cVar2 == '\0') {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)this);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar6,uVar7,asStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) goto LAB_03a9f020;
  }
  else {
LAB_03a9f020:
    (**(code **)(*plVar3 + 0x58))(plVar3,1);
  }
  std::string::~string(asStack_20);
LAB_03a9efb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

