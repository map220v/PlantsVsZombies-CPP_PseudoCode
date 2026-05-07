// Class: LevelInfo


/* LevelInfo::LevelInfo() */

void __thiscall LevelInfo::LevelInfo(LevelInfo *this)

{
  Set8BytesTo0();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  LevelDefinition::LevelDefinition((LevelDefinition *)(this + 0x10));
  this[0x1f0] = (LevelInfo)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  return;
}


/* LevelInfo::TEMPNAMEPLACEHOLDERVALUE(LevelInfo const&) */

LevelInfo * __thiscall LevelInfo::operator=(LevelInfo *this,LevelInfo *param_1)

{
  thunk_FUN_05475e00();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  LevelDefinition::operator=((LevelDefinition *)(this + 0x10),(LevelDefinition *)(param_1 + 0x10));
  this[0x1f0] = param_1[0x1f0];
  std::
  vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
  ::operator=((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)(this + 0x1f8),(vector *)(param_1 + 0x1f8));
  std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::operator=
            ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)(this + 0x210),
             (vector *)(param_1 + 0x210));
  return this;
}


/* LevelInfo::~LevelInfo() */

void __thiscall LevelInfo::~LevelInfo(LevelInfo *this)

{
  std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::~vector
            ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)(this + 0x210));
  std::
  vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
  ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
             *)(this + 0x1f8));
  LevelDefinition::~LevelDefinition((LevelDefinition *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  std::string::~string((string *)this);
  return;
}

