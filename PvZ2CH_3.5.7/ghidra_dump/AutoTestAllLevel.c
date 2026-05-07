// Class: AutoTestAllLevel


/* AutoTestAllLevel::AutoTestZombieCloseToHouse(Zombie*) */

void AutoTestAllLevel::AutoTestZombieCloseToHouse(Zombie *param_1)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::AutoTestPLantDie(Plant*) */

void AutoTestAllLevel::AutoTestPLantDie(Plant *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  Board *this;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = *(Board **)(gLawnApp + 0x9f0);
  if (this != (Board *)0x0) {
    cVar1 = FUN_0547419c((string *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      iVar4 = 0;
      while( true ) {
        iVar3 = 0;
        while( true ) {
          std::string::string(asStack_10,"");
          lVar2 = Board::GetPlantAt(this,iVar4,iVar3,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (lVar2 == 0) {
            Board::TestSpawnPlant
                      (*(Board **)(gLawnApp + 0x9f0),(string *)(param_1 + 0x58),iVar4,iVar3);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 5) break;
          this = *(Board **)(gLawnApp + 0x9f0);
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 5) break;
        this = *(Board **)(gLawnApp + 0x9f0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestAllLevel::SkipSeedChooser() */

void AutoTestAllLevel::SkipSeedChooser(void)

{
  SeedChooser *this;
  
  this = (SeedChooser *)Board::GetSeedChooser(*(Board **)(gLawnApp + 0x9f0));
  SeedChooser::AutoSelectSeedsAndFinalize(this);
  return;
}


/* AutoTestAllLevel::AutoConfirmOver() */

void AutoTestAllLevel::AutoConfirmOver(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* AutoTestAllLevel::AutoTestSkyCityDamage(float) */

void AutoTestAllLevel::AutoTestSkyCityDamage(float param_1)

{
  if ((param_1 < 90.0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* AutoTestAllLevel::ConfirmStartMiniGame() */

void AutoTestAllLevel::ConfirmStartMiniGame(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* AutoTestAllLevel::AutoFinishWinLevel() */

void AutoTestAllLevel::AutoFinishWinLevel(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* AutoTestAllLevel::AutoFinishLoseLevel() */

void AutoTestAllLevel::AutoFinishLoseLevel(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* AutoTestAllLevel::StaticGetClass() */

long * AutoTestAllLevel::StaticGetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestAllLevel",uVar2,StaticNew);
  return sClass;
}


/* AutoTestAllLevel::GetClass() const */

long * AutoTestAllLevel::GetClass(void)

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
  uVar2 = AutoTest::StaticGetClass();
  (*pcVar3)(plVar1,"AutoTestAllLevel",uVar2,StaticNew);
  return sClass;
}


/* AutoTestAllLevel::ForceFinishLevel() */

void AutoTestAllLevel::ForceFinishLevel(void)

{
  LawnApp *this;
  int iVar1;
  CrazyNPCManager *this_00;
  long lVar2;
  
  Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  this = gLawnApp;
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  iVar1 = FUN_043dae0c(*(undefined4 *)(lVar2 + 0x104));
  if (1 < iVar1 - 4U) {
    Sexy::OutputDebugStrF((wchar_t *)"*** Can\'t complete level until actual gameplay state!\n");
    return;
  }
  *(undefined4 *)(lVar2 + 0x104) = 10;
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(this);
  CrazyNPCManager::ForceEndNarrative(this_00);
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* AutoTestAllLevel::SkipPooyan() */

void AutoTestAllLevel::SkipPooyan(void)

{
  LevelModuleManager *this;
  PooyanModule *pPVar1;
  long *plVar2;
  
  this = (LevelModuleManager *)FUN_043dae08(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pPVar1 = LevelModuleManager::GetModuleByClass<PooyanModule>(this);
  if ((pPVar1 != (PooyanModule *)0x0) &&
     (plVar2 = (long *)FUN_043dae20(*(undefined8 *)(pPVar1 + 0x50)), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x318))(plVar2,7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::StartCurrentLevel(std::string) */

void __thiscall AutoTestAllLevel::StartCurrentLevel(AutoTestAllLevel *this,string *param_2)

{
  int iVar1;
  bool bVar2;
  WorldDataManager *this_00;
  long lVar3;
  undefined8 uVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar3 = WorldDataManager::FindEventByLevelName(this_00,param_2);
  if (lVar3 != 0) {
    bVar2 = std::operator!=("kongfu13",param_2);
    if (bVar2) {
      uVar4 = FUN_0547429c(param_2);
      Sexy::StrFormat("[AutoTest-- AllLevel: %s Level]",asStack_18,uVar4);
      Sexy::LazySingleton<DebugLog>::GetInstancePtr();
      std::string::string(asStack_10,"PvZ2Debug");
      nop();
      std::string::~string(asStack_10);
      nop();
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05538,param_2,0xffffffff,1,1,0);
      thunk_FUN_05475e00(this + 0x60,param_2);
      std::string::~string(asStack_18);
    }
    else {
      iVar1 = *(int *)(this + 0x54);
      *(int *)(this + 0x54) = iVar1 + 1;
      uVar4 = FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)(iVar1 + 1));
      thunk_FUN_05475e00(param_2,uVar4);
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05538,param_2,0xffffffff,1,1,0);
      thunk_FUN_05475e00(this + 0x60,param_2);
      uVar4 = FUN_0547429c(param_2);
      Sexy::StrFormat("[AutoTest-- AllLevel: %s Level]",asStack_18,uVar4);
      Sexy::LazySingleton<DebugLog>::GetInstancePtr();
      std::string::string(asStack_10,"PvZ2Debug");
      nop();
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestAllLevel::AutoTestAllLevel() */

void __thiscall AutoTestAllLevel::AutoTestAllLevel(AutoTestAllLevel *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  AutoTest::AutoTest((AutoTest *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_068472c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0(this + 0x60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ChangeStartLevel);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::changeAutoTestStartLevel,&local_40);
  return;
}


/* AutoTestAllLevel::StaticNew() */

AutoTestAllLevel * AutoTestAllLevel::StaticNew(void)

{
  AutoTestAllLevel *this;
  
  this = ::operator_new(0x80);
  AutoTestAllLevel(this);
  return this;
}


/* AutoTestAllLevel::~AutoTestAllLevel() */

void __thiscall AutoTestAllLevel::~AutoTestAllLevel(AutoTestAllLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_068472c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  AutoTest::~AutoTest((AutoTest *)this);
  return;
}


/* AutoTestAllLevel::~AutoTestAllLevel() */

void __thiscall AutoTestAllLevel::~AutoTestAllLevel(AutoTestAllLevel *this)

{
  ~AutoTestAllLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::AutoTestInitPlantPlace(std::string) */

void AutoTestAllLevel::AutoTestInitPlantPlace(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  UINewPVPTopZombieQueue *this;
  PlantType *this_00;
  int *piVar8;
  RtWeakPtr<PowerPropertySheet> *pRVar9;
  string *psVar10;
  RtWeakPtr *this_01;
  ulong uVar11;
  RtWeakPtrBase *pRVar12;
  size_t __n;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int local_44;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    lVar7 = FUN_043dd050(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((lVar7 == 0) &&
       (lVar7 = FUN_043dd05c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar7 == 0)) {
      lVar7 = FUN_043dd068(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      bVar2 = lVar7 != 0;
    }
    else {
      bVar2 = true;
    }
    this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
    if (this != (UINewPVPTopZombieQueue *)0x0) {
      iVar3 = FUN_043dae1c(*(undefined4 *)(this + 0x19c));
      if (iVar3 == 1) {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x68));
        while( true ) {
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_1 + 0x68));
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
          if (!bVar2) break;
          psVar10 = (string *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
          cVar1 = std::operator==(psVar10,(string *)(param_1 + 0x60));
          if (cVar1 != '\0') goto LAB_043df068;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
        }
      }
      else if ((iVar3 == 0) && (!bVar2)) {
LAB_043df068:
        psVar10 = (string *)(param_1 + 0x58);
        Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),12000);
        __n = *(size_t *)(gLawnApp + 0x9f0);
        *(undefined1 *)(__n + 0x972) = 1;
        std::string::append(psVar10,"",__n);
        cVar1 = FUN_043dae18(this[0x199]);
        iVar3 = (int)cVar1;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28);
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        vector((ulong)&local_20,(RtWeakPtr *)(long)(iVar3 * 10),(allocator *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        if (0 < iVar3) {
          iVar13 = 0;
          iVar4 = 0;
          local_44 = 0;
          iVar5 = 0;
          iVar16 = iVar5;
          iVar18 = iVar5;
          iVar17 = iVar5;
          do {
            UINewPVPTopZombieQueue::gettItem(this,iVar13);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            SeedPacket::GetPlantType();
            cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
            if (cVar1 == '\0') {
              ForceFinishLevel();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
              goto LAB_043df498;
            }
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            FUN_05475d88((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_28
                         ,lVar7 + 8);
            this_00 = (PlantType *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            lVar7 = PlantType::GetProps(this_00);
            uVar15 = *(undefined8 *)(lVar7 + 0x70);
            iVar6 = FUN_043dae70(uVar15,*(undefined8 *)(lVar7 + 0x78));
            if (iVar6 != 0) {
              piVar8 = (int *)FUN_043daf18(uVar15);
              iVar6 = *piVar8;
              if (iVar6 == 2) {
                lVar7 = (long)iVar4;
                iVar4 = iVar4 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,lVar7);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
              else if (iVar6 == 4) {
                iVar6 = iVar3 + iVar18;
                iVar18 = iVar18 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,(long)iVar6);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
              else if (iVar6 == 0) {
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                thunk_FUN_05475e00(psVar10,lVar7 + 8);
                iVar6 = iVar3 * 2 + iVar17;
                iVar17 = iVar17 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,(long)iVar6);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
              else if (iVar6 == 3) {
                iVar6 = local_44 + iVar3 * 3;
                local_44 = local_44 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,(long)iVar6);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
              else if (iVar6 == 1) {
                iVar6 = iVar3 * 4 + iVar5;
                iVar5 = iVar5 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,(long)iVar6);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
              else {
                iVar6 = iVar3 * 5 + iVar16;
                iVar16 = iVar16 + 1;
                pRVar9 = (RtWeakPtr<PowerPropertySheet> *)FUN_043dae84(local_20,(long)iVar6);
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar9,aRStack_30);
              }
            }
            iVar13 = iVar13 + 1;
            std::string::~string((string *)&local_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          } while (iVar3 != iVar13);
        }
        uVar15 = local_20;
        uVar14 = 0;
        iVar3 = 0;
        lVar7 = FUN_043dae8c(local_20,local_18);
        iVar16 = 0;
        if (lVar7 != 0) {
          do {
            this_01 = (RtWeakPtr *)FUN_043dae84(uVar15,uVar14);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
            iVar3 = iVar16;
            if (bVar2) {
              pRVar12 = (RtWeakPtrBase *)FUN_043dae84(local_20,uVar14);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar12);
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
              FUN_05475d88((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_28,lVar7 + 8);
              if (3 < iVar16) {
                std::string::~string((string *)&local_28);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                goto LAB_043df498;
              }
              cVar1 = FUN_0547419c(psVar10);
              if (cVar1 != '\0') {
                thunk_FUN_05475e00(psVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                            *)&local_28);
              }
              iVar3 = 0;
              do {
                iVar13 = iVar3 + 1;
                Board::TestSpawnPlant
                          (*(Board **)(gLawnApp + 0x9f0),(string *)&local_28,iVar16,iVar3);
                iVar3 = iVar13;
              } while (iVar13 != 5);
              std::string::~string((string *)&local_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
              iVar3 = iVar16 + 1;
            }
            uVar15 = local_20;
            uVar14 = uVar14 + 1;
            uVar11 = FUN_043dae8c(local_20,local_18);
            iVar16 = iVar3;
          } while (uVar14 < uVar11);
        }
        if ((iVar3 < 4) && (cVar1 = FUN_0547419c(psVar10), cVar1 == '\0')) {
          do {
            iVar16 = 0;
            do {
              iVar13 = iVar16 + 1;
              Board::TestSpawnPlant(*(Board **)(gLawnApp + 0x9f0),psVar10,iVar3,iVar16);
              iVar16 = iVar13;
            } while (iVar13 != 5);
            iVar3 = iVar3 + 1;
          } while (iVar3 != 5);
        }
LAB_043df498:
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                 *)&local_20);
        goto LAB_043df018;
      }
    }
    ForceFinishLevel();
  }
LAB_043df018:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::AutoStartLevelFight() */

void __thiscall AutoTestAllLevel::AutoStartLevelFight(AutoTestAllLevel *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"test");
  AutoTestInitPlantPlace(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::RefreshNewLevelList(std::vector<std::string, std::allocator<std::string > >&)
    */

void __thiscall AutoTestAllLevel::RefreshNewLevelList(AutoTestAllLevel *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  string *psVar5;
  undefined8 uVar6;
  FilesystemSaveGameContext *this_00;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  uVar6 = *(undefined8 *)(this + 0x38);
  iVar2 = *(int *)(this + 0x50);
  uVar3 = FUN_043dae64(uVar6,*(undefined8 *)(this + 0x40));
  if ((ulong)(long)iVar2 < uVar3) {
    uVar6 = FUN_043dae5c(uVar6,(long)iVar2);
    FUN_05475d88(asStack_38,uVar6);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    WorldMapUtils::GetOrderedMainSpinePath(asStack_38,(vector *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = (FilesystemSaveGameContext *)*puVar4;
      iVar2 = FUN_043dae00(*(undefined4 *)(this_00 + 0x14));
      if (iVar2 == 1) {
        psVar5 = (string *)Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)param_1,psVar5);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)avStack_20);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::AutoStartFirstLevel() */

void __thiscall AutoTestAllLevel::AutoStartFirstLevel(AutoTestAllLevel *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x18) == 0) {
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x50) = 1;
    RefreshNewLevelList(this,(vector *)(this + 0x20));
    uVar1 = FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)*(int *)(this + 0x54));
    FUN_05475d88(asStack_10,uVar1);
    StartCurrentLevel(this,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    RefreshNewLevelList(this,(vector *)(this + 0x20));
    uVar1 = FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)*(int *)(this + 0x54));
    FUN_05475d88(asStack_10,uVar1);
    StartCurrentLevel(this,asStack_10);
    std::string::~string(asStack_10);
    *(undefined8 *)(this + 0x18) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestAllLevel::AutoEnterWorld() */

void __thiscall AutoTestAllLevel::AutoEnterWorld(AutoTestAllLevel *this)

{
  long lVar1;
  UniverseMap *this_00;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar1 != 0) &&
      (this_00 = (UniverseMap *)FUN_043dae14(*(undefined8 *)(lVar1 + 0x2b0)),
      this_00 != (UniverseMap *)0x0)) && (*(long *)(this + 0x10) != 0)) {
    lVar1 = FUN_043dae04(*(undefined8 *)(*(long *)(this + 0x10) + 0xe8));
    UniverseMap::enterWorldAction(this_00,*(byte *)(lVar1 + 0x5c) - 1);
  }
  AutoStartFirstLevel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::AutoStartNextLevel() */

void __thiscall AutoTestAllLevel::AutoStartNextLevel(AutoTestAllLevel *this)

{
  int iVar1;
  LawnApp *this_00;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  WorldDataManager *pWVar5;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar6;
  string *psVar7;
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x18) != 0) {
    uVar2 = FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)*(int *)(this + 0x54));
    FUN_05475d88(asStack_50,uVar2);
    StartCurrentLevel(this,asStack_50);
    std::string::~string(asStack_50);
    *(undefined8 *)(this + 0x18) = 0;
    goto LAB_043e0208;
  }
  std::string::string(asStack_60,"");
  nop();
  iVar1 = *(int *)(this + 0x54);
  *(int *)(this + 0x54) = iVar1 + 1;
  uVar3 = FUN_043dae64(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if ((ulong)(long)(iVar1 + 1) < uVar3) {
    pWVar5 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    psVar7 = (string *)FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)*(int *)(this + 0x54));
    lVar4 = WorldDataManager::FindEventByLevelName(pWVar5,psVar7);
    if (lVar4 == 0) goto LAB_043e027c;
  }
  else {
LAB_043e027c:
    iVar1 = *(int *)(this + 0x50);
    lVar4 = FUN_043dae64(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    if ((ulong)(long)iVar1 < lVar4 - 1U) {
      *(undefined4 *)(this + 0x54) = 0;
      *(int *)(this + 0x50) = iVar1 + 1;
      RefreshNewLevelList(this,(vector *)(this + 0x20));
    }
  }
  uVar2 = *(undefined8 *)(this + 0x20);
  iVar1 = *(int *)(this + 0x54);
  uVar3 = FUN_043dae64(uVar2,*(undefined8 *)(this + 0x28));
  if ((ulong)(long)iVar1 < uVar3) {
    uVar2 = FUN_043dae5c(uVar2,(long)iVar1);
    thunk_FUN_05475e00(asStack_60,uVar2);
  }
  pWVar5 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar4 = WorldDataManager::FindEventByLevelName(pWVar5,asStack_60);
  *(long *)(this + 0x10) = lVar4;
  this_00 = gLawnApp;
  if (lVar4 == 0) {
    FUN_05478178(asStack_50,L"PASS--- Auto TestLevel is End!",auStack_58);
    this_01 = (PVZ2UIDialog *)LawnApp::ShowPVZ2DialogOneLine(this_00,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoConfirmOver);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    pPVar6 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)asStack_50,1);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar6,(Color *)asStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    psVar7 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_50,"AutoTestAllLevel");
    CheatManager::SetToggleValue(psVar7,SUB81(asStack_50,0));
    std::string::~string(asStack_50);
    nop();
    *(undefined8 *)(this + 0x10) = 0;
    std::string::~string(asStack_60);
  }
  else {
    FUN_05475d88(asStack_50,asStack_60);
    StartCurrentLevel(this,asStack_50);
    std::string::~string(asStack_50);
    std::string::~string(asStack_60);
  }
LAB_043e0208:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* AutoTestAllLevel::AutoEnterLevel() */

void __thiscall AutoTestAllLevel::AutoEnterLevel(AutoTestAllLevel *this)

{
  long lVar1;
  WorldDataManager *this_00;
  string *psVar2;
  UniverseMap *this_01;
  
  lVar1 = FUN_043dae64(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (lVar1 == 0) {
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x50) = 1;
    RefreshNewLevelList(this,(vector *)(this + 0x20));
  }
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  psVar2 = (string *)FUN_043dae5c(*(undefined8 *)(this + 0x20),(long)*(int *)(this + 0x54));
  lVar1 = WorldDataManager::FindEventByLevelName(this_00,psVar2);
  *(long *)(this + 0x10) = lVar1;
  if (lVar1 != 0) {
    lVar1 = LawnApp::GetWorldMap(gLawnApp);
    this_01 = (UniverseMap *)FUN_043dae14(*(undefined8 *)(lVar1 + 0x2b0));
    UniverseMap::TransitionToUniverse(this_01,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::updateState(bool) */

void __thiscall AutoTestAllLevel::updateState(AutoTestAllLevel *this,bool param_1)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  undefined *puVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  WorldMapList *this_01;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    PVZCheats::CheatSkipAllTutorials();
    psVar3 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_50,"FastMotion");
    this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x68);
    CheatManager::SetToggleValue(psVar3,SUB81((string *)&local_50,0));
    std::string::~string((string *)&local_50);
    nop();
    lVar4 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    FUN_043daf24(lVar4 + 0x30);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoEnterWorld);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UniverseMapReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SkipSeedChooser);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SeedChooserReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SkipPooyan);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PooyanReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartLevelFight);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestStartAllLevel,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishWinLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverWinUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishLoseLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverLoseUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartNextLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestCloseOverUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmStartMiniGame);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::AutoTestConfirmStartMiniGame,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestPLantDie);
    local_e0 = local_b8;
    local_f0 = local_c8;
    uStack_e8 = uStack_c0;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestZombieCloseToHouse);
    local_110 = local_b0;
    uStack_108 = uStack_a8;
    local_100 = local_a0;
    MessageRouter::
    Subscribe<Zombie*,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestSkyCityDamage);
    local_120 = local_88;
    local_130 = local_98;
    uStack_128 = uStack_90;
    MessageRouter::
    Subscribe<float,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(float)>>
              ((MessageRouter *)puVar1,Message::AirshipSetPercentage,&local_130);
    std::vector<std::string,std::allocator<std::string>>::clear(this_00);
    std::string::string((string *)&local_50,"beach7");
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string((string *)&local_50,"dino3");
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string((string *)&local_50,"dino5");
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string((string *)&local_50,"dino8");
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    std::string::string((string *)&local_50,"dino17");
    std::vector<std::string,std::allocator<std::string>>::push_back(this_00,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    lVar4 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar4 != 0) && (lVar4 = FUN_043dae10(*(undefined8 *)(lVar4 + 0x2f0)), lVar4 != 0)) {
      cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                        ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
      if (cVar2 != '\0') {
        this_01 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
        uVar6 = 0;
        while( true ) {
          uVar7 = *(undefined8 *)(this_01 + 8);
          uVar5 = FUN_043dae2c(uVar7,*(undefined8 *)(this_01 + 0x10));
          if (uVar5 <= uVar6) break;
          psVar3 = (string *)FUN_043dae4c(uVar7,uVar6);
          cVar2 = WorldMapList::IsWorldEnabled(this_01,psVar3);
          if (cVar2 == '\0') {
            uVar6 = uVar6 + 1;
          }
          else {
            uVar6 = uVar6 + 1;
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),psVar3);
          }
        }
      }
      AutoEnterLevel(this);
    }
  }
  else {
    psVar3 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_50,"FastMotion");
    CheatManager::SetToggleValue(psVar3,SUB81((string *)&local_50,0));
    std::string::~string((string *)&local_50);
    nop();
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoEnterWorld);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::UniverseMapReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SkipSeedChooser);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::SeedChooserReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,SkipPooyan);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::PooyanReady,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartLevelFight);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestStartAllLevel,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishWinLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverWinUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoFinishLoseLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestShowOverLoseUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoStartNextLevel);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestCloseOverUINotify,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmStartMiniGame);
    Sexy::Delegate0::Delegate0<AutoTestAllLevel,void(AutoTestAllLevel::*)()>
              (aDStack_38,(string *)&local_50);
    MessageRouter::Unsubscribe
              ((MessageRouter *)puVar1,Message::AutoTestConfirmStartMiniGame,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestPLantDie);
    local_f0 = local_80;
    uStack_e8 = uStack_78;
    local_e0 = local_70;
    MessageRouter::
    Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantDied,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestZombieCloseToHouse);
    local_110 = local_68;
    uStack_108 = uStack_60;
    local_100 = local_58;
    MessageRouter::
    Unsubscribe<Zombie*,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(Zombie*)>>
              ((MessageRouter *)puVar1,Message::ZombieCloseToHouse,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,AutoTestSkyCityDamage);
    local_130 = local_50;
    uStack_128 = uStack_48;
    local_120 = local_40;
    MessageRouter::
    Unsubscribe<float,Sexy::CBMemberTranslatorX<AutoTestAllLevel,void(AutoTestAllLevel::*)(float)>>
              ((MessageRouter *)puVar1,Message::AirshipSetPercentage,&local_130);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestAllLevel::ChangeStartLevel(std::string const&) */

void __thiscall AutoTestAllLevel::ChangeStartLevel(AutoTestAllLevel *this,string *param_1)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  WorldDataManager *this_01;
  long lVar4;
  undefined8 uVar5;
  string *psVar6;
  char *pcVar7;
  size_t sVar8;
  WorldMapList *this_02;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar1 != '\0') {
    this_02 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
    uVar10 = 0;
    while( true ) {
      uVar5 = *(undefined8 *)(this_02 + 8);
      uVar9 = FUN_043dae2c(uVar5,*(undefined8 *)(this_02 + 0x10));
      if (uVar9 <= uVar10) break;
      psVar6 = (string *)FUN_043dae4c(uVar5,uVar10);
      cVar1 = WorldMapList::IsWorldEnabled(this_02,psVar6);
      if (cVar1 == '\0') {
        uVar10 = uVar10 + 1;
      }
      else {
        uVar10 = uVar10 + 1;
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar6);
      }
    }
  }
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar4 = WorldDataManager::FindEventByLevelName(this_01,param_1);
  *(long *)(this + 0x18) = lVar4;
  if (lVar4 != 0) {
    iVar3 = 0;
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_18,uVar5);
      lVar4 = FUN_05474368(param_1,asStack_18,0);
      if (lVar4 != -1) {
        pcVar7 = (char *)FUN_0547429c();
        sVar8 = strlen(pcVar7);
        *(int *)(this + 0x50) = iVar3;
        FUN_05475ffc((string *)&local_10,param_1,sVar8 + lVar4,0xffffffffffffffff);
        pcVar7 = (char *)FUN_0547429c((string *)&local_10);
        iVar3 = atoi(pcVar7);
        *(int *)(this + 0x54) = iVar3 + -1;
        RefreshNewLevelList(this,(vector *)(this + 0x20));
        std::string::~string((string *)&local_10);
        std::string::~string(asStack_18);
        break;
      }
      std::string::~string(asStack_18);
      iVar3 = iVar3 + 1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    psVar6 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_10,"AutoTestAllLevel");
    CheatManager::SetToggleValue(psVar6,SUB81((string *)&local_10,0));
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

