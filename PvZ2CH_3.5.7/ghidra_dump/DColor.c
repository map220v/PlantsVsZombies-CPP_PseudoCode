// Class: DColor


/* DColor::getColor() const */

DColor * __thiscall DColor::getColor(DColor *this)

{
  return this + 8;
}


/* DColor::TEMPNAMEPLACEHOLDERVALUE(DColor const&) */

void __thiscall DColor::operator=(DColor *this,DColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}


/* DColor::setAlpha(int) */

void __thiscall DColor::setAlpha(DColor *this,int param_1)

{
  *(int *)(this + 0x14) = param_1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  return;
}


/* DColor::setColor(Sexy::Color const&) */

void __thiscall DColor::setColor(DColor *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


/* DColor::setColor(int, int, int, int) */

void __thiscall DColor::setColor(DColor *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(int *)(this + 0x14) = param_4;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  return;
}


/* DColor::setRGB(int, int, int) */

void __thiscall DColor::setRGB(DColor *this,int param_1,int param_2,int param_3)

{
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(int *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x10);
  return;
}


/* DColor::DColor() */

void __thiscall DColor::DColor(DColor *this)

{
  *(undefined ***)this = &PTR_setColor_06a224b0;
  Sexy::Color::Color((Color *)(this + 8),1);
  Sexy::Color::Color((Color *)(this + 0x18),1);
  return;
}

