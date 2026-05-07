// Class: RenderItem


/* RenderItem::RenderItem(RenderItem&&) */

void __thiscall RenderItem::RenderItem(RenderItem *this,RenderItem *param_1)

{
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1((Delegate1<Sexy::Graphics*> *)this,param_1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}


/* RenderItem::RenderItem() */

void __thiscall RenderItem::RenderItem(RenderItem *this)

{
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1((DummyInit *)this);
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* RenderItem::TEMPNAMEPLACEHOLDERVALUE(RenderItem&&) */

RenderItem * __thiscall RenderItem::operator=(RenderItem *this,RenderItem *param_1)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)this,(Delegate2 *)param_1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}

