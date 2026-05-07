// Class: DSchedule


/* DSchedule::update(float) */

void __thiscall DSchedule::update(DSchedule *this,float param_1)

{
  DSchedule DVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (this[0x84] == (DSchedule)0x0) {
    fVar7 = param_1 + *(float *)(this + 0x7c);
    *(float *)(this + 0x7c) = fVar7;
    DVar1 = this[0x85];
  }
  else {
    this[0x84] = (DSchedule)0x0;
    pcVar5 = *(code **)(*(long *)this + 0x10);
    uVar3 = (**(code **)(*(long *)this + 0x18))();
    (*pcVar5)(this,uVar3);
    fVar7 = 0.0;
    DVar1 = this[0x85];
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (DVar1 == (DSchedule)0x0) {
    fVar6 = *(float *)(this + 0x80);
    fVar8 = (float)NEON_fminnm(fVar7 / fVar6,0x3f800000);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (*(code **)(*(long *)this + 0x28) != DAction::timeStep) {
      (**(code **)(*(long *)this + 0x28))(fVar8,this);
      fVar7 = *(float *)(this + 0x7c);
      fVar6 = *(float *)(this + 0x80);
    }
    if (fVar6 <= fVar7) {
      bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x90));
      if (bVar2) {
        std::function<void(float)>::operator()((function<void(float)> *)(this + 0x90),param_1);
      }
      uVar4 = *(ulong *)(this + 0x70);
      if (1 < uVar4) {
        *(ulong *)(this + 0x70) = uVar4 - 1;
        this[0x84] = (DSchedule)0x1;
        return;
      }
      if (uVar4 == 0) {
        this[0x84] = (DSchedule)0x1;
      }
    }
  }
  else if (*(float *)(this + 0x78) <= fVar7) {
    this[0x85] = (DSchedule)0x0;
    pcVar5 = *(code **)(*(long *)this + 0x28);
    *(undefined4 *)(this + 0x7c) = 0;
    if (pcVar5 != DAction::timeStep) {
      (*pcVar5)(this);
      return;
    }
  }
  return;
}


/* DSchedule::DSchedule() */

void __thiscall DSchedule::DSchedule(DSchedule *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DSchedule_06a21d80;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x90));
  return;
}


/* DSchedule::~DSchedule() */

void __thiscall DSchedule::~DSchedule(DSchedule *this)

{
  *(undefined ***)this = &PTR__DSchedule_06a21d80;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DSchedule::~DSchedule() */

void __thiscall DSchedule::~DSchedule(DSchedule *this)

{
  ~DSchedule(this);
  AK::FreeHook(this);
  return;
}


/* DSchedule::TEMPNAMEPLACEHOLDERVALUE(DSchedule const&) */

DSchedule * __thiscall DSchedule::operator=(DSchedule *this,DSchedule *param_1)

{
  DAction::operator=((DAction *)this,(DAction *)param_1);
  std::function<void(float)>::operator=
            ((function<void(float)> *)(this + 0x90),(function *)(param_1 + 0x90));
  return this;
}


/* DSchedule::_copy() const */

DSchedule * __thiscall DSchedule::_copy(DSchedule *this)

{
  DSchedule *this_00;
  
  this_00 = ::operator_new(0xb0);
  DSchedule(this_00);
  operator=(this_00,this);
  return this_00;
}


/* DSchedule::onUpdate(std::function<void (float)> const&) */

DSchedule * __thiscall DSchedule::onUpdate(DSchedule *this,function *param_1)

{
  std::function<void(float)>::operator=((function<void(float)> *)(this + 0x90),param_1);
  return this;
}

