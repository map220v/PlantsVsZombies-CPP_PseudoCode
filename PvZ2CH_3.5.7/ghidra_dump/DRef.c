// Class: DRef


/* DRef::DRef(DRef const&) */

void __thiscall DRef::DRef(DRef *this,DRef *param_1)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_nop_06a23a20;
  return;
}


/* DRef::DRef() */

void __thiscall DRef::DRef(DRef *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_nop_06a23a20;
  return;
}


/* DRef::ref() */

void __thiscall DRef::ref(DRef *this)

{
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}


/* DRef::unref() */

void __thiscall DRef::unref(DRef *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*(long *)this + 8))();
  }
  return;
}

