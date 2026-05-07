// Class: Sexy::PAObjectInst


/* Sexy::PAObjectInst::PAObjectInst() */

void __thiscall Sexy::PAObjectInst::PAObjectInst(PAObjectInst *this)

{
  Color::Color((Color *)(this + 0x10));
  PATransform::PATransform((PATransform *)(this + 0x20));
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x38] = (PAObjectInst)0x0;
  return;
}


/* Sexy::PAObjectInst::PAObjectInst(Sexy::PAObjectInst const&) */

void __thiscall Sexy::PAObjectInst::PAObjectInst(PAObjectInst *this,PAObjectInst *param_1)

{
  PAObjectInst PVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  Insets::Insets((Insets *)(this + 0x10),(Insets *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  PVar1 = param_1[0x38];
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  this[0x38] = PVar1;
  return;
}

