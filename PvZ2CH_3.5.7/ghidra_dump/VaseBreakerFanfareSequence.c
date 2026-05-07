// Class: VaseBreakerFanfareSequence


/* VaseBreakerFanfareSequence::IsActive() const */

bool __thiscall VaseBreakerFanfareSequence::IsActive(VaseBreakerFanfareSequence *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 4);
  fVar2 = (float)PVZ_T();
  bVar1 = false;
  if (fVar3 <= fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = fVar2 < *(float *)(this + 8);
  }
  return bVar1;
}

