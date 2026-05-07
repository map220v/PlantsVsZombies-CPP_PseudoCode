// Class: PennyGiftTotalRewardItem


/* PennyGiftTotalRewardItem::PennyGiftTotalRewardItem() */

void __thiscall PennyGiftTotalRewardItem::PennyGiftTotalRewardItem(PennyGiftTotalRewardItem *this)

{
  CarnivalTotalRewardItem::CarnivalTotalRewardItem((CarnivalTotalRewardItem *)this);
  *(undefined ***)this = &PTR_GetClass_069e9820;
  return;
}


/* PennyGiftTotalRewardItem::CheckCondition() */

void __thiscall PennyGiftTotalRewardItem::CheckCondition(PennyGiftTotalRewardItem *this)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstance();
  this[0x100] = (PennyGiftTotalRewardItem)(*(int *)(this + 0xe0) <= *(int *)(lVar1 + 0xdc));
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstance();
  if (((this[0x100] != (PennyGiftTotalRewardItem)0x0) && (*(int *)(this + 0xe4) == 0)) &&
     (0 < *(int *)(lVar1 + 0x130))) {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
    return;
  }
  (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
  return;
}


/* PennyGiftTotalRewardItem::~PennyGiftTotalRewardItem() */

void __thiscall PennyGiftTotalRewardItem::~PennyGiftTotalRewardItem(PennyGiftTotalRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069e9820;
  CarnivalTotalRewardItem::~CarnivalTotalRewardItem((CarnivalTotalRewardItem *)this);
  return;
}


/* PennyGiftTotalRewardItem::~PennyGiftTotalRewardItem() */

void __thiscall PennyGiftTotalRewardItem::~PennyGiftTotalRewardItem(PennyGiftTotalRewardItem *this)

{
  ~PennyGiftTotalRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftTotalRewardItem::InitView(int, CarnivalRewardData const&) */

void __thiscall
PennyGiftTotalRewardItem::InitView
          (PennyGiftTotalRewardItem *this,int param_1,CarnivalRewardData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  UtilEasyDisplayWidget *pUVar8;
  code *pcVar9;
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xd4) = param_1;
  CarnivalRewardData::operator=((CarnivalRewardData *)(this + 0xe0),param_2);
  FUN_05478178(awStack_38,L"[PENNY_GIFT_BUY_TIMES_CONSUME]",auStack_40);
  TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)param_2);
  FUN_054766c8(this + 0x108,auStack_30);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  nop();
  lVar4 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstance();
  uVar5 = *(undefined8 *)(param_2 + 8);
  this[0x100] = (PennyGiftTotalRewardItem)(*(int *)(this + 0xe0) <= *(int *)(lVar4 + 0xdc));
  piVar6 = (int *)FUN_04e76e4c(uVar5,0);
  plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
  pcVar9 = *(code **)(*plVar7 + 0x198);
  uVar1 = FUN_04e790b0(0x2a);
  if ((*(uint *)(this + 0xd4) & 1) == 0) {
    uVar2 = FUN_04e790b0(0x1c);
  }
  else {
    uVar2 = FUN_04e790b0(0x26);
  }
  uVar3 = FUN_04e790b0(0x28);
  (*pcVar9)(plVar7,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,plVar7);
  pUVar8 = ::operator_new(0x118);
  UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar8);
  *(UtilEasyDisplayWidget **)(this + 0x110) = pUVar8;
  (**(code **)(*(long *)pUVar8 + 0x198))
            (pUVar8,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pUVar8 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_04e78ff8(afStack_28,this);
  UtilEasyDisplayWidget::SetDrawFunction(pUVar8,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pUVar8 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_04e78cbc(afStack_28,this);
  UtilEasyDisplayWidget::SetTouchFunction(pUVar8,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftTotalRewardItem::RequestReward() */

void __thiscall PennyGiftTotalRewardItem::RequestReward(PennyGiftTotalRewardItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3200];
  string asStack_68 [96];
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
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e78f40(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

