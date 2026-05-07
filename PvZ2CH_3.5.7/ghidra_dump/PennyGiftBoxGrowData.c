// Class: PennyGiftBoxGrowData


/* PennyGiftBoxGrowData::~PennyGiftBoxGrowData() */

void __thiscall PennyGiftBoxGrowData::~PennyGiftBoxGrowData(PennyGiftBoxGrowData *this)

{
  PennyGiftBoxRankPriviewItemData::~PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x40));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  return;
}


/* PennyGiftBoxGrowData::PennyGiftBoxGrowData() */

void __thiscall PennyGiftBoxGrowData::PennyGiftBoxGrowData(PennyGiftBoxGrowData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Sexy::MemoryImage::TriRep::Level::Level((Level *)(this + 0x40));
  return;
}


/* PennyGiftBoxGrowData::PennyGiftBoxGrowData(PennyGiftBoxGrowData const&) */

void __thiscall
PennyGiftBoxGrowData::PennyGiftBoxGrowData(PennyGiftBoxGrowData *this,PennyGiftBoxGrowData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x40),
             (PennyGiftBoxRankPriviewItemData *)(param_1 + 0x40));
  return;
}


/* PennyGiftBoxGrowData::TEMPNAMEPLACEHOLDERVALUE(PennyGiftBoxGrowData const&) */

PennyGiftBoxGrowData * __thiscall
PennyGiftBoxGrowData::operator=(PennyGiftBoxGrowData *this,PennyGiftBoxGrowData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  PennyGiftBoxRankPriviewItemData::operator=
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x40),
             (PennyGiftBoxRankPriviewItemData *)(param_1 + 0x40));
  return this;
}


/* PennyGiftBoxGrowData::PennyGiftBoxGrowData(PennyGiftBoxGrowData&&) */

void __thiscall
PennyGiftBoxGrowData::PennyGiftBoxGrowData(PennyGiftBoxGrowData *this,PennyGiftBoxGrowData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  PennyGiftBoxRankPriviewItemData::PennyGiftBoxRankPriviewItemData
            ((PennyGiftBoxRankPriviewItemData *)(this + 0x40),
             (PennyGiftBoxRankPriviewItemData *)(param_1 + 0x40));
  return;
}

