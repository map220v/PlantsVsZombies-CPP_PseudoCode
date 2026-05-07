// Class: DRotate


/* DRotate::timeStep(float) */

void __thiscall DRotate::timeStep(DRotate *this,float param_1)

{
  (**(code **)(**(long **)(this + 0x88) + 0x178))
            (*(float *)(this + 0xa4) + *(float *)(this + 0xac) * param_1,*(long **)(this + 0x88));
  return;
}


/* DRotate::setTarget(DTransformNode*) */

void __thiscall DRotate::setTarget(DRotate *this,DTransformNode *param_1)

{
  float fVar1;
  
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    fVar1 = (float)(**(code **)(*(long *)param_1 + 0x1f0))(param_1);
    DChangeAble<DFade,float>::setInfo((DChangeAble<DFade,float> *)(this + 0x90),fVar1);
    if ((*(uint *)(this + 0x98) & 3) == 0) {
      (**(code **)(*(long *)param_1 + 0x178))(*(undefined4 *)(this + 0xa4),param_1);
      return;
    }
  }
  return;
}


/* DRotate::DRotate() */

void __thiscall DRotate::DRotate(DRotate *this)

{
  DAction::DAction((DAction *)this);
  DChangeAble<DRotate,float>::DChangeAble((DChangeAble<DRotate,float> *)(this + 0x90));
  *(undefined ***)this = &PTR__DRotate_06a21b60;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21bb0;
  return;
}


/* DRotate::~DRotate() */

void __thiscall DRotate::~DRotate(DRotate *this)

{
  *(undefined ***)this = &PTR__DRotate_06a21b60;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21bb0;
  DAction::~DAction((DAction *)this);
  return;
}


/* DRotate::~DRotate() */

void __thiscall DRotate::~DRotate(DRotate *this)

{
  ~DRotate(this);
  AK::FreeHook(this);
  return;
}


/* DRotate::TEMPNAMEPLACEHOLDERVALUE(DRotate const&) */

DRotate * __thiscall DRotate::operator=(DRotate *this,DRotate *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  DChangeAble<DFade,float>::operator=
            ((DChangeAble<DFade,float> *)(this + 0x90),(DChangeAble *)(param_1 + 0x90));
  return this;
}


/* DRotate::_copy() const */

DRotate * __thiscall DRotate::_copy(DRotate *this)

{
  DRotate *this_00;
  
  this_00 = ::operator_new(0xb0);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  DRotate(this_00);
  operator=(this_00,this);
  return this_00;
}

