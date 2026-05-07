// Class: DUpdateAction


/* DUpdateAction::DUpdateAction() */

void __thiscall DUpdateAction::DUpdateAction(DUpdateAction *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DUpdateAction_06a21dd0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x90));
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xb8] = (DUpdateAction)0x1;
  return;
}


/* DUpdateAction::isDone() const */

DUpdateAction __thiscall DUpdateAction::isDone(DUpdateAction *this)

{
  bool bVar1;
  DUpdateAction DVar2;
  
  DVar2 = (DUpdateAction)0x0;
  if ((this[0x85] == (DUpdateAction)0x0) &&
     (DVar2 = (DUpdateAction)0x0, this[0xb8] != (DUpdateAction)0x0)) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x10));
    DVar2 = (DUpdateAction)0x1;
    if (bVar1) {
      std::function<void(DTransformNode*)>::operator()
                ((function<void(DTransformNode*)> *)(this + 0x10),*(DTransformNode **)(this + 0x88))
      ;
      DVar2 = this[0xb8];
    }
  }
  return DVar2;
}


/* DUpdateAction::update(float) */

void __thiscall DUpdateAction::update(DUpdateAction *this,float param_1)

{
  bool bVar1;
  DUpdateAction DVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (this[0x84] == (DUpdateAction)0x0) {
    *(float *)(this + 0x7c) = *(float *)(this + 0x7c) + param_1;
  }
  else {
    this[0x84] = (DUpdateAction)0x0;
    pcVar4 = *(code **)(*(long *)this + 0x10);
    uVar3 = (**(code **)(*(long *)this + 0x18))();
    (*pcVar4)(this,uVar3);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (this[0x85] == (DUpdateAction)0x0) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x90));
    if (bVar1) {
      DVar2 = (DUpdateAction)
              std::function<bool(void*,float)>::operator()
                        ((function<bool(void*,float)> *)(this + 0x90),*(void **)(this + 0xb0),
                         param_1);
      this[0xb8] = DVar2;
      return;
    }
  }
  else if (*(float *)(this + 0x78) <= *(float *)(this + 0x7c)) {
    this[0x85] = (DUpdateAction)0x0;
    *(undefined4 *)(this + 0x7c) = 0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x90));
    if (bVar1) {
      DVar2 = (DUpdateAction)
              std::function<bool(void*,float)>::operator()
                        ((function<bool(void*,float)> *)(this + 0x90),*(void **)(this + 0xb0),0.0);
      this[0xb8] = DVar2;
    }
  }
  return;
}


/* DUpdateAction::setUpdate(void*, std::function<bool (void*, float)> const&) */

DUpdateAction * __thiscall
DUpdateAction::setUpdate(DUpdateAction *this,void *param_1,function *param_2)

{
  std::function<bool(int)>::operator=((function<bool(int)> *)(this + 0x90),param_2);
  *(void **)(this + 0xb0) = param_1;
  return this;
}


/* DUpdateAction::~DUpdateAction() */

void __thiscall DUpdateAction::~DUpdateAction(DUpdateAction *this)

{
  *(undefined ***)this = &PTR__DUpdateAction_06a21dd0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DUpdateAction::~DUpdateAction() */

void __thiscall DUpdateAction::~DUpdateAction(DUpdateAction *this)

{
  ~DUpdateAction(this);
  AK::FreeHook(this);
  return;
}


/* DUpdateAction::TEMPNAMEPLACEHOLDERVALUE(DUpdateAction const&) */

DUpdateAction * __thiscall DUpdateAction::operator=(DUpdateAction *this,DUpdateAction *param_1)

{
  DUpdateAction DVar1;
  
  DAction::operator=((DAction *)this,(DAction *)param_1);
  std::function<bool(int)>::operator=
            ((function<bool(int)> *)(this + 0x90),(function *)(param_1 + 0x90));
  DVar1 = param_1[0xb8];
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  this[0xb8] = DVar1;
  return this;
}


/* DUpdateAction::_copy() const */

DUpdateAction * __thiscall DUpdateAction::_copy(DUpdateAction *this)

{
  DUpdateAction *this_00;
  
  this_00 = ::operator_new(0xc0);
  DUpdateAction(this_00);
  operator=(this_00,this);
  return this_00;
}

