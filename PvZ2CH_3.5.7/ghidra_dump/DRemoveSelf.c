// Class: DRemoveSelf


/* DRemoveSelf::isDone() const */

undefined1 __thiscall DRemoveSelf::isDone(DRemoveSelf *this)

{
  bool bVar1;
  long *plVar2;
  undefined1 uVar3;
  
  if (this[0x85] != (DRemoveSelf)0x0) {
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
      (**(code **)(*plVar2 + 0x60))(plVar2,this[0x90]);
      return 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* DRemoveSelf::DRemoveSelf() */

void __thiscall DRemoveSelf::DRemoveSelf(DRemoveSelf *this)

{
  DAction::DAction((DAction *)this);
  this[0x90] = (DRemoveSelf)0x1;
  *(undefined ***)this = &PTR__DRemoveSelf_06a21e90;
  return;
}


/* DRemoveSelf::~DRemoveSelf() */

void __thiscall DRemoveSelf::~DRemoveSelf(DRemoveSelf *this)

{
  *(undefined ***)this = &PTR__DRemoveSelf_06a21e90;
  DAction::~DAction((DAction *)this);
  return;
}


/* DRemoveSelf::~DRemoveSelf() */

void __thiscall DRemoveSelf::~DRemoveSelf(DRemoveSelf *this)

{
  ~DRemoveSelf(this);
  AK::FreeHook(this);
  return;
}


/* DRemoveSelf::TEMPNAMEPLACEHOLDERVALUE(DRemoveSelf const&) */

DRemoveSelf * __thiscall DRemoveSelf::operator=(DRemoveSelf *this,DRemoveSelf *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  this[0x90] = param_1[0x90];
  return this;
}


/* DRemoveSelf::_copy() const */

DRemoveSelf * __thiscall DRemoveSelf::_copy(DRemoveSelf *this)

{
  DRemoveSelf *this_00;
  
  this_00 = ::operator_new(0x98);
  DRemoveSelf(this_00);
  operator=(this_00,this);
  return this_00;
}

