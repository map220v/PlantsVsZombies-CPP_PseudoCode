// Class: AdventureSurpriseUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureSurpriseUI::~AdventureSurpriseUI() */

void __thiscall AdventureSurpriseUI::~AdventureSurpriseUI(AdventureSurpriseUI *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682fc68;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682f940;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0x178));
  std::string::~string((string *)(this + 0x160));
  std::string::~string((string *)(this + 0x158));
  FUN_05476c50(this + 0x150);
  FUN_05476c50(this + 0x148);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdventureSurpriseUI::~AdventureSurpriseUI() */

void __thiscall AdventureSurpriseUI::~AdventureSurpriseUI(AdventureSurpriseUI *this)

{
  ~AdventureSurpriseUI(this);
  AK::FreeHook(this);
  return;
}


/* AdventureSurpriseUI::OnExploreSurpriseBoxOpend() */

void AdventureSurpriseUI::OnExploreSurpriseBoxOpend(void)

{
  AdventureBonusUI *this;
  
  LawnApp::KillAdventureSurpriseUI(gLawnApp);
  this = (AdventureBonusUI *)LawnApp::GetAdventureBonusUI(gLawnApp);
  AdventureBonusUI::SetBought(this);
  LawnApp::ShowAdventureBonusUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureSurpriseUI::Draw(Sexy::Graphics*) */

void __thiscall AdventureSurpriseUI::Draw(AdventureSurpriseUI *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  Image *pIVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar15;
  long lVar16;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x108));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7338);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar1 = *(int *)(this + 0x110);
  iVar9 = *(int *)(this + 0x108);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar10 = *(int *)(this + 0x10c);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar6 = FUN_042d2d60(0x14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af6fb0);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  Sexy::Graphics::DrawImage
            (param_1,pIVar12,iVar9 + (iVar1 - iVar4) / 2,(iVar10 - iVar5) + iVar6,iVar7,iVar8);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7000);
  iVar9 = FUN_042d2d60(10);
  iVar1 = *(int *)(this + 0x108);
  iVar10 = FUN_042d2d60(0x6e);
  Sexy::Graphics::DrawImage(param_1,pIVar12,iVar9 + iVar1,iVar10 + *(int *)(this + 0x10c));
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x138),*(int *)(this + 0x13c),*(int *)(this + 0x140),
             *(int *)(this + 0x144));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7288);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  iVar9 = FUN_042d2d60(0x23);
  iVar1 = *(int *)(this + 0x11c);
  iVar10 = FUN_042d2d60(0x32);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x118),iVar9 + iVar1,*(int *)(this + 0x120),iVar10);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x148,aIStack_28,uVar11,aIStack_18,5,1);
  iVar10 = FUN_042d2d60(0x28);
  iVar1 = *(int *)(this + 0x138);
  iVar4 = FUN_042d2d60(0x14);
  iVar9 = *(int *)(this + 0x13c);
  iVar5 = FUN_042d2d60(0x32);
  Sexy::Insets::Insets
            (aIStack_28,iVar10 + iVar1,iVar4 + iVar9,*(int *)(this + 0x140) - iVar5,
             *(int *)(this + 0x144));
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x150,aIStack_28,uVar11,aIStack_18,0,1);
  cVar2 = FUN_0547419c((string *)(this + 0x178));
  if ((cVar2 == '\0') && (0 < *(int *)(this + 0xe4))) {
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)
              SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x178));
    iVar1 = *(int *)(this + 0x104);
    iVar9 = *(int *)(this + 0xf8);
    iVar10 = *(int *)(this_01 + 0x10);
    iVar8 = *(int *)(this_01 + 0x28);
    iVar7 = *(int *)(this_01 + 0x2c);
    iVar4 = *(int *)(this_01 + 0x14);
    iVar5 = *(int *)(this + 0xfc);
    iVar6 = *(int *)(this + 0x100);
    pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Insets::Insets
              (aIStack_18,iVar9 + *(int *)(this_01 + 0x30),iVar5 + *(int *)(this_01 + 0x34),iVar6,
               iVar1);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar15,(TRect *)aIStack_18,(TRect *)(this_01 + 0x20));
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar3) {
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar16 + 0x48));
      Sexy::Insets::Insets
                (aIStack_18,
                 (int)((float)iVar9 +
                      (float)*(int *)(this_01 + 0x18) * ((float)iVar10 / (float)iVar8)),
                 (int)((float)iVar5 +
                      (float)*(int *)(this_01 + 0x1c) * ((float)iVar4 / (float)iVar7)),
                 (int)(((float)iVar10 / (float)iVar8) * (float)iVar6),
                 (int)(((float)iVar4 / (float)iVar7) * (float)iVar1));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar15,(TRect *)aIStack_18,(TRect *)(this_01 + 8))
      ;
    }
    Sexy::StrFormat(L"x %d",aIStack_18,(ulong)*(uint *)(this + 0xe4));
    uVar11 = FUN_054766ec(aIStack_18);
    FUN_05478178(auStack_30,uVar11,aIStack_28);
    nop();
    FUN_05476c50(aIStack_18);
    iVar1 = *(int *)(this + 0x100);
    iVar9 = *(int *)(this + 0xf8);
    iVar10 = FUN_042d2d60(5);
    iVar4 = FUN_042d2d60(0x28);
    Sexy::Insets::Insets
              (aIStack_28,iVar1 + iVar9 + iVar10,*(int *)(this + 0xfc),iVar1 + iVar4,
               *(int *)(this + 0x104));
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
    Sexy::Color::Color((Color *)aIStack_18,0xfc,0xf9,0xad);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
  }
  else {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
    if ((bVar3) && (0 < *(int *)(this + 0xe4))) {
      Sexy::StrFormat(L"x %d",aIStack_18);
      uVar11 = FUN_054766ec(aIStack_18);
      FUN_05478178(auStack_30,uVar11,aIStack_28);
      nop();
      FUN_05476c50(aIStack_18);
      pRVar15 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xf0));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar15,*(int *)(this + 0xf8),*(int *)(this + 0xfc),
                 *(int *)(this + 0x100),*(int *)(this + 0x104));
      iVar1 = *(int *)(this + 0x100);
      iVar9 = *(int *)(this + 0xf8);
      iVar10 = FUN_042d2d60(5);
      iVar4 = FUN_042d2d60(0x28);
      Sexy::Insets::Insets
                (aIStack_28,iVar1 + iVar9 + iVar10,*(int *)(this + 0xfc),iVar1 + iVar4,
                 *(int *)(this + 0x104));
      uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
      Sexy::Color::Color((Color *)aIStack_18,0xfc,0xf9,0xad);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aIStack_18,3,1);
      FUN_05476c50(auStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureSurpriseUI::ButtonDepress(int) */

void __thiscall AdventureSurpriseUI::ButtonDepress(AdventureSurpriseUI *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long *plVar4;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 local_44;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    LawnApp::KillAdventureSurpriseUI(gLawnApp);
    LawnApp::ShowAdventureBonusUI(gLawnApp);
  }
  else if (param_1 == 4) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178((wstring *)&local_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)&local_50);
      FUN_05476c50((wstring *)&local_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)&local_50);
      PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
      if (this_02 != (PlayerInfo *)0x0) {
        iVar2 = PlayerInfo::GetNumGems(this_02,true);
        iVar3 = *(int *)(this + 0xe8);
        if (iVar3 <= iVar2) {
          if (iVar3 < 1) {
            plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
            (**(code **)(*plVar4 + 0x128))(plVar4,*(undefined4 *)(this + 0xe0));
          }
          else {
            iVar3 = PlayerInfo::SubtractGems
                              (this_02,iVar3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
            if (iVar3 < 0) {
              LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
            }
            else {
              plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
              (**(code **)(*plVar4 + 0x128))(plVar4,*(undefined4 *)(this + 0xe0));
              Sexy::Insets::Insets((Insets *)&local_50);
              local_44 = *(undefined4 *)(this + 0xe8);
              MessageRouter::Post<int,PlantAdventureLogInfo_const&,int,PlantAdventureLogInfo>
                        (gMessageRouter,Message::PlantAdventure,5,local_50,
                         CONCAT44(local_44,uStack_48));
            }
          }
          goto LAB_042d84c0;
        }
      }
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
  }
LAB_042d84c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdventureSurpriseUI::ButtonDepress(int) */

void __thiscall AdventureSurpriseUI::ButtonDepress(AdventureSurpriseUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureSurpriseUI::AdventureSurpriseUI(int) */

void __thiscall AdventureSurpriseUI::AdventureSurpriseUI(AdventureSurpriseUI *this,int param_1)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  ButtonListener *this_01;
  string *this_02;
  string *this_03;
  int iVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  PrimeText *this_04;
  ProfileMgr *this_05;
  long lVar14;
  NameMapperBase *pNVar15;
  string *psVar16;
  LotteryResultProgressBar *pLVar17;
  SalesProgressBar *pSVar18;
  PVZ2UIButton *pPVar19;
  Image *pIVar20;
  UIWidgetImage *this_06;
  undefined8 uVar21;
  size_t sVar22;
  Widget *pWVar23;
  long lVar24;
  code *pcVar25;
  undefined8 local_f0;
  undefined8 uStack_e8;
  string asStack_c8 [8];
  string asStack_c0 [8];
  Delegate0 aDStack_b8 [48];
  string asStack_88 [56];
  undefined8 local_50;
  undefined8 uStack_48;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0);
  this_01 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  psVar16 = (string *)(this + 0x158);
  this_02 = (string *)(this + 0x160);
  this_03 = (string *)(this + 0x178);
  Sexy::ButtonListener::ButtonListener(this_01);
  *(undefined ***)this = &PTR_GetClass_0682f940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682fc68;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  FUN_05476574(this + 0x148);
  FUN_05476574(this + 0x150);
  Set8BytesTo0(psVar16);
  Set8BytesTo0(this_02);
  Set8BytesTo0(this_03);
  this_04 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_04);
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar3 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar3,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  sVar22 = 0;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  *(undefined4 *)(this + 0xe4) = 0;
  *(int *)(this + 0xe0) = param_1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::string::append(psVar16,"",sVar22);
  std::string::append(this_02,"",sVar22);
  *(undefined4 *)(this + 0xe8) = 0;
  std::string::append(this_03,"",sVar22);
  *(undefined4 *)(this + 0x180) = 0xffffffff;
  this_05 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar14 = ProfileMgr::GetCurrentProfile(this_05);
  if (lVar14 != 0) {
    PlayerInfo::GetPlantAdventureInfo((int)lVar14);
    *(undefined4 *)(this + 0xe8) = local_38;
    *(int *)(this + 0x180) = iStack_3c;
    *(undefined4 *)(this + 0xe4) = local_34;
    pNVar15 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    bVar4 = NameMapperBase::ContainsId(pNVar15,iStack_3c);
    sVar22 = (size_t)bVar4;
    if (bVar4 == 0) {
      pNVar15 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar5 = NameMapperBase::ContainsId(pNVar15,iStack_3c);
      if (cVar5 != '\0') {
        std::string::append(psVar16,"avatar_piece",sVar22);
        iVar6 = AvatarChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        std::operator+("avatar_piece_",asStack_88);
        FUN_05474278(this_02,asStack_c0);
        std::string::~string(asStack_c0);
        std::string::~string(asStack_88);
        psVar16 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
        cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_c0);
        if (cVar5 != '\0') {
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
          lVar14 = StringHelper::ToImage((string *)(lVar14 + 0x60),false);
          if (lVar14 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_00,(RtId *)asStack_88);
            Sexy::RtId::~RtId((RtId *)asStack_88);
          }
        }
        goto LAB_042db7d4;
      }
      pNVar15 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar5 = NameMapperBase::ContainsId(pNVar15,iStack_3c);
      if (cVar5 != '\0') {
        std::string::append(psVar16,"accessory_piece",(size_t)asStack_c8);
        iVar6 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        FUN_031f5e7c(asStack_88,"accessory_piece_",asStack_c8);
        FUN_05474278(this_02,asStack_88);
        std::string::~string(asStack_88);
        psVar16 = (string *)
                  Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        std::operator+(asStack_c8,"_piece");
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
        std::string::~string(asStack_88);
        cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_c0);
        if (cVar5 != '\0') {
          lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
          lVar14 = StringHelper::ToImage((string *)(lVar14 + 0x60),false);
          if (lVar14 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)this_00,(RtId *)asStack_88);
            Sexy::RtId::~RtId((RtId *)asStack_88);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0)
        ;
        std::string::~string(asStack_c8);
      }
    }
    else {
      std::string::append(psVar16,"plant_piece",sVar22);
      iVar6 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar6);
      std::operator+("plant_piece_",asStack_88);
      FUN_05474278(this_02,asStack_c0);
      std::string::~string(asStack_c0);
      std::string::~string(asStack_88);
      psVar16 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
      cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_c0);
      if (cVar5 != '\0') {
        iVar6 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar6);
        FUN_05474278(this_03,asStack_88);
        std::string::~string(asStack_88);
      }
LAB_042db7d4:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_c0);
    }
    S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_50);
  }
  iVar7 = FUN_042d2d60(0x285);
  iVar8 = FUN_042d2d60(0x17c);
  iVar6 = *(int *)(this + 0x50);
  iVar9 = FUN_042d2d60(0x1e);
  iVar1 = *(int *)(this + 0x54);
  TodStringTranslate(L"[PLANT_ADVENTURE_SURPRISE_TITLE]");
  FUN_054766c8(this + 0x148,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  Sexy::Insets::Insets
            ((Insets *)&local_50,(iVar6 - iVar7) / 2,iVar9 + (iVar1 - iVar8) / 2,iVar7,iVar8);
  *(undefined8 *)(this + 0x108) = local_50;
  *(undefined8 *)(this + 0x110) = uStack_48;
  iVar6 = FUN_042d2d60(10);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar6 + *(int *)(this + 0x108),iVar6 + *(int *)(this + 0x10c),
             iVar6 * -2 + *(int *)(this + 0x110),iVar6 * -2 + *(int *)(this + 0x114));
  *(undefined8 *)(this + 0x118) = local_50;
  *(undefined8 *)(this + 0x120) = uStack_48;
  iVar6 = FUN_042d2d60(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar6 + *(int *)(this + 0x108),iVar6 + *(int *)(this + 0x10c),
             iVar6 * -2 + *(int *)(this + 0x110),iVar6 * -2 + *(int *)(this + 0x114));
  *(undefined8 *)(this + 0x128) = local_50;
  *(undefined8 *)(this + 0x130) = uStack_48;
  iVar7 = FUN_042d2d60(200);
  iVar6 = *(int *)(this + 0x108);
  iVar8 = FUN_042d2d60(100);
  iVar1 = *(int *)(this + 0x10c);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7288);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7288);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar18);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + iVar6,iVar8 + iVar1,(int)((double)iVar9 * 1.2),
             (int)((double)iVar10 * 1.3));
  *(undefined8 *)(this + 0x138) = local_50;
  *(undefined8 *)(this + 0x140) = uStack_48;
  TodStringTranslate(L"[PLANT_ADVENTURE_SURPRISE_HINT]");
  FUN_054766c8(this + 0x150,(string *)&local_50);
  FUN_05476c50((string *)&local_50);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  iVar1 = (iVar6 * 3) / 2;
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7168);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar18);
  TodStringTranslate(L"[PLANT_ADVENTURE_SURPRISE_BUTTON_GIVEUP]");
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar19,3,this_01,(wstring *)asStack_88,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x168) = pPVar19;
  FUN_05476c50(asStack_88);
  iVar6 = *(int *)(this + 0x110);
  iVar10 = FUN_042d2d60(100);
  iVar7 = *(int *)(this + 0x10c);
  iVar8 = *(int *)(this + 0x114);
  iVar6 = *(int *)(this + 0x108) + ((iVar6 + iVar1 * -2) - iVar10) / 2;
  iVar10 = FUN_042d2d60(10);
  (**(code **)(**(long **)(this + 0x168) + 0x198))
            (*(long **)(this + 0x168),iVar6,(iVar7 + iVar8 + -(iVar9 / 2) + iVar10 / 2) - iVar10,
             iVar1,iVar9);
  pPVar19 = *(PVZ2UIButton **)(this + 0x168);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af7168,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af6df8,2);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),0);
  pWVar23 = *(Widget **)(this + 0x168);
  pWVar23[0x59] = (Widget)0x0;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar23);
  FUN_05476574((wstring *)asStack_c0);
  if (*(int *)(this + 0xe8) == 0) {
    TodStringTranslate(L"[PLANT_ADVENTURE_SURPRISE_BUTTON_FREE]");
    FUN_054766c8((wstring *)asStack_c0,(string *)&local_50);
    FUN_05476c50((string *)&local_50);
  }
  else {
    TodStringTranslate(L"[PLANT_ADVENTURE_SURPRISE_BUTTON_OPEN]");
    TodReplaceNumberString((wstring *)&local_50,L"{GEMS}",*(int *)(this + 0xe8));
    FUN_054766c8((wstring *)asStack_c0,asStack_88);
    FUN_05476c50(asStack_88);
    FUN_05476c50((string *)&local_50);
  }
  Sexy::Color::Color((Color *)&local_50,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar19,4,this_01,(wstring *)asStack_c0,(Color *)&local_50);
  *(PVZ2UIButton **)(this + 0x170) = pPVar19;
  iVar10 = FUN_042d2d60(100);
  iVar7 = *(int *)(this + 0x10c);
  iVar8 = *(int *)(this + 0x114);
  iVar11 = FUN_042d2d60(10);
  (**(code **)(*(long *)pPVar19 + 0x198))
            (pPVar19,iVar6 + iVar1 + iVar10,(-(iVar9 / 2) + iVar7 + iVar8 + iVar11 / 2) - iVar11,
             iVar1,iVar9);
  pPVar19 = *(PVZ2UIButton **)(this + 0x170);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_88,&DAT_06af6fd8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_50,&DAT_06af7540,2);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)asStack_88,(PVZ2UIImage *)&local_50);
  (**(code **)(**(long **)(this + 0x170) + 0x188))(*(long **)(this + 0x170),0);
  pWVar23 = *(Widget **)(this + 0x170);
  pWVar23[0x59] = (Widget)0x0;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar23);
  if (*(int *)(this + 0xe8) - 1U < 9) {
    pIVar20 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af71e0);
    this_06 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_06,pIVar20);
    lVar24 = *(long *)(this + 0x170);
    lVar14 = *(long *)this_06;
    uVar21 = 0x15;
  }
  else {
    if (*(int *)(this + 0xe8) < 10) goto LAB_042dbc5c;
    pIVar20 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af71e0);
    this_06 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_06,pIVar20);
    lVar24 = *(long *)(this + 0x170);
    lVar14 = *(long *)this_06;
    uVar21 = 0x12;
  }
  pcVar25 = *(code **)(lVar14 + 0x198);
  iVar7 = FUN_042d2d60(uVar21);
  iVar6 = *(int *)(lVar24 + 0x48);
  iVar8 = FUN_042d2d60(0x14);
  iVar1 = *(int *)(lVar24 + 0x4c);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af71e0);
  uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar18 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af71e0);
  uVar13 = SalesProgressBar::GetCurrentLevel(pSVar18);
  (*pcVar25)(this_06,iVar7 + iVar6,iVar8 + iVar1,uVar12,uVar13);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_06);
LAB_042dbc5c:
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af76e0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  iVar9 = (int)((double)iVar6 * 3.2);
  iVar7 = FUN_042d2d60(100);
  iVar6 = *(int *)(this + 0xf8);
  iVar1 = *(int *)(this + 0x110);
  iVar8 = FUN_042d2d60(0x96);
  Sexy::Insets::Insets
            ((Insets *)&local_50,iVar7 + ((iVar6 + iVar1) - iVar9) / 2,
             iVar8 + *(int *)(this + 0x13c),iVar9,iVar9);
  *(undefined8 *)(this + 0xf8) = local_50;
  *(undefined8 *)(this + 0x100) = uStack_48;
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotExploreSurprise);
  local_f0 = local_50;
  uStack_e8 = uStack_48;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<AdventureSurpriseUI,void(AdventureSurpriseUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::GotExploreSurprise,&local_f0);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExploreSurpriseBoxOpend);
  Sexy::Delegate0::Delegate0<AdventureSurpriseUI,void(AdventureSurpriseUI::*)()>
            (aDStack_b8,asStack_88);
  MessageRouter::Subscribe((MessageRouter *)puVar2,Message::ExploreSurpriseBoxOpend,aDStack_b8);
  FUN_05476c50((wstring *)asStack_c0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureSurpriseUI::OnGotExploreSurprise(bool) */

void __thiscall AdventureSurpriseUI::OnGotExploreSurprise(AdventureSurpriseUI *this,bool param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  ProfileMgr *this_00;
  long lVar3;
  TGALogMgr *pTVar4;
  undefined4 *puVar5;
  BoxOpenUI *pBVar6;
  PVZ2UIDialog *pPVar7;
  undefined1 auStack_d8 [8];
  string asStack_d0 [8];
  Delegate0 aDStack_c8 [48];
  PlantAdventureInfo aPStack_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  PlantAdventureInfo aPStack_50 [72];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    if ((lVar3 != 0) && (0 < *(int *)(this + 0xe4))) {
      bVar2 = std::operator!=("",(string *)(this + 0x160));
      if (bVar2) {
        PlantAdventureInfo::PlantAdventureInfo(aPStack_98);
        local_90 = 0;
        local_94 = *(undefined4 *)(this + 0xe0);
        local_8c = *(undefined4 *)(this + 0x180);
        local_88 = *(undefined4 *)(this + 0xe4);
        local_80 = *(undefined4 *)(this + 0xe8);
        local_78 = 0;
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        PlantAdventureInfo::PlantAdventureInfo(aPStack_50,aPStack_98);
        TGALogMgr::LogPlantAdventure(pTVar4,5,aPStack_50,0);
        S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)aPStack_50);
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
               *)aPStack_50);
        puVar5 = (undefined4 *)
                 std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                               *)aPStack_50,(string *)(this + 0x160));
        *puVar5 = *(undefined4 *)(this + 0xe4);
        lVar3 = std::
                map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                ::size((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        *)aPStack_50);
        pLVar1 = gLawnApp;
        if (lVar3 != 0) {
          std::string::string(asStack_d0,"POPANIM_PLANTADVENTURE_OPENSURPRISE");
          LawnApp::ShowOpenSurpriseBoxUI(pLVar1,asStack_d0);
          std::string::~string(asStack_d0);
          nop();
          pBVar6 = (BoxOpenUI *)LawnApp::getSurpriseBoxOpenUI(gLawnApp);
          BoxOpenUI::SetContentList(pBVar6,(map *)aPStack_50);
          pBVar6 = (BoxOpenUI *)LawnApp::getSurpriseBoxOpenUI(gLawnApp);
          BoxOpenUI::StartPlayingAnimation(pBVar6);
        }
        std::
        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                *)aPStack_50);
        S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)aPStack_98);
      }
    }
  }
  else {
    FUN_05478178((wstring *)aPStack_98,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_d8);
    FUN_05478178((wstring *)aPStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",asStack_d0);
    pPVar7 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)aPStack_98,(wstring *)aPStack_50);
    FUN_05476c50((wstring *)aPStack_50);
    nop();
    FUN_05476c50((wstring *)aPStack_98);
    nop();
    FUN_05478178((wstring *)aPStack_98,L"[DIALOG_STRING_OK]",asStack_d0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_c8,(wstring *)aPStack_50);
    PVZ2UIDialog::AddButton(pPVar7,(wstring *)aPStack_98,aDStack_c8,param_1);
    FUN_05476c50((wstring *)aPStack_98);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

