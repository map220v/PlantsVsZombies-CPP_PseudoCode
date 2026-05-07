// Class: DAction


/* DAction::setDuration(float) */

void __thiscall DAction::setDuration(DAction *this,float param_1)

{
  *(float *)(this + 0x80) = param_1;
  return;
}


/* DAction::onDone(std::function<void (DTransformNode*)> const&) */

DAction * __thiscall DAction::onDone(DAction *this,function *param_1)

{
  std::function<void(DTransformNode*)>::operator=
            ((function<void(DTransformNode*)> *)(this + 0x10),param_1);
  return this;
}


/* DAction::setDelayTime(float) */

void __thiscall DAction::setDelayTime(DAction *this,float param_1)

{
  *(float *)(this + 0x78) = param_1;
  this[0x85] = (DAction)(0.0 < param_1);
  return;
}


/* DAction::setTween(DTween::TweenType) */

DAction * __thiscall DAction::setTween(DAction *this,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(this + 0x48) = param_2;
  lVar1 = FUN_03cc4360(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
  if (lVar1 != 0) {
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x30));
  }
  return this;
}


/* DAction::setTween(std::function<float (float)> const&) */

DAction * __thiscall DAction::setTween(DAction *this,function *param_1)

{
  std::function<float(float)>::operator=((function<float(float)> *)(this + 0x50),param_1);
  return this;
}


/* DAction::timeStep(float) */

void DAction::timeStep(float param_1)

{
  return;
}


/* DAction::setTarget(DTransformNode*) */

void __thiscall DAction::setTarget(DAction *this,DTransformNode *param_1)

{
  *(DTransformNode **)(this + 0x88) = param_1;
  return;
}


/* DAction::getTarget() const */

undefined8 __thiscall DAction::getTarget(DAction *this)

{
  return *(undefined8 *)(this + 0x88);
}


/* DAction::isDone() const */

undefined8 __thiscall DAction::isDone(DAction *this)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (this[0x85] == (DAction)0x0) {
    uVar2 = 0;
    if ((*(long *)(this + 0x70) == 1) && (*(float *)(this + 0x80) <= *(float *)(this + 0x7c))) {
      bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
      if (bVar1) {
        std::function<void(DTransformNode*)>::operator()
                  ((function<void(DTransformNode*)> *)(this + 0x10),
                   *(DTransformNode **)(this + 0x88));
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  return 0;
}


/* DAction::DAction() */

void __thiscall DAction::DAction(DAction *this)

{
  DRef::DRef((DRef *)this);
  *(undefined ***)this = &PTR__DAction_06a21960;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x50));
  this[0x85] = (DAction)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 1;
  this[0x84] = (DAction)0x1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}


/* DAction::update(float) */

void __thiscall DAction::update(DAction *this,float param_1)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (this[0x84] == (DAction)0x0) {
    fVar4 = param_1 + *(float *)(this + 0x7c);
    *(float *)(this + 0x7c) = fVar4;
  }
  else {
    this[0x84] = (DAction)0x0;
    pcVar3 = *(code **)(*(long *)this + 0x10);
    uVar5 = (**(code **)(*(long *)this + 0x18))();
    (*pcVar3)(this,uVar5);
    fVar4 = 0.0;
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (this[0x85] == (DAction)0x0) {
    fVar6 = *(float *)(this + 0x80);
    if (*(float *)(this + 0x80) <= 1.1920929e-07) {
      fVar6 = 1.1920929e-07;
    }
    fVar4 = (float)NEON_fminnm(fVar4 / fVar6,0x3f800000);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x50));
    if (bVar1) {
      uVar5 = std::function<float(float)>::operator()((function<float(float)> *)(this + 0x50),fVar4)
      ;
    }
    else {
      uVar5 = DTween::tweenTo(*(undefined4 *)(this + 0x48),this + 0x30);
    }
    if (*(float *)(this + 0x80) <= *(float *)(this + 0x7c)) {
      uVar2 = *(ulong *)(this + 0x70);
      if (uVar2 < 2) {
        uVar5 = 0x3f800000;
        if (uVar2 == 0) {
          this[0x84] = (DAction)0x1;
        }
      }
      else {
        *(ulong *)(this + 0x70) = uVar2 - 1;
        uVar5 = 0x3f800000;
        this[0x84] = (DAction)0x1;
      }
    }
    (**(code **)(*(long *)this + 0x28))(uVar5,this);
    return;
  }
  if (fVar4 < *(float *)(this + 0x78)) {
    return;
  }
  this[0x85] = (DAction)0x0;
  pcVar3 = *(code **)(*(long *)this + 0x28);
  *(undefined4 *)(this + 0x7c) = 0;
  (*pcVar3)(0,this);
  return;
}


/* DAction::~DAction() */

void __thiscall DAction::~DAction(DAction *this)

{
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)this = &PTR__DAction_06a21960;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x50));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x10));
  nop();
  return;
}


/* DAction::~DAction() */

void __thiscall DAction::~DAction(DAction *this)

{
  ~DAction(this);
  AK::FreeHook(this);
  return;
}


/* DAction::TEMPNAMEPLACEHOLDERVALUE(DAction const&) */

DAction * __thiscall DAction::operator=(DAction *this,DAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  DAction DVar4;
  DAction DVar5;
  undefined8 uVar6;
  
  FUN_04f68518(this,*(undefined4 *)(param_1 + 8));
  std::function<void(DTransformNode*)>::operator=
            ((function<void(DTransformNode*)> *)(this + 0x10),(function *)(param_1 + 0x10));
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  std::function<float(float)>::operator=
            ((function<float(float)> *)(this + 0x50),(function *)(param_1 + 0x50));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  DVar4 = param_1[0x84];
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  DVar5 = param_1[0x85];
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x70) = uVar6;
  this[0x84] = DVar4;
  this[0x85] = DVar5;
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  return this;
}


/* DAction::_copy() const */

DAction * __thiscall DAction::_copy(DAction *this)

{
  DAction *this_00;
  
  this_00 = ::operator_new(0x90);
  DAction(this_00);
  operator=(this_00,this);
  return this_00;
}

