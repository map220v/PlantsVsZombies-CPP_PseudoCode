// Class: BuffShieldData


/* BuffShieldData::TEMPNAMEPLACEHOLDERVALUE(BuffShieldData&&) */

BuffShieldData * __thiscall BuffShieldData::operator=(BuffShieldData *this,BuffShieldData *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  return this;
}

