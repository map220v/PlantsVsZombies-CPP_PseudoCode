// Class: RiverEntityProperties


/* RiverEntityProperties::~RiverEntityProperties() */

void __thiscall RiverEntityProperties::~RiverEntityProperties(RiverEntityProperties *this)

{
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* RiverEntityProperties::RiverEntityProperties() */

void __thiscall RiverEntityProperties::RiverEntityProperties(RiverEntityProperties *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* RiverEntityProperties::RiverEntityProperties(RiverEntityProperties const&) */

void __thiscall
RiverEntityProperties::RiverEntityProperties
          (RiverEntityProperties *this,RiverEntityProperties *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* RiverEntityProperties::RiverEntityProperties(RiverEntityProperties&&) */

void __thiscall
RiverEntityProperties::RiverEntityProperties
          (RiverEntityProperties *this,RiverEntityProperties *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}

