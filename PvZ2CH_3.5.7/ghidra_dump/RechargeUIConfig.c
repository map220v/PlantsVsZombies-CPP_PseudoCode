// Class: RechargeUIConfig


/* RechargeUIConfig::RechargeUIConfig(std::string const&, std::string const&, RechargeUIType const&)
    */

void __thiscall
RechargeUIConfig::RechargeUIConfig
          (RechargeUIConfig *this,string *param_1,string *param_2,RechargeUIType *param_3)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  thunk_FUN_05475e00(this,param_1);
  thunk_FUN_05475e00(this + 8,param_2);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_3;
  return;
}

