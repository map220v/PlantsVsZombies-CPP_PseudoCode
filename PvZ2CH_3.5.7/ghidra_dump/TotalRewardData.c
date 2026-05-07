// Class: TotalRewardData


/* TotalRewardData::~TotalRewardData() */

void __thiscall TotalRewardData::~TotalRewardData(TotalRewardData *this)

{
  std::vector<RandomRewardData,std::allocator<RandomRewardData>>::~vector
            ((vector<RandomRewardData,std::allocator<RandomRewardData>> *)(this + 0x18));
  std::vector<UpdateRewardData,std::allocator<UpdateRewardData>>::~vector
            ((vector<UpdateRewardData,std::allocator<UpdateRewardData>> *)this);
  return;
}


/* TotalRewardData::TotalRewardData(TotalRewardData const&) */

void __thiscall TotalRewardData::TotalRewardData(TotalRewardData *this,TotalRewardData *param_1)

{
  std::vector<UpdateRewardData,std::allocator<UpdateRewardData>>::vector
            ((vector<UpdateRewardData,std::allocator<UpdateRewardData>> *)this,(vector *)param_1);
  std::vector<RandomRewardData,std::allocator<RandomRewardData>>::vector
            ((vector<RandomRewardData,std::allocator<RandomRewardData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* TotalRewardData::TEMPNAMEPLACEHOLDERVALUE(TotalRewardData const&) */

TotalRewardData * __thiscall
TotalRewardData::operator=(TotalRewardData *this,TotalRewardData *param_1)

{
  std::vector<UpdateRewardData,std::allocator<UpdateRewardData>>::operator=
            ((vector<UpdateRewardData,std::allocator<UpdateRewardData>> *)this,(vector *)param_1);
  std::vector<RandomRewardData,std::allocator<RandomRewardData>>::operator=
            ((vector<RandomRewardData,std::allocator<RandomRewardData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}


/* TotalRewardData::TEMPNAMEPLACEHOLDERVALUE(TotalRewardData&&) */

TotalRewardData * __thiscall
TotalRewardData::operator=(TotalRewardData *this,TotalRewardData *param_1)

{
  std::vector<UpdateRewardData,std::allocator<UpdateRewardData>>::operator=
            ((vector<UpdateRewardData,std::allocator<UpdateRewardData>> *)this,(vector *)param_1);
  std::vector<RandomRewardData,std::allocator<RandomRewardData>>::operator=
            ((vector<RandomRewardData,std::allocator<RandomRewardData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}

