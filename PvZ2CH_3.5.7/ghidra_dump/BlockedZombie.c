// Class: BlockedZombie


/* BlockedZombie::TEMPNAMEPLACEHOLDERVALUE(BlockedZombie&&) */

BlockedZombie * __thiscall BlockedZombie::operator=(BlockedZombie *this,BlockedZombie *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  return this;
}

