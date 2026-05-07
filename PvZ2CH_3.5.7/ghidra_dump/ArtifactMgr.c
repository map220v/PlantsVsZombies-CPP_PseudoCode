// Class: ArtifactMgr


/* ArtifactMgr::SetArtifact(ArtifactData) */

void __thiscall ArtifactMgr::SetArtifact(ArtifactMgr *this,ZombieRecord *param_2)

{
  ZombieRecord::operator=((ZombieRecord *)(this + 8),param_2);
  return;
}


/* ArtifactMgr::CanFreePlanting() */

bool __thiscall ArtifactMgr::CanFreePlanting(ArtifactMgr *this)

{
  int iVar1;
  
  iVar1 = FUN_0379c87c(*(undefined4 *)(this + 0x60));
  return 0 < iVar1;
}


/* ArtifactMgr::CanFreeNoCD() */

bool __thiscall ArtifactMgr::CanFreeNoCD(ArtifactMgr *this)

{
  int iVar1;
  
  iVar1 = FUN_0379c880(*(undefined4 *)(this + 100));
  return 0 < iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetBoostAliases(PlantBoostType) */

void ArtifactMgr::GetBoostAliases(string *param_1,undefined8 param_2,int param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  if (param_3 == 6) {
    std::string::append(param_1,"BoostExtraAttack",(size_t)__n);
  }
  else if (param_3 == 8) {
    std::string::append(param_1,"BoostFastCooldown",(size_t)__n);
  }
  else if (param_3 == 4) {
    std::string::append(param_1,"BoostExtraHitPoints",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ArtifactMgr::GetArtifact() */

ZombieInfo * ArtifactMgr::GetArtifact(void)

{
  long in_x0;
  ZombieInfo *in_x8;
  
  FishingModule::ZombieInfo::ZombieInfo(in_x8,(ZombieInfo *)(in_x0 + 8));
  return in_x8;
}


/* ArtifactMgr::IsUnsharedBoost(ArtifactBoostType) */

bool __thiscall ArtifactMgr::IsUnsharedBoost(undefined8 param_1,int param_2)

{
  return param_2 - 9U < 3;
}


/* ArtifactMgr::IsDangerRoom() */

byte ArtifactMgr::IsDangerRoom(void)

{
  char cVar1;
  byte bVar2;
  DangerRoomManager *this;
  
  cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  bVar2 = 0;
  if (cVar1 != '\0') {
    this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    bVar2 = DangerRoomManager::IsTrainingMode(this);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetTargetFieldByFieldType(Sexy::RtWeakPtr<ArtifactProperties>, FieldType, int) */

void ArtifactMgr::GetTargetFieldByFieldType
               (string *param_1,undefined8 param_2,RtWeakPtr *param_3,undefined4 param_4,int param_5
               )

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3);
  if (bVar2) {
    switch(param_4) {
    case 0:
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      uVar4 = *(undefined8 *)(lVar3 + 0x48);
      break;
    case 1:
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      uVar4 = *(undefined8 *)(lVar3 + 0x60);
      break;
    case 2:
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      uVar4 = *(undefined8 *)(lVar3 + 0x78);
      break;
    case 3:
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
      uVar4 = *(undefined8 *)(lVar3 + 0x90);
      break;
    default:
      goto switchD_0379dc48_default;
    }
    uVar4 = FUN_0379c8f4(uVar4,(long)param_5);
    thunk_FUN_05475e00(param_1,uVar4);
  }
switchD_0379dc48_default:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* ArtifactMgr::IsArtifactDisabled() */

bool ArtifactMgr::IsArtifactDisabled(void)

{
  LevelModuleManager *this;
  ArtifactModule *pAVar1;
  
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (this = (LevelModuleManager *)
             FUN_0379c884(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
     this != (LevelModuleManager *)0x0)) {
    pAVar1 = LevelModuleManager::GetModuleByClass<ArtifactModule>(this);
    return pAVar1 == (ArtifactModule *)0x0;
  }
  return true;
}


/* ArtifactMgr::~ArtifactMgr() */

void __thiscall ArtifactMgr::~ArtifactMgr(ArtifactMgr *this)

{
  *(undefined ***)this = &PTR__ArtifactMgr_06696200;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>::
  ~vector((vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>> *)
          (this + 0x40));
  std::string::~string((string *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 8));
  Sexy::LazySingleton<ArtifactMgr>::~LazySingleton((LazySingleton<ArtifactMgr> *)this);
  return;
}


/* ArtifactMgr::~ArtifactMgr() */

void __thiscall ArtifactMgr::~ArtifactMgr(ArtifactMgr *this)

{
  ~ArtifactMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::artifactDisabled() */

void ArtifactMgr::artifactDisabled(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  string asStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = 0;
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
LAB_0379f450:
    lVar3 = FUN_0379e9d8(*(undefined8 *)(lVar3 + 0xad8));
    if (((lVar3 == 0) &&
        (lVar3 = FUN_0379ea20(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar3 == 0)) &&
       ((lVar3 = FUN_0379ea68(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar3 == 0 &&
        ((lVar3 = FUN_02fd3c38(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar3 == 0 &&
         (fVar5 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,1,-1,0), fVar5 != 0.0))))))
    {
      std::string::string(asStack_40,"");
      nop();
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        thunk_FUN_05475e00(asStack_40,uVar4);
      }
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      Sexy::RtName::RtName((RtName *)local_18,L"ArtifactModuleProps");
      PVZDB::GetIdByAlias(aRStack_38,uVar4,0x14,(RtName *)local_18);
      Sexy::RtName::~RtName((RtName *)local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
      cVar1 = '\0';
      if (bVar2) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar3 + 0x40));
        local_18[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar3 + 0x40));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)local_18),
              cVar1 = '\0', bVar2) {
          uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          FUN_05475d88(asStack_28,uVar4);
          cVar1 = std::operator==(asStack_28,asStack_40);
          if (cVar1 != '\0') {
            std::string::~string(asStack_28);
            break;
          }
          std::string::~string(asStack_28);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      std::string::~string(asStack_40);
      goto LAB_0379f360;
    }
  }
  else {
    lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (((((((*(char *)(lVar3 + 0x116) == '\0') &&
            (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
            *(char *)(lVar3 + 0x111) == '\0')) &&
           (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
           *(char *)(lVar3 + 0x16f) == '\0')) &&
          ((lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
           *(char *)(lVar3 + 0x114) == '\0' &&
           (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
           *(char *)(lVar3 + 0x115) == '\0')))) &&
         ((lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
          *(char *)(lVar3 + 0x170) == '\0' &&
          ((cVar1 = Board::IsCurrentLevelBeghouled(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0' &&
           (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 == '\0')))))) &&
        (cVar1 = CardGameUtils::IsPlayingCardGame(), cVar1 == '\0')) &&
       (((cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0' &&
         (cVar1 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar1 == '\0')) &&
        (cVar1 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar1 == '\0')))) {
      lVar3 = *(long *)(gLawnApp + 0x9f0);
      goto LAB_0379f450;
    }
  }
  cVar1 = '\x01';
LAB_0379f360:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::AddArtifactModuleIfNeeded() */

void ArtifactMgr::AddArtifactModuleIfNeeded(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = artifactDisabled();
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"ArtifactModuleProps");
    PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_0379c884(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      LevelModuleManager::AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetArtifactByTypeId(int) */

void ArtifactMgr::GetArtifactByTypeId(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this;
  ArtifactProperties *pAVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_50 [8];
  RtId aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x86);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_0379f85c:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::string::~string(asStack_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pAVar5 = Sexy::RtObject::Cast<ArtifactProperties>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar3 = extraout_w1_00;
      if ((pAVar5 != (ArtifactProperties *)0x0) &&
         (cVar2 = std::operator==((string *)(pAVar5 + 0x10),asStack_50), iVar3 = extraout_w1_01,
         cVar2 != '\0')) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        goto LAB_0379f85c;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetArtifactName(int) */

void __thiscall ArtifactMgr::GetArtifactName(ArtifactMgr *this,int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetArtifactByTypeId((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetArtifactDescription(int) */

void __thiscall ArtifactMgr::GetArtifactDescription(ArtifactMgr *this,int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetArtifactByTypeId((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::CreateArtifactData(std::string, int, int) */

void ArtifactMgr::CreateArtifactData
               (ArtifactData *param_1,undefined8 param_2,string *param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactData::ArtifactData(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_3);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0x86,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_28);
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::addArtifact(std::string, int, int) */

void __thiscall
ArtifactMgr::addArtifact(ArtifactMgr *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_20);
  CreateArtifactData(aRStack_18,this,asStack_20,param_3,param_4);
  ZombieRecord::operator=((ZombieRecord *)(this + 8),(ZombieRecord *)aRStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::SyncArtifact(int, int, int) */

void __thiscall ArtifactMgr::SyncArtifact(ArtifactMgr *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetArtifactByTypeId((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    FUN_05475d88(asStack_10,lVar2 + 0x10);
    addArtifact(this,asStack_10,param_2,param_3);
    std::string::~string(asStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetActivatedArtifact() */

void ArtifactMgr::GetActivatedArtifact(void)

{
  RtWeakPtr *this;
  bool bVar1;
  long in_x0;
  undefined8 uVar2;
  PVZDB *pPVar3;
  RtDbTable *this_00;
  long extraout_x0;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x28);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (!bVar1) {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x87);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
      pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_00 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x87);
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtDbTable::GetObjectForId(this_00,aRStack_30);
      nop();
      Sexy::RtId::~RtId(aRStack_30);
      if (extraout_x0 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        break;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::needRequestTriggerArtifact() */

void ArtifactMgr::needRequestTriggerArtifact(void)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==((string *)(lVar3 + 0x10),"artifact_prismtower");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (!bVar1) {
    GetActivatedArtifact();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    EntityComponent_GroundEffect::GetEffect();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar3 + 0x10),"artifact_beehive");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (!bVar1) {
      GetActivatedArtifact();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      EntityComponent_GroundEffect::GetEffect();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = std::operator==((string *)(lVar3 + 0x10),"artifact_acid");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      if (!bVar1) {
        GetActivatedArtifact();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        EntityComponent_GroundEffect::GetEffect();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        bVar1 = std::operator==((string *)(lVar3 + 0x10),"artifact_swarm");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (!bVar1) {
          GetActivatedArtifact();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          EntityComponent_GroundEffect::GetEffect();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          bVar1 = std::operator==((string *)(lVar3 + 0x10),"artifact_calabash");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          if (((!bVar1) && (*(long *)(gLawnApp + 0x9f0) != 0)) &&
             (cVar2 = IsDangerRoom(), cVar2 != '\0')) goto LAB_0379fdc0;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_0379fdc0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetActivatedArtifactCooldown() */

void ArtifactMgr::GetActivatedArtifactCooldown(void)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar3 = (**(code **)(*plVar2 + 0x98))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetActivatedArtifactLeftTime() */

void ArtifactMgr::GetActivatedArtifactLeftTime(void)

{
  bool bVar1;
  Artifact *this;
  undefined4 uVar2;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this = (Artifact *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = Artifact::GetTriggerLeftTime(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::CanTriggerActivatedArtifact() */

void ArtifactMgr::CanTriggerActivatedArtifact(void)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  uVar2 = 0;
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = (**(code **)(*plVar3 + 0x88))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetActivatedArtifactMaxUsedTime() */

void ArtifactMgr::GetActivatedArtifactMaxUsedTime(void)

{
  bool bVar1;
  undefined4 uVar2;
  long *plVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = (**(code **)(*plVar3 + 0xa0))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetActivatedArtifactUsedTime() */

void ArtifactMgr::GetActivatedArtifactUsedTime(void)

{
  bool bVar1;
  undefined4 uVar2;
  DangerRoomManager *this;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetActivatedArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this = (DangerRoomManager *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar2 = DangerRoomManager::GetMaxLastWeekLevel(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::RemoveActivatedArtifact() */

void __thiscall ArtifactMgr::RemoveActivatedArtifact(ArtifactMgr *this)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x87);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*plVar3 + 0x48))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  ZombieRecord::operator=((ZombieRecord *)(this + 8),(ZombieRecord *)&DAT_06ab02b0);
  FUN_0379c86c(0,this + 0x20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMgr::CheatTestField(int) */

void __thiscall ArtifactMgr::CheatTestField(ArtifactMgr *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  RemoveActivatedArtifact(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetCurrentArtifact(this_01,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::RecomputeEntityValues() */

void ArtifactMgr::RecomputeEntityValues(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Plant *this;
  PlantNameMapperServerID *pPVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesOnBoard(avStack_20,1);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      if (this != (Plant *)0x0) {
        pPVar4 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
        Plant::GetType();
        uVar3 = PlantNameMapperServerID::GetIdForType(pPVar4,aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
        fVar6 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar3,4,0);
        FUN_0379c85c(fVar6 + 1.0,this + 0x3c4);
        Plant::Heal(this);
        uVar5 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
        fVar6 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar5,uVar3,6,0);
        FUN_0379c854(fVar6 + 1.0,this + 0x3b8);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::TrySyncArtifact() */

void __thiscall ArtifactMgr::TrySyncArtifact(ArtifactMgr *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  NameMapperBase *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string *extraout_x1;
  string asStack_60 [8];
  string asStack_58 [8];
  Sexy aSStack_50 [8];
  string asStack_48 [4];
  int local_44;
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RemoveActivatedArtifact(this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_0379c868(*(undefined4 *)(this_01 + 0x40));
  if (iVar1 == 0x39) {
    PlayerInfo::CompleteTutorial(this_01,0x39);
    pNVar3 = (NameMapperBase *)ArtifactMapper::GetInstance();
    std::string::string(asStack_48,"artifact_wind");
    iVar1 = NameMapperBase::GetIdForName(pNVar3,asStack_48);
    std::string::~string(asStack_48);
    nop();
    SyncArtifact(this,iVar1,0x1e,4);
  }
  else {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    lVar2 = FUN_05474374(asStack_48,"Artifact_Demo_",0);
    std::string::~string(asStack_48);
    if (lVar2 == -1) {
      iVar1 = PlayerInfo::GetCurrentArtifact(this_01);
      if (iVar1 != 0) {
        PlayerInfo::GetArtifactInfoByID((int)this_01);
        ArtifactInfo::~ArtifactInfo((ArtifactInfo *)asStack_48);
        PlayerInfo::GetArtifactInfoByID((int)this_01);
        ArtifactInfo::~ArtifactInfo((ArtifactInfo *)asStack_48);
        SyncArtifact(this,iVar1,local_40,local_44);
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      FUN_05475ffc(aSStack_50,asStack_58,0xe,0xffffffffffffffff);
      Sexy::StringToLower(aSStack_50,extraout_x1);
      std::operator+("artifact_",asStack_48);
      std::string::~string(asStack_48);
      std::string::~string((string *)aSStack_50);
      std::string::~string(asStack_58);
      pNVar3 = (NameMapperBase *)ArtifactMapper::GetInstance();
      iVar1 = NameMapperBase::GetIdForName(pNVar3,asStack_60);
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      uVar4 = FUN_0547429c(asStack_48);
      uVar5 = FUN_0547429c(asStack_60);
      Sexy::OutputDebugStrF((wchar_t *)"ArtifactMgr::TrySyncArtifact %s %s",uVar4,uVar5);
      std::string::~string(asStack_48);
      SyncArtifact(this,iVar1,0x1e,4);
      std::string::~string(asStack_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetRealExpression(std::string&, int) */

void ArtifactMgr::GetRealExpression(string *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  ArtifactUtils *this_00;
  int in_w3;
  string asStack_58 [8];
  string asStack_50 [8];
  ArtifactInfo aAStack_48 [4];
  uint local_44;
  uint local_40;
  long local_8;
  
  this_00 = (ArtifactUtils *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_58,"level");
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 8));
  if (bVar1) {
    ArtifactUtils::ReplaceParameterEx
              (this_00,asStack_58,(string *)(ulong)*(uint *)(param_1 + 0x10),in_w3);
    FUN_05474278(this_00,asStack_50);
    std::string::~string(asStack_50);
  }
  else {
    PlayerInfo::GetArtifactInfoByID(iVar2);
    ArtifactUtils::ReplaceParameterEx(this_00,asStack_58,(string *)(ulong)local_40,in_w3);
    FUN_05474278(this_00,asStack_50);
    std::string::~string(asStack_50);
    ArtifactInfo::~ArtifactInfo(aAStack_48);
  }
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"stage");
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 8));
  if (bVar1) {
    ArtifactUtils::ReplaceParameterEx
              (this_00,asStack_58,(string *)(ulong)*(uint *)(param_1 + 0x14),in_w3);
    FUN_05474278(this_00,asStack_50);
    std::string::~string(asStack_50);
  }
  else {
    PlayerInfo::GetArtifactInfoByID(iVar2);
    ArtifactUtils::ReplaceParameterEx(this_00,asStack_58,(string *)(ulong)local_44,in_w3);
    FUN_05474278(this_00,asStack_50);
    std::string::~string(asStack_50);
    ArtifactInfo::~ArtifactInfo(aAStack_48);
  }
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMgr::TriggerArtifact(int) */

void __thiscall ArtifactMgr::TriggerArtifact(ArtifactMgr *this,int param_1)

{
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::NotifyArtifactButtonDepress,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::getArtifactImprovedPropsById(int) */

void __thiscall ArtifactMgr::getArtifactImprovedPropsById(ArtifactMgr *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_037a0ebc(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetImprovedDescription(int) */

void ArtifactMgr::GetImprovedDescription(int param_1)

{
  long lVar1;
  int in_w1;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  lVar1 = getArtifactImprovedPropsById((ArtifactMgr *)(ulong)(uint)param_1,in_w1);
  if (lVar1 != 0) {
    Sexy::ToWString((string *)(lVar1 + 0x20));
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetImprovedName(int) */

void ArtifactMgr::GetImprovedName(int param_1)

{
  long lVar1;
  int in_w1;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  lVar1 = getArtifactImprovedPropsById((ArtifactMgr *)(ulong)(uint)param_1,in_w1);
  if (lVar1 != 0) {
    Sexy::ToWString((string *)(lVar1 + 0x18));
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMgr::GetEnabledBoostProps(int) */

undefined * __thiscall ArtifactMgr::GetEnabledBoostProps(ArtifactMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = getArtifactImprovedPropsById(this,param_1);
  if (lVar1 != 0) {
    return (undefined *)(lVar1 + 0x28);
  }
  return &DAT_06ab01b0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetNetworkBoostById(Network_ArtifactImprovedPropertySheet const*, int) */

void __thiscall
ArtifactMgr::GetNetworkBoostById
          (ArtifactMgr *this,Network_ArtifactImprovedPropertySheet *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0379e3d0(*(undefined8 *)(param_1 + 0x30));
  uVar3 = FUN_0379e420(*(undefined8 *)(param_1 + 0x38));
  local_18 = FUN_037a12c8(uVar2,uVar3,param_2);
  local_10 = FUN_0379e420(*(undefined8 *)(param_1 + 0x38));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06ab0290;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::getBoostById(std::vector<Sexy::RtWeakPtr<ArtifactBoostPropertySheet>,
   std::allocator<Sexy::RtWeakPtr<ArtifactBoostPropertySheet> > > const&, int) */

void __thiscall ArtifactMgr::getBoostById(ArtifactMgr *this,vector *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0379e510(*(undefined8 *)param_1);
  uVar3 = FUN_0379e560(*(undefined8 *)(param_1 + 8));
  local_18 = FUN_037a1528(uVar2,uVar3,param_2);
  local_10 = FUN_0379e560(*(undefined8 *)(param_1 + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06ab0070;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* ArtifactMgr::GetBoostValueRangeByBoostId(int, int) */

undefined * __thiscall
ArtifactMgr::GetBoostValueRangeByBoostId(ArtifactMgr *this,int param_1,int param_2)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  
  lVar1 = getArtifactImprovedPropsById(this,param_1);
  if (lVar1 != 0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)getBoostById(this,(vector *)(lVar1 + 0x28),param_2);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    return (undefined *)(lVar1 + 0x2c);
  }
  return &DAT_06ab0240;
}


/* ArtifactMgr::GetBoostRareByBoostId(int, int) */

undefined4 __thiscall ArtifactMgr::GetBoostRareByBoostId(ArtifactMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  
  lVar2 = getArtifactImprovedPropsById(this,param_1);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)getBoostById(this,(vector *)(lVar2 + 0x28),param_2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar1 = *(undefined4 *)(lVar2 + 0x24);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetBoostRareByBoostId(int) */

void __thiscall ArtifactMgr::GetBoostRareByBoostId(ArtifactMgr *this,int param_1)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ArtifactMapper::GetInstance();
  auVar4 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar4._8_8_);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(auVar4._0_8_);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)auVar4._0_8_);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = GetBoostRareByBoostId(this,*(int *)(lVar2 + 8),param_1);
    if ((int)uVar3 != -1) goto LAB_037a1750;
    FUN_0379c914((exception_ptr *)&local_18);
  }
  uVar3 = 0xffffffff;
LAB_037a1750:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ArtifactMgr::IsGlobalBoost(ArtifactBoostInfo const&) */

bool __thiscall ArtifactMgr::IsGlobalBoost(ArtifactMgr *this,ArtifactBoostInfo *param_1)

{
  int iVar1;
  
  iVar1 = GetBoostRareByBoostId(this,*(int *)param_1);
  return 2 < iVar1;
}


/* ArtifactMgr::GetBoostTypeByBoostId(int, int) */

undefined4 __thiscall ArtifactMgr::GetBoostTypeByBoostId(ArtifactMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  
  lVar2 = getArtifactImprovedPropsById(this,param_1);
  uVar1 = 0;
  if (lVar2 != 0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)getBoostById(this,(vector *)(lVar2 + 0x28),param_2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar1 = *(undefined4 *)(lVar2 + 0x20);
  }
  return uVar1;
}


/* ArtifactMgr::getBoostSheet(int, int) */

undefined * __thiscall ArtifactMgr::getBoostSheet(ArtifactMgr *this,int param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = getArtifactImprovedPropsById(this,param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined *)getBoostById(this,(vector *)(lVar1 + 0x28),param_2);
    return puVar2;
  }
  return &DAT_06ab0070;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetBoostValue(int, ArtifactBoostType, int) */

void __thiscall ArtifactMgr::GetBoostValue(ArtifactMgr *this,int param_1,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  int *piVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  float fVar6;
  undefined8 local_70;
  undefined8 local_68;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_60 [24];
  ArtifactInfo aAStack_48 [16];
  vector avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetArtifactInfoByID(iVar2);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (avStack_60,avStack_38);
  ArtifactInfo::~ArtifactInfo(aAStack_48);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_60);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_60);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar1) {
      fVar6 = 0.0;
LAB_037a1964:
      std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
                ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)avStack_60);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(fVar6);
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    pRVar4 = (RtWeakPtrBase *)getBoostSheet(this,param_1,*piVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aAStack_48,pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aAStack_48);
    if ((bVar1) &&
       (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_48),
       *(int *)(lVar5 + 0x20) == param_3)) {
      if ((param_4 == -1) &&
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_48),
         *(int *)(lVar5 + 0x24) != 3)) {
        fVar6 = (float)piVar3[1];
      }
      else {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_48);
        if (param_4 != *(int *)(lVar5 + 0x24)) goto LAB_037a18bc;
        fVar6 = (float)piVar3[1];
      }
      if (fVar6 != 0.0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_48)
        ;
        goto LAB_037a1964;
      }
    }
LAB_037a18bc:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_48);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetBoostValue(int, ArtifactBoostType) */

void __thiscall ArtifactMgr::GetBoostValue(ArtifactMgr *this,int param_1,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ProfileMgr *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = true;
  fVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ArtifactMapper::GetInstance();
  auVar8 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar8._8_8_);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(auVar8._0_8_);
  fVar7 = fVar5;
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)auVar8._0_8_);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar4 + 8) == param_1) {
      fVar6 = (float)GetBoostValue(this,param_1,param_3,3);
      if (fVar6 != 0.0) {
        fVar5 = 0.0;
        bVar1 = false;
      }
      fVar7 = (float)GetBoostValue(this,param_1,param_3,0xffffffff);
      fVar7 = fVar7 + fVar6;
    }
    else if (((fVar5 == 0.0) && (bVar1)) && (cVar3 = IsUnsharedBoost(this,param_3), cVar3 == '\0'))
    {
      bVar1 = true;
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      fVar5 = (float)GetBoostValue(this,*(undefined4 *)(lVar4 + 8),param_3,3);
    }
    FUN_0379c914((exception_ptr *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7 + fVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::hasPlantBoost(std::vector<PlantBoost, std::allocator<PlantBoost> > const&, int) */

void __thiscall ArtifactMgr::hasPlantBoost(ArtifactMgr *this,vector *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0379e108(*(undefined8 *)param_1);
  uVar3 = FUN_0379e158(*(undefined8 *)(param_1 + 8));
  local_18 = FUN_037a31cc(uVar2,uVar3,param_2);
  local_10 = FUN_0379e158(*(undefined8 *)(param_1 + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ArtifactMgr::GetProps() */

vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>> *
ArtifactMgr::GetProps(void)

{
  long in_x0;
  vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>> *in_x8;
  
  std::vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>::vector
            (in_x8,(vector *)(in_x0 + 0x40));
  return in_x8;
}


/* ArtifactMgr::CalculateExpValue(std::string&, int) */

void ArtifactMgr::CalculateExpValue(string *param_1,int param_2)

{
  GetRealExpression(param_1,param_2);
  ArtifactUtils::GetExpressionResult((string *)(ulong)(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::CalculateFieldValue(FieldType, int) */

void __thiscall
ArtifactMgr::CalculateFieldValue(ArtifactMgr *this,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 8));
  GetTargetFieldByFieldType(asStack_18,this,aRStack_10,param_2,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    uVar2 = CalculateExpValue((string *)this,(int)asStack_18);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ArtifactMgr::FillCommonData(CommonData&) */

void __thiscall ArtifactMgr::FillCommonData(ArtifactMgr *this,CommonData *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  iVar1 = FUN_0379c8e8(*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  fVar4 = (float)CalculateFieldValue(this,0,iVar1 + -1);
  iVar3 = (int)fVar4;
  fVar4 = (float)iVar3;
  if (iVar3 == 0) {
    fVar4 = 1.0;
    iVar3 = 1;
  }
  *(int *)param_1 = iVar3;
  fVar4 = (float)BoardHelpers::ApplyLevelBasedModifierValue(fVar4,1,-1,0);
  *(int *)param_1 = (int)fVar4;
  uVar5 = CalculateFieldValue(this,0,iVar1 + -2);
  *(undefined4 *)(param_1 + 4) = uVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::CalculateFieldValue(Sexy::RtWeakPtr<ArtifactProperties>, FieldType, int) */

void __thiscall
ArtifactMgr::CalculateFieldValue
          (ArtifactMgr *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  NameMapperBase *this_00;
  long lVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  GetTargetFieldByFieldType(asStack_18,this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    NameMapperBase::GetIdForName(this_00,(string *)(lVar2 + 0x10));
    uVar3 = CalculateExpValue((string *)this,(int)asStack_18);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::getExtraValue(std::string const&, int, int) */

void __thiscall
ArtifactMgr::getExtraValue(ArtifactMgr *this,string *param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  GetArtifactByTypeId((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    cVar2 = hasPlantBoost(this,(vector *)(lVar4 + 0xa8),param_3);
    if (cVar2 != '\0') {
      if ((param_3 & 0xfffffffdU) == 4) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
        cVar2 = PlantRestrictionSet::IsIncluded
                          ((PlantRestrictionSet *)(lVar4 + 0x128),(PlantType *)pRVar5);
        if (cVar2 != '\0') goto LAB_037a6ee0;
      }
      else if ((param_3 == 8) || (param_3 == 10)) {
LAB_037a6ee0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        fVar6 = (float)CalculateFieldValue(this,aRStack_10,1,0);
        fVar6 = fVar6 * 0.01;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        goto LAB_037a6e64;
      }
    }
  }
  fVar6 = 0.0;
LAB_037a6e64:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetGlobalExtraValue(float&, int, int, int) */

void __thiscall
ArtifactMgr::GetGlobalExtraValue
          (ArtifactMgr *this,float *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = -1;
  fVar6 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar2 = PlantNameMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ArtifactMapper::GetInstance();
  auVar7 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar7._8_8_);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(auVar7._0_8_);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)auVar7._0_8_);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if ((*(int *)(lVar3 + 8) != param_4) &&
       (fVar5 = (float)GetBoostValue(this,*(int *)(lVar3 + 8),8,3), 0.0 < fVar5)) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      iVar4 = *(int *)(lVar3 + 8);
      fVar5 = (float)getExtraValue(this,asStack_20,iVar4,param_3);
      fVar6 = fVar6 + fVar5;
    }
    FUN_0379c914((exception_ptr *)&local_18);
  }
  *param_1 = fVar6;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::OnGetArtifactBoosts(int, int) */

void __thiscall ArtifactMgr::OnGetArtifactBoosts(ArtifactMgr *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 8));
  if (cVar1 != '\0') {
    FUN_0379c874(this + 0x30,0xffffffff);
    local_c = 0.0;
    uVar2 = GetGlobalExtraValue(this,&local_c,param_1,param_2,-1);
    FUN_0379c874(this + 0x30,uVar2);
    FUN_0379c86c(local_c,this + 0x20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::InitDefaultImprovedProps() */

void __thiscall ArtifactMgr::InitDefaultImprovedProps(ArtifactMgr *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  ArtifactImprovedPropertySheet *pAVar3;
  ArtifactImprovedPropertySheet *this_01;
  int extraout_w1;
  int iVar4;
  int extraout_w1_00;
  int extraout_w1_01;
  RtId aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [8];
  ArtifactImprovedPropertySheet *local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x8a);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_38);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
      ;
      pAVar3 = Sexy::RtObject::Cast<ArtifactImprovedPropertySheet>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtId::~RtId(aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar4 = extraout_w1_00;
      if (pAVar3 != (ArtifactImprovedPropertySheet *)0x0) {
        this_01 = ::operator_new(0x40);
        ArtifactImprovedPropertySheet::ArtifactImprovedPropertySheet(this_01);
        local_30 = this_01;
        ArtifactImprovedPropertySheet::Copy(this_01,pAVar3);
        std::vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>::
        push_back((vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>
                   *)(this + 0x40),&local_30);
        iVar4 = extraout_w1_01;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar4 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMgr::ArtifactMgr() */

void __thiscall ArtifactMgr::ArtifactMgr(ArtifactMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<ArtifactMgr>::LazySingleton((LazySingleton<ArtifactMgr> *)this);
  *(undefined ***)this = &PTR__ArtifactMgr_06696200;
  ArtifactData::ArtifactData((ArtifactData *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)(this + 0x20) = 0;
  std::string::append((string *)(this + 0x38),"",in_x2);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  InitDefaultImprovedProps(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetArtifactBoosts);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArtifactMgr,void(ArtifactMgr::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::GetArtifactBoosts,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::ConstructBoostInfos(Network_ArtifactImprovedPropertySheet const*,
   std::vector<NetworkArtifactBoostData, std::allocator<NetworkArtifactBoostData> >&,
   std::vector<int, std::allocator<int> > const&) */

void __thiscall
ArtifactMgr::ConstructBoostInfos
          (ArtifactMgr *this,Network_ArtifactImprovedPropertySheet *param_1,vector *param_2,
          vector *param_3)

{
  bool bVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_0379e330(*(undefined8 *)param_3);
  local_28 = FUN_0379e380(*(undefined8 *)(param_3 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    puVar3 = (undefined8 *)GetNetworkBoostById(this,param_1,*piVar2);
    local_20 = *puVar3;
    uStack_18 = puVar3[1];
    local_10 = *(undefined4 *)(puVar3 + 2);
    if ((int)local_20 != -1) {
      std::vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>>::push_back
                ((vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>> *)
                 param_2,(NetworkArtifactBoostData *)&local_20);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::SyncLocalProps(Network_ArtifactImprovedPropertySheet const*, int, std::vector<int,
   std::allocator<int> > const&) */

void __thiscall
ArtifactMgr::SyncLocalProps
          (ArtifactMgr *this,Network_ArtifactImprovedPropertySheet *param_1,int param_2,
          vector *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ArtifactImprovedPropertySheet *this_01;
  undefined8 *puVar4;
  undefined8 local_30;
  ArtifactImprovedPropertySheet *local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_30 = FUN_037a0ce8(uVar2,uVar3,param_2);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_20);
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    ConstructBoostInfos(this,param_1,(vector *)local_20,param_3);
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    ArtifactImprovedPropertySheet::SyncNetwork
              ((ArtifactImprovedPropertySheet *)*puVar4,(vector *)local_20);
    std::vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>>::~vector
              ((vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>> *)local_20
              );
  }
  else {
    this_01 = ::operator_new(0x40);
    ArtifactImprovedPropertySheet::ArtifactImprovedPropertySheet(this_01);
    *(int *)(this_01 + 0x10) = param_2;
    local_28 = this_01;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    ConstructBoostInfos(this,param_1,(vector *)local_20,param_3);
    ArtifactImprovedPropertySheet::SyncNetwork(local_28,(vector *)local_20);
    std::vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>::
    push_back((vector<ArtifactImprovedPropertySheet*,std::allocator<ArtifactImprovedPropertySheet*>>
               *)this_00,&local_28);
    std::vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>>::~vector
              ((vector<NetworkArtifactBoostData,std::allocator<NetworkArtifactBoostData>> *)local_20
              );
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::InitProps(Network_ArtifactImprovedPropertySheet const*, int) */

void __thiscall
ArtifactMgr::InitProps(ArtifactMgr *this,Network_ArtifactImprovedPropertySheet *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x58) = param_2;
  local_18 = FUN_0379e470(uVar2);
  local_10 = FUN_0379e4c0(*(undefined8 *)(param_1 + 0x20));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    SyncLocalProps(this,param_1,*piVar3,(vector *)(piVar3 + 2));
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetArtifactBoostForPlant(std::vector<PlantBoost const*, std::allocator<PlantBoost
   const*> >&, int, PlantBoostType) */

void __thiscall
ArtifactMgr::GetArtifactBoostForPlant
          (ArtifactMgr *this,vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1,
          int param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *pRVar3;
  long lVar4;
  RtWeakPtr *pRVar5;
  undefined4 *puVar6;
  RtWeakPtr aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::GetArtifactBoosts,param_2,param_4);
  if (*(float *)(this + 0x20) != 0.0) {
    pRVar5 = (RtWeakPtr *)(this + 8);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar5);
    if (bVar1) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0xa8));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0xa8));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        pRVar3 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar3);
        if ((bVar1) &&
           (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3),
           *(int *)(lVar4 + 0x10) == param_4)) {
          puVar6 = (undefined4 *)FUN_0379c90c(*(undefined8 *)(pRVar3 + 8),0);
          *puVar6 = *(undefined4 *)(this + 0x20);
          local_10 = pRVar3;
          std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                    (param_1,(PlantBoost **)&local_10);
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0xc0));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0xc0));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        pRVar3 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar3);
        if ((bVar1) &&
           (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar3),
           *(int *)(lVar4 + 0x10) == param_4)) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5);
          cVar2 = hasTargetBoostType(lVar4 + 0xa8,param_4);
          if (cVar2 == '\0') {
            puVar6 = (undefined4 *)FUN_0379c90c(*(undefined8 *)(pRVar3 + 8),0);
            *puVar6 = *(undefined4 *)(this + 0x20);
            local_10 = pRVar3;
            std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                      (param_1,(PlantBoost **)&local_10);
          }
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
      }
    }
    else if (*(int *)(this + 0x30) != -1) {
      GetArtifactByTypeId((int)this);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
      if (bVar1) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar4 + 0xa8));
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0xa8));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
              bVar1) {
          pRVar5 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar5);
          if ((bVar1) &&
             (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5),
             *(int *)(lVar4 + 0x10) == param_4)) {
            puVar6 = (undefined4 *)FUN_0379c90c(*(undefined8 *)(pRVar5 + 8),0);
            *puVar6 = *(undefined4 *)(this + 0x20);
            local_10 = pRVar5;
            std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                      (param_1,(PlantBoost **)&local_10);
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
        }
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(lVar4 + 0xc0));
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0xc0));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
              bVar1) {
          pRVar5 = (RtWeakPtr *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar5);
          if ((bVar1) &&
             (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar5),
             *(int *)(lVar4 + 0x10) == param_4)) {
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            cVar2 = hasTargetBoostType(lVar4 + 0xa8,param_4);
            if (cVar2 == '\0') {
              puVar6 = (undefined4 *)FUN_0379c90c(*(undefined8 *)(pRVar5 + 8),0);
              *puVar6 = *(undefined4 *)(this + 0x20);
              local_10 = pRVar5;
              std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                        (param_1,(PlantBoost **)&local_10);
            }
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::getCurrentBoostInfo(int, std::vector<ArtifactBoostInfo,
   std::allocator<ArtifactBoostInfo> > const&, int) */

void ArtifactMgr::getCurrentBoostInfo(int param_1,vector *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int in_w3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  PACommand aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_40 = FUN_0379e5b0(*(undefined8 *)(ulong)(uint)param_3);
  local_38 = FUN_0379e600(((undefined8 *)(ulong)(uint)param_3)[1]);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pRVar4 = (RtWeakPtrBase *)
             getBoostSheet((ArtifactMgr *)(ulong)(uint)param_1,(int)param_2,*piVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
    if ((bVar2) &&
       ((in_w3 == -1 ||
        (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30),
        in_w3 == *(int *)(lVar5 + 0x24))))) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      uVar1 = *(undefined4 *)(lVar7 + 0x20);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                    /* WARNING: Load size is inaccurate */
      CurrentArtifactBoostInfo::CurrentArtifactBoostInfo
                (*(CurrentArtifactBoostInfo **)(piVar3 + 1),aPStack_28,lVar5 + 0x10,lVar6 + 0x18,
                 uVar1,*(undefined4 *)(lVar7 + 0x24),*piVar3);
      std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::push_back
                ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)in_x8,
                 (CurrentArtifactBoostInfo *)aPStack_28);
      Sexy::PACommand::~PACommand(aPStack_28);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetCurrentBoostInfo(int, bool) */

void ArtifactMgr::GetCurrentBoostInfo(int param_1,bool param_2)

{
  int iVar1;
  ProfileMgr *this;
  char in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_78 [24];
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_60 [24];
  ArtifactInfo aAStack_48 [16];
  vector avStack_38 [24];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_78);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  if (in_w2 == '\0') {
    PlayerInfo::GetArtifactInfoByID(iVar1);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (avStack_60,avStack_20);
    ArtifactInfo::~ArtifactInfo(aAStack_48);
  }
  else {
    PlayerInfo::GetArtifactInfoByID(iVar1);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (avStack_60,avStack_38);
    ArtifactInfo::~ArtifactInfo(aAStack_48);
  }
  getCurrentBoostInfo(param_1,(vector *)(ulong)param_2,
                      (int)(vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)avStack_60
                     );
  std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
            ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)avStack_60);
  std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
            ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)avStack_78
            );
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::GetCurrentGlobalBoostInfo(int) */

void ArtifactMgr::GetCurrentGlobalBoostInfo(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_01;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_60 [24];
  undefined8 local_48 [2];
  vector avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar3 = ProfileMgr::GetCurrentProfile(this);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)ArtifactMapper::GetInstance();
  auVar9 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  this_01 = auVar9._0_8_;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_78,auVar9._8_8_);
  local_78 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(this_01);
  local_48[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_01);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)local_48);
joined_r0x037a9270:
  if (!bVar1) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
  PlayerInfo::GetArtifactInfoByID(iVar3);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (avStack_60,avStack_38);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)local_48);
  getCurrentBoostInfo(param_1,(vector *)(ulong)in_w1,(int)avStack_60);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_48);
  do {
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_48);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    while( true ) {
      if (!bVar1) {
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)in_x8);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_68,(__normal_iterator *)&local_70);
        std::
        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_48);
        std::
        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)local_48);
        std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::
        insert<__gnu_cxx::__normal_iterator<CurrentArtifactBoostInfo*,std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>>,void>
                  ();
        std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::~vector
                  ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>> *)
                   local_48);
        std::vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>>::~vector
                  ((vector<ArtifactBoostInfo,std::allocator<ArtifactBoostInfo>> *)avStack_60);
        FUN_0379c914((exception_ptr *)&local_78);
        local_48[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_01);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)local_48);
        goto joined_r0x037a9270;
      }
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      if ((*(int *)(lVar4 + 0x14) == 3) &&
         ((*(int *)(lVar4 + 0x10) == 8 ||
          (cVar2 = IsUnsharedBoost((ArtifactMgr *)param_1), cVar2 != '\0')))) break;
      uVar8 = *(undefined8 *)in_x8;
      lVar5 = FUN_0379c944(uVar8,*(undefined8 *)(in_x8 + 8));
      lVar4 = 0;
      while (lVar4 != lVar5) {
        lVar6 = FUN_0379c950(uVar8,lVar4);
        lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        lVar4 = lVar4 + 1;
        if (*(int *)(lVar6 + 0x10) == *(int *)(lVar7 + 0x10)) goto LAB_037a9448;
      }
      FUN_0379e650((__normal_iterator *)&local_70);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_48);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    }
LAB_037a9448:
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_68,(__normal_iterator *)&local_70);
    local_70 = std::vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>::erase
                         ((vector<CurrentArtifactBoostInfo,std::allocator<CurrentArtifactBoostInfo>>
                           *)local_48,local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMgr::RequestTriggerArtifact() */

void __thiscall ArtifactMgr::RequestTriggerArtifact(ArtifactMgr *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  string *this_00;
  char *__s;
  DNetwork *this_01;
  long lVar6;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2144];
  string asStack_488 [1152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
    ;
    cVar2 = FUN_0379c864(*(undefined1 *)(lVar6 + 0x3d));
    if (cVar2 == '\0') goto LAB_037a9628;
    cVar2 = needRequestTriggerArtifact();
  }
  else {
    cVar2 = needRequestTriggerArtifact();
  }
  if (cVar2 == '\0') {
    iVar3 = GetActivatedArtifactUsedTime();
    TriggerArtifact(this,iVar3 + 1);
    MessageRouter::Post((_func_void *)gMessageRouter);
    goto LAB_037a9628;
  }
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
LAB_037a96b4:
    iVar3 = 0;
  }
  else {
    cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    iVar3 = 1;
    if (cVar2 == '\0') {
      iVar3 = 3;
      lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar6 + 0x117) == '\0') {
        cVar2 = RiftUtils::IsPlayingRiftLevel();
        if (cVar2 == '\0') goto LAB_037a96b4;
        iVar3 = 2;
      }
    }
  }
  __n = auStack_d48;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"on");
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  uVar5 = GachaConfig::GetGachaPlantRewardList((GachaConfig *)this);
  thunk_FUN_05475e00(uVar4,uVar5);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,iVar3);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0379d2e4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_488,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
LAB_037a9628:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

