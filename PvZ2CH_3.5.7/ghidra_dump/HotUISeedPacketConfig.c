// Class: HotUISeedPacketConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketConfig::HotUISeedPacketConfig() */

void __thiscall HotUISeedPacketConfig::HotUISeedPacketConfig(HotUISeedPacketConfig *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  this[8] = (HotUISeedPacketConfig)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  this[0x10] = (HotUISeedPacketConfig)0x0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISeedPacketConfig::TEMPNAMEPLACEHOLDERVALUE(HotUISeedPacketConfig const&) */

HotUISeedPacketConfig * __thiscall
HotUISeedPacketConfig::operator=(HotUISeedPacketConfig *this,HotUISeedPacketConfig *param_1)

{
  undefined4 uVar1;
  HotUISeedPacketConfig HVar2;
  
  thunk_FUN_05475e00();
  HVar2 = param_1[8];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  this[8] = HVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  return this;
}


/* HotUISeedPacketConfig::HotUISeedPacketConfig(HotUISeedPacketConfig&&) */

void __thiscall
HotUISeedPacketConfig::HotUISeedPacketConfig
          (HotUISeedPacketConfig *this,HotUISeedPacketConfig *param_1)

{
  undefined4 uVar1;
  HotUISeedPacketConfig HVar2;
  
  FUN_05474148();
  HVar2 = param_1[8];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  this[8] = HVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* HotUISeedPacketConfig::HotUISeedPacketConfig(HotUISeedPacketConfig const&) */

void __thiscall
HotUISeedPacketConfig::HotUISeedPacketConfig
          (HotUISeedPacketConfig *this,HotUISeedPacketConfig *param_1)

{
  undefined4 uVar1;
  HotUISeedPacketConfig HVar2;
  
  FUN_05475d88();
  HVar2 = param_1[8];
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  this[8] = HVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}

