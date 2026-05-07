// Class: ElectricExplodeDescription


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricExplodeDescription::ElectricExplodeDescription() */

void __thiscall
ElectricExplodeDescription::ElectricExplodeDescription(ElectricExplodeDescription *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Set8BytesTo0();
  std::string::string((string *)(this + 8),"idle");
  nop();
  DVec3::DVec3((DVec3 *)(this + 0x10));
  *(undefined4 *)(this + 0x1c) = 0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x20));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricExplodeDescription::~ElectricExplodeDescription() */

void __thiscall
ElectricExplodeDescription::~ElectricExplodeDescription(ElectricExplodeDescription *this)

{
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x20));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* ElectricExplodeDescription::ElectricExplodeDescription(ElectricExplodeDescription const&) */

void __thiscall
ElectricExplodeDescription::ElectricExplodeDescription
          (ElectricExplodeDescription *this,ElectricExplodeDescription *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x20),(DamageInfo *)(param_1 + 0x20));
  return;
}

