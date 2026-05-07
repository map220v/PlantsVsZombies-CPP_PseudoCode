// Class: ZombiePoolItem


/* ZombiePoolItem::ZombiePoolItem(ZombiePoolItem const&) */

void __thiscall ZombiePoolItem::ZombiePoolItem(ZombiePoolItem *this,ZombiePoolItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* ZombiePoolItem::TEMPNAMEPLACEHOLDERVALUE(ZombiePoolItem const&) */

ZombiePoolItem * __thiscall ZombiePoolItem::operator=(ZombiePoolItem *this,ZombiePoolItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  return this;
}

