// Class: IceShroomProps::IceShroomGrowthStates


/* IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates(IceShroomProps::IceShroomGrowthStates
   const&) */

void __thiscall
IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates
          (IceShroomGrowthStates *this,IceShroomGrowthStates *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x18),(RtWeakPtrBase *)(param_1 + 0x18));
  return;
}


/* IceShroomProps::IceShroomGrowthStates::~IceShroomGrowthStates() */

void __thiscall
IceShroomProps::IceShroomGrowthStates::~IceShroomGrowthStates(IceShroomGrowthStates *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates() */

void __thiscall
IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates(IceShroomGrowthStates *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}

