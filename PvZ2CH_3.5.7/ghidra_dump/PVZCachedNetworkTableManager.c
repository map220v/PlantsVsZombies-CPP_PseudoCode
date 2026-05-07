// Class: PVZCachedNetworkTableManager


/* PVZCachedNetworkTableManager::PVZCachedNetworkTableManager() */

void __thiscall
PVZCachedNetworkTableManager::PVZCachedNetworkTableManager(PVZCachedNetworkTableManager *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  std::vector<WatchInfo,std::allocator<WatchInfo>>::clear
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)this);
  return;
}


/* PVZCachedNetworkTableManager::~PVZCachedNetworkTableManager() */

void __thiscall
PVZCachedNetworkTableManager::~PVZCachedNetworkTableManager(PVZCachedNetworkTableManager *this)

{
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::~vector
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x18));
  std::vector<WatchInfo,std::allocator<WatchInfo>>::~vector
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)this);
  return;
}


/* PVZCachedNetworkTableManager::NetworkRequestsCompleted() */

bool __thiscall
PVZCachedNetworkTableManager::NetworkRequestsCompleted(PVZCachedNetworkTableManager *this)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"DailyRewardConfig, NetworkRequestsCompleted m_completedRequests : %d",
             (ulong)*(uint *)(this + 0x48));
  return *(int *)(this + 0x48) == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCachedNetworkTableManager::Watch(std::string const&, PVZDB::TableIndex, bool, bool) */

void __thiscall
PVZCachedNetworkTableManager::Watch
          (PVZCachedNetworkTableManager *this,undefined8 param_1,undefined4 param_3,
          undefined1 param_4,undefined1 param_5)

{
  PakFileDesc aPStack_18 [8];
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PakFileDesc::PakFileDesc(aPStack_18);
  thunk_FUN_05475e00(aPStack_18,param_1);
  local_a = 0;
  local_10 = param_3;
  local_c = param_4;
  local_b = param_5;
  std::vector<WatchInfo,std::allocator<WatchInfo>>::push_back
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)this,(WatchInfo *)aPStack_18);
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCachedNetworkTableManager::onRequestFinished(int, std::string const&) */

void __thiscall
PVZCachedNetworkTableManager::onRequestFinished
          (PVZCachedNetworkTableManager *this,int param_1,string *param_2)

{
  long lVar1;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = param_1;
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::push_back
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x18),
             (TableIndex *)&local_c);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),param_2);
  Sexy::OutputDebugStrF((wchar_t *)"DailyRewardConfig, onRequestFinished : %d",(ulong)(uint)param_1)
  ;
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCachedNetworkTableManager::getLocalPathForTable(PVZDB::TableIndex) */

void PVZCachedNetworkTableManager::getLocalPathForTable
               (string *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar4 = *param_2;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_043ce594(uVar4,param_2[1]);
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      std::string::string(param_1,"");
      nop();
      goto LAB_043cf1d8;
    }
    lVar2 = FUN_043ce5a0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 8) != param_3);
  GetFolder(asStack_18,3);
  if (*(char *)(lVar2 + 0xc) == '\0') {
    FUN_05475d88(asStack_10,lVar2);
  }
  else {
    FUN_043cf0a4(asStack_10,lVar2);
  }
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
LAB_043cf1d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCachedNetworkTableManager::ApplyChanges() */

void __thiscall PVZCachedNetworkTableManager::ApplyChanges(PVZCachedNetworkTableManager *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  string *psVar10;
  PVZDB *pPVar11;
  int *piVar12;
  ObjectTypeDirectory<ZombieType> *pOVar13;
  RtId *pRVar14;
  RtObject *this_00;
  GamePropertySheet *pGVar15;
  ObjectTypeDirectory<PlantType> *pOVar16;
  long lVar17;
  long lVar18;
  ProfileMgr *pPVar19;
  long lVar20;
  ObjectTypeDirectory<PresentType> *pOVar21;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  ulong uVar22;
  RtId aRStack_48 [8];
  tm local_40;
  long local_8;
  
  uVar22 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = FUN_043ce5a8(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  bVar1 = false;
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "DailyRewardConfig, PVZCachedNetworkTableManager::ApplyChanges, m_indicesToApply.size() : %d"
             ,uVar7);
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x18);
    uVar8 = FUN_043ce5a8(uVar7,*(undefined8 *)(this + 0x20));
    if (uVar8 <= uVar22) break;
    puVar9 = (undefined4 *)FUN_043ce5b4(uVar7,uVar22);
    getLocalPathForTable(&local_40,this,*puVar9);
    psVar10 = (string *)FUN_043ce5bc(*(undefined8 *)(this + 0x30),uVar22);
    bVar2 = std::operator!=(psVar10,"");
    if (bVar2) {
      pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      puVar9 = (undefined4 *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
      uVar7 = FUN_043ce5bc(*(undefined8 *)(this + 0x30),uVar22);
      cVar3 = PVZDB::LoadPackageForTableFromJson(pPVar11,*puVar9,uVar7,0);
      if (cVar3 == '\0') goto LAB_043cf2d8;
      piVar12 = (int *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
      if (*piVar12 == 0x1a) {
        FUN_043ce5bc(*(undefined8 *)(this + 0x30),uVar22);
        uVar7 = FUN_0547429c();
        Sexy::OutputDebugStrF((wchar_t *)"Magento, get config json : %s",uVar7);
        Magento::InitMagentoDataSign();
      }
      else if (*piVar12 == 0x3c) {
        bVar1 = true;
      }
      Sexy::SexyAppBase::EraseFile(Sexy::gSexyAppBase);
      pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      puVar9 = (undefined4 *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
      uVar7 = FUN_043ce5bc(*(undefined8 *)(this + 0x30),uVar22);
      cVar3 = PVZDB::SavePackageFromNetJsonStringToFile(pPVar11,*puVar9,uVar7,&local_40,0,1);
      if (cVar3 == '\0') {
        Sexy::OutputDebugStrF((wchar_t *)"DailyRewardConfig, save json error");
      }
      piVar12 = (int *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
      if (*piVar12 == 0x4b) {
        bVar4 = Sexy::SexyAppBase::FileExists(gLawnApp,(string *)&local_40);
        Sexy::OutputDebugStrF((wchar_t *)"DailyRewardConfig, drc9 is existed : %d",(ulong)bVar4);
      }
    }
    else {
LAB_043cf2d8:
      cVar3 = Sexy::SexyAppBase::FileExists(gLawnApp,(string *)&local_40);
      if (cVar3 == '\0') {
        piVar12 = (int *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
        iVar5 = *piVar12;
      }
      else {
        pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        puVar9 = (undefined4 *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
        PVZDB::LoadPackageForTableFromFile(pPVar11,*puVar9,&local_40,0,1);
        piVar12 = (int *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
        iVar5 = *piVar12;
        if (iVar5 == 0x1a) {
          Magento::InitMagentoDataSign();
          piVar12 = (int *)FUN_043ce5b4(*(undefined8 *)(this + 0x18),uVar22);
          iVar5 = *piVar12;
        }
        else if (iVar5 == 0x3c) {
          bVar1 = true;
          goto LAB_043cf30c;
        }
      }
      if (iVar5 == 0x4b) {
        psVar10 = (string *)FUN_043ce5bc(*(undefined8 *)(this + 0x30),uVar22);
        bVar2 = std::operator==(psVar10,"");
        if (bVar2) {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"DailyRewardConfig, drc9 load from server failed : empty json");
        }
        else {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"DailyRewardConfig, drc9 load from server failed : parse failed");
        }
      }
    }
LAB_043cf30c:
    uVar22 = uVar22 + 1;
    std::string::~string((string *)&local_40);
  }
  if (bVar1) {
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_02);
    PurchaseBroker::ResetPurchaseAdapter(this_03);
  }
  cVar3 = NetworkRequestsCompleted(this);
  if (cVar3 != '\0') {
    uVar7 = *(undefined8 *)(this + 0x18);
    uVar22 = 0;
    uVar8 = FUN_043ce5a8(uVar7,*(undefined8 *)(this + 0x20));
    if (uVar8 != 0) {
      do {
        piVar12 = (int *)FUN_043ce5b4(uVar7,uVar22);
        iVar5 = *piVar12;
        if (iVar5 == 0x11) {
          pOVar21 = (ObjectTypeDirectory<PresentType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
          ObjectTypeDirectory<PresentType>::Clear(pOVar21);
          pOVar21 = (ObjectTypeDirectory<PresentType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
          ObjectTypeDirectory<PresentType>::Init(pOVar21,0x11);
LAB_043cf4f8:
          uVar7 = *(undefined8 *)(this + 0x18);
          uVar8 = FUN_043ce5a8(uVar7,*(undefined8 *)(this + 0x20));
        }
        else {
          if (0x11 < iVar5) {
            if (iVar5 == 0x3e) {
              pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
              PlayerInfo::forceRefreshYetiCount(this_01);
            }
            else {
              if (iVar5 != 0x4b) goto LAB_043cf50c;
              local_40.tm_sec = 0;
              local_40.tm_min = 0;
              local_40.tm_hour = 0;
              local_40.tm_mday = 0;
              local_40.tm_mon = 0;
              local_40.tm_year = 0;
              local_40.tm_wday = 0;
              local_40.tm_yday = 0;
              local_40.tm_isdst = 0;
              local_40._36_4_ = 0;
              local_40.tm_gmtoff = 0;
              local_40.tm_zone = (char *)0x0;
              lVar17 = LawnApp::GetDailyRewardConfig((LawnApp *)gLawnApp);
              iVar5 = FUN_043ce588(*(undefined4 *)(lVar17 + 0xc));
              local_40.tm_year = iVar5 + -0x76c;
              lVar17 = LawnApp::GetDailyRewardConfig((LawnApp *)gLawnApp);
              iVar5 = FUN_043ce58c(*(undefined4 *)(lVar17 + 0x10));
              local_40.tm_mon = iVar5 + -1;
              lVar17 = LawnApp::GetDailyRewardConfig((LawnApp *)gLawnApp);
              uVar6 = FUN_043ce590(*(undefined4 *)(lVar17 + 0x14));
              local_40._8_8_ = (ulong)uVar6 << 0x20;
              local_40.tm_sec = 0;
              local_40.tm_min = 0;
              lVar17 = Sexy::GetTimegm(&local_40);
              lVar18 = Sexy::GetBJTimeOffset();
              pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              lVar20 = ProfileMgr::GetCurrentProfile(pPVar19);
              FUN_043ce580(lVar20 + 0xa78,lVar17 - lVar18);
            }
            goto LAB_043cf4f8;
          }
          if (iVar5 == 6) {
            pOVar16 = (ObjectTypeDirectory<PlantType> *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::Clear(pOVar16);
            pOVar16 = (ObjectTypeDirectory<PlantType> *)
                      Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
            ObjectTypeDirectory<PlantType>::Init(pOVar16,6);
            goto LAB_043cf4f8;
          }
          if (iVar5 == 9) {
            pOVar13 = (ObjectTypeDirectory<ZombieType> *)
                      Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
            ObjectTypeDirectory<ZombieType>::Clear(pOVar13);
            pOVar13 = (ObjectTypeDirectory<ZombieType> *)
                      Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
            ObjectTypeDirectory<ZombieType>::Init(pOVar13,9);
            goto LAB_043cf4f8;
          }
        }
LAB_043cf50c:
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar8);
    }
    uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName((RtName *)&local_40,L"DefaultGameProps");
    PVZDB::GetIdByAlias(aRStack_48,uVar7,5,&local_40);
    Sexy::RtName::~RtName((RtName *)&local_40);
    pRVar14 = (RtId *)Sexy::RtDb::GetDb();
    this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar14);
    pGVar15 = Sexy::RtObject::Cast<GamePropertySheet>(this_00);
    pOVar16 = (ObjectTypeDirectory<PlantType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::SortTypes(pOVar16,(vector *)(pGVar15 + 0x10));
    std::vector<WatchInfo,std::allocator<WatchInfo>>::clear
              ((vector<WatchInfo,std::allocator<WatchInfo>> *)this);
    Sexy::RtId::~RtId(aRStack_48);
  }
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::clear
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCachedNetworkTableManager::CheckForUpdates(int) */

void __thiscall
PVZCachedNetworkTableManager::CheckForUpdates(PVZCachedNetworkTableManager *this,int param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<int,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRequestFinished);
  Sexy::Delegate2<int,std::string_const&>::
  Delegate2<PVZCachedNetworkTableManager,void(PVZCachedNetworkTableManager::*)(int,std::string_const&)>
            (aDStack_38,aCStack_50);
  FUN_043cfab0(this,aDStack_38,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCachedNetworkTableManager::TEMPNAMEPLACEHOLDERVALUE(PVZCachedNetworkTableManager const&) */

PVZCachedNetworkTableManager * __thiscall
PVZCachedNetworkTableManager::operator=
          (PVZCachedNetworkTableManager *this,PVZCachedNetworkTableManager *param_1)

{
  std::vector<WatchInfo,std::allocator<WatchInfo>>::operator=
            ((vector<WatchInfo,std::allocator<WatchInfo>> *)this,(vector *)param_1);
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::operator=
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}

