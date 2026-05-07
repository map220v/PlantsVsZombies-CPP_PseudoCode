// Class: CarnivalRewardItem


/* CarnivalRewardItem::Update() */

void __thiscall CarnivalRewardItem::Update(CarnivalRewardItem *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* CarnivalRewardItem::CheckCondition() */

void __thiscall CarnivalRewardItem::CheckCondition(CarnivalRewardItem *this)

{
  CarnivalRewardItem CVar1;
  long lVar2;
  
  lVar2 = UISingletonDialog<UICarnival>::GetSingletonPtr();
  CVar1 = (CarnivalRewardItem)(*(int *)(this + 0xe0) <= *(int *)(lVar2 + 400));
  this[0x100] = CVar1;
  if (((bool)CVar1) && (*(int *)(this + 0xe4) == 0)) {
    (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),1);
    return;
  }
  (**(code **)(**(long **)(this + 0x110) + 0x158))(*(long **)(this + 0x110),0);
  return;
}


/* CarnivalRewardItem::CarnivalRewardItem() */

void __thiscall CarnivalRewardItem::CarnivalRewardItem(CarnivalRewardItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_066e7b40;
  CarnivalRewardData::CarnivalRewardData((CarnivalRewardData *)(this + 0xe0));
  this[0x100] = (CarnivalRewardItem)0x0;
  FUN_05476574(this + 0x108);
  return;
}


/* CarnivalRewardItem::Draw(Sexy::Graphics*) */

void __thiscall CarnivalRewardItem::Draw(CarnivalRewardItem *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 == 0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf870);
    Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf4b0;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfc38;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* CarnivalRewardItem::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
CarnivalRewardItem::DrawAll(CarnivalRewardItem *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  Image *pIVar2;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (*(int *)(this + 0xe4) == 0) {
    return;
  }
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 != 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfb00;
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06abfbd0;
    }
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    Sexy::Graphics::DrawImage(param_2,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf7f0);
  Sexy::Graphics::DrawImage(param_2,pIVar2,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* CarnivalRewardItem::~CarnivalRewardItem() */

void __thiscall CarnivalRewardItem::~CarnivalRewardItem(CarnivalRewardItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066e7b40;
  FUN_05476c50(this + 0x108);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CarnivalRewardItem::~CarnivalRewardItem() */

void __thiscall CarnivalRewardItem::~CarnivalRewardItem(CarnivalRewardItem *this)

{
  ~CarnivalRewardItem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalRewardItem::InitView(int, CarnivalRewardData const&, int) */

void __thiscall
CarnivalRewardItem::InitView
          (CarnivalRewardItem *this,int param_1,CarnivalRewardData *param_2,int param_3)

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
  piVar4 = (int *)FUN_039ab030(*(undefined8 *)(this + 0xe8),0);
  plVar5 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar4,piVar4[1],true);
  uVar1 = FUN_039ac220(0x16);
  uVar2 = FUN_039ac220(10);
  uVar3 = FUN_039ac220(0x28);
  (**(code **)(*plVar5 + 0x198))(plVar5,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,plVar5);
  pUVar6 = ::operator_new(0x118);
  UtilEasyDisplayWidget::UtilEasyDisplayWidget(pUVar6);
  *(UtilEasyDisplayWidget **)(this + 0x110) = pUVar6;
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_039ac1c4(afStack_28,this);
  UtilEasyDisplayWidget::SetDrawFunction(pUVar6,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pUVar6 = *(UtilEasyDisplayWidget **)(this + 0x110);
  FUN_039ac054(afStack_28,this);
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
/* CarnivalRewardItem::RequestReward() */

void __thiscall CarnivalRewardItem::RequestReward(CarnivalRewardItem *this)

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
  local_d48[0] = 1;
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
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039ac10c(afStack_d38,this);
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

