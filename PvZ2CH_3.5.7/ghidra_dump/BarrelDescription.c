// Class: BarrelDescription


/* BarrelDescription::BarrelDescription() */

void __thiscall BarrelDescription::BarrelDescription(BarrelDescription *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  Set8BytesTo0((string *)(this + 8));
  GriditemBarrelParams::GriditemBarrelParams((GriditemBarrelParams *)(this + 0x10));
  iVar2 = Sexy::Rand();
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar2 / iVar3;
  }
  *(uint *)this = iVar2 - uVar1 * iVar3;
  std::string::append((string *)(this + 8),"barrelempty",(ulong)uVar1);
  return;
}


/* BarrelDescription::~BarrelDescription() */

void __thiscall BarrelDescription::~BarrelDescription(BarrelDescription *this)

{
  GriditemBarrelParams::~GriditemBarrelParams((GriditemBarrelParams *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* BarrelDescription::BarrelDescription(BarrelDescription const&) */

void __thiscall
BarrelDescription::BarrelDescription(BarrelDescription *this,BarrelDescription *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  GriditemBarrelParams::GriditemBarrelParams
            ((GriditemBarrelParams *)(this + 0x10),(GriditemBarrelParams *)(param_1 + 0x10));
  return;
}


/* BarrelDescription::BarrelDescription(BarrelDescription&&) */

void __thiscall
BarrelDescription::BarrelDescription(BarrelDescription *this,BarrelDescription *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  GriditemBarrelParams::GriditemBarrelParams
            ((GriditemBarrelParams *)(this + 0x10),(GriditemBarrelParams *)(param_1 + 0x10));
  return;
}

