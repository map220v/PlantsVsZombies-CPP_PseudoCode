// Class: CustomChallengeTowerDefend


/* CustomChallengeTowerDefend::~CustomChallengeTowerDefend() */

void __thiscall
CustomChallengeTowerDefend::~CustomChallengeTowerDefend(CustomChallengeTowerDefend *this)

{
  std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::~vector
            ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 0x48));
  TowerDefendWaveData::~TowerDefendWaveData((TowerDefendWaveData *)(this + 0x30));
  std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::~vector
            ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* CustomChallengeTowerDefend::CustomChallengeTowerDefend() */

void __thiscall
CustomChallengeTowerDefend::CustomChallengeTowerDefend(CustomChallengeTowerDefend *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  TowerDefendWaveData::TowerDefendWaveData((TowerDefendWaveData *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)this,8);
  return;
}


/* CustomChallengeTowerDefend::CustomChallengeTowerDefend(CustomChallengeTowerDefend const&) */

void __thiscall
CustomChallengeTowerDefend::CustomChallengeTowerDefend
          (CustomChallengeTowerDefend *this,CustomChallengeTowerDefend *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::vector
            ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  TowerDefendWaveData::TowerDefendWaveData
            ((TowerDefendWaveData *)(this + 0x30),(TowerDefendWaveData *)(param_1 + 0x30));
  std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::vector
            ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return;
}


/* CustomChallengeTowerDefend::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeTowerDefend const&) */

CustomChallengeTowerDefend * __thiscall
CustomChallengeTowerDefend::operator=
          (CustomChallengeTowerDefend *this,CustomChallengeTowerDefend *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::operator=
            ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  TowerDefendWaveData::operator=
            ((TowerDefendWaveData *)(this + 0x30),(TowerDefendWaveData *)(param_1 + 0x30));
  std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::operator=
            ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return this;
}


/* CustomChallengeTowerDefend::CustomChallengeTowerDefend(CustomChallengeTowerDefend&&) */

void __thiscall
CustomChallengeTowerDefend::CustomChallengeTowerDefend
          (CustomChallengeTowerDefend *this,CustomChallengeTowerDefend *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  Sexy::PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0x30),(PIInterpolator *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  return;
}


/* CustomChallengeTowerDefend::TEMPNAMEPLACEHOLDERVALUE(CustomChallengeTowerDefend&&) */

CustomChallengeTowerDefend * __thiscall
CustomChallengeTowerDefend::operator=
          (CustomChallengeTowerDefend *this,CustomChallengeTowerDefend *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::operator=
            ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  TowerDefendWaveData::operator=
            ((TowerDefendWaveData *)(this + 0x30),(TowerDefendWaveData *)(param_1 + 0x30));
  std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::operator=
            ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return this;
}

