// Class: PennyGiftRewardItem


/* PennyGiftRewardItem::PennyGiftRewardItem() */

void __thiscall PennyGiftRewardItem::PennyGiftRewardItem(PennyGiftRewardItem *this)

{
  CarnivalRewardItem::CarnivalRewardItem((CarnivalRewardItem *)this);
  *(undefined ***)this = &PTR_GetClass_069e9b60;
  return;
}


/* PennyGiftRewardItem::~PennyGiftRewardItem() */

void __thiscall PennyGiftRewardItem::~PennyGiftRewardItem(PennyGiftRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069e9b60;
  CarnivalRewardItem::~CarnivalRewardItem((CarnivalRewardItem *)this);
  return;
}


/* PennyGiftRewardItem::~PennyGiftRewardItem() */

void __thiscall PennyGiftRewardItem::~PennyGiftRewardItem(PennyGiftRewardItem *this)

{
  ~PennyGiftRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftRewardItem::InitView(int, CarnivalRewardData const&, int) */

void __thiscall
PennyGiftRewardItem::InitView
          (PennyGiftRewardItem *this,int param_1,CarnivalRewardData *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  long *plVar5;
  UtilEasyDisplayWidget *pUVar6;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  *(int *)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xd4) = param_3;
  CarnivalRewardData::operator=((CarnivalRewardData *)(this + 0xe0),param_2);
  piVar4 = (int *)FUN_04e76eac(*(undefined8 *)(this + 0xe8),0);
  plVar5 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar4,piVar4[1],true);
  uVar1 = FUN_04e790b0(10);
  uVar2 = FUN_04e790b0(5);
  uVar3 = FUN_04e790b0(0x28);
  (**(code **)(*plVar5 + 0x198))(plVar5,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,plVar5);
  pUVar6 = ::operator_new(0x118);
  UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar6);
  *(UtilEasyDisplayWidget **)(this + 0x110) = pUVar6;
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_04e79054(afStack_28,this);
  UtilEasyDisplayWidget::SetDrawFunction(pUVar6,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_04e78d18(afStack_28,this);
  UtilEasyDisplayWidget::SetTouchFunction(pUVar6,afStack_28);
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
/* PennyGiftRewardItem::RequestReward() */

void __thiscall PennyGiftRewardItem::RequestReward(PennyGiftRewardItem *this)

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
  local_d48[0] = 1;
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
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e78f9c(afStack_d38,this);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftRewardItem::CheckCondition() */

void __thiscall PennyGiftRewardItem::CheckCondition(PennyGiftRewardItem *this)

{
  long lVar1;
  PennyGiftBoxData aPStack_138 [216];
  int local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  PennyGiftBoxData::PennyGiftBoxData(aPStack_138,(PennyGiftBoxData *)(lVar1 + 8));
  this[0x100] = (PennyGiftRewardItem)(*(int *)(this + 0xe0) <= local_60);
  if ((*(int *)(this + 0xe0) <= local_60) && (*(int *)(this + 0xe4) == 0)) {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
  }
  else {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
  }
  PennyGiftBoxData::~PennyGiftBoxData(aPStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

