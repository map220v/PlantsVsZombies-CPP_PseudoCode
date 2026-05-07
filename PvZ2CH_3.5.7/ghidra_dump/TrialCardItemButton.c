// Class: TrialCardItemButton


/* TrialCardItemButton::~TrialCardItemButton() */

void __thiscall TrialCardItemButton::~TrialCardItemButton(TrialCardItemButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c3600;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c39f8;
  BagItemButtonBase::~BagItemButtonBase((BagItemButtonBase *)this);
  return;
}


/* TrialCardItemButton::~TrialCardItemButton() */

void __thiscall TrialCardItemButton::~TrialCardItemButton(TrialCardItemButton *this)

{
  ~TrialCardItemButton(this);
  AK::FreeHook(this);
  return;
}


/* TrialCardItemButton::TrialCardItemButton(int, UIRewardFrame::RewardType, std::string const&, int,
   bool) */

void __thiscall TrialCardItemButton::TrialCardItemButton(TrialCardItemButton *this)

{
  BagItemButtonBase::BagItemButtonBase();
  *(undefined ***)this = &PTR_GetClass_069c3600;
  *(undefined ***)(this + 0x148) = &PTR_ButtonPress_069c39f8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardItemButton::ButtonDepress(int) */

void __thiscall TrialCardItemButton::ButtonDepress(TrialCardItemButton *this,int param_1)

{
  UIBagItemBox *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<UIBagItemBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x150) == param_1) &&
     (this_00 = (UIBagItemBox *)UISingletonDialog<UIBagItemBox>::ShowDialog(),
     this_00 != (UIBagItemBox *)0x0)) {
    UIBagItemBox::InitView(this_00,4,*(int *)(this + 0x150),*(int *)(this + 0x154));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x3e0);
    Sexy::Delegate2<UIBagItemBox*,int>::
    Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIBagItemBox*,int)>
              (aDStack_38,aCStack_50);
    UIBagItemBox::SetCallBack(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TrialCardItemButton::ButtonDepress(int) */

void __thiscall TrialCardItemButton::ButtonDepress(TrialCardItemButton *this,int param_1)

{
  ButtonDepress(this + -0x148,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardItemButton::ButtonCallback(UIBagItemBox*, int) */

void __thiscall
TrialCardItemButton::ButtonCallback(TrialCardItemButton *this,UIBagItemBox *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar3;
  wchar_t *pwVar4;
  Image *pIVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  Delegate2<UIMessageBox*,int> *local_f0;
  string asStack_d0 [8];
  wstring awStack_c8 [8];
  wstring awStack_c0 [8];
  wstring awStack_b8 [8];
  string asStack_b0 [24];
  int local_98 [3];
  int local_8c;
  undefined8 local_80;
  undefined8 local_78;
  int local_68 [3];
  int local_5c;
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 3) goto LAB_04dc1f58;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
  TrialCardManager::GetTrialCardConfigByID(iVar2);
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_d0);
  if (cVar1 == '\0') {
LAB_04dc2008:
    iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    cVar1 = TrialCardManager::IsTrialingPlant(iVar2);
    if (cVar1 == '\0') {
      pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar3 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar3,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[TRIAL_CARD_CONFIRM_USE]");
        UIMessageBox::SetMessage(pUVar3,(wstring *)asStack_b0,awStack_c0);
        std::string::string((string *)local_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar5 = (Image *)StringHelper::ToImage((string *)local_68,false);
        UIMessageBox::SetBackground(pUVar3,pIVar5);
        std::string::~string((string *)local_68);
        nop();
        lVar6 = UIMessageBox::GetButtonOK(pUVar3);
        thunk_FUN_05477b9c(lVar6 + 0xd8,awStack_b8);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,Exchange);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIMessageBox*,int)>
                  (aDStack_38,(string *)local_68);
        UIMessageBox::SetCallback(pUVar3,aDStack_38);
        FUN_05476c50((wstring *)asStack_b0);
        FUN_05476c50(awStack_b8);
        FUN_05476c50(awStack_c0);
      }
    }
    else {
      iVar2 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
      TrialCardManager::GetConfigForBestTrialStatus(iVar2);
      if (local_68[0] == local_98[0]) {
LAB_04dc2380:
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[BUTTON_OK]");
          pwVar4 = L"[TRIAL_CARD_SAME_TRIAL_PLANT_LEVEL]";
LAB_04dc20b4:
          local_f0 = aDStack_38;
          TodStringTranslate(pwVar4);
          UIMessageBox::SetMessage(pUVar3,awStack_b8,awStack_c8);
          std::string::string(asStack_b0,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar5 = (Image *)StringHelper::ToImage(asStack_b0,false);
          UIMessageBox::SetBackground(pUVar3,pIVar5);
          std::string::~string(asStack_b0);
          nop();
          lVar6 = UIMessageBox::GetButtonOK(pUVar3);
          thunk_FUN_05477b9c(lVar6 + 0xd8,awStack_c0);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,Exchange);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIMessageBox*,int)>
                    (local_f0,asStack_b0);
          UIMessageBox::SetCallback(pUVar3,local_f0);
          FUN_05476c50(awStack_b8);
          FUN_05476c50(awStack_c0);
          FUN_05476c50(awStack_c8);
        }
      }
      else {
        if (local_5c == local_8c) goto LAB_04dc2380;
        if (local_5c < local_8c) {
          pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
          if (pUVar3 == (UIMessageBox *)0x0) goto LAB_04dc2170;
          UIMessageBox::SetShowType(pUVar3,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[BUTTON_OK]");
          pwVar4 = L"[TRIAL_CARD_LOWR_TRIAL_PLANT_LEVEL]";
          goto LAB_04dc20b4;
        }
        pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar3 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar3,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[TRIAL_CARD_HIGH_TRIAL_PLANT_LEVEL]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar3,awStack_c0,awStack_c8);
          std::string::string(asStack_b0,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar5 = (Image *)StringHelper::ToImage(asStack_b0,false);
          UIMessageBox::SetBackground(pUVar3,pIVar5);
          std::string::~string(asStack_b0);
          nop();
          lVar6 = UIMessageBox::GetButtonCancel(pUVar3);
          thunk_FUN_05477b9c(lVar6 + 0xd8,awStack_b8);
          FUN_05476c50(awStack_b8);
          FUN_05476c50(awStack_c0);
          FUN_05476c50(awStack_c8);
        }
      }
LAB_04dc2170:
      TrialCardConfig::~TrialCardConfig((TrialCardConfig *)local_68);
    }
  }
  else {
    PlayerInfo::GetPlantStarLevel(this_01,asStack_d0,false);
    iVar2 = PlayerInfo::GetPlantStarLevel(this_01,asStack_d0,false);
    if (iVar2 < local_8c) goto LAB_04dc2008;
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      lVar7 = FUN_04dbf744(local_80,local_78);
      for (lVar6 = 0; lVar6 != lVar7; lVar6 = lVar6 + 1) {
        piVar8 = (int *)FUN_04dbf758(local_80,lVar6);
        if (*piVar8 == 0x5a39) {
          iVar2 = piVar8[1];
          goto LAB_04dc2470;
        }
      }
      iVar2 = 0;
LAB_04dc2470:
      FUN_05478178((wstring *)local_68,L"[TRIAL_CARD_HIGH_PLAYER_PLANT_LEVEL]",awStack_c8);
      TodReplaceNumberString((wstring *)local_68,L"{NUM}",iVar2);
      FUN_05476c50((wstring *)local_68);
      nop();
      UIMessageBox::SetMessage(pUVar3,(wstring *)asStack_b0,awStack_c0);
      std::string::string((string *)local_68,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar5 = (Image *)StringHelper::ToImage((string *)local_68,false);
      UIMessageBox::SetBackground(pUVar3,pIVar5);
      std::string::~string((string *)local_68);
      nop();
      lVar6 = UIMessageBox::GetButtonOK(pUVar3);
      thunk_FUN_05477b9c(lVar6 + 0xd8,awStack_b8);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,Exchange);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIMessageBox*,int)>
                (aDStack_38,(wstring *)local_68);
      UIMessageBox::SetCallback(pUVar3,aDStack_38);
      FUN_05476c50((wstring *)asStack_b0);
      FUN_05476c50(awStack_b8);
      FUN_05476c50(awStack_c0);
    }
  }
  std::string::~string(asStack_d0);
  TrialCardConfig::~TrialCardConfig((TrialCardConfig *)local_98);
LAB_04dc1f58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialCardItemButton::Exchange(UIMessageBox*, int) */

void __thiscall
TrialCardItemButton::Exchange(TrialCardItemButton *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  string *this_00;
  DNetwork *this_01;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2944];
  string asStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x150));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    __n = asStack_d40;
    std::string::string(asStack_ce8,"num");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    std::string::append(this_00,"1",(size_t)__n);
    std::string::~string(asStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_04dc0428(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_168,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    UISingletonDialog<UIBagItemBox>::CloseDialog();
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

