// Class: DangerRoomSpecialOfferExtraItemData


/* DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData() */

void __thiscall
DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData
          (DangerRoomSpecialOfferExtraItemData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0((string *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  *(undefined4 *)(this + 0x20) = 100;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x24) = 10;
  *(undefined4 *)(this + 0x28) = 1;
  std::string::append((string *)(this + 0x30),"",1);
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* DangerRoomSpecialOfferExtraItemData::~DangerRoomSpecialOfferExtraItemData() */

void __thiscall
DangerRoomSpecialOfferExtraItemData::~DangerRoomSpecialOfferExtraItemData
          (DangerRoomSpecialOfferExtraItemData *this)

{
  std::string::~string((string *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData(DangerRoomSpecialOfferExtraItemData
   const&) */

void __thiscall
DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData
          (DangerRoomSpecialOfferExtraItemData *this,DangerRoomSpecialOfferExtraItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* DangerRoomSpecialOfferExtraItemData::TEMPNAMEPLACEHOLDERVALUE(DangerRoomSpecialOfferExtraItemData
   const&) */

DangerRoomSpecialOfferExtraItemData * __thiscall
DangerRoomSpecialOfferExtraItemData::operator=
          (DangerRoomSpecialOfferExtraItemData *this,DangerRoomSpecialOfferExtraItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* DangerRoomSpecialOfferExtraItemData::TEMPNAMEPLACEHOLDERVALUE(DangerRoomSpecialOfferExtraItemData&&)
    */

DangerRoomSpecialOfferExtraItemData * __thiscall
DangerRoomSpecialOfferExtraItemData::operator=
          (DangerRoomSpecialOfferExtraItemData *this,DangerRoomSpecialOfferExtraItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  FUN_05474278(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


/* DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData(DangerRoomSpecialOfferExtraItemData&&)
    */

void __thiscall
DangerRoomSpecialOfferExtraItemData::DangerRoomSpecialOfferExtraItemData
          (DangerRoomSpecialOfferExtraItemData *this,DangerRoomSpecialOfferExtraItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  FUN_05474148(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}

