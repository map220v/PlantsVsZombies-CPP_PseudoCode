// Class: Sexy::CharData


/* Sexy::CharData::CharData() */

void __thiscall Sexy::CharData::CharData(CharData *this)

{
  Insets::Insets((Insets *)this);
  Point::Point((Point *)(this + 0x10));
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x1a) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* Sexy::CharData::CharData(Sexy::CharData const&) */

void __thiscall Sexy::CharData::CharData(CharData *this,CharData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  Insets::Insets((Insets *)this,(Insets *)param_1);
  Point::Point((Point *)(this + 0x10),(TPoint *)(param_1 + 0x10));
  uVar3 = *(undefined2 *)(param_1 + 0x18);
  uVar4 = *(undefined2 *)(param_1 + 0x1a);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x18) = uVar3;
  *(undefined2 *)(this + 0x1a) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar2;
  return;
}

