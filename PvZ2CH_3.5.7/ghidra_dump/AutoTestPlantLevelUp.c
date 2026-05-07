// Class: AutoTestPlantLevelUp


/* AutoTestPlantLevelUp::AutoConfirmOver() */

void AutoTestPlantLevelUp::AutoConfirmOver(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* AutoTestPlantLevelUp::PlantTestShowUI() */

void __thiscall AutoTestPlantLevelUp::PlantTestShowUI(AutoTestPlantLevelUp *this)

{
  long lVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  lVar1 = LawnApp::GetPlantLevelUpListView(gLawnApp);
  if (lVar1 != 0) {
    PlantLevelUpListView::AutoTestSelected((int)lVar1);
    return;
  }
  return;
}


/* AutoTestPlantLevelUp::StaticGetClass() */

long * AutoTestPlantLevelUp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AutoTestPlantLevelUp",uVar2,StaticNew);
  return sClass;
}


/* AutoTestPlantLevelUp::GetClass() const */

long * AutoTestPlantLevelUp::GetClass(void)

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
  (*pcVar3)(plVar1,"AutoTestPlantLevelUp",uVar2,StaticNew);
  return sClass;
}


/* AutoTestPlantLevelUp::AutoTestPlantLevelUp() */

void __thiscall AutoTestPlantLevelUp::AutoTestPlantLevelUp(AutoTestPlantLevelUp *this)

{
  AutoTest::AutoTest((AutoTest *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (AutoTestPlantLevelUp)0x0;
  *(undefined ***)this = &PTR_GetClass_068473e0;
  return;
}


/* AutoTestPlantLevelUp::StaticNew() */

AutoTestPlantLevelUp * AutoTestPlantLevelUp::StaticNew(void)

{
  AutoTestPlantLevelUp *this;
  
  this = ::operator_new(0x18);
  AutoTestPlantLevelUp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantLevelUp::PlantTestSyncPlantFinish(bool) */

void AutoTestPlantLevelUp::PlantTestSyncPlantFinish(bool param_1)

{
  LawnApp *this;
  char cVar1;
  wchar16 *pwVar2;
  PVZ2UIDialog *this_00;
  PrimeTypeface *pPVar3;
  string *psVar4;
  WorldMap *this_01;
  char in_w1;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  LineBreakCategory aLStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar6 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pLVar5 = aLStack_58;
  std::string::string(asStack_50,"AutoTestPlantLevelUp");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_50,pLVar5,pLVar6,in_x4);
  std::string::~string(asStack_50);
  nop();
  this = gLawnApp;
  if (cVar1 != '\0') {
    if (in_w1 == '\0') {
      FUN_05478178(asStack_50,L"Sync Server Plant Data Failed !Please Try",aLStack_58);
      this_00 = (PVZ2UIDialog *)LawnApp::ShowPVZ2DialogOneLine(this,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      nop();
      FUN_05478178(aLStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)(ulong)param_1,AutoConfirmOver);
      Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
                (aDStack_38,asStack_50);
      PVZ2UIDialog::AddButton(this_00,aLStack_58,aDStack_38,1);
      FUN_05476c50(aLStack_58);
      nop();
      pPVar3 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)asStack_50,1);
      PVZ2UIDialog::SetHeaderFont(this_00,pPVar3,(Color *)asStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
      psVar4 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string(asStack_50,"AutoTestPlantLevelUp");
      CheatManager::SetToggleValue(psVar4,SUB81(asStack_50,0));
      std::string::~string(asStack_50);
      nop();
    }
    else {
      this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::SwitchToLevelUp(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantLevelUp::~AutoTestPlantLevelUp() */

void __thiscall AutoTestPlantLevelUp::~AutoTestPlantLevelUp(AutoTestPlantLevelUp *this)

{
  *(undefined ***)this = &PTR_GetClass_068473e0;
  AutoTest::~AutoTest((AutoTest *)this);
  return;
}


/* AutoTestPlantLevelUp::~AutoTestPlantLevelUp() */

void __thiscall AutoTestPlantLevelUp::~AutoTestPlantLevelUp(AutoTestPlantLevelUp *this)

{
  ~AutoTestPlantLevelUp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantLevelUp::PlantTestSelectedOk() */

void AutoTestPlantLevelUp::PlantTestSelectedOk(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long in_x0;
  wchar16 *pwVar5;
  PVZ1ModeNetworkMgr *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  undefined8 uVar7;
  string *psVar8;
  PlantType *this_03;
  MagentoProductProps *this_04;
  ObjectTypeDirectory<PlantType> *this_05;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_28 [8];
  string asStack_20 [12];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar5 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  psVar8 = asStack_28;
  std::string::string(asStack_20,"AutoTestPlantLevelUp");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar5,(wchar16 *)asStack_20,(LineBreakCategory *)psVar8,in_x3,in_x4);
  if ((cVar2 == '\0') || (*(char *)(in_x0 + 0x14) != '\0')) {
    std::string::~string(asStack_20);
    nop();
  }
  else {
    std::string::~string(asStack_20);
    nop();
    this = (PVZ1ModeNetworkMgr *)LawnApp::GetPlantLevelUpListView(gLawnApp);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((gLawnApp != (LawnApp *)0x0) &&
       ((this != (PVZ1ModeNetworkMgr *)0x0 && (this_01 != (PlayerInfo *)0x0)))) {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(lVar6 + 0x80));
      if (cVar2 == '\0') {
        *(undefined4 *)(in_x0 + 0x10) = 0;
        local_14 = 0;
      }
      else {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        uVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar6 + 0x80),false);
        *(undefined4 *)(in_x0 + 0x10) = uVar3;
        GachaItemInfo::GachaItemInfo((GachaItemInfo *)asStack_20);
        this_04 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        MagentoProductProps::GetCurrentLevelPriceData
                  (this_04,*(int *)(in_x0 + 0x10),(LevelUpPriceData *)asStack_20);
      }
      PlayerInfo::SetCoins(this_01,local_14);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      uVar7 = FUN_0547429c(lVar6 + 0x80);
      Sexy::StrFormat("[AutoTest-- Plant: %s Level:%d]",asStack_28,uVar7,
                      (ulong)*(uint *)(in_x0 + 0x10));
      Sexy::LazySingleton<DebugLog>::GetInstancePtr();
      std::string::string(asStack_20,"PvZ2Debug");
      nop();
      std::string::~string(asStack_20);
      nop();
      if (*(int *)(in_x0 + 0x10) < 1) {
        *(undefined1 *)(in_x0 + 0x14) = 1;
        PlantLevelUpListView::AutoTestSelected((int)this);
      }
      else {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        this_03 = (PlantType *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
        lVar6 = PlantType::GetProps(this_03);
        iVar1 = *(int *)(lVar6 + 0x2c);
        if (4 < iVar1) {
          iVar1 = 4;
        }
        if (*(int *)(in_x0 + 0x10) < iVar1) {
          if (0 < *(int *)(in_x0 + 0x10)) {
            *(undefined1 *)(in_x0 + 0x14) = 1;
            PlantLevelUpListView::AutoTestPlantLevelUp((PlantLevelUpListView *)this);
          }
        }
        else {
          iVar1 = *(int *)(in_x0 + 0xc);
          this_05 = (ObjectTypeDirectory<PlantType> *)
                    Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          iVar4 = ObjectTypeDirectory<PlantType>::GetCount(this_05);
          if (iVar1 < iVar4) {
            *(undefined1 *)(in_x0 + 0x14) = 0;
            *(int *)(in_x0 + 0xc) = *(int *)(in_x0 + 0xc) + 1;
            PlantLevelUpListView::AutoTestSelected((int)this);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
      }
      std::string::~string(asStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutoTestPlantLevelUp::PlantTestUnlockOver() */

void __thiscall AutoTestPlantLevelUp::PlantTestUnlockOver(AutoTestPlantLevelUp *this)

{
  this[0x14] = (AutoTestPlantLevelUp)0x0;
  PlantTestSelectedOk();
  return;
}


/* AutoTestPlantLevelUp::PlantTestLevelUpOver() */

void __thiscall AutoTestPlantLevelUp::PlantTestLevelUpOver(AutoTestPlantLevelUp *this)

{
  this[0x14] = (AutoTestPlantLevelUp)0x0;
  PlantTestSelectedOk();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantLevelUp::PlantTestAddPiceceToServer() */

void AutoTestPlantLevelUp::PlantTestAddPiceceToServer(void)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar3;
  Magento *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  string *psVar4;
  NameMapperBase *this_03;
  int *piVar5;
  ulong uVar6;
  WorldMap *this_04;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if ((this_00 != (PlayerInfo *)0x0) &&
     (lVar3 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr(), lVar3 != 0)) {
    uVar7 = 0;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this_01 = (Magento *)
              std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       *)amStack_38);
    Magento::GetPlantLevelUp(this_01);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    lVar3 = FUN_043daef4(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (lVar3 != 0) {
      do {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_043daf00(*(undefined8 *)(lVar3 + 0x60),uVar7)
        ;
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        PlayerInfo::GetPlantPieceCount(this_00,(string *)(lVar3 + 8),false);
        iVar1 = AutoTestPlantGetNeedPieceCountToMaxLevel
                          (this_00,(RtWeakPtr *)aRStack_40,(RtWeakPtr *)this_02);
        this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        iVar2 = NameMapperBase::GetIdForName(this_03,(string *)(lVar3 + 0x80));
        if (iVar2 - 0x1b21fU < 5) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        else {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          piVar5 = (int *)std::
                          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                        *)amStack_38,(string *)(lVar3 + 0x80));
          *piVar5 = iVar1;
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          PlayerInfo::SetPlantPieceCount(this_00,(string *)(lVar3 + 0x80),iVar1,true,true,true,true)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
        uVar7 = uVar7 + 1;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        uVar6 = FUN_043daef4(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
      } while (uVar7 < uVar6);
    }
    this_04 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToLevelUp(this_04);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutoTestPlantLevelUp::updateState(bool) */

void __thiscall AutoTestPlantLevelUp::updateState(AutoTestPlantLevelUp *this,bool param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    PVZCheats::CheatSkipAllTutorials();
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestShowUI);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestPlantUIShow,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestSelectedOk);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestPlantSelected,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestUnlockOver);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestPlantUnLock,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestLevelUpOver);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestPlantLevelUpOver,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestSyncPlantFinish);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<bool,Sexy::CBMemberTranslatorX<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::SyncPlantFinish,&local_90);
    lVar2 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar2 != 0) && (lVar2 = FUN_043dae10(*(undefined8 *)(lVar2 + 0x2f0)), lVar2 != 0)) {
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      PlantTestAddPiceceToServer();
    }
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestShowUI);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestPlantUIShow,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestSelectedOk);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestPlantSelected,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestUnlockOver);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestPlantUnLock,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestLevelUpOver);
    Sexy::Delegate0::Delegate0<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::AutoTestPlantLevelUpOver,aDStack_38)
    ;
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,PlantTestSyncPlantFinish);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = local_40;
    MessageRouter::
    Unsubscribe<bool,Sexy::CBMemberTranslatorX<AutoTestPlantLevelUp,void(AutoTestPlantLevelUp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::SyncPlantFinish,&local_90);
    this[0x14] = (AutoTestPlantLevelUp)param_1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

