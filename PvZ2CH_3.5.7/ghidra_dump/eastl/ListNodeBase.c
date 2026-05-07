// Class: eastl::ListNodeBase


/* eastl::ListNodeBase::insert(eastl::ListNodeBase*) */

void __thiscall eastl::ListNodeBase::insert(ListNodeBase *this,ListNodeBase *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(ListNodeBase **)this = param_1;
  **(undefined8 **)(param_1 + 8) = this;
  *(ListNodeBase **)(param_1 + 8) = this;
  return;
}


/* eastl::ListNodeBase::remove() */

void __thiscall eastl::ListNodeBase::remove(ListNodeBase *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(this + 8);
  **(long **)(this + 8) = lVar1;
  return;
}

