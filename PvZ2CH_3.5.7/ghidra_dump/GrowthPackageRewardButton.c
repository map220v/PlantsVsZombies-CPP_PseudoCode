// Class: GrowthPackageRewardButton


/* GrowthPackageRewardButton::~GrowthPackageRewardButton() */

void __thiscall
GrowthPackageRewardButton::~GrowthPackageRewardButton(GrowthPackageRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06706840;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GrowthPackageRewardButton::~GrowthPackageRewardButton() */

void __thiscall
GrowthPackageRewardButton::~GrowthPackageRewardButton(GrowthPackageRewardButton *this)

{
  ~GrowthPackageRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* GrowthPackageRewardButton::GrowthPackageRewardButton() */

void __thiscall
GrowthPackageRewardButton::GrowthPackageRewardButton(GrowthPackageRewardButton *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  this[0xd8] = (GrowthPackageRewardButton)0x0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06706840;
  return;
}


/* GrowthPackageRewardButton::InitData(int, bool, int) */

void __thiscall
GrowthPackageRewardButton::InitData
          (GrowthPackageRewardButton *this,int param_1,bool param_2,int param_3)

{
  code *pcVar1;
  
  this[0xd8] = (GrowthPackageRewardButton)param_2;
  *(int *)(this + 0xd4) = param_1;
  pcVar1 = *(code **)(*(long *)this + 0x158);
  *(int *)(this + 0xdc) = param_3;
  (*pcVar1)(this,0);
  return;
}


/* GrowthPackageRewardButton::UpdateButtonState(int) */

void __thiscall
GrowthPackageRewardButton::UpdateButtonState(GrowthPackageRewardButton *this,int param_1)

{
  if ((this[0xd8] == (GrowthPackageRewardButton)0x0) && (*(int *)(this + 0xdc) <= param_1)) {
    (**(code **)(*(long *)this + 0x158))(this,1);
    return;
  }
  return;
}


/* GrowthPackageRewardButton::Draw(Sexy::Graphics*) */

void __thiscall GrowthPackageRewardButton::Draw(GrowthPackageRewardButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4c48);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (iVar1 - 1U < 5) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4cc8;
  }
  else {
    if (iVar1 != 6) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4e20;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrowthPackageRewardButton::RequestReward() */

void __thiscall GrowthPackageRewardButton::RequestReward(GrowthPackageRewardButton *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1576];
  string asStack_6c0 [1720];
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
  local_d48[0] = 0x2a60;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ri");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd4));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a44cac(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_6c0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* GrowthPackageRewardButton::TouchEnded(Sexy::Touch const&) */

void __thiscall
GrowthPackageRewardButton::TouchEnded(GrowthPackageRewardButton *this,Touch *param_1)

{
  if (*(int *)(this + 0xe0) != (int)*(undefined8 *)param_1) {
    return;
  }
  RequestReward(this);
  return;
}

