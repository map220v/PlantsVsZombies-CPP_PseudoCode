// Class: LawnMowerModule


/* LawnMowerModule::onBuyItemCancel(int) */

void __thiscall LawnMowerModule::onBuyItemCancel(LawnMowerModule *this,int param_1)

{
  undefined4 uVar1;
  
  if ((1 < param_1 - 2U) && (param_1 != 0)) {
    return;
  }
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::StaticClassInit() */

void LawnMowerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LawnMowerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03e68710,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerModule::StaticGetClass() */

long * LawnMowerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LawnMowerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnMowerModule::ShouldRespawnMower(unsigned char) */

undefined8 __thiscall LawnMowerModule::ShouldRespawnMower(LawnMowerModule *this,uchar param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_03e67d18(*(undefined8 *)(this + 0x28),param_1);
  iVar1 = *piVar2;
  if (iVar1 < 1) {
    return 0;
  }
  if (iVar1 != 0x7fffffff) {
    *piVar2 = iVar1 + -1;
    return 1;
  }
  return 1;
}


/* LawnMowerModule::hasMowerInSaveData(unsigned char) */

undefined1 __thiscall LawnMowerModule::hasMowerInSaveData(LawnMowerModule *this,uchar param_1)

{
  return *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (ulong)param_1 + 0x850);
}


/* LawnMowerModule::AddMowerToSaveData(unsigned char) */

void __thiscall LawnMowerModule::AddMowerToSaveData(LawnMowerModule *this,uchar param_1)

{
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (ulong)param_1 + 0x850) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::addPreparedMowers() */

void __thiscall LawnMowerModule::addPreparedMowers(LawnMowerModule *this)

{
  int iVar1;
  AnimationMgr *pAVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)LawnBrainModule::GetEntryAnimDuration((LawnBrainModule *)this);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  AnimateLawnMowers::Create(fVar3 + _FUN_03e68a3c * (float)(iVar1 + 1),fVar3);
  pAVar2 = (AnimationMgr *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  AnimationMgr::Add(pAVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerModule::LawnMowerModule() */

void __thiscall LawnMowerModule::LawnMowerModule(LawnMowerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678d1d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* LawnMowerModule::StaticNew() */

LawnMowerModule * LawnMowerModule::StaticNew(void)

{
  LawnMowerModule *this;
  
  this = ::operator_new(0x48);
  LawnMowerModule(this);
  return this;
}


/* LawnMowerModule::~LawnMowerModule() */

void __thiscall LawnMowerModule::~LawnMowerModule(LawnMowerModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678d1d0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LawnMowerModule::~LawnMowerModule() */

void __thiscall LawnMowerModule::~LawnMowerModule(LawnMowerModule *this)

{
  ~LawnMowerModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::isNeedBuyMower(int) */

void __thiscall LawnMowerModule::isNeedBuyMower(LawnMowerModule *this,int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  PVZDB *pPVar6;
  RtDbTable *this_00;
  BoardEntity *this_01;
  TRect *pTVar7;
  int iVar8;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  RtId aRStack_40 [8];
  TRect<int> aTStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)(*(long *)(gLawnApp + 0x9f0) + ((long)param_1 + 0x70) * 4) == 0) ||
      (*(char *)(*(long *)(gLawnApp + 0x9f0) + (long)param_1 + 0x850) == '\0')) ||
     (lVar4 = FUN_03e68ecc(param_1), lVar4 != 0)) {
    cVar2 = '\0';
  }
  else {
    LawnMower::GetAttackRect(param_1);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x29);
    while( true ) {
      bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
      cVar2 = '\0';
      if (!bVar1) break;
      pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_00 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x29);
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtDbTable::GetObjectForId(this_00,aRStack_40);
      nop();
      Sexy::RtId::~RtId(aRStack_40);
      cVar2 = (**(code **)(*(long *)this_01 + 0x3d8))(this_01);
      iVar8 = extraout_w1;
      if (((cVar2 != '\0') &&
          (cVar2 = BoardEntity::IsInRow(this_01,param_1), iVar8 = extraout_w1_00, cVar2 != '\0')) &&
         (cVar2 = Zombie::IsControlled((Zombie *)this_01), iVar8 = extraout_w1_01, cVar2 == '\0')) {
        uVar3 = operator|(8,7);
        cVar2 = (**(code **)(*(long *)this_01 + 0xb8))(this_01,uVar3);
        if (cVar2 == '\0') {
          if (*(code **)(*(long *)this_01 + 0x348) == Zombie::CollidesWithFlying) {
            cVar2 = Zombie::CollidesWithFlying();
          }
          else {
            cVar2 = (**(code **)(*(long *)this_01 + 0x348))(this_01);
          }
          if ((cVar2 == '\0') &&
             (cVar2 = Zombie::IsInvisible((Zombie *)this_01), iVar8 = extraout_w1_03, cVar2 == '\0')
             ) goto LAB_03e69088;
        }
        pTVar7 = (TRect *)(**(code **)(*(long *)this_01 + 0x178))(this_01);
        cVar2 = Sexy::TRect<int>::Intersects(aTStack_38,pTVar7);
        iVar8 = extraout_w1_02;
        if (cVar2 != '\0') break;
      }
LAB_03e69088:
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar8);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::onUpdate() */

void __thiscall LawnMowerModule::onUpdate(LawnMowerModule *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  Util *pUVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Util *this_02;
  long lVar7;
  CustomLevelEncourageModule *this_03;
  ADManager *pAVar8;
  int iVar9;
  float fVar10;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0x1c)) {
    fVar10 = (float)PVZ_Dt();
    *(float *)(this + 0x1c) = *(float *)(this + 0x1c) - fVar10;
    goto LAB_03e69280;
  }
  iVar5 = 0;
  iVar9 = -1;
  if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) < 1) goto LAB_03e69280;
  do {
    cVar2 = isNeedBuyMower(this,iVar5);
    if ((cVar2 != '\0') && (bVar1 = iVar9 != -1, iVar9 = iVar5, bVar1)) goto LAB_03e69280;
    iVar5 = iVar5 + 1;
  } while (iVar5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  if (iVar9 < 0) goto LAB_03e69280;
  cVar2 = CustomLevelUtils::IsCustomLevel();
  if ((cVar2 == '\0') ||
     (lVar7 = FUN_03e68e0c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar7 == 0)) {
LAB_03e69258:
    cVar2 = '\0';
  }
  else {
    lVar7 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    cVar2 = FUN_03e67d04(*(undefined1 *)(lVar7 + 0x18));
    if ((cVar2 == '\0') ||
       (iVar5 = FUN_03e67cec(*(undefined4 *)(gGameStateMgr + 0x1ec0)), iVar5 != 10))
    goto LAB_03e69258;
    this_03 = (CustomLevelEncourageModule *)
              FUN_03e68e0c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    cVar2 = CustomLevelEncourageModule::CanBuyMower(this_03);
  }
  if (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) {
LAB_03e692a8:
    pUVar6 = (Util *)CustomLevelUtils::IsCustomLevel();
    this_02 = pUVar6;
    if (((ulong)pUVar6 & 0xff) == 0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      this_02 = (Util *)0x0;
      if ((this_01 != (PlayerInfo *)0x0) &&
         (this_02 = (Util *)PlayerInfo::GetNumGems(this_01,SUB81(pUVar6,0)), 0x13 < (int)this_02)) {
        cVar4 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
        if (cVar4 != '\0') {
          pAVar8 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
          cVar4 = ADManager::CanWatchAD(pAVar8,0x16);
          if (cVar4 != '\0') {
            this_02 = (Util *)LawnApp::ShowBuyItemUI(gLawnApp,3);
            goto joined_r0x03e692f0;
          }
        }
        this_02 = (Util *)LawnApp::ShowBuyItemUI(gLawnApp,0);
      }
    }
  }
  else {
    bVar3 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    this_02 = (Util *)(ulong)bVar3;
    if (bVar3 == 0) goto LAB_03e692a8;
  }
joined_r0x03e692f0:
  if (cVar2 == '\0') {
    *(int *)(this + 0x20) = iVar9;
  }
  else {
    Android::Util::GetPackageName(this_02);
    if ((*(int *)(this + 0x40) < 5) &&
       (bVar1 = std::operator!=(asStack_10,"com.popcap.pvz2cthd.todaygame"), bVar1)) {
      LawnApp::ShowBuyItemUI(gLawnApp,2);
    }
    std::string::~string(asStack_10);
    *(int *)(this + 0x20) = iVar9;
  }
LAB_03e69280:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerModule::getIdleAnimWeights() */

void LawnMowerModule::getIdleAnimWeights(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  vector<int,std::allocator<int>> *in_x8;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(pRVar1 + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::onLawnMowerDie(LawnMower*) */

void __thiscall LawnMowerModule::onLawnMowerDie(LawnMowerModule *this,LawnMower *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  LawnMower *pLVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  string asStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  uVar3 = ArenaBattleModule::getMowerAudio((ArenaBattleModule *)this);
  FUN_05475d88(asStack_28,uVar3);
  if ((0 < *(int *)(this + 0x18)) &&
     (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    uVar2 = FUN_03e67cf4(*(undefined4 *)(param_1 + 200));
    pLVar4 = GameObject::Create<LawnMower>();
    uVar3 = ArenaBattleModule::getMowerAnim((ArenaBattleModule *)this);
    getIdleAnimWeights();
    LawnMower::LawnMowerInitialize(pLVar4,uVar3,uVar2,asStack_28,avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_03e67cfc(pLVar4 + 0x100,*(undefined4 *)(pRVar5 + 0x70));
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::onBuyItemOK(int) */

void __thiscall LawnMowerModule::onBuyItemOK(LawnMowerModule *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  LawnMower *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 - 2U < 2) || (param_1 == 0)) {
    if (param_1 == 2) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
      iVar1 = *(int *)(this + 0x20);
    }
    else {
      iVar1 = *(int *)(this + 0x20);
    }
    if (-1 < iVar1) {
      std::string::string(asStack_48,"buy_mower");
      nop();
      std::string::string(asStack_40,"");
      nop();
      BuyItemUI::GetSkuByType((BuyItemUI *)asStack_38,0);
      *(undefined4 *)(gLawnApp + 0x2a08) = 1;
      puVar3 = gMessageRouter;
      FUN_05475d88(asStack_30,asStack_48);
      FUN_05475d88(asStack_28,asStack_40);
      FUN_05475d88(asStack_20,asStack_38);
      MessageRouter::
      Post<std::string_const&,std::string_const&,std::string_const&,std::string,std::string,std::string>
                ((MessageRouter *)puVar3,Message::GameCharge,asStack_30,asStack_28,asStack_20);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::string::~string(asStack_30);
      this_00 = GameObject::Create<LawnMower>();
      uVar4 = ArenaBattleModule::getMowerAnim((ArenaBattleModule *)this);
      uVar2 = *(undefined4 *)(this + 0x20);
      uVar5 = ArenaBattleModule::getMowerAudio((ArenaBattleModule *)this);
      getIdleAnimWeights();
      LawnMower::LawnMowerInitialize(this_00,uVar4,uVar2,uVar5,asStack_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
      LawnMower::StartMower(this_00);
      *(undefined4 *)(this + 0x1c) = 0x3f800000;
      std::string::~string(asStack_38);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
    }
    *(undefined4 *)(this + 0x20) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::initializeModule() */

void __thiscall LawnMowerModule::initializeModule(LawnMowerModule *this)

{
  LawnApp *pLVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  DangerRoomManager *pDVar6;
  DangerRoomInfo *pDVar7;
  undefined8 uVar8;
  WorldDataManager *this_00;
  string asStack_c0 [8];
  string asStack_b8 [8];
  DangerRoomInfo aDStack_b0 [168];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x1c) = 0xbf800000;
  local_8 = ___stack_chk_guard;
  lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar5 + 0x112) == '\0') {
    lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    iVar4 = 0;
    if (*(char *)(lVar5 + 0x117) == '\0') {
      lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      iVar4 = 0;
      if (*(char *)(lVar5 + 0x118) == '\0') {
        Set8BytesTo0(asStack_c0);
        uVar8 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        FUN_05475d88(asStack_b8,uVar8);
        this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        lVar5 = WorldDataManager::FindWorldDataByLevelName(this_00,asStack_b8);
        if (lVar5 == 0) {
          uVar2 = 0;
        }
        else {
          thunk_FUN_05475e00(asStack_c0,lVar5 + 0x38);
          pLVar1 = gLawnApp;
          FUN_05475d88((string *)aDStack_b0,asStack_c0);
          uVar2 = LawnApp::IsWorldHaveMower(pLVar1,(string *)aDStack_b0);
          std::string::~string((string *)aDStack_b0);
        }
        iVar4 = BoardHelpers::GetLevelOverride_MowerSpawn();
        if (iVar4 == 1) {
          uVar2 = 0;
        }
        for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1)
        {
          *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar4 + 0x850) = uVar2;
        }
        std::string::~string(asStack_b8);
        std::string::~string(asStack_c0);
      }
      else {
        for (; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1) {
          *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar4 + 0x850) = 1;
        }
      }
    }
    else {
      for (; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1) {
        *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar4 + 0x850) = 1;
      }
    }
  }
  else {
    pDVar6 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    pDVar7 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar6,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar7);
    for (iVar4 = 0; iVar3 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar3; iVar4 = iVar4 + 1) {
      lVar5 = *(long *)(gLawnApp + 0x9f0);
      pDVar6 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      uVar2 = DangerRoomManager::IsHaveMower(pDVar6,iVar4);
      *(undefined1 *)(lVar5 + iVar4 + 0x850) = uVar2;
    }
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::createMowers() */

void __thiscall LawnMowerModule::createMowers(LawnMowerModule *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  LawnMower *pLVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  DangerRoomManager *this_00;
  DangerRoomInfo *pDVar7;
  int iVar8;
  string asStack_c0 [8];
  string asStack_b8 [8];
  vector<int,std::allocator<int>> avStack_b0 [8];
  int local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = ArenaBattleModule::getMowerAnim((ArenaBattleModule *)this);
  uVar3 = ArenaBattleModule::getMowerAudio((ArenaBattleModule *)this);
  FUN_05475d88(asStack_c0,uVar3);
  lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar4 + 0x112) == '\0') {
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    if (*(int *)(lVar4 + 0xfc) < 1) goto LAB_03e69dc0;
  }
  else {
    lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x68));
    FUN_05475d88(asStack_b8,lVar4 + 0x40);
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    pDVar7 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(this_00,false);
    DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)avStack_b0,pDVar7);
    DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)avStack_b0);
    std::string::~string(asStack_b8);
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    if (*(int *)(lVar4 + 0xfc) < 1) goto LAB_03e69dc0;
    if (1 < local_a8) {
      iVar8 = 0;
      do {
        if ((*(int *)(lVar4 + ((long)iVar8 + 0x70) * 4) != 0) &&
           (*(char *)(lVar4 + iVar8 + 0x850) != '\0')) {
          pLVar5 = GameObject::Create<LawnMower>();
          getIdleAnimWeights();
          LawnMower::LawnMowerInitialize(pLVar5,uVar2,iVar8,asStack_c0,(DangerRoomInfo *)avStack_b0)
          ;
          std::vector<int,std::allocator<int>>::~vector(avStack_b0);
          pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
          FUN_03e67cfc(pLVar5 + 0x100,*(undefined4 *)(pRVar6 + 0x70));
          FUN_03e67e40(pLVar5 + 0xcc);
        }
        iVar8 = iVar8 + 1;
        lVar4 = *(long *)(gLawnApp + 0x9f0);
      } while (iVar8 < *(int *)(lVar4 + 0xfc));
      goto LAB_03e69dc0;
    }
  }
  iVar8 = 0;
LAB_03e69d3c:
  do {
    if (*(int *)(lVar4 + ((long)iVar8 + 0x70) * 4) != 0) {
      if (*(char *)(lVar4 + iVar8 + 0x850) != '\0') {
        pLVar5 = GameObject::Create<LawnMower>();
        getIdleAnimWeights();
        iVar1 = iVar8 + 1;
        LawnMower::LawnMowerInitialize(pLVar5,uVar2,iVar8,asStack_c0,avStack_b0);
        std::vector<int,std::allocator<int>>::~vector(avStack_b0);
        pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
        FUN_03e67cfc(pLVar5 + 0x100,*(undefined4 *)(pRVar6 + 0x70));
        lVar4 = *(long *)(gLawnApp + 0x9f0);
        iVar8 = iVar1;
        if (*(int *)(lVar4 + 0xfc) <= iVar1) break;
        goto LAB_03e69d3c;
      }
    }
    iVar8 = iVar8 + 1;
    lVar4 = *(long *)(gLawnApp + 0x9f0);
  } while (iVar8 < *(int *)(lVar4 + 0xfc));
LAB_03e69dc0:
  std::string::~string(asStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerModule::onReadyForMowers() */

void __thiscall LawnMowerModule::onReadyForMowers(LawnMowerModule *this)

{
  char cVar1;
  
  cVar1 = FUN_03e67cf0(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x118));
  if ((cVar1 == '\0') && (cVar1 = CustomLevelUtils::IsCustomLevel(), cVar1 == '\0')) {
    createMowers(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::registerForEvents() */

void __thiscall LawnMowerModule::registerForEvents(LawnMowerModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<LawnMowerModule,void(LawnMowerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReadyForMowers);
  Sexy::Delegate0::Delegate0<LawnMowerModule,void(LawnMowerModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReadyForLawnItems,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLawnMowerDie);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<LawnMowerModule,void(LawnMowerModule::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerDie,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyItemOK);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LawnMowerModule,void(LawnMowerModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyItemOK,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyItemCancel);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<LawnMowerModule,void(LawnMowerModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyItemCancel,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::initializeMowerRespawn() */

void __thiscall LawnMowerModule::initializeMowerRespawn(LawnMowerModule *this)

{
  undefined4 uVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  int iVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_c = 0x7fffffff;
  if (pRVar3[0x74] == (ResilienceTutorialIntroProperties)0x0) {
    local_c = 0;
  }
  uVar1 = BoardHelpers::GetLevelOverride_MowerSpawn();
  switch(uVar1) {
  case 1:
  case 2:
    local_c = 0;
    break;
  case 3:
    local_c = 0x7fffffff;
    break;
  case 4:
    local_c = 1;
  }
  for (iVar4 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar2; iVar4 = iVar4 + 1) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0x28),&local_c);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnMowerModule::postInitialize() */

void __thiscall LawnMowerModule::postInitialize(LawnMowerModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar3 == 0) ||
     (lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar3 + 0x112) == '\0')) {
    iVar1 = BoardHelpers::GetLevelOverride_MowerSpawn();
    for (iVar4 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar2; iVar4 = iVar4 + 1) {
      *(bool *)(*(long *)(gLawnApp + 0x9f0) + (long)iVar4 + 0x850) = iVar1 != 1;
    }
  }
  initializeMowerRespawn(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::getMowerBoardEntitiesInRow(unsigned char) */

void LawnMowerModule::getMowerBoardEntitiesInRow(uchar param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  RtObject *this;
  byte in_w1;
  int iVar4;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  LawnMower *local_40;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x28);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    local_40 = Sexy::RtObject::Cast<LawnMower>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar4 = extraout_w1;
    if ((local_40 != (LawnMower *)0x0) &&
       (uVar2 = FUN_03e67cf4(*(undefined4 *)(local_40 + 200)), iVar4 = extraout_w1_00,
       uVar2 == in_w1)) {
      std::vector<LawnMower*,std::allocator<LawnMower*>>::push_back
                ((vector<LawnMower*,std::allocator<LawnMower*>> *)in_x8,&local_40);
      iVar4 = extraout_w1_01;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::GetUntriggeredMowerInRow(unsigned char) */

void LawnMowerModule::GetUntriggeredMowerInRow(uchar param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getMowerBoardEntitiesInRow(param_1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar4 = *plVar3;
    iVar2 = FUN_03e67cf8(*(undefined4 *)(lVar4 + 0xcc));
    if (iVar2 != 3) goto LAB_03e6a5ec;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  lVar4 = 0;
LAB_03e6a5ec:
  std::vector<LawnMower*,std::allocator<LawnMower*>>::~vector
            ((vector<LawnMower*,std::allocator<LawnMower*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* LawnMowerModule::HasUntriggeredMowerInRow(unsigned char) */

bool LawnMowerModule::HasUntriggeredMowerInRow(uchar param_1)

{
  long lVar1;
  
  lVar1 = GetUntriggeredMowerInRow(param_1);
  return lVar1 != 0;
}


/* LawnMowerModule::rowCanAcceptNewMower(int) */

byte __thiscall LawnMowerModule::rowCanAcceptNewMower(LawnMowerModule *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(*(long *)(gLawnApp + 0x9f0) + (long)param_1 * 4 + 0x1c0) != 0) {
    bVar1 = HasUntriggeredMowerInRow((uchar)this);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* LawnMowerModule::shouldCreateMowerInRow(unsigned char) */

undefined1 __thiscall LawnMowerModule::shouldCreateMowerInRow(LawnMowerModule *this,uchar param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = rowCanAcceptNewMower(this,(uint)param_1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + (long)(int)(uint)param_1 + 0x850);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnMowerModule::prepareMowerForRow(int) */

void __thiscall LawnMowerModule::prepareMowerForRow(LawnMowerModule *this,int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LawnMower *pLVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  string asStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = shouldCreateMowerInRow(this,(uchar)param_1);
  if (cVar1 != '\0') {
    uVar2 = ArenaBattleModule::getMowerAnim((ArenaBattleModule *)this);
    uVar3 = ArenaBattleModule::getMowerAudio((ArenaBattleModule *)this);
    FUN_05475d88(asStack_28,uVar3);
    pLVar4 = GameObject::Create<LawnMower>();
    getIdleAnimWeights();
    LawnMower::LawnMowerInitialize(pLVar4,uVar2,param_1,asStack_28,avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    FUN_03e67cfc(pLVar4 + 0x100,*(undefined4 *)(pRVar5 + 0x70));
    std::string::~string(asStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnMowerModule::AwardMowers(int, bool) */

void __thiscall LawnMowerModule::AwardMowers(LawnMowerModule *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uchar uVar4;
  
  iVar3 = 0;
  if (param_2) {
    while( true ) {
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      if ((iVar2 <= iVar3) || (param_1 < 1)) break;
      cVar1 = hasMowerInSaveData(this,(uchar)iVar3);
      if (cVar1 == '\0') {
        param_1 = param_1 + -1;
        AddMowerToSaveData(this,(uchar)iVar3);
        prepareMowerForRow(this,iVar3);
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
    addPreparedMowers(this);
    return;
  }
  do {
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    uVar4 = (uchar)iVar3;
    if (iVar2 <= iVar3) {
      return;
    }
    while( true ) {
      iVar3 = iVar3 + 1;
      if (param_1 < 1) {
        return;
      }
      cVar1 = hasMowerInSaveData(this,uVar4);
      if (cVar1 != '\0') break;
      param_1 = param_1 + -1;
      AddMowerToSaveData(this,uVar4);
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      uVar4 = (uchar)iVar3;
      if (iVar2 <= iVar3) {
        return;
      }
    }
  } while( true );
}

