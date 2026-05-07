// Class: SwallowHoleItem


/* SwallowHoleItem::TEMPNAMEPLACEHOLDERVALUE(SwallowHoleItem&&) */

SwallowHoleItem * __thiscall
SwallowHoleItem::operator=(SwallowHoleItem *this,SwallowHoleItem *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  return this;
}

