// Class: MapPath


/* MapPath::MapPath() */

void __thiscall MapPath::MapPath(MapPath *this)

{
  undefined4 uVar1;
  
  *this = (MapPath)0x0;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

