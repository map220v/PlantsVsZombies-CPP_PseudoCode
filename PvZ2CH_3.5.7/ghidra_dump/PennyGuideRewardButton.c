// Class: PennyGuideRewardButton


/* PennyGuideRewardButton::ObatinPennyPrivilege() */

void __thiscall PennyGuideRewardButton::ObatinPennyPrivilege(PennyGuideRewardButton *this)

{
  if (this[0xd1] == (PennyGuideRewardButton)0x0) {
    (**(code **)(*(long *)this + 0x188))();
  }
  return;
}


/* PennyGuideRewardButton::~PennyGuideRewardButton() */

void __thiscall PennyGuideRewardButton::~PennyGuideRewardButton(PennyGuideRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066f75f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyGuideRewardButton::~PennyGuideRewardButton() */

void __thiscall PennyGuideRewardButton::~PennyGuideRewardButton(PennyGuideRewardButton *this)

{
  ~PennyGuideRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGuideRewardButton::PennyGuideRewardButton() */

void __thiscall PennyGuideRewardButton::PennyGuideRewardButton(PennyGuideRewardButton *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066f75f0;
  this[0xd1] = (PennyGuideRewardButton)0x1;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ObatinPennyPrivilege);
  Sexy::Delegate0::Delegate0<PennyGuideRewardButton,void(PennyGuideRewardButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ObatinPennyPrivilege,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGuideRewardButton::RequestReward() */

void __thiscall PennyGuideRewardButton::RequestReward(PennyGuideRewardButton *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  string *this_01;
  DNetwork *this_02;
  char *__s;
  string *__n;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a33;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (this[0xd1] == (PennyGuideRewardButton)0x0) {
    __s = "2";
  }
  else {
    __s = "1";
  }
  std::string::append(this_01,__s,(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = *(int *)(this + 0xd4) + -1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039f12a4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* PennyGuideRewardButton::TouchEnded(Sexy::Touch const&) */

void __thiscall PennyGuideRewardButton::TouchEnded(PennyGuideRewardButton *this,Touch *param_1)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd8) == (int)*(undefined8 *)param_1) {
    if (this[0xd1] == (PennyGuideRewardButton)0x0) {
      Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
      cVar1 = DaveTreasureDataManager::HasPennyPrivilege();
      if (cVar1 == '\0') {
        this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (this_00 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(this_00,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[DAVE_TREASURE_CHECK_PRIVILEGE]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
          std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
          UIMessageBox::SetBackground(this_00,pIVar2);
          std::string::~string(asStack_10);
          nop();
          lVar3 = UIMessageBox::GetButtonCancel(this_00);
          thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_18);
          FUN_05476c50(auStack_18);
          FUN_05476c50(awStack_20);
          FUN_05476c50(awStack_28);
        }
        goto LAB_039f75cc;
      }
    }
    (**(code **)(*(long *)this + 0x310))(this);
  }
LAB_039f75cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGuideRewardButton::UpdateButtonState() */

void __thiscall PennyGuideRewardButton::UpdateButtonState(PennyGuideRewardButton *this)

{
  char cVar1;
  
  if (this[0xd1] == (PennyGuideRewardButton)0x0) {
    Sexy::LazySingleton<DaveTreasureDataManager>::GetInstancePtr();
    cVar1 = DaveTreasureDataManager::HasPennyPrivilege();
    if (cVar1 == '\0') {
      (**(code **)(*(long *)this + 0x188))(this,1);
      return;
    }
  }
  return;
}


/* PennyGuideRewardButton::SetData(bool, int) */

void __thiscall
PennyGuideRewardButton::SetData(PennyGuideRewardButton *this,bool param_1,int param_2)

{
  this[0xd1] = (PennyGuideRewardButton)param_1;
  *(int *)(this + 0xd4) = param_2;
  UpdateButtonState(this);
  return;
}


/* PennyGuideRewardButton::Draw(Sexy::Graphics*) */

void __thiscall PennyGuideRewardButton::Draw(PennyGuideRewardButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  nop();
  iVar1 = *(int *)(this + 0xd4);
  this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2248;
  if (iVar1 != 1) {
    if (iVar1 - 2U < 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac24b0;
    }
    else {
      if (iVar1 != 6) {
        return;
      }
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1f70;
    }
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

