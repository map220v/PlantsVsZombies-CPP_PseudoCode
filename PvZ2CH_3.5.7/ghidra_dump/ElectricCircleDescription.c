// Class: ElectricCircleDescription


/* ElectricCircleDescription::ElectricCircleDescription() */

void __thiscall
ElectricCircleDescription::ElectricCircleDescription(ElectricCircleDescription *this)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(this + 0xc) = 0x3f000000;
  *(undefined4 *)(this + 0x10) = 0x3fa66666;
  *(float *)(this + 8) = (float)iVar1 * 1.5;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x18));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x78));
  Set8BytesTo0(this + 0xd8);
  Set8BytesTo0(this + 0xe0);
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  DVec3::DVec3((DVec3 *)(this + 0xf8));
  *(undefined4 *)(this + 0x108) = 0xb;
  *(undefined4 *)(this + 0x104) = 0;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  this[0x110] = (ElectricCircleDescription)0x0;
  *(float *)(this + 0x10c) = (float)iVar1 * 1.5;
  return;
}


/* ElectricCircleDescription::~ElectricCircleDescription() */

void __thiscall
ElectricCircleDescription::~ElectricCircleDescription(ElectricCircleDescription *this)

{
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xe0));
  std::string::~string((string *)(this + 0xd8));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x78));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x18));
  return;
}


/* ElectricCircleDescription::ElectricCircleDescription(ElectricCircleDescription const&) */

void __thiscall
ElectricCircleDescription::ElectricCircleDescription
          (ElectricCircleDescription *this,ElectricCircleDescription *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ElectricCircleDescription EVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x18),(DamageInfo *)(param_1 + 0x18));
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x78),(DamageInfo *)(param_1 + 0x78));
  FUN_05475d88(this + 0xd8,param_1 + 0xd8);
  FUN_05475d88(this + 0xe0,param_1 + 0xe0);
  FUN_05475d88(this + 0xe8,param_1 + 0xe8);
  FUN_05475d88(this + 0xf0,param_1 + 0xf0);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = *(undefined4 *)(param_1 + 0x10c);
  uVar2 = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  EVar5 = param_1[0x110];
  uVar3 = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x108) = uVar2;
  this[0x110] = EVar5;
  *(undefined4 *)(this + 0x10c) = uVar1;
  *(undefined4 *)(this + 0x104) = uVar3;
  return;
}

