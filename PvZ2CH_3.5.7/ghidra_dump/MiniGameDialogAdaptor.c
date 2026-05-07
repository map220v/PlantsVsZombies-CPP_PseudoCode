// Class: MiniGameDialogAdaptor


/* MiniGameDialogAdaptor::OnBackButtonPressed() */

undefined8 __thiscall MiniGameDialogAdaptor::OnBackButtonPressed(MiniGameDialogAdaptor *this)

{
  (**(code **)(*(long *)this + 0x318))(this,0);
  return 1;
}


/* MiniGameDialogAdaptor::ButtonPress(int) */

int MiniGameDialogAdaptor::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to MiniGameDialogAdaptor::ButtonPress(int) */

void __thiscall MiniGameDialogAdaptor::ButtonPress(MiniGameDialogAdaptor *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* MiniGameDialogAdaptor::Update() */

void __thiscall MiniGameDialogAdaptor::Update(MiniGameDialogAdaptor *this)

{
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)(this + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::StaticClassInit() */

void MiniGameDialogAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameDialogAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_03660e2c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameDialogAdaptor::StaticGetClass() */

long * MiniGameDialogAdaptor::StaticGetClass(void)

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
  uVar2 = ArcadeMenuDialog::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameDialogAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameDialogAdaptor::GetClass() const */

long * MiniGameDialogAdaptor::GetClass(void)

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
  uVar2 = ArcadeMenuDialog::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameDialogAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getEndlessButtonLabel() */

void MiniGameDialogAdaptor::getEndlessButtonLabel(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  hash_node *phVar3;
  hash_node **pphVar4;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  string *in_x8;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  Sexy aSStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar3 = (hash_node *)ProfileUtils::Profile();
  pphVar4 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar3,pphVar4);
  cVar1 = ArcadeProgressDatabase::IsLevelUnlocked
                    ((ArcadeProgressDatabase *)ahStack_18,(string *)(in_x0 + 0x148));
  if (cVar1 == '\0') {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    iVar2 = ArcadeProgressDatabase::GetCurrentEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_18,(string *)(in_x0 + 0x148));
    if (iVar2 == 0) {
      TodStringTranslate(L"[ARCADE_PLAY]");
      Sexy::SexyStringToUTF8String(aSStack_20,extraout_x1_00);
      FUN_05476c50(aSStack_20);
    }
    else {
      FUN_05478178(awStack_30,L"{Line1}\n({Line2})",aSStack_20);
      nop();
      TodStringTranslate(L"[ARCADE_PLAY]");
      TodReplaceString(awStack_30,L"{Line1}",awStack_28);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      FUN_05476c50(awStack_28);
      TodStringTranslate(L"[ARCADE_WAVE_COUNT]");
      TodReplaceString(awStack_30,L"{Line2}",awStack_28);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      FUN_05476c50(awStack_28);
      TodReplaceNumberString(awStack_30,L"{Number}",iVar2);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      Sexy::SexyStringToUTF8String((Sexy *)awStack_30,extraout_x1);
      FUN_05476c50(awStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getEndlessRecordLabel() */

void MiniGameDialogAdaptor::getEndlessRecordLabel(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  hash_node *phVar3;
  hash_node **pphVar4;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  string *in_x8;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  Sexy aSStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar3 = (hash_node *)ProfileUtils::Profile();
  pphVar4 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_18,phVar3,pphVar4);
  cVar1 = FUN_0547419c((string *)(in_x0 + 0x148));
  if (cVar1 == '\0') {
    iVar2 = ArcadeProgressDatabase::GetHighestCompletedEndlessWave
                      ((ArcadeProgressDatabase *)ahStack_18,(string *)(in_x0 + 0x148));
    if (iVar2 < 1) {
      TodStringTranslate(L"[ARCADE_NO_RECORD]");
      Sexy::SexyStringToUTF8String(aSStack_20,extraout_x1_00);
      FUN_05476c50(aSStack_20);
    }
    else {
      FUN_05478178(awStack_30,&DAT_05703b90,aSStack_20);
      nop();
      TodStringTranslate(L"[ARCADE_RECORD]");
      TodReplaceString(awStack_30,L"{Line1}",awStack_28);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      FUN_05476c50(awStack_28);
      TodStringTranslate(L"[ARCADE_WAVE_COUNT]");
      TodReplaceString(awStack_30,L"{Line2}",awStack_28);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      FUN_05476c50(awStack_28);
      TodReplaceNumberString(awStack_30,L"{Number}",iVar2);
      FUN_054766c8(awStack_30,aSStack_20);
      FUN_05476c50(aSStack_20);
      Sexy::SexyStringToUTF8String((Sexy *)awStack_30,extraout_x1);
      FUN_05476c50(awStack_30);
    }
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameDialogAdaptor::closeActivityCollection() */

void MiniGameDialogAdaptor::closeActivityCollection(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsActivityCollectionValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillActivityCollection(this);
  return;
}


/* MiniGameDialogAdaptor::OnPlayButtonPressed(std::string const&) */

void __thiscall
MiniGameDialogAdaptor::OnPlayButtonPressed(MiniGameDialogAdaptor *this,string *param_1)

{
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  closeActivityCollection();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06aaa230,param_1,0xffffffff,7,7,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::ButtonDepress(int) */

void __thiscall MiniGameDialogAdaptor::ButtonDepress(MiniGameDialogAdaptor *this,int param_1)

{
  char cVar1;
  hash_node *phVar2;
  hash_node **pphVar3;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_30,"Arcade");
    std::string::string(asStack_28,"Close");
    FUN_05475d88(asStack_20,this + 0x120);
    std::string::string((string *)ahStack_18,"");
    UIMetrics::BroadcastUIEvent(asStack_30,asStack_28,asStack_20,(string *)ahStack_18);
    std::string::~string((string *)ahStack_18);
    nop();
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  }
  else if (param_1 == 1) {
    phVar2 = (hash_node *)ProfileUtils::Profile();
    pphVar3 = (hash_node **)ArcadePropertySheet::Get();
    eastl::
    hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
    ::hashtable_iterator_base(ahStack_18,phVar2,pphVar3);
    cVar1 = ArcadeProgressDatabase::IsLevelUnlocked
                      ((ArcadeProgressDatabase *)ahStack_18,(string *)(this + 0x148));
    if (cVar1 != '\0') {
      closeActivityCollection();
      AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
      GameStateMgr::StartLevel
                (gGameStateMgr,&DAT_06aaa230,(string *)(this + 0x148),0xffffffff,7,7,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MiniGameDialogAdaptor::ButtonDepress(int) */

void __thiscall MiniGameDialogAdaptor::ButtonDepress(MiniGameDialogAdaptor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::onLayoutFinished() */

void __thiscall MiniGameDialogAdaptor::onLayoutFinished(MiniGameDialogAdaptor *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  HotUIFile *this_00;
  undefined8 *puVar4;
  long *plVar5;
  HotUISeedPacketList *pHVar6;
  ScrollWidget *this_01;
  RtObject *this_02;
  MiniGameLevelPackSublayoutAdaptor *this_03;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_03 = (MiniGameLevelPackSublayoutAdaptor *)0x0;
  this_00 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x180));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x180));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_18), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this_02 = (RtObject *)*puVar4;
    if ((this_02 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<MiniGameLevelPackSublayoutAdaptor>(this_02), bVar2)) {
      this_03 = Sexy::RtObject::Cast<MiniGameLevelPackSublayoutAdaptor>(this_02);
      cVar1 = MiniGameLevelPackSublayoutAdaptor::IsPackComplete(this_03);
      if (cVar1 == '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  Sexy::Insets::Insets((Insets *)&local_28);
  if (this_03 != (MiniGameLevelPackSublayoutAdaptor *)0x0) {
    plVar5 = (long *)HotUIAdaptor::GetEntryPointWidget((HotUIAdaptor *)this_03);
    (**(code **)(*plVar5 + 0x48))((string *)&local_18);
    local_28 = local_18;
    local_20 = uStack_10;
    iVar3 = FUN_03660b50(10);
    local_28 = CONCAT44(local_28._4_4_,(int)local_28 - iVar3);
    iVar3 = FUN_03660b50(0x14);
    local_20 = CONCAT44(local_20._4_4_,(int)local_20 + iVar3);
  }
  std::string::string((string *)&local_18,"MiniGameListScrollArea");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_01 = (ScrollWidget *)FUN_036608b8(*(undefined8 *)(pHVar6 + 0x218));
  Sexy::ScrollWidget::ScrollRectIntoView(this_01,(TRect *)&local_28,false);
  RunnableAction::Begin((RunnableAction *)(this + 0x198));
  std::string::string(asStack_40,"Arcade");
  std::string::string(asStack_38,"Enter");
  FUN_05475d88(asStack_30,this + 0x120);
  std::string::string((string *)&local_18,"");
  UIMetrics::BroadcastUIEvent(asStack_40,asStack_38,asStack_30,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getEndlessButtonAnim() const */

void __thiscall MiniGameDialogAdaptor::getEndlessButtonAnim(MiniGameDialogAdaptor *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"EndlessModeButtonAnim");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::RefreshUnlockStatus() */

void __thiscall MiniGameDialogAdaptor::RefreshUnlockStatus(MiniGameDialogAdaptor *this)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  hash_node **pphVar4;
  hash_node *phVar5;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar6;
  HotUIAnim *pHVar7;
  HotUISeedPacketList *pHVar8;
  MiniGameLevelPackSublayoutAdaptor *this_01;
  undefined8 *puVar9;
  ArcadePowerUpTemplateAdaptor *this_02;
  string *extraout_x1;
  string *extraout_x1_00;
  char *__s;
  RtObject *this_03;
  code *pcVar10;
  undefined8 local_58;
  undefined8 local_50;
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pphVar4 = (hash_node **)ArcadePropertySheet::Get();
  phVar5 = (hash_node *)ProfileUtils::Profile();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_48,phVar5,pphVar4);
  this_00 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_50,"EndlessModeButton");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pHVar7 = (HotUIAnim *)getEndlessButtonAnim(this);
  cVar1 = FUN_0547419c((string *)(this + 0x148));
  if (cVar1 == '\0') {
    cVar1 = ArcadeProgressDatabase::IsLevelUnlocked
                      ((ArcadeProgressDatabase *)ahStack_48,(string *)(this + 0x148));
    (**(code **)(*(long *)pHVar6 + 0x158))(pHVar6,1);
    (**(code **)(*(long *)pHVar6 + 0x188))(pHVar6,0);
    if (cVar1 == '\0') {
      __s = "locked_idle";
    }
    else {
      __s = "unlocked_idle";
    }
    std::string::string((string *)&local_50,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    HotUIAnim::PlayAndContinue(pHVar7,(string *)&local_50,0,aDStack_38);
    std::string::~string((string *)&local_50);
    nop();
  }
  else {
    (**(code **)(*(long *)pHVar6 + 0x188))(pHVar6,1);
    (**(code **)(*(long *)pHVar6 + 0x158))(pHVar6,0);
    (**(code **)(*(long *)pHVar7 + 0x158))(pHVar7,0);
  }
  std::string::string((string *)&local_50,"EndlessModeRecordLabel");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"EndlessModeButtonLabel");
  pHVar8 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pcVar10 = *(code **)(*(long *)pHVar8 + 0x360);
  getEndlessButtonLabel();
  Sexy::UTF8StringToWString((Sexy *)&local_58,extraout_x1);
  (*pcVar10)(pHVar8,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  std::string::~string((string *)&local_58);
  pcVar10 = *(code **)(*(long *)pHVar6 + 0x360);
  getEndlessRecordLabel();
  Sexy::UTF8StringToWString((Sexy *)&local_58,extraout_x1_00);
  (*pcVar10)(pHVar6,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  std::string::~string((string *)&local_58);
  bVar2 = ArcadeProgressDatabase::AreAllPowerUpsUnlockedInCollection
                    ((ArcadeProgressDatabase *)ahStack_48,(string *)(this + 0x130));
  std::string::string((string *)&local_50,"DialogFooterLabel");
  pHVar6 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  (**(code **)(*(long *)pHVar6 + 0x158))(pHVar6,bVar2 ^ 1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x180));
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x180));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar3) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this_03 = (RtObject *)*puVar9;
    if (this_03 != (RtObject *)0x0) {
      bVar3 = Sexy::RtObject::IsA<MiniGameLevelPackSublayoutAdaptor>(this_03);
      if (bVar3) {
        this_01 = Sexy::RtObject::Cast<MiniGameLevelPackSublayoutAdaptor>(this_03);
        MiniGameLevelPackSublayoutAdaptor::RefreshUnlockStatus(this_01);
      }
      else {
        bVar3 = Sexy::RtObject::IsA<ArcadePowerUpTemplateAdaptor>(this_03);
        if (bVar3) {
          this_02 = Sexy::RtObject::Cast<ArcadePowerUpTemplateAdaptor>(this_03);
          ArcadePowerUpTemplateAdaptor::RefreshUnlockStatus(this_02);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getGiftBoxAnim() const */

void __thiscall MiniGameDialogAdaptor::getGiftBoxAnim(MiniGameDialogAdaptor *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"GiftBoxAnim");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getLevelButtonAnimByLevelID(std::string const&) const */

void __thiscall
MiniGameDialogAdaptor::getLevelButtonAnimByLevelID(MiniGameDialogAdaptor *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  MiniGameLevelPackSublayoutAdaptor *this_00;
  undefined8 uVar4;
  RtObject *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_036622ec(*(undefined8 *)(this + 0x180));
  local_10 = FUN_0366233c(*(undefined8 *)(this + 0x188));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      uVar4 = 0;
LAB_03662438:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RtObject *)*puVar3;
    if ((this_01 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<MiniGameLevelPackSublayoutAdaptor>(this_01), bVar2)) {
      this_00 = Sexy::RtObject::Cast<MiniGameLevelPackSublayoutAdaptor>(this_01);
      cVar1 = MiniGameLevelPackSublayoutAdaptor::ContainsLevel(this_00,param_1);
      if (cVar1 != '\0') {
        uVar4 = MiniGameLevelPackSublayoutAdaptor::GetLevelButtonAnimByLevelID(this_00,param_1);
        goto LAB_03662438;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getPowerUpTemplateByPowerUpID(std::string const&, std::string const&)
   const */

void __thiscall
MiniGameDialogAdaptor::getPowerUpTemplateByPowerUpID
          (MiniGameDialogAdaptor *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ArcadePowerUpTemplateAdaptor *this_00;
  RtObject *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_036622ec(*(undefined8 *)(this + 0x180));
  local_10 = FUN_0366233c(*(undefined8 *)(this + 0x188));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RtObject *)*puVar3;
    if ((this_01 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<ArcadePowerUpTemplateAdaptor>(this_01), bVar2)) {
      this_00 = Sexy::RtObject::Cast<ArcadePowerUpTemplateAdaptor>(this_01);
      cVar1 = ArcadePowerUpTemplateAdaptor::IsConfiguredForPowerUp(this_00,param_1,param_2);
      if (cVar1 != '\0') goto LAB_03662528;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (ArcadePowerUpTemplateAdaptor *)0x0;
LAB_03662528:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::getLevelPackSublayoutByPackID(std::string const&) const */

void __thiscall
MiniGameDialogAdaptor::getLevelPackSublayoutByPackID(MiniGameDialogAdaptor *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  MiniGameLevelPackSublayoutAdaptor *this_00;
  RtObject *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_036622ec(*(undefined8 *)(this + 0x180));
  local_10 = FUN_0366233c(*(undefined8 *)(this + 0x188));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RtObject *)*puVar3;
    if ((this_01 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<MiniGameLevelPackSublayoutAdaptor>(this_01), bVar2)) {
      this_00 = Sexy::RtObject::Cast<MiniGameLevelPackSublayoutAdaptor>(this_01);
      cVar1 = MiniGameLevelPackSublayoutAdaptor::IsConfiguredForPack(this_00,param_1);
      if (cVar1 != '\0') goto LAB_03662608;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (MiniGameLevelPackSublayoutAdaptor *)0x0;
LAB_03662608:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* MiniGameDialogAdaptor::MiniGameDialogAdaptor() */

void __thiscall MiniGameDialogAdaptor::MiniGameDialogAdaptor(MiniGameDialogAdaptor *this)

{
  ArcadeMenuDialog::ArcadeMenuDialog((ArcadeMenuDialog *)this);
  *(undefined ***)this = &PTR_GetClass_06674880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674bf0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06674c38;
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode((ArcadeMode *)(this + 0x120));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  ForeverSequentialActionRunner::ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x198));
  return;
}


/* MiniGameDialogAdaptor::StaticNew() */

MiniGameDialogAdaptor * MiniGameDialogAdaptor::StaticNew(void)

{
  MiniGameDialogAdaptor *this;
  
  this = ::operator_new(0x1c0);
  MiniGameDialogAdaptor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::PlayUnlockingAnimations() */

void __thiscall MiniGameDialogAdaptor::PlayUnlockingAnimations(MiniGameDialogAdaptor *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ArcadePropertySheet *this_00;
  long lVar4;
  TimelineActionRunner *this_01;
  HotUIAnim *pHVar5;
  ArcadeLevelPack *this_02;
  string *psVar6;
  SequentialActionRunner *this_03;
  DisableWidgetInputAction *this_04;
  EnableWidgetInputAction *this_05;
  ArcadePowerUpTemplateAdaptor *this_06;
  PowerUpUIButton *pPVar7;
  MiniGameLevelPackSublayoutAdaptor *this_07;
  code *pcVar8;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = SequentialActionRunner::IsEmpty((SequentialActionRunner *)(this + 0x198));
  if (cVar1 != '\0') {
    this_00 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
    LawnApp::GetAndClearQueuedArcadeUnlockSource();
    cVar1 = FUN_0547419c(asStack_58);
    if ((cVar1 == '\0') &&
       (cVar1 = ArcadePropertySheet::HasLevel(this_00,asStack_58), cVar1 != '\0')) {
      lVar4 = ArcadePropertySheet::GetModeByLevelID(this_00,asStack_58);
      iVar3 = FUN_054748a4(lVar4,this + 0x120);
      if (iVar3 == 0) {
        this_01 = ::operator_new(0x30);
        TimelineActionRunner::TimelineActionRunner(this_01);
        pHVar5 = (HotUIAnim *)getLevelButtonAnimByLevelID(this,asStack_58);
        std::string::string(asStack_38,"unlocked");
        std::string::string(asStack_30,"unlocked_animation");
        std::string::string(asStack_28,"finished");
        std::string::string(asStack_20,"Play_UI_Map_Minigame_Node_Complete");
        queueTransitionAfterDelayOnAnim
                  (this_01,0.0,pHVar5,asStack_38,asStack_30,asStack_28,asStack_20);
        std::string::~string(asStack_20);
        nop();
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_30);
        nop();
        std::string::~string(asStack_38);
        nop();
        this_02 = (ArcadeLevelPack *)ArcadePropertySheet::GetLevelPackByLevelID(this_00,asStack_58);
        cVar1 = ArcadePropertySheetHelpers::ArcadeLevelPack::IsLevelLastInPack(this_02,asStack_58);
        if (cVar1 == '\0') {
          psVar6 = (string *)ArcadePropertySheet::GetNextLevelInPack(this_00,asStack_58);
          pHVar5 = (HotUIAnim *)getLevelButtonAnimByLevelID(this,psVar6);
          std::string::string(asStack_38,"locked_idle");
          std::string::string(asStack_30,"locked_animation");
          std::string::string(asStack_28,"unlocked");
          std::string::string(asStack_20,"Play_UI_Map_Minigame_Node_Reveal");
          queueTransitionAfterDelayOnAnim
                    (this_01,0.7,pHVar5,asStack_38,asStack_30,asStack_28,asStack_20);
          std::string::~string(asStack_20);
          nop();
          std::string::~string(asStack_28);
          nop();
          std::string::~string(asStack_30);
          nop();
          std::string::~string(asStack_38);
          nop();
        }
        else {
          cVar1 = std::operator==((string *)(lVar4 + 0x40),(string *)this_02);
          if (cVar1 != '\0') {
            pHVar5 = (HotUIAnim *)getEndlessButtonAnim(this);
            std::string::string(asStack_38,"locked_idle");
            std::string::string(asStack_30,"unlocked_animation");
            std::string::string(asStack_28,"unlocked_idle");
            std::string::string(asStack_20,"Play_UI_Map_Minigame_Endless_Unlock");
            queueTransitionAfterDelayOnAnim
                      (this_01,1.0,pHVar5,asStack_38,asStack_30,asStack_28,asStack_20);
            std::string::~string(asStack_20);
            nop();
            std::string::~string(asStack_28);
            nop();
            std::string::~string(asStack_30);
            nop();
            std::string::~string(asStack_38);
            nop();
          }
          if (*(int *)(this_02 + 0x58) == 2) {
            this_06 = (ArcadePowerUpTemplateAdaptor *)
                      getPowerUpTemplateByPowerUpID
                                (this,(string *)(this + 0x130),(string *)(this_02 + 0x60));
            if (this_06 != (ArcadePowerUpTemplateAdaptor *)0x0) {
              pHVar5 = (HotUIAnim *)ArcadePowerUpTemplateAdaptor::GetLockAnimation(this_06);
              std::string::string(asStack_38,"locked");
              std::string::string(asStack_30,"unlocked_anim");
              std::string::string(asStack_28,"unlocked");
              std::string::string(asStack_20,"");
              queueTransitionAfterDelayOnAnim
                        (this_01,1.3,pHVar5,asStack_38,asStack_30,asStack_28,asStack_20);
              std::string::~string(asStack_20);
              nop();
              std::string::~string(asStack_28);
              nop();
              std::string::~string(asStack_30);
              nop();
              std::string::~string(asStack_38);
              nop();
              pPVar7 = (PowerUpUIButton *)ArcadePowerUpTemplateAdaptor::GetPowerUpUIButton(this_06);
              queueSaturateAfterDelayOnPowerUpUIButton(this_01,1.3,pPVar7);
            }
            this_07 = (MiniGameLevelPackSublayoutAdaptor *)
                      getLevelPackSublayoutByPackID(this,(string *)this_02);
            if (this_07 != (MiniGameLevelPackSublayoutAdaptor *)0x0) {
              pPVar7 = (PowerUpUIButton *)
                       MiniGameLevelPackSublayoutAdaptor::GetPowerUpUIButton(this_07);
              queueSaturateAfterDelayOnPowerUpUIButton(this_01,1.3,pPVar7);
            }
          }
          ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks();
          local_50 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)asStack_20);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)asStack_20);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
                bVar2) {
            lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
            cVar1 = std::operator==((string *)(lVar4 + 0x38),(string *)this_02);
            if (cVar1 != '\0') {
              psVar6 = (string *)FUN_03660a6c(*(undefined8 *)(lVar4 + 0x40));
              pHVar5 = (HotUIAnim *)getLevelButtonAnimByLevelID(this,psVar6);
              std::string::string(asStack_40,"locked_idle");
              std::string::string(asStack_38,"locked_animation");
              std::string::string(asStack_30,"unlocked");
              std::string::string(asStack_28,"Play_UI_Map_Minigame_Node_Reveal");
              queueTransitionAfterDelayOnAnim
                        (this_01,0.7,pHVar5,asStack_40,asStack_38,asStack_30,asStack_28);
              std::string::~string(asStack_28);
              nop();
              std::string::~string(asStack_30);
              nop();
              std::string::~string(asStack_38);
              nop();
              std::string::~string(asStack_40);
              nop();
            }
            std::move_iterator<PennyGiftBoxGrowData*>::operator++
                      ((move_iterator<PennyGiftBoxGrowData*> *)&local_50);
          }
          std::
          vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
          ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
                     *)asStack_20);
        }
        this_03 = ::operator_new(0x28);
        SequentialActionRunner::SequentialActionRunner(this_03);
        pcVar8 = *(code **)(*(long *)this_03 + 0x28);
        this_04 = ::operator_new(0x20);
        DisableWidgetInputAction::DisableWidgetInputAction
                  (this_04,*(WidgetContainer **)(gLawnApp + 0x360));
        (*pcVar8)(this_03,this_04);
        (**(code **)(*(long *)this_03 + 0x28))(this_03,this_01);
        pcVar8 = *(code **)(*(long *)this_03 + 0x28);
        this_05 = ::operator_new(0x20);
        EnableWidgetInputAction::EnableWidgetInputAction
                  (this_05,*(WidgetContainer **)(gLawnApp + 0x360));
        (*pcVar8)(this_03,this_05);
        SequentialActionRunner::Add
                  ((SequentialActionRunner *)(this + 0x198),(RunnableAction *)this_03);
      }
    }
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::onLoadUIView() */

void __thiscall MiniGameDialogAdaptor::onLoadUIView(MiniGameDialogAdaptor *this)

{
  undefined8 uVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"$DIALOG_TITLE");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x128);
  std::string::~string(asStack_40);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_40,"MiniGameDialog");
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::onLinkToUIViewCreated() */

void __thiscall MiniGameDialogAdaptor::onLinkToUIViewCreated(MiniGameDialogAdaptor *this)

{
  bool bVar1;
  HotUIFile *this_00;
  undefined8 uVar2;
  RtObject *this_01;
  WidgetContainer *pWVar3;
  MiniGameLevelPackSublayoutAdaptor *this_02;
  HotUISeedPacketList *pHVar4;
  ArcadePropertySheet *this_03;
  string *psVar5;
  string *psVar6;
  ArcadePowerUpTemplateAdaptor *this_04;
  undefined8 local_a8;
  undefined8 local_a0;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_98 [24];
  MiniGameLevelPackSublayoutAdaptor *local_80 [3];
  Delegate1<std::string_const&> aDStack_68 [48];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)local_80,"MiniGameDialog");
  uVar2 = HotUIFile::GetWidgetByName(this_00,(string *)local_80);
  std::string::~string((string *)local_80);
  nop();
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),uVar2);
  std::string::string((string *)local_80,"CloseButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,(string *)local_80,0);
  std::string::~string((string *)local_80);
  nop();
  std::string::string((string *)local_80,"EndlessModeButton");
  HotUIAdaptor::bindHotUIButtonToTouchID((HotUIAdaptor *)this,(string *)local_80,1);
  std::string::~string((string *)local_80);
  nop();
  std::string::string((string *)local_80,"MiniGameListInnerScrollArea");
  this_01 = (RtObject *)HotUIFile::GetWidgetByName(this_00,(string *)local_80);
  std::string::~string((string *)local_80);
  nop();
  if (this_01 == (RtObject *)0x0) {
    pWVar3 = (WidgetContainer *)0x0;
  }
  else {
    pWVar3 = Sexy::RtObject::Cast<Sexy::WidgetContainer>(this_01);
  }
  ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks();
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_98);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_98);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    ArcadePropertySheetHelpers::ArcadeMode::GetLevelPacks();
    std::
    vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
    ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
               *)local_80);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPlayButtonPressed);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<MiniGameDialogAdaptor,void(MiniGameDialogAdaptor::*)(std::string_const&)>
              (aDStack_68,(string *)local_80);
    this_02 = ::operator_new(0x1c0);
    MiniGameLevelPackSublayoutAdaptor::MiniGameLevelPackSublayoutAdaptor(this_02);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,aDStack_68);
    MiniGameLevelPackSublayoutAdaptor::Configure(this_02,pWVar3,uVar2,aDStack_38);
    local_80[0] = this_02;
    std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::push_back
              ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)(this + 0x180),
               (HotUIAdaptor **)local_80);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_02);
    std::move_iterator<PennyGiftBoxGrowData*>::operator++
              ((move_iterator<PennyGiftBoxGrowData*> *)&local_a8);
  }
  std::
  vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
  ::~vector((vector<ArcadePropertySheetHelpers::ArcadeLevelPack,std::allocator<ArcadePropertySheetHelpers::ArcadeLevelPack>>
             *)avStack_98);
  std::string::string((string *)local_80,"PowerUpList");
  pHVar4 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_80);
  std::string::~string((string *)local_80);
  nop();
  this_03 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  psVar5 = (string *)ArcadePropertySheet::GetPowerUpCollectionByID(this_03,(string *)(this + 0x130))
  ;
  local_a8 = FUN_03661b60(*(undefined8 *)(psVar5 + 8));
  local_a0 = FUN_03661bb0(*(undefined8 *)(psVar5 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    this_04 = ::operator_new(0x138);
    ArcadePowerUpTemplateAdaptor::ArcadePowerUpTemplateAdaptor(this_04);
    ArcadePowerUpTemplateAdaptor::Configure(this_04,(WidgetContainer *)pHVar4,psVar5,psVar6);
    local_80[0] = (MiniGameLevelPackSublayoutAdaptor *)this_04;
    std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::push_back
              ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)(this + 0x180),
               (HotUIAdaptor **)local_80);
    HotUIAdaptor::LoadWidget((HotUIAdaptor *)this_04);
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_a8);
  }
  (**(code **)(*(long *)this + 0x350))(this);
  PlayUnlockingAnimations(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameDialogAdaptor::ConfigureForMiniGame(ArcadePropertySheetHelpers::ArcadeMode const&) */

void __thiscall
MiniGameDialogAdaptor::ConfigureForMiniGame(MiniGameDialogAdaptor *this,ArcadeMode *param_1)

{
  ArcadePropertySheetHelpers::ArcadeMode::operator=((ArcadeMode *)(this + 0x120),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::Clone() const */

void __thiscall MiniGameDialogAdaptor::Clone(MiniGameDialogAdaptor *this)

{
  RtObject *this_00;
  MiniGameDialogAdaptor *this_01;
  ArcadePropertySheet *this_02;
  ArcadeMode *pAVar1;
  ArcadeMode aAStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ArcadeMenuDialog::Clone((ArcadeMenuDialog *)this);
  this_01 = Sexy::RtObject::Cast<MiniGameDialogAdaptor>(this_00);
  this_02 = (ArcadePropertySheet *)ArcadePropertySheet::Get();
  pAVar1 = (ArcadeMode *)ArcadePropertySheet::GetModeByID(this_02,(string *)(this + 0x120));
  ArcadePropertySheetHelpers::ArcadeMode::ArcadeMode(aAStack_68,pAVar1);
  ConfigureForMiniGame(this_01,aAStack_68);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode(aAStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameDialogAdaptor::~MiniGameDialogAdaptor() */

void __thiscall MiniGameDialogAdaptor::~MiniGameDialogAdaptor(MiniGameDialogAdaptor *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  HotUIFile *this_01;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x180);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06674880;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674bf0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06674c38;
  this_01 = (HotUIFile *)FUN_036608ac(*(undefined8 *)(this + 0xf8));
  std::string::string((string *)&local_10,"MiniGameListInnerScrollArea");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  std::string::string((string *)&local_10,"PowerUpList");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_01,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIAdaptor::DeleteWidget((HotUIAdaptor *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::clear
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  ForeverSequentialActionRunner::~ForeverSequentialActionRunner
            ((ForeverSequentialActionRunner *)(this + 0x198));
  std::vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>>::~vector
            ((vector<HotUIAdaptor*,std::allocator<HotUIAdaptor*>> *)this_00);
  ArcadePropertySheetHelpers::ArcadeMode::~ArcadeMode((ArcadeMode *)(this + 0x120));
  ArcadeMenuDialog::~ArcadeMenuDialog((ArcadeMenuDialog *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameDialogAdaptor::~MiniGameDialogAdaptor() */

void __thiscall MiniGameDialogAdaptor::~MiniGameDialogAdaptor(MiniGameDialogAdaptor *this)

{
  ~MiniGameDialogAdaptor(this);
  AK::FreeHook(this);
  return;
}

