// Class: ComponentLinearBurstProps


/* ComponentLinearBurstProps::ComponentLinearBurstProps() */

void __thiscall
ComponentLinearBurstProps::ComponentLinearBurstProps(ComponentLinearBurstProps *this)

{
  Sexy::Insets::Insets((Insets *)this);
  Sexy::Insets::Insets((Insets *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  TargetInfoProps::TargetInfoProps((TargetInfoProps *)(this + 0x28));
  Set8BytesTo0(this + 0x70);
  Set8BytesTo0(this + 0x78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  return;
}


/* ComponentLinearBurstProps::TEMPNAMEPLACEHOLDERVALUE(ComponentLinearBurstProps const&) */

ComponentLinearBurstProps * __thiscall
ComponentLinearBurstProps::operator=
          (ComponentLinearBurstProps *this,ComponentLinearBurstProps *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x24) = uVar5;
  TargetInfoProps::operator=((TargetInfoProps *)(this + 0x28),(TargetInfoProps *)(param_1 + 0x28));
  thunk_FUN_05475e00(this + 0x70,param_1 + 0x70);
  thunk_FUN_05475e00(this + 0x78,param_1 + 0x78);
  std::vector<DamageWithWeight,std::allocator<DamageWithWeight>>::operator=
            ((vector<DamageWithWeight,std::allocator<DamageWithWeight>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  return this;
}


/* ComponentLinearBurstProps::~ComponentLinearBurstProps() */

void __thiscall
ComponentLinearBurstProps::~ComponentLinearBurstProps(ComponentLinearBurstProps *this)

{
  std::vector<DamageWithWeight,std::allocator<DamageWithWeight>>::~vector
            ((vector<DamageWithWeight,std::allocator<DamageWithWeight>> *)(this + 0x80));
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x70));
  TargetInfoProps::~TargetInfoProps((TargetInfoProps *)(this + 0x28));
  return;
}

