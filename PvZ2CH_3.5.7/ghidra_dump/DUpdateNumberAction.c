// Class: DUpdateNumberAction


/* DUpdateNumberAction::DUpdateNumberAction() */

void __thiscall DUpdateNumberAction::DUpdateNumberAction(DUpdateNumberAction *this)

{
  DAction::DAction((DAction *)this);
  *(undefined ***)this = &PTR__DUpdateNumberAction_06a21e30;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x90));
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}


/* DUpdateNumberAction::timeStep(float) */

void __thiscall DUpdateNumberAction::timeStep(DUpdateNumberAction *this,float param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0xb8);
  iVar2 = *(int *)(this + 0xb0);
  bVar3 = std::function::operator_cast_to_bool((function *)(this + 0x90));
  if (!bVar3) {
    return;
  }
  std::function<bool(int)>::operator()
            ((function<bool(int)> *)(this + 0x90),(int)((float)iVar2 + (float)iVar1 * param_1));
  return;
}


/* DUpdateNumberAction::setUpdate(int, int, std::function<bool (int)> const&) */

DUpdateNumberAction * __thiscall
DUpdateNumberAction::setUpdate(DUpdateNumberAction *this,int param_1,int param_2,function *param_3)

{
  std::function<bool(int)>::operator=((function<bool(int)> *)(this + 0x90),param_3);
  *(int *)(this + 0xb0) = param_1;
  *(int *)(this + 0xb4) = param_2;
  *(int *)(this + 0xb8) = param_2 - param_1;
  return this;
}


/* DUpdateNumberAction::~DUpdateNumberAction() */

void __thiscall DUpdateNumberAction::~DUpdateNumberAction(DUpdateNumberAction *this)

{
  *(undefined ***)this = &PTR__DUpdateNumberAction_06a21e30;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x90));
  DAction::~DAction((DAction *)this);
  return;
}


/* DUpdateNumberAction::~DUpdateNumberAction() */

void __thiscall DUpdateNumberAction::~DUpdateNumberAction(DUpdateNumberAction *this)

{
  ~DUpdateNumberAction(this);
  AK::FreeHook(this);
  return;
}


/* DUpdateNumberAction::TEMPNAMEPLACEHOLDERVALUE(DUpdateNumberAction const&) */

DUpdateNumberAction * __thiscall
DUpdateNumberAction::operator=(DUpdateNumberAction *this,DUpdateNumberAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAction::operator=((DAction *)this,(DAction *)param_1);
  std::function<bool(int)>::operator=
            ((function<bool(int)> *)(this + 0x90),(function *)(param_1 + 0x90));
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xb0) = uVar1;
  *(undefined4 *)(this + 0xb4) = uVar2;
  return this;
}


/* DUpdateNumberAction::_copy() const */

DUpdateNumberAction * __thiscall DUpdateNumberAction::_copy(DUpdateNumberAction *this)

{
  DUpdateNumberAction *this_00;
  
  this_00 = ::operator_new(0xc0);
  DUpdateNumberAction(this_00);
  operator=(this_00,this);
  return this_00;
}

