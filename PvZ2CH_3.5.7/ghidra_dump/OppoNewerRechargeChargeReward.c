// Class: OppoNewerRechargeChargeReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerRechargeChargeReward::GetLayoutName() */

void __thiscall OppoNewerRechargeChargeReward::GetLayoutName(OppoNewerRechargeChargeReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"OppoNewerReChargeReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerRechargeChargeReward::OnCreate() */

void __thiscall OppoNewerRechargeChargeReward::OnCreate(OppoNewerRechargeChargeReward *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIImageBackground");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* OppoNewerRechargeChargeReward::ButtonDepress(int) */

void __thiscall
OppoNewerRechargeChargeReward::ButtonDepress(OppoNewerRechargeChargeReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<OppoNewerRechargeChargeReward>::CloseDialog();
  return;
}


/* non-virtual thunk to OppoNewerRechargeChargeReward::ButtonDepress(int) */

void __thiscall
OppoNewerRechargeChargeReward::ButtonDepress(OppoNewerRechargeChargeReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* OppoNewerRechargeChargeReward::OppoNewerRechargeChargeReward() */

void __thiscall
OppoNewerRechargeChargeReward::OppoNewerRechargeChargeReward(OppoNewerRechargeChargeReward *this)

{
  UISingletonDialog<OppoNewerRechargeChargeReward>::UISingletonDialog
            ((UISingletonDialog<OppoNewerRechargeChargeReward> *)this);
  *(undefined ***)this = &PTR_GetClass_066cc940;
  *(undefined **)(this + 0xd8) = &DAT_066ccc90;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* OppoNewerRechargeChargeReward::~OppoNewerRechargeChargeReward() */

void __thiscall
OppoNewerRechargeChargeReward::~OppoNewerRechargeChargeReward(OppoNewerRechargeChargeReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066cc940;
  *(undefined **)(this + 0xd8) = &DAT_066ccc90;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x138));
  UISingletonDialog<OppoNewerRechargeChargeReward>::~UISingletonDialog
            ((UISingletonDialog<OppoNewerRechargeChargeReward> *)this);
  return;
}


/* OppoNewerRechargeChargeReward::~OppoNewerRechargeChargeReward() */

void __thiscall
OppoNewerRechargeChargeReward::~OppoNewerRechargeChargeReward(OppoNewerRechargeChargeReward *this)

{
  ~OppoNewerRechargeChargeReward(this);
  AK::FreeHook(this);
  return;
}

