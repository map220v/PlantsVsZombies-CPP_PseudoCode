// Class: DTimerManager::DTimerElement


/* DTimerManager::DTimerElement::~DTimerElement() */

void __thiscall DTimerManager::DTimerElement::~DTimerElement(DTimerElement *this)

{
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x28));
  return;
}


/* DTimerManager::DTimerElement::DTimerElement() */

void __thiscall DTimerManager::DTimerElement::DTimerElement(DTimerElement *this)

{
  *(undefined8 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x18) = 1;
  this[0x20] = (DTimerElement)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x28));
  return;
}


/* DTimerManager::DTimerElement::TEMPNAMEPLACEHOLDERVALUE(DTimerManager::DTimerElement const&) */

DTimerElement * __thiscall
DTimerManager::DTimerElement::operator=(DTimerElement *this,DTimerElement *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x20] = param_1[0x20];
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  std::function<void(float)>::operator=
            ((function<void(float)> *)(this + 0x28),(function *)(param_1 + 0x28));
  return this;
}

