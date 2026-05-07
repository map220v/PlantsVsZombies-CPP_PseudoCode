// Class: SoundWaveCircleDescription


/* SoundWaveCircleDescription::SoundWaveCircleDescription() */

void __thiscall
SoundWaveCircleDescription::SoundWaveCircleDescription(SoundWaveCircleDescription *this)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(this + 0xc) = 0x3f000000;
  *(float *)(this + 8) = (float)iVar1 * 1.5;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x10));
  Set8BytesTo0(this + 0x70);
  Set8BytesTo0(this + 0x78);
  DVec3::DVec3((DVec3 *)(this + 0x80));
  this[0x90] = (SoundWaveCircleDescription)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  return;
}


/* SoundWaveCircleDescription::~SoundWaveCircleDescription() */

void __thiscall
SoundWaveCircleDescription::~SoundWaveCircleDescription(SoundWaveCircleDescription *this)

{
  std::string::~string((string *)(this + 0x78));
  std::string::~string((string *)(this + 0x70));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x10));
  return;
}


/* SoundWaveCircleDescription::SoundWaveCircleDescription(SoundWaveCircleDescription const&) */

void __thiscall
SoundWaveCircleDescription::SoundWaveCircleDescription
          (SoundWaveCircleDescription *this,SoundWaveCircleDescription *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SoundWaveCircleDescription SVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x10),(DamageInfo *)(param_1 + 0x10));
  FUN_05475d88(this + 0x70,param_1 + 0x70);
  FUN_05475d88(this + 0x78,param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  SVar4 = param_1[0x90];
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  this[0x90] = SVar4;
  *(undefined4 *)(this + 0x8c) = uVar1;
  return;
}

