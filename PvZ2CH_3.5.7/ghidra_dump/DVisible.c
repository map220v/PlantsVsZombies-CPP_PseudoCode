// Class: DVisible


/* DVisible::setVisible(bool) */

void __thiscall DVisible::setVisible(DVisible *this,bool param_1)

{
  this[0x90] = (DVisible)param_1;
  return;
}


/* DVisible::update(float) */

void __thiscall DVisible::update(DVisible *this,float param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  
  if (this[0x84] == (DVisible)0x0) {
    fVar4 = param_1 + *(float *)(this + 0x7c);
    *(float *)(this + 0x7c) = fVar4;
  }
  else {
    this[0x84] = (DVisible)0x0;
    pcVar3 = *(code **)(*(long *)this + 0x10);
    uVar2 = (**(code **)(*(long *)this + 0x18))();
    (*pcVar3)(this,uVar2);
    fVar4 = 0.0;
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (this[0x85] == (DVisible)0x0) {
    if (*(float *)(this + 0x80) <= fVar4) {
      uVar1 = *(ulong *)(this + 0x70);
      if (1 < uVar1) {
        *(ulong *)(this + 0x70) = uVar1 - 1;
        this[0x84] = (DVisible)0x1;
        return;
      }
      if (uVar1 == 0) {
        this[0x84] = (DVisible)0x1;
      }
    }
  }
  else if (*(float *)(this + 0x78) <= fVar4) {
    this[0x85] = (DVisible)0x0;
    *(undefined4 *)(this + 0x7c) = 0;
  }
  return;
}


/* DVisible::isDone() const */

undefined1 __thiscall DVisible::isDone(DVisible *this)

{
  bool bVar1;
  long *plVar2;
  undefined1 uVar3;
  
  if (this[0x85] != (DVisible)0x0) {
    return 0;
  }
  uVar3 = 0;
  if ((*(long *)(this + 0x70) == 1) && (*(float *)(this + 0x80) <= *(float *)(this + 0x7c))) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
    if (bVar1) {
      std::function<void(DTransformNode*)>::operator()
                ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88))
      ;
    }
    plVar2 = *(long **)(this + 0x88);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xd8))(plVar2,this[0x90]);
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* DVisible::DVisible() */

void __thiscall DVisible::DVisible(DVisible *this)

{
  DAction::DAction((DAction *)this);
  this[0x90] = (DVisible)0x1;
  *(undefined ***)this = &PTR__DVisible_06a21ef0;
  return;
}


/* DVisible::~DVisible() */

void __thiscall DVisible::~DVisible(DVisible *this)

{
  *(undefined ***)this = &PTR__DVisible_06a21ef0;
  DAction::~DAction((DAction *)this);
  return;
}


/* DVisible::~DVisible() */

void __thiscall DVisible::~DVisible(DVisible *this)

{
  ~DVisible(this);
  AK::FreeHook(this);
  return;
}


/* DVisible::_copy() const */

DVisible * __thiscall DVisible::_copy(DVisible *this)

{
  DVisible *this_00;
  
  this_00 = ::operator_new(0x98);
  DVisible(this_00);
  DRemoveSelf::operator=((DRemoveSelf *)this_00,(DRemoveSelf *)this);
  return this_00;
}

