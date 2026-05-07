// Class: Sexy::Touch


/* Sexy::Touch::Touch(Sexy::Touch const&) */

void __thiscall Sexy::Touch::Touch(Touch *this,Touch *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  Point::Point((Point *)(this + 0x10),(TPoint *)(param_1 + 0x10));
  Point::Point((Point *)(this + 0x18),(TPoint *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar2;
  return;
}


/* Sexy::Touch::Touch() */

void __thiscall Sexy::Touch::Touch(Touch *this)

{
  Point::Point((Point *)(this + 0x10));
  Point::Point((Point *)(this + 0x18));
  return;
}

