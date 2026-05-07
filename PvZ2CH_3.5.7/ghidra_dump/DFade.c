// Class: DFade


/* DFade::DFade() */

void __thiscall DFade::DFade(DFade *this)

{
  DAction::DAction((DAction *)this);
  DChangeAble<DFade,float>::DChangeAble((DChangeAble<DFade,float> *)(this + 0x90));
  *(undefined ***)this = &PTR__DFade_06a21c90;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21ce0;
  return;
}


/* DFade::timeStep(float) */

void __thiscall DFade::timeStep(DFade *this,float param_1)

{
  (**(code **)(**(long **)(this + 0x88) + 0x280))
            (*(long **)(this + 0x88),
             (int)((*(float *)(this + 0xa4) + *(float *)(this + 0xac) * param_1) * 255.0));
  return;
}


/* DFade::setTarget(DTransformNode*) */

void __thiscall DFade::setTarget(DFade *this,DTransformNode *param_1)

{
  long lVar1;
  code *pcVar2;
  
  DAction::setTarget((DAction *)this,param_1);
  if (param_1 != (DTransformNode *)0x0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0x20);
    if (pcVar2 == DColor::getColor) {
      lVar1 = DColor::getColor((DColor *)(param_1 + 0x10));
    }
    else {
      lVar1 = (*pcVar2)();
    }
    DChangeAble<DFade,float>::setInfo
              ((DChangeAble<DFade,float> *)(this + 0x90),(float)*(int *)(lVar1 + 0xc) * 0.003921569)
    ;
    if ((*(uint *)(this + 0x98) & 3) == 0) {
      (**(code **)(*(long *)param_1 + 0x280))(param_1,(int)(*(float *)(this + 0xa4) * 255.0));
      return;
    }
  }
  return;
}


/* DFade::~DFade() */

void __thiscall DFade::~DFade(DFade *this)

{
  *(undefined ***)this = &PTR__DFade_06a21c90;
  *(undefined ***)(this + 0x90) = &PTR_from_06a21ce0;
  DAction::~DAction((DAction *)this);
  return;
}


/* DFade::~DFade() */

void __thiscall DFade::~DFade(DFade *this)

{
  ~DFade(this);
  AK::FreeHook(this);
  return;
}


/* DFade::_copy() const */

DFade * __thiscall DFade::_copy(DFade *this)

{
  DFade *this_00;
  
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
  DFade(this_00);
  DRotate::operator=((DRotate *)this_00,(DRotate *)this);
  return this_00;
}

