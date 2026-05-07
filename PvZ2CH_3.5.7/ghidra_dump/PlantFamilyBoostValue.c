// Class: PlantFamilyBoostValue


/* PlantFamilyBoostValue::~PlantFamilyBoostValue() */

void __thiscall PlantFamilyBoostValue::~PlantFamilyBoostValue(PlantFamilyBoostValue *this)

{
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* PlantFamilyBoostValue::PlantFamilyBoostValue() */

void __thiscall PlantFamilyBoostValue::PlantFamilyBoostValue(PlantFamilyBoostValue *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  Set8BytesTo0(this + 0x20);
  this[0x28] = (PlantFamilyBoostValue)0x0;
  return;
}


/* PlantFamilyBoostValue::PlantFamilyBoostValue(PlantFamilyBoostValue const&) */

void __thiscall
PlantFamilyBoostValue::PlantFamilyBoostValue
          (PlantFamilyBoostValue *this,PlantFamilyBoostValue *param_1)

{
  FUN_05475d88();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  this[0x28] = param_1[0x28];
  return;
}


/* PlantFamilyBoostValue::PlantFamilyBoostValue(PlantFamilyBoostValue&&) */

void __thiscall
PlantFamilyBoostValue::PlantFamilyBoostValue
          (PlantFamilyBoostValue *this,PlantFamilyBoostValue *param_1)

{
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  this[0x28] = param_1[0x28];
  return;
}


/* PlantFamilyBoostValue::TEMPNAMEPLACEHOLDERVALUE(PlantFamilyBoostValue const&) */

PlantFamilyBoostValue * __thiscall
PlantFamilyBoostValue::operator=(PlantFamilyBoostValue *this,PlantFamilyBoostValue *param_1)

{
  thunk_FUN_05475e00();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  this[0x28] = param_1[0x28];
  return this;
}

