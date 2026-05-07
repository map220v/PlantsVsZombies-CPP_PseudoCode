// Class: WormRecord


/* WormRecord::WormRecord(WormRecord const&) */

void __thiscall WormRecord::WormRecord(WormRecord *this,WormRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}


/* WormRecord::WormRecord() */

void __thiscall WormRecord::WormRecord(WormRecord *this)

{
  Sexy::Point::Point((Point *)this);
  Sexy::Point::Point((Point *)(this + 8));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

