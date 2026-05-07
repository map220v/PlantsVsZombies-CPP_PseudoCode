// Class: MarqueeViewItemData


/* MarqueeViewItemData::MarqueeViewItemData(MarqueeViewItemData&&) */

void __thiscall
MarqueeViewItemData::MarqueeViewItemData(MarqueeViewItemData *this,MarqueeViewItemData *param_1)

{
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* MarqueeViewItemData::MarqueeViewItemData() */

void __thiscall MarqueeViewItemData::MarqueeViewItemData(MarqueeViewItemData *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* MarqueeViewItemData::~MarqueeViewItemData() */

void __thiscall MarqueeViewItemData::~MarqueeViewItemData(MarqueeViewItemData *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


void __thiscall MarqueeViewItemData::~MarqueeViewItemData(MarqueeViewItemData *this)

{
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* MarqueeViewItemData::MarqueeViewItemData(MarqueeViewItemData const&) */

void __thiscall
MarqueeViewItemData::MarqueeViewItemData(MarqueeViewItemData *this,MarqueeViewItemData *param_1)

{
  FUN_05475d88();
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}

