// Class: MaterialItemButton


/* MaterialItemButton::~MaterialItemButton() */

void __thiscall MaterialItemButton::~MaterialItemButton(MaterialItemButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c31c0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c35b8;
  BagItemButtonBase::~BagItemButtonBase((BagItemButtonBase *)this);
  return;
}


/* MaterialItemButton::~MaterialItemButton() */

void __thiscall MaterialItemButton::~MaterialItemButton(MaterialItemButton *this)

{
  ~MaterialItemButton(this);
  AK::FreeHook(this);
  return;
}


/* MaterialItemButton::OnExchangeGeneralPlantChips(int, int) */

void __thiscall
MaterialItemButton::OnExchangeGeneralPlantChips(MaterialItemButton *this,int param_1,int param_2)

{
  if (*(int *)(this + 0x150) != param_1) {
    return;
  }
  *(int *)(this + 0x154) = *(int *)(this + 0x154) - param_2;
  FUN_04dbf6f4(this + 0xe8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialItemButton::GoToMaterialUI(int) */

void __thiscall MaterialItemButton::GoToMaterialUI(MaterialItemButton *this,int param_1)

{
  GameStateMgr *pGVar1;
  ActivityManager *pAVar2;
  NewPVPMgr *pNVar3;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x29d0) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
    goto LAB_04dc0924;
  }
  if (param_1 == 0x2a30) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    RiftUtils::SendGet_MainEntry();
    goto LAB_04dc0924;
  }
  if (param_1 == 0x2a24) {
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    UISingletonDialog<UIBag>::CloseDialog();
    pGVar1 = gGameStateMgr;
    std::string::string(asStack_30,"SecretGacha");
    GameStateMgr::ShowStore(pGVar1,asStack_30,5,5);
    std::string::~string(asStack_30);
    nop();
    goto LAB_04dc0924;
  }
  if (param_1 == 0x2a31) goto LAB_04dc0948;
  if (param_1 != 0x2a09) {
    if (param_1 == 0x2a2f) {
      BossChallenge::RequestDatas();
      goto LAB_04dc0924;
    }
    if ((param_1 != 0x2a13) && (param_1 != 0x2a4f)) {
      if (param_1 == 0x2a54) {
        UISingletonDialog<UIBagItemBox>::CloseDialog();
        UISingletonDialog<UIBag>::CloseDialog();
        GameStateMgr::ShowNostalgiaPVZ(gGameStateMgr,5,5);
        goto LAB_04dc0924;
      }
      if (param_1 == 0x2a66) {
        pAVar2 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::Request(pAVar2,0x2a66,true,0);
        goto LAB_04dc0924;
      }
      if (param_1 == 0x2a6b) {
        pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        FUN_04dc0324(afStack_28);
        NewPVPMgr::RequestMainEntryData(pNVar3,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
        goto LAB_04dc0924;
      }
      if (param_1 != 0x2a6a) {
        if (param_1 == 0x2a6f) {
LAB_04dc0948:
          pAVar2 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::Request(pAVar2,param_1,true,0);
          goto LAB_04dc0924;
        }
        if (param_1 != 0x2a72) {
          if (param_1 == 0x2a79) goto LAB_04dc0948;
          if ((param_1 != 0x2a81) && (param_1 != 0x2a84)) {
            if (param_1 == 0x2a89) {
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              LuckyChestRequest::RequestReward();
              goto LAB_04dc0924;
            }
            if (param_1 == 0x2a8c) {
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              UISingletonDialog<UITourismOctober>::ShowDialog();
              goto LAB_04dc0924;
            }
            if (param_1 == 0x2a8b) {
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              UISingletonDialog<UIAutumnHarvest>::ShowDialog();
              goto LAB_04dc0924;
            }
            if (param_1 != 0x2a8e) {
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              goto LAB_04dc0924;
            }
          }
        }
      }
    }
  }
  UISingletonDialog<UIBagItemBox>::CloseDialog();
  UISingletonDialog<UIBag>::CloseDialog();
  LawnApp::ShowActivityCollection(gLawnApp);
LAB_04dc0924:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialItemButton::ShowActivityNotOpen() */

void MaterialItemButton::ShowActivityNotOpen(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,4);
    TodStringTranslate(L"[UI_BAG_ACTIVITY_NOT_OPEN_TITLE]");
    TodStringTranslate(L"[UI_BAG_ACTIVITY_NOT_OPEN]");
    UIMessageBox::SetMessage(this,awStack_18,awStack_20);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    lVar2 = UIMessageBox::GetButtonCancel(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialItemButton::ButtonDepress(int) */

void __thiscall MaterialItemButton::ButtonDepress(MaterialItemButton *this,int param_1)

{
  UIBagItemBox *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<UIBagItemBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x150) == param_1) &&
     (this_00 = (UIBagItemBox *)UISingletonDialog<UIBagItemBox>::ShowDialog(),
     this_00 != (UIBagItemBox *)0x0)) {
    UIBagItemBox::InitView(this_00,3,*(int *)(this + 0x150),*(int *)(this + 0x154));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
    Sexy::Delegate2<UIBagItemBox*,int>::
    Delegate2<MaterialItemButton,void(MaterialItemButton::*)(UIBagItemBox*,int)>
              (aDStack_38,aCStack_50);
    UIBagItemBox::SetCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to MaterialItemButton::ButtonDepress(int) */

void __thiscall MaterialItemButton::ButtonDepress(MaterialItemButton *this,int param_1)

{
  ButtonDepress(this + -0x148,param_1);
  return;
}


/* MaterialItemButton::MaterialItemButton(int, UIRewardFrame::RewardType, std::string const&, int,
   bool) */

void __thiscall MaterialItemButton::MaterialItemButton(MaterialItemButton *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  BagItemButtonBase::BagItemButtonBase();
  *(undefined ***)this = &PTR_GetClass_069c31c0;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c35b8;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnExchangeGeneralPlantChips);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MaterialItemButton,void(MaterialItemButton::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ExchangeGeneralPlantChips,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialItemButton::ExchangeMaterial(int, int) */

void MaterialItemButton::ExchangeMaterial(int param_1,int param_2)

{
  DNetwork *this;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2976];
  string asStack_148 [320];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04dc0370(afStack_d38,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_148,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,asStack_d40,
             0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaterialItemButton::ExchangeChestMaterial(int, int) */

void MaterialItemButton::ExchangeChestMaterial(int param_1,int param_2)

{
  DNetwork *this;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V509");
  FUN_04dc03cc(afStack_58,param_1);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0);
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
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
/* MaterialItemButton::ButtonCallback(UIBagItemBox*, int) */

void __thiscall
MaterialItemButton::ButtonCallback(MaterialItemButton *this,UIBagItemBox *param_1,int param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *__s;
  TGALogMgr *pTVar5;
  string *psVar6;
  NewPlantUIMgr *pNVar7;
  UIGeneralPlantChipsExchange *this_00;
  size_t __n;
  TGABagData aTStack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  DString aDStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_a8);
  DString::DString(aDStack_98,5);
  __s = (char *)DString::c_str(aDStack_98);
  std::string::append((string *)aTStack_a8,__s,__n);
  DString::~DString(aDStack_98);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)aDStack_98,aTStack_a8);
  TGALogMgr::LogBag(pTVar5,aDStack_98);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aDStack_98);
  if (param_2 != 3) goto LAB_04dc75cc;
  iVar3 = UIBag::FindMaterialActivity(*(int *)(this + 0x150));
  if (iVar3 < 0) {
    if (iVar3 == -6) {
      ShowActivityNotOpen();
    }
    else if (iVar3 == -2) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      UISingletonDialog<UIBag>::CloseDialog();
      pNVar7 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
      cVar2 = NewPlantUIMgr::IsNewUI(pNVar7);
      if (cVar2 == '\0') {
        GameStateMgr::ShowLevelUp(gGameStateMgr,5,5);
      }
      else {
        GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr);
      }
    }
    else if (iVar3 == -1) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      UISingletonDialog<UIBag>::CloseDialog();
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string((string *)aDStack_98,"sunflower");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
      std::string::~string((string *)aDStack_98);
      nop();
      pNVar7 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
      cVar2 = NewPlantUIMgr::IsNewUI(pNVar7);
      pLVar1 = gLawnApp;
      if (cVar2 == '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aDStack_98,(RtWeakPtrBase *)aRStack_a0);
        LawnApp::ShowPlantAccessoryUI(pLVar1,4,aDStack_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aDStack_98)
        ;
      }
      else {
        GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr,5,5);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
    }
    else if (iVar3 == -3) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      UISingletonDialog<UIBag>::CloseDialog();
      GameStateMgr::ShowArtifactCultivation(gGameStateMgr,5,5);
    }
    else if (iVar3 == -4) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      this_00 = (UIGeneralPlantChipsExchange *)
                UISingletonDialog<UIGeneralPlantChipsExchange>::ShowDialog();
      iVar3 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      UIGeneralPlantChipsExchange::InitView(this_00,(string *)aDStack_98);
      std::string::~string((string *)aDStack_98);
    }
    else if (iVar3 == -5) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      UISingletonDialog<UIBag>::CloseDialog();
      GameStateMgr::ShowPlantGeneEnhancement(gGameStateMgr,5,5);
    }
    goto LAB_04dc75cc;
  }
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar2 = FUN_04dbf724(local_80);
  if ((cVar2 == '\0') || (local_70 == '\0')) {
    if (iVar3 == 0x2a79) {
      ExchangeMaterial((int)this,*(int *)(this + 0x150));
    }
    else if (iVar3 == 0x2a89) {
      ExchangeChestMaterial((int)this,*(int *)(this + 0x150));
      goto LAB_04dc7658;
    }
    ShowActivityNotOpen();
  }
  else {
    GoToMaterialUI(this,iVar3);
  }
LAB_04dc7658:
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04dc75cc:
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

