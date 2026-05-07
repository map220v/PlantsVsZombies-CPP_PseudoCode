// Class: AdaptorSeedPacketEntryConfig


/* AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig() */

void __thiscall
AdaptorSeedPacketEntryConfig::~AdaptorSeedPacketEntryConfig(AdaptorSeedPacketEntryConfig *this)

{
  PakRecord::~PakRecord((PakRecord *)(this + 0x18));
  return;
}


/* AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig() */

void __thiscall
AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig(AdaptorSeedPacketEntryConfig *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x14] = (AdaptorSeedPacketEntryConfig)0x0;
  EntrySortValue::EntrySortValue((EntrySortValue *)(this + 0x18));
  return;
}


/* AdaptorSeedPacketEntryConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorSeedPacketEntryConfig const&) */

AdaptorSeedPacketEntryConfig * __thiscall
AdaptorSeedPacketEntryConfig::operator=
          (AdaptorSeedPacketEntryConfig *this,AdaptorSeedPacketEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  EntrySortValue::operator=((EntrySortValue *)(this + 0x18),(EntrySortValue *)(param_1 + 0x18));
  return this;
}


/* AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig(AdaptorSeedPacketEntryConfig const&)
    */

void __thiscall
AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
          (AdaptorSeedPacketEntryConfig *this,AdaptorSeedPacketEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  EntrySortValue::EntrySortValue((EntrySortValue *)(this + 0x18),(EntrySortValue *)(param_1 + 0x18))
  ;
  return;
}


/* AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig(AdaptorSeedPacketEntryConfig&&) */

void __thiscall
AdaptorSeedPacketEntryConfig::AdaptorSeedPacketEntryConfig
          (AdaptorSeedPacketEntryConfig *this,AdaptorSeedPacketEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  EntrySortValue::EntrySortValue((EntrySortValue *)(this + 0x18),(EntrySortValue *)(param_1 + 0x18))
  ;
  return;
}


/* AdaptorSeedPacketEntryConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorSeedPacketEntryConfig&&) */

AdaptorSeedPacketEntryConfig * __thiscall
AdaptorSeedPacketEntryConfig::operator=
          (AdaptorSeedPacketEntryConfig *this,AdaptorSeedPacketEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  EntrySortValue::operator=((EntrySortValue *)(this + 0x18),(EntrySortValue *)(param_1 + 0x18));
  return this;
}

