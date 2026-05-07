// Class: GridItemHydraFog::PlantData


/* GridItemHydraFog::PlantData::PlantData(GridItemHydraFog::PlantData const&) */

void __thiscall GridItemHydraFog::PlantData::PlantData(PlantData *this,PlantData *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


/* GridItemHydraFog::PlantData::TEMPNAMEPLACEHOLDERVALUE(GridItemHydraFog::PlantData&&) */

PlantData * __thiscall GridItemHydraFog::PlantData::operator=(PlantData *this,PlantData *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined4 *)(this + 8) = uVar1;
  return this;
}


/* GridItemHydraFog::PlantData::PlantData() */

void __thiscall GridItemHydraFog::PlantData::PlantData(PlantData *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  uVar1 = PVZ_EOT();
  this[0xc] = (PlantData)0x0;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

