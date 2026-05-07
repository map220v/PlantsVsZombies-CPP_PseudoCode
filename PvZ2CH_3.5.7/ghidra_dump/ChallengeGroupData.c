// Class: ChallengeGroupData


/* ChallengeGroupData::~ChallengeGroupData() */

void __thiscall ChallengeGroupData::~ChallengeGroupData(ChallengeGroupData *this)

{
  std::_Destroy<Sexy::ResStreamsUnpacker::GroupInfo*>(*(GroupInfo **)this,*(GroupInfo **)(this + 8))
  ;
  std::_Vector_base<ChallengeItemData,std::allocator<ChallengeItemData>>::~_Vector_base
            ((_Vector_base<ChallengeItemData,std::allocator<ChallengeItemData>> *)this);
  return;
}

