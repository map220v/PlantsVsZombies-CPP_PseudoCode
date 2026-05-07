// Class: EntitySearch_Lambda


/* EntitySearch_Lambda::~EntitySearch_Lambda() */

void __thiscall EntitySearch_Lambda::~EntitySearch_Lambda(EntitySearch_Lambda *this)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
    (**(code **)(this + 0x10))(this,this,3);
  }
  return;
}


/* EntitySearch_Lambda::Accept(BoardEntity*) */

void __thiscall EntitySearch_Lambda::Accept(EntitySearch_Lambda *this,BoardEntity *param_1)

{
  char cVar1;
  undefined8 *extraout_x0;
  
  cVar1 = FUN_03983b58(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    nop();
    (**(code **)(this + 0x18))(this,*extraout_x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_054738e4();
}


/* EntitySearch_Lambda::EntitySearch_Lambda(std::function<bool (BoardEntity*)>) */

void __thiscall
EntitySearch_Lambda::EntitySearch_Lambda(EntitySearch_Lambda *this,function *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  std::_Function_base::_Function_base((_Function_base *)this);
  bVar1 = std::function::operator_cast_to_bool(param_2);
  if (bVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar2;
    (**(code **)(param_2 + 0x10))(this,param_2,2);
  }
  return;
}


void __thiscall EntitySearch_Lambda::~EntitySearch_Lambda(EntitySearch_Lambda *this)

{
  if (*(code **)(this + 0x10) != (code *)0x0) {
    (**(code **)(this + 0x10))(this,this,3);
  }
  return;
}


void __thiscall
EntitySearch_Lambda::EntitySearch_Lambda(EntitySearch_Lambda *this,function *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  std::_Function_base::_Function_base((_Function_base *)this);
  bVar1 = std::function::operator_cast_to_bool(param_2);
  if (bVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar2;
    (**(code **)(param_2 + 0x10))(this,param_2,2);
  }
  return;
}

