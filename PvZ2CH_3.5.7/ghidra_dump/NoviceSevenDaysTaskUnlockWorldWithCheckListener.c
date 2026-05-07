// Class: NoviceSevenDaysTaskUnlockWorldWithCheckListener


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::~NoviceSevenDaysTaskUnlockWorldWithCheckListener()
    */

void __thiscall
NoviceSevenDaysTaskUnlockWorldWithCheckListener::~NoviceSevenDaysTaskUnlockWorldWithCheckListener
          (NoviceSevenDaysTaskUnlockWorldWithCheckListener *this)

{
  *(undefined ***)this = &PTR_GetClass_0670f5f0;
  GeneralTaskListener::RemoveListener((GeneralTaskListener *)this);
  GeneralTaskListener::~GeneralTaskListener((GeneralTaskListener *)this);
  return;
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::~NoviceSevenDaysTaskUnlockWorldWithCheckListener()
    */

void __thiscall
NoviceSevenDaysTaskUnlockWorldWithCheckListener::~NoviceSevenDaysTaskUnlockWorldWithCheckListener
          (NoviceSevenDaysTaskUnlockWorldWithCheckListener *this)

{
  ~NoviceSevenDaysTaskUnlockWorldWithCheckListener(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::NoviceSevenDaysTaskUnlockWorldWithCheckListener()
    */

void __thiscall
NoviceSevenDaysTaskUnlockWorldWithCheckListener::NoviceSevenDaysTaskUnlockWorldWithCheckListener
          (NoviceSevenDaysTaskUnlockWorldWithCheckListener *this)

{
  GeneralTaskListener::GeneralTaskListener((GeneralTaskListener *)this);
  *(undefined ***)this = &PTR_GetClass_0670f5f0;
  return;
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticNew() */

NoviceSevenDaysTaskUnlockWorldWithCheckListener *
NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticNew(void)

{
  NoviceSevenDaysTaskUnlockWorldWithCheckListener *this;
  
  this = ::operator_new(0x18);
  NoviceSevenDaysTaskUnlockWorldWithCheckListener(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticClassInit() */

void NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysTaskUnlockWorldWithCheckListener");
    (*pcVar2)(plVar1,asStack_10,FUN_03a883c4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticGetClass() */

long * NoviceSevenDaysTaskUnlockWorldWithCheckListener::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskUnlockWorldWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::GetClass() const */

long * NoviceSevenDaysTaskUnlockWorldWithCheckListener::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysTaskUnlockWorldWithCheckListener",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::JumpToTargetTask() */

void NoviceSevenDaysTaskUnlockWorldWithCheckListener::JumpToTargetTask(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  long lVar3;
  UniverseMap *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"egypt15");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = ProfileUtils::HasCompletedLevel(asStack_10,false,pPVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    this_00 = (UniverseMap *)FUN_03a79c94(*(undefined8 *)(lVar3 + 0x2b0));
    UniverseMap::TransitionToUniverse(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::OnPurchaseWorld(MapEventItem const*) */

void NoviceSevenDaysTaskUnlockWorldWithCheckListener::OnPurchaseWorld(MapEventItem *param_1)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  ProfileMgr *pPVar4;
  RtObject *this;
  NoviceSevenDaysTaskWorldLevelData *pNVar5;
  string *psVar6;
  PlayerInfo *pPVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar4);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(param_1 + 0x10) + 0x20));
  if (bVar2) {
    iVar11 = 0;
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(param_1 + 0x10) + 0x20));
    pNVar5 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this);
    uVar9 = 0;
    if (pNVar5 != (NoviceSevenDaysTaskWorldLevelData *)0x0) {
      while( true ) {
        uVar10 = *(undefined8 *)(pNVar5 + 0x70);
        uVar8 = FUN_03a79ce8(uVar10,*(undefined8 *)(pNVar5 + 0x78));
        uVar1 = uVar9 + 1;
        if (uVar8 <= uVar9) break;
        psVar6 = (string *)FUN_03a79cf4(uVar10,uVar9);
        pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
        cVar3 = ProfileUtils::IsWorldUnlocked(psVar6,pPVar7);
        uVar9 = uVar1;
        if (cVar3 != '\0') {
          iVar11 = iVar11 + 1;
        }
      }
      (**(code **)(*(long *)param_1 + 0x60))(param_1,iVar11);
      return;
    }
  }
  return;
}


/* NoviceSevenDaysTaskUnlockWorldWithCheckListener::RegisterListener(GeneralTask*) */

void __thiscall
NoviceSevenDaysTaskUnlockWorldWithCheckListener::RegisterListener
          (NoviceSevenDaysTaskUnlockWorldWithCheckListener *this,GeneralTask *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  ProfileMgr *pPVar5;
  RtObject *this_00;
  NoviceSevenDaysTaskWorldLevelData *pNVar6;
  string *psVar7;
  PlayerInfo *pPVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Mesh::SetListener((Mesh *)this,(MeshListener *)param_1);
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar5);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x20));
  if (bVar3) {
    iVar12 = 0;
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20));
    pNVar6 = Sexy::RtObject::Cast<NoviceSevenDaysTaskWorldLevelData>(this_00);
    uVar10 = 0;
    if (pNVar6 != (NoviceSevenDaysTaskWorldLevelData *)0x0) {
      while( true ) {
        uVar11 = *(undefined8 *)(pNVar6 + 0x70);
        uVar9 = FUN_03a79ce8(uVar11,*(undefined8 *)(pNVar6 + 0x78));
        puVar2 = gMessageRouter;
        uVar1 = uVar10 + 1;
        if (uVar9 <= uVar10) break;
        psVar7 = (string *)FUN_03a79cf4(uVar11,uVar10);
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        cVar4 = ProfileUtils::IsWorldUnlocked(psVar7,pPVar8);
        uVar10 = uVar1;
        if (cVar4 != '\0') {
          iVar12 = iVar12 + 1;
        }
      }
      if (*(int *)(pNVar6 + 0x28) <= iVar12) {
        (**(code **)(*(long *)this + 0x60))(this,iVar12);
        return;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnPurchaseWorld);
      local_30 = local_8;
      local_40 = local_18;
      uStack_38 = uStack_10;
      MessageRouter::
      Subscribe<MapEventItem_const*,Sexy::CBMemberTranslatorX<NoviceSevenDaysTaskUnlockWorldWithCheckListener,void(NoviceSevenDaysTaskUnlockWorldWithCheckListener::*)(MapEventItem_const*)>>
                ((MessageRouter *)puVar2,Message::PurchaseWorld,&local_40);
      this[8] = (NoviceSevenDaysTaskUnlockWorldWithCheckListener)0x1;
      return;
    }
  }
  return;
}

