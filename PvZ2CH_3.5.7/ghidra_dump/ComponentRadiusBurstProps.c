// Class: ComponentRadiusBurstProps


/* ComponentRadiusBurstProps::ComponentRadiusBurstProps() */

void __thiscall
ComponentRadiusBurstProps::ComponentRadiusBurstProps(ComponentRadiusBurstProps *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  Sexy::Point::Point((Point *)(this + 0x28),0,0);
  *(undefined4 *)(this + 0x30) = 0;
  TargetInfoProps::TargetInfoProps((TargetInfoProps *)(this + 0x38));
  this[0x80] = (ComponentRadiusBurstProps)0x0;
  return;
}


/* ComponentRadiusBurstProps::ComponentRadiusBurstProps(ComponentRadiusBurstProps const&) */

void __thiscall
ComponentRadiusBurstProps::ComponentRadiusBurstProps
          (ComponentRadiusBurstProps *this,ComponentRadiusBurstProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x28),(TPoint *)(param_1 + 0x28));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  TargetInfoProps::TargetInfoProps
            ((TargetInfoProps *)(this + 0x38),(TargetInfoProps *)(param_1 + 0x38));
  this[0x80] = param_1[0x80];
  return;
}


/* ComponentRadiusBurstProps::~ComponentRadiusBurstProps() */

void __thiscall
ComponentRadiusBurstProps::~ComponentRadiusBurstProps(ComponentRadiusBurstProps *this)

{
  TargetInfoProps::~TargetInfoProps((TargetInfoProps *)(this + 0x38));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* ComponentRadiusBurstProps::TEMPNAMEPLACEHOLDERVALUE(ComponentRadiusBurstProps const&) */

ComponentRadiusBurstProps * __thiscall
ComponentRadiusBurstProps::operator=
          (ComponentRadiusBurstProps *this,ComponentRadiusBurstProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar3;
  TargetInfoProps::operator=((TargetInfoProps *)(this + 0x38),(TargetInfoProps *)(param_1 + 0x38));
  this[0x80] = param_1[0x80];
  return this;
}


/* ComponentRadiusBurstProps::TEMPNAMEPLACEHOLDERVALUE(ComponentRadiusBurstProps&&) */

ComponentRadiusBurstProps * __thiscall
ComponentRadiusBurstProps::operator=
          (ComponentRadiusBurstProps *this,ComponentRadiusBurstProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  FUN_05474278(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar3;
  TargetInfoProps::operator=((TargetInfoProps *)(this + 0x38),(TargetInfoProps *)(param_1 + 0x38));
  this[0x80] = param_1[0x80];
  return this;
}

