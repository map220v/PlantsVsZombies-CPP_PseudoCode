// Class: CheatVariable


/* CheatVariable::SetValue(float) */

void __thiscall CheatVariable::SetValue(CheatVariable *this,float param_1)

{
  bool bVar1;
  
  *(float *)(this + 0x58) = param_1;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x18));
  if (!bVar1) {
    return;
  }
  std::function<void(float)>::operator()((function<void(float)> *)(this + 0x18),param_1);
  return;
}


/* CheatVariable::SetValue2(float) */

void __thiscall CheatVariable::SetValue2(CheatVariable *this,float param_1)

{
  bool bVar1;
  
  *(float *)(this + 0x58) = param_1;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x38));
  if (!bVar1) {
    return;
  }
  std::function<void(int,float)>::operator()
            ((function<void(int,float)> *)(this + 0x38),*(int *)(this + 0x5c),param_1);
  return;
}


/* CheatVariable::~CheatVariable() */

void __thiscall CheatVariable::~CheatVariable(CheatVariable *this)

{
  *(undefined ***)this = &PTR_GetClass_06847200;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x38));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x18));
  Cheat::~Cheat((Cheat *)this);
  return;
}


/* CheatVariable::~CheatVariable() */

void __thiscall CheatVariable::~CheatVariable(CheatVariable *this)

{
  ~CheatVariable(this);
  AK::FreeHook(this);
  return;
}


/* CheatVariable::StaticGetClass() */

long * CheatVariable::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatVariable",uVar2,StaticNew);
  return sClass;
}


/* CheatVariable::GetClass() const */

long * CheatVariable::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Cheat::StaticGetClass();
  (*pcVar3)(plVar1,"CheatVariable",uVar2,StaticNew);
  return sClass;
}


/* CheatVariable::CheatVariable() */

void __thiscall CheatVariable::CheatVariable(CheatVariable *this)

{
  Cheat::Cheat((Cheat *)this);
  *(undefined ***)this = &PTR_GetClass_06847200;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x18));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x38));
  return;
}


/* CheatVariable::StaticNew() */

CheatVariable * CheatVariable::StaticNew(void)

{
  CheatVariable *this;
  
  this = ::operator_new(0x60);
  CheatVariable(this);
  return this;
}

