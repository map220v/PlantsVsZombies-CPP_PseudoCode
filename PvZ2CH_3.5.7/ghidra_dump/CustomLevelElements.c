// Class: CustomLevelElements


/* CustomLevelElements::CustomLevelElements() */

void __thiscall CustomLevelElements::CustomLevelElements(CustomLevelElements *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  CustomRailInfo::CustomRailInfo((CustomRailInfo *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  return;
}


/* CustomLevelElements::~CustomLevelElements() */

void __thiscall CustomLevelElements::~CustomLevelElements(CustomLevelElements *this)

{
  std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::~vector
            ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)(this + 0x80));
  CustomRailInfo::~CustomRailInfo((CustomRailInfo *)(this + 0x48));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::~vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x30));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::~vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x18));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::~vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)this);
  return;
}


/* CustomLevelElements::CustomLevelElements(CustomLevelElements const&) */

void __thiscall
CustomLevelElements::CustomLevelElements(CustomLevelElements *this,CustomLevelElements *param_1)

{
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)this,(vector *)param_1);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::vector
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  CustomRailInfo::CustomRailInfo((CustomRailInfo *)(this + 0x48),(CustomRailInfo *)(param_1 + 0x48))
  ;
  std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::vector
            ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  return;
}


/* CustomLevelElements::TEMPNAMEPLACEHOLDERVALUE(CustomLevelElements const&) */

CustomLevelElements * __thiscall
CustomLevelElements::operator=(CustomLevelElements *this,CustomLevelElements *param_1)

{
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)this,(vector *)param_1);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  CustomRailInfo::operator=((CustomRailInfo *)(this + 0x48),(CustomRailInfo *)(param_1 + 0x48));
  std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::operator=
            ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  return this;
}


/* CustomLevelElements::TEMPNAMEPLACEHOLDERVALUE(CustomLevelElements&&) */

CustomLevelElements * __thiscall
CustomLevelElements::operator=(CustomLevelElements *this,CustomLevelElements *param_1)

{
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)this,(vector *)param_1);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::operator=
            ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  CustomRailInfo::operator=((CustomRailInfo *)(this + 0x48),(CustomRailInfo *)(param_1 + 0x48));
  std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::operator=
            ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)(this + 0x80),
             (vector *)(param_1 + 0x80));
  return this;
}


/* CustomLevelElements::CustomLevelElements(CustomLevelElements&&) */

void __thiscall
CustomLevelElements::CustomLevelElements(CustomLevelElements *this,CustomLevelElements *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  CustomRailInfo::CustomRailInfo((CustomRailInfo *)(this + 0x48),(CustomRailInfo *)(param_1 + 0x48))
  ;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x80),(vector *)(param_1 + 0x80));
  return;
}

