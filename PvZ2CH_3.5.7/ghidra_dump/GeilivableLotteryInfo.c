// Class: GeilivableLotteryInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeilivableLotteryInfo::GeilivableLotteryInfo() */

void __thiscall GeilivableLotteryInfo::GeilivableLotteryInfo(GeilivableLotteryInfo *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  LawnKeyField::LawnKeyField((LawnKeyField *)this,0);
  LawnKeyField::LawnKeyField((LawnKeyField *)(this + 8),0);
  std::string::string((string *)(this + 0x10),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeilivableLotteryInfo::GeilivableLotteryInfo(GeilivableLotteryInfo const&) */

void __thiscall
GeilivableLotteryInfo::GeilivableLotteryInfo
          (GeilivableLotteryInfo *this,GeilivableLotteryInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* GeilivableLotteryInfo::TEMPNAMEPLACEHOLDERVALUE(GeilivableLotteryInfo const&) */

GeilivableLotteryInfo * __thiscall
GeilivableLotteryInfo::operator=(GeilivableLotteryInfo *this,GeilivableLotteryInfo *param_1)

{
  FUN_0432665c(this,*(undefined4 *)param_1);
  FUN_0432665c(this + 8,*(undefined4 *)(param_1 + 8));
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  return this;
}

