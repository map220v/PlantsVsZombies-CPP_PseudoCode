// Class: StoreGiftPanelUI


/* StoreGiftPanelUI::onPopRewardPressed() */

void StoreGiftPanelUI::onPopRewardPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreGiftPanelUI::RefreshItems() */

void __thiscall StoreGiftPanelUI::RefreshItems(StoreGiftPanelUI *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  ulong uVar8;
  long *plVar9;
  RtWeakPtrBase *pRVar10;
  StoreGiftConfig *pSVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  vector *local_18;
  vector *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar17 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_033961ec(10);
  uVar16 = *(undefined8 *)(this + 0x140);
  *(undefined4 *)(this + 0x170) = 0;
  uVar8 = FUN_0339543c(uVar16,*(undefined8 *)(this + 0x148));
  if (uVar8 != 0) {
    do {
      plVar9 = (long *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar17);
      if (*plVar9 != 0) {
        pRVar10 = (RtWeakPtrBase *)FUN_03395448(uVar16,uVar17);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar10);
        local_18 = (vector *)0x0;
        local_10 = (vector *)0x0;
        pSVar11 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        cVar1 = StoreGiftConfig::GetGiftUnlockAvatarPlantArray
                          (pSVar11,(string *)(lVar12 + 0x10),&local_10);
        if (cVar1 == '\0') {
          iVar6 = 0;
          iVar18 = 0;
        }
        else {
          iVar6 = 0;
          uVar16 = *(undefined8 *)local_10;
          uVar13 = FUN_033954e8(uVar16,*(undefined8 *)(local_10 + 8));
          iVar18 = (int)uVar13;
          uVar8 = 0;
          while (uVar8 < uVar13) {
            uVar16 = FUN_033954f4(uVar16,uVar8);
            cVar1 = PlayerInfo::IsPlantAvatarUnLocked(pPVar7,uVar16,0,0);
            if (cVar1 != '\0') {
              iVar6 = iVar6 + 1;
            }
            uVar16 = *(undefined8 *)local_10;
            uVar13 = FUN_033954e8(uVar16,*(undefined8 *)(local_10 + 8));
            uVar8 = uVar8 + 1;
          }
        }
        pSVar11 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        cVar1 = StoreGiftConfig::GetGiftAvatarPlantPieceArray
                          (pSVar11,(string *)(lVar12 + 0x10),&local_18);
        if (cVar1 == '\0') {
          iVar19 = 0;
          if (local_18 != (vector *)0x0) goto LAB_03397a28;
          if ((local_10 != (vector *)0x0) && (iVar18 == iVar6)) goto LAB_03397b50;
LAB_03397a38:
          puVar14 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar17);
          plVar9 = (long *)*puVar14;
          uVar3 = FUN_033961ec(0x19);
          uVar4 = FUN_033961ec(200);
          uVar5 = FUN_033961ec(0x157);
          (**(code **)(*plVar9 + 0x198))(plVar9,iVar2,uVar3,uVar4,uVar5);
          lVar12 = plVar9[10];
          *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
          iVar2 = iVar2 + (int)lVar12;
        }
        else {
          uVar16 = *(undefined8 *)local_18;
          uVar13 = FUN_033954fc(uVar16,*(undefined8 *)(local_18 + 8));
          iVar19 = (int)uVar13;
          uVar8 = 0;
          while (uVar8 < uVar13) {
            uVar16 = FUN_03395510(uVar16,uVar8);
            cVar1 = PlayerInfo::IsPlantAvatarPiecesFull(pPVar7,uVar16,0,0);
            if (cVar1 != '\0') {
              iVar6 = iVar6 + 1;
            }
            uVar16 = *(undefined8 *)local_18;
            uVar13 = FUN_033954fc(uVar16,*(undefined8 *)(local_18 + 8));
            uVar8 = uVar8 + 1;
          }
LAB_03397a28:
          if (iVar18 + iVar19 != iVar6) goto LAB_03397a38;
LAB_03397b50:
          puVar14 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar17);
          (**(code **)(*(long *)this + 0x68))(this,*puVar14);
          plVar9 = gLawnApp;
          puVar14 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar17);
          (**(code **)(*plVar9 + 0x150))(plVar9,*puVar14);
          puVar14 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar17);
          *puVar14 = 0;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        uVar16 = *(undefined8 *)(this + 0x140);
        uVar8 = FUN_0339543c(uVar16,*(undefined8 *)(this + 0x148));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar8);
  }
  iVar6 = FUN_033961ec(10);
  local_10 = (vector *)CONCAT44(local_10._4_4_,iVar6 + iVar2);
  piVar15 = eastl::max_alt<int>((int *)(this + 0x50),(int *)&local_10);
  *(int *)(this + 0x50) = *piVar15;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreGiftPanelUI::onUseGemFinish(bool const&) */

void __thiscall StoreGiftPanelUI::onUseGemFinish(StoreGiftPanelUI *this,bool *param_1)

{
  LawnApp *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *this_03;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  wchar_t *pwVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_00 = gLawnApp;
  if (*param_1 == false) {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2);
    goto LAB_03398e84;
  }
  iVar2 = FUN_033961ec(0x23c);
  iVar3 = FUN_033961ec(0x175);
  this_03 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  if (this_03 != (PVZ2UIDialog *)0x0) {
    TodStringTranslate(L"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
    PVZ2UIDialog::SetHeaderLabel(this_03,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
             FUN_03395448(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x174));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
    bVar1 = std::operator==((string *)(lVar5 + 0x10),"com.popcap.ios.chs.PVZ2.luxury.gift");
    if (bVar1) {
      std::string::string(asStack_50,"wintermelon");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"imitater");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"coconutcannon");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"lightningreed");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"spikerock");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      std::string::string(asStack_50,"tallnut");
      PlayerInfo::UnlockPlant(this_02,asStack_50,true);
      std::string::~string(asStack_50);
      nop();
      pwVar6 = L"[STORE_GIFT_LUXURY_GIFT_BUY_FINISH]";
LAB_03398dbc:
      TodStringTranslate(pwVar6);
      PVZ2UIDialog::SetFooterLabel(this_03,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
    }
    else {
      pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
               FUN_03395448(*(undefined8 *)(this + 0x140),(long)*(int *)(this + 0x174));
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
      bVar1 = std::operator==((string *)(lVar5 + 0x10),"com.popcap.ios.chs.PVZ2.onsale.gift");
      if (bVar1) {
        std::string::string(asStack_50,"wintermelon");
        PlayerInfo::UnlockPlant(this_02,asStack_50,true);
        std::string::~string(asStack_50);
        nop();
        std::string::string(asStack_50,"lightningreed");
        PlayerInfo::UnlockPlant(this_02,asStack_50,true);
        std::string::~string(asStack_50);
        nop();
        std::string::string(asStack_50,"tallnut");
        PlayerInfo::UnlockPlant(this_02,asStack_50,true);
        std::string::~string(asStack_50);
        nop();
        pwVar6 = L"[STORE_GIFT_ONSALE_GIFT_BUY_FINISH]";
        goto LAB_03398dbc;
      }
    }
    FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPopRewardPressed);
    Sexy::Delegate0::Delegate0<StoreGiftPanelUI,void(StoreGiftPanelUI::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_03,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    PVZ2UIDialog::SetBackgroundDarken(this_03,true,0.5);
  }
  RefreshItems(this);
LAB_03398e84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoreGiftPanelUI::~StoreGiftPanelUI() */

void __thiscall StoreGiftPanelUI::~StoreGiftPanelUI(StoreGiftPanelUI *this)

{
  *(undefined ***)(this + 0xe0) = &PTR__StoreGiftPanelUI_06614160;
  *(undefined ***)this = &PTR_GetClass_06613de0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06614118;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::~vector
            ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
             (this + 0x158));
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)(this + 0x140));
  StorePanelUI::~StorePanelUI((StorePanelUI *)this);
  return;
}


/* non-virtual thunk to StoreGiftPanelUI::~StoreGiftPanelUI() */

void __thiscall StoreGiftPanelUI::~StoreGiftPanelUI(StoreGiftPanelUI *this)

{
  ~StoreGiftPanelUI(this + -0xe0);
  return;
}


/* StoreGiftPanelUI::~StoreGiftPanelUI() */

void __thiscall StoreGiftPanelUI::~StoreGiftPanelUI(StoreGiftPanelUI *this)

{
  ~StoreGiftPanelUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StoreGiftPanelUI::~StoreGiftPanelUI() */

void __thiscall StoreGiftPanelUI::~StoreGiftPanelUI(StoreGiftPanelUI *this)

{
  ~StoreGiftPanelUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreGiftPanelUI::ButtonDepress(int) */

void __thiscall StoreGiftPanelUI::ButtonDepress(StoreGiftPanelUI *this,int param_1)

{
  LawnApp *pLVar1;
  ProfileMgr *this_00;
  char *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  MagentoProductProps *this_02;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Buy_Coins");
  this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
            FUN_03395448(*(undefined8 *)(this + 0x140),(long)param_1);
  this_02 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
  MagentoProductProps::GetPriceInUSD(this_02,true);
  pLVar1 = gLawnApp;
  pRVar3 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(this + 0x140),(long)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
  LawnApp::ShowBuyGiftDialog(pLVar1,aRStack_10,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StoreGiftPanelUI::ButtonDepress(int) */

void __thiscall StoreGiftPanelUI::ButtonDepress(StoreGiftPanelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoreGiftPanelUI::StoreGiftPanelUI(Sexy::TRect<int> const&, Sexy::RtWeakPtr<MagentoCategoryProps>
   const&) */

void __thiscall
StoreGiftPanelUI::StoreGiftPanelUI(StoreGiftPanelUI *this,TRect *param_1,RtWeakPtr *param_2)

{
  undefined *this_00;
  Widget *pWVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ProfileMgr *this_01;
  PlayerInfo *pPVar8;
  long lVar9;
  RtWeakPtrBase *pRVar10;
  StoreGiftConfig *pSVar11;
  ulong uVar12;
  ActivityConfig *this_02;
  PVZ2UIStoreItemDisplayer *pPVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Widget *local_60;
  int local_58;
  undefined8 *local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StorePanelUI::StorePanelUI((StorePanelUI *)this);
  uVar17 = 0;
  *(undefined ***)this = &PTR_GetClass_06613de0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06614118;
  *(undefined ***)(this + 0xe0) = &PTR__StoreGiftPanelUI_06614160;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  *(undefined4 *)(this + 0x174) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(this + 0xe8,(string *)local_50);
  std::string::~string((string *)local_50);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar3 = FUN_033961ec(10);
  *(undefined4 *)(this + 0x170) = 0;
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  lVar9 = FUN_0339543c(*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x68));
  if (lVar9 != 0) {
    do {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pRVar10 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar9 + 0x60),uVar17);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar10);
      lVar9 = LawnApp::GetStoreGiftConfig();
      if (lVar9 == 0) {
LAB_033a4640:
        lVar9 = LawnApp::GetActivityConfig();
        if (lVar9 != 0) {
          this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          cVar2 = ActivityConfig::IsGeneralSaleOnDay(this_02,(string *)(lVar9 + 0x10));
          if (cVar2 == '\0') goto LAB_033a483c;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_68);
        pPVar13 = ::operator_new(0x1a0);
        PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                  (pPVar13,(string *)local_50,*(undefined4 *)(this + 0x170),this + 0xd8);
        local_60 = (Widget *)pPVar13;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        pWVar1 = local_60;
        uVar4 = FUN_033961ec(0x19);
        uVar5 = FUN_033961ec(200);
        uVar6 = FUN_033961ec(0x157);
        (**(code **)(*(long *)pWVar1 + 0x198))(pWVar1,iVar3,uVar4,uVar5,uVar6);
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,local_60);
        iVar3 = iVar3 + *(int *)(local_60 + 0x50);
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)(this + 0x140),(RtWeakPtr *)aRStack_68);
        std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                  ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
                   (this + 0x158),(PVZ2UIStoreItemDisplayer **)&local_60);
        *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      else {
        local_60 = (Widget *)0x0;
        local_50[0] = (undefined8 *)0x0;
        pSVar11 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        cVar2 = StoreGiftConfig::GetGiftUnlockAvatarPlantArray
                          (pSVar11,(string *)(lVar9 + 0x10),(vector **)local_50);
        if (cVar2 == '\0') {
          iVar7 = 0;
          iVar19 = 0;
        }
        else {
          iVar7 = 0;
          uVar16 = *local_50[0];
          uVar12 = FUN_033954e8(uVar16,local_50[0][1]);
          iVar19 = (int)uVar12;
          uVar14 = 0;
          while (uVar14 < uVar12) {
            uVar16 = FUN_033954f4(uVar16,uVar14);
            cVar2 = PlayerInfo::IsPlantAvatarUnLocked(pPVar8,uVar16,0,0);
            if (cVar2 != '\0') {
              iVar7 = iVar7 + 1;
            }
            uVar16 = *local_50[0];
            uVar12 = FUN_033954e8(uVar16,local_50[0][1]);
            uVar14 = uVar14 + 1;
          }
        }
        pSVar11 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        cVar2 = StoreGiftConfig::GetGiftAvatarPlantPieceArray
                          (pSVar11,(string *)(lVar9 + 0x10),(vector **)&local_60);
        if (cVar2 == '\0') {
          iVar18 = 0;
          if ((local_60 == (Widget *)0x0) && (local_50[0] == (undefined8 *)0x0)) goto LAB_033a4640;
        }
        else {
          uVar16 = *(undefined8 *)local_60;
          uVar12 = FUN_033954fc(uVar16,*(undefined8 *)(local_60 + 8));
          iVar18 = (int)uVar12;
          uVar14 = 0;
          while (uVar14 < uVar12) {
            uVar16 = FUN_03395510(uVar16,uVar14);
            cVar2 = PlayerInfo::IsPlantAvatarPiecesFull(pPVar8,uVar16,0,0);
            if (cVar2 != '\0') {
              iVar7 = iVar7 + 1;
            }
            uVar16 = *(undefined8 *)local_60;
            uVar12 = FUN_033954fc(uVar16,*(undefined8 *)(local_60 + 8));
            uVar14 = uVar14 + 1;
          }
        }
        if (iVar19 + iVar18 != iVar7) goto LAB_033a4640;
LAB_033a483c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      uVar17 = uVar17 + 1;
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar14 = FUN_0339543c(*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x68));
    } while (uVar17 < uVar14);
  }
  Sexy::Insets::Insets((Insets *)&local_60,(Insets *)param_1);
  iVar7 = FUN_033961ec(10);
  local_50[0] = (undefined8 *)CONCAT44(local_50[0]._4_4_,iVar7 + iVar3);
  piVar15 = eastl::max_alt<int>((int *)(param_1 + 8),(int *)local_50);
  local_58 = *piVar15;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)&local_60);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshItems);
  Sexy::Delegate0::Delegate0<StoreGiftPanelUI,void(StoreGiftPanelUI::*)()>
            (aDStack_38,(string *)local_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ReflashStoreGiftUI,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

