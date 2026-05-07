// Class: NoviceSevenDaysRewardButton


/* NoviceSevenDaysRewardButton::~NoviceSevenDaysRewardButton() */

void __thiscall
NoviceSevenDaysRewardButton::~NoviceSevenDaysRewardButton(NoviceSevenDaysRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_067051a0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NoviceSevenDaysRewardButton::~NoviceSevenDaysRewardButton() */

void __thiscall
NoviceSevenDaysRewardButton::~NoviceSevenDaysRewardButton(NoviceSevenDaysRewardButton *this)

{
  ~NoviceSevenDaysRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* NoviceSevenDaysRewardButton::NoviceSevenDaysRewardButton() */

void __thiscall
NoviceSevenDaysRewardButton::NoviceSevenDaysRewardButton(NoviceSevenDaysRewardButton *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0xffffffff;
  this[0xd8] = (NoviceSevenDaysRewardButton)0x0;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067051a0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysRewardButton::RequestReward() */

void __thiscall NoviceSevenDaysRewardButton::RequestReward(NoviceSevenDaysRewardButton *this)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  string *this_01;
  DNetwork *this_02;
  string *__n;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2080];
  string asStack_4c8 [1216];
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
  local_d48[0] = 0x2a4c;
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
  std::string::append(this_01,"2",(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd4));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a3db24(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_4c8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* NoviceSevenDaysRewardButton::TouchEnded(Sexy::Touch const&) */

void __thiscall
NoviceSevenDaysRewardButton::TouchEnded(NoviceSevenDaysRewardButton *this,Touch *param_1)

{
  if (*(int *)(this + 0xdc) != (int)*(undefined8 *)param_1) {
    return;
  }
  RequestReward(this);
  return;
}


/* NoviceSevenDaysRewardButton::Draw(Sexy::Graphics*) */

void __thiscall
NoviceSevenDaysRewardButton::Draw(NoviceSevenDaysRewardButton *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  nop();
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac47e8);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (iVar1 - 1U < 5) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4838;
  }
  else {
    if (iVar1 != 6) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4790;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

