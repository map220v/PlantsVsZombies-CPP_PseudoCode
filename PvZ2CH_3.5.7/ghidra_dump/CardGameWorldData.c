// Class: CardGameWorldData


/* CardGameWorldData::~CardGameWorldData() */

void __thiscall CardGameWorldData::~CardGameWorldData(CardGameWorldData *this)

{
  std::vector<CardGameStarRewardData,std::allocator<CardGameStarRewardData>>::~vector
            ((vector<CardGameStarRewardData,std::allocator<CardGameStarRewardData>> *)(this + 0x68))
  ;
  std::vector<CardGameLevelData,std::allocator<CardGameLevelData>>::~vector
            ((vector<CardGameLevelData,std::allocator<CardGameLevelData>> *)(this + 0x50));
  std::vector<CardGameLevelData,std::allocator<CardGameLevelData>>::~vector
            ((vector<CardGameLevelData,std::allocator<CardGameLevelData>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this);
  return;
}


/* CardGameWorldData::CardGameWorldData(CardGameWorldData const&) */

void __thiscall
CardGameWorldData::CardGameWorldData(CardGameWorldData *this,CardGameWorldData *param_1)

{
  undefined4 uVar1;
  
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  std::vector<CardGameLevelData,std::allocator<CardGameLevelData>>::vector
            ((vector<CardGameLevelData,std::allocator<CardGameLevelData>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::vector<CardGameLevelData,std::allocator<CardGameLevelData>>::vector
            ((vector<CardGameLevelData,std::allocator<CardGameLevelData>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  std::vector<CardGameStarRewardData,std::allocator<CardGameStarRewardData>>::vector
            ((vector<CardGameStarRewardData,std::allocator<CardGameStarRewardData>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  return;
}


/* CardGameWorldData::CardGameWorldData() */

void __thiscall CardGameWorldData::CardGameWorldData(CardGameWorldData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* CardGameWorldData::CardGameWorldData(CardGameWorldData&&) */

void __thiscall
CardGameWorldData::CardGameWorldData(CardGameWorldData *this,CardGameWorldData *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x50),(vector *)(param_1 + 0x50));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x68),(vector *)(param_1 + 0x68));
  return;
}

