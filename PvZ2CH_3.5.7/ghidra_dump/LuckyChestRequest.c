// Class: LuckyChestRequest


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyChestRequest::RequestReward() */

void LuckyChestRequest::RequestReward(void)

{
  PlayerInfo *this;
  undefined8 uVar1;
  DNetwork *this_00;
  int local_6c;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_38,"mat_luckychest");
  local_6c = PlayerInfo::GetMaterialNum(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  if (0 < local_6c) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    std::string::string(asStack_68,"g");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_68);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_6c);
    FUN_05474278(uVar1,asStack_60);
    std::string::~string(asStack_60);
    std::string::~string(asStack_68);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    std::string::string(asStack_68,"V507");
    FUN_04eb07dc(afStack_58,local_6c);
    std::string::string(asStack_60,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_68,(map *)asStack_38,30.0,(function *)afStack_58,true,true,asStack_60
               ,0);
    std::string::~string(asStack_60);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
    std::string::~string(asStack_68);
    nop();
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

