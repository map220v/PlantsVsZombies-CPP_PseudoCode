// Class: fastdelegate::DelegateMemento


/* fastdelegate::DelegateMemento::SetMementoFrom(fastdelegate::DelegateMemento const&) */

void __thiscall
fastdelegate::DelegateMemento::SetMementoFrom(DelegateMemento *this,DelegateMemento *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}


void __thiscall
fastdelegate::DelegateMemento::SetMementoFrom(DelegateMemento *this,DelegateMemento *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}

