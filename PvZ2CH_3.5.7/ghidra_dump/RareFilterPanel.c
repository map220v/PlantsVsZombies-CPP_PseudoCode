// Class: RareFilterPanel


/* RareFilterPanel::~RareFilterPanel() */

void __thiscall RareFilterPanel::~RareFilterPanel(RareFilterPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0683de70;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RareFilterPanel::~RareFilterPanel() */

void __thiscall RareFilterPanel::~RareFilterPanel(RareFilterPanel *this)

{
  ~RareFilterPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RareFilterPanel::initView() */

void __thiscall RareFilterPanel::initView(RareFilterPanel *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RareFilterButton *this_00;
  long lVar6;
  int iVar7;
  Insets aIStack_30 [16];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_043924ac(0);
  iVar2 = *(int *)(this + 0x50);
  lVar6 = 0;
  iVar4 = FUN_043924ac(0x23);
  iVar5 = FUN_043924ac(2);
  local_20[1] = 0x10;
  local_20[2] = 8;
  local_20[3] = 4;
  local_20[0] = 0x20;
  local_20[4] = 2;
  iVar7 = iVar3;
  do {
    Sexy::Insets::Insets(aIStack_30,iVar3,iVar7,iVar2,iVar4);
    this_00 = ::operator_new(0xf0);
    piVar1 = (int *)((long)local_20 + lVar6);
    lVar6 = lVar6 + 4;
    RareFilterButton::RareFilterButton(this_00,*piVar1);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_30);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar7 = iVar7 + iVar4 + iVar5;
  } while (lVar6 != 0x14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RareFilterPanel::RareFilterPanel() */

void __thiscall RareFilterPanel::RareFilterPanel(RareFilterPanel *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined ***)this = &PTR_GetClass_0683de70;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRareFilterButtonStateChange);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,bool,Sexy::CBMemberTranslatorX<RareFilterPanel,void(RareFilterPanel::*)(int,bool)>>
            ((MessageRouter *)puVar1,Message::ChangeRareFilterState,&local_40);
  return;
}


/* RareFilterPanel::onRareFilterButtonStateChange(int, bool) */

void __thiscall
RareFilterPanel::onRareFilterButtonStateChange(RareFilterPanel *this,int param_1,bool param_2)

{
  uint uVar1;
  
  if (param_2) {
    uVar1 = (param_1 ^ 0xffffU) & *(uint *)(this + 0xd4);
    *(uint *)(this + 0xd4) = uVar1;
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::ScrollReInitView,uVar1);
    return;
  }
  uVar1 = param_1 | *(uint *)(this + 0xd4);
  *(uint *)(this + 0xd4) = uVar1;
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::ScrollReInitView,uVar1);
  return;
}

