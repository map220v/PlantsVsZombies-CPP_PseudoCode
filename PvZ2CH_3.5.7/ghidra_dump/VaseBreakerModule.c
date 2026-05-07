// Class: VaseBreakerModule


/* VaseBreakerModule::checkPreventSave() */

VaseBreakerModule __thiscall VaseBreakerModule::checkPreventSave(VaseBreakerModule *this)

{
  return this[0x60];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::gameplayStarted() */

void VaseBreakerModule::gameplayStarted(void)

{
  char cVar1;
  int iVar2;
  UIWidget *pUVar3;
  float *pfVar4;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"UICoinBank");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    pfVar4 = (float *)UIWidget::GetPositionOffset(pUVar3);
    iVar2 = FUN_0497fd3c();
    UIWidget::SetPositionOffset
              (*pfVar4 - (float)iVar2,(int)((ulong)*(undefined8 *)pfVar4 >> 0x20),pUVar3);
  }
  std::string::string((string *)&local_10,"UIShovel");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar3,false);
  }
  std::string::string((string *)&local_10,"UIPowerupHolder");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pUVar3 != (UIWidget *)0x0) {
    UIWidget::SetAnchorType(pUVar3,9);
    UIWidget::SetParentAnchorType(pUVar3,9);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,20.0,14.0);
    UIWidget::SetPositionOffset(local_10,local_c,pUVar3);
    cVar1 = CustomLevelUtils::IsCustomLevel();
    if (cVar1 != '\0') {
      UIWidget::SetVisible(pUVar3,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::StaticClassInit() */

void VaseBreakerModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseConfiguration");
    (*pcVar3)(plVar2,asStack_10,FUN_049836a4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerModule");
    (*pcVar3)(plVar2,asStack_10,FUN_0498389c,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerModule::StaticGetClass() */

long * VaseBreakerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerModule::GetClass() const */

long * VaseBreakerModule::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::ForceStartEndlessAtWave(int) */

void __thiscall VaseBreakerModule::ForceStartEndlessAtWave(VaseBreakerModule *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  hash_node *phVar3;
  hash_node **pphVar4;
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (this[0x61] == (VaseBreakerModule)0x0) {
      Sexy::OutputDebugStrF((wchar_t *)"*** Overriding VaseBreaker endless level to %d!\n");
      phVar3 = (hash_node *)ProfileUtils::Profile();
      pphVar4 = (hash_node **)ArcadePropertySheet::Get();
      eastl::
      hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
      ::hashtable_iterator_base(ahStack_18,phVar3,pphVar4);
      PlantAnimRig_HoyaCordata::getIdleAnimationName();
      ArcadeProgressDatabase::ResetCurrentEndlessWave
                ((ArcadeProgressDatabase *)ahStack_18,asStack_20);
      while (iVar1 = ArcadeProgressDatabase::GetCurrentEndlessWave
                               ((ArcadeProgressDatabase *)ahStack_18,asStack_20), iVar1 < param_1) {
        ArcadeProgressDatabase::CompleteCurrentEndlessWave
                  ((ArcadeProgressDatabase *)ahStack_18,asStack_20);
      }
      ArcadeProgressDatabase::SetCurrentVaseBreakerEndlessState
                ((ArcadeProgressDatabase *)ahStack_18,asStack_20,0,0);
      std::string::~string(asStack_20);
      uVar2 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::checkWhetherCukeShouldBeUnlocked() const */

void VaseBreakerModule::checkWhetherCukeShouldBeUnlocked(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::GameFeatureIsUnlocked(this,0x22);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"egypt2");
    iVar2 = PlayerInfo::GetWorldMapEventStatus(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (iVar2 == 3) {
      PlayerInfo::SetGameFeatureUnlockState(this,0x22,1);
      std::string::string(asStack_10,"poweruptacticalcuke");
      PlayerInfo::SetPowerupUnlockState(this,asStack_10,true);
      std::string::~string(asStack_10);
      nop();
      uVar3 = 1;
      goto LAB_04980ea4;
    }
  }
  uVar3 = 0;
LAB_04980ea4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::spawnVase(Sexy::Point const&) const */

void __thiscall VaseBreakerModule::spawnVase(VaseBreakerModule *this,Point *param_1)

{
  undefined8 extraout_x0;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"vase");
  Board::AddGridItem(this_00,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::SpawnVaseImmediately(VaseConfiguration const&, Sexy::Point const&) */

void __thiscall
VaseBreakerModule::SpawnVaseImmediately
          (VaseBreakerModule *this,VaseConfiguration *param_1,Point *param_2)

{
  GridItemVase *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GridItemVase *)spawnVase(this,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1);
  GridItemVase::SetContentsType(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  GridItemVase::SetColorByContents(this_00,(bool)param_1[8]);
  GridItemVase::CreateAnimRig(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* VaseBreakerModule::GetCurrentEndlessWave() const */

void __thiscall VaseBreakerModule::GetCurrentEndlessWave(VaseBreakerModule *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  ArcadeModule::GetEndlessWave();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::StartVaseBreakerGameplay() */

void __thiscall VaseBreakerModule::StartVaseBreakerGameplay(VaseBreakerModule *this)

{
  int iVar1;
  long lVar2;
  SeedBankNew *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  this[0x61] = (VaseBreakerModule)0x1;
  local_8 = ___stack_chk_guard;
  if (this[0x60] != (VaseBreakerModule)0x0) {
    this[0x60] = (VaseBreakerModule)0x0;
  }
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = FUN_0497efe8(*(undefined4 *)(this_01 + 0x104));
  if (iVar1 != 5) {
    Board::StartLevel(this_01);
  }
  std::string::string(asStack_10,"UISeedBank");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 != 0) {
    nop();
    SeedBankNew::SetAllPacketsReady(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::bringUpPowerupChooser() */

void VaseBreakerModule::bringUpPowerupChooser(void)

{
  char cVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(gLawnApp + 0x2998) == '\0') {
    cVar1 = checkWhetherCukeShouldBeUnlocked();
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    std::string::string(asStack_10,"poweruptacticalcuke");
    cVar2 = PlayerInfo::GetPowerupUnlockState(pPVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"poweruptacticalcuke");
      Board::AddPowerup(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    if (cVar1 != '\0') {
      pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
      std::string::string(asStack_10,"poweruptacticalcuke");
      PlayerInfo::ModifyPowerupUses(pPVar3,asStack_10,3);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::onLoadComplete() */

void __thiscall VaseBreakerModule::onLoadComplete(VaseBreakerModule *this)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  PlantfoodUI *this_00;
  Toggles *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  lVar3 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar3 != 0) {
    uVar2 = true;
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar1 = (**(code **)(*(long *)pRVar4 + 0xa8))();
    if (cVar1 == '\0') {
      this_01 = (Toggles *)Toggles::GetInstance();
      std::string::string(asStack_10,"AllowPlantfoodPurchaseInVaseBreaker");
      uVar2 = Toggles::IsEnabled(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    nop();
    PlantfoodUI::SetForceShowPlus(this_00,(bool)uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::GetPowerUpTutorial() */

void VaseBreakerModule::GetPowerUpTutorial(void)

{
  long lVar1;
  char cVar2;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar3;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  cVar2 = (**(code **)(*(long *)pRVar3 + 0xa8))();
  if (cVar2 == '\0') {
    LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::RevealAllContents() */

void __thiscall VaseBreakerModule::RevealAllContents(VaseBreakerModule *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  ResourceInfo *pRVar3;
  GridItemVase *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    if (pRVar3 != (ResourceInfo *)0x0) {
      nop();
      GridItemVase::SetContentsRevealed(this_00,true);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::HideAllContents() */

void __thiscall VaseBreakerModule::HideAllContents(VaseBreakerModule *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  ResourceInfo *pRVar3;
  GridItemVase *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    if (pRVar3 != (ResourceInfo *)0x0) {
      nop();
      GridItemVase::SetContentsRevealed(this_00,false);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerModule::VaseBreakerModule() */

void __thiscall VaseBreakerModule::VaseBreakerModule(VaseBreakerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_06918bd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  this[0x60] = (VaseBreakerModule)0x0;
  this[0x61] = (VaseBreakerModule)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* VaseBreakerModule::StaticNew() */

VaseBreakerModule * VaseBreakerModule::StaticNew(void)

{
  VaseBreakerModule *this;
  
  this = ::operator_new(0x80);
  VaseBreakerModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::postInitialize() */

void __thiscall VaseBreakerModule::postInitialize(VaseBreakerModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  VaseBreakerArcadeModule *pVVar4;
  int local_14;
  int local_10 [2];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  FUN_04981dfc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  FUN_04981e08(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar1 = (**(code **)(*(long *)pRVar3 + 0xa8))();
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = ArcadeModule::GetEndlessWave();
    if (iVar2 == 0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ArcadeModule::StartEndless();
      pVVar4 = (VaseBreakerArcadeModule *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      VaseBreakerArcadeModule::SetEndlessState(pVVar4,0,0);
    }
    local_14 = 0;
    local_10[0] = 0;
    pVVar4 = (VaseBreakerArcadeModule *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    VaseBreakerArcadeModule::GetEndlessState(pVVar4,&local_14,local_10);
    Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),local_14);
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),local_10[0]);
  }
  FUN_0497fa14(*(long *)(gLawnApp + 0x9f0) + 0xc24);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::onClearBoard() */

void VaseBreakerModule::onClearBoard(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  CollectableSeedPacket *pCVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x2e);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pCVar3 = Sexy::RtObject::Cast<CollectableSeedPacket>(this);
    if (pCVar3 != (CollectableSeedPacket *)0x0) {
      (**(code **)(*(long *)pCVar3 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::isCurrentWaveComplete() */

void VaseBreakerModule::isCurrentWaveComplete(void)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  long in_x0;
  wchar16 *pwVar4;
  long lVar5;
  RtMixedPtrBase *this;
  ulong uVar6;
  string *psVar7;
  LineBreakCategory *pLVar8;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  ulong uVar9;
  undefined8 uVar10;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar8 = aLStack_18;
    std::string::string(asStack_10,"ForceFinishEndlessWave");
    bVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_10,pLVar8,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (bVar3 != 0) {
      psVar7 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string(asStack_10,"ForceFinishEndlessWave");
      CheatManager::SetToggleValue(psVar7,SUB81(asStack_10,0));
      std::string::~string(asStack_10);
      nop();
      goto LAB_049824c4;
    }
    cVar2 = PlantWarsZombiesDeadWinCon::Check();
    if (cVar2 != '\0') {
      uVar10 = *(undefined8 *)(in_x0 + 0x38);
      bVar3 = 0;
      lVar5 = FUN_0497f200(uVar10,*(undefined8 *)(in_x0 + 0x40));
      uVar9 = 0;
      if (lVar5 != 0) {
        do {
          if (bVar3 != 0) break;
          uVar1 = uVar9 + 1;
          this = (RtMixedPtrBase *)FUN_0497f20c(uVar10,uVar9);
          bVar3 = Sexy::RtMixedPtrBase::IsValid(this);
          uVar10 = *(undefined8 *)(in_x0 + 0x38);
          uVar6 = FUN_0497f200(uVar10,*(undefined8 *)(in_x0 + 0x40));
          uVar9 = uVar1;
        } while (uVar1 < uVar6);
      }
      bVar3 = bVar3 ^ 1;
      goto LAB_049824c4;
    }
  }
  bVar3 = 0;
LAB_049824c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::onUpdate() */

void __thiscall VaseBreakerModule::onUpdate(VaseBreakerModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  VaseBreakerModule VVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  ArcadeModule *this_01;
  VaseBreakerArcadeModule *this_02;
  VaseBreakerFlowModule *this_03;
  Board *this_04;
  VaseBreakerModule local_11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar2 = (**(code **)(*(long *)pRVar6 + 0xa8))();
  if (((cVar2 != '\0') && (VVar1 = this[0x60], VVar1 == (VaseBreakerModule)0x0)) &&
     (cVar2 = isCurrentWaveComplete(), cVar2 != '\0')) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58);
    this[0x60] = (VaseBreakerModule)0x1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar3 = ArcadeModule::GetEndlessWave();
    this_04 = *(Board **)(gLawnApp + 0x9f0);
    uVar4 = Board::GetPlantfoodCount(this_04);
    iVar5 = Board::GetSunCurrency(this_04);
    local_11 = VVar1;
    Set8BytesTo0(asStack_10);
    this_01 = (ArcadeModule *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ArcadeModule::CompleteCurrentEndlessWave(this_01,(bool *)&local_11,asStack_10);
    this_02 = (VaseBreakerArcadeModule *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    VaseBreakerArcadeModule::SetEndlessState(this_02,iVar5,uVar4 & 0xff);
    this_03 = (VaseBreakerFlowModule *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    VaseBreakerFlowModule::StartEndlessVictoryFlow(this_03,iVar3,(bool)local_11,asStack_10);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerModule::checkWinCondition() */

undefined8 __thiscall VaseBreakerModule::checkWinCondition(VaseBreakerModule *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  undefined8 uVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar1 = (**(code **)(*(long *)pRVar2 + 0xa8))();
  if (cVar1 != '\0') {
    return 0;
  }
  uVar3 = isCurrentWaveComplete();
  return uVar3;
}


/* VaseBreakerModule::ConfigureVasesFromPropertySheet() */

void __thiscall VaseBreakerModule::ConfigureVasesFromPropertySheet(VaseBreakerModule *this)

{
  long *extraout_x0;
  
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::clear
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)(this + 0x20));
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  (**(code **)(*extraout_x0 + 0xa0))();
  return;
}


/* VaseBreakerModule::~VaseBreakerModule() */

void __thiscall VaseBreakerModule::~VaseBreakerModule(VaseBreakerModule *this)

{
  *(undefined ***)this = &PTR_GetClass_06918bd0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::~vector
            ((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
             (this + 0x38));
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::~vector
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* VaseBreakerModule::~VaseBreakerModule() */

void __thiscall VaseBreakerModule::~VaseBreakerModule(VaseBreakerModule *this)

{
  ~VaseBreakerModule(this);
  AK::FreeHook(this);
  return;
}


/* VaseBreakerModule::SetVaseSpawnInfo(int, int, std::vector<Sexy::Point,
   std::allocator<Sexy::Point> > const&) */

void __thiscall
VaseBreakerModule::SetVaseSpawnInfo(VaseBreakerModule *this,int param_1,int param_2,vector *param_3)

{
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x68),param_3);
  return;
}


/* VaseBreakerModule::AddVase(VaseConfiguration const&) */

void __thiscall VaseBreakerModule::AddVase(VaseBreakerModule *this,VaseConfiguration *param_1)

{
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)(this + 0x20),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall VaseBreakerModule::AddResourceRequirements(VaseBreakerModule *this,set *param_1)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  long lVar5;
  string *psVar6;
  long *plVar7;
  ZombieType *this_00;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"VaseBreakerGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Images_VaseBreaker");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_LevelOfTheDay");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UPDATE_UI_LevelOfTheDay");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar1 = (**(code **)(*(long *)pRVar3 + 0xa8))();
  if (cVar1 == '\0') {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_20 = FUN_049812f8(*(undefined8 *)(pRVar3 + 0x48));
    local_18 = FUN_04981348(*(undefined8 *)(pRVar3 + 0x50));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      lVar5 = FUN_05474184(lVar4 + 8);
      if (lVar5 == 0) {
        lVar4 = FUN_05474184(lVar4);
      }
      else {
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        (**(code **)(*plVar7 + 0x48))(plVar7,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        lVar4 = FUN_05474184(lVar4);
      }
      if (lVar4 != 0) {
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
        this_00 = (ZombieType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        ZombieType::AddInGameResourceRequirements(this_00,param_1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::SpawnVases() */

void __thiscall VaseBreakerModule::SpawnVases(VaseBreakerModule *this)

{
  int iVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  VaseConfiguration *pVVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  Point aPStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::clear
            ((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>> *)
             (this + 0x38));
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  iVar2 = iVar2 + (*(int *)(this + 0x1c) - *(int *)(this + 0x18)) * iVar2;
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::vector
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)local_20,
             (vector *)(this + 0x20));
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<VaseConfiguration*,std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>>>
            (uVar5,uVar6);
  iVar9 = *(int *)(this + 0x18);
  iVar1 = (*(int *)(this + 0x1c) - iVar9) + 1;
  if (0 < iVar2) {
    iVar11 = 0;
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x68);
    iVar10 = 0;
    while( true ) {
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar11 / iVar1;
      }
      iVar9 = (iVar11 - iVar3 * iVar1) + iVar9;
      Sexy::Point::Point(aPStack_38,iVar9,iVar3);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_28 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar5,uVar6,aPStack_38);
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar4) {
        lVar8 = (long)iVar10;
        iVar10 = iVar10 + 1;
        pVVar7 = (VaseConfiguration *)FUN_0497f184(local_20[0],lVar8);
        Sexy::Point::Point((Point *)&local_28,iVar9,iVar3);
        SpawnVaseImmediately(this,pVVar7,(Point *)&local_28);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
        std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>::
        push_back((vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>
                   *)(this + 0x38),(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      if (iVar11 + 1 == iVar2) break;
      iVar11 = iVar11 + 1;
      iVar9 = *(int *)(this + 0x18);
    }
  }
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::~vector
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerModule::registerForEvents() */

void __thiscall VaseBreakerModule::registerForEvents(VaseBreakerModule *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<VaseBreakerModule,void(VaseBreakerModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<VaseBreakerModule,void(VaseBreakerModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWinCondition);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<VaseBreakerModule,bool(VaseBreakerModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<VaseBreakerModule,void(VaseBreakerModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkPreventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<VaseBreakerModule,bool(VaseBreakerModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClearBoard);
  Sexy::Delegate0::Delegate0<VaseBreakerModule,void(VaseBreakerModule::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ClearBoard,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

