// Class: PVZ1ModeAchievementRewardButton


/* PVZ1ModeAchievementRewardButton::TouchBegan(Sexy::Touch const&) */

void __thiscall
PVZ1ModeAchievementRewardButton::TouchBegan(PVZ1ModeAchievementRewardButton *this,Touch *param_1)

{
  *(int *)(this + 0xdc) = (int)*(undefined8 *)param_1;
  return;
}


/* PVZ1ModeAchievementRewardButton::SetData(bool, int) */

void __thiscall
PVZ1ModeAchievementRewardButton::SetData
          (PVZ1ModeAchievementRewardButton *this,bool param_1,int param_2)

{
  *(int *)(this + 0xd4) = param_2;
  this[0xd8] = (PVZ1ModeAchievementRewardButton)param_1;
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}


/* PVZ1ModeAchievementRewardButton::UpdateButtonState(int) */

void __thiscall
PVZ1ModeAchievementRewardButton::UpdateButtonState
          (PVZ1ModeAchievementRewardButton *this,int param_1)

{
  if ((this[0xd8] == (PVZ1ModeAchievementRewardButton)0x0) && (*(int *)(this + 0xd4) < param_1)) {
    (**(code **)(*(long *)this + 0x158))(this,1);
    return;
  }
  return;
}


/* PVZ1ModeAchievementRewardButton::~PVZ1ModeAchievementRewardButton() */

void __thiscall
PVZ1ModeAchievementRewardButton::~PVZ1ModeAchievementRewardButton
          (PVZ1ModeAchievementRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c7390;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ1ModeAchievementRewardButton::~PVZ1ModeAchievementRewardButton() */

void __thiscall
PVZ1ModeAchievementRewardButton::~PVZ1ModeAchievementRewardButton
          (PVZ1ModeAchievementRewardButton *this)

{
  ~PVZ1ModeAchievementRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeAchievementRewardButton::PVZ1ModeAchievementRewardButton() */

void __thiscall
PVZ1ModeAchievementRewardButton::PVZ1ModeAchievementRewardButton
          (PVZ1ModeAchievementRewardButton *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  this[0xd8] = (PVZ1ModeAchievementRewardButton)0x0;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_069c7390;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementRewardButton::RequestReward() */

void __thiscall
PVZ1ModeAchievementRewardButton::RequestReward(PVZ1ModeAchievementRewardButton *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  string *this_01;
  undefined8 uVar2;
  DNetwork *this_02;
  string *__n;
  undefined4 local_d50 [2];
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2208];
  string asStack_448 [1088];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"tp");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a57;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  __n = asStack_d40;
  std::string::string(asStack_ce8,"ctp");
  this_01 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_01,"0",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = *(int *)(this + 0xd4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  local_d50[0] = 0x2a57;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d50);
  uVar1 = FUN_0547429c(asStack_d40);
  local_d48[0] = *(int *)(this + 0xd4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  uVar2 = FUN_0547429c(asStack_ce8);
  Sexy::OutputDebugStrF
            ((wchar_t *)"PVZ1ModeAchievementRewardButton requestMsg  \'tp\' = %s \'i\' = %s",uVar1,
             uVar2);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04dd9388(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_448,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* PVZ1ModeAchievementRewardButton::TouchEnded(Sexy::Touch const&) */

void __thiscall
PVZ1ModeAchievementRewardButton::TouchEnded(PVZ1ModeAchievementRewardButton *this,Touch *param_1)

{
  if (*(int *)(this + 0xdc) != (int)*(undefined8 *)param_1) {
    return;
  }
  RequestReward(this);
  return;
}


/* PVZ1ModeAchievementRewardButton::Draw(Sexy::Graphics*) */

void __thiscall
PVZ1ModeAchievementRewardButton::Draw(PVZ1ModeAchievementRewardButton *this,Graphics *param_1)

{
  Image *pIVar1;
  
  nop();
  if (*(int *)(this + 0xd4) == 0) {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b390);
    Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (4 < *(int *)(this + 0xd4) - 1U) {
    return;
  }
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b670);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

