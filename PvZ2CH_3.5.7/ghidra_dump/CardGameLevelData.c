// Class: CardGameLevelData


/* CardGameLevelData::~CardGameLevelData() */

void __thiscall CardGameLevelData::~CardGameLevelData(CardGameLevelData *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x30))
  ;
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x18))
  ;
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)this);
  return;
}


/* CardGameLevelData::CardGameLevelData(CardGameLevelData const&) */

void __thiscall
CardGameLevelData::CardGameLevelData(CardGameLevelData *this,CardGameLevelData *param_1)

{
  undefined4 uVar1;
  
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)this,
             (vector *)param_1);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x48),(vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}


/* CardGameLevelData::CardGameLevelData() */

void __thiscall CardGameLevelData::CardGameLevelData(CardGameLevelData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::clear
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)this);
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::clear
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x18))
  ;
  std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::clear
            ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)(this + 0x30))
  ;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  return;
}


/* CardGameLevelData::CardGameLevelData(CardGameLevelData&&) */

void __thiscall
CardGameLevelData::CardGameLevelData(CardGameLevelData *this,CardGameLevelData *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x60) = uVar1;
  return;
}

