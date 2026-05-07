// Class: DotStruct


/* DotStruct::TEMPNAMEPLACEHOLDERVALUE(DotStruct&&) */

DotStruct * __thiscall DotStruct::operator=(DotStruct *this,DotStruct *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

