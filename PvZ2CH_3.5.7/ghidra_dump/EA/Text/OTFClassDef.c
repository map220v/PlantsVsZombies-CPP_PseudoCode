// Class: EA::Text::OTFClassDef


/* EA::Text::OTFClassDef::GetGlyphClass(unsigned short) const */

ushort __thiscall EA::Text::OTFClassDef::GetGlyphClass(OTFClassDef *this,ushort param_1)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar3 = (uint)param_1;
  if (*(short *)this == 2) {
    uVar2 = *(ushort *)(this + 8);
    if (uVar2 != 0) {
      puVar4 = *(ushort **)(this + 0x10);
      puVar1 = puVar4 + ((ulong)(uVar2 - 1) + 1) * 3;
      while ((uVar3 < *puVar4 || (puVar4[1] < uVar3))) {
        puVar4 = puVar4 + 3;
        if (puVar4 == puVar1) {
          return 0;
        }
      }
      return puVar4[2];
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 - *(ushort *)(this + 8) < (uint)*(ushort *)(this + 10)) {
      uVar2 = *(ushort *)(*(long *)(this + 0x10) + (ulong)(uVar3 - *(ushort *)(this + 8)) * 2);
    }
  }
  return uVar2;
}

