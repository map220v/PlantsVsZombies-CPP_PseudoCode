// Class: MiniGamePerksModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::CheckCanCredit(Zombie*) */

void __thiscall MiniGamePerksModule::CheckCanCredit(MiniGamePerksModule *this,Zombie *param_1)

{
  byte bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    bVar1 = 1;
  }
  else {
    std::string::string(asStack_10,"mirror_copy");
    bVar1 = Zombie::HasTag(param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    bVar1 = bVar1 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* MiniGamePerksModule::onLevelEnded() */

void MiniGamePerksModule::onLevelEnded(void)

{
  return;
}


/* MiniGamePerksModule::gameplayStarted() */

void __thiscall MiniGamePerksModule::gameplayStarted(MiniGamePerksModule *this)

{
  this[0x20] = (MiniGamePerksModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::StaticClassInit() */

void MiniGamePerksModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerksModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0389d2fc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerksModule::StaticGetClass() */

long * MiniGamePerksModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerksModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerksModule::onZombieDestroyed(Zombie*) */

void __thiscall MiniGamePerksModule::onZombieDestroyed(MiniGamePerksModule *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0389601c(*(undefined4 *)(param_1 + 0x24));
  if ((iVar2 != 1) && (cVar1 = Zombie::HasHypnotized(param_1), cVar1 == '\0')) {
    nop();
    return;
  }
  return;
}


/* MiniGamePerksModule::onZombieHypnotized(Zombie*) */

void __thiscall MiniGamePerksModule::onZombieHypnotized(MiniGamePerksModule *this,Zombie *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::HasHypnotized(param_1);
  if (cVar1 != '\0') {
    return;
  }
  nop();
  Zombie::SetHasHypnotized(param_1,true);
  return;
}


/* MiniGamePerksModule::MiniGamePerksModule() */

void __thiscall MiniGamePerksModule::MiniGamePerksModule(MiniGamePerksModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066b1530;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (MiniGamePerksModule)0x0;
  *(undefined4 *)(this + 0x24) = 99999999;
  return;
}


/* MiniGamePerksModule::StaticNew() */

MiniGamePerksModule * MiniGamePerksModule::StaticNew(void)

{
  MiniGamePerksModule *this;
  
  this = ::operator_new(0x38);
  MiniGamePerksModule(this);
  return this;
}


/* MiniGamePerksModule::~MiniGamePerksModule() */

void __thiscall MiniGamePerksModule::~MiniGamePerksModule(MiniGamePerksModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066b1530;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* MiniGamePerksModule::~MiniGamePerksModule() */

void __thiscall MiniGamePerksModule::~MiniGamePerksModule(MiniGamePerksModule *this)

{
  ~MiniGamePerksModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::createAddCreditEffect(int) */

void __thiscall MiniGamePerksModule::createAddCreditEffect(MiniGamePerksModule *this,int param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  Effect_FloatingText *pEVar2;
  PresentDisplayRect *this_01;
  wstring *pwVar3;
  code *pcVar4;
  TPoint aTStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  int local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 != '\0') {
    pEVar2 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)local_18,"UIMiniGameCreditUI");
    UIWidget::GetWidgetBySheetName((string *)local_18);
    UIWidget::GetDrawRect();
    std::string::~string((string *)local_18);
    nop();
    Board::GetBoardBaseOffset();
    Sexy::Point::Point(aPStack_40,local_20 / 2,0);
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator+((TPoint<int> *)&local_30,(TPoint *)aPStack_40);
    Sexy::Point::Point(aPStack_38,(TPoint *)local_18);
    Board::TranslateUIWidgetPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_38);
    Sexy::TPoint<int>::operator-=((TPoint<int> *)aPStack_38,aTStack_48);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_30);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_18,(float)*(int *)(gLawnApp + 0xd4) * 0.95,
               (float)*(int *)(gLawnApp + 0xd8) * 0.18);
    local_30 = local_18[0];
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)pEVar2,(SexyVector2 *)&local_30,0xdbba1);
    Effect_FloatingText::SetStyle(pEVar2,9);
    pcVar4 = *(code **)(*(long *)pEVar2 + 0x78);
    Sexy::Color::Color((Color *)local_18,1);
    (*pcVar4)(pEVar2,(string *)local_18);
    StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)pEVar2,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  }
  pEVar2 = (Effect_FloatingText *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetDuration(pEVar2,1.5);
  this_01 = (PresentDisplayRect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PresentDisplayRect::SetPAMScale(this_01,1.5);
  TodStringTranslate(L"[PLANT_WARS_CREDIT_TEXT]");
  TodReplaceNumberString((wstring *)local_18,L"{NUMBER}",param_1);
  FUN_05476c50((string *)local_18);
  pwVar3 = (wstring *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_FloatingText::SetText(pwVar3);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::GetTargetCredit(std::string const&) */

void __thiscall MiniGamePerksModule::GetTargetCredit(MiniGamePerksModule *this,string *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     *)(pRVar2 + 0x58),param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(pRVar2 + 0x58));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar4 = 0;
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar4 = *(undefined4 *)(lVar3 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::initializePerks() */

void MiniGamePerksModule::initializePerks(void)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  GridItemPoolEntry aGStack_30 [8];
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetUnlockedPerkList();
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0xae);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aGStack_30);
    (*pcVar6)(extraout_x0,aRStack_38,local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
  }
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::~vector
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::onInit() */

void MiniGamePerksModule::onInit(void)

{
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *extraout_x0;
  code *pcVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  GridItemPoolEntry aGStack_30 [8];
  undefined4 uStack_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::LazySingleton<MiniGamePerkMgr>::GetInstance();
  MiniGamePerkMgr::GetUnlockedPerkList();
  uStack_48 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_20);
  uStack_40 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_48,(__normal_iterator *)&uStack_40), bVar1)
  {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_48);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_30,pGVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
    pcVar4 = (char *)FUN_0547429c(lVar3 + 0x18);
    uVar5 = Sexy::RtClass::StaticGetClassNamed(pcVar4);
    GameObject::Create(uVar5,0xae);
    nop();
    pcVar6 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aGStack_30);
    (*pcVar6)(extraout_x0,aRStack_38,uStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&uStack_48);
  }
  std::vector<MiniGamePerkData,std::allocator<MiniGamePerkData>>::~vector
            ((vector<MiniGamePerkData,std::allocator<MiniGamePerkData>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::addPowerUpsToBoard() */

void MiniGamePerksModule::addPowerUpsToBoard(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PVZDB *pPVar5;
  RtDbTable *this;
  RtObject *this_00;
  MiniGamePerkItem *this_01;
  long lVar6;
  PowerupManager *pPVar7;
  string *psVar8;
  ResourceInfo *pRVar9;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int iVar10;
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0xae);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this = (RtDbTable *)PVZDB::GetTable(pPVar5,0xae);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(this,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar10 = extraout_w1;
    if (((this_00 != (RtObject *)0x0) &&
        (this_01 = Sexy::RtObject::Cast<MiniGamePerkItem>(this_00), iVar10 = extraout_w1_00,
        this_01 != (MiniGamePerkItem *)0x0)) &&
       ((bVar1 = Sexy::RtObject::IsA<MiniGamePerkItemKillAllZombies>((RtObject *)this_01), !bVar1 ||
        (iVar2 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar10 = extraout_w1_01,
        1 < iVar2 - 1U)))) {
      MiniGamePerk::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      uVar4 = FUN_0547429c(lVar6 + 0x10);
      Sexy::StrFormat("powerup_%s",asStack_38,uVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pPVar7 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      PowerupManager::AddPowerup(pPVar7,asStack_38,false);
      pPVar7 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
      ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar8);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      lVar6 = PowerupManager::GetBasePowerup(pPVar7,(PowerupType *)pRVar9);
      uVar3 = Sexy::Font::GetLineSpacingOffset((Font *)this_01);
      FUN_03896004(lVar6 + 0x20,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      std::string::~string(asStack_38);
      iVar10 = extraout_w1_02;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar10);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::onLoadComplete() */

void MiniGamePerksModule::onLoadComplete(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  PVZDB *pPVar5;
  RtDbTable *this;
  RtObject *this_00;
  MiniGamePerkItem *this_01;
  long lVar6;
  PowerupManager *pPVar7;
  string *psVar8;
  ResourceInfo *pRVar9;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int iVar10;
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0xae);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this = (RtDbTable *)PVZDB::GetTable(pPVar5,0xae);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtDbTable::GetObjectForId(this,aRStack_30);
    nop();
    Sexy::RtId::~RtId(aRStack_30);
    iVar10 = extraout_w1;
    if (((this_00 != (RtObject *)0x0) &&
        (this_01 = Sexy::RtObject::Cast<MiniGamePerkItem>(this_00), iVar10 = extraout_w1_00,
        this_01 != (MiniGamePerkItem *)0x0)) &&
       ((bVar1 = Sexy::RtObject::IsA<MiniGamePerkItemKillAllZombies>((RtObject *)this_01), !bVar1 ||
        (iVar2 = MiniGameCollectionUtils::GetMiniGameCollectionType(), iVar10 = extraout_w1_01,
        1 < iVar2 - 1U)))) {
      MiniGamePerk::GetProps();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      uVar4 = FUN_0547429c(lVar6 + 0x10);
      Sexy::StrFormat("powerup_%s",asStack_38,uVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pPVar7 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      PowerupManager::AddPowerup(pPVar7,asStack_38,false);
      pPVar7 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
      ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar8);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      lVar6 = PowerupManager::GetBasePowerup(pPVar7,(PowerupType *)pRVar9);
      uVar3 = Sexy::Font::GetLineSpacingOffset((Font *)this_01);
      FUN_03896004(lVar6 + 0x20,uVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      std::string::~string(asStack_38);
      iVar10 = extraout_w1_02;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar10);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerksModule::registerForEvents() */

void __thiscall MiniGamePerksModule::registerForEvents(MiniGamePerksModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
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
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<MiniGamePerksModule,void(MiniGamePerksModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieHypnotized);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<MiniGamePerksModule,void(MiniGamePerksModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieHypnotized,&local_a0);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<MiniGamePerksModule,void(MiniGamePerksModule::*)()>
            (aDStack_38,aCStack_80);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

