// Class: CarnivalTotalRewardItem


/* CarnivalTotalRewardItem::CheckCondition() */

void __thiscall CarnivalTotalRewardItem::CheckCondition(CarnivalTotalRewardItem *this)

{
  CarnivalTotalRewardItem CVar1;
  long lVar2;
  
  lVar2 = UISingletonDialog<UICarnival>::GetSingletonPtr();
  CVar1 = (CarnivalTotalRewardItem)(*(int *)(this + 0xe0) <= *(int *)(lVar2 + 0x194));
  this[0x100] = CVar1;
  if (((bool)CVar1) && (*(int *)(this + 0xe4) == 0)) {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
    return;
  }
  (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
  return;
}


/* CarnivalTotalRewardItem::CarnivalTotalRewardItem() */

void __thiscall CarnivalTotalRewardItem::CarnivalTotalRewardItem(CarnivalTotalRewardItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066e7800;
  CarnivalRewardData::CarnivalRewardData((CarnivalRewardData *)(this + 0xe0));
  this[0x100] = (CarnivalTotalRewardItem)0x0;
  FUN_05476574(this + 0x108);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalTotalRewardItem::Draw(Sexy::Graphics*) */

void __thiscall CarnivalTotalRewardItem::Draw(CarnivalTotalRewardItem *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  undefined8 uVar7;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_039ac220(0);
  uVar1 = *(uint *)(this + 0xd4) & 1;
  if ((*(uint *)(this + 0xd4) & 1) == 0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf5c0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar6,uVar1,uVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  else {
    iVar2 = FUN_039ac220(10);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf818);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  iVar3 = FUN_039ac220(0);
  iVar4 = FUN_039ac220(0x7d);
  iVar5 = FUN_039ac220(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar2,iVar4,iVar5);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x108,aIStack_28,uVar7,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalTotalRewardItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
CarnivalTotalRewardItem::DrawAll
          (CarnivalTotalRewardItem *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  Insets aIStack_18 [16];
  long local_8;
  uint uVar5;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(int *)(this + 0xe4) != 0) {
    iVar1 = FUN_039ac220(0);
    if ((*(uint *)(this + 0xd4) & 1) == 0) {
      iVar2 = FUN_039ac220(10);
      iVar3 = iVar1;
    }
    else {
      iVar2 = FUN_039ac220(10);
      iVar3 = iVar2;
    }
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar3,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2)
    ;
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf6a0);
    Draw9SliceImage(param_2,aIStack_18,uVar8);
    iVar3 = FUN_039ac220(0x2d);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = FUN_039ac220(0x20);
    uVar5 = *(uint *)(this + 0xd4) & 1;
    if ((*(uint *)(this + 0xd4) & 1) != 0) {
      uVar5 = 10;
    }
    iVar4 = FUN_039ac220(uVar5);
    iVar6 = FUN_039ac220(0x5a);
    iVar7 = FUN_039ac220(0x16);
    Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 + iVar4,iVar6,iVar7);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf798);
    DrawAdaptiveImage(param_2,aIStack_18,uVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalTotalRewardItem::~CarnivalTotalRewardItem() */

void __thiscall CarnivalTotalRewardItem::~CarnivalTotalRewardItem(CarnivalTotalRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e7800;
  FUN_05476c50(this + 0x108);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CarnivalTotalRewardItem::~CarnivalTotalRewardItem() */

void __thiscall CarnivalTotalRewardItem::~CarnivalTotalRewardItem(CarnivalTotalRewardItem *this)

{
  ~CarnivalTotalRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalTotalRewardItem::InitView(int, CarnivalRewardData const&) */

void __thiscall
CarnivalTotalRewardItem::InitView
          (CarnivalTotalRewardItem *this,int param_1,CarnivalRewardData *param_2)

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
  FUN_05478178(awStack_38,L"[TOTAL_SERVER_BUY_TIMES_REWARD]",auStack_40);
  TodReplaceNumberString(awStack_38,L"{NUM}",*(int *)param_2);
  FUN_054766c8(this + 0x108,auStack_30);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  nop();
  lVar4 = UISingletonDialog<UICarnival>::GetSingletonPtr();
  uVar5 = *(undefined8 *)(param_2 + 8);
  this[0x100] = (CarnivalTotalRewardItem)(*(int *)(this + 0xe0) <= *(int *)(lVar4 + 0x194));
  piVar6 = (int *)FUN_039ab050(uVar5,0);
  plVar7 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
  pcVar9 = *(code **)(*plVar7 + 0x198);
  uVar1 = FUN_039ac220(0x2a);
  if ((*(uint *)(this + 0xd4) & 1) == 0) {
    uVar2 = FUN_039ac220(0x1c);
  }
  else {
    uVar2 = FUN_039ac220(0x26);
  }
  uVar3 = FUN_039ac220(0x28);
  (*pcVar9)(plVar7,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,plVar7);
  pUVar8 = ::operator_new(0x118);
  UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar8);
  *(UtilEasyDisplayWidget **)(this + 0x110) = pUVar8;
  (**(code **)(*(long *)pUVar8 + 0x198))
            (pUVar8,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pUVar8 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_039ac168(afStack_28,this);
  UtilEasyDisplayWidget::SetDrawFunction(pUVar8,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pUVar8 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_039abff8(afStack_28,this);
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
/* CarnivalTotalRewardItem::RequestReward() */

void __thiscall CarnivalTotalRewardItem::RequestReward(CarnivalTotalRewardItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2768];
  string asStack_218 [528];
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
  FUN_039ac0b0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_218,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

