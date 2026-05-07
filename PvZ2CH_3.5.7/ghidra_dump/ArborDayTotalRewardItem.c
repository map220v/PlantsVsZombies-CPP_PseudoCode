// Class: ArborDayTotalRewardItem


/* ArborDayTotalRewardItem::ArborDayTotalRewardItem() */

void __thiscall ArborDayTotalRewardItem::ArborDayTotalRewardItem(ArborDayTotalRewardItem *this)

{
  CarnivalTotalRewardItem::CarnivalTotalRewardItem((CarnivalTotalRewardItem *)this);
  *(undefined ***)this = &PTR_GetClass_066ffb00;
  return;
}


/* ArborDayTotalRewardItem::~ArborDayTotalRewardItem() */

void __thiscall ArborDayTotalRewardItem::~ArborDayTotalRewardItem(ArborDayTotalRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066ffb00;
  CarnivalTotalRewardItem::~CarnivalTotalRewardItem((CarnivalTotalRewardItem *)this);
  return;
}


/* ArborDayTotalRewardItem::~ArborDayTotalRewardItem() */

void __thiscall ArborDayTotalRewardItem::~ArborDayTotalRewardItem(ArborDayTotalRewardItem *this)

{
  ~ArborDayTotalRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTotalRewardItem::CheckCondition() */

void __thiscall ArborDayTotalRewardItem::CheckCondition(ArborDayTotalRewardItem *this)

{
  ArborDayData aAStack_110 [28];
  int local_f4;
  int local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIArborDay>::GetSingletonPtr();
  UIArborDay::GetData();
  this[0x100] = (ArborDayTotalRewardItem)(*(int *)(this + 0xe0) <= local_f4);
  ArborDayData::~ArborDayData(aAStack_110);
  UISingletonDialog<UIArborDay>::GetSingletonPtr();
  UIArborDay::GetData();
  ArborDayData::~ArborDayData(aAStack_110);
  if (((this[0x100] == (ArborDayTotalRewardItem)0x0) || (*(int *)(this + 0xe4) != 0)) ||
     (local_f0 < 10)) {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
  }
  else {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTotalRewardItem::InitView(int, CarnivalRewardData const&) */

void __thiscall
ArborDayTotalRewardItem::InitView
          (ArborDayTotalRewardItem *this,int param_1,CarnivalRewardData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  long *plVar5;
  UtilEasyDisplayWidget *pUVar6;
  code *pcVar7;
  undefined1 auStack_140 [8];
  wstring awStack_138 [8];
  function<bool(Sexy::Touch_const&)> afStack_130 [32];
  ArborDayData aAStack_110 [28];
  int local_f4;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xd4) = param_1;
  CarnivalRewardData::operator=((CarnivalRewardData *)(this + 0xe0),param_2);
  FUN_05478178(awStack_138,L"[TOTAL_SERVER_BUY_TIMES_REWARD]",auStack_140);
  TodReplaceNumberString(awStack_138,L"{NUM}",*(int *)param_2);
  FUN_054766c8(this + 0x108,aAStack_110);
  FUN_05476c50(aAStack_110);
  FUN_05476c50(awStack_138);
  nop();
  UISingletonDialog<UIArborDay>::GetSingletonPtr();
  UIArborDay::GetData();
  this[0x100] = (ArborDayTotalRewardItem)(*(int *)(this + 0xe0) <= local_f4);
  ArborDayData::~ArborDayData(aAStack_110);
  piVar4 = (int *)FUN_03a20c18(*(undefined8 *)(param_2 + 8));
  plVar5 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar4,piVar4[1],true);
  pcVar7 = *(code **)(*plVar5 + 0x198);
  uVar1 = FUN_03a22530(0x2a);
  if ((*(uint *)(this + 0xd4) & 1) == 0) {
    uVar2 = FUN_03a22530(0x1c);
  }
  else {
    uVar2 = FUN_03a22530(0x26);
  }
  uVar3 = FUN_03a22530(0x28);
  (*pcVar7)(plVar5,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,plVar5);
  pUVar6 = ::operator_new(0x118);
  UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar6);
  *(UtilEasyDisplayWidget **)(this + 0x110) = pUVar6;
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_03a22478(afStack_130,this);
  UtilEasyDisplayWidget::SetDrawFunction(pUVar6,afStack_130);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_130);
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_03a223c0(afStack_130,this);
  UtilEasyDisplayWidget::SetTouchFunction(pUVar6,afStack_130);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_130);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayTotalRewardItem::RequestReward() */

void __thiscall ArborDayTotalRewardItem::RequestReward(ArborDayTotalRewardItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2584];
  string asStack_2d0 [712];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"index");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd4));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a22308(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_2d0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

