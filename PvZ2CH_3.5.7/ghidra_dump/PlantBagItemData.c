// Class: PlantBagItemData


/* PlantBagItemData::PlantBagItemData() */

void __thiscall PlantBagItemData::PlantBagItemData(PlantBagItemData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  *(undefined2 *)(this + 8) = 0;
  return;
}


/* PlantBagItemData::PlantBagItemData(PlantBagItemData const&) */

void __thiscall PlantBagItemData::PlantBagItemData(PlantBagItemData *this,PlantBagItemData *param_1)

{
  FUN_05475d88();
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}

