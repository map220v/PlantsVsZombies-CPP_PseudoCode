// Class: NoviceSevenDaysTaskPassLevelWithCheckListener


/* NoviceSevenDaysTaskPassLevelWithCheckListener::~NoviceSevenDaysTaskPassLevelWithCheckListener()
    */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::~NoviceSevenDaysTaskPassLevelWithCheckListener
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670e8f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::~NoviceSevenDaysTaskPassLevelWithCheckListener()
    */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::~NoviceSevenDaysTaskPassLevelWithCheckListener
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this)

{
  ~NoviceSevenDaysTaskPassLevelWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::NoviceSevenDaysTaskPassLevelWithCheckListener() */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::NoviceSevenDaysTaskPassLevelWithCheckListener
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670e8f0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  return;
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::StaticNew() */

NoviceSevenDaysTaskPassLevelWithCheckListener *
NoviceSevenDaysTaskPassLevelWithCheckListener::StaticNew(void)

{
  NoviceSevenDaysTaskPassLevelWithCheckListener *this;
  
  this = ::operator_new(0x28);
  NoviceSevenDaysTaskPassLevelWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelWithCheckListener::StaticClassInit() */

void NoviceSevenDaysTaskPassLevelWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskPassLevelWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a84464,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::StaticGetClass() */

long * NoviceSevenDaysTaskPassLevelWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::GetClass() const */

long * NoviceSevenDaysTaskPassLevelWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskPassLevelWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskPassLevelWithCheckListener::OnWorldMapWorldLoaded() */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::OnWorldMapWorldLoaded
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this)

{
  string *this_00;
  string *this_01;
  byte bVar1;
  char cVar2;
  WorldMap *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  undefined8 uVar3;
  size_t __n;
  size_t sVar4;
  
  this_00 = (string *)(this + 0x18);
  bVar1 = FUN_0547419c(this_00);
  sVar4 = (size_t)bVar1;
  if (bVar1 != 0) {
    return;
  }
  this_01 = (string *)(this + 0x20);
  this_02 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  __n = 0;
  WorldMap::CenterOnMapEvent(this_02,this_00,false);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  cVar2 = PlayerInfo::GetLevelCompleted(this_04,this_01);
  if (cVar2 != '\0') {
    uVar3 = LawnApp::GetWorldMap(gLawnApp);
    UISelectHardLevelModeWidget::create(uVar3,this_01);
    __n = sVar4;
  }
  std::string::append(this_00,"",__n);
  std::string::append(this_01,"",__n);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::RegisterListener
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this,GeneralTask *param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  ulong uVar5;
  string *psVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  string asStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
    pNVar4 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    if (pNVar4 != (NoviceSevenDaysTaskWorldLevelData *)0x0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      uVar7 = 0;
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      while( true ) {
        uVar8 = *(undefined8 *)(pNVar4 + 0x70);
        uVar5 = FUN_03a79ce8(uVar8,*(undefined8 *)(pNVar4 + 0x78));
        puVar1 = gMessageRouter;
        if (uVar5 <= uVar7) break;
        if (pNVar4[0x8c] != (NoviceSevenDaysTaskWorldLevelData)0x0) {
          psVar6 = (string *)FUN_03a79cf4(uVar8,uVar7);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(pNVar4 + 0x88));
          std::operator+(psVar6,asStack_68);
          cVar3 = PlayerInfo::GetHardLevelCompleted(this_02,(string *)&local_50);
          std::string::~string((string *)&local_50);
          std::string::~string(asStack_68);
          if (cVar3 == '\0') goto LAB_03a9959c;
LAB_03a99610:
          (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)(pNVar4 + 0x28));
          this[8] = (NoviceSevenDaysTaskPassLevelWithCheckListener)0x0;
          goto LAB_03a994e8;
        }
        psVar6 = (string *)FUN_03a79cf4(uVar8,uVar7);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(pNVar4 + 0x88));
        std::operator+(psVar6,asStack_68);
        cVar3 = PlayerInfo::GetLevelCompleted(this_02,(string *)&local_50);
        std::string::~string((string *)&local_50);
        std::string::~string(asStack_68);
        if (cVar3 != '\0') goto LAB_03a99610;
LAB_03a9959c:
        uVar7 = uVar7 + 1;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onLevelEnded);
      local_90 = local_50;
      uStack_88 = uStack_48;
      local_80 = local_40;
      MessageRouter::
      Subscribe<LevelDefinitionForTask*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskPassLevelWithCheckListener,void(NoviceSevenDaysTaskPassLevelWithCheckListener::*)(LevelDefinitionForTask*)>>
                ((MessageRouter *)puVar1,Message::LevelEndForTask,&local_90);
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnWorldMapWorldLoaded);
      Sexy::Delegate0::
      Delegate0<NoviceSevenDaysTaskPassLevelWithCheckListener,void(NoviceSevenDaysTaskPassLevelWithCheckListener::*)()>
                (aDStack_38,asStack_68);
      MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
      this[8] = (NoviceSevenDaysTaskPassLevelWithCheckListener)0x1;
    }
  }
LAB_03a994e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelWithCheckListener::onLevelEnded(LevelDefinitionForTask*) */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::onLevelEnded
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this,LevelDefinitionForTask *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtObject *this_01;
  NoviceSevenDaysTaskWorldLevelData *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar2 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_01);
    if (((pNVar2 != (NoviceSevenDaysTaskWorldLevelData *)0x0) &&
        (((pNVar2[0x8e] == (NoviceSevenDaysTaskWorldLevelData)0x0 ||
          (param_1[0x21] != (LevelDefinitionForTask)0x0)) &&
         (*(NoviceSevenDaysTaskWorldLevelData *)(param_1 + 0xc) == pNVar2[0x8c])))) &&
       (pNVar2[0x8d] == *(NoviceSevenDaysTaskWorldLevelData *)(param_1 + 0xd))) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(pNVar2 + 0x70);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar3,uVar4,param_1);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if ((bVar1) &&
         ((*(int *)(pNVar2 + 0x88) == 0 || (*(int *)(pNVar2 + 0x88) == *(int *)(param_1 + 8))))) {
        (**(code **)(*(long *)this + 0x58))(this,1);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskPassLevelWithCheckListener::JumpToTargetTask() */

void __thiscall
NoviceSevenDaysTaskPassLevelWithCheckListener::JumpToTargetTask
          (NoviceSevenDaysTaskPassLevelWithCheckListener *this)

{
  ActivityTypeID *pAVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar5;
  ProfileMgr *pPVar6;
  string *psVar7;
  long lVar8;
  string *psVar9;
  PlayerInfo *pPVar10;
  ulong uVar11;
  undefined8 uVar12;
  WorldMap *this_01;
  UniverseMap *pUVar13;
  ulong uVar14;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x10) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x20));
    pNVar5 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    if (pNVar5 != (NoviceSevenDaysTaskWorldLevelData *)0x0) {
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      psVar7 = (string *)ProfileMgr::GetCurrentProfile(pPVar6);
      uVar14 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      uVar4 = *(undefined8 *)(pNVar5 + 0x70);
      lVar8 = FUN_03a79ce8(uVar4,*(undefined8 *)(pNVar5 + 0x78));
      if (lVar8 != 0) {
        do {
          psVar9 = (string *)FUN_03a79cf4(uVar4,uVar14);
          pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
          cVar3 = ProfileUtils::IsWorldUnlocked(psVar9,pPVar10);
          if (cVar3 != '\0') {
            psVar9 = (string *)FUN_03a79cf4(*(undefined8 *)(pNVar5 + 0x70),uVar14);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)local_20,psVar9);
          }
          uVar14 = uVar14 + 1;
          uVar4 = *(undefined8 *)(pNVar5 + 0x70);
          uVar11 = FUN_03a79ce8(uVar4,*(undefined8 *)(pNVar5 + 0x78));
        } while (uVar14 < uVar11);
      }
      cVar3 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)local_20);
      if (cVar3 == '\0') {
        local_30 = FUN_05473038();
        local_28 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        uVar14 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_20);
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
        std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>::
        linear_congruential_engine
                  ((linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul> *)&local_28,
                   uVar14 & 0xffffffff);
        std::
        shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::linear_congruential_engine<unsigned_long,16807ul,0ul,2147483647ul>>
                  (uVar4,uVar12,(exception_ptr *)&local_28);
        uVar4 = FUN_03a79cf4(local_20[0],0);
        FUN_05475d88(asStack_48,uVar4);
        FUN_03a79cf4(local_20[0],0);
        uVar4 = FUN_0547429c();
        Sexy::OutputDebugStrF((wchar_t *)"jumpList %s",uVar4);
        Set8BytesTo0(asStack_40);
        lVar8 = LawnApp::GetWorldMap(gLawnApp);
        if ((lVar8 != 0) && (lVar8 = FUN_03a79c90(*(undefined8 *)(lVar8 + 0x2f0)), lVar8 != 0)) {
          thunk_FUN_05475e00(asStack_40,lVar8 + 0x38);
        }
        bVar2 = std::operator!=(asStack_40,asStack_48);
        if (bVar2) {
          PlayerInfo::SetLastWorldName(psVar7);
          lVar8 = LawnApp::GetWorldMap(gLawnApp);
          pUVar13 = (UniverseMap *)FUN_03a79c94(*(undefined8 *)(lVar8 + 0x2b0));
          UniverseMap::TransitionToUniverse(pUVar13,false);
          lVar8 = LawnApp::GetWorldMap(gLawnApp);
          pUVar13 = (UniverseMap *)FUN_03a79c94(*(undefined8 *)(lVar8 + 0x2b0));
          FUN_05475d88((exception_ptr *)&local_28,asStack_48);
          UniverseMap::TransToWorldByName(pUVar13,(exception_ptr *)&local_28);
          std::string::~string((string *)&local_28);
          lVar8 = LawnApp::GetWorldMap(gLawnApp);
          pUVar13 = (UniverseMap *)FUN_03a79c94(*(undefined8 *)(lVar8 + 0x2b0));
          UniverseMap::ShowWorlds(pUVar13);
          std::operator+(asStack_48,"_level_");
          std::to_string<ActivityTypeID>((ActivityTypeID *)(pNVar5 + 0x88));
          std::operator+(asStack_38,(string *)&local_30);
          FUN_05474278(this + 0x18,(exception_ptr *)&local_28);
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_30);
          std::string::~string(asStack_38);
          std::to_string<ActivityTypeID>((ActivityTypeID *)(pNVar5 + 0x88));
          std::operator+(asStack_48,(string *)&local_30);
          FUN_05474278(this + 0x20,(exception_ptr *)&local_28);
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_30);
          if ((*(int *)(pNVar5 + 0x88) == 0x19) &&
             (lVar8 = WorldMapUtils::FindZombossNodeInWorld(asStack_48), lVar8 != 0)) {
            thunk_FUN_05475e00(this + 0x18,lVar8 + 0x20);
          }
        }
        else {
          pAVar1 = (ActivityTypeID *)(pNVar5 + 0x88);
          std::operator+(asStack_48,"_level_");
          std::to_string<ActivityTypeID>(pAVar1);
          std::operator+((string *)&local_30,(string *)&local_28);
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_30);
          if ((*(int *)(pNVar5 + 0x88) == 0x19) &&
             (lVar8 = WorldMapUtils::FindZombossNodeInWorld(asStack_48), lVar8 != 0)) {
            thunk_FUN_05475e00(asStack_38,lVar8 + 0x20);
          }
          this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
          WorldMap::CenterOnMapEvent(this_01,asStack_38,false);
          pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
          std::to_string<ActivityTypeID>(pAVar1);
          std::operator+(asStack_48,(string *)&local_30);
          cVar3 = PlayerInfo::GetLevelCompleted(pPVar10,(string *)&local_28);
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_30);
          if (cVar3 != '\0') {
            uVar4 = LawnApp::GetWorldMap(gLawnApp);
            std::to_string<ActivityTypeID>(pAVar1);
            std::operator+(asStack_48,(string *)&local_30);
            UISelectHardLevelModeWidget::create(uVar4,(exception_ptr *)&local_28,0);
            std::string::~string((string *)&local_28);
            std::string::~string((string *)&local_30);
          }
          std::string::~string(asStack_38);
        }
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)local_20);
        uVar4 = 1;
        goto LAB_03aa0114;
      }
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_20);
    }
  }
  uVar4 = 0;
LAB_03aa0114:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

