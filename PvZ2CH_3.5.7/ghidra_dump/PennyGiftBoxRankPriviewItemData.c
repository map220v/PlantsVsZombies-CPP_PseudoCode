// Class: PennyGiftBoxRankPriviewItemData


/* PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData() */

void __thiscall
PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
          (PennyGiftBoxRankPriviewItemData *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10));
  return;
}


/* PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData(PennyGiftBoxRankPriviewItemData&&)
    */

void __thiscall
PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
          (PennyGiftBoxRankPriviewItemData *this,PennyGiftBoxRankPriviewItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData(PennyGiftBoxRankPriviewItemData
   const&) */

void __thiscall
PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
          (PennyGiftBoxRankPriviewItemData *this,PennyGiftBoxRankPriviewItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* PennyGiftBoxRankPriviewItemData::TEMPNAMEPLACEHOLDERVALUE(PennyGiftBoxRankPriviewItemData const&)
    */

PennyGiftBoxRankPriviewItemData * __thiscall
PennyGiftBoxRankPriviewItemData::operator=
          (PennyGiftBoxRankPriviewItemData *this,PennyGiftBoxRankPriviewItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}

