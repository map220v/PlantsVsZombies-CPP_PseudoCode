// Class: PlantfoodOwnerLink


/* PlantfoodOwnerLink::PlantfoodOwnerLink(PlantfoodOwnerLink&&) */

void __thiscall
PlantfoodOwnerLink::PlantfoodOwnerLink(PlantfoodOwnerLink *this,PlantfoodOwnerLink *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* PlantfoodOwnerLink::TEMPNAMEPLACEHOLDERVALUE(PlantfoodOwnerLink&&) */

PlantfoodOwnerLink * __thiscall
PlantfoodOwnerLink::operator=(PlantfoodOwnerLink *this,PlantfoodOwnerLink *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

