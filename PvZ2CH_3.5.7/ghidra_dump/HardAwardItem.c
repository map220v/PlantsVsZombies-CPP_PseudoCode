// Class: HardAwardItem


/* HardAwardItem::HardAwardItem() */

void __thiscall HardAwardItem::HardAwardItem(HardAwardItem *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Sexy::Point::Point((Point *)(this + 0x1c));
  CurveSegment<Sexy::SexyVector3>::CurveSegment((CurveSegment<Sexy::SexyVector3> *)(this + 0x24));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  return;
}


/* HardAwardItem::HardAwardItem(HardAwardItem const&) */

void __thiscall HardAwardItem::HardAwardItem(HardAwardItem *this,HardAwardItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x1c),(TPoint *)(param_1 + 0x1c));
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  return;
}

