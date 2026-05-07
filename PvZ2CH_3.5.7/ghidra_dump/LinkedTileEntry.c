// Class: LinkedTileEntry


/* LinkedTileEntry::LinkedTileEntry() */

void __thiscall LinkedTileEntry::LinkedTileEntry(LinkedTileEntry *this)

{
  Sexy::Point::Point((Point *)this);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0x447a0000;
  return;
}


/* LinkedTileEntry::LinkedTileEntry(LinkedTileEntry const&) */

void __thiscall LinkedTileEntry::LinkedTileEntry(LinkedTileEntry *this,LinkedTileEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  return;
}

