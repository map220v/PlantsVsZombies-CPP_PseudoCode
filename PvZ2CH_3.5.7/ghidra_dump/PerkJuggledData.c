// Class: PerkJuggledData


/* PerkJuggledData::PerkJuggledData() */

void __thiscall PerkJuggledData::PerkJuggledData(PerkJuggledData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* PerkJuggledData::~PerkJuggledData() */

void __thiscall PerkJuggledData::~PerkJuggledData(PerkJuggledData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::~vector
            ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)this);
  return;
}


/* PerkJuggledData::PerkJuggledData(PerkJuggledData const&) */

void __thiscall PerkJuggledData::PerkJuggledData(PerkJuggledData *this,PerkJuggledData *param_1)

{
  std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::vector
            ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)this,
             (vector *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),(RtWeakPtrBase *)(param_1 + 0x20));
  return;
}

