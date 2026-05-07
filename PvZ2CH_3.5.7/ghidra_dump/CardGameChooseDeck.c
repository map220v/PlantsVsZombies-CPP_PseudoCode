// Class: CardGameChooseDeck


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameChooseDeck::GetLayoutName() */

void __thiscall CardGameChooseDeck::GetLayoutName(CardGameChooseDeck *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICardGameChooseDeck");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CardGameChooseDeck::~CardGameChooseDeck() */

void __thiscall CardGameChooseDeck::~CardGameChooseDeck(CardGameChooseDeck *this)

{
  *(undefined ***)this = &PTR_GetClass_069da0b0;
  *(undefined **)(this + 0xd8) = &DAT_069da400;
  UISingletonDialog<CardGameChooseDeck>::~UISingletonDialog
            ((UISingletonDialog<CardGameChooseDeck> *)this);
  return;
}


/* CardGameChooseDeck::~CardGameChooseDeck() */

void __thiscall CardGameChooseDeck::~CardGameChooseDeck(CardGameChooseDeck *this)

{
  ~CardGameChooseDeck(this);
  AK::FreeHook(this);
  return;
}


/* CardGameChooseDeck::ChooseButton(int) */

void __thiscall CardGameChooseDeck::ChooseButton(CardGameChooseDeck *this,int param_1)

{
  if (param_1 == 0) {
    CardGameDeckButton::SetSelect(*(CardGameDeckButton **)(this + 0x138),true);
    CardGameDeckButton::SetSelect(*(CardGameDeckButton **)(this + 0x140),false);
    return;
  }
  if (param_1 != 1) {
    return;
  }
  CardGameDeckButton::SetSelect(*(CardGameDeckButton **)(this + 0x138),false);
  CardGameDeckButton::SetSelect(*(CardGameDeckButton **)(this + 0x140),true);
  return;
}


/* CardGameChooseDeck::CreateDeckButton(int, std::string) */

CardGameDeckButton * __thiscall
CardGameChooseDeck::CreateDeckButton(CardGameChooseDeck *this,int param_1,string *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  CardGameDeckButton *this_00;
  
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,param_3);
  if (plVar3 == (long *)0x0) {
    this_00 = (CardGameDeckButton *)0x0;
  }
  else {
    this_00 = ::operator_new(0x330);
    CardGameDeckButton::CardGameDeckButton(this_00,param_1 + 0x3ea,(ButtonListener *)(this + 0xd8));
    uVar1 = FUN_04e28d38((int)plVar3[10]);
    uVar2 = FUN_04e28d3c(*(undefined4 *)((long)plVar3 + 0x54));
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(int)plVar3[9],*(undefined4 *)((long)plVar3 + 0x4c),uVar1,uVar2);
    CardGameDeckButton::SetIndex(this_00,param_1);
    CardGameDeckButton::InitView(this_00);
    (**(code **)(*plVar3 + 0x60))(plVar3,this_00);
  }
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameChooseDeck::InitView() */

void __thiscall CardGameChooseDeck::InitView(CardGameChooseDeck *this)

{
  Widget *pWVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,false);
  std::string::string(asStack_10,"Button1");
  uVar2 = CreateDeckButton(this,0,asStack_10);
  *(undefined8 *)(this + 0x138) = uVar2;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Button2");
  uVar2 = CreateDeckButton(this,1,asStack_10);
  *(undefined8 *)(this + 0x140) = uVar2;
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x134) = 0;
  ChooseButton(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameChooseDeck::OnCreate() */

undefined4 __thiscall CardGameChooseDeck::OnCreate(CardGameChooseDeck *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}


/* CardGameChooseDeck::CardGameChooseDeck() */

void __thiscall CardGameChooseDeck::CardGameChooseDeck(CardGameChooseDeck *this)

{
  UISingletonDialog<CardGameChooseDeck>::UISingletonDialog
            ((UISingletonDialog<CardGameChooseDeck> *)this);
  *(undefined ***)this = &PTR_GetClass_069da0b0;
  *(undefined **)(this + 0xd8) = &DAT_069da400;
  return;
}


/* CardGameChooseDeck::ButtonDepress(int) */

void __thiscall CardGameChooseDeck::ButtonDepress(CardGameChooseDeck *this,int param_1)

{
  switch(param_1) {
  case 1000:
  case 0x3e9:
    UISingletonDialog<CardGameChooseDeck>::CloseDialog();
    return;
  case 0x3ea:
    ChooseButton(this,0);
    return;
  case 0x3eb:
    ChooseButton(this,1);
    return;
  default:
    return;
  }
}


/* non-virtual thunk to CardGameChooseDeck::ButtonDepress(int) */

void __thiscall CardGameChooseDeck::ButtonDepress(CardGameChooseDeck *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

