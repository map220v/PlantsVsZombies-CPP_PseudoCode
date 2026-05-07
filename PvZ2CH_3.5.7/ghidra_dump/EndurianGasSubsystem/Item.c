// Class: EndurianGasSubsystem::Item


/* EndurianGasSubsystem::Item::TEMPNAMEPLACEHOLDERVALUE(EndurianGasSubsystem::Item&&) */

Item * __thiscall EndurianGasSubsystem::Item::operator=(Item *this,Item *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  return this;
}


/* EndurianGasSubsystem::Item::Item(EndurianGasSubsystem::Item const&) */

void __thiscall EndurianGasSubsystem::Item::Item(Item *this,Item *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  return;
}


/* EndurianGasSubsystem::Item::Item(float, Sexy::RtWeakPtr<Plant> const&) */

void __thiscall EndurianGasSubsystem::Item::Item(Item *this,float param_1,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)param_2);
  *(float *)this = param_1;
  return;
}

