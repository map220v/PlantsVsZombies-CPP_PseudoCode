// Class: CollectedPiece


/* CollectedPiece::CollectedPiece() */

void __thiscall CollectedPiece::CollectedPiece(CollectedPiece *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (CollectedPiece)0x0;
  return;
}

