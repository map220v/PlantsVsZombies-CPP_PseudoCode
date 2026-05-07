// Class: PlantBoost


/* PlantBoost::~PlantBoost() */

void __thiscall PlantBoost::~PlantBoost(PlantBoost *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* PlantBoost::PlantBoost(PlantBoost const&) */

void __thiscall PlantBoost::PlantBoost(PlantBoost *this,PlantBoost *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 8),(vector *)(param_1 + 8));
  return;
}


/* PlantBoost::TEMPNAMEPLACEHOLDERVALUE(PlantBoost const&) */

PlantBoost * __thiscall PlantBoost::operator=(PlantBoost *this,PlantBoost *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 8),(vector *)(param_1 + 8));
  return this;
}

