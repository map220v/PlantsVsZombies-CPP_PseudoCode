// Class: ChallengeDropOutItemGroup


/* ChallengeDropOutItemGroup::ChallengeDropOutItemGroup() */

void __thiscall
ChallengeDropOutItemGroup::ChallengeDropOutItemGroup(ChallengeDropOutItemGroup *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::string::append((string *)this,"",in_x2);
  return;
}


/* ChallengeDropOutItemGroup::~ChallengeDropOutItemGroup() */

void __thiscall
ChallengeDropOutItemGroup::~ChallengeDropOutItemGroup(ChallengeDropOutItemGroup *this)

{
  std::vector<ChallengeGroupData,std::allocator<ChallengeGroupData>>::~vector
            ((vector<ChallengeGroupData,std::allocator<ChallengeGroupData>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}

