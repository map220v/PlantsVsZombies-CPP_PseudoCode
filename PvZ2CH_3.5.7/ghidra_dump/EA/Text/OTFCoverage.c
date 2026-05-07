// Class: EA::Text::OTFCoverage


/* EA::Text::OTFCoverage::GetCoverageIndex(unsigned short) const */

uint __thiscall EA::Text::OTFCoverage::GetCoverageIndex(OTFCoverage *this,ushort param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  
  if (*(short *)this == 2) {
    if (*(ushort *)(this + 2) != 0) {
      puVar3 = *(ushort **)(this + 8);
      puVar1 = puVar3 + ((ulong)(*(ushort *)(this + 2) - 1) + 1) * 3;
      while( true ) {
        uVar2 = (uint)param_1;
        if ((*puVar3 <= uVar2) && (uVar2 <= puVar3[1])) break;
        puVar3 = puVar3 + 3;
        if (puVar3 == puVar1) {
          return 0xffffffff;
        }
      }
      return (uint)puVar3[2] + (uVar2 - *puVar3);
    }
  }
  else if (*(ushort *)(this + 2) != 0) {
    puVar3 = *(ushort **)(this + 8);
    if (*puVar3 == param_1) {
      return 0;
    }
    uVar2 = 0;
    while( true ) {
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      if (uVar2 == *(ushort *)(this + 2)) break;
      if (*puVar3 == param_1) {
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

