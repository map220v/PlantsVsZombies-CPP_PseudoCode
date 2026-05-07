// Class: RedPacketWidget


/* RedPacketWidget::~RedPacketWidget() */

void __thiscall RedPacketWidget::~RedPacketWidget(RedPacketWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0671eb60;
  *(undefined ***)(this + 0x198) = &PTR__RedPacketWidget_0671eec8;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0671eef0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to RedPacketWidget::~RedPacketWidget() */

void __thiscall RedPacketWidget::~RedPacketWidget(RedPacketWidget *this)

{
  ~RedPacketWidget(this + -0x198);
  return;
}


/* RedPacketWidget::~RedPacketWidget() */

void __thiscall RedPacketWidget::~RedPacketWidget(RedPacketWidget *this)

{
  ~RedPacketWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RedPacketWidget::~RedPacketWidget() */

void __thiscall RedPacketWidget::~RedPacketWidget(RedPacketWidget *this)

{
  ~RedPacketWidget(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketWidget::RedPacketWidget(RedPacketType, int, bool, RedPacketIndex) */

void __thiscall
RedPacketWidget::RedPacketWidget
          (RedPacketWidget *this,undefined4 param_2,int param_3,RedPacketWidget param_4,
          undefined4 param_5)

{
  bool bVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_3,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  bVar1 = local_8 == ___stack_chk_guard;
  this[0x308] = param_4;
  *(undefined ***)this = &PTR_GetClass_0671eb60;
  *(undefined ***)(this + 0x198) = &PTR__RedPacketWidget_0671eec8;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0671eef0;
  *(undefined4 *)(this + 0x30c) = param_2;
  *(undefined4 *)(this + 0x310) = param_5;
  *(undefined4 *)(this + 0x314) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketWidget::CheckOpenCondition() */

undefined8 __thiscall RedPacketWidget::CheckOpenCondition(RedPacketWidget *this)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 0x30c) != 2) {
    return 1;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::IsMonthlyCardActivated(pPVar1,4);
  return uVar2;
}


/* RedPacketWidget::Draw(Sexy::Graphics*) */

void __thiscall RedPacketWidget::Draw(RedPacketWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *this_00;
  
  if (this[0x308] == (RedPacketWidget)0x0) {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac81e0);
  }
  else {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac85b0);
  }
  iVar1 = *(int *)(this + 0x50);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = *(int *)(this + 0x54);
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(iVar1 - iVar3) / 2,(iVar2 - iVar4) / 2);
  return;
}


/* RedPacketWidget::ButtonPress(int) */

void RedPacketWidget::ButtonPress(int param_1)

{
  char *pcVar1;
  
  if (*(char *)((ulong)(uint)param_1 + 0x308) != '\0') {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to RedPacketWidget::ButtonPress(int) */

void __thiscall RedPacketWidget::ButtonPress(RedPacketWidget *this,int param_1)

{
  ButtonPress((int)this + -0x300);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketWidget::requestOpenRedPacket(int, int) */

void __thiscall RedPacketWidget::requestOpenRedPacket(RedPacketWidget *this,int param_1,int param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1680];
  string asStack_658 [1616];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"n");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a17);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03ac468c(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_658,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* RedPacketWidget::ButtonDepress(int) */

void RedPacketWidget::ButtonDepress(int param_1)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  RedPacketWidget *this_00;
  char *pcVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  TGALogMgr *this_03;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RedPacketWidget *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this_00[0x308] == (RedPacketWidget)0x0) {
    cVar1 = CheckOpenCondition(this_00);
    this = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
      FUN_05478178((wstring *)asStack_50,L"[NOT_IN_OPEN_CONDITION]",auStack_60);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      if (*(int *)(this_00 + 0x310) == 3) {
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
        iVar2 = PlayerInfo::GetNumGems(this_02,true);
        if (iVar2 < *(int *)(this_00 + 0x314)) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
        }
        else {
          this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          std::to_string<ActivityTypeID>((ActivityTypeID *)(this_00 + 0x314));
          TGALogMgr::LogSegments(this_03,0x2741,1,asStack_50);
          std::string::~string(asStack_50);
          iVar2 = PlayerInfo::SubtractGems
                            (this_02,*(int *)(this_00 + 0x314),-1,
                             (ICloudRequestCallbackFunctionBase *)0x0,1,false);
          if (-1 < iVar2) {
            requestOpenRedPacket(this_00,1,*(int *)(this_00 + 0x310));
          }
        }
      }
      else {
        requestOpenRedPacket(this_00,1,*(int *)(this_00 + 0x310));
      }
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RedPacketWidget::ButtonDepress(int) */

void __thiscall RedPacketWidget::ButtonDepress(RedPacketWidget *this,int param_1)

{
  ButtonDepress((int)this + -0x300);
  return;
}

