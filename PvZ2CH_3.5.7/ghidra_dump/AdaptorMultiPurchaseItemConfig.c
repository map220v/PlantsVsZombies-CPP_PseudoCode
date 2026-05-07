// Class: AdaptorMultiPurchaseItemConfig


/* AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig() */

void __thiscall
AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig(AdaptorMultiPurchaseItemConfig *this)

{
  Set8BytesTo0(this + 8);
  this[0x18] = (AdaptorMultiPurchaseItemConfig)0x0;
  this[0x19] = (AdaptorMultiPurchaseItemConfig)0x0;
  this[0x1a] = (AdaptorMultiPurchaseItemConfig)0x0;
  return;
}


/* AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig(LevelOfTheDay_RewardItemType
   const*, AdaptorMultiPurchaseItemConfig::DisplayStyle) */

void __thiscall
AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
          (AdaptorMultiPurchaseItemConfig *this,long param_1,undefined4 param_3)

{
  undefined4 uVar1;
  
  Set8BytesTo0(this + 8);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 8,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x1c) = param_3;
  this[0x18] = (AdaptorMultiPurchaseItemConfig)0x0;
  this[0x19] = (AdaptorMultiPurchaseItemConfig)0x0;
  return;
}


/* AdaptorMultiPurchaseItemConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorMultiPurchaseItemConfig const&)
    */

AdaptorMultiPurchaseItemConfig * __thiscall
AdaptorMultiPurchaseItemConfig::operator=
          (AdaptorMultiPurchaseItemConfig *this,AdaptorMultiPurchaseItemConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AdaptorMultiPurchaseItemConfig AVar3;
  AdaptorMultiPurchaseItemConfig AVar4;
  AdaptorMultiPurchaseItemConfig AVar5;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  AVar3 = param_1[0x18];
  AVar4 = param_1[0x19];
  AVar5 = param_1[0x1a];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  this[0x18] = AVar3;
  this[0x19] = AVar4;
  this[0x1a] = AVar5;
  return this;
}


/* AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig(AdaptorMultiPurchaseItemConfig
   const&) */

void __thiscall
AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
          (AdaptorMultiPurchaseItemConfig *this,AdaptorMultiPurchaseItemConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AdaptorMultiPurchaseItemConfig AVar3;
  AdaptorMultiPurchaseItemConfig AVar4;
  AdaptorMultiPurchaseItemConfig AVar5;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  AVar3 = param_1[0x18];
  AVar4 = param_1[0x19];
  AVar5 = param_1[0x1a];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  this[0x18] = AVar3;
  this[0x19] = AVar4;
  this[0x1a] = AVar5;
  return;
}


/* AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig(AwardType, std::string const&,
   int, int, bool, bool, bool, AdaptorMultiPurchaseItemConfig::DisplayStyle) */

void __thiscall
AdaptorMultiPurchaseItemConfig::AdaptorMultiPurchaseItemConfig
          (AdaptorMultiPurchaseItemConfig *this,undefined4 param_2,undefined8 param_3,
          undefined4 param_4,undefined4 param_5,AdaptorMultiPurchaseItemConfig param_6,
          AdaptorMultiPurchaseItemConfig param_7,AdaptorMultiPurchaseItemConfig param_8,
          undefined4 param_9)

{
  *(undefined4 *)this = param_2;
  FUN_05475d88(this + 8,param_3);
  this[0x18] = param_6;
  this[0x19] = param_7;
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x14) = param_5;
  this[0x1a] = param_8;
  *(undefined4 *)(this + 0x1c) = param_9;
  return;
}

