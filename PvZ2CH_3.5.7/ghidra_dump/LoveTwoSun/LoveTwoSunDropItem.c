// Class: LoveTwoSun::LoveTwoSunDropItem


/* LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem(float, Sexy::SexyVector3 const&,
   Sexy::RtWeakPtr<Collectable> const&) */

void __thiscall
LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem
          (LoveTwoSunDropItem *this,float param_1,SexyVector3 *param_2,RtWeakPtr *param_3)

{
  *(undefined8 *)(this + 4) = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)param_3);
  *(float *)this = param_1;
  return;
}


/* LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem() */

void __thiscall LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem(LoveTwoSunDropItem *this)

{
  DVec3::DVec3((DVec3 *)(this + 4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined4 *)this = 0;
  return;
}


/* LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem(LoveTwoSun::LoveTwoSunDropItem const&) */

void __thiscall
LoveTwoSun::LoveTwoSunDropItem::LoveTwoSunDropItem
          (LoveTwoSunDropItem *this,LoveTwoSunDropItem *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* LoveTwoSun::LoveTwoSunDropItem::TEMPNAMEPLACEHOLDERVALUE(LoveTwoSun::LoveTwoSunDropItem&&) */

LoveTwoSunDropItem * __thiscall
LoveTwoSun::LoveTwoSunDropItem::operator=(LoveTwoSunDropItem *this,LoveTwoSunDropItem *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 4),(SexyVector3 *)(param_1 + 4));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  return this;
}

