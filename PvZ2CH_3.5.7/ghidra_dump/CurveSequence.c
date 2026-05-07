// Class: CurveSequence<float>


/* CurveSequence<float>::getStartValue() const */

undefined4 __thiscall CurveSequence<float>::getStartValue(CurveSequence<float> *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_03629cb8(*(undefined8 *)this,0);
  return *puVar1;
}


/* CurveSequence<float>::getEndValue() const */

undefined4 __thiscall CurveSequence<float>::getEndValue(CurveSequence<float> *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_03629bcc(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_03629cb8(uVar2,lVar1 + -1);
  return *(undefined4 *)(lVar1 + 4);
}


/* CurveSequence<float>::isTimeBeforeStart(float) const */

char __thiscall CurveSequence<float>::isTimeBeforeStart(CurveSequence<float> *this,float param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = std::vector<CurveSegment<float>,std::allocator<CurveSegment<float>>>::empty
                    ((vector<CurveSegment<float>,std::allocator<CurveSegment<float>>> *)this);
  if (cVar1 == '\0') {
    lVar2 = FUN_03629cb8(*(undefined8 *)this,0);
    cVar1 = param_1 < *(float *)(lVar2 + 8);
  }
  return cVar1;
}


/* CurveSequence<float>::isTimeAfterEnd(float) const */

char __thiscall CurveSequence<float>::isTimeAfterEnd(CurveSequence<float> *this,float param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = std::vector<CurveSegment<float>,std::allocator<CurveSegment<float>>>::empty
                    ((vector<CurveSegment<float>,std::allocator<CurveSegment<float>>> *)this);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)this;
    lVar2 = FUN_03629bcc(uVar3,*(undefined8 *)(this + 8));
    lVar2 = FUN_03629cb8(uVar3,lVar2 + -1);
    cVar1 = *(float *)(lVar2 + 0xc) <= param_1;
  }
  return cVar1;
}


/* CurveSequence<float>::findSegmentAt(float) const */

long __thiscall CurveSequence<float>::findSegmentAt(CurveSequence<float> *this,float param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<CurveSegment<float>,std::allocator<CurveSegment<float>>>::empty
                    ((vector<CurveSegment<float>,std::allocator<CurveSegment<float>>> *)this);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)this;
    lVar2 = FUN_03629cb8(uVar5,0);
    if (*(float *)(lVar2 + 8) <= param_1) {
      lVar3 = FUN_03629bcc(uVar5,*(undefined8 *)(this + 8));
      lVar2 = 0;
      while (lVar2 != lVar3) {
        lVar4 = FUN_03629cb8(uVar5,lVar2);
        lVar2 = lVar2 + 1;
        if (param_1 < *(float *)(lVar4 + 0xc)) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}


/* CurveSequence<float>::GetValueAt(float) const */

void __thiscall CurveSequence<float>::GetValueAt(CurveSequence<float> *this,float param_1)

{
  char cVar1;
  CurveSegment<float> *this_00;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  if (cVar1 != '\0') {
    getStartValue(this);
    return;
  }
  cVar1 = isTimeAfterEnd(this,param_1);
  if (cVar1 != '\0') {
    getEndValue(this);
    return;
  }
  this_00 = (CurveSegment<float> *)findSegmentAt(this,param_1);
  CurveSegment<float>::GetValueAt(this_00,param_1);
  return;
}


/* CurveSequence<float>::~CurveSequence() */

void __thiscall CurveSequence<float>::~CurveSequence(CurveSequence<float> *this)

{
  FUN_03629d64(*(undefined8 *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<float>::StartSequence(float, float const&) */

void __thiscall
CurveSequence<float>::StartSequence(CurveSequence<float> *this,float param_1,float *param_2)

{
  CurveSegment aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CurveSegment<float>,std::allocator<CurveSegment<float>>>::clear
            ((vector<CurveSegment<float>,std::allocator<CurveSegment<float>>> *)this);
  FUN_03629bb0(*param_2,param_1,param_1,aCStack_20,param_2,0);
  std::vector<CurveSegment<float>,std::allocator<CurveSegment<float>>>::push_back
            ((vector<CurveSegment<float>,std::allocator<CurveSegment<float>>> *)this,aCStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurveSequence<Sexy::SexyVector3>::getStartValue() const */

undefined4 __thiscall
CurveSequence<Sexy::SexyVector3>::getStartValue(CurveSequence<Sexy::SexyVector3> *this)

{
  undefined8 *puVar1;
  undefined4 local_10;
  
  puVar1 = (undefined8 *)FUN_0362c3b0(*(undefined8 *)this,0);
  local_10 = (undefined4)*puVar1;
  return local_10;
}


/* CurveSequence<Sexy::SexyVector3>::getEndValue() const */

undefined4 __thiscall
CurveSequence<Sexy::SexyVector3>::getEndValue(CurveSequence<Sexy::SexyVector3> *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_10;
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_0362c35c(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_0362c3b0(uVar2,lVar1 + -1);
  local_10 = (undefined4)*(undefined8 *)(lVar1 + 0xc);
  return local_10;
}


/* CurveSequence<Sexy::SexyVector3>::~CurveSequence() */

void __thiscall
CurveSequence<Sexy::SexyVector3>::~CurveSequence(CurveSequence<Sexy::SexyVector3> *this)

{
  FUN_0362c3cc(*(undefined8 *)this);
  return;
}


/* CurveSequence<Sexy::SexyVector3>::isTimeBeforeStart(float) const */

char __thiscall
CurveSequence<Sexy::SexyVector3>::isTimeBeforeStart
          (CurveSequence<Sexy::SexyVector3> *this,float param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
          empty((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
                 *)this);
  if (cVar1 == '\0') {
    lVar2 = FUN_0362c3b0(*(undefined8 *)this,0);
    cVar1 = param_1 < *(float *)(lVar2 + 0x18);
  }
  return cVar1;
}


/* CurveSequence<Sexy::SexyVector3>::isTimeAfterEnd(float) const */

char __thiscall
CurveSequence<Sexy::SexyVector3>::isTimeAfterEnd
          (CurveSequence<Sexy::SexyVector3> *this,float param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
          empty((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
                 *)this);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)this;
    lVar2 = FUN_0362c35c(uVar3,*(undefined8 *)(this + 8));
    lVar2 = FUN_0362c3b0(uVar3,lVar2 + -1);
    cVar1 = *(float *)(lVar2 + 0x1c) <= param_1;
  }
  return cVar1;
}


/* CurveSequence<Sexy::SexyVector3>::IsTimeInSequence(float) const */

byte __thiscall
CurveSequence<Sexy::SexyVector3>::IsTimeInSequence
          (CurveSequence<Sexy::SexyVector3> *this,float param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = isTimeAfterEnd(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* CurveSequence<Sexy::SexyVector3>::findSegmentAt(float) const */

long __thiscall
CurveSequence<Sexy::SexyVector3>::findSegmentAt
          (CurveSequence<Sexy::SexyVector3> *this,float param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
          empty((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
                 *)this);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)this;
    lVar2 = FUN_0362c3b0(uVar5,0);
    if (*(float *)(lVar2 + 0x18) <= param_1) {
      lVar3 = FUN_0362c35c(uVar5,*(undefined8 *)(this + 8));
      lVar2 = 0;
      while (lVar2 != lVar3) {
        lVar4 = FUN_0362c3b0(uVar5,lVar2);
        lVar2 = lVar2 + 1;
        if (param_1 < *(float *)(lVar4 + 0x1c)) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}


/* CurveSequence<Sexy::SexyVector3>::GetValueAt(float) const */

undefined4 __thiscall
CurveSequence<Sexy::SexyVector3>::GetValueAt(CurveSequence<Sexy::SexyVector3> *this,float param_1)

{
  char cVar1;
  CurveSegment<Sexy::SexyVector3> *this_00;
  undefined4 uVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  if (cVar1 != '\0') {
    uVar2 = getStartValue(this);
    return uVar2;
  }
  cVar1 = isTimeAfterEnd(this,param_1);
  if (cVar1 != '\0') {
    uVar2 = getEndValue(this);
    return uVar2;
  }
  this_00 = (CurveSegment<Sexy::SexyVector3> *)findSegmentAt(this,param_1);
  uVar2 = CurveSegment<Sexy::SexyVector3>::GetValueAt(this_00,param_1);
  return uVar2;
}


/* CurveSequence<Sexy::SexyVector3>::TEMPNAMEPLACEHOLDERVALUE(CurveSequence<Sexy::SexyVector3>
   const&) */

CurveSequence<Sexy::SexyVector3> * __thiscall
CurveSequence<Sexy::SexyVector3>::operator=
          (CurveSequence<Sexy::SexyVector3> *this,CurveSequence *param_1)

{
  std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
  operator=((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
             *)this,(vector *)param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::SexyVector3>::StartSequence(float, Sexy::SexyVector3 const&) */

void __thiscall
CurveSequence<Sexy::SexyVector3>::StartSequence
          (CurveSequence<Sexy::SexyVector3> *this,float param_1,SexyVector3 *param_2)

{
  undefined4 in_register_00005004;
  CurveSegment<Sexy::SexyVector3> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
  clear((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>> *)
        this);
  CurveSegment<Sexy::SexyVector3>::CurveSegment(aCStack_30);
  CurveSegment<Sexy::SexyVector3>::Set
            ((CurveSegment<Sexy::SexyVector3> *)CONCAT44(in_register_00005004,param_1),param_1,
             aCStack_30,param_2,param_2,0);
  std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
  push_back((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
             *)this,(CurveSegment *)aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::SexyVector3>::AddCurve(float, Sexy::SexyVector3 const&, Sexy::SexyVector3
   const&, CurveType) */

void __thiscall
CurveSequence<Sexy::SexyVector3>::AddCurve
          (float param_1,CurveSequence<Sexy::SexyVector3> *this,undefined8 param_2,
          undefined8 param_3,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  CurveSegment<Sexy::SexyVector3> *pCVar3;
  CurveSegment<Sexy::SexyVector3> aCStack_30 [40];
  long local_8;
  
  uVar2 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0362c35c(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_0362c37c(uVar2,lVar1 + -1);
                    /* WARNING: Load size is inaccurate */
  pCVar3._0_4_ = *(CurveSegment<Sexy::SexyVector3> **)(lVar1 + 0x1c);
  CurveSegment<Sexy::SexyVector3>::CurveSegment(aCStack_30);
  CurveSegment<Sexy::SexyVector3>::Set
            (pCVar3._0_4_,param_1 + (float)pCVar3._0_4_,aCStack_30,param_2,param_3,param_5);
  std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
  push_back((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
             *)this,(CurveSegment *)aCStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurveSequence<Sexy::SexyVector2>::getStartValue() const */

undefined1  [16] __thiscall
CurveSequence<Sexy::SexyVector2>::getStartValue(CurveSequence<Sexy::SexyVector2> *this)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = (ulong *)FUN_03676fdc(*(undefined8 *)this,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *puVar1 & 0xffffffff;
  return auVar2;
}


/* CurveSequence<Sexy::SexyVector2>::getEndValue() const */

undefined1  [16] __thiscall
CurveSequence<Sexy::SexyVector2>::getEndValue(CurveSequence<Sexy::SexyVector2> *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_03676fa4(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_03676fdc(uVar2,lVar1 + -1);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulong *)(lVar1 + 8) & 0xffffffff;
  return auVar3;
}


/* CurveSequence<Sexy::SexyVector2>::isTimeBeforeStart(float) const */

char __thiscall
CurveSequence<Sexy::SexyVector2>::isTimeBeforeStart
          (CurveSequence<Sexy::SexyVector2> *this,float param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
          empty((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>
                 *)this);
  if (cVar1 == '\0') {
    lVar2 = FUN_03676fdc(*(undefined8 *)this,0);
    cVar1 = param_1 < *(float *)(lVar2 + 0x10);
  }
  return cVar1;
}


/* CurveSequence<Sexy::SexyVector2>::isTimeAfterEnd(float) const */

char __thiscall
CurveSequence<Sexy::SexyVector2>::isTimeAfterEnd
          (CurveSequence<Sexy::SexyVector2> *this,float param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
          empty((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>
                 *)this);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)this;
    lVar2 = FUN_03676fa4(uVar3,*(undefined8 *)(this + 8));
    lVar2 = FUN_03676fdc(uVar3,lVar2 + -1);
    cVar1 = *(float *)(lVar2 + 0x14) <= param_1;
  }
  return cVar1;
}


/* CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(float) const */

byte __thiscall
CurveSequence<Sexy::SexyVector2>::IsTimeInSequence
          (CurveSequence<Sexy::SexyVector2> *this,float param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = isTimeAfterEnd(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* CurveSequence<Sexy::SexyVector2>::findSegmentAt(float) const */

long __thiscall
CurveSequence<Sexy::SexyVector2>::findSegmentAt
          (CurveSequence<Sexy::SexyVector2> *this,float param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::
          vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
          empty((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>
                 *)this);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)this;
    lVar2 = FUN_03676fdc(uVar5,0);
    if (*(float *)(lVar2 + 0x10) <= param_1) {
      lVar3 = FUN_03676fa4(uVar5,*(undefined8 *)(this + 8));
      lVar2 = 0;
      while (lVar2 != lVar3) {
        lVar4 = FUN_03676fdc(uVar5,lVar2);
        lVar2 = lVar2 + 1;
        if (param_1 < *(float *)(lVar4 + 0x14)) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}


/* CurveSequence<Sexy::SexyVector2>::~CurveSequence() */

void __thiscall
CurveSequence<Sexy::SexyVector2>::~CurveSequence(CurveSequence<Sexy::SexyVector2> *this)

{
  FUN_036770a8(*(undefined8 *)this);
  return;
}


/* CurveSequence<Sexy::SexyVector2>::GetValueAt(float) const */

undefined4 __thiscall
CurveSequence<Sexy::SexyVector2>::GetValueAt(CurveSequence<Sexy::SexyVector2> *this,float param_1)

{
  char cVar1;
  CurveSegment<Sexy::SexyVector2> *this_00;
  undefined4 uVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  if (cVar1 != '\0') {
    uVar2 = getStartValue(this);
    return uVar2;
  }
  cVar1 = isTimeAfterEnd(this,param_1);
  if (cVar1 != '\0') {
    uVar2 = getEndValue(this);
    return uVar2;
  }
  this_00 = (CurveSegment<Sexy::SexyVector2> *)findSegmentAt(this,param_1);
  uVar2 = CurveSegment<Sexy::SexyVector2>::GetValueAt(this_00,param_1);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::SexyVector2>::StartSequence(float, Sexy::SexyVector2 const&) */

void __thiscall
CurveSequence<Sexy::SexyVector2>::StartSequence
          (CurveSequence<Sexy::SexyVector2> *this,float param_1,SexyVector2 *param_2)

{
  undefined4 in_register_00005004;
  FanCardData aFStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
  clear((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>> *)
        this);
  FanCardData::FanCardData(aFStack_28);
  CurveSegment<Sexy::SexyVector2>::Set
            ((CurveSegment<Sexy::SexyVector2> *)CONCAT44(in_register_00005004,param_1),param_1,
             aFStack_28,param_2,param_2,0);
  std::vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
  push_back((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>
             *)this,(CurveSegment *)aFStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::SexyVector2>::AddCurve(float, Sexy::SexyVector2 const&, Sexy::SexyVector2
   const&, CurveType) */

void __thiscall
CurveSequence<Sexy::SexyVector2>::AddCurve
          (float param_1,CurveSequence<Sexy::SexyVector2> *this,undefined8 param_2,
          undefined8 param_3,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  CurveSegment<Sexy::SexyVector2> *pCVar3;
  FanCardData aFStack_28 [32];
  long local_8;
  
  uVar2 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03676fa4(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_03676fc4(uVar2,lVar1 + -1);
                    /* WARNING: Load size is inaccurate */
  pCVar3._0_4_ = *(CurveSegment<Sexy::SexyVector2> **)(lVar1 + 0x14);
  FanCardData::FanCardData(aFStack_28);
  CurveSegment<Sexy::SexyVector2>::Set
            (pCVar3._0_4_,param_1 + (float)pCVar3._0_4_,aFStack_28,param_2,param_3,param_5);
  std::vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>::
  push_back((vector<CurveSegment<Sexy::SexyVector2>,std::allocator<CurveSegment<Sexy::SexyVector2>>>
             *)this,(CurveSegment *)aFStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03772384 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CurveSequence<Sexy::SexyVector3>::CurveSequence(CurveSequence<Sexy::SexyVector3> const&) */

void __thiscall
CurveSequence<Sexy::SexyVector3>::CurveSequence
          (CurveSequence<Sexy::SexyVector3> *this,CurveSequence *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  CurveSegment *pCVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_03724900(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
  ::_Vector_base((ulong)this,paVar2);
  FUN_037522b0(*(undefined8 *)param_1);
  uVar3 = FUN_03752300(*(undefined8 *)(param_1 + 8));
  pCVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<CurveSegment<Sexy::SexyVector3>const*,std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>>,CurveSegment<Sexy::SexyVector3>*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(CurveSegment **)(this + 8) = pCVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurveSequence<float>::IsTimeInSequence(float) const */

byte __thiscall CurveSequence<float>::IsTimeInSequence(CurveSequence<float> *this,float param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = isTimeAfterEnd(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* CurveSequence<float>::operator[](float) const */

void __thiscall CurveSequence<float>::operator[](CurveSequence<float> *this,float param_1)

{
  char cVar1;
  CurveSegment<float> *this_00;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  if (cVar1 != '\0') {
    getStartValue(this);
    return;
  }
  cVar1 = isTimeAfterEnd(this,param_1);
  if (cVar1 != '\0') {
    getEndValue(this);
    return;
  }
  this_00 = (CurveSegment<float> *)findSegmentAt(this,param_1);
  CurveSegment<float>::GetValueAt(this_00,param_1);
  return;
}


/* CurveSequence<float>::AddCurve(float, float const&, CurveType) */

void __thiscall
CurveSequence<float>::AddCurve
          (undefined8 param_1,CurveSequence<float> *this,undefined8 param_2,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_03cd47a0(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_03cd47b4(uVar2,lVar1 + -1);
  FUN_03cd4c58(param_1,*(undefined4 *)(lVar1 + 4),this,param_2,param_4);
  return;
}


/* CurveSequence<Sexy::Color>::~CurveSequence() */

void __thiscall CurveSequence<Sexy::Color>::~CurveSequence(CurveSequence<Sexy::Color> *this)

{
  FUN_044a9238(*(undefined8 *)this);
  return;
}


/* CurveSequence<Sexy::Color>::Clear() */

void __thiscall CurveSequence<Sexy::Color>::Clear(CurveSequence<Sexy::Color> *this)

{
  FUN_044a9228(this + 8,*(undefined8 *)this);
  return;
}


/* CurveSequence<Sexy::Color>::getStartValue() const */

void CurveSequence<Sexy::Color>::getStartValue(void)

{
  undefined8 *in_x0;
  Insets *pIVar1;
  Insets *in_x8;
  
  pIVar1 = (Insets *)FUN_0470de58(*in_x0,0);
  Sexy::Insets::Insets(in_x8,pIVar1);
  return;
}


/* CurveSequence<Sexy::Color>::getEndValue() const */

void CurveSequence<Sexy::Color>::getEndValue(void)

{
  undefined8 *in_x0;
  long lVar1;
  Insets *in_x8;
  undefined8 uVar2;
  
  uVar2 = *in_x0;
  lVar1 = FUN_0470dd68(uVar2,in_x0[1]);
  lVar1 = FUN_0470de58(uVar2,lVar1 + -1);
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar1 + 0x10));
  return;
}


/* CurveSequence<Sexy::Color>::isTimeBeforeStart(float) const */

char __thiscall
CurveSequence<Sexy::Color>::isTimeBeforeStart(CurveSequence<Sexy::Color> *this,float param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::empty
                    ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)
                     this);
  if (cVar1 == '\0') {
    lVar2 = FUN_0470de58(*(undefined8 *)this,0);
    cVar1 = param_1 < *(float *)(lVar2 + 0x20);
  }
  return cVar1;
}


/* CurveSequence<Sexy::Color>::isTimeAfterEnd(float) const */

char __thiscall
CurveSequence<Sexy::Color>::isTimeAfterEnd(CurveSequence<Sexy::Color> *this,float param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  cVar1 = std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::empty
                    ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)
                     this);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)this;
    lVar2 = FUN_0470dd68(uVar3,*(undefined8 *)(this + 8));
    lVar2 = FUN_0470de58(uVar3,lVar2 + -1);
    cVar1 = *(float *)(lVar2 + 0x24) <= param_1;
  }
  return cVar1;
}


/* CurveSequence<Sexy::Color>::IsTimeInSequence(float) const */

byte __thiscall
CurveSequence<Sexy::Color>::IsTimeInSequence(CurveSequence<Sexy::Color> *this,float param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = isTimeBeforeStart(this,param_1);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = isTimeAfterEnd(this,param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* CurveSequence<Sexy::Color>::findSegmentAt(float) const */

long __thiscall
CurveSequence<Sexy::Color>::findSegmentAt(CurveSequence<Sexy::Color> *this,float param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  cVar1 = std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::empty
                    ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)
                     this);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)this;
    lVar2 = FUN_0470de58(uVar5,0);
    if (*(float *)(lVar2 + 0x20) <= param_1) {
      lVar3 = FUN_0470dd68(uVar5,*(undefined8 *)(this + 8));
      lVar2 = 0;
      while (lVar2 != lVar3) {
        lVar4 = FUN_0470de58(uVar5,lVar2);
        lVar2 = lVar2 + 1;
        if (param_1 < *(float *)(lVar4 + 0x24)) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}


/* CurveSequence<Sexy::Color>::GetValueAt(float) const */

void CurveSequence<Sexy::Color>::GetValueAt(float param_1)

{
  char cVar1;
  CurveSequence<Sexy::Color> *in_x0;
  
  cVar1 = isTimeBeforeStart(in_x0,param_1);
  if (cVar1 != '\0') {
    getStartValue();
    return;
  }
  cVar1 = isTimeAfterEnd(in_x0,param_1);
  if (cVar1 == '\0') {
    findSegmentAt(in_x0,param_1);
    CurveSegment<Sexy::Color>::GetValueAt(param_1);
    return;
  }
  getEndValue();
  return;
}


/* CurveSequence<Sexy::Color>::operator[](float) const */

void __thiscall
CurveSequence<Sexy::Color>::operator[](CurveSequence<Sexy::Color> *this,float param_1)

{
  GetValueAt(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::Color>::StartSequence(float, Sexy::Color const&) */

void __thiscall
CurveSequence<Sexy::Color>::StartSequence
          (CurveSequence<Sexy::Color> *this,float param_1,Color *param_2)

{
  undefined4 in_register_00005004;
  CurveSegment<Sexy::Color> aCStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::clear
            ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)this);
  CurveSegment<Sexy::Color>::CurveSegment(aCStack_38);
  CurveSegment<Sexy::Color>::Set
            ((CurveSegment<Sexy::Color> *)CONCAT44(in_register_00005004,param_1),param_1,aCStack_38,
             param_2,param_2,0);
  std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::push_back
            ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)this,
             (CurveSegment *)aCStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequence<Sexy::Color>::AddCurve(float, Sexy::Color const&, Sexy::Color const&, CurveType) */

void __thiscall
CurveSequence<Sexy::Color>::AddCurve
          (float param_1,CurveSequence<Sexy::Color> *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  CurveSegment<Sexy::Color> *pCVar3;
  CurveSegment<Sexy::Color> aCStack_38 [48];
  long local_8;
  
  uVar2 = *(undefined8 *)this;
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0470dd68(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_0470dd88(uVar2,lVar1 + -1);
                    /* WARNING: Load size is inaccurate */
  pCVar3._0_4_ = *(CurveSegment<Sexy::Color> **)(lVar1 + 0x24);
  CurveSegment<Sexy::Color>::CurveSegment(aCStack_38);
  CurveSegment<Sexy::Color>::Set
            (pCVar3._0_4_,param_1 + (float)pCVar3._0_4_,aCStack_38,param_2,param_3,param_5);
  std::vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>>::push_back
            ((vector<CurveSegment<Sexy::Color>,std::allocator<CurveSegment<Sexy::Color>>> *)this,
             (CurveSegment *)aCStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CurveSequence<Sexy::Color>::AddCurve(float, Sexy::Color const&, CurveType) */

void __thiscall
CurveSequence<Sexy::Color>::AddCurve
          (CurveSequence<Sexy::Color> *param_1,CurveSequence<Sexy::Color> *this,undefined8 param_2,
          undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_0470dd68(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_0470dd88(uVar2,lVar1 + -1);
  AddCurve(param_1,this,lVar1 + 0x10,param_2,param_4);
  return;
}


/* CurveSequence<Sexy::SexyVector3>::AddCurve(float, Sexy::SexyVector3 const&, CurveType) */

void __thiscall
CurveSequence<Sexy::SexyVector3>::AddCurve
          (CurveSequence<Sexy::SexyVector3> *param_1,CurveSequence<Sexy::SexyVector3> *this,
          undefined8 param_2,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)this;
  lVar1 = FUN_049c6520(uVar2,*(undefined8 *)(this + 8));
  lVar1 = FUN_049c6540(uVar2,lVar1 + -1);
  AddCurve(param_1,this,lVar1 + 0xc,param_2,param_4);
  return;
}


void __thiscall
CurveSequence<Sexy::SexyVector3>::~CurveSequence(CurveSequence<Sexy::SexyVector3> *this)

{
  FUN_0362c3cc(*(undefined8 *)this);
  return;
}


void __thiscall
CurveSequence<Sexy::SexyVector3>::~CurveSequence(CurveSequence<Sexy::SexyVector3> *this)

{
  FUN_0362c3cc(*(undefined8 *)this);
  return;
}


void __thiscall
CurveSequence<Sexy::SexyVector3>::~CurveSequence(CurveSequence<Sexy::SexyVector3> *this)

{
  FUN_0362c3cc(*(undefined8 *)this);
  return;
}


/* CurveSequence<Sexy::SexyVector3>::TEMPNAMEPLACEHOLDERVALUE(CurveSequence<Sexy::SexyVector3>&&) */

CurveSequence<Sexy::SexyVector3> * __thiscall
CurveSequence<Sexy::SexyVector3>::operator=
          (CurveSequence<Sexy::SexyVector3> *this,CurveSequence *param_1)

{
  std::vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>::
  operator=((vector<CurveSegment<Sexy::SexyVector3>,std::allocator<CurveSegment<Sexy::SexyVector3>>>
             *)this,(vector *)param_1);
  return this;
}

