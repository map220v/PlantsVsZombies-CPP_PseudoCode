// Class: PlantFamilyDisplayValue


/* PlantFamilyDisplayValue::PlantFamilyDisplayValue() */

void __thiscall PlantFamilyDisplayValue::PlantFamilyDisplayValue(PlantFamilyDisplayValue *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  PlantFamilyBoostValue::PlantFamilyBoostValue((PlantFamilyBoostValue *)(this + 0x18));
  return;
}


/* PlantFamilyDisplayValue::~PlantFamilyDisplayValue() */

void __thiscall PlantFamilyDisplayValue::~PlantFamilyDisplayValue(PlantFamilyDisplayValue *this)

{
  PlantFamilyBoostValue::~PlantFamilyBoostValue((PlantFamilyBoostValue *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* PlantFamilyDisplayValue::PlantFamilyDisplayValue(PlantFamilyDisplayValue const&) */

void __thiscall
PlantFamilyDisplayValue::PlantFamilyDisplayValue
          (PlantFamilyDisplayValue *this,PlantFamilyDisplayValue *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  PlantFamilyBoostValue::PlantFamilyBoostValue
            ((PlantFamilyBoostValue *)(this + 0x18),(PlantFamilyBoostValue *)(param_1 + 0x18));
  return;
}


/* PlantFamilyDisplayValue::PlantFamilyDisplayValue(PlantFamilyDisplayValue&&) */

void __thiscall
PlantFamilyDisplayValue::PlantFamilyDisplayValue
          (PlantFamilyDisplayValue *this,PlantFamilyDisplayValue *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  PlantFamilyBoostValue::PlantFamilyBoostValue
            ((PlantFamilyBoostValue *)(this + 0x18),(PlantFamilyBoostValue *)(param_1 + 0x18));
  return;
}


/* PlantFamilyDisplayValue::TEMPNAMEPLACEHOLDERVALUE(PlantFamilyDisplayValue const&) */

PlantFamilyDisplayValue * __thiscall
PlantFamilyDisplayValue::operator=(PlantFamilyDisplayValue *this,PlantFamilyDisplayValue *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  PlantFamilyBoostValue::operator=
            ((PlantFamilyBoostValue *)(this + 0x18),(PlantFamilyBoostValue *)(param_1 + 0x18));
  return this;
}

