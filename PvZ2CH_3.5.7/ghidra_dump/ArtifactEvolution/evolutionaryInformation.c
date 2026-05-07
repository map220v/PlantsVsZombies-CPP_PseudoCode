// Class: ArtifactEvolution::evolutionaryInformation


/* ArtifactEvolution::evolutionaryInformation::evolutionaryInformation(Sexy::Point, std::string,
   Sexy::RtWeakPtr<PlantType const>, int, Sexy::RtWeakPtr<Plant>) */

void __thiscall
ArtifactEvolution::evolutionaryInformation::evolutionaryInformation
          (evolutionaryInformation *this,TPoint *param_2,undefined8 param_3,RtWeakPtrBase *param_4,
          undefined4 param_5,RtWeakPtrBase *param_6)

{
  Sexy::Point::Point((Point *)this,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),param_4);
  FUN_05475d88(this + 0x10,param_3);
  *(undefined4 *)(this + 0x18) = param_5;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),param_6);
  return;
}


/* ArtifactEvolution::evolutionaryInformation::~evolutionaryInformation() */

void __thiscall
ArtifactEvolution::evolutionaryInformation::~evolutionaryInformation(evolutionaryInformation *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  return;
}


/* ArtifactEvolution::evolutionaryInformation::evolutionaryInformation() */

void __thiscall
ArtifactEvolution::evolutionaryInformation::evolutionaryInformation(evolutionaryInformation *this)

{
  Sexy::Point::Point((Point *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  Set8BytesTo0(this + 0x10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  return;
}

