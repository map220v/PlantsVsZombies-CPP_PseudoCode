// Class: PooyanShooterData


/* PooyanShooterData::PooyanShooterData() */

void __thiscall PooyanShooterData::PooyanShooterData(PooyanShooterData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 99999;
  *(undefined4 *)(this + 0xc) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* PooyanShooterData::PooyanShooterData(PooyanShooterData const&) */

void __thiscall
PooyanShooterData::PooyanShooterData(PooyanShooterData *this,PooyanShooterData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* PooyanShooterData::PooyanShooterData(PooyanShooterData&&) */

void __thiscall
PooyanShooterData::PooyanShooterData(PooyanShooterData *this,PooyanShooterData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}

