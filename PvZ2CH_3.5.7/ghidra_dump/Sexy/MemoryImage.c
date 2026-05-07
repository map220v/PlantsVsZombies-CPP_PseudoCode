// Class: Sexy::MemoryImage


/* Sexy::MemoryImage::BltStretchedAndRotated(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<int>
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float, bool, bool) */

void Sexy::MemoryImage::BltStretchedAndRotated
               (Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,Color *param_5,
               int param_6,double param_7,float param_8,float param_9,bool param_10,bool param_11)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltStretchedAndRotated(Sexy::Image*, Sexy::TRect<int>
   const&, Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Color const&, int, double, float,
   float, bool, bool) */

void __thiscall
Sexy::MemoryImage::BltStretchedAndRotated
          (MemoryImage *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          Color *param_5,int param_6,double param_7,float param_8,float param_9,bool param_10,
          bool param_11)

{
  BltStretchedAndRotated
            ((Image *)(this + -0x68),(TRect *)param_1,param_2,param_3,(Color *)param_4,(int)param_5,
             param_7,param_8,param_9,SUB41(param_6,0),param_10);
  return;
}


/* Sexy::MemoryImage::Get3D() */

undefined8 Sexy::MemoryImage::Get3D(void)

{
  return 0;
}


/* non-virtual thunk to Sexy::MemoryImage::Get3D() */

void __thiscall Sexy::MemoryImage::Get3D(MemoryImage *this)

{
  Get3D();
  return;
}


/* Sexy::MemoryImage::CanFillPoly() */

undefined8 Sexy::MemoryImage::CanFillPoly(void)

{
  return 0;
}


/* non-virtual thunk to Sexy::MemoryImage::CanFillPoly() */

void __thiscall Sexy::MemoryImage::CanFillPoly(MemoryImage *this)

{
  CanFillPoly();
  return;
}


/* Sexy::MemoryImage::DeleteContext(Sexy::HRenderContext const&) */

void Sexy::MemoryImage::DeleteContext(HRenderContext *param_1)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::DeleteContext(Sexy::HRenderContext const&) */

void __thiscall Sexy::MemoryImage::DeleteContext(MemoryImage *this,HRenderContext *param_1)

{
  DeleteContext((HRenderContext *)(this + -0x68));
  return;
}


/* Sexy::MemoryImage::SetCurrentContext(Sexy::HRenderContext const&) */

void Sexy::MemoryImage::SetCurrentContext(HRenderContext *param_1)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::SetCurrentContext(Sexy::HRenderContext const&) */

void __thiscall Sexy::MemoryImage::SetCurrentContext(MemoryImage *this,HRenderContext *param_1)

{
  SetCurrentContext((HRenderContext *)(this + -0x68));
  return;
}


/* Sexy::MemoryImage::PushState() */

void Sexy::MemoryImage::PushState(void)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::PushState() */

void __thiscall Sexy::MemoryImage::PushState(MemoryImage *this)

{
  PushState();
  return;
}


/* Sexy::MemoryImage::PopState() */

void Sexy::MemoryImage::PopState(void)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::PopState() */

void __thiscall Sexy::MemoryImage::PopState(MemoryImage *this)

{
  PopState();
  return;
}


/* Sexy::MemoryImage::FillPoly(Sexy::Point const*, int, Sexy::TRect<int> const*, Sexy::Color const&,
   int, int, int) */

void Sexy::MemoryImage::FillPoly
               (Point *param_1,int param_2,TRect *param_3,Color *param_4,int param_5,int param_6,
               int param_7)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::FillPoly(Sexy::Point const*, int, Sexy::TRect<int>
   const*, Sexy::Color const&, int, int, int) */

void __thiscall
Sexy::MemoryImage::FillPoly
          (MemoryImage *this,Point *param_1,int param_2,TRect *param_3,Color *param_4,int param_5,
          int param_6,int param_7)

{
  FillPoly((Point *)(this + -0x68),(int)param_1,(TRect *)(ulong)(uint)param_2,(Color *)param_3,
           (int)param_4,param_5,param_6);
  return;
}


/* Sexy::MemoryImage::CopyIntoImage(Sexy::Image*, int, int, int, int, void*) */

void Sexy::MemoryImage::CopyIntoImage
               (Image *param_1,int param_2,int param_3,int param_4,int param_5,void *param_6)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::CopyIntoImage(Sexy::Image*, int, int, int, int, void*) */

void __thiscall
Sexy::MemoryImage::CopyIntoImage
          (MemoryImage *this,Image *param_1,int param_2,int param_3,int param_4,int param_5,
          void *param_6)

{
  CopyIntoImage((Image *)(this + -0x68),(int)param_1,param_2,param_3,param_4,
                (void *)(ulong)(uint)param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::GetCurrentContext() const */

void Sexy::MemoryImage::GetCurrentContext(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HRenderContext::HRenderContext((HRenderContext *)&local_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* non-virtual thunk to Sexy::MemoryImage::GetCurrentContext() const */

void __thiscall Sexy::MemoryImage::GetCurrentContext(MemoryImage *this)

{
  GetCurrentContext();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::CreateContext(Sexy::Image*, Sexy::HRenderContext const&) */

void Sexy::MemoryImage::CreateContext(Image *param_1,HRenderContext *param_2)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HRenderContext::HRenderContext((HRenderContext *)&local_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* non-virtual thunk to Sexy::MemoryImage::CreateContext(Sexy::Image*, Sexy::HRenderContext const&)
    */

void __thiscall
Sexy::MemoryImage::CreateContext(MemoryImage *this,Image *param_1,HRenderContext *param_2)

{
  CreateContext((Image *)(this + -0x68),(HRenderContext *)param_1);
  return;
}


/* Sexy::MemoryImage::BltMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&,
   int) */

void Sexy::MemoryImage::BltMirror
               (Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,int param_6)

{
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltMirror(Sexy::Image*, int, int, Sexy::TRect<int>
   const&, Sexy::Color const&, int) */

void __thiscall
Sexy::MemoryImage::BltMirror
          (MemoryImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  BltMirror((Image *)(this + -0x68),(int)param_1,param_2,(TRect *)(ulong)(uint)param_3,
            (Color *)param_4,(int)param_5);
  return;
}


/* Sexy::MemoryImage::CommitBits() */

void __thiscall Sexy::MemoryImage::CommitBits(MemoryImage *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (this[0xb0] != (MemoryImage)0x0) {
    if (this[0x90] == (MemoryImage)0x0) {
      if (*(long *)(this + 0x70) == 0) {
        puVar4 = *(uint **)(this + 0x80);
        if (puVar4 == (uint *)0x0) {
          this[0x92] = (MemoryImage)0x0;
          this[0x91] = (MemoryImage)0x1;
        }
        else {
          this[0x91] = (MemoryImage)0x0;
          this[0x92] = (MemoryImage)0x0;
          puVar5 = puVar4;
          do {
            puVar6 = puVar5 + 1;
            if (*puVar5 >> 0x18 == 0) {
              this[0x91] = (MemoryImage)0x1;
            }
            else if (*puVar5 >> 0x18 != 0xff) {
              this[0x92] = (MemoryImage)0x1;
            }
            puVar5 = puVar6;
          } while (puVar6 != puVar4 + 0x100);
        }
      }
      else {
        this[0x91] = (MemoryImage)0x0;
        this[0x92] = (MemoryImage)0x0;
        iVar2 = *(int *)(this + 0x38) * *(int *)(this + 0x3c);
        if (0 < iVar2) {
          lVar3 = 0;
LAB_051599d4:
          do {
            uVar1 = *(uint *)(*(long *)(this + 0x70) + lVar3 * 4) >> 0x18;
            if (uVar1 == 0) {
              this[0x91] = (MemoryImage)0x1;
            }
            else if (uVar1 != 0xff) {
              lVar3 = lVar3 + 1;
              this[0x92] = (MemoryImage)0x1;
              if (iVar2 <= (int)lVar3) break;
              goto LAB_051599d4;
            }
            lVar3 = lVar3 + 1;
          } while ((int)lVar3 < iVar2);
        }
      }
    }
    if (this[0x93] == (MemoryImage)0x0) {
      (**(code **)(*(long *)this + 0x150))(this,1);
    }
    this[0xb0] = (MemoryImage)0x0;
  }
  return;
}


/* Sexy::MemoryImage::SetImageMode(bool, bool) */

void __thiscall Sexy::MemoryImage::SetImageMode(MemoryImage *this,bool param_1,bool param_2)

{
  this[0x91] = (MemoryImage)param_1;
  this[0x92] = (MemoryImage)param_2;
  this[0x90] = (MemoryImage)0x1;
  return;
}


/* Sexy::MemoryImage::SetVolatile(bool) */

void __thiscall Sexy::MemoryImage::SetVolatile(MemoryImage *this,bool param_1)

{
  this[0x93] = (MemoryImage)param_1;
  return;
}


/* Sexy::MemoryImage::DeleteExtraBuffers() */

void __thiscall Sexy::MemoryImage::DeleteExtraBuffers(MemoryImage *this)

{
  (**(code **)(*(long *)this + 0x78))();
  (**(code **)(*(long *)this + 0x80))(this);
  return;
}


/* Sexy::MemoryImage::ReInit() */

void __thiscall Sexy::MemoryImage::ReInit(MemoryImage *this)

{
  if (this[0x95] != (MemoryImage)0x0) {
    (**(code **)(*(long *)this + 0x140))();
  }
  if (this[0x94] != (MemoryImage)0x0) {
    (**(code **)(*(long *)this + 0x70))(this);
  }
  return;
}


/* Sexy::MemoryImage::ClearRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::MemoryImage::ClearRect(MemoryImage *this,TRect *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0xc);
  if (iVar6 < iVar6 + iVar7) {
    iVar5 = *(int *)(param_1 + 8);
    iVar2 = iVar6;
    do {
      iVar3 = 0;
      puVar4 = (undefined4 *)(lVar1 + (long)(*(int *)param_1 + iVar2 * *(int *)(this + 0x38)) * 4);
      if (0 < iVar5) {
        do {
          *puVar4 = 0;
          iVar3 = iVar3 + 1;
          iVar5 = *(int *)(param_1 + 8);
          puVar4 = puVar4 + 1;
        } while (iVar3 < iVar5);
        iVar6 = *(int *)(param_1 + 4);
        iVar7 = *(int *)(param_1 + 0xc);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6 + iVar7);
  }
  (**(code **)(*(long *)this + 0x98))(this);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::ClearRect(Sexy::TRect<int> const&) */

void __thiscall Sexy::MemoryImage::ClearRect(MemoryImage *this,TRect *param_1)

{
  ClearRect(this + -0x68,param_1);
  return;
}


/* Sexy::MemoryImage::Clear() */

void __thiscall Sexy::MemoryImage::Clear(MemoryImage *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x38) * *(int *)(this + 0x3c)) {
      do {
        *puVar1 = 0;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(this + 0x38) * *(int *)(this + 0x3c));
    }
    (**(code **)(*(long *)this + 0x98))(this);
  }
  return;
}


/* Sexy::MemoryImage::BltF(Sexy::Image*, float, float, Sexy::TRect<int> const&, Sexy::TRect<int>
   const&, Sexy::Color const&, int) */

void Sexy::MemoryImage::BltF
               (Image *param_1,float param_2,float param_3,TRect *param_4,TRect *param_5,
               Color *param_6,int param_7)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  param_4[0x28] = (TRect)0x1;
  (**(code **)(lVar1 + 0x108))(param_2,param_3,0,0,0);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltF(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::MemoryImage::BltF
          (MemoryImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7)

{
  BltF((Image *)(this + -0x68),param_2,param_3,(TRect *)param_1,param_4,(Color *)param_5,
       (int)param_6);
  return;
}


/* Sexy::MemoryImage::BltMatrix2(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool, bool) */

void Sexy::MemoryImage::BltMatrix2
               (Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
               Color *param_6,int param_7,TRect *param_8,bool param_9,bool param_10)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltMatrix2(Sexy::Image*, float, float, Sexy::SexyMatrix3
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool, bool) */

void __thiscall
Sexy::MemoryImage::BltMatrix2
          (MemoryImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9,bool param_10)

{
  BltMatrix2((Image *)(this + -0x68),param_2,param_3,(SexyMatrix3 *)param_1,(TRect *)param_4,
             (Color *)param_5,(int)param_6,(TRect *)(ulong)(uint)param_7,SUB81(param_8,0),param_9);
  return;
}


/* Sexy::MemoryImage::BuildTriReps(bool) */

byte __thiscall Sexy::MemoryImage::BuildTriReps(MemoryImage *this,bool param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (**(code **)(**(long **)(*(long *)(this + 0xb8) + 0x20) + 0x20))
                    (*(long **)(*(long *)(this + 0xb8) + 0x20));
  bVar2 = 0;
  if ((uVar3 >> 4 & 1) == 0) {
    if ((this[0x92] != (MemoryImage)0x0) || (bVar1 = 1, this[0x91] != (MemoryImage)0x0)) {
      bVar1 = (**(code **)(*(long *)this + 0x148))(this,this + 0xc0,0,param_1);
    }
    bVar2 = (**(code **)(*(long *)this + 0x148))(this,this + 0xd8,1,param_1);
    bVar2 = bVar2 & bVar1;
  }
  return bVar2;
}


/* Sexy::MemoryImage::GetNativeAlphaData(Sexy::NativeDisplay*) */

undefined1 (*) [16] __thiscall
Sexy::MemoryImage::GetNativeAlphaData(MemoryImage *this,NativeDisplay *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint7 uVar27;
  uint6 uVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  long lVar33;
  uint uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar38 [16];
  int iVar42;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int6 iVar49;
  undefined1 auVar51 [12];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int5 iVar62;
  undefined1 auVar63 [12];
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar50 [11];
  undefined1 auVar52 [15];
  undefined1 auVar55 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [14];
  undefined1 auVar65 [16];
  
  if (*(undefined1 (**) [16])(this + 0x98) == (undefined1 (*) [16])0x0) {
    (**(code **)(*(long *)this + 0xa0))();
    pauVar35 = *(undefined1 (**) [16])(this + 0x80);
    uVar16 = 0x18 - *(int *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar17 = 0x10 - *(int *)(param_1 + 0x14);
    uVar6 = *(uint *)(param_1 + 0x20);
    uVar18 = 8 - *(int *)(param_1 + 0x18);
    uVar7 = *(uint *)(param_1 + 0x24);
    uVar8 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)(param_1 + 8);
    uVar10 = *(uint *)(param_1 + 0xc);
    bVar81 = (byte)uVar8;
    bVar79 = (byte)(uVar8 >> 0x10);
    bVar80 = (byte)(uVar8 >> 0x18);
    bVar77 = (byte)uVar9;
    bVar75 = (byte)(uVar9 >> 0x10);
    bVar76 = (byte)(uVar9 >> 0x18);
    bVar73 = (byte)uVar10;
    bVar71 = (byte)(uVar10 >> 0x10);
    bVar72 = (byte)(uVar10 >> 0x18);
    bVar78 = (byte)(uVar8 >> 8);
    bVar74 = (byte)(uVar9 >> 8);
    bVar70 = (byte)(uVar10 >> 8);
    if (pauVar35 == (undefined1 (*) [16])0x0) {
      pauVar35 = (undefined1 (*) [16])(**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
      uVar30 = (long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) << 2;
      if (0x1fc0000000000000 < (ulong)(long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c))) {
        uVar30 = 0xffffffffffffffff;
      }
      pauVar29 = operator_new__(uVar30);
      uVar11 = *(int *)(this + 0x38) * *(int *)(this + 0x3c);
      if (0 < (int)uVar11) {
        uVar2 = (int)uVar8 >> (uVar5 & 0x1f);
        uVar3 = (int)uVar9 >> (uVar6 & 0x1f);
        uVar4 = (int)uVar10 >> (uVar7 & 0x1f);
        if ((pauVar35 < pauVar29 + 1 && pauVar29 < pauVar35 + 1) || (uVar11 < 4)) {
          lVar33 = 0;
          do {
            uVar1 = *(uint *)(*pauVar35 + lVar33 * 4);
            uVar34 = uVar1 >> 0x18;
            *(uint *)(*pauVar29 + lVar33 * 4) =
                 (uVar34 + (uVar1 >> (ulong)(uVar16 & 0x1f) & uVar2) * uVar34 >> 8) <<
                 (ulong)(uVar5 & 0x1f) & uVar8 |
                 (uVar34 + (uVar1 >> (ulong)(uVar17 & 0x1f) & uVar3) * uVar34 >> 8) <<
                 (ulong)(uVar6 & 0x1f) & uVar9 | uVar34 << 0x18 |
                 (uVar34 + (uVar1 >> (ulong)(uVar18 & 0x1f) & uVar4) * uVar34 >> 8) <<
                 (ulong)(uVar7 & 0x1f) & uVar10;
            lVar33 = lVar33 + 1;
          } while ((int)lVar33 < (int)uVar11);
        }
        else {
          iVar13 = -uVar16;
          iVar14 = -uVar17;
          iVar15 = -uVar18;
          uVar1 = (uVar11 - 4 >> 2) + 1;
          uVar12 = uVar1 * 4;
          uVar34 = 0;
          pauVar31 = pauVar29;
          pauVar32 = pauVar35;
          do {
            auVar19 = *pauVar32;
            uVar34 = uVar34 + 1;
            uVar37 = auVar19._0_4_ >> 0x18;
            uVar39 = auVar19._4_4_ >> 0x18;
            uVar40 = auVar19._8_4_ >> 0x18;
            uVar41 = auVar19._12_4_ >> 0x18;
            auVar54._4_4_ = iVar13;
            auVar54._0_4_ = iVar13;
            auVar54._8_4_ = iVar13;
            auVar54._12_4_ = iVar13;
            auVar54 = NEON_ushl(auVar19,auVar54,4);
            auVar44._4_4_ = iVar14;
            auVar44._0_4_ = iVar14;
            auVar44._8_4_ = iVar14;
            auVar44._12_4_ = iVar14;
            auVar44 = NEON_ushl(auVar19,auVar44,4);
            auVar60._4_4_ = iVar15;
            auVar60._0_4_ = iVar15;
            auVar60._8_4_ = iVar15;
            auVar60._12_4_ = iVar15;
            auVar60 = NEON_ushl(auVar19,auVar60,4);
            bVar66 = (byte)uVar2;
            bVar67 = (byte)(uVar2 >> 8);
            bVar68 = (byte)(uVar2 >> 0x10);
            bVar69 = (byte)(uVar2 >> 0x18);
            iVar42 = CONCAT13(auVar54[3] & bVar69,
                              CONCAT12(auVar54[2] & bVar68,
                                       CONCAT11(auVar54[1] & bVar67,auVar54[0] & bVar66)));
            auVar51._0_8_ =
                 CONCAT17(auVar54[7] & bVar69,
                          CONCAT16(auVar54[6] & bVar68,
                                   CONCAT15(auVar54[5] & bVar67,CONCAT14(auVar54[4] & bVar66,iVar42)
                                           )));
            auVar51[8] = auVar54[8] & bVar66;
            auVar51[9] = auVar54[9] & bVar67;
            auVar51[10] = auVar54[10] & bVar68;
            auVar51[0xb] = auVar54[0xb] & bVar69;
            auVar55[0xc] = auVar54[0xc] & bVar66;
            auVar55._0_12_ = auVar51;
            auVar55[0xd] = auVar54[0xd] & bVar67;
            auVar55[0xe] = auVar54[0xe] & bVar68;
            auVar55[0xf] = auVar54[0xf] & bVar69;
            bVar66 = (byte)uVar3;
            bVar67 = (byte)(uVar3 >> 8);
            bVar68 = (byte)(uVar3 >> 0x10);
            bVar69 = (byte)(uVar3 >> 0x18);
            iVar47 = CONCAT13(auVar44[3] & bVar69,
                              CONCAT12(auVar44[2] & bVar68,
                                       CONCAT11(auVar44[1] & bVar67,auVar44[0] & bVar66)));
            auVar63._0_8_ =
                 CONCAT17(auVar44[7] & bVar69,
                          CONCAT16(auVar44[6] & bVar68,
                                   CONCAT15(auVar44[5] & bVar67,CONCAT14(auVar44[4] & bVar66,iVar47)
                                           )));
            auVar63[8] = auVar44[8] & bVar66;
            auVar63[9] = auVar44[9] & bVar67;
            auVar63[10] = auVar44[10] & bVar68;
            auVar63[0xb] = auVar44[0xb] & bVar69;
            auVar65[0xc] = auVar44[0xc] & bVar66;
            auVar65._0_12_ = auVar63;
            auVar65[0xd] = auVar44[0xd] & bVar67;
            auVar65[0xe] = auVar44[0xe] & bVar68;
            auVar65[0xf] = auVar44[0xf] & bVar69;
            bVar66 = (byte)uVar4;
            bVar67 = (byte)(uVar4 >> 8);
            bVar68 = (byte)(uVar4 >> 0x10);
            bVar69 = (byte)(uVar4 >> 0x18);
            iVar46 = CONCAT13(auVar60[3] & bVar69,
                              CONCAT12(auVar60[2] & bVar68,
                                       CONCAT11(auVar60[1] & bVar67,auVar60[0] & bVar66)));
            auVar57._0_8_ =
                 CONCAT17(auVar60[7] & bVar69,
                          CONCAT16(auVar60[6] & bVar68,
                                   CONCAT15(auVar60[5] & bVar67,CONCAT14(auVar60[4] & bVar66,iVar46)
                                           )));
            auVar57[8] = auVar60[8] & bVar66;
            auVar57[9] = auVar60[9] & bVar67;
            auVar57[10] = auVar60[10] & bVar68;
            auVar57[0xb] = auVar60[0xb] & bVar69;
            auVar61[0xc] = auVar60[0xc] & bVar66;
            auVar61._0_12_ = auVar57;
            auVar61[0xd] = auVar60[0xd] & bVar67;
            auVar61[0xe] = auVar60[0xe] & bVar68;
            auVar61[0xf] = auVar60[0xf] & bVar69;
            auVar56._0_4_ = uVar37 + iVar42 * uVar37 >> 8;
            auVar56._4_4_ = uVar39 + (int)((ulong)auVar51._0_8_ >> 0x20) * uVar39 >> 8;
            auVar56._8_4_ = uVar40 + auVar51._8_4_ * uVar40 >> 8;
            auVar56._12_4_ = uVar41 + auVar55._12_4_ * uVar41 >> 8;
            auVar26._4_4_ = uVar5;
            auVar26._0_4_ = uVar5;
            auVar26._8_4_ = uVar5;
            auVar26._12_4_ = uVar5;
            auVar54 = NEON_sshl(auVar56,auVar26,4);
            auVar45._0_4_ = uVar37 + iVar47 * uVar37 >> 8;
            auVar45._4_4_ = uVar39 + (int)((ulong)auVar63._0_8_ >> 0x20) * uVar39 >> 8;
            auVar45._8_4_ = uVar40 + auVar63._8_4_ * uVar40 >> 8;
            auVar45._12_4_ = uVar41 + auVar65._12_4_ * uVar41 >> 8;
            auVar38._0_4_ = uVar37 + iVar46 * uVar37 >> 8;
            auVar38._4_4_ = uVar39 + (int)((ulong)auVar57._0_8_ >> 0x20) * uVar39 >> 8;
            auVar38._8_4_ = uVar40 + auVar57._8_4_ * uVar40 >> 8;
            auVar38._12_4_ = uVar41 + auVar61._12_4_ * uVar41 >> 8;
            auVar24._4_4_ = uVar6;
            auVar24._0_4_ = uVar6;
            auVar24._8_4_ = uVar6;
            auVar24._12_4_ = uVar6;
            auVar44 = NEON_sshl(auVar45,auVar24,4);
            auVar59._4_4_ = uVar7;
            auVar59._0_4_ = uVar7;
            auVar59._8_4_ = uVar7;
            auVar59._12_4_ = uVar7;
            auVar60 = NEON_sshl(auVar38,auVar59,4);
            (*pauVar31)[8] = auVar54[8] & bVar81 | auVar44[8] & bVar77 | auVar60[8] & bVar73;
            (*pauVar31)[9] = auVar54[9] & bVar78 | auVar44[9] & bVar74 | auVar60[9] & bVar70;
            (*pauVar31)[10] = auVar54[10] & bVar79 | auVar44[10] & bVar75 | auVar60[10] & bVar71;
            (*pauVar31)[0xb] =
                 auVar54[0xb] & bVar80 | auVar44[0xb] & bVar76 | auVar19[0xb] |
                 auVar60[0xb] & bVar72;
            (*pauVar31)[0xc] = auVar54[0xc] & bVar81 | auVar44[0xc] & bVar77 | auVar60[0xc] & bVar73
            ;
            (*pauVar31)[0xd] = auVar54[0xd] & bVar78 | auVar44[0xd] & bVar74 | auVar60[0xd] & bVar70
            ;
            (*pauVar31)[0xe] = auVar54[0xe] & bVar79 | auVar44[0xe] & bVar75 | auVar60[0xe] & bVar71
            ;
            (*pauVar31)[0xf] =
                 auVar54[0xf] & bVar80 | auVar44[0xf] & bVar76 | auVar19[0xf] |
                 auVar60[0xf] & bVar72;
            (*pauVar31)[0] = auVar54[0] & bVar81 | auVar44[0] & bVar77 | auVar60[0] & bVar73;
            (*pauVar31)[1] = auVar54[1] & bVar78 | auVar44[1] & bVar74 | auVar60[1] & bVar70;
            (*pauVar31)[2] = auVar54[2] & bVar79 | auVar44[2] & bVar75 | auVar60[2] & bVar71;
            (*pauVar31)[3] =
                 auVar54[3] & bVar80 | auVar44[3] & bVar76 | auVar19[3] | auVar60[3] & bVar72;
            (*pauVar31)[4] = auVar54[4] & bVar81 | auVar44[4] & bVar77 | auVar60[4] & bVar73;
            (*pauVar31)[5] = auVar54[5] & bVar78 | auVar44[5] & bVar74 | auVar60[5] & bVar70;
            (*pauVar31)[6] = auVar54[6] & bVar79 | auVar44[6] & bVar75 | auVar60[6] & bVar71;
            (*pauVar31)[7] =
                 auVar54[7] & bVar80 | auVar44[7] & bVar76 | auVar19[7] | auVar60[7] & bVar72;
            pauVar31 = pauVar31 + 1;
            pauVar32 = pauVar32 + 1;
          } while (uVar34 < uVar1);
          lVar33 = (ulong)uVar12 * 4;
          if (uVar11 != uVar12) {
            uVar1 = *(uint *)(*pauVar35 + lVar33);
            uVar34 = uVar1 >> 0x18;
            *(uint *)(*pauVar29 + lVar33) =
                 (uVar34 + (uVar1 >> (ulong)(uVar16 & 0x1f) & uVar2) * uVar34 >> 8) <<
                 (ulong)(uVar5 & 0x1f) & uVar8 |
                 (uVar34 + (uVar1 >> (ulong)(uVar17 & 0x1f) & uVar3) * uVar34 >> 8) <<
                 (ulong)(uVar6 & 0x1f) & uVar9 | uVar34 << 0x18 |
                 (uVar34 + (uVar1 >> (ulong)(uVar18 & 0x1f) & uVar4) * uVar34 >> 8) <<
                 (ulong)(uVar7 & 0x1f) & uVar10;
            if ((int)(uVar12 + 1) < (int)uVar11) {
              uVar1 = *(uint *)(*pauVar35 + lVar33 + 4);
              uVar34 = uVar1 >> 0x18;
              *(uint *)(*pauVar29 + lVar33 + 4) =
                   (uVar34 + (uVar1 >> (ulong)(uVar16 & 0x1f) & uVar2) * uVar34 >> 8) <<
                   (ulong)(uVar5 & 0x1f) & uVar8 |
                   (uVar34 + (uVar1 >> (ulong)(uVar17 & 0x1f) & uVar3) * uVar34 >> 8) <<
                   (ulong)(uVar6 & 0x1f) & uVar9 | uVar34 << 0x18 |
                   (uVar34 + (uVar1 >> (ulong)(uVar18 & 0x1f) & uVar4) * uVar34 >> 8) <<
                   (ulong)(uVar7 & 0x1f) & uVar10;
              if ((int)(uVar12 + 2) < (int)uVar11) {
                uVar11 = *(uint *)(*pauVar35 + lVar33 + 8);
                uVar1 = uVar11 >> 0x18;
                *(uint *)(*pauVar29 + lVar33 + 8) =
                     (uVar1 + (uVar11 >> (ulong)(uVar16 & 0x1f) & uVar2) * uVar1 >> 8) <<
                     (ulong)(uVar5 & 0x1f) & uVar8 |
                     (uVar1 + (uVar11 >> (ulong)(uVar17 & 0x1f) & uVar3) * uVar1 >> 8) <<
                     (ulong)(uVar6 & 0x1f) & uVar9 | uVar1 << 0x18 |
                     (uVar1 + (uVar11 >> (ulong)(uVar18 & 0x1f) & uVar4) * uVar1 >> 8) <<
                     (ulong)(uVar7 & 0x1f) & uVar10;
              }
            }
          }
        }
      }
    }
    else {
      pauVar29 = operator_new__(0x400);
      if ((pauVar35 < pauVar29 + 1) && (lVar33 = 0, pauVar29 < pauVar35 + 1)) {
        do {
          uVar11 = *(uint *)(*pauVar35 + lVar33);
          iVar13 = (uVar11 >> 0x18) + 1;
          *(uint *)(*pauVar29 + lVar33) =
               ((iVar13 * (uVar11 & 0xff0000) >> 8) >> (ulong)(uVar16 & 0x1f)) <<
               (ulong)(uVar5 & 0x1f) & uVar8 |
               ((iVar13 * (uVar11 & 0xff00) >> 8) >> (ulong)(uVar17 & 0x1f)) <<
               (ulong)(uVar6 & 0x1f) & uVar9 | (uVar11 >> 0x18) << 0x18 |
               ((iVar13 * (uVar11 & 0xff) >> 8) >> (ulong)(uVar18 & 0x1f)) << (ulong)(uVar7 & 0x1f)
               & uVar10;
          lVar33 = lVar33 + 4;
        } while (lVar33 != 0x400);
      }
      else {
        iVar13 = -uVar16;
        iVar14 = -uVar17;
        iVar15 = -uVar18;
        pauVar31 = pauVar29;
        pauVar32 = pauVar35;
        do {
          pauVar36 = pauVar32 + 1;
          auVar60 = *pauVar32;
          iVar49 = (uint6)auVar60[2] << 0x10;
          uVar27 = CONCAT16(auVar60[6],iVar49);
          auVar50._7_3_ = 0;
          auVar50._0_7_ = uVar27;
          auVar50[10] = auVar60[10];
          auVar52._11_3_ = 0;
          auVar52._0_11_ = auVar50;
          auVar52[0xe] = auVar60[0xe];
          iVar62 = (uint5)auVar60[1] << 8;
          uVar28 = CONCAT15(auVar60[5],iVar62);
          auVar64._0_10_ = CONCAT19(auVar60[9],(unkuint9)uVar28);
          auVar64._10_3_ = 0;
          auVar64[0xd] = auVar60[0xd];
          iVar42 = (auVar60._0_4_ >> 0x18) + 1;
          iVar46 = (auVar60._4_4_ >> 0x18) + 1;
          iVar47 = (auVar60._8_4_ >> 0x18) + 1;
          iVar48 = (auVar60._12_4_ >> 0x18) + 1;
          auVar53._0_4_ = (uint)(iVar42 * (int)iVar49) >> 8;
          auVar53._4_4_ = iVar46 * (uint)(uint3)(uVar27 >> 0x20) >> 8;
          auVar53._8_4_ = iVar47 * (uint)auVar50._8_3_ >> 8;
          auVar53._12_4_ = iVar48 * (uint)auVar52._12_3_ >> 8;
          auVar43._0_4_ = (uint)(iVar42 * (int)iVar62) >> 8;
          auVar43._4_4_ = iVar46 * (uint)(ushort)(uVar28 >> 0x20) >> 8;
          auVar43._8_4_ = iVar47 * (uint)(ushort)(auVar64._0_10_ >> 0x40) >> 8;
          auVar43._12_4_ = iVar48 * (uint)auVar64._12_2_ >> 8;
          auVar58._0_4_ = iVar42 * (uint)auVar60[0] >> 8;
          auVar58._4_4_ = iVar46 * (uint)auVar60[4] >> 8;
          auVar58._8_4_ = iVar47 * (uint)auVar60[8] >> 8;
          auVar58._12_4_ = iVar48 * (uint)auVar60[0xc] >> 8;
          auVar21._4_4_ = iVar13;
          auVar21._0_4_ = iVar13;
          auVar21._8_4_ = iVar13;
          auVar21._12_4_ = iVar13;
          auVar54 = NEON_ushl(auVar53,auVar21,4);
          auVar20._4_4_ = iVar14;
          auVar20._0_4_ = iVar14;
          auVar20._8_4_ = iVar14;
          auVar20._12_4_ = iVar14;
          auVar44 = NEON_ushl(auVar43,auVar20,4);
          auVar19._4_4_ = iVar15;
          auVar19._0_4_ = iVar15;
          auVar19._8_4_ = iVar15;
          auVar19._12_4_ = iVar15;
          auVar59 = NEON_ushl(auVar58,auVar19,4);
          auVar25._4_4_ = uVar5;
          auVar25._0_4_ = uVar5;
          auVar25._8_4_ = uVar5;
          auVar25._12_4_ = uVar5;
          auVar54 = NEON_sshl(auVar54,auVar25,4);
          auVar23._4_4_ = uVar6;
          auVar23._0_4_ = uVar6;
          auVar23._8_4_ = uVar6;
          auVar23._12_4_ = uVar6;
          auVar44 = NEON_sshl(auVar44,auVar23,4);
          auVar22._4_4_ = uVar7;
          auVar22._0_4_ = uVar7;
          auVar22._8_4_ = uVar7;
          auVar22._12_4_ = uVar7;
          auVar59 = NEON_sshl(auVar59,auVar22,4);
          (*pauVar31)[8] = auVar54[8] & bVar81 | auVar44[8] & bVar77 | auVar59[8] & bVar73;
          (*pauVar31)[9] = auVar54[9] & bVar78 | auVar44[9] & bVar74 | auVar59[9] & bVar70;
          (*pauVar31)[10] = auVar54[10] & bVar79 | auVar44[10] & bVar75 | auVar59[10] & bVar71;
          (*pauVar31)[0xb] =
               auVar54[0xb] & bVar80 | auVar44[0xb] & bVar76 | auVar60[0xb] | auVar59[0xb] & bVar72;
          (*pauVar31)[0xc] = auVar54[0xc] & bVar81 | auVar44[0xc] & bVar77 | auVar59[0xc] & bVar73;
          (*pauVar31)[0xd] = auVar54[0xd] & bVar78 | auVar44[0xd] & bVar74 | auVar59[0xd] & bVar70;
          (*pauVar31)[0xe] = auVar54[0xe] & bVar79 | auVar44[0xe] & bVar75 | auVar59[0xe] & bVar71;
          (*pauVar31)[0xf] =
               auVar54[0xf] & bVar80 | auVar44[0xf] & bVar76 | auVar60[0xf] | auVar59[0xf] & bVar72;
          (*pauVar31)[0] = auVar54[0] & bVar81 | auVar44[0] & bVar77 | auVar59[0] & bVar73;
          (*pauVar31)[1] = auVar54[1] & bVar78 | auVar44[1] & bVar74 | auVar59[1] & bVar70;
          (*pauVar31)[2] = auVar54[2] & bVar79 | auVar44[2] & bVar75 | auVar59[2] & bVar71;
          (*pauVar31)[3] =
               auVar54[3] & bVar80 | auVar44[3] & bVar76 | auVar60[3] | auVar59[3] & bVar72;
          (*pauVar31)[4] = auVar54[4] & bVar81 | auVar44[4] & bVar77 | auVar59[4] & bVar73;
          (*pauVar31)[5] = auVar54[5] & bVar78 | auVar44[5] & bVar74 | auVar59[5] & bVar70;
          (*pauVar31)[6] = auVar54[6] & bVar79 | auVar44[6] & bVar75 | auVar59[6] & bVar71;
          (*pauVar31)[7] =
               auVar54[7] & bVar80 | auVar44[7] & bVar76 | auVar60[7] | auVar59[7] & bVar72;
          pauVar31 = pauVar31 + 1;
          pauVar32 = pauVar36;
        } while (pauVar36 != pauVar35 + 0x40);
      }
    }
    *(undefined1 (**) [16])(this + 0x98) = pauVar29;
    return pauVar29;
  }
  return *(undefined1 (**) [16])(this + 0x98);
}


/* Sexy::MemoryImage::DeleteSWBuffers() */

void __thiscall Sexy::MemoryImage::DeleteSWBuffers(MemoryImage *this)

{
  ColourFit *pCVar1;
  ColourFit *this_00;
  
  pCVar1 = *(ColourFit **)(this + 0x98);
  if (pCVar1 == (ColourFit *)0x0) {
    pCVar1 = *(ColourFit **)(this + 0xa8);
    if (pCVar1 == (ColourFit *)0x0) {
      this_00 = *(ColourFit **)(this + 0xa0);
      if (this_00 == (ColourFit *)0x0) {
        return;
      }
      if (*(long *)(this + 0x70) != 0) {
        *(undefined8 *)(this + 0x98) = 0;
        goto LAB_0515a32c;
      }
LAB_0515a3bc:
      if (*(long *)(this + 0x88) == 0) goto LAB_0515a370;
      goto LAB_0515a31c;
    }
    if (*(long *)(this + 0x70) == 0) goto LAB_0515a3bc;
    *(undefined8 *)(this + 0x98) = 0;
    EATextSquish::ColourFit::~ColourFit(pCVar1);
  }
  else {
    if ((*(long *)(this + 0x70) == 0) && (*(long *)(this + 0x88) == 0)) {
LAB_0515a370:
      (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
      pCVar1 = *(ColourFit **)(this + 0x98);
      if (pCVar1 == (ColourFit *)0x0) {
        pCVar1 = *(ColourFit **)(this + 0xa8);
        goto LAB_0515a31c;
      }
    }
    EATextSquish::ColourFit::~ColourFit(pCVar1);
    pCVar1 = *(ColourFit **)(this + 0xa8);
LAB_0515a31c:
    *(undefined8 *)(this + 0x98) = 0;
    if (pCVar1 != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(pCVar1);
    }
  }
  this_00 = *(ColourFit **)(this + 0xa0);
LAB_0515a32c:
  *(undefined8 *)(this + 0xa8) = 0;
  if (this_00 != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(this_00);
  }
  *(undefined8 *)(this + 0xa0) = 0;
  return;
}


/* Sexy::MemoryImage::DeleteNativeData() */

void __thiscall Sexy::MemoryImage::DeleteNativeData(MemoryImage *this)

{
  if ((*(long *)(this + 0x70) == 0) && (*(long *)(this + 0x88) == 0)) {
    (**(code **)(*(long *)this + 0xd0))(this,0,0,0);
  }
  if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
  }
  *(undefined8 *)(this + 0x98) = 0;
  if (*(ColourFit **)(this + 0xa8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa8) = 0;
  return;
}


/* Sexy::MemoryImage::SetBits(unsigned int*, int, int, bool) */

void __thiscall
Sexy::MemoryImage::SetBits(MemoryImage *this,uint *param_1,int param_2,int param_3,bool param_4)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  code *pcVar3;
  
  if (*(uint **)(this + 0x70) == param_1) {
    return;
  }
  if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
  }
  *(undefined8 *)(this + 0x88) = 0;
  if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x80) = 0;
  if ((*(int *)(this + 0x38) == param_2) && (*(int *)(this + 0x3c) == param_3)) {
    __dest = *(void **)(this + 0x70);
    if (__dest != (void *)0x0) goto LAB_0515a4d0;
  }
  else if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  uVar1 = (ulong)(param_2 * param_3 + 1);
  uVar2 = uVar1 << 2;
  if (0x1fc0000000000000 < uVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  __dest = operator_new__(uVar2);
  *(int *)(this + 0x38) = param_2;
  *(int *)(this + 0x3c) = param_3;
  *(void **)(this + 0x70) = __dest;
LAB_0515a4d0:
  memcpy(__dest,param_1,
         -(ulong)((uint)(param_2 * param_3) >> 0x1f) & 0xfffffffc00000000 |
         (ulong)(uint)(param_2 * param_3) << 2);
  pcVar3 = *(code **)(*(long *)this + 0x98);
  *(undefined4 *)
   (*(long *)(this + 0x70) + (long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) * 4) = 0x4beefade
  ;
  (*pcVar3)(this);
  if (param_4) {
    (**(code **)(*(long *)this + 0xa0))(this);
  }
  return;
}


/* Sexy::MemoryImage::Create(int, int) */

void __thiscall Sexy::MemoryImage::Create(MemoryImage *this,int param_1,int param_2)

{
  code *pcVar1;
  
  if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  *(int *)(this + 0x38) = param_1;
  pcVar1 = *(code **)(*(long *)this + 0x98);
  *(int *)(this + 0x3c) = param_2;
  this[0x91] = (MemoryImage)0x1;
  this[0x92] = (MemoryImage)0x1;
  (*pcVar1)(this);
  return;
}


/* Sexy::MemoryImage::FillRect(Sexy::TRect<int> const&, Sexy::Color const&, int) */

void Sexy::MemoryImage::FillRect(TRect *param_1,Color *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = Color::ToInt((Color *)(ulong)(uint)param_3);
  lVar3 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
  uVar9 = (uint)((ulong)uVar2 >> 0x18) & 0xff;
  iVar10 = *(int *)(param_2 + 4);
  iVar7 = *(int *)(param_2 + 0xc);
  uVar11 = (uint)uVar2;
  if (uVar9 == 0xff) {
    if (iVar10 < iVar10 + iVar7) {
      iVar6 = *(int *)(param_2 + 8);
      iVar5 = iVar10;
      do {
        iVar8 = 0;
        puVar4 = (uint *)(lVar3 + (long)(*(int *)param_2 + iVar5 * *(int *)(param_1 + 0x38)) * 4);
        if (0 < iVar6) {
          do {
            *puVar4 = uVar11;
            iVar8 = iVar8 + 1;
            iVar6 = *(int *)(param_2 + 8);
            puVar4 = puVar4 + 1;
          } while (iVar8 < iVar6);
          iVar10 = *(int *)(param_2 + 4);
          iVar7 = *(int *)(param_2 + 0xc);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar10 + iVar7);
      (**(code **)(*(long *)param_1 + 0x98))(param_1);
      return;
    }
  }
  else if (iVar10 < iVar10 + iVar7) {
    iVar5 = *(int *)(param_2 + 8);
    iVar6 = iVar10;
    do {
      iVar8 = 0;
      puVar4 = (uint *)(lVar3 + (long)(*(int *)param_2 + iVar10 * *(int *)(param_1 + 0x38)) * 4);
      if (0 < iVar5) {
        do {
          uVar1 = *puVar4;
          iVar8 = iVar8 + 1;
          iVar7 = (int)((0xff - (uVar1 >> 0x18)) * uVar9) / 0xff + (uVar1 >> 0x18);
          iVar5 = 0;
          if (iVar7 != 0) {
            iVar5 = (int)(uVar9 * 0xff) / iVar7;
          }
          *puVar4 = iVar5 * (uVar11 & 0xff00ff) + (0x100 - iVar5) * (uVar1 & 0xff00ff) >> 8 &
                    0xff00ff |
                    iVar5 * (uVar11 & 0xff00) + (0x100 - iVar5) * (uVar1 & 0xff00) >> 8 & 0xff00 |
                    iVar7 * 0x1000000;
          iVar5 = *(int *)(param_2 + 8);
          puVar4 = puVar4 + 1;
        } while (iVar8 < iVar5);
        iVar6 = *(int *)(param_2 + 4);
        iVar7 = *(int *)(param_2 + 0xc);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6 + iVar7);
  }
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::FillRect(Sexy::TRect<int> const&, Sexy::Color const&,
   int) */

void __thiscall
Sexy::MemoryImage::FillRect(MemoryImage *this,TRect *param_1,Color *param_2,int param_3)

{
  FillRect((TRect *)(this + -0x68),(Color *)param_1,(int)param_2);
  return;
}


/* Sexy::MemoryImage::FillScanLinesWithCoverage(Sexy::RenderDevice::Span*, int, Sexy::Color const&,
   int, unsigned char const*, int, int, int, int) */

void Sexy::MemoryImage::FillScanLinesWithCoverage
               (Span *param_1,int param_2,Color *param_3,int param_4,uchar *param_5,int param_6,
               int param_7,int param_8,int param_9)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  int iVar11;
  int *piVar12;
  byte *pbVar10;
  
  lVar6 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
  uVar5 = Color::ToInt((Color *)(ulong)(uint)param_4);
  if (0 < (int)param_3) {
    piVar12 = (int *)((ulong)(uint)param_2 + 8);
    do {
      iVar11 = *piVar12;
      pbVar1 = (byte *)((ulong)(uint)param_6 +
                       (long)((piVar12[-1] - param_7) + (piVar12[-2] - param_8) * param_9));
      puVar7 = (uint *)(lVar6 + (long)(piVar12[-1] + piVar12[-2] * *(int *)(param_1 + 0x38)) * 4);
      pbVar10 = pbVar1;
      if (0 < iVar11) {
        do {
          pbVar9 = pbVar10 + 1;
          iVar2 = *(int *)((Color *)(ulong)(uint)param_4 + 0xc);
          uVar3 = *puVar7;
          iVar2 = (int)(iVar2 + (uint)*pbVar10 * iVar2) >> 8;
          puVar8 = puVar7;
          if (0 < iVar2) {
            puVar8 = puVar7 + 1;
            iVar11 = (int)((0xff - (uVar3 >> 0x18)) * iVar2) / 0xff + (uVar3 >> 0x18);
            iVar4 = 0;
            if (iVar11 != 0) {
              iVar4 = (iVar2 * 0xff) / iVar11;
            }
            iVar2 = 0x100 - iVar4;
            *puVar7 = iVar4 * (uVar5 & 0xff) + iVar2 * (uVar3 & 0xff) >> 8 & 0xff |
                      iVar4 * (uVar5 & 0xff00) + iVar2 * (uVar3 & 0xff00) >> 8 & 0xff00 |
                      iVar11 * 0x1000000 |
                      iVar4 * (uVar5 & 0xff0000) + iVar2 * (uVar3 & 0xff0000) >> 8 & 0xff0000;
            iVar11 = *piVar12;
          }
          puVar7 = puVar8;
          pbVar10 = pbVar9;
        } while ((int)pbVar9 - (int)pbVar1 < iVar11);
      }
      piVar12 = piVar12 + 3;
    } while (piVar12 != (int *)((ulong)(uint)param_2 + (ulong)((int)param_3 - 1) * 0xc + 0x14));
  }
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::FillScanLinesWithCoverage(Sexy::RenderDevice::Span*, int,
   Sexy::Color const&, int, unsigned char const*, int, int, int, int) */

void __thiscall
Sexy::MemoryImage::FillScanLinesWithCoverage
          (MemoryImage *this,Span *param_1,int param_2,Color *param_3,int param_4,uchar *param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  FillScanLinesWithCoverage
            ((Span *)(this + -0x68),(int)param_1,(Color *)(ulong)(uint)param_2,(int)param_3,
             (uchar *)(ulong)(uint)param_4,(int)param_5,param_6,param_7,param_8);
  return;
}


/* Sexy::MemoryImage::GetRLAlphaData() */

undefined8 * __thiscall Sexy::MemoryImage::GetRLAlphaData(MemoryImage *this)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  bool bVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  undefined8 *__s;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  
  (**(code **)(*(long *)this + 0xa0))();
  __s = *(undefined8 **)(this + 0xa0);
  if (__s == (undefined8 *)0x0) {
    __s = operator_new__((long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
    *(undefined8 **)(this + 0xa0) = __s;
    lVar35 = *(long *)(this + 0x80);
    if (lVar35 == 0) {
      puVar27 = *(uint **)(this + 0x98);
      if (puVar27 == (uint *)0x0) {
        puVar27 = (uint *)(**(code **)(*(long *)this + 0xd0))(this,0,0,0);
        __s = *(undefined8 **)(this + 0xa0);
      }
      iVar37 = *(int *)(this + 0x38);
      if (iVar37 == 1) {
        memset(__s,1,(long)*(int *)(this + 0x3c));
        __s = *(undefined8 **)(this + 0xa0);
      }
      else {
        iVar34 = 0;
        if (0 < *(int *)(this + 0x3c)) {
          do {
            pcVar1 = (char *)((long)puVar27 + 3);
            puVar27 = puVar27 + 1;
            iVar33 = 0;
            if ((*pcVar1 != '\0') && (iVar33 = 2, *pcVar1 == -1)) {
              iVar33 = 1;
            }
            uVar25 = 1;
            iVar30 = 1;
LAB_0515acfc:
            puVar28 = puVar27;
            if (iVar30 < iVar37) {
              do {
                puVar27 = puVar28 + 1;
                iVar30 = iVar30 + 1;
                if (*puVar28 >> 0x18 == 0) {
                  iVar29 = 0;
                  iVar4 = iVar33;
                  if (iVar33 == 0) goto LAB_0515af50;
                }
                else {
                  iVar29 = 2;
                  if (*puVar28 >> 0x18 == 0xff) {
                    iVar29 = 1;
                  }
                  iVar4 = iVar29;
                  if (iVar33 == iVar29) {
LAB_0515af50:
                    iVar29 = iVar4;
                    uVar25 = uVar25 + 1;
                    if (iVar30 != iVar37) goto LAB_0515acfc;
                  }
                }
                iVar4 = uVar25 - 1;
                uVar3 = (uVar25 - 0x10 >> 4) + 1;
                puVar24 = __s;
                iVar37 = iVar4;
                if (iVar4 < 0xf) {
LAB_0515add0:
                  uVar3 = uVar25;
                  if (0xfe < (int)uVar25) {
                    uVar3 = 0xffffffff;
                  }
                  *(char *)puVar24 = (char)uVar3;
                  if (iVar37 != 0) {
                    if (0xfe < iVar37) {
                      iVar37 = -1;
                    }
                    iVar38 = uVar25 - 2;
                    *(char *)((long)puVar24 + 1) = (char)iVar37;
                    if (iVar38 != 0) {
                      if (0xfe < iVar38) {
                        iVar38 = -1;
                      }
                      iVar37 = uVar25 - 3;
                      *(char *)((long)puVar24 + 2) = (char)iVar38;
                      if (iVar37 != 0) {
                        if (0xfe < iVar37) {
                          iVar37 = -1;
                        }
                        iVar38 = uVar25 - 4;
                        *(char *)((long)puVar24 + 3) = (char)iVar37;
                        if (iVar38 != 0) {
                          if (0xfe < iVar38) {
                            iVar38 = -1;
                          }
                          iVar37 = uVar25 - 5;
                          *(char *)((long)puVar24 + 4) = (char)iVar38;
                          if (iVar37 != 0) {
                            if (0xfe < iVar37) {
                              iVar37 = -1;
                            }
                            iVar38 = uVar25 - 6;
                            *(char *)((long)puVar24 + 5) = (char)iVar37;
                            if (iVar38 != 0) {
                              if (0xfe < iVar38) {
                                iVar38 = -1;
                              }
                              iVar37 = uVar25 - 7;
                              *(char *)((long)puVar24 + 6) = (char)iVar38;
                              if (iVar37 != 0) {
                                if (0xfe < iVar37) {
                                  iVar37 = -1;
                                }
                                iVar38 = uVar25 - 8;
                                *(char *)((long)puVar24 + 7) = (char)iVar37;
                                if (iVar38 != 0) {
                                  if (0xfe < iVar38) {
                                    iVar38 = -1;
                                  }
                                  iVar37 = uVar25 - 9;
                                  *(char *)(puVar24 + 1) = (char)iVar38;
                                  if (iVar37 != 0) {
                                    if (0xfe < iVar37) {
                                      iVar37 = -1;
                                    }
                                    iVar38 = uVar25 - 10;
                                    *(char *)((long)puVar24 + 9) = (char)iVar37;
                                    if (iVar38 != 0) {
                                      if (0xfe < iVar38) {
                                        iVar38 = -1;
                                      }
                                      iVar37 = uVar25 - 0xb;
                                      *(char *)((long)puVar24 + 10) = (char)iVar38;
                                      if (iVar37 != 0) {
                                        if (0xfe < iVar37) {
                                          iVar37 = -1;
                                        }
                                        iVar38 = uVar25 - 0xc;
                                        *(char *)((long)puVar24 + 0xb) = (char)iVar37;
                                        if (iVar38 != 0) {
                                          if (0xfe < iVar38) {
                                            iVar38 = -1;
                                          }
                                          iVar37 = uVar25 - 0xd;
                                          *(char *)((long)puVar24 + 0xc) = (char)iVar38;
                                          if (iVar37 != 0) {
                                            if (0xfe < iVar37) {
                                              iVar37 = -1;
                                            }
                                            iVar38 = uVar25 - 0xe;
                                            *(char *)((long)puVar24 + 0xd) = (char)iVar37;
                                            if (iVar38 != 0) {
                                              if (0xfe < iVar38) {
                                                iVar38 = -1;
                                              }
                                              *(char *)((long)puVar24 + 0xe) = (char)iVar38;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar26 = 0;
                  iVar37 = uVar25 - 1;
                  iVar38 = uVar25 - 2;
                  iVar39 = uVar25 - 3;
                  uVar36 = uVar25;
                  do {
                    iVar12 = uVar36 - 0xc;
                    iVar13 = iVar37 + -0xc;
                    uVar57 = (undefined1)((uint)iVar13 >> 0x18);
                    iVar14 = iVar38 + -0xc;
                    uVar58 = (undefined1)((uint)iVar14 >> 8);
                    uVar59 = (undefined1)((uint)iVar14 >> 0x10);
                    uVar60 = (undefined1)((uint)iVar14 >> 0x18);
                    iVar15 = iVar39 + -0xc;
                    uVar61 = (undefined1)((uint)iVar15 >> 8);
                    uVar62 = (undefined1)((uint)iVar15 >> 0x10);
                    uVar63 = (undefined1)((uint)iVar15 >> 0x18);
                    uVar26 = uVar26 + 1;
                    iVar68 = uVar36 - 4;
                    iVar69 = iVar37 + -4;
                    iVar70 = iVar38 + -4;
                    iVar71 = iVar39 + -4;
                    iVar64 = uVar36 - 8;
                    iVar65 = iVar37 + -8;
                    iVar66 = iVar38 + -8;
                    iVar67 = iVar39 + -8;
                    auVar55._0_4_ = -(uint)(0xfe < (int)uVar36);
                    auVar55._4_4_ = -(uint)(0xfe < iVar37);
                    auVar55._8_4_ = -(uint)(0xfe < iVar38);
                    auVar55._12_4_ = -(uint)(0xfe < iVar39);
                    auVar41._0_4_ = -(uint)(0xfe < iVar12);
                    auVar41._4_4_ = -(uint)(0xfe < iVar13);
                    auVar41._8_4_ = -(uint)(0xfe < iVar14);
                    auVar41._12_4_ = -(uint)(0xfe < iVar15);
                    auVar49._0_4_ = -(uint)(0xfe < iVar64);
                    auVar49._4_4_ = -(uint)(0xfe < iVar65);
                    auVar49._8_4_ = -(uint)(0xfe < iVar66);
                    auVar49._12_4_ = -(uint)(0xfe < iVar67);
                    auVar6._4_4_ = iVar37;
                    auVar6._0_4_ = uVar36;
                    auVar6._8_4_ = iVar38;
                    auVar6._12_4_ = iVar39;
                    auVar7._8_4_ = 0xff;
                    auVar7._0_8_ = 0xff000000ff;
                    auVar7._12_4_ = 0xff;
                    auVar56._4_4_ = iVar37;
                    auVar56._0_4_ = uVar36;
                    auVar56._8_4_ = iVar38;
                    auVar56._12_4_ = iVar39;
                    auVar56 = auVar56 ^ (auVar6 ^ auVar7) & auVar55;
                    auVar8._8_4_ = 0xff;
                    auVar8._0_8_ = 0xff000000ff;
                    auVar8._12_4_ = 0xff;
                    auVar11[4] = (char)iVar13;
                    auVar11._0_4_ = iVar12;
                    auVar11._5_2_ = 0;
                    auVar11[7] = uVar57;
                    auVar11[8] = (char)iVar14;
                    auVar11[9] = uVar58;
                    auVar11[10] = uVar59;
                    auVar11[0xb] = uVar60;
                    auVar11[0xc] = (char)iVar15;
                    auVar11[0xd] = uVar61;
                    auVar11[0xe] = uVar62;
                    auVar11[0xf] = uVar63;
                    auVar42[4] = (char)iVar13;
                    auVar42._0_4_ = iVar12;
                    auVar42._5_2_ = 0;
                    auVar42[7] = uVar57;
                    auVar42[8] = (char)iVar14;
                    auVar42[9] = uVar58;
                    auVar42[10] = uVar59;
                    auVar42[0xb] = uVar60;
                    auVar42[0xc] = (char)iVar15;
                    auVar42[0xd] = uVar61;
                    auVar42[0xe] = uVar62;
                    auVar42[0xf] = uVar63;
                    auVar42 = auVar42 ^ (auVar11 ^ auVar8) & auVar41;
                    bVar21 = (byte)iVar68;
                    bVar2 = (byte)iVar69;
                    bVar22 = (byte)iVar70;
                    bVar20 = (byte)iVar71;
                    auVar9._8_4_ = 0xff;
                    auVar9._0_8_ = 0xff000000ff;
                    auVar9._12_4_ = 0xff;
                    auVar17._4_4_ = iVar65;
                    auVar17._0_4_ = iVar64;
                    auVar17._8_4_ = iVar66;
                    auVar17._12_4_ = iVar67;
                    auVar50._4_4_ = iVar65;
                    auVar50._0_4_ = iVar64;
                    auVar50._8_4_ = iVar66;
                    auVar50._12_4_ = iVar67;
                    auVar50 = auVar50 ^ (auVar17 ^ auVar9) & auVar49;
                    uVar36 = uVar36 - 0x10;
                    iVar37 = iVar37 + -0x10;
                    iVar38 = iVar38 + -0x10;
                    iVar39 = iVar39 + -0x10;
                    uVar19 = CONCAT17(bVar20 ^ (bVar20 ^ 0xff) & -(0xfe < iVar71),
                                      CONCAT16(bVar22 ^ (bVar22 ^ 0xff) & -(0xfe < iVar70),
                                               CONCAT15(bVar2 ^ (bVar2 ^ 0xff) & -(0xfe < iVar69),
                                                        CONCAT14(bVar21 ^ (bVar21 ^ 0xff) &
                                                                          -(0xfe < iVar68),
                                                                 CONCAT13(auVar56[0xc],
                                                                          CONCAT12(auVar56[8],
                                                                                   CONCAT11(auVar56[
                                                  4],auVar56[0])))))));
                    auVar43[8] = auVar50[0];
                    auVar43._0_8_ = uVar19;
                    auVar43[9] = auVar50[4];
                    auVar43[10] = auVar50[8];
                    auVar43[0xb] = auVar50[0xc];
                    auVar43[0xc] = auVar42[0];
                    auVar43[0xd] = auVar42[4];
                    auVar43[0xe] = auVar42[8];
                    auVar43[0xf] = auVar42[0xc];
                    puVar24[1] = auVar43._8_8_;
                    *puVar24 = uVar19;
                    puVar24 = puVar24 + 2;
                  } while (uVar26 < uVar3);
                  bVar23 = uVar3 * 0x10 != uVar25;
                  uVar25 = uVar25 + uVar3 * -0x10;
                  if (bVar23) {
                    puVar24 = (undefined8 *)((long)__s + (ulong)(uVar3 * 0x10));
                    iVar37 = uVar25 - 1;
                    goto LAB_0515add0;
                  }
                }
                iVar37 = *(int *)(this + 0x38);
                __s = (undefined8 *)((long)__s + (long)iVar4 + 1);
                if ((iVar33 == iVar29) || (iVar30 != iVar37)) goto LAB_0515af68;
                *(undefined1 *)__s = 1;
                __s = (undefined8 *)((long)__s + 1);
                uVar25 = 1;
                iVar37 = *(int *)(this + 0x38);
                puVar28 = puVar27;
                iVar33 = iVar29;
                if (iVar37 <= iVar30) break;
              } while( true );
            }
            iVar34 = iVar34 + 1;
            if (*(int *)(this + 0x3c) <= iVar34) {
              return *(undefined8 **)(this + 0xa0);
            }
          } while( true );
        }
      }
    }
    else {
      iVar37 = *(int *)(this + 0x38);
      pbVar31 = *(byte **)(this + 0x88);
      if (iVar37 == 1) {
        memset(__s,1,(long)*(int *)(this + 0x3c));
        __s = *(undefined8 **)(this + 0xa0);
      }
      else {
        iVar34 = 0;
        if (0 < *(int *)(this + 0x3c)) {
          auVar40._8_4_ = 0xff;
          auVar40._0_8_ = 0xff000000ff;
          auVar40._12_4_ = 0xff;
          do {
            bVar2 = *pbVar31;
            pbVar31 = pbVar31 + 1;
            uVar25 = *(uint *)(lVar35 + (ulong)bVar2 * 4) >> 0x18;
            iVar33 = 0;
            if ((uVar25 != 0) && (iVar33 = 2, uVar25 == 0xff)) {
              iVar33 = 1;
            }
            uVar25 = 1;
            iVar30 = 1;
LAB_0515aa14:
            pbVar32 = pbVar31;
            if (iVar30 < iVar37) {
              do {
                pbVar31 = pbVar32 + 1;
                iVar30 = iVar30 + 1;
                uVar3 = *(uint *)(lVar35 + (ulong)*pbVar32 * 4) >> 0x18;
                if (uVar3 == 0) {
                  iVar29 = 0;
                  iVar4 = iVar33;
                  if (iVar33 == 0) goto LAB_0515ac6c;
                }
                else {
                  iVar29 = 2;
                  if (uVar3 == 0xff) {
                    iVar29 = 1;
                  }
                  iVar4 = iVar29;
                  if (iVar33 == iVar29) {
LAB_0515ac6c:
                    iVar29 = iVar4;
                    uVar25 = uVar25 + 1;
                    if (iVar37 != iVar30) goto LAB_0515aa14;
                  }
                }
                iVar4 = uVar25 - 1;
                uVar3 = (uVar25 - 0x10 >> 4) + 1;
                puVar24 = __s;
                iVar37 = iVar4;
                if (iVar4 < 0xf) {
LAB_0515aaec:
                  uVar3 = uVar25;
                  if (0xfe < (int)uVar25) {
                    uVar3 = 0xffffffff;
                  }
                  *(char *)puVar24 = (char)uVar3;
                  if (iVar37 != 0) {
                    if (0xfe < iVar37) {
                      iVar37 = -1;
                    }
                    iVar38 = uVar25 - 2;
                    *(char *)((long)puVar24 + 1) = (char)iVar37;
                    if (iVar38 != 0) {
                      if (0xfe < iVar38) {
                        iVar38 = -1;
                      }
                      iVar37 = uVar25 - 3;
                      *(char *)((long)puVar24 + 2) = (char)iVar38;
                      if (iVar37 != 0) {
                        if (0xfe < iVar37) {
                          iVar37 = -1;
                        }
                        iVar38 = uVar25 - 4;
                        *(char *)((long)puVar24 + 3) = (char)iVar37;
                        if (iVar38 != 0) {
                          if (0xfe < iVar38) {
                            iVar38 = -1;
                          }
                          iVar37 = uVar25 - 5;
                          *(char *)((long)puVar24 + 4) = (char)iVar38;
                          if (iVar37 != 0) {
                            if (0xfe < iVar37) {
                              iVar37 = -1;
                            }
                            iVar38 = uVar25 - 6;
                            *(char *)((long)puVar24 + 5) = (char)iVar37;
                            if (iVar38 != 0) {
                              if (0xfe < iVar38) {
                                iVar38 = -1;
                              }
                              iVar37 = uVar25 - 7;
                              *(char *)((long)puVar24 + 6) = (char)iVar38;
                              if (iVar37 != 0) {
                                if (0xfe < iVar37) {
                                  iVar37 = -1;
                                }
                                iVar38 = uVar25 - 8;
                                *(char *)((long)puVar24 + 7) = (char)iVar37;
                                if (iVar38 != 0) {
                                  if (0xfe < iVar38) {
                                    iVar38 = -1;
                                  }
                                  iVar37 = uVar25 - 9;
                                  *(char *)(puVar24 + 1) = (char)iVar38;
                                  if (iVar37 != 0) {
                                    if (0xfe < iVar37) {
                                      iVar37 = -1;
                                    }
                                    iVar38 = uVar25 - 10;
                                    *(char *)((long)puVar24 + 9) = (char)iVar37;
                                    if (iVar38 != 0) {
                                      if (0xfe < iVar38) {
                                        iVar38 = -1;
                                      }
                                      iVar37 = uVar25 - 0xb;
                                      *(char *)((long)puVar24 + 10) = (char)iVar38;
                                      if (iVar37 != 0) {
                                        if (0xfe < iVar37) {
                                          iVar37 = -1;
                                        }
                                        iVar38 = uVar25 - 0xc;
                                        *(char *)((long)puVar24 + 0xb) = (char)iVar37;
                                        if (iVar38 != 0) {
                                          if (0xfe < iVar38) {
                                            iVar38 = -1;
                                          }
                                          iVar37 = uVar25 - 0xd;
                                          *(char *)((long)puVar24 + 0xc) = (char)iVar38;
                                          if (iVar37 != 0) {
                                            if (0xfe < iVar37) {
                                              iVar37 = -1;
                                            }
                                            iVar38 = uVar25 - 0xe;
                                            *(char *)((long)puVar24 + 0xd) = (char)iVar37;
                                            if (iVar38 != 0) {
                                              if (0xfe < iVar38) {
                                                iVar38 = -1;
                                              }
                                              *(char *)((long)puVar24 + 0xe) = (char)iVar38;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  uVar26 = 0;
                  iVar37 = uVar25 - 1;
                  iVar38 = uVar25 - 2;
                  iVar39 = uVar25 - 3;
                  uVar36 = uVar25;
                  do {
                    iVar12 = uVar36 - 0xc;
                    iVar13 = iVar37 + -0xc;
                    uVar57 = (undefined1)((uint)iVar13 >> 0x18);
                    iVar14 = iVar38 + -0xc;
                    uVar58 = (undefined1)((uint)iVar14 >> 8);
                    uVar59 = (undefined1)((uint)iVar14 >> 0x10);
                    uVar60 = (undefined1)((uint)iVar14 >> 0x18);
                    iVar15 = iVar39 + -0xc;
                    uVar61 = (undefined1)((uint)iVar15 >> 8);
                    uVar62 = (undefined1)((uint)iVar15 >> 0x10);
                    uVar63 = (undefined1)((uint)iVar15 >> 0x18);
                    uVar26 = uVar26 + 1;
                    iVar68 = uVar36 - 4;
                    iVar69 = iVar37 + -4;
                    iVar70 = iVar38 + -4;
                    iVar71 = iVar39 + -4;
                    iVar64 = uVar36 - 8;
                    iVar65 = iVar37 + -8;
                    iVar66 = iVar38 + -8;
                    iVar67 = iVar39 + -8;
                    auVar53._0_4_ = -(uint)(0xfe < (int)uVar36);
                    auVar53._4_4_ = -(uint)(0xfe < iVar37);
                    auVar53._8_4_ = -(uint)(0xfe < iVar38);
                    auVar53._12_4_ = -(uint)(0xfe < iVar39);
                    auVar44._0_4_ = -(uint)(0xfe < iVar12);
                    auVar44._4_4_ = -(uint)(0xfe < iVar13);
                    auVar44._8_4_ = -(uint)(0xfe < iVar14);
                    auVar44._12_4_ = -(uint)(0xfe < iVar15);
                    auVar51._0_4_ = -(uint)(0xfe < iVar68);
                    auVar51._4_4_ = -(uint)(0xfe < iVar69);
                    auVar51._8_4_ = -(uint)(0xfe < iVar70);
                    auVar51._12_4_ = -(uint)(0xfe < iVar71);
                    auVar47._0_4_ = -(uint)(0xfe < iVar64);
                    auVar47._4_4_ = -(uint)(0xfe < iVar65);
                    auVar47._8_4_ = -(uint)(0xfe < iVar66);
                    auVar47._12_4_ = -(uint)(0xfe < iVar67);
                    auVar5._4_4_ = iVar37;
                    auVar5._0_4_ = uVar36;
                    auVar5._8_4_ = iVar38;
                    auVar5._12_4_ = iVar39;
                    auVar54._4_4_ = iVar37;
                    auVar54._0_4_ = uVar36;
                    auVar54._8_4_ = iVar38;
                    auVar54._12_4_ = iVar39;
                    auVar54 = auVar54 ^ (auVar5 ^ auVar40) & auVar53;
                    auVar10[4] = (char)iVar13;
                    auVar10._0_4_ = iVar12;
                    auVar10._5_2_ = 0;
                    auVar10[7] = uVar57;
                    auVar10[8] = (char)iVar14;
                    auVar10[9] = uVar58;
                    auVar10[10] = uVar59;
                    auVar10[0xb] = uVar60;
                    auVar10[0xc] = (char)iVar15;
                    auVar10[0xd] = uVar61;
                    auVar10[0xe] = uVar62;
                    auVar10[0xf] = uVar63;
                    auVar45[4] = (char)iVar13;
                    auVar45._0_4_ = iVar12;
                    auVar45._5_2_ = 0;
                    auVar45[7] = uVar57;
                    auVar45[8] = (char)iVar14;
                    auVar45[9] = uVar58;
                    auVar45[10] = uVar59;
                    auVar45[0xb] = uVar60;
                    auVar45[0xc] = (char)iVar15;
                    auVar45[0xd] = uVar61;
                    auVar45[0xe] = uVar62;
                    auVar45[0xf] = uVar63;
                    auVar45 = auVar45 ^ (auVar10 ^ auVar40) & auVar44;
                    auVar18._4_4_ = iVar69;
                    auVar18._0_4_ = iVar68;
                    auVar18._8_4_ = iVar70;
                    auVar18._12_4_ = iVar71;
                    auVar52._4_4_ = iVar69;
                    auVar52._0_4_ = iVar68;
                    auVar52._8_4_ = iVar70;
                    auVar52._12_4_ = iVar71;
                    auVar52 = auVar52 ^ (auVar18 ^ auVar40) & auVar51;
                    auVar16._4_4_ = iVar65;
                    auVar16._0_4_ = iVar64;
                    auVar16._8_4_ = iVar66;
                    auVar16._12_4_ = iVar67;
                    auVar48._4_4_ = iVar65;
                    auVar48._0_4_ = iVar64;
                    auVar48._8_4_ = iVar66;
                    auVar48._12_4_ = iVar67;
                    auVar48 = auVar48 ^ (auVar16 ^ auVar40) & auVar47;
                    uVar36 = uVar36 - 0x10;
                    iVar37 = iVar37 + -0x10;
                    iVar38 = iVar38 + -0x10;
                    iVar39 = iVar39 + -0x10;
                    uVar19 = CONCAT17(auVar52[0xc],
                                      CONCAT16(auVar52[8],
                                               CONCAT15(auVar52[4],
                                                        CONCAT14(auVar52[0],
                                                                 CONCAT13(auVar54[0xc],
                                                                          CONCAT12(auVar54[8],
                                                                                   CONCAT11(auVar54[
                                                  4],auVar54[0])))))));
                    auVar46[8] = auVar48[0];
                    auVar46._0_8_ = uVar19;
                    auVar46[9] = auVar48[4];
                    auVar46[10] = auVar48[8];
                    auVar46[0xb] = auVar48[0xc];
                    auVar46[0xc] = auVar45[0];
                    auVar46[0xd] = auVar45[4];
                    auVar46[0xe] = auVar45[8];
                    auVar46[0xf] = auVar45[0xc];
                    puVar24[1] = auVar46._8_8_;
                    *puVar24 = uVar19;
                    puVar24 = puVar24 + 2;
                  } while (uVar26 < uVar3);
                  bVar23 = uVar25 != uVar3 * 0x10;
                  uVar25 = uVar25 + uVar3 * -0x10;
                  if (bVar23) {
                    puVar24 = (undefined8 *)((long)__s + (ulong)(uVar3 * 0x10));
                    iVar37 = uVar25 - 1;
                    goto LAB_0515aaec;
                  }
                }
                iVar37 = *(int *)(this + 0x38);
                __s = (undefined8 *)((long)__s + (long)iVar4 + 1);
                if ((iVar33 == iVar29) || (iVar30 != iVar37)) goto LAB_0515ac84;
                *(undefined1 *)__s = 1;
                __s = (undefined8 *)((long)__s + 1);
                uVar25 = 1;
                iVar37 = *(int *)(this + 0x38);
                pbVar32 = pbVar31;
                iVar33 = iVar29;
                if (iVar37 <= iVar30) break;
              } while( true );
            }
            iVar34 = iVar34 + 1;
            if (*(int *)(this + 0x3c) <= iVar34) {
              return *(undefined8 **)(this + 0xa0);
            }
          } while( true );
        }
      }
    }
  }
  return __s;
LAB_0515af68:
  uVar25 = 1;
  iVar33 = iVar29;
  goto LAB_0515acfc;
LAB_0515ac84:
  uVar25 = 1;
  iVar33 = iVar29;
  goto LAB_0515aa14;
}


/* Sexy::MemoryImage::GetRLAdditiveData(Sexy::NativeDisplay*) */

undefined8 * Sexy::MemoryImage::GetRLAdditiveData(NativeDisplay *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  long lVar24;
  uint *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  bool bVar33;
  int iVar34;
  undefined8 *puVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  
  puVar35 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar35 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      puVar25 = (uint *)(**(code **)(*(long *)param_1 + 0x58))();
      puVar35 = operator_new__((long)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c)));
      *(undefined8 **)(param_1 + 0xa8) = puVar35;
      iVar37 = *(int *)(param_1 + 0x38);
      if (iVar37 != 1) {
        iVar34 = 0;
        if (*(int *)(param_1 + 0x3c) < 1) {
          return puVar35;
        }
        do {
          uVar1 = *puVar25;
          uVar27 = 1;
          puVar25 = puVar25 + 1;
          iVar29 = 1;
          bVar33 = (uVar1 & 0xffffff) != 0;
LAB_0515b390:
          puVar30 = puVar25;
          if (iVar29 < iVar37) {
            do {
              puVar25 = puVar30 + 1;
              iVar29 = iVar29 + 1;
              bVar22 = (*puVar30 & 0xffffff) != 0;
              if ((bVar33 == bVar22) && (uVar27 = uVar27 + 1, iVar29 != iVar37)) goto LAB_0515b390;
              iVar3 = uVar27 - 1;
              uVar1 = (uVar27 - 0x10 >> 4) + 1;
              puVar26 = puVar35;
              iVar37 = iVar3;
              if (iVar3 < 0xf) {
LAB_0515b460:
                uVar1 = uVar27;
                if (0xfe < (int)uVar27) {
                  uVar1 = 0xffffffff;
                }
                *(char *)puVar26 = (char)uVar1;
                if (0 < iVar37) {
                  if (0xfe < iVar37) {
                    iVar37 = -1;
                  }
                  iVar38 = uVar27 - 2;
                  *(char *)((long)puVar26 + 1) = (char)iVar37;
                  if (iVar38 != 0) {
                    if (0xfe < iVar38) {
                      iVar38 = -1;
                    }
                    iVar37 = uVar27 - 3;
                    *(char *)((long)puVar26 + 2) = (char)iVar38;
                    if (iVar37 != 0) {
                      if (0xfe < iVar37) {
                        iVar37 = -1;
                      }
                      iVar38 = uVar27 - 4;
                      *(char *)((long)puVar26 + 3) = (char)iVar37;
                      if (iVar38 != 0) {
                        if (0xfe < iVar38) {
                          iVar38 = -1;
                        }
                        iVar37 = uVar27 - 5;
                        *(char *)((long)puVar26 + 4) = (char)iVar38;
                        if (iVar37 != 0) {
                          if (0xfe < iVar37) {
                            iVar37 = -1;
                          }
                          iVar38 = uVar27 - 6;
                          *(char *)((long)puVar26 + 5) = (char)iVar37;
                          if (iVar38 != 0) {
                            if (0xfe < iVar38) {
                              iVar38 = -1;
                            }
                            iVar37 = uVar27 - 7;
                            *(char *)((long)puVar26 + 6) = (char)iVar38;
                            if (iVar37 != 0) {
                              if (0xfe < iVar37) {
                                iVar37 = -1;
                              }
                              iVar38 = uVar27 - 8;
                              *(char *)((long)puVar26 + 7) = (char)iVar37;
                              if (iVar38 != 0) {
                                if (0xfe < iVar38) {
                                  iVar38 = -1;
                                }
                                iVar37 = uVar27 - 9;
                                *(char *)(puVar26 + 1) = (char)iVar38;
                                if (iVar37 != 0) {
                                  if (0xfe < iVar37) {
                                    iVar37 = -1;
                                  }
                                  iVar38 = uVar27 - 10;
                                  *(char *)((long)puVar26 + 9) = (char)iVar37;
                                  if (iVar38 != 0) {
                                    if (0xfe < iVar38) {
                                      iVar38 = -1;
                                    }
                                    iVar37 = uVar27 - 0xb;
                                    *(char *)((long)puVar26 + 10) = (char)iVar38;
                                    if (iVar37 != 0) {
                                      if (0xfe < iVar37) {
                                        iVar37 = -1;
                                      }
                                      iVar38 = uVar27 - 0xc;
                                      *(char *)((long)puVar26 + 0xb) = (char)iVar37;
                                      if (iVar38 != 0) {
                                        if (0xfe < iVar38) {
                                          iVar38 = -1;
                                        }
                                        iVar37 = uVar27 - 0xd;
                                        *(char *)((long)puVar26 + 0xc) = (char)iVar38;
                                        if (iVar37 != 0) {
                                          if (0xfe < iVar37) {
                                            iVar37 = -1;
                                          }
                                          iVar38 = uVar27 - 0xe;
                                          *(char *)((long)puVar26 + 0xd) = (char)iVar37;
                                          if (iVar38 != 0) {
                                            if (0xfe < iVar38) {
                                              iVar38 = -1;
                                            }
                                            *(char *)((long)puVar26 + 0xe) = (char)iVar38;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar28 = 0;
                iVar37 = uVar27 - 1;
                iVar38 = uVar27 - 2;
                iVar39 = uVar27 - 3;
                uVar36 = uVar27;
                do {
                  iVar11 = uVar36 - 0xc;
                  iVar12 = iVar37 + -0xc;
                  uVar57 = (undefined1)((uint)iVar12 >> 0x18);
                  iVar13 = iVar38 + -0xc;
                  uVar58 = (undefined1)((uint)iVar13 >> 8);
                  uVar59 = (undefined1)((uint)iVar13 >> 0x10);
                  uVar60 = (undefined1)((uint)iVar13 >> 0x18);
                  iVar14 = iVar39 + -0xc;
                  uVar61 = (undefined1)((uint)iVar14 >> 8);
                  uVar62 = (undefined1)((uint)iVar14 >> 0x10);
                  uVar63 = (undefined1)((uint)iVar14 >> 0x18);
                  uVar28 = uVar28 + 1;
                  iVar68 = uVar36 - 4;
                  iVar69 = iVar37 + -4;
                  iVar70 = iVar38 + -4;
                  iVar71 = iVar39 + -4;
                  iVar64 = uVar36 - 8;
                  iVar65 = iVar37 + -8;
                  iVar66 = iVar38 + -8;
                  iVar67 = iVar39 + -8;
                  auVar55._0_4_ = -(uint)(0xfe < (int)uVar36);
                  auVar55._4_4_ = -(uint)(0xfe < iVar37);
                  auVar55._8_4_ = -(uint)(0xfe < iVar38);
                  auVar55._12_4_ = -(uint)(0xfe < iVar39);
                  auVar41._0_4_ = -(uint)(0xfe < iVar11);
                  auVar41._4_4_ = -(uint)(0xfe < iVar12);
                  auVar41._8_4_ = -(uint)(0xfe < iVar13);
                  auVar41._12_4_ = -(uint)(0xfe < iVar14);
                  auVar49._0_4_ = -(uint)(0xfe < iVar64);
                  auVar49._4_4_ = -(uint)(0xfe < iVar65);
                  auVar49._8_4_ = -(uint)(0xfe < iVar66);
                  auVar49._12_4_ = -(uint)(0xfe < iVar67);
                  auVar5._4_4_ = iVar37;
                  auVar5._0_4_ = uVar36;
                  auVar5._8_4_ = iVar38;
                  auVar5._12_4_ = iVar39;
                  auVar6._8_4_ = 0xff;
                  auVar6._0_8_ = 0xff000000ff;
                  auVar6._12_4_ = 0xff;
                  auVar56._4_4_ = iVar37;
                  auVar56._0_4_ = uVar36;
                  auVar56._8_4_ = iVar38;
                  auVar56._12_4_ = iVar39;
                  auVar56 = auVar56 ^ (auVar5 ^ auVar6) & auVar55;
                  auVar7._8_4_ = 0xff;
                  auVar7._0_8_ = 0xff000000ff;
                  auVar7._12_4_ = 0xff;
                  auVar10[4] = (char)iVar12;
                  auVar10._0_4_ = iVar11;
                  auVar10._5_2_ = 0;
                  auVar10[7] = uVar57;
                  auVar10[8] = (char)iVar13;
                  auVar10[9] = uVar58;
                  auVar10[10] = uVar59;
                  auVar10[0xb] = uVar60;
                  auVar10[0xc] = (char)iVar14;
                  auVar10[0xd] = uVar61;
                  auVar10[0xe] = uVar62;
                  auVar10[0xf] = uVar63;
                  auVar42[4] = (char)iVar12;
                  auVar42._0_4_ = iVar11;
                  auVar42._5_2_ = 0;
                  auVar42[7] = uVar57;
                  auVar42[8] = (char)iVar13;
                  auVar42[9] = uVar58;
                  auVar42[10] = uVar59;
                  auVar42[0xb] = uVar60;
                  auVar42[0xc] = (char)iVar14;
                  auVar42[0xd] = uVar61;
                  auVar42[0xe] = uVar62;
                  auVar42[0xf] = uVar63;
                  auVar42 = auVar42 ^ (auVar10 ^ auVar7) & auVar41;
                  bVar20 = (byte)iVar68;
                  bVar2 = (byte)iVar69;
                  bVar21 = (byte)iVar70;
                  bVar19 = (byte)iVar71;
                  auVar8._8_4_ = 0xff;
                  auVar8._0_8_ = 0xff000000ff;
                  auVar8._12_4_ = 0xff;
                  auVar16._4_4_ = iVar65;
                  auVar16._0_4_ = iVar64;
                  auVar16._8_4_ = iVar66;
                  auVar16._12_4_ = iVar67;
                  auVar50._4_4_ = iVar65;
                  auVar50._0_4_ = iVar64;
                  auVar50._8_4_ = iVar66;
                  auVar50._12_4_ = iVar67;
                  auVar50 = auVar50 ^ (auVar16 ^ auVar8) & auVar49;
                  uVar36 = uVar36 - 0x10;
                  iVar37 = iVar37 + -0x10;
                  iVar38 = iVar38 + -0x10;
                  iVar39 = iVar39 + -0x10;
                  uVar18 = CONCAT17(bVar19 ^ (bVar19 ^ 0xff) & -(0xfe < iVar71),
                                    CONCAT16(bVar21 ^ (bVar21 ^ 0xff) & -(0xfe < iVar70),
                                             CONCAT15(bVar2 ^ (bVar2 ^ 0xff) & -(0xfe < iVar69),
                                                      CONCAT14(bVar20 ^ (bVar20 ^ 0xff) &
                                                                        -(0xfe < iVar68),
                                                               CONCAT13(auVar56[0xc],
                                                                        CONCAT12(auVar56[8],
                                                                                 CONCAT11(auVar56[4]
                                                                                          ,auVar56[0
                                                  ])))))));
                  auVar43[8] = auVar50[0];
                  auVar43._0_8_ = uVar18;
                  auVar43[9] = auVar50[4];
                  auVar43[10] = auVar50[8];
                  auVar43[0xb] = auVar50[0xc];
                  auVar43[0xc] = auVar42[0];
                  auVar43[0xd] = auVar42[4];
                  auVar43[0xe] = auVar42[8];
                  auVar43[0xf] = auVar42[0xc];
                  puVar26[1] = auVar43._8_8_;
                  *puVar26 = uVar18;
                  puVar26 = puVar26 + 2;
                } while (uVar28 < uVar1);
                bVar23 = uVar27 != uVar1 * 0x10;
                uVar27 = uVar27 + uVar1 * -0x10;
                if (bVar23) {
                  puVar26 = (undefined8 *)((long)puVar35 + (ulong)(uVar1 * 0x10));
                  iVar37 = uVar27 - 1;
                  goto LAB_0515b460;
                }
              }
              iVar37 = *(int *)(param_1 + 0x38);
              puVar35 = (undefined8 *)((long)puVar35 + (long)iVar3 + 1);
              if ((bVar33 == bVar22) || (iVar29 != iVar37)) goto LAB_0515b5f4;
              *(undefined1 *)puVar35 = 1;
              puVar35 = (undefined8 *)((long)puVar35 + 1);
              uVar27 = 1;
              iVar37 = *(int *)(param_1 + 0x38);
              puVar30 = puVar25;
              bVar33 = bVar22;
              if (iVar37 <= iVar29) break;
            } while( true );
          }
          iVar34 = iVar34 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar34) {
            return *(undefined8 **)(param_1 + 0xa8);
          }
        } while( true );
      }
    }
    else {
      lVar24 = (**(code **)(*(long *)param_1 + 0x58))();
      puVar35 = operator_new__((long)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x3c)));
      *(undefined8 **)(param_1 + 0xa8) = puVar35;
      iVar37 = *(int *)(param_1 + 0x38);
      pbVar31 = *(byte **)(param_1 + 0x88);
      if (iVar37 != 1) {
        iVar34 = 0;
        if (*(int *)(param_1 + 0x3c) < 1) {
          return puVar35;
        }
        auVar40._8_4_ = 0xff;
        auVar40._0_8_ = 0xff000000ff;
        auVar40._12_4_ = 0xff;
        do {
          bVar2 = *pbVar31;
          uVar27 = 1;
          pbVar31 = pbVar31 + 1;
          iVar29 = 1;
          bVar33 = (*(uint *)(lVar24 + (ulong)bVar2 * 4) & 0xffffff) != 0;
LAB_0515b090:
          pbVar32 = pbVar31;
          if (iVar29 < iVar37) {
            do {
              pbVar31 = pbVar32 + 1;
              iVar29 = iVar29 + 1;
              bVar22 = (*(uint *)(lVar24 + (ulong)*pbVar32 * 4) & 0xffffff) != 0;
              if ((bVar33 == bVar22) && (uVar27 = uVar27 + 1, iVar29 != iVar37)) goto LAB_0515b090;
              iVar3 = uVar27 - 1;
              uVar1 = (uVar27 - 0x10 >> 4) + 1;
              puVar26 = puVar35;
              iVar37 = iVar3;
              if (iVar3 < 0xf) {
LAB_0515b164:
                uVar1 = uVar27;
                if (0xfe < (int)uVar27) {
                  uVar1 = 0xffffffff;
                }
                *(char *)puVar26 = (char)uVar1;
                if (0 < iVar37) {
                  if (0xfe < iVar37) {
                    iVar37 = -1;
                  }
                  iVar38 = uVar27 - 2;
                  *(char *)((long)puVar26 + 1) = (char)iVar37;
                  if (iVar38 != 0) {
                    if (0xfe < iVar38) {
                      iVar38 = -1;
                    }
                    iVar37 = uVar27 - 3;
                    *(char *)((long)puVar26 + 2) = (char)iVar38;
                    if (iVar37 != 0) {
                      if (0xfe < iVar37) {
                        iVar37 = -1;
                      }
                      iVar38 = uVar27 - 4;
                      *(char *)((long)puVar26 + 3) = (char)iVar37;
                      if (iVar38 != 0) {
                        if (0xfe < iVar38) {
                          iVar38 = -1;
                        }
                        iVar37 = uVar27 - 5;
                        *(char *)((long)puVar26 + 4) = (char)iVar38;
                        if (iVar37 != 0) {
                          if (0xfe < iVar37) {
                            iVar37 = -1;
                          }
                          iVar38 = uVar27 - 6;
                          *(char *)((long)puVar26 + 5) = (char)iVar37;
                          if (iVar38 != 0) {
                            if (0xfe < iVar38) {
                              iVar38 = -1;
                            }
                            iVar37 = uVar27 - 7;
                            *(char *)((long)puVar26 + 6) = (char)iVar38;
                            if (iVar37 != 0) {
                              if (0xfe < iVar37) {
                                iVar37 = -1;
                              }
                              iVar38 = uVar27 - 8;
                              *(char *)((long)puVar26 + 7) = (char)iVar37;
                              if (iVar38 != 0) {
                                if (0xfe < iVar38) {
                                  iVar38 = -1;
                                }
                                iVar37 = uVar27 - 9;
                                *(char *)(puVar26 + 1) = (char)iVar38;
                                if (iVar37 != 0) {
                                  if (0xfe < iVar37) {
                                    iVar37 = -1;
                                  }
                                  iVar38 = uVar27 - 10;
                                  *(char *)((long)puVar26 + 9) = (char)iVar37;
                                  if (iVar38 != 0) {
                                    if (0xfe < iVar38) {
                                      iVar38 = -1;
                                    }
                                    iVar37 = uVar27 - 0xb;
                                    *(char *)((long)puVar26 + 10) = (char)iVar38;
                                    if (iVar37 != 0) {
                                      if (0xfe < iVar37) {
                                        iVar37 = -1;
                                      }
                                      iVar38 = uVar27 - 0xc;
                                      *(char *)((long)puVar26 + 0xb) = (char)iVar37;
                                      if (iVar38 != 0) {
                                        if (0xfe < iVar38) {
                                          iVar38 = -1;
                                        }
                                        iVar37 = uVar27 - 0xd;
                                        *(char *)((long)puVar26 + 0xc) = (char)iVar38;
                                        if (iVar37 != 0) {
                                          if (0xfe < iVar37) {
                                            iVar37 = -1;
                                          }
                                          iVar38 = uVar27 - 0xe;
                                          *(char *)((long)puVar26 + 0xd) = (char)iVar37;
                                          if (iVar38 != 0) {
                                            if (0xfe < iVar38) {
                                              iVar38 = -1;
                                            }
                                            *(char *)((long)puVar26 + 0xe) = (char)iVar38;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar28 = 0;
                iVar37 = uVar27 - 1;
                iVar38 = uVar27 - 2;
                iVar39 = uVar27 - 3;
                uVar36 = uVar27;
                do {
                  iVar11 = uVar36 - 0xc;
                  iVar12 = iVar37 + -0xc;
                  uVar57 = (undefined1)((uint)iVar12 >> 0x18);
                  iVar13 = iVar38 + -0xc;
                  uVar58 = (undefined1)((uint)iVar13 >> 8);
                  uVar59 = (undefined1)((uint)iVar13 >> 0x10);
                  uVar60 = (undefined1)((uint)iVar13 >> 0x18);
                  iVar14 = iVar39 + -0xc;
                  uVar61 = (undefined1)((uint)iVar14 >> 8);
                  uVar62 = (undefined1)((uint)iVar14 >> 0x10);
                  uVar63 = (undefined1)((uint)iVar14 >> 0x18);
                  uVar28 = uVar28 + 1;
                  iVar68 = uVar36 - 4;
                  iVar69 = iVar37 + -4;
                  iVar70 = iVar38 + -4;
                  iVar71 = iVar39 + -4;
                  iVar64 = uVar36 - 8;
                  iVar65 = iVar37 + -8;
                  iVar66 = iVar38 + -8;
                  iVar67 = iVar39 + -8;
                  auVar53._0_4_ = -(uint)(0xfe < (int)uVar36);
                  auVar53._4_4_ = -(uint)(0xfe < iVar37);
                  auVar53._8_4_ = -(uint)(0xfe < iVar38);
                  auVar53._12_4_ = -(uint)(0xfe < iVar39);
                  auVar44._0_4_ = -(uint)(0xfe < iVar11);
                  auVar44._4_4_ = -(uint)(0xfe < iVar12);
                  auVar44._8_4_ = -(uint)(0xfe < iVar13);
                  auVar44._12_4_ = -(uint)(0xfe < iVar14);
                  auVar51._0_4_ = -(uint)(0xfe < iVar68);
                  auVar51._4_4_ = -(uint)(0xfe < iVar69);
                  auVar51._8_4_ = -(uint)(0xfe < iVar70);
                  auVar51._12_4_ = -(uint)(0xfe < iVar71);
                  auVar47._0_4_ = -(uint)(0xfe < iVar64);
                  auVar47._4_4_ = -(uint)(0xfe < iVar65);
                  auVar47._8_4_ = -(uint)(0xfe < iVar66);
                  auVar47._12_4_ = -(uint)(0xfe < iVar67);
                  auVar4._4_4_ = iVar37;
                  auVar4._0_4_ = uVar36;
                  auVar4._8_4_ = iVar38;
                  auVar4._12_4_ = iVar39;
                  auVar54._4_4_ = iVar37;
                  auVar54._0_4_ = uVar36;
                  auVar54._8_4_ = iVar38;
                  auVar54._12_4_ = iVar39;
                  auVar54 = auVar54 ^ (auVar4 ^ auVar40) & auVar53;
                  auVar9[4] = (char)iVar12;
                  auVar9._0_4_ = iVar11;
                  auVar9._5_2_ = 0;
                  auVar9[7] = uVar57;
                  auVar9[8] = (char)iVar13;
                  auVar9[9] = uVar58;
                  auVar9[10] = uVar59;
                  auVar9[0xb] = uVar60;
                  auVar9[0xc] = (char)iVar14;
                  auVar9[0xd] = uVar61;
                  auVar9[0xe] = uVar62;
                  auVar9[0xf] = uVar63;
                  auVar45[4] = (char)iVar12;
                  auVar45._0_4_ = iVar11;
                  auVar45._5_2_ = 0;
                  auVar45[7] = uVar57;
                  auVar45[8] = (char)iVar13;
                  auVar45[9] = uVar58;
                  auVar45[10] = uVar59;
                  auVar45[0xb] = uVar60;
                  auVar45[0xc] = (char)iVar14;
                  auVar45[0xd] = uVar61;
                  auVar45[0xe] = uVar62;
                  auVar45[0xf] = uVar63;
                  auVar45 = auVar45 ^ (auVar9 ^ auVar40) & auVar44;
                  auVar17._4_4_ = iVar69;
                  auVar17._0_4_ = iVar68;
                  auVar17._8_4_ = iVar70;
                  auVar17._12_4_ = iVar71;
                  auVar52._4_4_ = iVar69;
                  auVar52._0_4_ = iVar68;
                  auVar52._8_4_ = iVar70;
                  auVar52._12_4_ = iVar71;
                  auVar52 = auVar52 ^ (auVar17 ^ auVar40) & auVar51;
                  auVar15._4_4_ = iVar65;
                  auVar15._0_4_ = iVar64;
                  auVar15._8_4_ = iVar66;
                  auVar15._12_4_ = iVar67;
                  auVar48._4_4_ = iVar65;
                  auVar48._0_4_ = iVar64;
                  auVar48._8_4_ = iVar66;
                  auVar48._12_4_ = iVar67;
                  auVar48 = auVar48 ^ (auVar15 ^ auVar40) & auVar47;
                  uVar36 = uVar36 - 0x10;
                  iVar37 = iVar37 + -0x10;
                  iVar38 = iVar38 + -0x10;
                  iVar39 = iVar39 + -0x10;
                  uVar18 = CONCAT17(auVar52[0xc],
                                    CONCAT16(auVar52[8],
                                             CONCAT15(auVar52[4],
                                                      CONCAT14(auVar52[0],
                                                               CONCAT13(auVar54[0xc],
                                                                        CONCAT12(auVar54[8],
                                                                                 CONCAT11(auVar54[4]
                                                                                          ,auVar54[0
                                                  ])))))));
                  auVar46[8] = auVar48[0];
                  auVar46._0_8_ = uVar18;
                  auVar46[9] = auVar48[4];
                  auVar46[10] = auVar48[8];
                  auVar46[0xb] = auVar48[0xc];
                  auVar46[0xc] = auVar45[0];
                  auVar46[0xd] = auVar45[4];
                  auVar46[0xe] = auVar45[8];
                  auVar46[0xf] = auVar45[0xc];
                  puVar26[1] = auVar46._8_8_;
                  *puVar26 = uVar18;
                  puVar26 = puVar26 + 2;
                } while (uVar28 < uVar1);
                bVar23 = uVar27 != uVar1 * 0x10;
                uVar27 = uVar27 + uVar1 * -0x10;
                if (bVar23) {
                  puVar26 = (undefined8 *)((long)puVar35 + (ulong)(uVar1 * 0x10));
                  iVar37 = uVar27 - 1;
                  goto LAB_0515b164;
                }
              }
              iVar37 = *(int *)(param_1 + 0x38);
              puVar35 = (undefined8 *)((long)puVar35 + (long)iVar3 + 1);
              if ((bVar33 == bVar22) || (iVar29 != iVar37)) goto LAB_0515b304;
              *(undefined1 *)puVar35 = 1;
              puVar35 = (undefined8 *)((long)puVar35 + 1);
              uVar27 = 1;
              iVar37 = *(int *)(param_1 + 0x38);
              pbVar32 = pbVar31;
              bVar33 = bVar22;
              if (iVar37 <= iVar29) break;
            } while( true );
          }
          iVar34 = iVar34 + 1;
          if (*(int *)(param_1 + 0x3c) <= iVar34) {
            return *(undefined8 **)(param_1 + 0xa8);
          }
        } while( true );
      }
    }
    memset(puVar35,1,(long)*(int *)(param_1 + 0x3c));
    puVar35 = *(undefined8 **)(param_1 + 0xa8);
  }
  return puVar35;
LAB_0515b5f4:
  uVar27 = 1;
  bVar33 = bVar22;
  goto LAB_0515b390;
LAB_0515b304:
  uVar27 = 1;
  bVar33 = bVar22;
  goto LAB_0515b090;
}


/* Sexy::MemoryImage::Delete3DBuffers() */

void __thiscall Sexy::MemoryImage::Delete3DBuffers(MemoryImage *this)

{
  SexyAppBase::Remove3DData(*(MemoryImage **)(this + 0xb8));
  return;
}


/* Sexy::MemoryImage::Palletize() */

char __thiscall Sexy::MemoryImage::Palletize(MemoryImage *this)

{
  char cVar1;
  void *pvVar2;
  uint *puVar3;
  
  cVar1 = '\x01';
  (**(code **)(*(long *)this + 0xa0))();
  if (*(long *)(this + 0x80) == 0) {
    (**(code **)(*(long *)this + 0xd0))(this,0,0,0);
    cVar1 = '\0';
    if (*(long *)(this + 0x70) != 0) {
      pvVar2 = operator_new__((long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
      *(void **)(this + 0x88) = pvVar2;
      puVar3 = operator_new__(0x400);
      *(uint **)(this + 0x80) = puVar3;
      cVar1 = Quantize8Bit(*(uint **)(this + 0x70),*(int *)(this + 0x38),*(int *)(this + 0x3c),
                           *(uchar **)(this + 0x88),puVar3);
      if (cVar1 == '\0') {
        if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
          EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
        }
        *(undefined8 *)(this + 0x88) = 0;
        if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
          EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
        }
        *(undefined8 *)(this + 0x80) = 0;
        this[0x95] = (MemoryImage)0x0;
      }
      else {
        if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
          EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
        }
        *(undefined8 *)(this + 0x70) = 0;
        if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
          EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
        }
        *(undefined8 *)(this + 0x98) = 0;
        this[0x95] = (MemoryImage)0x1;
      }
    }
  }
  return cVar1;
}


/* Sexy::MemoryImage::PurgeBits() */

void __thiscall Sexy::MemoryImage::PurgeBits(MemoryImage *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  this[0x94] = (MemoryImage)0x1;
  cVar1 = SexyAppBase::Is3DAccelerated(*(SexyAppBase **)(this + 0xb8));
  if (cVar1 == '\0') {
    if ((*(long *)(this + 0x70) == 0) && (*(long *)(this + 0x88) == 0)) {
      return;
    }
    pcVar4 = *(code **)(*(long *)this + 0x58);
    uVar3 = (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xa0))(*(long **)(gSexyAppBase + 0x20));
    (*pcVar4)(this,uVar3);
  }
  else {
    lVar2 = FUN_0515b738(*(undefined8 *)(this + 0x20));
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  lVar2 = FUN_0515b738(*(undefined8 *)(this + 0x20));
  if (lVar2 != 0) {
    if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
    }
    *(undefined8 *)(this + 0x88) = 0;
    if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
    }
    *(undefined8 *)(this + 0x80) = 0;
  }
  return;
}


/* Sexy::MemoryImage::StaticGetClass() */

long * Sexy::MemoryImage::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Image::StaticGetClass();
  (*pcVar3)(plVar1,"MemoryImage",uVar2,StaticNew);
  return sClass;
}


/* Sexy::MemoryImage::GetClass() const */

long * Sexy::MemoryImage::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Image::StaticGetClass();
  (*pcVar3)(plVar1,"MemoryImage",uVar2,StaticNew);
  return sClass;
}


/* Sexy::MemoryImage::Init() */

void __thiscall Sexy::MemoryImage::Init(MemoryImage *this)

{
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0x91] = (MemoryImage)0x0;
  this[0x92] = (MemoryImage)0x0;
  this[0xb0] = (MemoryImage)0x0;
  this[0x90] = (MemoryImage)0x0;
  this[0x93] = (MemoryImage)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x94] = (MemoryImage)0x0;
  this[0x95] = (MemoryImage)0x0;
  this[0x96] = (MemoryImage)0x0;
  SexyAppBase::AddMemoryImage(*(SexyAppBase **)(this + 0xb8),this);
  return;
}


/* Sexy::MemoryImage::NormalDrawLineAA(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::MemoryImage::NormalDrawLineAA
          (MemoryImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  
  lVar3 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
  uVar2 = Color::ToInt(param_5);
  iVar15 = (int)param_2;
  iVar13 = (int)param_4;
  iVar17 = (int)param_1;
  dVar20 = param_3;
  dVar21 = param_4;
  iVar16 = iVar15;
  iVar18 = iVar17;
  iVar14 = (int)param_3;
  if (iVar13 < iVar15) {
    dVar20 = param_1;
    dVar21 = param_2;
    param_1 = param_3;
    param_2 = param_4;
    iVar16 = iVar13;
    iVar13 = iVar15;
    iVar18 = (int)param_3;
    iVar14 = iVar17;
  }
  iVar15 = iVar14 - iVar18;
  iVar17 = iVar13 - iVar16;
  dVar20 = dVar20 - param_1;
  uVar19 = 1;
  dVar21 = dVar21 - param_2;
  if (iVar15 < 0) {
    dVar20 = -dVar20;
    iVar15 = -iVar15;
    uVar19 = 0xffffffff;
  }
  iVar9 = *(int *)(param_5 + 0xc);
  if (iVar9 == 0xff) {
    uVar1 = *(uint *)(this + 0x38);
    uVar4 = iVar18 + iVar16 * uVar1;
    uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    puVar7 = (uint *)(lVar3 + uVar12);
    uVar4 = 0x10000 - (int)((1.0 - ABS((float)(param_1 - (double)iVar18))) *
                            (1.0 - ABS((float)(param_2 - (double)iVar16))) * 65536.0);
    uVar6 = (ulong)uVar4;
    if (iVar15 < iVar17) {
      uVar11 = (ulong)(uVar4 >> 8);
      uVar5 = ~(uVar4 >> 8);
      uVar4 = *(uint *)(lVar3 + uVar12);
      uVar8 = uVar5 & 0xff;
      if (uVar8 != 0) {
        uVar5 = uVar5 & 0xff;
        iVar16 = (int)((0xff - (uVar4 >> 0x18)) * uVar5) / 0xff + (uVar4 >> 0x18);
        iVar15 = 0;
        if (iVar16 != 0) {
          iVar15 = (int)(uVar8 * 0x100 - uVar5) / iVar16;
        }
        iVar9 = 0x100 - iVar15;
        *(uint *)(lVar3 + uVar12) =
             iVar15 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
             iVar15 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 | iVar16 * 0x1000000
             | iVar15 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
      }
      uVar12 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
      while( true ) {
        iVar17 = iVar17 + -1;
        uVar6 = uVar6 + (uint)(int)((dVar20 / dVar21) * 65536.0);
        if (iVar17 == 0) break;
        if (0xffff < uVar6) {
          uVar6 = uVar6 & 0xffff;
          puVar7 = (uint *)((long)puVar7 + uVar12);
          iVar18 = iVar18 + (int)uVar19;
        }
        uVar11 = uVar6 >> 8;
        puVar7 = (uint *)((long)puVar7 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
        uVar5 = (uint)(uVar6 >> 8);
        uVar4 = *puVar7;
        uVar8 = ~uVar5 & 0xff;
        if (uVar8 != 0) {
          uVar10 = ~uVar5 & 0xff;
          iVar16 = (int)((0xff - (uVar4 >> 0x18)) * uVar10) / 0xff + (uVar4 >> 0x18);
          iVar15 = 0;
          if (iVar16 != 0) {
            iVar15 = (int)(uVar8 * 0x100 - uVar10) / iVar16;
          }
          iVar9 = 0x100 - iVar15;
          *puVar7 = iVar15 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
                    iVar15 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 |
                    iVar16 * 0x1000000 |
                    iVar15 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
        }
        if ((iVar18 < (int)(uVar1 - 1)) && (uVar11 != 0)) {
          uVar4 = *(uint *)((long)puVar7 + uVar12);
          iVar16 = (int)((0xff - (uVar4 >> 0x18)) * uVar5) / 0xff + (uVar4 >> 0x18);
          iVar15 = 0;
          if (iVar16 != 0) {
            iVar15 = (int)(uVar5 * 0xff) / iVar16;
          }
          iVar9 = 0x100 - iVar15;
          *(uint *)((long)puVar7 + uVar12) =
               iVar15 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
               iVar15 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 |
               iVar16 * 0x1000000 | iVar15 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
        }
      }
    }
    else {
      uVar11 = (ulong)(uVar4 >> 8);
      uVar5 = ~(uVar4 >> 8);
      uVar4 = *(uint *)(lVar3 + uVar12);
      uVar8 = uVar5 & 0xff;
      if (uVar8 != 0) {
        uVar5 = uVar5 & 0xff;
        iVar18 = (int)((0xff - (uVar4 >> 0x18)) * uVar5) / 0xff + (uVar4 >> 0x18);
        iVar17 = 0;
        if (iVar18 != 0) {
          iVar17 = (int)(uVar8 * 0x100 - uVar5) / iVar18;
        }
        iVar9 = 0x100 - iVar17;
        *(uint *)(lVar3 + uVar12) =
             iVar17 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
             iVar17 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 | iVar18 * 0x1000000
             | iVar17 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
      }
      uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
LAB_0515c4fc:
      iVar15 = iVar15 + -1;
      if (iVar15 != 0) {
        while( true ) {
          uVar6 = uVar6 + (uint)(int)((dVar21 / dVar20) * 65536.0);
          if (0xffff < uVar6) {
            uVar6 = uVar6 & 0xffff;
            puVar7 = (uint *)((long)puVar7 + uVar12);
            iVar16 = iVar16 + 1;
          }
          uVar11 = uVar6 >> 8;
          puVar7 = (uint *)((long)puVar7 + (-(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2));
          uVar5 = (uint)(uVar6 >> 8);
          uVar4 = *puVar7;
          uVar8 = ~uVar5 & 0xff;
          if (uVar8 != 0) {
            uVar10 = ~uVar5 & 0xff;
            iVar18 = (int)((0xff - (uVar4 >> 0x18)) * uVar10) / 0xff + (uVar4 >> 0x18);
            iVar17 = 0;
            if (iVar18 != 0) {
              iVar17 = (int)(uVar8 * 0x100 - uVar10) / iVar18;
            }
            iVar9 = 0x100 - iVar17;
            *puVar7 = iVar17 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
                      iVar17 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 |
                      iVar18 * 0x1000000 |
                      iVar17 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
          }
          if (*(int *)(this + 0x3c) + -1 <= iVar16) break;
          uVar4 = *(uint *)((long)puVar7 + uVar12);
          if (uVar11 == 0) break;
          iVar15 = iVar15 + -1;
          iVar18 = (int)((0xff - (uVar4 >> 0x18)) * uVar5) / 0xff + (uVar4 >> 0x18);
          iVar17 = 0;
          if (iVar18 != 0) {
            iVar17 = (int)(uVar5 * 0xff) / iVar18;
          }
          iVar9 = 0x100 - iVar17;
          *(uint *)((long)puVar7 + uVar12) =
               iVar17 * (uVar2 & 0xff0000) + iVar9 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
               iVar17 * (uVar2 & 0xff00) + iVar9 * (uVar4 & 0xff00) >> 8 & 0xff00 |
               iVar18 * 0x1000000 | iVar17 * (uVar2 & 0xff) + iVar9 * (uVar4 & 0xff) >> 8 & 0xff;
          if (iVar15 == 0) goto LAB_0515c668;
        }
        goto LAB_0515c4fc;
      }
    }
LAB_0515c668:
    uVar1 = iVar14 + iVar13 * uVar1;
    uVar19 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    uVar1 = *(uint *)(lVar3 + uVar19);
    uVar4 = ~(uint)uVar11 & 0xff;
    if (uVar4 != 0) {
      uVar5 = ~(uint)uVar11 & 0xff;
      iVar16 = (int)((0xff - (uVar1 >> 0x18)) * uVar5) / 0xff + (uVar1 >> 0x18);
      iVar18 = 0;
      if (iVar16 != 0) {
        iVar18 = (int)(uVar4 * 0x100 - uVar5) / iVar16;
      }
      iVar13 = 0x100 - iVar18;
      *(uint *)(lVar3 + uVar19) =
           iVar18 * (uVar2 & 0xff0000) + iVar13 * (uVar1 & 0xff0000) >> 8 & 0xff0000 |
           iVar18 * (uVar2 & 0xff00) + iVar13 * (uVar1 & 0xff00) >> 8 & 0xff00 | iVar16 * 0x1000000
           | iVar18 * (uVar2 & 0xff) + iVar13 * (uVar1 & 0xff) >> 8 & 0xff;
    }
  }
  else {
    uVar1 = *(uint *)(this + 0x38);
    uVar4 = iVar18 + iVar16 * uVar1;
    uVar12 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
    puVar7 = (uint *)(lVar3 + uVar12);
    uVar4 = 0x10000 - (int)((1.0 - ABS((float)(param_1 - (double)iVar18))) *
                            (1.0 - ABS((float)(param_2 - (double)iVar16))) * 65536.0);
    uVar6 = (ulong)uVar4;
    if (iVar15 < iVar17) {
      uVar11 = (ulong)(uVar4 >> 8);
      uVar5 = *(uint *)(lVar3 + uVar12);
      uVar4 = ~(uVar4 >> 8) & 0xff;
      iVar16 = (int)(uVar4 + iVar9 * uVar4) >> 8;
      if (iVar16 != 0) {
        iVar15 = (int)((0xff - (uVar5 >> 0x18)) * iVar16) / 0xff + (uVar5 >> 0x18);
        iVar9 = 0;
        if (iVar15 != 0) {
          iVar9 = (iVar16 * 0xff) / iVar15;
        }
        iVar16 = 0x100 - iVar9;
        *(uint *)(lVar3 + uVar12) =
             iVar9 * (uVar2 & 0xff0000) + iVar16 * (uVar5 & 0xff0000) >> 8 & 0xff0000 |
             iVar9 * (uVar2 & 0xff00) + iVar16 * (uVar5 & 0xff00) >> 8 & 0xff00 | iVar15 * 0x1000000
             | iVar9 * (uVar2 & 0xff) + iVar16 * (uVar5 & 0xff) >> 8 & 0xff;
        iVar9 = *(int *)(param_5 + 0xc);
      }
      uVar12 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
      iVar9 = iVar9 + 1;
      while( true ) {
        uVar4 = (uint)uVar11;
        iVar17 = iVar17 + -1;
        uVar6 = uVar6 + (uint)(int)((dVar20 / dVar21) * 65536.0);
        if (iVar17 == 0) break;
        if (0xffff < uVar6) {
          uVar6 = uVar6 & 0xffff;
          puVar7 = (uint *)((long)puVar7 + uVar12);
          iVar18 = iVar18 + (int)uVar19;
        }
        uVar11 = uVar6 >> 8;
        puVar7 = (uint *)((long)puVar7 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
        uVar5 = (uint)(uVar6 >> 8);
        uVar4 = *puVar7;
        iVar16 = (int)((~uVar5 & 0xff) * iVar9) >> 8;
        if (iVar16 != 0) {
          iVar15 = (int)((0xff - (uVar4 >> 0x18)) * iVar16) / 0xff + (uVar4 >> 0x18);
          iVar9 = 0;
          if (iVar15 != 0) {
            iVar9 = (iVar16 * 0xff) / iVar15;
          }
          iVar16 = 0x100 - iVar9;
          *puVar7 = iVar9 * (uVar2 & 0xff0000) + iVar16 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
                    iVar9 * (uVar2 & 0xff00) + iVar16 * (uVar4 & 0xff00) >> 8 & 0xff00 |
                    iVar15 * 0x1000000 |
                    iVar9 * (uVar2 & 0xff) + iVar16 * (uVar4 & 0xff) >> 8 & 0xff;
          iVar9 = *(int *)(param_5 + 0xc) + 1;
        }
        if (iVar18 < (int)(uVar1 - 1)) {
          iVar16 = (int)(iVar9 * uVar5) >> 8;
          if (iVar16 != 0) {
            uVar4 = *(uint *)((long)puVar7 + uVar12);
            iVar15 = (int)((0xff - (uVar4 >> 0x18)) * iVar16) / 0xff + (uVar4 >> 0x18);
            iVar9 = 0;
            if (iVar15 != 0) {
              iVar9 = (iVar16 * 0xff) / iVar15;
            }
            iVar16 = 0x100 - iVar9;
            *(uint *)((long)puVar7 + uVar12) =
                 iVar9 * (uVar2 & 0xff0000) + iVar16 * (uVar4 & 0xff0000) >> 8 & 0xff0000 |
                 iVar9 * (uVar2 & 0xff00) + iVar16 * (uVar4 & 0xff00) >> 8 & 0xff00 |
                 iVar15 * 0x1000000 | iVar9 * (uVar2 & 0xff) + iVar16 * (uVar4 & 0xff) >> 8 & 0xff;
            iVar9 = *(int *)(param_5 + 0xc) + 1;
          }
        }
      }
    }
    else {
      uVar11 = (ulong)(uVar4 >> 8);
      uVar5 = *(uint *)(lVar3 + uVar12);
      uVar4 = ~(uVar4 >> 8) & 0xff;
      iVar18 = (int)(uVar4 + iVar9 * uVar4) >> 8;
      if (iVar18 != 0) {
        iVar17 = (int)((0xff - (uVar5 >> 0x18)) * iVar18) / 0xff + (uVar5 >> 0x18);
        iVar9 = 0;
        if (iVar17 != 0) {
          iVar9 = (iVar18 * 0xff) / iVar17;
        }
        iVar18 = 0x100 - iVar9;
        *(uint *)(lVar3 + uVar12) =
             iVar9 * (uVar2 & 0xff0000) + iVar18 * (uVar5 & 0xff0000) >> 8 & 0xff0000 |
             iVar9 * (uVar2 & 0xff00) + iVar18 * (uVar5 & 0xff00) >> 8 & 0xff00 | iVar17 * 0x1000000
             | iVar9 * (uVar2 & 0xff) + iVar18 * (uVar5 & 0xff) >> 8 & 0xff;
        iVar9 = *(int *)(param_5 + 0xc);
      }
      uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      iVar9 = iVar9 + 1;
LAB_0515bf54:
      uVar4 = (uint)uVar11;
      iVar15 = iVar15 + -1;
      if (iVar15 != 0) {
        while( true ) {
          uVar6 = uVar6 + (uint)(int)((dVar21 / dVar20) * 65536.0);
          if (0xffff < uVar6) {
            uVar6 = uVar6 & 0xffff;
            puVar7 = (uint *)((long)puVar7 + uVar12);
            iVar16 = iVar16 + 1;
          }
          uVar11 = uVar6 >> 8;
          uVar4 = (uint)(uVar6 >> 8);
          puVar7 = (uint *)((long)puVar7 + (-(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2));
          uVar5 = *puVar7;
          iVar18 = (int)((~uVar4 & 0xff) * iVar9) >> 8;
          if (iVar18 != 0) {
            iVar17 = (int)((0xff - (uVar5 >> 0x18)) * iVar18) / 0xff + (uVar5 >> 0x18);
            iVar9 = 0;
            if (iVar17 != 0) {
              iVar9 = (iVar18 * 0xff) / iVar17;
            }
            iVar18 = 0x100 - iVar9;
            *puVar7 = iVar9 * (uVar2 & 0xff0000) + iVar18 * (uVar5 & 0xff0000) >> 8 & 0xff0000 |
                      iVar9 * (uVar2 & 0xff00) + iVar18 * (uVar5 & 0xff00) >> 8 & 0xff00 |
                      iVar17 * 0x1000000 |
                      iVar9 * (uVar2 & 0xff) + iVar18 * (uVar5 & 0xff) >> 8 & 0xff;
            iVar9 = *(int *)(param_5 + 0xc) + 1;
          }
          iVar18 = (int)(iVar9 * uVar4) >> 8;
          if (*(int *)(this + 0x3c) + -1 <= iVar16) break;
          uVar5 = *(uint *)((long)puVar7 + uVar12);
          if (iVar18 == 0) break;
          iVar15 = iVar15 + -1;
          iVar17 = (int)((0xff - (uVar5 >> 0x18)) * iVar18) / 0xff + (uVar5 >> 0x18);
          iVar9 = 0;
          if (iVar17 != 0) {
            iVar9 = (iVar18 * 0xff) / iVar17;
          }
          iVar18 = 0x100 - iVar9;
          *(uint *)((long)puVar7 + uVar12) =
               iVar9 * (uVar2 & 0xff0000) + iVar18 * (uVar5 & 0xff0000) >> 8 & 0xff0000 |
               iVar9 * (uVar2 & 0xff00) + iVar18 * (uVar5 & 0xff00) >> 8 & 0xff00 |
               iVar17 * 0x1000000 | iVar9 * (uVar2 & 0xff) + iVar18 * (uVar5 & 0xff) >> 8 & 0xff;
          iVar9 = *(int *)(param_5 + 0xc) + 1;
          if (iVar15 == 0) goto LAB_0515c0e8;
        }
        goto LAB_0515bf54;
      }
    }
LAB_0515c0e8:
    uVar1 = iVar14 + iVar13 * uVar1;
    uVar19 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    iVar16 = (int)((~uVar4 & 0xff) * iVar9) >> 8;
    uVar1 = *(uint *)(lVar3 + uVar19);
    if (iVar16 != 0) {
      iVar18 = (int)((0xff - (uVar1 >> 0x18)) * iVar16) / 0xff + (uVar1 >> 0x18);
      iVar13 = 0;
      if (iVar18 != 0) {
        iVar13 = (iVar16 * 0xff) / iVar18;
      }
      iVar16 = 0x100 - iVar13;
      *(uint *)(lVar3 + uVar19) =
           iVar13 * (uVar2 & 0xff0000) + iVar16 * (uVar1 & 0xff0000) >> 8 & 0xff0000 |
           iVar13 * (uVar2 & 0xff00) + iVar16 * (uVar1 & 0xff00) >> 8 & 0xff00 | iVar18 * 0x1000000
           | iVar13 * (uVar2 & 0xff) + iVar16 * (uVar1 & 0xff) >> 8 & 0xff;
    }
  }
  (**(code **)(*(long *)this + 0x98))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::AdditiveBlt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color
   const&) */

void __thiscall
Sexy::MemoryImage::AdditiveBlt
          (MemoryImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar11 = *(code **)(*(long *)param_1 + 0x48);
  param_1[0x28] = (Image)0x1;
  plVar8 = (long *)(*pcVar11)(param_1);
  lVar1 = *(long *)(this + 0xb8) + 0x15c;
  if (plVar8 == (long *)0x0) goto LAB_0515cc80;
  lVar17 = plVar8[0x10];
  if (lVar17 == 0) {
    lVar9 = (**(code **)(*plVar8 + 0xd0))(plVar8,0,0,0,0);
    lVar17 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    lVar17 = lVar17 + ((long)param_2 + (long)(param_3 * *(int *)(this + 0x38))) * 4;
    lVar9 = lVar9 + ((long)*(int *)param_4 +
                    (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38))) * 4;
    Color::Color(aCStack_18,1);
    cVar6 = Sexy::operator==(param_5,aCStack_18);
    if (cVar6 == '\0') {
      iVar10 = *(int *)(param_5 + 0xc);
      iVar12 = (iVar10 * *(int *)param_5) / 0xff;
      iVar5 = (iVar10 * *(int *)(param_5 + 8)) / 0xff;
      iVar14 = *(int *)(param_4 + 0xc);
      iVar10 = (iVar10 * *(int *)(param_5 + 4)) / 0xff;
      if (*(char *)((long)plVar8 + 0x92) == '\0') {
        if (0 < iVar14) {
          iVar13 = *(int *)(param_4 + 8);
          iVar7 = 0;
          do {
            if (0 < iVar13) {
              lVar15 = 0;
              do {
                uVar2 = *(uint *)(lVar9 + lVar15 * 4);
                iVar14 = (int)lVar15;
                uVar3 = *(uint *)(lVar17 + lVar15 * 4);
                *(uint *)(lVar17 + lVar15 * 4) =
                     (uint)*(byte *)(lVar1 + ((ulong)(byte)uVar2 * (long)iVar5 >> 8) +
                                    (ulong)(byte)uVar3) | uVar3 & 0xff000000 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff0000) +
                                              (((ulong)uVar2 & 0xff0000) * (long)iVar12 >> 8) >>
                                             0x10)) << 0x10 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff00) +
                                              (((ulong)uVar2 & 0xff00) * (long)iVar10 >> 8) >> 8))
                     << 8;
                lVar15 = lVar15 + 1;
                iVar13 = *(int *)(param_4 + 8);
              } while (iVar14 + 1 < iVar13);
              iVar14 = *(int *)(param_4 + 0xc);
            }
            iVar7 = iVar7 + 1;
            lVar17 = lVar17 + (long)*(int *)(this + 0x38) * 4;
            lVar9 = lVar9 + (long)*(int *)(param_1 + 0x38) * 4;
          } while (iVar7 < iVar14);
        }
      }
      else if (0 < iVar14) {
        iVar13 = *(int *)(param_4 + 8);
        iVar7 = 0;
        do {
          if (0 < iVar13) {
            lVar15 = 0;
            do {
              uVar2 = *(uint *)(lVar9 + lVar15 * 4);
              iVar14 = (int)lVar15;
              uVar3 = *(uint *)(lVar17 + lVar15 * 4);
              uVar4 = (ulong)(uVar2 >> 0x18);
              *(uint *)(lVar17 + lVar15 * 4) =
                   (uint)*(byte *)(lVar1 + (((ulong)(byte)uVar2 * (long)iVar5 >> 8) * uVar4 >> 8) +
                                  (ulong)(byte)uVar3) | uVar3 & 0xff000000 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff0000) +
                                            ((((ulong)uVar2 & 0xff0000) * (long)iVar12 >> 8) * uVar4
                                            >> 8) >> 0x10)) << 0x10 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff00) +
                                            ((((ulong)uVar2 & 0xff00) * (long)iVar10 >> 8) * uVar4
                                            >> 8) >> 8)) << 8;
              lVar15 = lVar15 + 1;
              iVar13 = *(int *)(param_4 + 8);
            } while (iVar14 + 1 < iVar13);
            iVar14 = *(int *)(param_4 + 0xc);
          }
          iVar7 = iVar7 + 1;
          lVar17 = lVar17 + (long)*(int *)(this + 0x38) * 4;
          lVar9 = lVar9 + (long)*(int *)(param_1 + 0x38) * 4;
        } while (iVar7 < iVar14);
      }
    }
    else {
      iVar10 = *(int *)(param_4 + 0xc);
      if (*(char *)((long)plVar8 + 0x92) == '\0') {
        if (0 < iVar10) {
          iVar12 = *(int *)(param_4 + 8);
          iVar14 = 0;
          do {
            lVar15 = 0;
            if (0 < iVar12) {
              do {
                uVar2 = *(uint *)(lVar17 + lVar15 * 4);
                iVar10 = (int)lVar15;
                uVar3 = *(uint *)(lVar9 + lVar15 * 4);
                *(uint *)(lVar17 + lVar15 * 4) =
                     (uint)*(byte *)(lVar1 + (ulong)(byte)uVar3 + (ulong)(byte)uVar2) |
                     uVar2 & 0xff000000 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff0000) + ((ulong)uVar2 & 0xff0000)
                                             >> 0x10)) << 0x10 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff00) + ((ulong)uVar2 & 0xff00) >> 8
                                             )) << 8;
                lVar15 = lVar15 + 1;
                iVar12 = *(int *)(param_4 + 8);
              } while (iVar10 + 1 < iVar12);
              iVar10 = *(int *)(param_4 + 0xc);
            }
            iVar14 = iVar14 + 1;
            lVar17 = lVar17 + (long)*(int *)(this + 0x38) * 4;
            lVar9 = lVar9 + (long)*(int *)(param_1 + 0x38) * 4;
          } while (iVar14 < iVar10);
        }
      }
      else if (0 < iVar10) {
        iVar12 = *(int *)(param_4 + 8);
        iVar14 = 0;
        do {
          lVar15 = 0;
          if (0 < iVar12) {
            do {
              uVar2 = *(uint *)(lVar9 + lVar15 * 4);
              iVar10 = (int)lVar15;
              uVar3 = *(uint *)(lVar17 + lVar15 * 4);
              uVar4 = (ulong)(uVar2 >> 0x18);
              *(uint *)(lVar17 + lVar15 * 4) =
                   (uint)*(byte *)(lVar1 + (uVar4 * (byte)uVar2 >> 8) + (ulong)(byte)uVar3) |
                   uVar3 & 0xff000000 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff0000) +
                                            (uVar4 * ((ulong)uVar2 & 0xff0000) >> 8) >> 0x10)) <<
                   0x10 | (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff00) +
                                                   (uVar4 * ((ulong)uVar2 & 0xff00) >> 8) >> 8)) <<
                          8;
              lVar15 = lVar15 + 1;
              iVar12 = *(int *)(param_4 + 8);
            } while (iVar10 + 1 < iVar12);
            iVar10 = *(int *)(param_4 + 0xc);
          }
          iVar14 = iVar14 + 1;
          lVar17 = lVar17 + (long)*(int *)(this + 0x38) * 4;
          lVar9 = lVar9 + (long)*(int *)(param_1 + 0x38) * 4;
        } while (iVar14 < iVar10);
      }
    }
  }
  else {
    lVar15 = plVar8[0x11];
    lVar9 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    lVar9 = lVar9 + ((long)param_2 + (long)(param_3 * *(int *)(this + 0x38))) * 4;
    lVar15 = lVar15 + (long)*(int *)param_4 +
                      (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38));
    Color::Color(aCStack_18,1);
    cVar6 = Sexy::operator==(param_5,aCStack_18);
    if (cVar6 == '\0') {
      iVar10 = *(int *)(param_5 + 0xc);
      iVar12 = (iVar10 * *(int *)(param_5 + 4)) / 0xff;
      iVar14 = *(int *)(param_4 + 0xc);
      iVar5 = (iVar10 * *(int *)param_5) / 0xff;
      iVar10 = (iVar10 * *(int *)(param_5 + 8)) / 0xff;
      if (*(char *)((long)plVar8 + 0x92) == '\0') {
        if (0 < iVar14) {
          iVar13 = *(int *)(param_4 + 8);
          iVar7 = 0;
          do {
            if (0 < iVar13) {
              lVar16 = 0;
              do {
                iVar14 = (int)lVar16;
                uVar2 = *(uint *)(lVar9 + lVar16 * 4);
                uVar3 = *(uint *)(lVar17 + (ulong)*(byte *)(lVar15 + lVar16) * 4);
                *(uint *)(lVar9 + lVar16 * 4) =
                     (uint)*(byte *)(lVar1 + ((ulong)(byte)uVar3 * (long)iVar10 >> 8) +
                                    (ulong)(byte)uVar2) | uVar2 & 0xff000000 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff0000) +
                                              (((ulong)uVar3 & 0xff0000) * (long)iVar5 >> 8) >> 0x10
                                             )) << 0x10 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff00) +
                                              (((ulong)uVar3 & 0xff00) * (long)iVar12 >> 8) >> 8))
                     << 8;
                lVar16 = lVar16 + 1;
                iVar13 = *(int *)(param_4 + 8);
              } while (iVar14 + 1 < iVar13);
              iVar14 = *(int *)(param_4 + 0xc);
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + (long)*(int *)(this + 0x38) * 4;
            lVar15 = lVar15 + *(int *)(param_1 + 0x38);
          } while (iVar7 < iVar14);
          (**(code **)(*(long *)this + 0x98))(this);
          goto LAB_0515cc80;
        }
      }
      else if (0 < iVar14) {
        iVar13 = *(int *)(param_4 + 8);
        iVar7 = 0;
        do {
          if (0 < iVar13) {
            lVar16 = 0;
            do {
              iVar14 = (int)lVar16;
              uVar2 = *(uint *)(lVar9 + lVar16 * 4);
              uVar3 = *(uint *)(lVar17 + (ulong)*(byte *)(lVar15 + lVar16) * 4);
              uVar4 = (ulong)(uVar3 >> 0x18);
              *(uint *)(lVar9 + lVar16 * 4) =
                   (uint)*(byte *)(lVar1 + (((ulong)(byte)uVar3 * (long)iVar10 >> 8) * uVar4 >> 8) +
                                  (ulong)(byte)uVar2) | uVar2 & 0xff000000 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff0000) +
                                            ((((ulong)uVar3 & 0xff0000) * (long)iVar5 >> 8) * uVar4
                                            >> 8) >> 0x10)) << 0x10 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff00) +
                                            ((((ulong)uVar3 & 0xff00) * (long)iVar12 >> 8) * uVar4
                                            >> 8) >> 8)) << 8;
              lVar16 = lVar16 + 1;
              iVar13 = *(int *)(param_4 + 8);
            } while (iVar14 + 1 < iVar13);
            iVar14 = *(int *)(param_4 + 0xc);
          }
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + (long)*(int *)(this + 0x38) * 4;
          lVar15 = lVar15 + *(int *)(param_1 + 0x38);
        } while (iVar7 < iVar14);
        (**(code **)(*(long *)this + 0x98))(this);
        goto LAB_0515cc80;
      }
    }
    else {
      iVar10 = *(int *)(param_4 + 0xc);
      if (*(char *)((long)plVar8 + 0x92) == '\0') {
        if (0 < iVar10) {
          iVar12 = *(int *)(param_4 + 8);
          iVar14 = 0;
          do {
            lVar16 = 0;
            if (0 < iVar12) {
              do {
                iVar10 = (int)lVar16;
                uVar2 = *(uint *)(lVar9 + lVar16 * 4);
                uVar3 = *(uint *)(lVar17 + (ulong)*(byte *)(lVar15 + lVar16) * 4);
                *(uint *)(lVar9 + lVar16 * 4) =
                     (uint)*(byte *)(lVar1 + (ulong)(byte)uVar3 + (ulong)(byte)uVar2) |
                     uVar2 & 0xff000000 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff0000) + ((ulong)uVar2 & 0xff0000)
                                             >> 0x10)) << 0x10 |
                     (uint)*(byte *)(lVar1 + (((ulong)uVar3 & 0xff00) + ((ulong)uVar2 & 0xff00) >> 8
                                             )) << 8;
                lVar16 = lVar16 + 1;
                iVar12 = *(int *)(param_4 + 8);
              } while (iVar10 + 1 < iVar12);
              iVar10 = *(int *)(param_4 + 0xc);
            }
            iVar14 = iVar14 + 1;
            lVar9 = lVar9 + (long)*(int *)(this + 0x38) * 4;
            lVar15 = lVar15 + *(int *)(param_1 + 0x38);
          } while (iVar14 < iVar10);
          (**(code **)(*(long *)this + 0x98))(this);
          goto LAB_0515cc80;
        }
      }
      else if (0 < iVar10) {
        iVar12 = *(int *)(param_4 + 8);
        iVar14 = 0;
        do {
          lVar16 = 0;
          if (0 < iVar12) {
            do {
              iVar10 = (int)lVar16;
              uVar2 = *(uint *)(lVar9 + lVar16 * 4);
              uVar3 = *(uint *)(lVar17 + (ulong)*(byte *)(lVar15 + lVar16) * 4);
              uVar4 = (ulong)(uVar3 >> 0x18);
              *(uint *)(lVar9 + lVar16 * 4) =
                   (uint)*(byte *)(lVar1 + (uVar4 * (byte)uVar3 >> 8) + (ulong)(byte)uVar2) |
                   uVar2 & 0xff000000 |
                   (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff0000) +
                                            (uVar4 * ((ulong)uVar3 & 0xff0000) >> 8) >> 0x10)) <<
                   0x10 | (uint)*(byte *)(lVar1 + (((ulong)uVar2 & 0xff00) +
                                                   (uVar4 * ((ulong)uVar3 & 0xff00) >> 8) >> 8)) <<
                          8;
              lVar16 = lVar16 + 1;
              iVar12 = *(int *)(param_4 + 8);
            } while (iVar10 + 1 < iVar12);
            iVar10 = *(int *)(param_4 + 0xc);
          }
          iVar14 = iVar14 + 1;
          lVar9 = lVar9 + (long)*(int *)(this + 0x38) * 4;
          lVar15 = lVar15 + *(int *)(param_1 + 0x38);
        } while (iVar14 < iVar10);
      }
    }
  }
  (**(code **)(*(long *)this + 0x98))(this);
LAB_0515cc80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::NormalBlt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&)
    */

void __thiscall
Sexy::MemoryImage::NormalBlt
          (MemoryImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  byte bVar25;
  byte *pbVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  byte *pbVar31;
  uint *puVar32;
  uint *puVar33;
  long lVar34;
  uint *puVar35;
  undefined8 uVar36;
  Color aCStack_18 [16];
  long local_8;
  
  pcVar12 = *(code **)(*(long *)param_1 + 0x48);
  local_8 = ___stack_chk_guard;
  param_1[0x28] = (Image)0x1;
  plVar6 = (long *)(*pcVar12)(param_1);
  if (plVar6 == (long *)0x0) goto LAB_0515d5a0;
  lVar34 = plVar6[0x10];
  if (lVar34 == 0) {
    lVar34 = (**(code **)(*plVar6 + 0xd0))(plVar6,0,0,0,0);
    puVar35 = (uint *)(lVar34 + ((long)*(int *)param_4 +
                                (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38))) * 4);
    lVar34 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    puVar33 = (uint *)(lVar34 + ((long)param_2 + (long)(param_3 * *(int *)(this + 0x38))) * 4);
    if ((this[0x92] == (MemoryImage)0x0) && (this[0x91] == (MemoryImage)0x0)) {
      Color::Color(aCStack_18,1);
      cVar5 = TRect<int>::operator!=((TRect<int> *)param_5,(TRect *)aCStack_18);
      if (cVar5 == '\0') {
        lVar34 = (**(code **)(*plVar6 + 0x60))(plVar6);
        iVar10 = *(int *)(param_4 + 0xc);
        iVar29 = *(int *)(param_1 + 0x38);
        pbVar9 = (byte *)(lVar34 + (long)*(int *)param_4 + (long)(*(int *)(param_4 + 4) * iVar29));
        if (0 < iVar10) {
          iVar18 = 0;
          do {
            uVar30 = *(uint *)(param_4 + 8);
            puVar24 = puVar33;
            puVar32 = puVar35;
            pbVar8 = pbVar9;
            if (0 < (int)uVar30) {
              do {
                bVar25 = *pbVar8;
                uVar15 = (ulong)bVar25;
                uVar27 = (uint)bVar25;
                uVar2 = *puVar32;
                if ((int)uVar30 < (int)(uint)bVar25) {
                  iVar10 = 0x100 - (uVar2 >> 0x18);
                  uVar15 = (ulong)(byte)uVar30;
                  uVar27 = uVar30;
                  uVar16 = uVar30;
                  if (iVar10 == 1) {
LAB_0515def8:
                    if ((uVar27 < 9) || (puVar24 < puVar32 + 4 && puVar32 < puVar24 + 4)) {
                      lVar34 = 0;
                      do {
                        puVar24[lVar34] = puVar32[lVar34];
                        lVar34 = lVar34 + 1;
                      } while ((int)lVar34 < (int)uVar27);
                    }
                    else {
                      uVar2 = (uVar27 - 4 >> 2) + 1;
                      uVar16 = 0;
                      uVar3 = uVar2 * 4;
                      puVar21 = puVar32;
                      puVar22 = puVar24;
                      do {
                        uVar36 = *(undefined8 *)puVar21;
                        uVar16 = uVar16 + 1;
                        *(undefined8 *)(puVar22 + 2) = *(undefined8 *)(puVar21 + 2);
                        *(undefined8 *)puVar22 = uVar36;
                        puVar21 = puVar21 + 4;
                        puVar22 = puVar22 + 4;
                      } while (uVar16 < uVar2);
                      if (((uVar3 != uVar27) &&
                          (puVar24[uVar3] = puVar32[uVar3], (int)(uVar3 + 1) < (int)uVar27)) &&
                         (puVar24[(ulong)uVar3 + 1] = puVar32[(ulong)uVar3 + 1],
                         (int)(uVar3 + 2) < (int)uVar27)) {
                        puVar24[(ulong)uVar3 + 2] = puVar32[(ulong)uVar3 + 2];
                      }
                    }
                    lVar34 = (ulong)(uVar27 - 1) + 1;
                    puVar32 = puVar32 + lVar34;
                    puVar21 = puVar24 + lVar34;
                  }
                  else {
LAB_0515dda8:
                    uVar27 = uVar16;
                    if (iVar10 == 0x100) {
                      puVar32 = puVar32 + uVar15;
                      puVar21 = puVar24 + uVar15;
                    }
                    else {
                      puVar21 = puVar24 + 1;
                      puVar32 = puVar32 + 1;
                      *puVar24 = (int)((long)(0x100 - iVar10) * (ulong)(uVar2 & 0xff00ff) >> 8) +
                                 (int)((long)iVar10 * (ulong)(*puVar24 & 0xff00ff) >> 8) & 0xff00ffU
                                 | (int)((long)(0x100 - iVar10) * ((ulong)uVar2 & 0xff00) >> 8) +
                                   (int)((long)iVar10 * ((ulong)*puVar24 & 0xff00) >> 8) & 0xff00U |
                                 0xff000000;
                      if (1 < (int)uVar27) {
                        puVar22 = puVar21;
                        puVar28 = puVar32;
                        do {
                          uVar2 = *puVar28;
                          uVar16 = uVar2 >> 0x18;
                          puVar23 = puVar22 + 1;
                          *puVar22 = (int)((ulong)(*puVar22 & 0xff00ff) *
                                           (long)(int)(0x100 - uVar16) >> 8) +
                                     (int)((ulong)(uVar2 & 0xff00ff) * (ulong)uVar16 >> 8) &
                                     0xff00ffU |
                                     (int)(((ulong)*puVar22 & 0xff00) * (long)(int)(0x100 - uVar16)
                                          >> 8) +
                                     (int)(((ulong)uVar2 & 0xff00) * (ulong)uVar16 >> 8) & 0xff00U |
                                     0xff000000;
                          puVar22 = puVar23;
                          puVar28 = puVar28 + 1;
                        } while (puVar23 != puVar24 + (ulong)(uVar27 - 2) + 2);
                        lVar34 = (ulong)(uVar27 - 2) + 1;
                        puVar32 = puVar32 + lVar34;
                        puVar21 = puVar21 + lVar34;
                      }
                    }
                  }
                }
                else {
                  iVar10 = 0x100 - (uVar2 >> 0x18);
                  uVar16 = (uint)bVar25;
                  if (iVar10 != 1) goto LAB_0515dda8;
                  if (bVar25 != 0) goto LAB_0515def8;
                  uVar15 = 0;
                  puVar21 = puVar24;
                }
                uVar30 = uVar30 - uVar27;
                puVar24 = puVar21;
                pbVar8 = pbVar8 + uVar15;
              } while (0 < (int)uVar30);
              iVar29 = *(int *)(param_1 + 0x38);
              iVar10 = *(int *)(param_4 + 0xc);
            }
            iVar18 = iVar18 + 1;
            pbVar9 = pbVar9 + iVar29;
            puVar33 = puVar33 + *(int *)(this + 0x38);
            puVar35 = puVar35 + iVar29;
          } while (iVar18 < iVar10);
        }
        goto LAB_0515d590;
      }
    }
    Color::Color(aCStack_18,1);
    cVar5 = Sexy::operator==(param_5,aCStack_18);
    if (cVar5 == '\0') {
      iVar10 = *(int *)(param_5 + 4);
      iVar29 = *(int *)(param_5 + 8);
      iVar18 = *(int *)(param_5 + 0xc);
      iVar1 = *(int *)param_5;
      iVar13 = *(int *)(param_4 + 0xc);
      if ((iVar10 == iVar29) && (iVar1 == iVar10)) {
        if (0 < iVar13) {
          iVar29 = *(int *)(param_4 + 8);
          iVar10 = 0;
          do {
            if (0 < iVar29) {
              iVar13 = 0;
              puVar24 = puVar35;
              puVar32 = puVar33;
              do {
                uVar2 = *puVar24;
                uVar30 = *puVar32;
                iVar11 = (int)(((ulong)(uVar2 >> 0x18) * (long)iVar18) / 0xff);
                if (iVar11 != 0) {
                  iVar29 = (int)((0xff - (uVar30 >> 0x18)) * iVar11) / 0xff + (uVar30 >> 0x18);
                  iVar19 = 0;
                  if (iVar29 != 0) {
                    iVar19 = (iVar11 * 0xff) / iVar29;
                  }
                  *puVar32 = (int)((long)(0x100 - iVar19) * (ulong)(uVar30 & 0xff00ff) >> 8) +
                             (int)((long)iVar19 *
                                   ((ulong)(uVar2 & 0xff00ff) * (long)iVar1 >> 8 & 0xff00ff) >> 8) &
                             0xff00ffU |
                             (int)((long)(0x100 - iVar19) * ((ulong)uVar30 & 0xff00) >> 8) +
                             (int)(((ulong)uVar2 & 0xff00) * (long)iVar1 * (long)iVar19 >> 0x10) &
                             0xff00U | iVar29 * 0x1000000;
                  iVar29 = *(int *)(param_4 + 8);
                }
                iVar13 = iVar13 + 1;
                puVar24 = puVar24 + 1;
                puVar32 = puVar32 + 1;
              } while (iVar13 < iVar29);
              iVar13 = *(int *)(param_4 + 0xc);
            }
            iVar10 = iVar10 + 1;
            puVar33 = puVar33 + *(int *)(this + 0x38);
            puVar35 = puVar35 + *(int *)(param_1 + 0x38);
          } while (iVar10 < iVar13);
        }
      }
      else if (0 < iVar13) {
        iVar19 = *(int *)(param_4 + 8);
        iVar11 = 0;
        do {
          if (0 < iVar19) {
            iVar13 = 0;
            puVar24 = puVar35;
            puVar32 = puVar33;
            do {
              uVar2 = *puVar24;
              uVar30 = *puVar32;
              iVar14 = (int)(((ulong)(uVar2 >> 0x18) * (long)iVar18) / 0xff);
              if (iVar14 != 0) {
                iVar19 = (int)((0xff - (uVar30 >> 0x18)) * iVar14) / 0xff + (uVar30 >> 0x18);
                iVar4 = 0;
                if (iVar19 != 0) {
                  iVar4 = (iVar14 * 0xff) / iVar19;
                }
                lVar7 = (long)(0x100 - iVar4);
                lVar34 = (long)iVar4;
                *puVar32 = (int)(lVar7 * (ulong)(byte)uVar30 >> 8) +
                           (int)((ulong)(byte)uVar2 * (long)iVar29 * lVar34 >> 0x10) & 0xffU |
                           (int)(lVar7 * ((ulong)uVar30 & 0xff00) >> 8) +
                           (int)(((ulong)uVar2 & 0xff00) * (long)iVar10 * lVar34 >> 0x10) & 0xff00U
                           | iVar19 * 0x1000000 |
                           (int)((lVar34 * ((ulong)uVar2 & 0xff0000) >> 8) * (long)iVar1 >> 8) +
                           (int)(lVar7 * ((ulong)uVar30 & 0xff0000) >> 8) & 0xff0000U;
                iVar19 = *(int *)(param_4 + 8);
              }
              iVar13 = iVar13 + 1;
              puVar24 = puVar24 + 1;
              puVar32 = puVar32 + 1;
            } while (iVar13 < iVar19);
            iVar13 = *(int *)(param_4 + 0xc);
          }
          iVar11 = iVar11 + 1;
          puVar33 = puVar33 + *(int *)(this + 0x38);
          puVar35 = puVar35 + *(int *)(param_1 + 0x38);
        } while (iVar11 < iVar13);
      }
    }
    else {
      iVar10 = *(int *)(param_4 + 0xc);
      if (0 < iVar10) {
        iVar18 = *(int *)(param_4 + 8);
        iVar29 = 0;
        do {
          if (0 < iVar18) {
            iVar10 = 0;
            puVar24 = puVar35;
            puVar32 = puVar33;
            do {
              uVar2 = *puVar24;
              uVar30 = *puVar32;
              uVar27 = uVar2 >> 0x18;
              if (uVar27 != 0) {
                iVar18 = (int)((0xff - (uVar30 >> 0x18)) * uVar27) / 0xff + (uVar30 >> 0x18);
                iVar1 = 0;
                if (iVar18 != 0) {
                  iVar1 = (int)(uVar27 * 0xff) / iVar18;
                }
                *puVar32 = (int)((long)(0x100 - iVar1) * (ulong)(uVar30 & 0xff00ff) >> 8) +
                           (int)((long)iVar1 * (ulong)(uVar2 & 0xff00ff) >> 8) & 0xff00ffU |
                           (int)((long)(0x100 - iVar1) * ((ulong)uVar30 & 0xff00) >> 8) +
                           (int)((long)iVar1 * ((ulong)uVar2 & 0xff00) >> 8) & 0xff00U |
                           iVar18 * 0x1000000;
                iVar18 = *(int *)(param_4 + 8);
              }
              iVar10 = iVar10 + 1;
              puVar24 = puVar24 + 1;
              puVar32 = puVar32 + 1;
            } while (iVar10 < iVar18);
            iVar10 = *(int *)(param_4 + 0xc);
          }
          iVar29 = iVar29 + 1;
          puVar33 = puVar33 + *(int *)(this + 0x38);
          puVar35 = puVar35 + *(int *)(param_1 + 0x38);
        } while (iVar29 < iVar10);
      }
    }
  }
  else {
    pbVar9 = (byte *)(plVar6[0x11] +
                     (long)*(int *)param_4 +
                     (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
    lVar7 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    puVar35 = (uint *)(lVar7 + ((long)param_2 + (long)(param_3 * *(int *)(this + 0x38))) * 4);
    if ((this[0x92] == (MemoryImage)0x0) && (this[0x91] == (MemoryImage)0x0)) {
      Color::Color(aCStack_18,1);
      cVar5 = TRect<int>::operator!=((TRect<int> *)param_5,(TRect *)aCStack_18);
      if (cVar5 == '\0') {
        lVar7 = (**(code **)(*plVar6 + 0x60))(plVar6);
        iVar29 = *(int *)(param_4 + 0xc);
        pbVar8 = (byte *)(lVar7 + (long)*(int *)param_4 +
                                  (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
        iVar10 = 0;
        if (0 < iVar29) {
          do {
            uVar30 = *(uint *)(param_4 + 8);
            pbVar26 = pbVar9;
            pbVar31 = pbVar8;
            puVar33 = puVar35;
            if (0 < (int)uVar30) {
              do {
                bVar25 = *pbVar31;
                uVar27 = (uint)bVar25;
                uVar2 = *(uint *)(lVar34 + (ulong)*pbVar26 * 4);
                uVar15 = (ulong)uVar2;
                if ((int)uVar30 < (int)(uint)bVar25) {
                  iVar29 = 0x100 - (uVar2 >> 0x18);
                  bVar25 = (byte)uVar30;
                  uVar27 = uVar30;
                  uVar16 = uVar30;
                  if (iVar29 == 1) {
LAB_0515d948:
                    lVar7 = 0;
                    while( true ) {
                      puVar33[lVar7] = (uint)uVar15;
                      lVar7 = lVar7 + 1;
                      if ((int)uVar27 <= (int)lVar7) break;
                      uVar15 = (ulong)*(uint *)(lVar34 + (ulong)pbVar26[lVar7] * 4);
                    }
                    uVar15 = (ulong)bVar25;
                    lVar7 = (ulong)(uVar27 - 1) + 1;
                    pbVar26 = pbVar26 + lVar7;
                    puVar33 = puVar33 + lVar7;
                  }
                  else {
LAB_0515d688:
                    uVar27 = uVar16;
                    if (iVar29 == 0x100) {
                      uVar15 = (ulong)bVar25;
                      puVar33 = puVar33 + bVar25;
                      pbVar26 = pbVar26 + uVar15;
                    }
                    else {
                      puVar32 = puVar33 + 1;
                      pbVar26 = pbVar26 + 1;
                      *puVar33 = (int)((long)(0x100 - iVar29) * (ulong)(uVar2 & 0xff00ff) >> 8) +
                                 (int)((long)iVar29 * (ulong)(*puVar33 & 0xff00ff) >> 8) & 0xff00ffU
                                 | (int)((long)(0x100 - iVar29) * (uVar15 & 0xff00) >> 8) +
                                   (int)((long)iVar29 * ((ulong)*puVar33 & 0xff00) >> 8) & 0xff00U |
                                 0xff000000;
                      if ((int)uVar27 < 2) {
                        uVar15 = (ulong)bVar25;
                        puVar33 = puVar32;
                      }
                      else {
                        pbVar20 = pbVar26;
                        puVar24 = puVar32;
                        do {
                          uVar2 = *(uint *)(lVar34 + (ulong)*pbVar20 * 4);
                          uVar16 = uVar2 >> 0x18;
                          puVar21 = puVar24 + 1;
                          *puVar24 = (int)((ulong)(*puVar24 & 0xff00ff) *
                                           (long)(int)(0x100 - uVar16) >> 8) +
                                     (int)((ulong)(uVar2 & 0xff00ff) * (ulong)uVar16 >> 8) &
                                     0xff00ffU |
                                     (int)(((ulong)*puVar24 & 0xff00) * (long)(int)(0x100 - uVar16)
                                          >> 8) +
                                     (int)(((ulong)uVar2 & 0xff00) * (ulong)uVar16 >> 8) & 0xff00U |
                                     0xff000000;
                          pbVar20 = pbVar20 + 1;
                          puVar24 = puVar21;
                        } while (puVar21 != puVar33 + (ulong)(uVar27 - 2) + 2);
                        lVar7 = (ulong)(uVar27 - 2) + 1;
                        uVar15 = (ulong)bVar25;
                        pbVar26 = pbVar26 + lVar7;
                        puVar33 = puVar32 + lVar7;
                      }
                    }
                  }
                }
                else {
                  iVar29 = 0x100 - (uVar2 >> 0x18);
                  uVar16 = (uint)bVar25;
                  if (iVar29 != 1) goto LAB_0515d688;
                  if (bVar25 != 0) goto LAB_0515d948;
                  uVar15 = 0;
                }
                uVar30 = uVar30 - uVar27;
                pbVar31 = pbVar31 + uVar15;
              } while (0 < (int)uVar30);
              iVar29 = *(int *)(param_4 + 0xc);
            }
            iVar10 = iVar10 + 1;
            puVar35 = puVar35 + *(int *)(this + 0x38);
            pbVar9 = pbVar9 + *(int *)(param_1 + 0x38);
            pbVar8 = pbVar8 + *(int *)(param_1 + 0x38);
          } while (iVar10 < iVar29);
          (**(code **)(*(long *)this + 0x98))(this);
          goto LAB_0515d5a0;
        }
        goto LAB_0515d590;
      }
    }
    Color::Color(aCStack_18,1);
    cVar5 = Sexy::operator==(param_5,aCStack_18);
    if (cVar5 == '\0') {
      iVar10 = *(int *)(param_5 + 4);
      iVar29 = *(int *)(param_5 + 8);
      iVar18 = *(int *)(param_5 + 0xc);
      iVar1 = *(int *)param_5;
      iVar13 = *(int *)(param_4 + 0xc);
      if ((iVar10 == iVar29) && (iVar1 == iVar10)) {
        if (0 < iVar13) {
          iVar29 = *(int *)(param_4 + 8);
          iVar10 = 0;
          do {
            pbVar8 = pbVar9;
            puVar33 = puVar35;
            if (0 < iVar29) {
              do {
                pbVar26 = pbVar8 + 1;
                uVar30 = *puVar33;
                uVar2 = *(uint *)(lVar34 + (ulong)*pbVar8 * 4);
                iVar13 = (int)(((ulong)(uVar2 >> 0x18) * (long)iVar18) / 0xff);
                if (iVar13 != 0) {
                  iVar29 = (int)((0xff - (uVar30 >> 0x18)) * iVar13) / 0xff + (uVar30 >> 0x18);
                  iVar11 = 0;
                  if (iVar29 != 0) {
                    iVar11 = (iVar13 * 0xff) / iVar29;
                  }
                  *puVar33 = (int)((long)(0x100 - iVar11) * (ulong)(uVar30 & 0xff00ff) >> 8) +
                             (int)((long)iVar11 *
                                   ((ulong)(uVar2 & 0xff00ff) * (long)iVar1 >> 8 & 0xff00ff) >> 8) &
                             0xff00ffU |
                             (int)((long)(0x100 - iVar11) * ((ulong)uVar30 & 0xff00) >> 8) +
                             (int)(((ulong)uVar2 & 0xff00) * (long)iVar1 * (long)iVar11 >> 0x10) &
                             0xff00U | iVar29 * 0x1000000;
                  iVar29 = *(int *)(param_4 + 8);
                }
                pbVar8 = pbVar26;
                puVar33 = puVar33 + 1;
              } while ((int)pbVar26 - (int)pbVar9 < iVar29);
              iVar13 = *(int *)(param_4 + 0xc);
            }
            iVar10 = iVar10 + 1;
            puVar35 = puVar35 + *(int *)(this + 0x38);
            pbVar9 = pbVar9 + *(int *)(param_1 + 0x38);
          } while (iVar10 < iVar13);
          (**(code **)(*(long *)this + 0x98))(this);
          goto LAB_0515d5a0;
        }
      }
      else if (0 < iVar13) {
        iVar19 = *(int *)(param_4 + 8);
        iVar11 = 0;
        do {
          pbVar8 = pbVar9;
          puVar33 = puVar35;
          if (0 < iVar19) {
            do {
              pbVar26 = pbVar8 + 1;
              uVar30 = *puVar33;
              uVar2 = *(uint *)(lVar34 + (ulong)*pbVar8 * 4);
              iVar13 = (int)(((ulong)(uVar2 >> 0x18) * (long)iVar18) / 0xff);
              if (iVar13 != 0) {
                iVar19 = (int)((0xff - (uVar30 >> 0x18)) * iVar13) / 0xff + (uVar30 >> 0x18);
                iVar14 = 0;
                if (iVar19 != 0) {
                  iVar14 = (iVar13 * 0xff) / iVar19;
                }
                lVar17 = (long)(0x100 - iVar14);
                lVar7 = (long)iVar14;
                *puVar33 = (int)(lVar17 * (ulong)(byte)uVar30 >> 8) +
                           (int)((ulong)(byte)uVar2 * (long)iVar29 * lVar7 >> 0x10) & 0xffU |
                           (int)(lVar17 * ((ulong)uVar30 & 0xff00) >> 8) +
                           (int)(((ulong)uVar2 & 0xff00) * (long)iVar10 * lVar7 >> 0x10) & 0xff00U |
                           iVar19 * 0x1000000 |
                           (int)((lVar7 * ((ulong)uVar2 & 0xff0000) >> 8) * (long)iVar1 >> 8) +
                           (int)(lVar17 * ((ulong)uVar30 & 0xff0000) >> 8) & 0xff0000U;
                iVar19 = *(int *)(param_4 + 8);
              }
              pbVar8 = pbVar26;
              puVar33 = puVar33 + 1;
            } while ((int)pbVar26 - (int)pbVar9 < iVar19);
            iVar13 = *(int *)(param_4 + 0xc);
          }
          iVar11 = iVar11 + 1;
          puVar35 = puVar35 + *(int *)(this + 0x38);
          pbVar9 = pbVar9 + *(int *)(param_1 + 0x38);
        } while (iVar11 < iVar13);
        (**(code **)(*(long *)this + 0x98))(this);
        goto LAB_0515d5a0;
      }
    }
    else {
      iVar10 = *(int *)(param_4 + 0xc);
      if (0 < iVar10) {
        iVar18 = *(int *)(param_4 + 8);
        iVar29 = 0;
        do {
          pbVar8 = pbVar9;
          puVar33 = puVar35;
          if (0 < iVar18) {
            do {
              pbVar26 = pbVar8 + 1;
              uVar30 = *puVar33;
              uVar2 = *(uint *)(lVar34 + (ulong)*pbVar8 * 4);
              uVar27 = uVar2 >> 0x18;
              if (uVar27 != 0) {
                iVar10 = (int)((0xff - (uVar30 >> 0x18)) * uVar27) / 0xff + (uVar30 >> 0x18);
                iVar18 = 0;
                if (iVar10 != 0) {
                  iVar18 = (int)(uVar27 * 0xff) / iVar10;
                }
                *puVar33 = (int)((long)(0x100 - iVar18) * (ulong)(uVar30 & 0xff00ff) >> 8) +
                           (int)((long)iVar18 * (ulong)(uVar2 & 0xff00ff) >> 8) & 0xff00ffU |
                           (int)((long)(0x100 - iVar18) * ((ulong)uVar30 & 0xff00) >> 8) +
                           (int)((long)iVar18 * ((ulong)uVar2 & 0xff00) >> 8) & 0xff00U |
                           iVar10 * 0x1000000;
                iVar18 = *(int *)(param_4 + 8);
              }
              pbVar8 = pbVar26;
              puVar33 = puVar33 + 1;
            } while ((int)pbVar26 - (int)pbVar9 < iVar18);
            iVar10 = *(int *)(param_4 + 0xc);
          }
          iVar29 = iVar29 + 1;
          puVar35 = puVar35 + *(int *)(this + 0x38);
          pbVar9 = pbVar9 + *(int *)(param_1 + 0x38);
        } while (iVar29 < iVar10);
      }
    }
  }
LAB_0515d590:
  (**(code **)(*(long *)this + 0x98))(this);
LAB_0515d5a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::MemoryImage::Blt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&, int)
    */

void __thiscall
Sexy::MemoryImage::Blt
          (MemoryImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  param_1[0x28] = (Image)0x1;
  if (param_6 == 0) {
    NormalBlt(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (param_6 == 1) {
    AdditiveBlt(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::Blt(Sexy::Image*, int, int, Sexy::TRect<int> const&,
   Sexy::Color const&, int) */

void __thiscall
Sexy::MemoryImage::Blt
          (MemoryImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  Blt(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::SlowStretchBlt(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<float>
   const&, Sexy::Color const&, int) */

void Sexy::MemoryImage::SlowStretchBlt
               (Image *param_1,TRect *param_2,TRect *param_3,Color *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  ColourFit *pCVar11;
  ColourFit *pCVar12;
  ColourFit *pCVar13;
  ColourFit *pCVar14;
  ColourFit *pCVar15;
  ColourFit *pCVar16;
  ColourFit *pCVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  LotteryResultProgressBar *this;
  long lVar23;
  ulong uVar24;
  ColourFit *this_00;
  ColourFit *pCVar25;
  long lVar26;
  ColourFit *pCVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  int iVar32;
  ColourFit *pCVar33;
  ColourFit *pCVar34;
  int iVar35;
  int iVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  uint *puVar40;
  code *pcVar41;
  byte *pbVar42;
  uint *puVar43;
  int iVar44;
  int iVar45;
  long lVar46;
  int iVar47;
  byte *pbVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int local_190;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  int local_150;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  int local_110;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  int iStack_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  int local_100;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  int iStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  int local_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  int iStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  int local_e0;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  int iStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  int local_d0;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  int iStack_c8;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  int local_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  int iStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  int local_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  int iStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  int local_a0;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  int iStack_98;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  int local_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  int iStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  int local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  int iStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  int local_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  int iStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  int local_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int iStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  int local_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  int iStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  int local_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int local_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  int local_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  int iStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar10 = ___stack_chk_guard;
  pcVar41 = *(code **)(*(long *)param_1 + 0xd0);
  param_2[0x28] = (TRect)0x1;
  (*pcVar41)(param_1,0,0,0,0);
  this = (LotteryResultProgressBar *)(**(code **)(*(long *)param_2 + 0x48))(param_2);
  if (this == (LotteryResultProgressBar *)0x0) goto LAB_0515ee78;
  lVar46 = *(long *)(this + 0x80);
  if (lVar46 == 0) {
    lVar46 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    lVar23 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
    uVar21 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar28 = (int)*(float *)param_4;
    iVar35 = (int)*(float *)(param_4 + 4);
    fVar54 = (float)iVar28;
    if (iVar28 < 0) {
      iVar28 = 0;
    }
    fVar51 = (float)iVar35;
    if (iVar35 < 0) {
      iVar35 = 0;
    }
    iVar30 = (int)((*(float *)param_4 + *(float *)(param_4 + 8)) - fVar54);
    iVar45 = (int)((*(float *)(param_4 + 4) + *(float *)(param_4 + 0xc)) - fVar51);
    iVar18 = *(int *)(param_2 + 0x38) - iVar28;
    if (iVar30 + iVar28 <= *(int *)(param_2 + 0x38)) {
      iVar18 = iVar30;
    }
    iVar30 = *(int *)(param_2 + 0x3c) - iVar35;
    if (iVar45 + iVar35 <= *(int *)(param_2 + 0x3c)) {
      iVar30 = iVar45;
    }
    if ((iVar30 < 1) || (iVar18 < 1)) goto LAB_0515ee78;
    iVar45 = *(int *)(param_3 + 8);
    iVar47 = *(int *)(param_3 + 0xc);
    uVar3 = iVar45 + 4;
    uVar37 = (ulong)(int)(uVar3 * iVar30 * 4);
    uVar24 = uVar37 << 2;
    if (0x1fc0000000000000 < uVar37) {
      uVar24 = 0xffffffffffffffff;
    }
    this_00 = operator_new__(uVar24);
    memset(this_00,0,(long)(int)(uVar3 * iVar30 * 0x10));
    LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
    iVar32 = *(int *)(param_3 + 8);
    fVar51 = (float)iVar32;
    fVar54 = *(float *)(param_4 + 8);
    if (fVar51 <= fVar54) {
      fVar51 = fVar51 / fVar54;
      iVar32 = 0;
      uVar24 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2;
      puVar40 = (uint *)(lVar46 + (long)(int)(iVar28 + uVar21 * iVar35) * 4);
      fVar54 = fVar51 * ((float)iVar28 - *(float *)param_4) + 1.0;
      iVar19 = (int)(fVar51 * 257.0);
      fVar8 = fVar54 + fVar51 * 0.0;
      fVar9 = fVar8 + fVar51;
      iVar36 = (int)fVar8;
      iVar57 = (int)fVar9;
      iVar28 = 0;
      if (iVar36 == iVar57) goto LAB_0515feac;
      do {
        iVar29 = 0;
        pCVar25 = this_00 + (long)(iVar36 << 2) * 4;
        iVar36 = (int)(((float)iVar57 - fVar8) * 257.0);
        iVar57 = (int)((fVar9 - (float)iVar57) * 257.0);
        puVar43 = puVar40;
        do {
          uVar21 = *puVar43;
          iVar29 = iVar29 + 1;
          uVar6 = uVar21 >> 8 & 0xff;
          uVar20 = uVar21 >> 0x10 & 0xff;
          puVar43 = (uint *)((long)puVar43 + uVar24);
          *(uint *)pCVar25 = *(int *)pCVar25 + (uVar21 & 0xff) * iVar36;
          *(uint *)(pCVar25 + 4) = *(int *)(pCVar25 + 4) + uVar6 * iVar36;
          *(uint *)(pCVar25 + 8) = *(int *)(pCVar25 + 8) + uVar20 * iVar36;
          *(uint *)(pCVar25 + 0xc) = *(int *)(pCVar25 + 0xc) + (uVar21 >> 0x18) * iVar36;
          *(uint *)(pCVar25 + 0x10) = *(int *)(pCVar25 + 0x10) + (uVar21 & 0xff) * iVar57;
          *(uint *)(pCVar25 + 0x14) = *(int *)(pCVar25 + 0x14) + uVar6 * iVar57;
          *(uint *)(pCVar25 + 0x18) = *(int *)(pCVar25 + 0x18) + uVar20 * iVar57;
          *(uint *)(pCVar25 + 0x1c) = *(int *)(pCVar25 + 0x1c) + (uVar21 >> 0x18) * iVar57;
          pCVar25 = pCVar25 + (long)((iVar45 + 2) * 4) * 4 + 0x20;
          iVar32 = iVar28;
        } while (iVar29 < iVar30);
        while( true ) {
          iVar32 = iVar32 + 1;
          if (iVar18 <= iVar32) goto LAB_0515f5b4;
          puVar40 = puVar40 + 1;
          fVar8 = fVar54 + fVar51 * (float)iVar32;
          fVar9 = fVar8 + fVar51;
          iVar36 = (int)fVar8;
          iVar57 = (int)fVar9;
          iVar28 = iVar32;
          if (iVar36 != iVar57) break;
LAB_0515feac:
          iVar28 = 0;
          pCVar25 = this_00 + (long)(iVar36 << 2) * 4;
          puVar43 = puVar40;
          do {
            uVar21 = *puVar43;
            iVar28 = iVar28 + 1;
            *(uint *)pCVar25 = *(int *)pCVar25 + (uVar21 & 0xff) * iVar19;
            puVar43 = (uint *)((long)puVar43 + uVar24);
            *(uint *)(pCVar25 + 4) = *(int *)(pCVar25 + 4) + (uVar21 >> 8 & 0xff) * iVar19;
            *(uint *)(pCVar25 + 8) = *(int *)(pCVar25 + 8) + (uVar21 >> 0x10 & 0xff) * iVar19;
            *(uint *)(pCVar25 + 0xc) = *(int *)(pCVar25 + 0xc) + iVar19 * (uVar21 >> 0x18);
            pCVar25 = pCVar25 + (long)((iVar45 + 3) * 4) * 4 + 0x10;
          } while (iVar28 < iVar30);
        }
      } while( true );
    }
    if (iVar32 == 1) {
      fVar54 = fVar54 / fVar51;
    }
    else {
      fVar54 = (fVar54 - 1.0) / (float)(iVar32 + -1);
    }
    if (1 < iVar45 + 3) {
      iVar28 = 0;
      fVar51 = *(float *)param_4;
      pCVar25 = this_00;
      do {
        pCVar25 = pCVar25 + 0x10;
        iVar18 = 0;
        fVar8 = fVar51 + fVar54 * (float)iVar28;
        iVar32 = (int)fVar8;
        puVar40 = (uint *)(lVar46 + (long)(int)(iVar32 + uVar21 * iVar35) * 4);
        iVar57 = (int)(((1.0 - fVar8) + (float)iVar32) * 257.0);
        iVar32 = 0x101 - iVar57;
        pCVar33 = pCVar25;
        do {
          uVar6 = *puVar40;
          iVar18 = iVar18 + 1;
          uVar20 = puVar40[1];
          puVar40 = (uint *)((long)puVar40 +
                            (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2));
          *(uint *)pCVar33 = (uVar6 & 0xff) * iVar57 + (uVar20 & 0xff) * iVar32;
          *(uint *)(pCVar33 + 4) = (uVar6 >> 8 & 0xff) * iVar57 + (uVar20 >> 8 & 0xff) * iVar32;
          *(uint *)(pCVar33 + 8) =
               (uVar6 >> 0x10 & 0xff) * iVar57 + (uVar20 >> 0x10 & 0xff) * iVar32;
          *(uint *)(pCVar33 + 0xc) = iVar57 * (uVar6 >> 0x18) + iVar32 * (uVar20 >> 0x18);
          pCVar33 = pCVar33 + (long)((iVar45 + 3) * 4) * 4 + 0x10;
        } while (iVar18 < iVar30);
        iVar28 = iVar28 + 1;
      } while (iVar28 != iVar45 + 2);
    }
LAB_0515f5b4:
    uVar21 = iVar45 + 3;
    iVar28 = uVar3 * (iVar47 + 4);
    uVar37 = (ulong)(iVar28 * 4);
    uVar24 = uVar37 << 2;
    if (0x1fc0000000000000 < uVar37) {
      uVar24 = 0xffffffffffffffff;
    }
    pCVar25 = operator_new__(uVar24);
    memset(pCVar25,0,(long)(iVar28 * 0x10));
    iVar28 = *(int *)(param_3 + 0xc);
    fVar51 = (float)iVar28;
    fVar54 = *(float *)(param_4 + 0xc);
    if (fVar54 < fVar51) {
      if (iVar28 == 1) {
        fVar54 = fVar54 / fVar51;
      }
      else {
        fVar54 = (fVar54 - 1.0) / (float)(iVar28 + -1);
        if (iVar28 < 1) goto LAB_0515ee58;
      }
      iVar18 = uVar3 * 4;
      iVar35 = 1;
      fVar51 = *(float *)(param_4 + 4);
      lVar38 = (long)iVar18 * 4;
      lVar46 = ((ulong)(iVar45 + 1) + 1) * 0x10;
      pCVar33 = pCVar25 + lVar38 + 0x10;
      do {
        fVar8 = (fVar51 - (float)(int)fVar51) + fVar54 * (float)(iVar35 + -1);
        iVar32 = (int)fVar8;
        uVar21 = (iVar32 * uVar3 + 1) * 4;
        uVar24 = -(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2;
        pCVar34 = this_00 + uVar24;
        iVar57 = (int)(((1.0 - fVar8) + (float)iVar32) * 256.0);
        iVar47 = 0x100 - iVar57;
        pCVar27 = pCVar34;
        if (iVar32 != iVar30 + -1) {
          pCVar27 = this_00 + (long)(int)((iVar32 * uVar3 + uVar3 + 1) * 4) * 4;
        }
        if (-2 < iVar45) {
          if ((iVar45 + 2U < 3 || pCVar33 < this_00 + uVar24 + 0x40 && pCVar34 < pCVar33 + 0x40) ||
             (pCVar33 < pCVar27 + 0x40 && pCVar27 < pCVar33 + 0x40)) {
            pCVar17 = pCVar27;
            pCVar14 = pCVar33 + ((long)(iVar18 + 4) - (long)iVar18) * 4 + -0x10;
            do {
              pCVar12 = pCVar17 + 0x10;
              *(int *)pCVar14 = iVar57 * *(int *)pCVar34 + iVar47 * *(int *)pCVar17;
              *(int *)(pCVar14 + 4) =
                   iVar57 * *(int *)(pCVar34 + 4) + iVar47 * *(int *)(pCVar17 + 4);
              *(int *)(pCVar14 + 8) =
                   iVar57 * *(int *)(pCVar34 + 8) + iVar47 * *(int *)(pCVar17 + 8);
              *(int *)(pCVar14 + 0xc) =
                   iVar57 * *(int *)(pCVar34 + 0xc) + iVar47 * *(int *)(pCVar17 + 0xc);
              pCVar17 = pCVar12;
              pCVar34 = pCVar34 + 0x10;
              pCVar14 = pCVar14 + 0x10;
            } while (pCVar12 != pCVar27 + lVar46);
          }
          else {
            lVar26 = 0;
            do {
              lVar2 = lVar26 + uVar24;
              pCVar34 = pCVar33 + lVar26;
              uVar53 = *(undefined8 *)(pCVar27 + lVar26 + 8);
              uVar52 = *(undefined8 *)(pCVar27 + lVar26);
              lVar26 = lVar26 + 0x10;
              uVar50 = *(undefined8 *)(this_00 + lVar2 + 8);
              uVar49 = *(undefined8 *)(this_00 + lVar2);
              *(ulong *)(pCVar34 + 8) =
                   CONCAT44((int)((ulong)uVar50 >> 0x20) * iVar57 +
                            (int)((ulong)uVar53 >> 0x20) * iVar47,
                            (int)uVar50 * iVar57 + (int)uVar53 * iVar47);
              *(ulong *)pCVar34 =
                   CONCAT44((int)((ulong)uVar49 >> 0x20) * iVar57 +
                            (int)((ulong)uVar52 >> 0x20) * iVar47,
                            (int)uVar49 * iVar57 + (int)uVar52 * iVar47);
            } while (lVar26 != lVar46);
          }
          iVar28 = *(int *)(param_3 + 0xc);
        }
        iVar35 = iVar35 + 1;
        pCVar33 = pCVar33 + lVar38;
      } while (iVar35 <= iVar28);
    }
    else {
      fVar51 = fVar51 / fVar54;
      uVar6 = (iVar45 - 1U >> 2) + 1;
      uVar20 = uVar6 * 4;
      fVar54 = *(float *)(param_4 + 4);
      lVar46 = ((ulong)uVar21 + 1) * 0x10;
      iVar28 = 0;
      lVar38 = (ulong)uVar20 * 0x10;
      iVar18 = (int)(fVar51 * 256.0);
      pCVar33 = this_00;
      do {
        fVar8 = fVar51 * ((float)iVar35 - fVar54) + 1.0 + fVar51 * (float)iVar28;
        iVar45 = (int)fVar8;
        iVar47 = (int)(fVar8 + fVar51);
        if (iVar45 == iVar47) {
          uVar22 = iVar45 * uVar3 * 4;
          uVar24 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2;
          pCVar34 = pCVar25 + uVar24;
          if (0 < (int)uVar3) {
            if ((pCVar33 < pCVar25 + uVar24 + 0x40 && pCVar34 < pCVar33 + 0x40) || (uVar3 < 2)) {
              pCVar27 = pCVar33;
              do {
                pCVar17 = pCVar27 + 0x10;
                *(int *)pCVar34 = *(int *)pCVar34 + iVar18 * *(int *)pCVar27;
                *(int *)(pCVar34 + 4) = *(int *)(pCVar34 + 4) + iVar18 * *(int *)(pCVar27 + 4);
                *(int *)(pCVar34 + 8) = *(int *)(pCVar34 + 8) + iVar18 * *(int *)(pCVar27 + 8);
                *(int *)(pCVar34 + 0xc) = *(int *)(pCVar34 + 0xc) + iVar18 * *(int *)(pCVar27 + 0xc)
                ;
                pCVar27 = pCVar17;
                pCVar34 = pCVar34 + 0x10;
              } while (pCVar17 != pCVar33 + (ulong)uVar21 * 0x10 + 0x10);
            }
            else {
              lVar26 = 0;
              do {
                pCVar27 = pCVar34 + lVar26;
                pCVar17 = pCVar33 + lVar26;
                lVar26 = lVar26 + 0x10;
                uVar50 = *(undefined8 *)(pCVar17 + 8);
                uVar49 = *(undefined8 *)pCVar17;
                *(ulong *)(pCVar27 + 8) =
                     CONCAT44((int)((ulong)*(undefined8 *)(pCVar27 + 8) >> 0x20) +
                              (int)((ulong)uVar50 >> 0x20) * iVar18,
                              (int)*(undefined8 *)(pCVar27 + 8) + (int)uVar50 * iVar18);
                *(ulong *)pCVar27 =
                     CONCAT44((int)((ulong)*(undefined8 *)pCVar27 >> 0x20) +
                              (int)((ulong)uVar49 >> 0x20) * iVar18,
                              (int)*(undefined8 *)pCVar27 + (int)uVar49 * iVar18);
              } while (lVar26 != lVar46);
            }
          }
        }
        else {
          uVar22 = iVar45 * uVar3 * 4;
          uVar7 = iVar47 * uVar3 * 4;
          uVar24 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2;
          uVar37 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
          pCVar34 = pCVar25 + uVar24;
          pCVar27 = pCVar25 + uVar37;
          iVar45 = (int)(((float)iVar47 - fVar8) * 256.0);
          iVar47 = (int)(((fVar8 + fVar51) - (float)iVar47) * 256.0);
          if (0 < (int)uVar3) {
            if ((uVar3 < 7 ||
                 (pCVar33 < pCVar25 + uVar24 + 0x40 && pCVar34 < pCVar33 + 0x40 ||
                 pCVar33 < pCVar25 + uVar37 + 0x40 && pCVar27 < pCVar33 + 0x40)) ||
               ((long)uVar24 < (long)(uVar37 + 0x40) && (long)uVar37 < (long)(uVar24 + 0x40))) {
              pCVar17 = pCVar33;
              pCVar14 = pCVar27;
              do {
                pCVar12 = pCVar14 + 0x10;
                *(int *)pCVar34 = *(int *)pCVar34 + iVar45 * *(int *)pCVar17;
                *(int *)pCVar14 = *(int *)pCVar14 + iVar47 * *(int *)pCVar17;
                *(int *)(pCVar34 + 4) = *(int *)(pCVar34 + 4) + iVar45 * *(int *)(pCVar17 + 4);
                *(int *)(pCVar14 + 4) = *(int *)(pCVar14 + 4) + iVar47 * *(int *)(pCVar17 + 4);
                *(int *)(pCVar34 + 8) = *(int *)(pCVar34 + 8) + iVar45 * *(int *)(pCVar17 + 8);
                *(int *)(pCVar14 + 8) = *(int *)(pCVar14 + 8) + iVar47 * *(int *)(pCVar17 + 8);
                *(int *)(pCVar34 + 0xc) = *(int *)(pCVar34 + 0xc) + iVar45 * *(int *)(pCVar17 + 0xc)
                ;
                *(int *)(pCVar14 + 0xc) = *(int *)(pCVar14 + 0xc) + iVar47 * *(int *)(pCVar17 + 0xc)
                ;
                pCVar17 = pCVar17 + 0x10;
                pCVar14 = pCVar12;
                pCVar34 = pCVar34 + 0x10;
              } while (pCVar12 != pCVar27 + lVar46);
            }
            else {
              if (uVar21 < 4) {
                pCVar17 = pCVar33;
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                pCVar17 = pCVar27;
                pCVar14 = pCVar33;
                pCVar12 = pCVar33;
                pCVar13 = pCVar34;
                pCVar11 = pCVar34;
                pCVar15 = pCVar27;
                do {
                  iVar80 = *(int *)pCVar13;
                  iVar63 = *(int *)(pCVar13 + 4);
                  iVar71 = *(int *)(pCVar13 + 8);
                  iVar79 = *(int *)(pCVar13 + 0xc);
                  iVar32 = *(int *)(pCVar13 + 0x10);
                  iVar66 = *(int *)(pCVar13 + 0x14);
                  iVar74 = *(int *)(pCVar13 + 0x18);
                  iVar83 = *(int *)(pCVar13 + 0x1c);
                  iVar91 = *(int *)(pCVar13 + 0x20);
                  iVar67 = *(int *)(pCVar13 + 0x24);
                  iVar75 = *(int *)(pCVar13 + 0x28);
                  iVar86 = *(int *)(pCVar13 + 0x2c);
                  iVar61 = *(int *)(pCVar13 + 0x30);
                  iVar70 = *(int *)(pCVar13 + 0x34);
                  iVar78 = *(int *)(pCVar13 + 0x38);
                  iVar89 = *(int *)(pCVar13 + 0x3c);
                  pCVar13 = pCVar13 + 0x40;
                  uVar22 = uVar22 + 1;
                  _local_150 = CONCAT14((char)iVar32,iVar80);
                  _local_150 = CONCAT15((char)((uint)iVar32 >> 8),_local_150);
                  _local_150 = CONCAT16((char)((uint)iVar32 >> 0x10),_local_150);
                  _local_150 = CONCAT17((char)((uint)iVar32 >> 0x18),_local_150);
                  iVar55 = *(int *)pCVar14;
                  iVar64 = *(int *)(pCVar14 + 4);
                  iVar72 = *(int *)(pCVar14 + 8);
                  iVar81 = *(int *)(pCVar14 + 0xc);
                  iVar32 = *(int *)(pCVar14 + 0x10);
                  iVar36 = *(int *)(pCVar14 + 0x14);
                  iVar29 = *(int *)(pCVar14 + 0x18);
                  iVar56 = *(int *)(pCVar14 + 0x1c);
                  iVar58 = *(int *)(pCVar14 + 0x20);
                  iVar68 = *(int *)(pCVar14 + 0x24);
                  iVar76 = *(int *)(pCVar14 + 0x28);
                  iVar87 = *(int *)(pCVar14 + 0x2c);
                  iVar57 = *(int *)(pCVar14 + 0x30);
                  iVar19 = *(int *)(pCVar14 + 0x34);
                  iVar44 = *(int *)(pCVar14 + 0x38);
                  iVar85 = *(int *)(pCVar14 + 0x3c);
                  pCVar14 = pCVar14 + 0x40;
                  _local_90 = CONCAT17((char)((uint)iVar32 >> 0x18),
                                       CONCAT16((char)((uint)iVar32 >> 0x10),
                                                CONCAT15((char)((uint)iVar32 >> 8),
                                                         CONCAT14((char)iVar32,iVar55))));
                  _iStack_88 = CONCAT17((char)((uint)iVar57 >> 0x18),
                                        CONCAT16((char)((uint)iVar57 >> 0x10),
                                                 CONCAT15((char)((uint)iVar57 >> 8),
                                                          CONCAT14((char)iVar57,iVar58))));
                  _local_80 = CONCAT17((char)((uint)iVar36 >> 0x18),
                                       CONCAT16((char)((uint)iVar36 >> 0x10),
                                                CONCAT15((char)((uint)iVar36 >> 8),
                                                         CONCAT14((char)iVar36,iVar64))));
                  _iStack_78 = CONCAT17((char)((uint)iVar19 >> 0x18),
                                        CONCAT16((char)((uint)iVar19 >> 0x10),
                                                 CONCAT15((char)((uint)iVar19 >> 8),
                                                          CONCAT14((char)iVar19,iVar68))));
                  _local_70 = CONCAT17((char)((uint)iVar29 >> 0x18),
                                       CONCAT16((char)((uint)iVar29 >> 0x10),
                                                CONCAT15((char)((uint)iVar29 >> 8),
                                                         CONCAT14((char)iVar29,iVar72))));
                  _iStack_68 = CONCAT17((char)((uint)iVar44 >> 0x18),
                                        CONCAT16((char)((uint)iVar44 >> 0x10),
                                                 CONCAT15((char)((uint)iVar44 >> 8),
                                                          CONCAT14((char)iVar44,iVar76))));
                  _local_60 = CONCAT17((char)((uint)iVar56 >> 0x18),
                                       CONCAT16((char)((uint)iVar56 >> 0x10),
                                                CONCAT15((char)((uint)iVar56 >> 8),
                                                         CONCAT14((char)iVar56,iVar81))));
                  _iStack_58 = CONCAT17((char)((uint)iVar85 >> 0x18),
                                        CONCAT16((char)((uint)iVar85 >> 0x10),
                                                 CONCAT15((char)((uint)iVar85 >> 8),
                                                          CONCAT14((char)iVar85,iVar87))));
                  iVar56 = *(int *)pCVar12;
                  iVar32 = *(int *)(pCVar12 + 0x10);
                  iVar59 = *(int *)(pCVar12 + 0x20);
                  iVar62 = *(int *)(pCVar12 + 0x30);
                  pCVar12 = pCVar12 + 0x40;
                  _local_190 = CONCAT14((char)iVar32,iVar56);
                  _local_190 = CONCAT15((char)((uint)iVar32 >> 8),_local_190);
                  _local_190 = CONCAT16((char)((uint)iVar32 >> 0x10),_local_190);
                  _local_190 = CONCAT17((char)((uint)iVar32 >> 0x18),_local_190);
                  iVar85 = *(int *)pCVar17;
                  iVar65 = *(int *)(pCVar17 + 4);
                  iVar73 = *(int *)(pCVar17 + 8);
                  iVar82 = *(int *)(pCVar17 + 0xc);
                  iVar32 = *(int *)(pCVar17 + 0x10);
                  iVar36 = *(int *)(pCVar17 + 0x14);
                  iVar29 = *(int *)(pCVar17 + 0x18);
                  iVar84 = *(int *)(pCVar17 + 0x1c);
                  iVar60 = *(int *)(pCVar17 + 0x20);
                  iVar69 = *(int *)(pCVar17 + 0x24);
                  iVar77 = *(int *)(pCVar17 + 0x28);
                  iVar88 = *(int *)(pCVar17 + 0x2c);
                  iVar57 = *(int *)(pCVar17 + 0x30);
                  iVar19 = *(int *)(pCVar17 + 0x34);
                  iVar44 = *(int *)(pCVar17 + 0x38);
                  iVar90 = *(int *)(pCVar17 + 0x3c);
                  pCVar17 = pCVar17 + 0x40;
                  _local_50 = CONCAT17((char)((uint)iVar32 >> 0x18),
                                       CONCAT16((char)((uint)iVar32 >> 0x10),
                                                CONCAT15((char)((uint)iVar32 >> 8),
                                                         CONCAT14((char)iVar32,iVar85))));
                  _iStack_48 = CONCAT17((char)((uint)iVar57 >> 0x18),
                                        CONCAT16((char)((uint)iVar57 >> 0x10),
                                                 CONCAT15((char)((uint)iVar57 >> 8),
                                                          CONCAT14((char)iVar57,iVar60))));
                  _local_40 = CONCAT17((char)((uint)iVar36 >> 0x18),
                                       CONCAT16((char)((uint)iVar36 >> 0x10),
                                                CONCAT15((char)((uint)iVar36 >> 8),
                                                         CONCAT14((char)iVar36,iVar65))));
                  _iStack_38 = CONCAT17((char)((uint)iVar19 >> 0x18),
                                        CONCAT16((char)((uint)iVar19 >> 0x10),
                                                 CONCAT15((char)((uint)iVar19 >> 8),
                                                          CONCAT14((char)iVar19,iVar69))));
                  _local_30 = CONCAT17((char)((uint)iVar29 >> 0x18),
                                       CONCAT16((char)((uint)iVar29 >> 0x10),
                                                CONCAT15((char)((uint)iVar29 >> 8),
                                                         CONCAT14((char)iVar29,iVar73))));
                  _iStack_28 = CONCAT17((char)((uint)iVar44 >> 0x18),
                                        CONCAT16((char)((uint)iVar44 >> 0x10),
                                                 CONCAT15((char)((uint)iVar44 >> 8),
                                                          CONCAT14((char)iVar44,iVar77))));
                  _local_20 = CONCAT17((char)((uint)iVar84 >> 0x18),
                                       CONCAT16((char)((uint)iVar84 >> 0x10),
                                                CONCAT15((char)((uint)iVar84 >> 8),
                                                         CONCAT14((char)iVar84,iVar82))));
                  _iStack_18 = CONCAT17((char)((uint)iVar90 >> 0x18),
                                        CONCAT16((char)((uint)iVar90 >> 0x10),
                                                 CONCAT15((char)((uint)iVar90 >> 8),
                                                          CONCAT14((char)iVar90,iVar88))));
                  iVar32 = (int)((ulong)_local_80 >> 0x20);
                  iVar36 = (int)((ulong)_iStack_78 >> 0x20);
                  iVar29 = (int)((ulong)_local_70 >> 0x20);
                  iVar44 = (int)((ulong)_iStack_68 >> 0x20);
                  iVar57 = (int)((ulong)_local_60 >> 0x20);
                  iVar19 = (int)((ulong)_iStack_58 >> 0x20);
                  *(int *)pCVar11 = iVar80 + iVar45 * iVar56;
                  *(int *)(pCVar11 + 4) = iVar63 + iVar64 * iVar45;
                  *(int *)(pCVar11 + 8) = iVar71 + iVar72 * iVar45;
                  *(int *)(pCVar11 + 0xc) = iVar79 + iVar81 * iVar45;
                  *(int *)(pCVar11 + 0x10) =
                       (int)((ulong)_local_150 >> 0x20) + iVar45 * (int)((ulong)_local_190 >> 0x20);
                  *(int *)(pCVar11 + 0x14) =
                       (int)(CONCAT17((char)((uint)iVar66 >> 0x18),
                                      CONCAT16((char)((uint)iVar66 >> 0x10),
                                               CONCAT15((char)((uint)iVar66 >> 8),
                                                        CONCAT14((char)iVar66,iVar63)))) >> 0x20) +
                       iVar32 * iVar45;
                  *(int *)(pCVar11 + 0x18) =
                       (int)(CONCAT17((char)((uint)iVar74 >> 0x18),
                                      CONCAT16((char)((uint)iVar74 >> 0x10),
                                               CONCAT15((char)((uint)iVar74 >> 8),
                                                        CONCAT14((char)iVar74,iVar71)))) >> 0x20) +
                       iVar29 * iVar45;
                  *(int *)(pCVar11 + 0x1c) =
                       (int)(CONCAT17((char)((uint)iVar83 >> 0x18),
                                      CONCAT16((char)((uint)iVar83 >> 0x10),
                                               CONCAT15((char)((uint)iVar83 >> 8),
                                                        CONCAT14((char)iVar83,iVar79)))) >> 0x20) +
                       iVar57 * iVar45;
                  *(int *)(pCVar11 + 0x20) = iVar91 + iVar45 * iVar59;
                  *(int *)(pCVar11 + 0x24) = iVar67 + iVar68 * iVar45;
                  *(int *)(pCVar11 + 0x28) = iVar75 + iVar76 * iVar45;
                  *(int *)(pCVar11 + 0x2c) = iVar86 + iVar87 * iVar45;
                  *(int *)(pCVar11 + 0x30) =
                       (int)(CONCAT17((char)((uint)iVar61 >> 0x18),
                                      CONCAT16((char)((uint)iVar61 >> 0x10),
                                               CONCAT15((char)((uint)iVar61 >> 8),
                                                        CONCAT14((char)iVar61,iVar91)))) >> 0x20) +
                       iVar45 * (int)(CONCAT17((char)((uint)iVar62 >> 0x18),
                                               CONCAT16((char)((uint)iVar62 >> 0x10),
                                                        CONCAT15((char)((uint)iVar62 >> 8),
                                                                 CONCAT14((char)iVar62,iVar59)))) >>
                                     0x20);
                  *(int *)(pCVar11 + 0x34) =
                       (int)(CONCAT17((char)((uint)iVar70 >> 0x18),
                                      CONCAT16((char)((uint)iVar70 >> 0x10),
                                               CONCAT15((char)((uint)iVar70 >> 8),
                                                        CONCAT14((char)iVar70,iVar67)))) >> 0x20) +
                       iVar36 * iVar45;
                  *(int *)(pCVar11 + 0x38) =
                       (int)(CONCAT17((char)((uint)iVar78 >> 0x18),
                                      CONCAT16((char)((uint)iVar78 >> 0x10),
                                               CONCAT15((char)((uint)iVar78 >> 8),
                                                        CONCAT14((char)iVar78,iVar75)))) >> 0x20) +
                       iVar44 * iVar45;
                  *(int *)(pCVar11 + 0x3c) =
                       (int)(CONCAT17((char)((uint)iVar89 >> 0x18),
                                      CONCAT16((char)((uint)iVar89 >> 0x10),
                                               CONCAT15((char)((uint)iVar89 >> 8),
                                                        CONCAT14((char)iVar89,iVar86)))) >> 0x20) +
                       iVar19 * iVar45;
                  pCVar11 = pCVar11 + 0x40;
                  *(int *)pCVar15 = iVar85 + iVar47 * iVar55;
                  *(int *)(pCVar15 + 4) = iVar65 + iVar64 * iVar47;
                  *(int *)(pCVar15 + 8) = iVar73 + iVar72 * iVar47;
                  *(int *)(pCVar15 + 0xc) = iVar82 + iVar81 * iVar47;
                  *(int *)(pCVar15 + 0x10) =
                       (int)((ulong)_local_50 >> 0x20) + iVar47 * (int)((ulong)_local_90 >> 0x20);
                  *(int *)(pCVar15 + 0x14) = (int)((ulong)_local_40 >> 0x20) + iVar32 * iVar47;
                  *(int *)(pCVar15 + 0x18) = (int)((ulong)_local_30 >> 0x20) + iVar29 * iVar47;
                  *(int *)(pCVar15 + 0x1c) = (int)((ulong)_local_20 >> 0x20) + iVar57 * iVar47;
                  *(int *)(pCVar15 + 0x20) = iVar60 + iVar47 * iVar58;
                  *(int *)(pCVar15 + 0x24) = iVar69 + iVar68 * iVar47;
                  *(int *)(pCVar15 + 0x28) = iVar77 + iVar76 * iVar47;
                  *(int *)(pCVar15 + 0x2c) = iVar88 + iVar87 * iVar47;
                  *(int *)(pCVar15 + 0x30) =
                       (int)((ulong)_iStack_48 >> 0x20) + iVar47 * (int)((ulong)_iStack_88 >> 0x20);
                  *(int *)(pCVar15 + 0x34) = (int)((ulong)_iStack_38 >> 0x20) + iVar36 * iVar47;
                  *(int *)(pCVar15 + 0x38) = (int)((ulong)_iStack_28 >> 0x20) + iVar44 * iVar47;
                  *(int *)(pCVar15 + 0x3c) = (int)((ulong)_iStack_18 >> 0x20) + iVar19 * iVar47;
                  pCVar15 = pCVar15 + 0x40;
                } while (uVar22 < uVar6);
                pCVar17 = pCVar33 + lVar38;
                pCVar34 = pCVar34 + lVar38;
                pCVar27 = pCVar27 + lVar38;
                uVar22 = uVar20;
                if (uVar20 == uVar3) goto LAB_0515fc54;
              }
              *(int *)pCVar34 = *(int *)pCVar34 + iVar45 * *(int *)pCVar17;
              *(int *)pCVar27 = *(int *)pCVar27 + iVar47 * *(int *)pCVar17;
              *(int *)(pCVar34 + 4) = *(int *)(pCVar34 + 4) + iVar45 * *(int *)(pCVar17 + 4);
              *(int *)(pCVar27 + 4) = *(int *)(pCVar27 + 4) + iVar47 * *(int *)(pCVar17 + 4);
              *(int *)(pCVar34 + 8) = *(int *)(pCVar34 + 8) + iVar45 * *(int *)(pCVar17 + 8);
              *(int *)(pCVar27 + 8) = *(int *)(pCVar27 + 8) + iVar47 * *(int *)(pCVar17 + 8);
              *(int *)(pCVar34 + 0xc) = *(int *)(pCVar34 + 0xc) + iVar45 * *(int *)(pCVar17 + 0xc);
              *(int *)(pCVar27 + 0xc) = *(int *)(pCVar27 + 0xc) + iVar47 * *(int *)(pCVar17 + 0xc);
              if ((int)(uVar22 + 1) < (int)uVar3) {
                *(int *)(pCVar34 + 0x10) =
                     *(int *)(pCVar34 + 0x10) + iVar45 * *(int *)(pCVar17 + 0x10);
                *(int *)(pCVar27 + 0x10) =
                     *(int *)(pCVar27 + 0x10) + iVar47 * *(int *)(pCVar17 + 0x10);
                *(int *)(pCVar34 + 0x14) =
                     *(int *)(pCVar34 + 0x14) + iVar45 * *(int *)(pCVar17 + 0x14);
                *(int *)(pCVar27 + 0x14) =
                     *(int *)(pCVar27 + 0x14) + iVar47 * *(int *)(pCVar17 + 0x14);
                *(int *)(pCVar34 + 0x18) =
                     *(int *)(pCVar34 + 0x18) + iVar45 * *(int *)(pCVar17 + 0x18);
                *(int *)(pCVar27 + 0x18) =
                     *(int *)(pCVar27 + 0x18) + iVar47 * *(int *)(pCVar17 + 0x18);
                *(int *)(pCVar34 + 0x1c) =
                     *(int *)(pCVar34 + 0x1c) + iVar45 * *(int *)(pCVar17 + 0x1c);
                *(int *)(pCVar27 + 0x1c) =
                     *(int *)(pCVar27 + 0x1c) + iVar47 * *(int *)(pCVar17 + 0x1c);
                if ((int)(uVar22 + 2) < (int)uVar3) {
                  *(int *)(pCVar34 + 0x20) =
                       *(int *)(pCVar34 + 0x20) + iVar45 * *(int *)(pCVar17 + 0x20);
                  *(int *)(pCVar27 + 0x20) =
                       *(int *)(pCVar27 + 0x20) + iVar47 * *(int *)(pCVar17 + 0x20);
                  *(int *)(pCVar34 + 0x24) =
                       *(int *)(pCVar34 + 0x24) + iVar45 * *(int *)(pCVar17 + 0x24);
                  *(int *)(pCVar27 + 0x24) =
                       *(int *)(pCVar27 + 0x24) + iVar47 * *(int *)(pCVar17 + 0x24);
                  *(int *)(pCVar34 + 0x28) =
                       *(int *)(pCVar34 + 0x28) + iVar45 * *(int *)(pCVar17 + 0x28);
                  *(int *)(pCVar27 + 0x28) =
                       *(int *)(pCVar27 + 0x28) + iVar47 * *(int *)(pCVar17 + 0x28);
                  *(int *)(pCVar34 + 0x2c) =
                       *(int *)(pCVar34 + 0x2c) + iVar45 * *(int *)(pCVar17 + 0x2c);
                  *(int *)(pCVar27 + 0x2c) =
                       *(int *)(pCVar27 + 0x2c) + iVar47 * *(int *)(pCVar17 + 0x2c);
                  if ((int)(uVar22 + 3) < (int)uVar3) {
                    *(int *)(pCVar34 + 0x30) =
                         *(int *)(pCVar34 + 0x30) + iVar45 * *(int *)(pCVar17 + 0x30);
                    *(int *)(pCVar27 + 0x30) =
                         *(int *)(pCVar27 + 0x30) + iVar47 * *(int *)(pCVar17 + 0x30);
                    *(int *)(pCVar34 + 0x34) =
                         *(int *)(pCVar34 + 0x34) + iVar45 * *(int *)(pCVar17 + 0x34);
                    *(int *)(pCVar27 + 0x34) =
                         *(int *)(pCVar27 + 0x34) + iVar47 * *(int *)(pCVar17 + 0x34);
                    *(int *)(pCVar34 + 0x38) =
                         *(int *)(pCVar34 + 0x38) + iVar45 * *(int *)(pCVar17 + 0x38);
                    *(int *)(pCVar27 + 0x38) =
                         *(int *)(pCVar27 + 0x38) + iVar47 * *(int *)(pCVar17 + 0x38);
                    *(int *)(pCVar34 + 0x3c) =
                         *(int *)(pCVar34 + 0x3c) + iVar45 * *(int *)(pCVar17 + 0x3c);
                    *(int *)(pCVar27 + 0x3c) =
                         *(int *)(pCVar27 + 0x3c) + iVar47 * *(int *)(pCVar17 + 0x3c);
                    if ((int)(uVar22 + 4) < (int)uVar3) {
                      *(int *)(pCVar34 + 0x40) =
                           *(int *)(pCVar34 + 0x40) + iVar45 * *(int *)(pCVar17 + 0x40);
                      *(int *)(pCVar27 + 0x40) =
                           *(int *)(pCVar27 + 0x40) + iVar47 * *(int *)(pCVar17 + 0x40);
                      *(int *)(pCVar34 + 0x44) =
                           *(int *)(pCVar34 + 0x44) + iVar45 * *(int *)(pCVar17 + 0x44);
                      *(int *)(pCVar27 + 0x44) =
                           *(int *)(pCVar27 + 0x44) + iVar47 * *(int *)(pCVar17 + 0x44);
                      *(int *)(pCVar34 + 0x48) =
                           *(int *)(pCVar34 + 0x48) + iVar45 * *(int *)(pCVar17 + 0x48);
                      *(int *)(pCVar27 + 0x48) =
                           *(int *)(pCVar27 + 0x48) + iVar47 * *(int *)(pCVar17 + 0x48);
                      *(int *)(pCVar34 + 0x4c) =
                           *(int *)(pCVar34 + 0x4c) + iVar45 * *(int *)(pCVar17 + 0x4c);
                      *(int *)(pCVar27 + 0x4c) =
                           *(int *)(pCVar27 + 0x4c) + iVar47 * *(int *)(pCVar17 + 0x4c);
                      if ((int)(uVar22 + 5) < (int)uVar3) {
                        *(int *)(pCVar34 + 0x50) =
                             *(int *)(pCVar34 + 0x50) + iVar45 * *(int *)(pCVar17 + 0x50);
                        *(int *)(pCVar27 + 0x50) =
                             *(int *)(pCVar27 + 0x50) + iVar47 * *(int *)(pCVar17 + 0x50);
                        *(int *)(pCVar34 + 0x54) =
                             *(int *)(pCVar34 + 0x54) + iVar45 * *(int *)(pCVar17 + 0x54);
                        *(int *)(pCVar27 + 0x54) =
                             *(int *)(pCVar27 + 0x54) + iVar47 * *(int *)(pCVar17 + 0x54);
                        *(int *)(pCVar34 + 0x58) =
                             *(int *)(pCVar34 + 0x58) + iVar45 * *(int *)(pCVar17 + 0x58);
                        *(int *)(pCVar27 + 0x58) =
                             *(int *)(pCVar27 + 0x58) + iVar47 * *(int *)(pCVar17 + 0x58);
                        *(int *)(pCVar34 + 0x5c) =
                             *(int *)(pCVar34 + 0x5c) + iVar45 * *(int *)(pCVar17 + 0x5c);
                        *(int *)(pCVar27 + 0x5c) =
                             *(int *)(pCVar27 + 0x5c) + iVar47 * *(int *)(pCVar17 + 0x5c);
                        if ((int)(uVar22 + 6) < (int)uVar3) {
                          *(int *)(pCVar34 + 0x60) =
                               *(int *)(pCVar34 + 0x60) + iVar45 * *(int *)(pCVar17 + 0x60);
                          *(int *)(pCVar27 + 0x60) =
                               *(int *)(pCVar27 + 0x60) + iVar47 * *(int *)(pCVar17 + 0x60);
                          *(int *)(pCVar34 + 100) =
                               *(int *)(pCVar34 + 100) + iVar45 * *(int *)(pCVar17 + 100);
                          *(int *)(pCVar27 + 100) =
                               *(int *)(pCVar27 + 100) + iVar47 * *(int *)(pCVar17 + 100);
                          *(int *)(pCVar34 + 0x68) =
                               *(int *)(pCVar34 + 0x68) + iVar45 * *(int *)(pCVar17 + 0x68);
                          *(int *)(pCVar27 + 0x68) =
                               *(int *)(pCVar27 + 0x68) + iVar47 * *(int *)(pCVar17 + 0x68);
                          *(int *)(pCVar34 + 0x6c) =
                               *(int *)(pCVar34 + 0x6c) + iVar45 * *(int *)(pCVar17 + 0x6c);
                          *(int *)(pCVar27 + 0x6c) =
                               *(int *)(pCVar27 + 0x6c) + iVar47 * *(int *)(pCVar17 + 0x6c);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0515fc54:
        iVar28 = iVar28 + 1;
        pCVar33 = pCVar33 + (long)(int)(uVar3 * 4) * 4;
      } while (iVar28 < iVar30);
      iVar28 = *(int *)(param_3 + 0xc);
    }
    if (0 < iVar28) {
      uVar24 = -(ulong)(uVar3 * 4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar3 * 4) << 2;
      iVar35 = *(int *)(param_3 + 8);
      pCVar33 = pCVar25 + uVar24 + 0x10;
      iVar18 = 1;
      do {
        uVar21 = *(int *)param_3 + (iVar18 + -1 + *(int *)(param_3 + 4)) * *(int *)(param_1 + 0x38);
        if (0 < iVar35) {
          lVar46 = lVar23 + (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2) + 4
          ;
          iVar28 = 0;
          pCVar34 = pCVar33;
          do {
            uVar5 = *(ushort *)(pCVar34 + 0xe);
            if (uVar5 != 0) {
              uVar21 = *(uint *)(lVar46 + -4);
              iVar35 = (int)((0xff - (uVar21 >> 0x18)) * (uint)uVar5) / 0xff + (uVar21 >> 0x18);
              iVar30 = 0;
              if (iVar35 != 0) {
                iVar30 = (int)((uint)uVar5 * 0x100 - (uint)uVar5) / iVar35;
              }
              iVar45 = 0x100 - iVar30;
              *(uint *)(lVar46 + -4) =
                   (iVar45 * (uVar21 & 0xff) >> 8 & 0xff) +
                   ((int)((*(uint *)pCVar34 >> 0x10) * iVar30) >> 8) |
                   (iVar45 * (uVar21 & 0xff00) >> 8 & 0xff00) +
                   ((*(uint *)(pCVar34 + 4) >> 0x10) * iVar30 & 0xffffff00) | iVar35 * 0x1000000 |
                   (iVar45 * (uVar21 & 0xff0000) >> 8 & 0xff0000) +
                   ((int)((*(uint *)(pCVar34 + 8) >> 0x10) * iVar30) >> 8) * 0x10000;
              iVar35 = *(int *)(param_3 + 8);
            }
            iVar28 = iVar28 + 1;
            pCVar34 = pCVar34 + 0x10;
            lVar46 = lVar46 + 4;
          } while (iVar28 < iVar35);
          iVar28 = *(int *)(param_3 + 0xc);
        }
        pCVar33 = pCVar33 + uVar24;
        bVar1 = iVar18 < iVar28;
        iVar18 = iVar18 + 1;
      } while (bVar1);
    }
  }
  else {
    lVar38 = *(long *)(this + 0x88);
    lVar23 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
    iVar18 = LotteryResultProgressBar::GetCurrentLevel(this);
    iVar28 = (int)*(float *)param_4;
    iVar35 = (int)*(float *)(param_4 + 4);
    fVar54 = (float)iVar28;
    if (iVar28 < 0) {
      iVar28 = 0;
    }
    fVar51 = (float)iVar35;
    if (iVar35 < 0) {
      iVar35 = 0;
    }
    iVar45 = (int)((*(float *)param_4 + *(float *)(param_4 + 8)) - fVar54);
    iVar47 = (int)((*(float *)(param_4 + 4) + *(float *)(param_4 + 0xc)) - fVar51);
    iVar30 = *(int *)(param_2 + 0x38) - iVar28;
    if (iVar45 + iVar28 <= *(int *)(param_2 + 0x38)) {
      iVar30 = iVar45;
    }
    iVar45 = *(int *)(param_2 + 0x3c) - iVar35;
    if (iVar47 + iVar35 <= *(int *)(param_2 + 0x3c)) {
      iVar45 = iVar47;
    }
    if ((iVar45 < 1) || (iVar30 < 1)) goto LAB_0515ee78;
    iVar47 = *(int *)(param_3 + 8);
    iVar32 = *(int *)(param_3 + 0xc);
    uVar21 = iVar47 + 4;
    uVar37 = (ulong)(int)(uVar21 * iVar45 * 4);
    uVar24 = uVar37 << 2;
    if (0x1fc0000000000000 < uVar37) {
      uVar24 = 0xffffffffffffffff;
    }
    this_00 = operator_new__(uVar24);
    memset(this_00,0,(long)(int)(uVar21 * iVar45 * 0x10));
    LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)param_2);
    iVar57 = *(int *)(param_3 + 8);
    fVar51 = (float)iVar57;
    fVar54 = *(float *)(param_4 + 8);
    if (fVar54 < fVar51) {
      if (iVar57 == 1) {
        fVar54 = fVar54 / fVar51;
      }
      else {
        fVar54 = (fVar54 - 1.0) / (float)(iVar57 + -1);
      }
      if (1 < iVar47 + 3) {
        iVar28 = 0;
        fVar51 = *(float *)param_4;
        pCVar25 = this_00;
        do {
          pCVar25 = pCVar25 + 0x10;
          iVar30 = 0;
          fVar8 = fVar51 + fVar54 * (float)iVar28;
          iVar57 = (int)fVar8;
          pbVar42 = (byte *)(lVar38 + (iVar57 + iVar18 * iVar35));
          iVar36 = (int)(((1.0 - fVar8) + (float)iVar57) * 257.0);
          iVar57 = 0x101 - iVar36;
          pCVar33 = pCVar25;
          do {
            bVar4 = *pbVar42;
            iVar30 = iVar30 + 1;
            pbVar48 = pbVar42 + 1;
            pbVar42 = pbVar42 + iVar18;
            uVar3 = *(uint *)(lVar46 + (ulong)bVar4 * 4);
            uVar6 = *(uint *)(lVar46 + (ulong)*pbVar48 * 4);
            *(uint *)pCVar33 = (uVar3 & 0xff) * iVar36 + (uVar6 & 0xff) * iVar57;
            *(uint *)(pCVar33 + 4) = (uVar3 >> 8 & 0xff) * iVar36 + (uVar6 >> 8 & 0xff) * iVar57;
            *(uint *)(pCVar33 + 8) =
                 (uVar3 >> 0x10 & 0xff) * iVar36 + (uVar6 >> 0x10 & 0xff) * iVar57;
            *(uint *)(pCVar33 + 0xc) = iVar36 * (uVar3 >> 0x18) + iVar57 * (uVar6 >> 0x18);
            pCVar33 = pCVar33 + (long)((iVar47 + 3) * 4) * 4 + 0x10;
          } while (iVar30 < iVar45);
          iVar28 = iVar28 + 1;
        } while (iVar28 != iVar47 + 2);
      }
    }
    else {
      fVar51 = fVar51 / fVar54;
      fVar54 = *(float *)param_4;
      pbVar42 = (byte *)(lVar38 + (iVar28 + iVar18 * iVar35));
      iVar36 = (int)(fVar51 * 257.0);
      iVar57 = 0;
      do {
        while( true ) {
          fVar8 = fVar51 * ((float)iVar28 - fVar54) + 1.0 + fVar51 * (float)iVar57;
          iVar29 = (int)fVar8;
          iVar19 = (int)(fVar8 + fVar51);
          if (iVar29 == iVar19) break;
          fVar9 = (float)iVar19;
          iVar19 = 0;
          pCVar25 = this_00 + (long)(iVar29 << 2) * 4;
          iVar29 = (int)((fVar9 - fVar8) * 257.0);
          iVar44 = (int)(((fVar8 + fVar51) - fVar9) * 257.0);
          pbVar48 = pbVar42;
          do {
            bVar4 = *pbVar48;
            iVar19 = iVar19 + 1;
            pbVar48 = pbVar48 + iVar18;
            uVar3 = *(uint *)(lVar46 + (ulong)bVar4 * 4);
            uVar6 = uVar3 >> 8 & 0xff;
            uVar20 = uVar3 >> 0x10 & 0xff;
            *(uint *)pCVar25 = *(int *)pCVar25 + (uVar3 & 0xff) * iVar29;
            *(uint *)(pCVar25 + 4) = *(int *)(pCVar25 + 4) + uVar6 * iVar29;
            *(uint *)(pCVar25 + 8) = *(int *)(pCVar25 + 8) + uVar20 * iVar29;
            *(uint *)(pCVar25 + 0xc) = *(int *)(pCVar25 + 0xc) + (uVar3 >> 0x18) * iVar29;
            *(uint *)(pCVar25 + 0x10) = *(int *)(pCVar25 + 0x10) + (uVar3 & 0xff) * iVar44;
            *(uint *)(pCVar25 + 0x14) = *(int *)(pCVar25 + 0x14) + uVar6 * iVar44;
            *(uint *)(pCVar25 + 0x18) = *(int *)(pCVar25 + 0x18) + uVar20 * iVar44;
            *(uint *)(pCVar25 + 0x1c) = *(int *)(pCVar25 + 0x1c) + (uVar3 >> 0x18) * iVar44;
            pCVar25 = pCVar25 + (long)((iVar47 + 2) * 4) * 4 + 0x20;
          } while (iVar19 < iVar45);
          iVar57 = iVar57 + 1;
          pbVar42 = pbVar42 + 1;
          if (iVar30 <= iVar57) goto LAB_0515e5c0;
        }
        iVar19 = 0;
        pCVar25 = this_00 + (long)(iVar29 << 2) * 4;
        pbVar48 = pbVar42;
        do {
          bVar4 = *pbVar48;
          iVar19 = iVar19 + 1;
          pbVar48 = pbVar48 + iVar18;
          uVar3 = *(uint *)(lVar46 + (ulong)bVar4 * 4);
          *(uint *)pCVar25 = *(int *)pCVar25 + (uVar3 & 0xff) * iVar36;
          *(uint *)(pCVar25 + 4) = *(int *)(pCVar25 + 4) + (uVar3 >> 8 & 0xff) * iVar36;
          *(uint *)(pCVar25 + 8) = *(int *)(pCVar25 + 8) + (uVar3 >> 0x10 & 0xff) * iVar36;
          *(uint *)(pCVar25 + 0xc) = *(int *)(pCVar25 + 0xc) + iVar36 * (uVar3 >> 0x18);
          pCVar25 = pCVar25 + (long)((iVar47 + 3) * 4) * 4 + 0x10;
        } while (iVar19 < iVar45);
        iVar57 = iVar57 + 1;
        pbVar42 = pbVar42 + 1;
      } while (iVar57 < iVar30);
    }
LAB_0515e5c0:
    iVar28 = uVar21 * (iVar32 + 4);
    uVar37 = (ulong)(iVar28 * 4);
    uVar24 = uVar37 << 2;
    if (0x1fc0000000000000 < uVar37) {
      uVar24 = 0xffffffffffffffff;
    }
    pCVar25 = operator_new__(uVar24);
    memset(pCVar25,0,(long)(iVar28 * 0x10));
    iVar28 = *(int *)(param_3 + 0xc);
    fVar51 = (float)iVar28;
    fVar54 = *(float *)(param_4 + 0xc);
    if (fVar54 < fVar51) {
      if (iVar28 == 1) {
        fVar54 = fVar54 / fVar51;
      }
      else {
        fVar54 = (fVar54 - 1.0) / (float)(iVar28 + -1);
        if (iVar28 < 1) goto LAB_0515ee58;
      }
      uVar3 = uVar21 * 4;
      uVar24 = (ulong)uVar3;
      fVar51 = *(float *)(param_4 + 4);
      lVar38 = (long)(int)uVar3 * 4;
      iVar35 = 1;
      lVar46 = ((ulong)(iVar47 + 1) + 1) * 0x10;
      pCVar33 = pCVar25 + lVar38 + 0x10;
      do {
        fVar8 = (fVar51 - (float)(int)fVar51) + fVar54 * (float)(iVar35 + -1);
        iVar30 = (int)fVar8;
        uVar6 = (iVar30 * uVar21 + 1) * 4;
        uVar37 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        pCVar34 = this_00 + uVar37;
        iVar32 = (int)(((1.0 - fVar8) + (float)iVar30) * 256.0);
        iVar18 = 0x100 - iVar32;
        pCVar27 = pCVar34;
        if (iVar30 != iVar45 + -1) {
          pCVar27 = this_00 + (long)(int)((iVar30 * uVar21 + uVar21 + 1) * 4) * 4;
        }
        if (-2 < iVar47) {
          if ((iVar47 + 2U < 3 || pCVar33 < this_00 + uVar37 + 0x40 && pCVar34 < pCVar33 + 0x40) ||
             (pCVar33 < pCVar27 + 0x40 && pCVar27 < pCVar33 + 0x40)) {
            pCVar17 = pCVar27;
            pCVar14 = pCVar33 + ((long)(int)(uVar3 + 4) - (long)(int)uVar3) * 4 + -0x10;
            do {
              pCVar12 = pCVar17 + 0x10;
              *(int *)pCVar14 = iVar32 * *(int *)pCVar34 + iVar18 * *(int *)pCVar17;
              *(int *)(pCVar14 + 4) =
                   iVar32 * *(int *)(pCVar34 + 4) + iVar18 * *(int *)(pCVar17 + 4);
              *(int *)(pCVar14 + 8) =
                   iVar32 * *(int *)(pCVar34 + 8) + iVar18 * *(int *)(pCVar17 + 8);
              *(int *)(pCVar14 + 0xc) =
                   iVar32 * *(int *)(pCVar34 + 0xc) + iVar18 * *(int *)(pCVar17 + 0xc);
              pCVar17 = pCVar12;
              pCVar34 = pCVar34 + 0x10;
              pCVar14 = pCVar14 + 0x10;
            } while (pCVar12 != pCVar27 + lVar46);
          }
          else {
            lVar26 = 0;
            do {
              lVar2 = lVar26 + uVar37;
              pCVar34 = pCVar33 + lVar26;
              uVar53 = *(undefined8 *)(pCVar27 + lVar26 + 8);
              uVar52 = *(undefined8 *)(pCVar27 + lVar26);
              lVar26 = lVar26 + 0x10;
              uVar50 = *(undefined8 *)(this_00 + lVar2 + 8);
              uVar49 = *(undefined8 *)(this_00 + lVar2);
              *(ulong *)(pCVar34 + 8) =
                   CONCAT44((int)((ulong)uVar50 >> 0x20) * iVar32 +
                            (int)((ulong)uVar53 >> 0x20) * iVar18,
                            (int)uVar50 * iVar32 + (int)uVar53 * iVar18);
              *(ulong *)pCVar34 =
                   CONCAT44((int)((ulong)uVar49 >> 0x20) * iVar32 +
                            (int)((ulong)uVar52 >> 0x20) * iVar18,
                            (int)uVar49 * iVar32 + (int)uVar52 * iVar18);
            } while (lVar26 != lVar46);
          }
          iVar28 = *(int *)(param_3 + 0xc);
        }
        iVar35 = iVar35 + 1;
        pCVar33 = pCVar33 + lVar38;
      } while (iVar35 <= iVar28);
    }
    else {
      fVar51 = fVar51 / fVar54;
      uVar3 = (iVar47 - 1U >> 2) + 1;
      uVar6 = uVar3 * 4;
      uVar24 = (ulong)(uVar21 * 4);
      uVar37 = -(ulong)(uVar21 * 4 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2;
      pCVar33 = this_00 + 0x40;
      iVar28 = 0;
      lVar38 = (ulong)uVar6 * 0x10;
      lVar46 = ((ulong)(iVar47 + 3U) + 1) * 0x10;
      fVar54 = *(float *)(param_4 + 4);
      iVar18 = (int)(fVar51 * 256.0);
      pCVar34 = this_00;
      do {
        while( true ) {
          fVar8 = fVar51 * ((float)iVar35 - fVar54) + 1.0 + fVar51 * (float)iVar28;
          iVar30 = (int)fVar8;
          iVar32 = (int)(fVar8 + fVar51);
          if (iVar30 == iVar32) break;
          uVar20 = iVar30 * uVar21 * 4;
          uVar22 = iVar32 * uVar21 * 4;
          uVar31 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
          uVar39 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2;
          pCVar27 = pCVar25 + uVar31;
          pCVar17 = pCVar25 + uVar39;
          iVar30 = (int)(((float)iVar32 - fVar8) * 256.0);
          iVar32 = (int)(((fVar8 + fVar51) - (float)iVar32) * 256.0);
          if (0 < (int)uVar21) {
            if ((uVar21 < 7 ||
                 (pCVar34 < pCVar25 + uVar31 + 0x40 && pCVar27 < pCVar33 ||
                 pCVar34 < pCVar25 + uVar39 + 0x40 && pCVar17 < pCVar33)) ||
               ((long)uVar31 < (long)(uVar39 + 0x40) && (long)uVar39 < (long)(uVar31 + 0x40))) {
              pCVar14 = pCVar34;
              pCVar12 = pCVar17;
              do {
                pCVar13 = pCVar12 + 0x10;
                *(int *)pCVar27 = *(int *)pCVar27 + iVar30 * *(int *)pCVar14;
                *(int *)pCVar12 = *(int *)pCVar12 + iVar32 * *(int *)pCVar14;
                *(int *)(pCVar27 + 4) = *(int *)(pCVar27 + 4) + iVar30 * *(int *)(pCVar14 + 4);
                *(int *)(pCVar12 + 4) = *(int *)(pCVar12 + 4) + iVar32 * *(int *)(pCVar14 + 4);
                *(int *)(pCVar27 + 8) = *(int *)(pCVar27 + 8) + iVar30 * *(int *)(pCVar14 + 8);
                *(int *)(pCVar12 + 8) = *(int *)(pCVar12 + 8) + iVar32 * *(int *)(pCVar14 + 8);
                *(int *)(pCVar27 + 0xc) = *(int *)(pCVar27 + 0xc) + iVar30 * *(int *)(pCVar14 + 0xc)
                ;
                *(int *)(pCVar12 + 0xc) = *(int *)(pCVar12 + 0xc) + iVar32 * *(int *)(pCVar14 + 0xc)
                ;
                pCVar14 = pCVar14 + 0x10;
                pCVar12 = pCVar13;
                pCVar27 = pCVar27 + 0x10;
              } while (pCVar13 != pCVar17 + lVar46);
            }
            else {
              if (iVar47 + 3U < 4) {
                pCVar14 = pCVar34;
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                pCVar14 = pCVar17;
                pCVar12 = pCVar34;
                pCVar13 = pCVar34;
                pCVar11 = pCVar27;
                pCVar15 = pCVar27;
                pCVar16 = pCVar17;
                do {
                  iVar55 = *(int *)pCVar11;
                  iVar64 = *(int *)(pCVar11 + 4);
                  iVar72 = *(int *)(pCVar11 + 8);
                  iVar81 = *(int *)(pCVar11 + 0xc);
                  iVar57 = *(int *)(pCVar11 + 0x10);
                  iVar67 = *(int *)(pCVar11 + 0x14);
                  iVar75 = *(int *)(pCVar11 + 0x18);
                  iVar84 = *(int *)(pCVar11 + 0x1c);
                  iVar58 = *(int *)(pCVar11 + 0x20);
                  iVar68 = *(int *)(pCVar11 + 0x24);
                  iVar76 = *(int *)(pCVar11 + 0x28);
                  iVar87 = *(int *)(pCVar11 + 0x2c);
                  iVar62 = *(int *)(pCVar11 + 0x30);
                  iVar71 = *(int *)(pCVar11 + 0x34);
                  iVar79 = *(int *)(pCVar11 + 0x38);
                  iVar90 = *(int *)(pCVar11 + 0x3c);
                  pCVar11 = pCVar11 + 0x40;
                  uVar20 = uVar20 + 1;
                  _local_150 = CONCAT14((char)iVar57,iVar55);
                  _local_150 = CONCAT15((char)((uint)iVar57 >> 8),_local_150);
                  _local_150 = CONCAT16((char)((uint)iVar57 >> 0x10),_local_150);
                  _local_150 = CONCAT17((char)((uint)iVar57 >> 0x18),_local_150);
                  iVar56 = *(int *)pCVar12;
                  iVar65 = *(int *)(pCVar12 + 4);
                  iVar73 = *(int *)(pCVar12 + 8);
                  iVar82 = *(int *)(pCVar12 + 0xc);
                  iVar57 = *(int *)(pCVar12 + 0x10);
                  iVar19 = *(int *)(pCVar12 + 0x14);
                  iVar44 = *(int *)(pCVar12 + 0x18);
                  iVar85 = *(int *)(pCVar12 + 0x1c);
                  iVar59 = *(int *)(pCVar12 + 0x20);
                  iVar69 = *(int *)(pCVar12 + 0x24);
                  iVar77 = *(int *)(pCVar12 + 0x28);
                  iVar88 = *(int *)(pCVar12 + 0x2c);
                  iVar36 = *(int *)(pCVar12 + 0x30);
                  iVar29 = *(int *)(pCVar12 + 0x34);
                  iVar80 = *(int *)(pCVar12 + 0x38);
                  iVar91 = *(int *)(pCVar12 + 0x3c);
                  pCVar12 = pCVar12 + 0x40;
                  _local_110 = CONCAT17((char)((uint)iVar57 >> 0x18),
                                        CONCAT16((char)((uint)iVar57 >> 0x10),
                                                 CONCAT15((char)((uint)iVar57 >> 8),
                                                          CONCAT14((char)iVar57,iVar56))));
                  _iStack_108 = CONCAT17((char)((uint)iVar36 >> 0x18),
                                         CONCAT16((char)((uint)iVar36 >> 0x10),
                                                  CONCAT15((char)((uint)iVar36 >> 8),
                                                           CONCAT14((char)iVar36,iVar59))));
                  _local_100 = CONCAT17((char)((uint)iVar19 >> 0x18),
                                        CONCAT16((char)((uint)iVar19 >> 0x10),
                                                 CONCAT15((char)((uint)iVar19 >> 8),
                                                          CONCAT14((char)iVar19,iVar65))));
                  _iStack_f8 = CONCAT17((char)((uint)iVar29 >> 0x18),
                                        CONCAT16((char)((uint)iVar29 >> 0x10),
                                                 CONCAT15((char)((uint)iVar29 >> 8),
                                                          CONCAT14((char)iVar29,iVar69))));
                  _local_f0 = CONCAT17((char)((uint)iVar44 >> 0x18),
                                       CONCAT16((char)((uint)iVar44 >> 0x10),
                                                CONCAT15((char)((uint)iVar44 >> 8),
                                                         CONCAT14((char)iVar44,iVar73))));
                  _iStack_e8 = CONCAT17((char)((uint)iVar80 >> 0x18),
                                        CONCAT16((char)((uint)iVar80 >> 0x10),
                                                 CONCAT15((char)((uint)iVar80 >> 8),
                                                          CONCAT14((char)iVar80,iVar77))));
                  _local_e0 = CONCAT17((char)((uint)iVar85 >> 0x18),
                                       CONCAT16((char)((uint)iVar85 >> 0x10),
                                                CONCAT15((char)((uint)iVar85 >> 8),
                                                         CONCAT14((char)iVar85,iVar82))));
                  _iStack_d8 = CONCAT17((char)((uint)iVar91 >> 0x18),
                                        CONCAT16((char)((uint)iVar91 >> 0x10),
                                                 CONCAT15((char)((uint)iVar91 >> 8),
                                                          CONCAT14((char)iVar91,iVar88))));
                  iVar85 = *(int *)pCVar13;
                  iVar57 = *(int *)(pCVar13 + 0x10);
                  iVar60 = *(int *)(pCVar13 + 0x20);
                  iVar63 = *(int *)(pCVar13 + 0x30);
                  pCVar13 = pCVar13 + 0x40;
                  _local_190 = CONCAT14((char)iVar57,iVar85);
                  _local_190 = CONCAT15((char)((uint)iVar57 >> 8),_local_190);
                  _local_190 = CONCAT16((char)((uint)iVar57 >> 0x10),_local_190);
                  _local_190 = CONCAT17((char)((uint)iVar57 >> 0x18),_local_190);
                  iVar91 = *(int *)pCVar14;
                  iVar66 = *(int *)(pCVar14 + 4);
                  iVar74 = *(int *)(pCVar14 + 8);
                  iVar83 = *(int *)(pCVar14 + 0xc);
                  iVar57 = *(int *)(pCVar14 + 0x10);
                  iVar19 = *(int *)(pCVar14 + 0x14);
                  iVar44 = *(int *)(pCVar14 + 0x18);
                  iVar86 = *(int *)(pCVar14 + 0x1c);
                  iVar61 = *(int *)(pCVar14 + 0x20);
                  iVar70 = *(int *)(pCVar14 + 0x24);
                  iVar78 = *(int *)(pCVar14 + 0x28);
                  iVar89 = *(int *)(pCVar14 + 0x2c);
                  iVar36 = *(int *)(pCVar14 + 0x30);
                  iVar29 = *(int *)(pCVar14 + 0x34);
                  iVar80 = *(int *)(pCVar14 + 0x38);
                  iVar92 = *(int *)(pCVar14 + 0x3c);
                  pCVar14 = pCVar14 + 0x40;
                  _local_d0 = CONCAT17((char)((uint)iVar57 >> 0x18),
                                       CONCAT16((char)((uint)iVar57 >> 0x10),
                                                CONCAT15((char)((uint)iVar57 >> 8),
                                                         CONCAT14((char)iVar57,iVar91))));
                  _iStack_c8 = CONCAT17((char)((uint)iVar36 >> 0x18),
                                        CONCAT16((char)((uint)iVar36 >> 0x10),
                                                 CONCAT15((char)((uint)iVar36 >> 8),
                                                          CONCAT14((char)iVar36,iVar61))));
                  _local_c0 = CONCAT17((char)((uint)iVar19 >> 0x18),
                                       CONCAT16((char)((uint)iVar19 >> 0x10),
                                                CONCAT15((char)((uint)iVar19 >> 8),
                                                         CONCAT14((char)iVar19,iVar66))));
                  _iStack_b8 = CONCAT17((char)((uint)iVar29 >> 0x18),
                                        CONCAT16((char)((uint)iVar29 >> 0x10),
                                                 CONCAT15((char)((uint)iVar29 >> 8),
                                                          CONCAT14((char)iVar29,iVar70))));
                  _local_b0 = CONCAT17((char)((uint)iVar44 >> 0x18),
                                       CONCAT16((char)((uint)iVar44 >> 0x10),
                                                CONCAT15((char)((uint)iVar44 >> 8),
                                                         CONCAT14((char)iVar44,iVar74))));
                  _iStack_a8 = CONCAT17((char)((uint)iVar80 >> 0x18),
                                        CONCAT16((char)((uint)iVar80 >> 0x10),
                                                 CONCAT15((char)((uint)iVar80 >> 8),
                                                          CONCAT14((char)iVar80,iVar78))));
                  _local_a0 = CONCAT17((char)((uint)iVar86 >> 0x18),
                                       CONCAT16((char)((uint)iVar86 >> 0x10),
                                                CONCAT15((char)((uint)iVar86 >> 8),
                                                         CONCAT14((char)iVar86,iVar83))));
                  _iStack_98 = CONCAT17((char)((uint)iVar92 >> 0x18),
                                        CONCAT16((char)((uint)iVar92 >> 0x10),
                                                 CONCAT15((char)((uint)iVar92 >> 8),
                                                          CONCAT14((char)iVar92,iVar89))));
                  iVar57 = (int)((ulong)_local_100 >> 0x20);
                  iVar19 = (int)((ulong)_iStack_f8 >> 0x20);
                  iVar44 = (int)((ulong)_local_f0 >> 0x20);
                  iVar80 = (int)((ulong)_iStack_e8 >> 0x20);
                  iVar36 = (int)((ulong)_local_e0 >> 0x20);
                  iVar29 = (int)((ulong)_iStack_d8 >> 0x20);
                  *(int *)pCVar15 = iVar55 + iVar30 * iVar85;
                  *(int *)(pCVar15 + 4) = iVar64 + iVar65 * iVar30;
                  *(int *)(pCVar15 + 8) = iVar72 + iVar73 * iVar30;
                  *(int *)(pCVar15 + 0xc) = iVar81 + iVar82 * iVar30;
                  *(int *)(pCVar15 + 0x10) =
                       (int)((ulong)_local_150 >> 0x20) + iVar30 * (int)((ulong)_local_190 >> 0x20);
                  *(int *)(pCVar15 + 0x14) =
                       (int)(CONCAT17((char)((uint)iVar67 >> 0x18),
                                      CONCAT16((char)((uint)iVar67 >> 0x10),
                                               CONCAT15((char)((uint)iVar67 >> 8),
                                                        CONCAT14((char)iVar67,iVar64)))) >> 0x20) +
                       iVar57 * iVar30;
                  *(int *)(pCVar15 + 0x18) =
                       (int)(CONCAT17((char)((uint)iVar75 >> 0x18),
                                      CONCAT16((char)((uint)iVar75 >> 0x10),
                                               CONCAT15((char)((uint)iVar75 >> 8),
                                                        CONCAT14((char)iVar75,iVar72)))) >> 0x20) +
                       iVar44 * iVar30;
                  *(int *)(pCVar15 + 0x1c) =
                       (int)(CONCAT17((char)((uint)iVar84 >> 0x18),
                                      CONCAT16((char)((uint)iVar84 >> 0x10),
                                               CONCAT15((char)((uint)iVar84 >> 8),
                                                        CONCAT14((char)iVar84,iVar81)))) >> 0x20) +
                       iVar36 * iVar30;
                  *(int *)(pCVar15 + 0x20) = iVar58 + iVar30 * iVar60;
                  *(int *)(pCVar15 + 0x24) = iVar68 + iVar69 * iVar30;
                  *(int *)(pCVar15 + 0x28) = iVar76 + iVar77 * iVar30;
                  *(int *)(pCVar15 + 0x2c) = iVar87 + iVar88 * iVar30;
                  *(int *)(pCVar15 + 0x30) =
                       (int)(CONCAT17((char)((uint)iVar62 >> 0x18),
                                      CONCAT16((char)((uint)iVar62 >> 0x10),
                                               CONCAT15((char)((uint)iVar62 >> 8),
                                                        CONCAT14((char)iVar62,iVar58)))) >> 0x20) +
                       iVar30 * (int)(CONCAT17((char)((uint)iVar63 >> 0x18),
                                               CONCAT16((char)((uint)iVar63 >> 0x10),
                                                        CONCAT15((char)((uint)iVar63 >> 8),
                                                                 CONCAT14((char)iVar63,iVar60)))) >>
                                     0x20);
                  *(int *)(pCVar15 + 0x34) =
                       (int)(CONCAT17((char)((uint)iVar71 >> 0x18),
                                      CONCAT16((char)((uint)iVar71 >> 0x10),
                                               CONCAT15((char)((uint)iVar71 >> 8),
                                                        CONCAT14((char)iVar71,iVar68)))) >> 0x20) +
                       iVar19 * iVar30;
                  *(int *)(pCVar15 + 0x38) =
                       (int)(CONCAT17((char)((uint)iVar79 >> 0x18),
                                      CONCAT16((char)((uint)iVar79 >> 0x10),
                                               CONCAT15((char)((uint)iVar79 >> 8),
                                                        CONCAT14((char)iVar79,iVar76)))) >> 0x20) +
                       iVar80 * iVar30;
                  *(int *)(pCVar15 + 0x3c) =
                       (int)(CONCAT17((char)((uint)iVar90 >> 0x18),
                                      CONCAT16((char)((uint)iVar90 >> 0x10),
                                               CONCAT15((char)((uint)iVar90 >> 8),
                                                        CONCAT14((char)iVar90,iVar87)))) >> 0x20) +
                       iVar29 * iVar30;
                  pCVar15 = pCVar15 + 0x40;
                  *(int *)pCVar16 = iVar91 + iVar32 * iVar56;
                  *(int *)(pCVar16 + 4) = iVar66 + iVar65 * iVar32;
                  *(int *)(pCVar16 + 8) = iVar74 + iVar73 * iVar32;
                  *(int *)(pCVar16 + 0xc) = iVar83 + iVar82 * iVar32;
                  *(int *)(pCVar16 + 0x10) =
                       (int)((ulong)_local_d0 >> 0x20) + iVar32 * (int)((ulong)_local_110 >> 0x20);
                  *(int *)(pCVar16 + 0x14) = (int)((ulong)_local_c0 >> 0x20) + iVar57 * iVar32;
                  *(int *)(pCVar16 + 0x18) = (int)((ulong)_local_b0 >> 0x20) + iVar44 * iVar32;
                  *(int *)(pCVar16 + 0x1c) = (int)((ulong)_local_a0 >> 0x20) + iVar36 * iVar32;
                  *(int *)(pCVar16 + 0x20) = iVar61 + iVar32 * iVar59;
                  *(int *)(pCVar16 + 0x24) = iVar70 + iVar69 * iVar32;
                  *(int *)(pCVar16 + 0x28) = iVar78 + iVar77 * iVar32;
                  *(int *)(pCVar16 + 0x2c) = iVar89 + iVar88 * iVar32;
                  *(int *)(pCVar16 + 0x30) =
                       (int)((ulong)_iStack_c8 >> 0x20) + iVar32 * (int)((ulong)_iStack_108 >> 0x20)
                  ;
                  *(int *)(pCVar16 + 0x34) = (int)((ulong)_iStack_b8 >> 0x20) + iVar19 * iVar32;
                  *(int *)(pCVar16 + 0x38) = (int)((ulong)_iStack_a8 >> 0x20) + iVar80 * iVar32;
                  *(int *)(pCVar16 + 0x3c) = (int)((ulong)_iStack_98 >> 0x20) + iVar29 * iVar32;
                  pCVar16 = pCVar16 + 0x40;
                } while (uVar20 < uVar3);
                pCVar14 = pCVar34 + lVar38;
                pCVar27 = pCVar27 + lVar38;
                pCVar17 = pCVar17 + lVar38;
                uVar20 = uVar6;
                if (uVar6 == uVar21) goto LAB_0515ec5c;
              }
              *(int *)pCVar27 = *(int *)pCVar27 + iVar30 * *(int *)pCVar14;
              *(int *)pCVar17 = *(int *)pCVar17 + iVar32 * *(int *)pCVar14;
              *(int *)(pCVar27 + 4) = *(int *)(pCVar27 + 4) + iVar30 * *(int *)(pCVar14 + 4);
              *(int *)(pCVar17 + 4) = *(int *)(pCVar17 + 4) + iVar32 * *(int *)(pCVar14 + 4);
              *(int *)(pCVar27 + 8) = *(int *)(pCVar27 + 8) + iVar30 * *(int *)(pCVar14 + 8);
              *(int *)(pCVar17 + 8) = *(int *)(pCVar17 + 8) + iVar32 * *(int *)(pCVar14 + 8);
              *(int *)(pCVar27 + 0xc) = *(int *)(pCVar27 + 0xc) + iVar30 * *(int *)(pCVar14 + 0xc);
              *(int *)(pCVar17 + 0xc) = *(int *)(pCVar17 + 0xc) + iVar32 * *(int *)(pCVar14 + 0xc);
              if ((int)(uVar20 + 1) < (int)uVar21) {
                *(int *)(pCVar27 + 0x10) =
                     *(int *)(pCVar27 + 0x10) + iVar30 * *(int *)(pCVar14 + 0x10);
                *(int *)(pCVar17 + 0x10) =
                     *(int *)(pCVar17 + 0x10) + iVar32 * *(int *)(pCVar14 + 0x10);
                *(int *)(pCVar27 + 0x14) =
                     *(int *)(pCVar27 + 0x14) + iVar30 * *(int *)(pCVar14 + 0x14);
                *(int *)(pCVar17 + 0x14) =
                     *(int *)(pCVar17 + 0x14) + iVar32 * *(int *)(pCVar14 + 0x14);
                *(int *)(pCVar27 + 0x18) =
                     *(int *)(pCVar27 + 0x18) + iVar30 * *(int *)(pCVar14 + 0x18);
                *(int *)(pCVar17 + 0x18) =
                     *(int *)(pCVar17 + 0x18) + iVar32 * *(int *)(pCVar14 + 0x18);
                *(int *)(pCVar27 + 0x1c) =
                     *(int *)(pCVar27 + 0x1c) + iVar30 * *(int *)(pCVar14 + 0x1c);
                *(int *)(pCVar17 + 0x1c) =
                     *(int *)(pCVar17 + 0x1c) + iVar32 * *(int *)(pCVar14 + 0x1c);
                if ((int)(uVar20 + 2) < (int)uVar21) {
                  *(int *)(pCVar27 + 0x20) =
                       *(int *)(pCVar27 + 0x20) + iVar30 * *(int *)(pCVar14 + 0x20);
                  *(int *)(pCVar17 + 0x20) =
                       *(int *)(pCVar17 + 0x20) + iVar32 * *(int *)(pCVar14 + 0x20);
                  *(int *)(pCVar27 + 0x24) =
                       *(int *)(pCVar27 + 0x24) + iVar30 * *(int *)(pCVar14 + 0x24);
                  *(int *)(pCVar17 + 0x24) =
                       *(int *)(pCVar17 + 0x24) + iVar32 * *(int *)(pCVar14 + 0x24);
                  *(int *)(pCVar27 + 0x28) =
                       *(int *)(pCVar27 + 0x28) + iVar30 * *(int *)(pCVar14 + 0x28);
                  *(int *)(pCVar17 + 0x28) =
                       *(int *)(pCVar17 + 0x28) + iVar32 * *(int *)(pCVar14 + 0x28);
                  *(int *)(pCVar27 + 0x2c) =
                       *(int *)(pCVar27 + 0x2c) + iVar30 * *(int *)(pCVar14 + 0x2c);
                  *(int *)(pCVar17 + 0x2c) =
                       *(int *)(pCVar17 + 0x2c) + iVar32 * *(int *)(pCVar14 + 0x2c);
                  if ((int)(uVar20 + 3) < (int)uVar21) {
                    *(int *)(pCVar27 + 0x30) =
                         *(int *)(pCVar27 + 0x30) + iVar30 * *(int *)(pCVar14 + 0x30);
                    *(int *)(pCVar17 + 0x30) =
                         *(int *)(pCVar17 + 0x30) + iVar32 * *(int *)(pCVar14 + 0x30);
                    *(int *)(pCVar27 + 0x34) =
                         *(int *)(pCVar27 + 0x34) + iVar30 * *(int *)(pCVar14 + 0x34);
                    *(int *)(pCVar17 + 0x34) =
                         *(int *)(pCVar17 + 0x34) + iVar32 * *(int *)(pCVar14 + 0x34);
                    *(int *)(pCVar27 + 0x38) =
                         *(int *)(pCVar27 + 0x38) + iVar30 * *(int *)(pCVar14 + 0x38);
                    *(int *)(pCVar17 + 0x38) =
                         *(int *)(pCVar17 + 0x38) + iVar32 * *(int *)(pCVar14 + 0x38);
                    *(int *)(pCVar27 + 0x3c) =
                         *(int *)(pCVar27 + 0x3c) + iVar30 * *(int *)(pCVar14 + 0x3c);
                    *(int *)(pCVar17 + 0x3c) =
                         *(int *)(pCVar17 + 0x3c) + iVar32 * *(int *)(pCVar14 + 0x3c);
                    if ((int)(uVar20 + 4) < (int)uVar21) {
                      *(int *)(pCVar27 + 0x40) =
                           *(int *)(pCVar27 + 0x40) + iVar30 * *(int *)(pCVar14 + 0x40);
                      *(int *)(pCVar17 + 0x40) =
                           *(int *)(pCVar17 + 0x40) + iVar32 * *(int *)(pCVar14 + 0x40);
                      *(int *)(pCVar27 + 0x44) =
                           *(int *)(pCVar27 + 0x44) + iVar30 * *(int *)(pCVar14 + 0x44);
                      *(int *)(pCVar17 + 0x44) =
                           *(int *)(pCVar17 + 0x44) + iVar32 * *(int *)(pCVar14 + 0x44);
                      *(int *)(pCVar27 + 0x48) =
                           *(int *)(pCVar27 + 0x48) + iVar30 * *(int *)(pCVar14 + 0x48);
                      *(int *)(pCVar17 + 0x48) =
                           *(int *)(pCVar17 + 0x48) + iVar32 * *(int *)(pCVar14 + 0x48);
                      *(int *)(pCVar27 + 0x4c) =
                           *(int *)(pCVar27 + 0x4c) + iVar30 * *(int *)(pCVar14 + 0x4c);
                      *(int *)(pCVar17 + 0x4c) =
                           *(int *)(pCVar17 + 0x4c) + iVar32 * *(int *)(pCVar14 + 0x4c);
                      if ((int)(uVar20 + 5) < (int)uVar21) {
                        *(int *)(pCVar27 + 0x50) =
                             *(int *)(pCVar27 + 0x50) + iVar30 * *(int *)(pCVar14 + 0x50);
                        *(int *)(pCVar17 + 0x50) =
                             *(int *)(pCVar17 + 0x50) + iVar32 * *(int *)(pCVar14 + 0x50);
                        *(int *)(pCVar27 + 0x54) =
                             *(int *)(pCVar27 + 0x54) + iVar30 * *(int *)(pCVar14 + 0x54);
                        *(int *)(pCVar17 + 0x54) =
                             *(int *)(pCVar17 + 0x54) + iVar32 * *(int *)(pCVar14 + 0x54);
                        *(int *)(pCVar27 + 0x58) =
                             *(int *)(pCVar27 + 0x58) + iVar30 * *(int *)(pCVar14 + 0x58);
                        *(int *)(pCVar17 + 0x58) =
                             *(int *)(pCVar17 + 0x58) + iVar32 * *(int *)(pCVar14 + 0x58);
                        *(int *)(pCVar27 + 0x5c) =
                             *(int *)(pCVar27 + 0x5c) + iVar30 * *(int *)(pCVar14 + 0x5c);
                        *(int *)(pCVar17 + 0x5c) =
                             *(int *)(pCVar17 + 0x5c) + iVar32 * *(int *)(pCVar14 + 0x5c);
                        if ((int)(uVar20 + 6) < (int)uVar21) {
                          *(int *)(pCVar27 + 0x60) =
                               *(int *)(pCVar27 + 0x60) + iVar30 * *(int *)(pCVar14 + 0x60);
                          *(int *)(pCVar17 + 0x60) =
                               *(int *)(pCVar17 + 0x60) + iVar32 * *(int *)(pCVar14 + 0x60);
                          *(int *)(pCVar27 + 100) =
                               *(int *)(pCVar27 + 100) + iVar30 * *(int *)(pCVar14 + 100);
                          *(int *)(pCVar17 + 100) =
                               *(int *)(pCVar17 + 100) + iVar32 * *(int *)(pCVar14 + 100);
                          *(int *)(pCVar27 + 0x68) =
                               *(int *)(pCVar27 + 0x68) + iVar30 * *(int *)(pCVar14 + 0x68);
                          *(int *)(pCVar17 + 0x68) =
                               *(int *)(pCVar17 + 0x68) + iVar32 * *(int *)(pCVar14 + 0x68);
                          *(int *)(pCVar27 + 0x6c) =
                               *(int *)(pCVar27 + 0x6c) + iVar30 * *(int *)(pCVar14 + 0x6c);
                          *(int *)(pCVar17 + 0x6c) =
                               *(int *)(pCVar17 + 0x6c) + iVar32 * *(int *)(pCVar14 + 0x6c);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_0515ec5c:
          iVar28 = iVar28 + 1;
          pCVar34 = pCVar34 + uVar37;
          pCVar33 = pCVar33 + uVar37;
          if (iVar45 <= iVar28) goto LAB_0515ed0c;
        }
        uVar20 = iVar30 * uVar21 * 4;
        uVar31 = -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2;
        pCVar27 = pCVar25 + uVar31;
        if ((int)uVar21 < 1) goto LAB_0515ec5c;
        if ((pCVar34 < pCVar25 + uVar31 + 0x40 && pCVar27 < pCVar33) || (uVar21 < 2)) {
          pCVar17 = pCVar34;
          pCVar14 = pCVar27;
          do {
            pCVar12 = pCVar14 + 0x10;
            *(int *)pCVar14 = *(int *)pCVar14 + iVar18 * *(int *)pCVar17;
            *(int *)(pCVar14 + 4) = *(int *)(pCVar14 + 4) + iVar18 * *(int *)(pCVar17 + 4);
            *(int *)(pCVar14 + 8) = *(int *)(pCVar14 + 8) + iVar18 * *(int *)(pCVar17 + 8);
            *(int *)(pCVar14 + 0xc) = *(int *)(pCVar14 + 0xc) + iVar18 * *(int *)(pCVar17 + 0xc);
            pCVar17 = pCVar17 + 0x10;
            pCVar14 = pCVar12;
          } while (pCVar27 + lVar46 != pCVar12);
          goto LAB_0515ec5c;
        }
        lVar26 = 0;
        do {
          pCVar17 = pCVar27 + lVar26;
          pCVar14 = pCVar34 + lVar26;
          lVar26 = lVar26 + 0x10;
          uVar50 = *(undefined8 *)(pCVar14 + 8);
          uVar49 = *(undefined8 *)pCVar14;
          *(ulong *)(pCVar17 + 8) =
               CONCAT44((int)((ulong)*(undefined8 *)(pCVar17 + 8) >> 0x20) +
                        (int)((ulong)uVar50 >> 0x20) * iVar18,
                        (int)*(undefined8 *)(pCVar17 + 8) + (int)uVar50 * iVar18);
          *(ulong *)pCVar17 =
               CONCAT44((int)((ulong)*(undefined8 *)pCVar17 >> 0x20) +
                        (int)((ulong)uVar49 >> 0x20) * iVar18,
                        (int)*(undefined8 *)pCVar17 + (int)uVar49 * iVar18);
        } while (lVar26 != lVar46);
        iVar28 = iVar28 + 1;
        pCVar34 = pCVar34 + uVar37;
        pCVar33 = pCVar33 + uVar37;
      } while (iVar28 < iVar45);
LAB_0515ed0c:
      iVar28 = *(int *)(param_3 + 0xc);
    }
    if (0 < iVar28) {
      uVar24 = -(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2;
      iVar35 = *(int *)(param_3 + 8);
      pCVar33 = pCVar25 + uVar24 + 0x10;
      iVar18 = 1;
      do {
        uVar21 = *(int *)param_3 + (iVar18 + -1 + *(int *)(param_3 + 4)) * *(int *)(param_1 + 0x38);
        if (0 < iVar35) {
          lVar46 = lVar23 + (-(ulong)(uVar21 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar21 << 2) + 4
          ;
          iVar28 = 0;
          pCVar34 = pCVar33;
          do {
            uVar5 = *(ushort *)(pCVar34 + 0xe);
            if (uVar5 != 0) {
              uVar21 = *(uint *)(lVar46 + -4);
              iVar35 = (int)((0xff - (uVar21 >> 0x18)) * (uint)uVar5) / 0xff + (uVar21 >> 0x18);
              iVar30 = 0;
              if (iVar35 != 0) {
                iVar30 = (int)((uint)uVar5 * 0x100 - (uint)uVar5) / iVar35;
              }
              iVar45 = 0x100 - iVar30;
              *(uint *)(lVar46 + -4) =
                   (iVar45 * (uVar21 & 0xff) >> 8 & 0xff) +
                   ((int)((*(uint *)pCVar34 >> 0x10) * iVar30) >> 8) |
                   (iVar45 * (uVar21 & 0xff00) >> 8 & 0xff00) +
                   ((*(uint *)(pCVar34 + 4) >> 0x10) * iVar30 & 0xffffff00) | iVar35 * 0x1000000 |
                   (iVar45 * (uVar21 & 0xff0000) >> 8 & 0xff0000) +
                   ((int)((*(uint *)(pCVar34 + 8) >> 0x10) * iVar30) >> 8) * 0x10000;
              iVar35 = *(int *)(param_3 + 8);
            }
            iVar28 = iVar28 + 1;
            pCVar34 = pCVar34 + 0x10;
            lVar46 = lVar46 + 4;
          } while (iVar28 < iVar35);
          iVar28 = *(int *)(param_3 + 0xc);
        }
        pCVar33 = pCVar33 + uVar24;
        bVar1 = iVar18 < iVar28;
        iVar18 = iVar18 + 1;
      } while (bVar1);
    }
  }
LAB_0515ee58:
  EATextSquish::ColourFit::~ColourFit(pCVar25);
  EATextSquish::ColourFit::~ColourFit(this_00);
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
LAB_0515ee78:
  if (lVar10 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::FastStretchBlt(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<float>
   const&, Sexy::Color const&, int) */

void Sexy::MemoryImage::FastStretchBlt
               (Image *param_1,TRect *param_2,TRect *param_3,Color *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  float fVar9;
  char cVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_2[0x28] = (TRect)0x1;
  plVar11 = (long *)(**(code **)(*(long *)param_2 + 0x48))(param_2);
  if (plVar11 != (long *)0x0) {
    lVar12 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
    iVar17 = *(int *)(param_3 + 4);
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)(param_1 + 0x38);
    lVar13 = (**(code **)(*plVar11 + 0xd0))(plVar11,0,0,0,0);
    fVar22 = *(float *)(param_4 + 4);
    iVar3 = *(int *)(param_3 + 8);
    fVar21 = *(float *)(param_4 + 8);
    iVar4 = *(int *)(param_3 + 0xc);
    fVar20 = *(float *)(param_4 + 0xc);
    Color::Color(aCStack_18,1);
    cVar10 = Sexy::operator==((Color *)(ulong)(uint)param_5,aCStack_18);
    if (cVar10 != '\0') {
      iVar15 = *(int *)(param_3 + 0xc);
      if (0 < iVar15) {
        iVar18 = 0;
        fVar19 = *(float *)param_4;
        iVar16 = *(int *)(param_3 + 8);
        puVar14 = (uint *)(lVar12 + ((long)iVar1 + (long)(iVar17 * iVar2)) * 4);
        do {
          if (0 < iVar16) {
            iVar17 = 0;
            puVar8 = puVar14;
            fVar9 = fVar19;
            do {
              fVar9 = fVar9 + fVar21 / (float)iVar3;
              uVar5 = *puVar8;
              uVar6 = *(uint *)(lVar13 + ((long)(int)fVar9 + (long)((int)fVar22 * (int)plVar11[7]))
                                         * 4);
              uVar7 = uVar6 >> 0x18;
              if (uVar7 != 0) {
                iVar1 = (int)((0xff - (uVar5 >> 0x18)) * uVar7) / 0xff + (uVar5 >> 0x18);
                iVar2 = 0;
                if (iVar1 != 0) {
                  iVar2 = (int)(uVar7 * 0xff) / iVar1;
                }
                iVar15 = 0x100 - iVar2;
                *puVar8 = (iVar2 * (uVar6 & 0xff) >> 8) + (iVar15 * (uVar5 & 0xff) >> 8) & 0xff |
                          (iVar2 * (uVar6 & 0xff00) >> 8) + (iVar15 * (uVar5 & 0xff00) >> 8) &
                          0xff00 | iVar1 * 0x1000000 |
                          (iVar2 * (uVar6 & 0xff0000) >> 8) + (iVar15 * (uVar5 & 0xff0000) >> 8) &
                          0xff0000;
                iVar16 = *(int *)(param_3 + 8);
              }
              iVar17 = iVar17 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar17 < iVar16);
            iVar15 = *(int *)(param_3 + 0xc);
          }
          iVar18 = iVar18 + 1;
          fVar22 = fVar22 + fVar20 / (float)iVar4;
          puVar14 = puVar14 + *(int *)(param_1 + 0x38);
        } while (iVar18 < iVar15);
      }
    }
  }
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BltMatrixHelper(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, void*, int, int, bool)
    */

void __thiscall
Sexy::MemoryImage::BltMatrixHelper
          (MemoryImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,void *param_9,int param_10,
          int param_11,bool param_12)

{
  XYZStruct *pXVar1;
  MemoryImage *pMVar2;
  XYZStruct *pXVar3;
  float fVar4;
  undefined4 uVar5;
  float local_78;
  float local_74;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Image *)0x0) {
    pMVar2 = (MemoryImage *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    if (pMVar2 != (MemoryImage *)0x0) {
      local_48 = 0xffffffff;
      local_34 = 0xffffffff;
      local_20 = 0xffffffff;
      local_c = 0xffffffff;
      local_50 = (float)*(int *)param_8 / (float)*(int *)(param_1 + 0x38);
      local_3c = (float)(*(int *)(param_8 + 8) + *(int *)param_8) / (float)*(int *)(param_1 + 0x38);
      local_44 = (float)*(int *)(param_8 + 8) * 0.5;
      local_2c = (float)*(int *)(param_8 + 0xc) * 0.5;
      local_4c = (float)*(int *)(param_8 + 4) / (float)*(int *)(param_1 + 0x3c);
      local_24 = (float)(*(int *)(param_8 + 0xc) + *(int *)(param_8 + 4)) /
                 (float)*(int *)(param_1 + 0x3c);
      local_58 = -local_44;
      local_54 = -local_2c;
      local_40 = -local_2c;
      local_30 = -local_44;
      local_28 = local_50;
      local_1c = local_44;
      local_38 = local_4c;
      local_18 = local_2c;
      local_14 = local_3c;
      local_10 = local_24;
      pXVar3 = (XYZStruct *)&local_58;
      do {
        fVar4 = *(float *)(pXVar3 + 4);
        pXVar1 = pXVar3 + 0x14;
        uVar5 = 0x3f800000;
        EATextSquish::Vec3::Vec3((Vec3 *)&local_78,*(float *)pXVar3,fVar4,1.0);
        local_68 = SexyMatrix3::operator*(param_4,(SexyVector3 *)&local_78);
        local_64 = fVar4;
        local_60 = uVar5;
        SexyVector3::operator=((SexyVector3 *)&local_78,(SexyVector3 *)&local_68);
        *(float *)pXVar3 = local_78 + -0.5 + param_2;
        *(float *)(pXVar3 + 4) = local_74 + -0.5 + param_3;
        pXVar3 = pXVar1;
      } while (pXVar1 != (XYZStruct *)&local_8);
      SWHelper::SWDrawShape
                ((XYZStruct *)&local_58,4,pMVar2,param_6,param_7,param_5,param_9,param_10,param_11,
                 param_12,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MemoryImage::BltMatrix(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::MemoryImage::BltMatrix
          (MemoryImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0xd0);
  param_1[0x28] = (Image)0x1;
  pvVar2 = (void *)(*pcVar3)(this,0,0,0,0);
  iVar1 = 0x8888;
  if (((this[0x90] != (MemoryImage)0x0) && (this[0x92] == (MemoryImage)0x0)) &&
     (iVar1 = 0x8888, this[0x91] == (MemoryImage)0x0)) {
    iVar1 = 0x888;
  }
  BltMatrixHelper(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pvVar2,
                  *(int *)(this + 0x38) << 2,iVar1,param_9);
  (**(code **)(*(long *)this + 0x98))(this);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltMatrix(Sexy::Image*, float, float, Sexy::SexyMatrix3
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::MemoryImage::BltMatrix
          (MemoryImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9)

{
  BltMatrix(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BltTrianglesTexHelper(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int,
   Sexy::TRect<int> const&, Sexy::Color const&, int, void*, int, int, float, float, bool) */

void __thiscall
Sexy::MemoryImage::BltTrianglesTexHelper
          (MemoryImage *this,Image *param_1,SexyVertex2D *param_2,int param_3,TRect *param_4,
          Color *param_5,int param_6,void *param_7,int param_8,int param_9,float param_10,
          float param_11,bool param_12)

{
  SexyVertex2D *pSVar1;
  MemoryImage *pMVar2;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Image *)0x0) {
    pMVar2 = (MemoryImage *)0x0;
  }
  else {
    pMVar2 = (MemoryImage *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  }
  if (0 < param_3) {
    pSVar1 = param_2 + ((ulong)(param_3 - 1) + 1) * 0x60;
    do {
      local_38 = *(int *)(param_2 + 0x10);
      local_24 = *(int *)(param_2 + 0x30);
      local_10 = *(int *)(param_2 + 0x50);
      local_40 = *(undefined4 *)(param_2 + 0x18);
      local_3c = *(undefined4 *)(param_2 + 0x1c);
      local_2c = *(undefined4 *)(param_2 + 0x38);
      local_28 = *(undefined4 *)(param_2 + 0x3c);
      local_18 = *(undefined4 *)(param_2 + 0x58);
      local_48 = *(float *)param_2 + param_10;
      local_44 = *(float *)(param_2 + 4) + param_11;
      local_34 = *(float *)(param_2 + 0x20) + param_10;
      local_30 = *(float *)(param_2 + 0x24) + param_11;
      local_20 = *(float *)(param_2 + 0x40) + param_10;
      local_1c = *(float *)(param_2 + 0x44) + param_11;
      local_14 = *(undefined4 *)(param_2 + 0x5c);
      param_2 = param_2 + 0x60;
      SWHelper::SWDrawShape
                ((XYZStruct *)&local_48,3,pMVar2,param_5,param_6,param_4,param_7,param_8,param_9,
                 param_12,local_10 != 0 || (local_24 != 0 || local_38 != 0));
    } while (param_2 != pSVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MemoryImage::BltTriangles(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int, Sexy::Color
   const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::MemoryImage::BltTriangles
          (MemoryImage *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8,TRect *param_9)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)this + 0xd0);
  param_1[0x28] = (Image)0x1;
  pvVar2 = (void *)(*pcVar3)(this,0,0,0,0);
  iVar1 = 0x8888;
  if (((this[0x90] != (MemoryImage)0x0) && (this[0x92] == (MemoryImage)0x0)) &&
     (iVar1 = 0x8888, this[0x91] == (MemoryImage)0x0)) {
    iVar1 = 0x888;
  }
  BltTrianglesTexHelper
            (this,param_1,param_2,param_3,param_9,param_4,param_5,pvVar2,*(int *)(this + 0x38) << 2,
             iVar1,param_6,param_7,param_8);
  (**(code **)(*(long *)this + 0x98))(this);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltTriangles(Sexy::Image*, Sexy::SexyVertex2D const (*)
   [3], int, Sexy::Color const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::MemoryImage::BltTriangles
          (MemoryImage *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8,TRect *param_9)

{
  BltTriangles(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  return;
}


/* Sexy::MemoryImage::NormalDrawLine(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::MemoryImage::NormalDrawLine
          (MemoryImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double *pdVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  local_20 = param_4;
  local_18 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  pdVar7 = std::min<double>(&local_8,&local_18);
  dVar22 = *pdVar7;
  pdVar7 = std::min<double>(&local_10,&local_20);
  dVar24 = *pdVar7;
  pdVar7 = std::max<double>(&local_8,&local_18);
  dVar25 = *pdVar7;
  pdVar7 = std::max<double>(&local_10,&local_20);
  dVar23 = *pdVar7;
  lVar8 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
  iVar10 = *(int *)(param_5 + 0xc);
  if (iVar10 == 0xff) {
    dVar21 = local_20 - local_10;
    dVar20 = local_18 - local_8;
    uVar4 = (int)dVar21 >> 0x1f;
    uVar2 = (int)dVar20 >> 0x1f;
    uVar1 = *(uint *)(this + 0x38);
    uVar13 = (ulong)uVar1;
    uVar3 = *(int *)param_5 * 0xff0000 + 0x7f8000U >> 8 & 0xff0000 |
            *(int *)(param_5 + 4) * 0xff00 + 0x7f80U >> 8 & 0xff00 | 0xff000000 |
            *(int *)(param_5 + 8) * 0xff + 0x7fU >> 8 & 0xff;
    if ((int)(((int)dVar21 ^ uVar4) - uVar4) < (int)(((int)dVar20 ^ uVar2) - uVar2)) {
      dVar19 = local_18;
      if (dVar20 < 0.0) {
        dVar20 = -dVar20;
        dVar21 = -dVar21;
        local_10 = local_20;
        dVar19 = local_8;
        local_8 = local_18;
      }
      if (dVar21 < 0.0) {
        dVar21 = -dVar21;
        uVar13 = (ulong)-uVar1;
        iVar10 = -1;
      }
      else {
        iVar10 = 1;
      }
      iVar15 = (int)local_10;
      iVar9 = (int)(dVar21 + dVar21);
      iVar11 = (int)(local_8 + 1.0);
      lVar18 = ((long)(int)local_8 + (long)(int)(iVar15 * uVar1)) * 4;
      puVar14 = (uint *)(lVar8 + lVar18);
      *(uint *)(lVar8 + lVar18) = uVar3;
      iVar12 = (int)((double)iVar9 * (local_10 - (double)iVar15)) +
               (int)((dVar21 + dVar21) - dVar20);
      while (dVar6 = (double)iVar11, dVar6 <= dVar19) {
        puVar14 = puVar14 + 1;
        iVar11 = iVar11 + 1;
        iVar16 = iVar9;
        if (0 < iVar12) {
          iVar15 = iVar15 + iVar10;
          puVar14 = (uint *)((long)puVar14 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2))
          ;
          if (dVar6 < dVar22) {
            return;
          }
          if ((double)iVar15 < dVar24 || dVar25 < dVar6) {
            return;
          }
          iVar16 = (int)((dVar21 - dVar20) + (dVar21 - dVar20));
          if (dVar23 < (double)iVar15) {
            return;
          }
        }
        iVar12 = iVar12 + iVar16;
        *puVar14 = uVar3;
      }
    }
    else {
      dVar19 = local_10;
      if (dVar21 < 0.0) {
        dVar20 = -dVar20;
        dVar21 = -dVar21;
        dVar19 = local_20;
        local_20 = local_10;
        local_8 = local_18;
      }
      uVar17 = 1;
      if (dVar20 < 0.0) {
        dVar20 = -dVar20;
        uVar17 = 0xffffffff;
      }
      iVar12 = (int)local_8;
      iVar15 = (int)(dVar20 + dVar20);
      iVar10 = (int)(dVar19 + 1.0);
      lVar18 = ((long)iVar12 + (long)(int)((int)dVar19 * uVar1)) * 4;
      puVar14 = (uint *)(lVar8 + lVar18);
      *(uint *)(lVar8 + lVar18) = uVar3;
      iVar11 = (int)((double)iVar15 * (local_8 - (double)iVar12)) +
               (int)((dVar20 + dVar20) - dVar21);
      while (dVar19 = (double)iVar10, dVar19 <= local_20) {
        puVar14 = (uint *)((long)puVar14 +
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
        iVar10 = iVar10 + 1;
        iVar9 = iVar15;
        if (0 < iVar11) {
          iVar12 = iVar12 + (int)uVar17;
          puVar14 = (uint *)((long)puVar14 + (-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2))
          ;
          if ((double)iVar12 < dVar22 || (dVar23 < dVar19 || dVar19 < dVar24)) {
            return;
          }
          iVar9 = (int)((dVar20 - dVar21) + (dVar20 - dVar21));
          if (dVar25 < (double)iVar12) {
            return;
          }
        }
        iVar11 = iVar11 + iVar9;
        *puVar14 = uVar3;
      }
    }
  }
  else {
    iVar11 = 0x100 - iVar10;
    uVar1 = *(uint *)(this + 0x38);
    uVar13 = (ulong)uVar1;
    dVar21 = local_20 - local_10;
    dVar20 = local_18 - local_8;
    uVar4 = (int)dVar21 >> 0x1f;
    uVar2 = (int)dVar20 >> 0x1f;
    uVar3 = (iVar10 * *(int *)param_5 + 0x80 >> 8) * 0xff0000 + 0x7f8000U >> 8 & 0xff0000 |
            (iVar10 * *(int *)(param_5 + 4) + 0x80 >> 8) * 0xff00 + 0x7f80U >> 8 & 0xff00 |
            0xff000000 | (iVar10 * *(int *)(param_5 + 8) + 0x80 >> 8) * 0xff + 0x7fU >> 8 & 0xff;
    if ((int)(((int)dVar21 ^ uVar4) - uVar4) < (int)(((int)dVar20 ^ uVar2) - uVar2)) {
      dVar19 = local_18;
      if (dVar20 < 0.0) {
        dVar20 = -dVar20;
        dVar21 = -dVar21;
        local_10 = local_20;
        dVar19 = local_8;
        local_8 = local_18;
      }
      if (dVar21 < 0.0) {
        dVar21 = -dVar21;
        uVar13 = (ulong)-uVar1;
        iVar10 = -1;
      }
      else {
        iVar10 = 1;
      }
      iVar9 = (int)local_10;
      lVar18 = ((long)(int)local_8 + (long)(int)(iVar9 * uVar1)) * 4;
      puVar14 = (uint *)(lVar8 + lVar18);
      iVar16 = (int)(dVar21 + dVar21);
      uVar1 = *(uint *)(lVar8 + lVar18);
      iVar12 = (int)(local_8 + 1.0);
      *(uint *)(lVar8 + lVar18) =
           ((uVar1 & 0xff0000) * iVar11 + 0x7f8000 >> 8 & 0xff0000) +
           ((uVar1 & 0xff00) * iVar11 + 0x7f80 >> 8 & 0xff00) + uVar3 +
           ((uVar1 & 0xff) * iVar11 + 0x7f >> 8 & 0xff);
      iVar15 = (int)((double)iVar16 * (local_8 - (double)(int)local_8)) +
               (int)((dVar21 + dVar21) - dVar20);
      while (dVar6 = (double)iVar12, dVar6 <= dVar19) {
        puVar14 = puVar14 + 1;
        iVar12 = iVar12 + 1;
        iVar5 = iVar16;
        if (0 < iVar15) {
          iVar9 = iVar9 + iVar10;
          if (dVar6 < dVar22) {
            return;
          }
          if (dVar23 < (double)iVar9) {
            return;
          }
          puVar14 = (uint *)((long)puVar14 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2))
          ;
          iVar5 = (int)((dVar21 - dVar20) + (dVar21 - dVar20));
          if (dVar25 < dVar6 || (double)iVar9 < dVar24) {
            return;
          }
        }
        iVar15 = iVar15 + iVar5;
        uVar1 = *puVar14;
        *puVar14 = ((uVar1 & 0xff0000) * iVar11 + 0x7f8000 >> 8 & 0xff0000) +
                   ((uVar1 & 0xff00) * iVar11 + 0x7f80 >> 8 & 0xff00) + uVar3 +
                   ((uVar1 & 0xff) * iVar11 + 0x7f >> 8 & 0xff);
      }
    }
    else {
      dVar19 = local_10;
      if (dVar21 < 0.0) {
        dVar20 = -dVar20;
        dVar21 = -dVar21;
        dVar19 = local_20;
        local_20 = local_10;
        local_8 = local_18;
      }
      uVar17 = 1;
      if (dVar20 < 0.0) {
        dVar20 = -dVar20;
        uVar17 = 0xffffffff;
      }
      iVar15 = (int)local_8;
      lVar18 = ((long)iVar15 + (long)(int)((int)dVar19 * uVar1)) * 4;
      puVar14 = (uint *)(lVar8 + lVar18);
      iVar9 = (int)(dVar20 + dVar20);
      uVar2 = *(uint *)(lVar8 + lVar18);
      iVar10 = (int)(dVar19 + 1.0);
      *(uint *)(lVar8 + lVar18) =
           ((uVar2 & 0xff0000) * iVar11 + 0x7f8000 >> 8 & 0xff0000) +
           ((uVar2 & 0xff00) * iVar11 + 0x7f80 >> 8 & 0xff00) + uVar3 +
           ((uVar2 & 0xff) * iVar11 + 0x7f >> 8 & 0xff);
      iVar12 = (int)((double)iVar9 * (local_8 - (double)iVar15)) + (int)((dVar20 + dVar20) - dVar21)
      ;
      while (dVar19 = (double)iVar10, dVar19 <= local_20) {
        puVar14 = (uint *)((long)puVar14 +
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
        iVar10 = iVar10 + 1;
        iVar16 = iVar9;
        if (0 < iVar12) {
          iVar15 = iVar15 + (int)uVar17;
          puVar14 = (uint *)((long)puVar14 + (-(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2))
          ;
          if ((double)iVar15 < dVar22 || (dVar23 < dVar19 || dVar19 < dVar24)) {
            return;
          }
          iVar16 = (int)((dVar20 - dVar21) + (dVar20 - dVar21));
          if (dVar25 < (double)iVar15) {
            return;
          }
        }
        iVar12 = iVar12 + iVar16;
        uVar2 = *puVar14;
        *puVar14 = ((uVar2 & 0xff0000) * iVar11 + 0x7f8000 >> 8 & 0xff0000) +
                   ((uVar2 & 0xff00) * iVar11 + 0x7f80 >> 8 & 0xff00) + uVar3 +
                   ((uVar2 & 0xff) * iVar11 + 0x7f >> 8 & 0xff);
      }
    }
  }
  return;
}


/* Sexy::MemoryImage::AdditiveDrawLine(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::MemoryImage::AdditiveDrawLine
          (MemoryImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  local_20 = param_4;
  local_18 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  pdVar10 = std::min<double>(&local_8,&local_18);
  dVar22 = *pdVar10;
  pdVar10 = std::min<double>(&local_10,&local_20);
  dVar23 = *pdVar10;
  pdVar10 = std::max<double>(&local_8,&local_18);
  dVar24 = *pdVar10;
  pdVar10 = std::max<double>(&local_10,&local_20);
  dVar25 = *pdVar10;
  lVar1 = *(long *)(this + 0xb8) + 0x15c;
  lVar11 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
  iVar2 = *(int *)(param_5 + 0xc);
  dVar20 = local_20 - local_10;
  dVar21 = local_18 - local_8;
  iVar7 = (iVar2 * *(int *)(param_5 + 8)) / 0xff;
  iVar8 = (iVar2 * *(int *)(param_5 + 4)) / 0xff;
  uVar4 = (int)dVar20 >> 0x1f;
  uVar3 = *(uint *)(this + 0x38);
  uVar14 = (ulong)uVar3;
  uVar5 = (int)dVar21 >> 0x1f;
  iVar2 = (iVar2 * *(int *)param_5) / 0xff;
  if ((int)(((int)dVar21 ^ uVar5) - uVar5) <= (int)(((int)dVar20 ^ uVar4) - uVar4)) {
    if (dVar20 < 0.0) {
      dVar21 = -dVar21;
      dVar20 = -dVar20;
      local_10 = local_20;
      local_8 = local_18;
      local_20 = local_10;
    }
    uVar19 = 1;
    if (dVar21 < 0.0) {
      dVar21 = -dVar21;
      uVar19 = 0xffffffff;
    }
    iVar16 = (int)local_8;
    lVar17 = ((long)iVar16 + (long)(int)(uVar3 * (int)local_10)) * 4;
    iVar13 = (int)(local_10 + 1.0);
    uVar4 = *(uint *)(lVar11 + lVar17);
    puVar15 = (uint *)(lVar11 + lVar17);
    *(uint *)(lVar11 + lVar17) =
         *(byte *)(lVar1 + (ulong)(iVar7 + (uVar4 & 0xff))) | 0xff000000 |
         (uint)*(byte *)(lVar1 + (ulong)((uVar4 >> 0x10 & 0xff) + iVar2)) << 0x10 |
         (uint)*(byte *)(lVar1 + (ulong)((uVar4 >> 8 & 0xff) + iVar8)) << 8;
    iVar12 = (int)((dVar21 + dVar21) - dVar20);
    do {
      dVar9 = (double)iVar13;
      if (local_20 < dVar9) {
        return;
      }
      puVar15 = (uint *)((long)puVar15 +
                        (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
      iVar13 = iVar13 + 1;
      dVar6 = dVar21 + dVar21;
      if (0 < iVar12) {
        iVar16 = iVar16 + (int)uVar19;
        puVar15 = (uint *)((long)puVar15 + (-(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2));
        if ((double)iVar16 < dVar22 || (dVar25 < dVar9 || dVar9 < dVar23)) {
          return;
        }
        dVar6 = (dVar21 - dVar20) + (dVar21 - dVar20);
        if (dVar24 < (double)iVar16) {
          return;
        }
      }
      iVar12 = iVar12 + (int)dVar6;
      uVar4 = *puVar15;
      *puVar15 = *(byte *)(lVar1 + (ulong)(iVar7 + (uVar4 & 0xff))) | 0xff000000 |
                 (uint)*(byte *)(lVar1 + (ulong)((uVar4 >> 0x10 & 0xff) + iVar2)) << 0x10 |
                 (uint)*(byte *)(lVar1 + (ulong)((uVar4 >> 8 & 0xff) + iVar8)) << 8;
    } while( true );
  }
  dVar9 = local_8;
  if (dVar21 < 0.0) {
    dVar20 = -dVar20;
    dVar21 = -dVar21;
    local_10 = local_20;
    dVar9 = local_18;
    local_18 = local_8;
  }
  if (0.0 <= dVar20) {
    iVar13 = 1;
  }
  else {
    dVar20 = -dVar20;
    uVar14 = (ulong)-uVar3;
    iVar13 = -1;
  }
  iVar12 = (int)local_10;
  lVar17 = ((long)(int)dVar9 + (long)(int)(iVar12 * uVar3)) * 4;
  iVar16 = (int)(dVar9 + 1.0);
  uVar3 = *(uint *)(lVar11 + lVar17);
  puVar15 = (uint *)(lVar11 + lVar17);
  *(uint *)(lVar11 + lVar17) =
       *(byte *)(lVar1 + (ulong)(iVar7 + (uVar3 & 0xff))) | 0xff000000 |
       (uint)*(byte *)(lVar1 + (ulong)((uVar3 >> 0x10 & 0xff) + iVar2)) << 0x10 |
       (uint)*(byte *)(lVar1 + (ulong)((uVar3 >> 8 & 0xff) + iVar8)) << 8;
  iVar18 = (int)((dVar20 + dVar20) - dVar21);
  do {
    dVar9 = (double)iVar16;
    if (local_18 < dVar9) {
      return;
    }
    puVar15 = puVar15 + 1;
    iVar16 = iVar16 + 1;
    dVar6 = dVar20 + dVar20;
    if (0 < iVar18) {
      iVar12 = iVar12 + iVar13;
      if (dVar9 < dVar22) {
        return;
      }
      if ((double)iVar12 < dVar23 || dVar24 < dVar9) {
        return;
      }
      puVar15 = (uint *)((long)puVar15 + (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2));
      dVar6 = (dVar20 - dVar21) + (dVar20 - dVar21);
      if (dVar25 < (double)iVar12) {
        return;
      }
    }
    iVar18 = iVar18 + (int)dVar6;
    uVar3 = *puVar15;
    *puVar15 = *(byte *)(lVar1 + (ulong)(iVar7 + (uVar3 & 0xff))) | 0xff000000 |
               (uint)*(byte *)(lVar1 + (ulong)((uVar3 >> 0x10 & 0xff) + iVar2)) << 0x10 |
               (uint)*(byte *)(lVar1 + (ulong)((uVar3 >> 8 & 0xff) + iVar8)) << 8;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::DrawLine(double, double, double, double, Sexy::Color const&, int, bool) */

void __thiscall
Sexy::MemoryImage::DrawLine
          (MemoryImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5,int param_6,bool param_7)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  double local_40;
  double local_38;
  double local_30;
  double local_28 [2];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28[0] = param_1;
  if (param_2 == param_4) {
    pdVar1 = std::min<double>(local_28,&local_38);
    iVar2 = (int)*pdVar1;
    pdVar1 = std::max<double>(local_28,&local_38);
    iVar5 = (int)param_2;
    iVar4 = 1;
    pcVar6 = *(code **)(*(long *)this + 0xd8);
    iVar3 = ((int)*pdVar1 - iVar2) + 1;
  }
  else {
    if (param_1 != param_3) {
      if (param_7) {
        if (param_6 == 0) {
          NormalDrawLineAA(this,param_1,param_2,param_3,param_4,param_5);
        }
        else if (param_6 == 1) {
          nop();
        }
      }
      else if (param_6 == 0) {
        NormalDrawLine(this,param_1,param_2,param_3,param_4,param_5);
      }
      else if (param_6 == 1) {
        AdditiveDrawLine(this,param_1,param_2,param_3,param_4,param_5);
      }
      (**(code **)(*(long *)this + 0x98))(this);
      goto LAB_05162690;
    }
    pdVar1 = std::min<double>(&local_30,&local_40);
    iVar5 = (int)*pdVar1;
    pdVar1 = std::max<double>(&local_30,&local_40);
    iVar3 = 1;
    iVar2 = (int)param_1;
    pcVar6 = *(code **)(*(long *)this + 0xd8);
    iVar4 = ((int)*pdVar1 - iVar5) + 1;
  }
  Insets::Insets(aIStack_18,iVar2,iVar5,iVar3,iVar4);
  (*pcVar6)(this,aIStack_18,param_5,param_6);
LAB_05162690:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::MemoryImage::DrawLine(double, double, double, double, Sexy::Color
   const&, int, bool) */

void __thiscall
Sexy::MemoryImage::DrawLine
          (MemoryImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5,int param_6,bool param_7)

{
  DrawLine(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* Sexy::MemoryImage::GetBits(int, int, int, int) */

void * __thiscall
Sexy::MemoryImage::GetBits(MemoryImage *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  bool bVar16;
  undefined4 uVar17;
  ulong __n;
  ulong uVar18;
  void *pvVar19;
  ColourFit *this_00;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  void *__dest;
  int iVar24;
  ColourFit *this_01;
  
  uVar17 = Android::Graphics::GetGLViewSysFBO(*(AndroidAppDriver **)(gSexyAppBase + 0x10));
  if (*(void **)(this + 0x70) != (void *)0x0) {
    return *(void **)(this + 0x70);
  }
  uVar12 = *(int *)(this + 0x38) * *(int *)(this + 0x3c);
  __n = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
  uVar18 = (long)(int)(uVar12 + 1) << 2;
  if (0x1fc0000000000000 < (ulong)(long)(int)(uVar12 + 1)) {
    uVar18 = 0xffffffffffffffff;
  }
  pvVar19 = operator_new__(uVar18);
  *(void **)(this + 0x70) = pvVar19;
  this_01 = *(ColourFit **)(this + 0x80);
  *(undefined4 *)((long)pvVar19 + __n) = 0x4beefade;
  if (this_01 == (ColourFit *)0x0) {
    if (*(long *)(this + 0x98) != 0) {
      lVar20 = (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xa0))
                         (*(long **)(gSexyAppBase + 0x20));
      iVar24 = *(int *)(lVar20 + 0x10);
      iVar1 = *(int *)(this + 0x38);
      iVar2 = *(int *)(this + 0x3c);
      iVar3 = *(int *)(lVar20 + 0x1c);
      iVar4 = *(int *)(lVar20 + 0x20);
      iVar5 = *(int *)(lVar20 + 0x14);
      iVar6 = *(int *)(lVar20 + 0x18);
      iVar7 = *(int *)(lVar20 + 0x24);
      uVar12 = *(uint *)(lVar20 + 4);
      uVar8 = *(uint *)(lVar20 + 8);
      uVar9 = *(uint *)(lVar20 + 0xc);
      pvVar19 = *(void **)(this + 0x70);
      lVar23 = *(long *)(this + 0x98);
      lVar20 = 0;
      if (iVar1 * iVar2 < 1) {
        return pvVar19;
      }
      do {
        uVar10 = *(uint *)(lVar23 + lVar20 * 4);
        uVar22 = 0;
        uVar11 = uVar10 >> 0x18;
        if (uVar11 != 0) {
          uVar22 = 0;
          if (uVar11 != 0) {
            uVar22 = ((((uVar10 & uVar9) << 8) >> (ulong)(iVar7 + iVar6 & 0x1f)) * 0xff) / uVar11;
          }
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = ((((uVar10 & uVar12) << 8) >> (ulong)(iVar3 + iVar24 & 0x1f)) * 0xff) / uVar11;
          }
          uVar14 = 0;
          if (uVar11 != 0) {
            uVar14 = ((((uVar10 & uVar8) << 8) >> (ulong)(iVar4 + iVar5 & 0x1f)) * 0xff) / uVar11;
          }
          uVar22 = uVar22 & 0xff | uVar11 << 0x18 | (uVar13 & 0xff) << 0x10 | (uVar14 & 0xff) << 8;
        }
        *(uint *)((long)pvVar19 + lVar20 * 4) = uVar22;
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < iVar1 * iVar2);
      return pvVar19;
    }
    lVar20 = FUN_0515b738(*(undefined8 *)(this + 0x20));
    if ((lVar20 != 0) &&
       (lVar20 = (**(code **)(**(long **)(*(long *)(this + 0xb8) + 0x20) + 0xb0))
                           (*(long **)(*(long *)(this + 0xb8) + 0x20)), lVar20 != 0)) {
      plVar21 = (long *)(**(code **)(**(long **)(*(long *)(this + 0xb8) + 0x20) + 0xb0))
                                  (*(long **)(*(long *)(this + 0xb8) + 0x20));
      cVar15 = (**(code **)(*plVar21 + 0x128))(plVar21,this,param_1,param_2,param_3,param_4,uVar17);
      if (cVar15 != '\0') goto LAB_05162a88;
    }
    bVar16 = RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x48));
    if (bVar16) {
      plVar21 = (long *)RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      plVar21 = (long *)(**(code **)(*plVar21 + 0x48))();
      if (plVar21 != (long *)0x0) {
        lVar20 = (**(code **)(*plVar21 + 0xd0))(plVar21,0,0,0,0);
        __dest = *(void **)(this + 0x70);
        pvVar19 = (void *)(lVar20 + (long)(*(int *)(this + 0x50) +
                                          *(int *)(this + 0x54) * (int)plVar21[7]) * 4);
        if (*(int *)(this + 0x3c) < 1) {
          return __dest;
        }
        lVar20 = (long)*(int *)(this + 0x38);
        iVar24 = 0;
        do {
          iVar24 = iVar24 + 1;
          memcpy(__dest,pvVar19,lVar20 << 2);
          lVar20 = (long)*(int *)(this + 0x38);
          pvVar19 = (void *)((long)pvVar19 + (long)(int)plVar21[7] * 4);
          __dest = (void *)((long)__dest + lVar20 * 4);
        } while (iVar24 < *(int *)(this + 0x3c));
        return *(void **)(this + 0x70);
      }
    }
    memset(*(void **)(this + 0x70),0,__n);
LAB_05162a88:
    return *(void **)(this + 0x70);
  }
  this_00 = *(ColourFit **)(this + 0x88);
  lVar20 = 0;
  if ((int)uVar12 < 1) {
    if (this_00 != (ColourFit *)0x0) goto LAB_051628a8;
    *(undefined8 *)(this + 0x88) = 0;
  }
  else {
    do {
      *(undefined4 *)((long)pvVar19 + lVar20 * 4) =
           *(undefined4 *)(this_01 + (ulong)(byte)this_00[lVar20] * 4);
      lVar20 = lVar20 + 1;
    } while (uVar12 - (int)lVar20 != 0 && (int)lVar20 <= (int)uVar12);
LAB_051628a8:
    EATextSquish::ColourFit::~ColourFit(this_00);
    this_01 = *(ColourFit **)(this + 0x80);
    *(undefined8 *)(this + 0x88) = 0;
    if (this_01 == (ColourFit *)0x0) goto LAB_051628c0;
  }
  EATextSquish::ColourFit::~ColourFit(this_01);
LAB_051628c0:
  *(undefined8 *)(this + 0x80) = 0;
  if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
  }
  *(undefined8 *)(this + 0x98) = 0;
  return *(void **)(this + 0x70);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::StretchBltClipHelper(Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<float>&, Sexy::TRect<int>&) */

void __thiscall
Sexy::MemoryImage::StretchBltClipHelper
          (MemoryImage *this,TRect *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          TRect *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,*(int *)param_3,*(int *)(param_3 + 4),*(int *)(param_3 + 8),
                 *(int *)(param_3 + 0xc));
  TRect<int>::Intersection((TRect *)aIStack_28);
  *(undefined8 *)param_5 = local_18;
  *(undefined8 *)(param_5 + 8) = uStack_10;
  fVar1 = (float)*(int *)(param_1 + 8) / (float)*(int *)(param_3 + 8);
  fVar2 = (float)*(int *)(param_1 + 0xc) / (float)*(int *)(param_3 + 0xc);
  EA::Text::Rectangle::Rectangle
            ((Rectangle *)&local_18,
             (float)(*(int *)param_5 - *(int *)param_3) * fVar1 + (float)*(int *)param_1,
             (float)(*(int *)(param_5 + 4) - *(int *)(param_3 + 4)) * fVar2 +
             (float)*(int *)(param_1 + 4),
             (float)(*(int *)(param_5 + 8) - *(int *)(param_3 + 8)) * fVar1 +
             (float)*(int *)(param_1 + 8),
             (float)(*(int *)(param_5 + 0xc) - *(int *)(param_3 + 0xc)) * fVar2 +
             (float)*(int *)(param_1 + 0xc));
  *(undefined8 *)param_4 = local_18;
  *(undefined8 *)(param_4 + 8) = uStack_10;
  if (*(float *)(param_4 + 8) <= 0.0) {
    bVar3 = false;
  }
  else {
    bVar3 = 0.0 < *(float *)(param_4 + 0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BltStretched(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void __thiscall
Sexy::MemoryImage::BltStretched
          (MemoryImage *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          Color *param_5,int param_6,bool param_7,bool param_8)

{
  char cVar1;
  Insets aIStack_28 [16];
  SexyVector4 aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_8) {
    param_1[0x28] = (Image)0x1;
    Insets::Insets(aIStack_28);
    SexyVector4::SexyVector4(aSStack_18);
    cVar1 = StretchBltClipHelper
                      (this,param_3,param_4,param_2,(TRect *)aSStack_18,(TRect *)aIStack_28);
    if (cVar1 != '\0') {
      if (param_7) {
        FastStretchBlt((Image *)this,(TRect *)param_1,(TRect *)aIStack_28,(Color *)aSStack_18,
                       (int)param_5);
      }
      else {
        SlowStretchBlt((Image *)this,(TRect *)param_1,(TRect *)aIStack_28,(Color *)aSStack_18,
                       (int)param_5);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::MemoryImage::BltStretched(Sexy::Image*, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void __thiscall
Sexy::MemoryImage::BltStretched
          (MemoryImage *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          Color *param_5,int param_6,bool param_7,bool param_8)

{
  BltStretched(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::StretchBltMirrorClipHelper(Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<float>&, Sexy::TRect<int>&) */

void __thiscall
Sexy::MemoryImage::StretchBltMirrorClipHelper
          (MemoryImage *this,TRect *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          TRect *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,*(int *)param_3,*(int *)(param_3 + 4),*(int *)(param_3 + 8),
                 *(int *)(param_3 + 0xc));
  TRect<int>::Intersection((TRect *)aIStack_28);
  *(undefined8 *)param_5 = local_18;
  *(undefined8 *)(param_5 + 8) = uStack_10;
  iVar1 = *(int *)(param_3 + 8);
  fVar2 = (float)*(int *)(param_1 + 8) / (float)iVar1;
  fVar3 = (float)*(int *)(param_1 + 0xc) / (float)*(int *)(param_3 + 0xc);
  EA::Text::Rectangle::Rectangle
            ((Rectangle *)&local_18,
             (float)((iVar1 - *(int *)(param_5 + 8)) - (*(int *)param_5 - *(int *)param_3)) * fVar2
             + (float)*(int *)param_1,
             (float)(*(int *)(param_5 + 4) - *(int *)(param_3 + 4)) * fVar3 +
             (float)*(int *)(param_1 + 4),
             (float)(*(int *)(param_5 + 8) - iVar1) * fVar2 + (float)*(int *)(param_1 + 8),
             (float)(*(int *)(param_5 + 0xc) - *(int *)(param_3 + 0xc)) * fVar3 +
             (float)*(int *)(param_1 + 0xc));
  *(undefined8 *)param_4 = local_18;
  *(undefined8 *)(param_4 + 8) = uStack_10;
  if (*(float *)(param_4 + 8) <= 0.0) {
    bVar4 = false;
  }
  else {
    bVar4 = 0.0 < *(float *)(param_4 + 0xc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BltRotatedClipHelper(float&, float&, Sexy::TRect<int> const&, Sexy::TRect<int>
   const&, double, Sexy::TRect<float>&, float, float) */

void __thiscall
Sexy::MemoryImage::BltRotatedClipHelper
          (MemoryImage *this,float *param_1,float *param_2,TRect *param_3,TRect *param_4,
          double param_5,TRect *param_6,float param_7,float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  Rectangle aRStack_38 [16];
  undefined8 local_28;
  float local_20;
  float local_1c;
  Rectangle aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = cosf((float)param_5);
  fVar7 = sinf((float)param_5);
  fVar9 = param_8 + *param_2;
  fVar21 = (float)*(int *)(param_3 + 0xc) - param_8;
  fVar22 = (float)*(int *)(param_3 + 0xc) - param_8;
  fVar16 = param_7 + *param_1;
  fVar14 = (float)*(int *)(param_3 + 8) - param_7;
  fVar15 = (float)*(int *)(param_3 + 8) - param_7;
  fVar10 = (fVar9 + (0.0 - param_8) * fVar6) - (0.0 - param_7) * fVar7;
  fVar11 = (fVar9 + (0.0 - param_8) * fVar6) - fVar14 * fVar7;
  fVar12 = (fVar9 + fVar21 * fVar6) - fVar15 * fVar7;
  fVar9 = (fVar9 + fVar22 * fVar6) - (0.0 - param_7) * fVar7;
  fVar13 = (0.0 - param_8) * fVar7 + (0.0 - param_7) * fVar6 + fVar16;
  fVar14 = (0.0 - param_8) * fVar7 + fVar14 * fVar6 + fVar16;
  fVar15 = fVar21 * fVar7 + fVar15 * fVar6 + fVar16;
  fVar16 = fVar22 * fVar7 + (0.0 - param_7) * fVar6 + fVar16;
  auVar17._4_4_ = fVar11;
  auVar17._0_4_ = fVar10;
  auVar17._8_4_ = fVar12;
  auVar17._12_4_ = fVar9;
  auVar3._8_8_ = 0x4b1896804b189680;
  auVar3._0_8_ = 0x4b1896804b189680;
  auVar19 = NEON_fminnm(auVar17,auVar3,4);
  auVar1._4_4_ = fVar14;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar15;
  auVar1._12_4_ = fVar16;
  auVar4._8_8_ = 0x4b1896804b189680;
  auVar4._0_8_ = 0x4b1896804b189680;
  auVar17 = NEON_fminnm(auVar1,auVar4,4);
  auVar2._4_4_ = fVar14;
  auVar2._0_4_ = fVar13;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = NEON_fminnmv(auVar19,4);
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = NEON_fminnmv(auVar17,4);
  EA::Text::Rectangle::Rectangle
            (aRStack_38,(float)*(int *)param_4,(float)*(int *)(param_4 + 4),
             (float)*(int *)(param_4 + 8),(float)*(int *)(param_4 + 0xc));
  auVar2._8_4_ = fVar15;
  auVar8._8_8_ = 0xcb189680cb189680;
  auVar8._0_8_ = 0xcb189680cb189680;
  auVar19._4_4_ = fVar11;
  auVar19._0_4_ = fVar10;
  auVar19._8_4_ = fVar12;
  auVar2._12_4_ = fVar16;
  auVar17 = NEON_fmaxnm(auVar2,auVar8,4);
  auVar19._12_4_ = fVar9;
  auVar19 = NEON_fmaxnm(auVar19,auVar8,4);
  fVar6 = (float)NEON_fmaxnmv(auVar17,4);
  fVar7 = (float)NEON_fmaxnmv(auVar19,4);
  EA::Text::Rectangle::Rectangle
            (aRStack_18,auVar18._0_4_,auVar20._0_4_,fVar6 - auVar18._0_4_,fVar7 - auVar20._0_4_);
  TRect<float>::Intersection((TRect *)aRStack_18);
  if ((local_20 <= 0.0) || (local_1c <= 0.0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    *(undefined8 *)param_6 = local_28;
    *(ulong *)(param_6 + 8) = CONCAT44(local_1c,local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BltRotated(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float) */

void __thiscall
Sexy::MemoryImage::BltRotated
          (MemoryImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7,double param_8,float param_9,float param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  long lVar43;
  int iVar44;
  int iVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x28] = (Image)0x1;
  local_38 = param_3;
  local_34[0] = param_2;
  SexyVector4::SexyVector4((SexyVector4 *)&local_28);
  cVar11 = BltRotatedClipHelper
                     (this,local_34,&local_38,param_4,param_5,param_8,(TRect *)&local_28,param_9,
                      param_10);
  if (cVar11 != '\0') {
    plVar14 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    lVar15 = *(long *)(this + 0xb8) + 0x15c;
    if (plVar14 != (long *)0x0) {
      lVar43 = plVar14[0x10];
      if (lVar43 == 0) {
        lVar43 = (**(code **)(*plVar14 + 0xd0))(plVar14,0,0,0,0);
        lVar43 = lVar43 + ((long)*(int *)param_4 +
                          (long)(*(int *)(param_4 + 4) * *(int *)(param_4 + 8))) * 4;
        if (param_7 == 0) {
          dVar46 = cos(param_8);
          dVar47 = sin(param_8);
          iVar45 = (int)(dVar47 * 65536.0);
          iVar44 = (int)(dVar46 * 65536.0);
          lVar15 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
          uVar2 = *(uint *)(this + 0x38);
          lVar15 = lVar15 + ((long)(int)local_28 + (long)(int)((int)local_24 * uVar2)) * 4;
          Color::Color(aCStack_18,1);
          cVar11 = Sexy::operator==(param_6,aCStack_18);
          if (cVar11 == '\0') {
            iVar42 = *(int *)param_6;
            iVar12 = *(int *)(param_6 + 4);
            iVar40 = *(int *)(param_6 + 8);
            iVar13 = *(int *)(param_6 + 0xc);
            if (0.0 < local_1c) {
              dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
              iVar32 = (int)(local_20 - 1.0);
              iVar27 = 0;
              do {
                dVar49 = (double)(((float)(iVar27 + (int)local_24) - param_10) - local_38);
                iVar26 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar49) * 65536.0);
                if (iVar44 < 0) {
                  if (-1 < iVar26 >> 0x10) {
                    iVar20 = 0;
                    if (iVar44 != 0) {
                      iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar44;
                    }
                    if (iVar20 < 0) {
                      iVar20 = 0;
                    }
                    iVar19 = 0;
                    if (iVar44 != 0) {
                      iVar19 = (0x7fff - iVar26) / iVar44;
                    }
                    if (iVar32 < iVar19) {
                      iVar19 = iVar32;
                    }
                    goto LAB_05165304;
                  }
                }
                else if (iVar44 == 0) {
                  if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                    iVar20 = 0;
                    iVar19 = iVar32;
                    goto LAB_05165304;
                  }
                }
                else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar44;
                  }
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = (0x10000 - iVar26) / iVar44;
                  }
                  if (iVar20 < 0) {
                    iVar20 = 0;
                  }
                  if (iVar32 < iVar19) {
                    iVar19 = iVar32;
                  }
LAB_05165304:
                  iVar17 = (int)(((double)param_10 + dVar48 * dVar47 + dVar46 * dVar49) * 65536.0);
                  if (iVar45 < 0) {
                    if (-1 < iVar17 >> 0x10) {
                      iVar18 = 0;
                      if (iVar45 != 0) {
                        iVar18 = -iVar17 / iVar45;
                      }
                      iVar34 = 0;
                      if (iVar45 != 0) {
                        iVar34 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar17) / iVar45;
                      }
                      if (iVar20 < iVar34) {
                        iVar20 = iVar34;
                      }
                      if (iVar18 < iVar19) {
                        iVar19 = iVar18;
                      }
                      goto LAB_05165360;
                    }
                  }
                  else if (iVar45 == 0) {
                    if ((-1 < iVar17) && (iVar17 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                    goto LAB_05165360;
                  }
                  else if (iVar17 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                    iVar18 = 0;
                    if (iVar45 != 0) {
                      iVar18 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar17) / iVar45;
                    }
                    iVar34 = 0;
                    if (iVar45 != 0) {
                      iVar34 = (0x10000 - iVar17) / iVar45;
                    }
                    if (iVar20 < iVar34) {
                      iVar20 = iVar34;
                    }
                    if (iVar18 < iVar19) {
                      iVar19 = iVar18;
                    }
LAB_05165360:
                    lVar16 = lVar15 + (long)iVar20 * 4;
                    uVar41 = iVar26 + iVar20 * iVar44;
                    uVar33 = iVar17 + iVar20 * iVar45;
                    uVar3 = *(uint *)(param_1 + 0x38);
                    if (iVar20 <= iVar19) {
                      lVar28 = lVar16 + 4;
                      uVar4 = uVar3;
                      while( true ) {
                        iVar26 = (uVar41 & 0xfffe) + 1;
                        iVar34 = 0xffff - (uVar33 & 0xfffe);
                        iVar22 = 0xffff - (uVar41 & 0xfffe);
                        lVar31 = ((long)((int)uVar41 >> 0x10) +
                                 (long)(int)(((int)uVar33 >> 0x10) * uVar3)) * 4;
                        lVar29 = lVar43 + lVar31;
                        iVar17 = (uVar33 & 0xfffe) + 1;
                        uVar30 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                        uVar4 = *(uint *)(lVar29 + 4);
                        uVar6 = *(uint *)(lVar43 + lVar31);
                        uVar7 = *(uint *)(lVar29 + uVar30);
                        uVar5 = *(uint *)(lVar29 + uVar30 + 4);
                        iVar18 = iVar13 * (int)((ulong)(uVar6 >> 0x18) *
                                                ((ulong)(long)(iVar22 * iVar34) >> 0x10) >> 0x10) >>
                                 8;
                        iVar34 = iVar13 * (int)((ulong)(uVar4 >> 0x18) *
                                                ((ulong)(long)(iVar26 * iVar34) >> 0x10) >> 0x10) >>
                                 8;
                        iVar22 = iVar13 * (int)((ulong)(uVar7 >> 0x18) *
                                                ((ulong)(long)(iVar17 * iVar22) >> 0x10) >> 0x10) >>
                                 8;
                        iVar17 = iVar13 * (int)((ulong)(uVar5 >> 0x18) *
                                                ((ulong)(long)(iVar26 * iVar17) >> 0x10) >> 0x10) >>
                                 8;
                        iVar26 = iVar18 + iVar34 + iVar22 + iVar17;
                        if (iVar26 != 0) {
                          lVar21 = (long)iVar18;
                          lVar29 = (long)iVar34;
                          lVar35 = (long)iVar17;
                          lVar31 = (long)iVar22;
                          uVar36 = (lVar21 * ((ulong)uVar6 & 0xff0000) +
                                    lVar29 * ((ulong)uVar4 & 0xff0000) +
                                    lVar35 * ((ulong)uVar5 & 0xff0000) +
                                    lVar31 * ((ulong)uVar7 & 0xff0000) >> 8) * (long)(iVar42 + 1) &
                                   0xff000000;
                          uVar30 = (lVar21 * ((ulong)uVar6 & 0xff00) +
                                    lVar29 * ((ulong)uVar4 & 0xff00) +
                                    lVar35 * ((ulong)uVar5 & 0xff00) +
                                    lVar31 * ((ulong)uVar7 & 0xff00) & 0xff0000) *
                                   (long)(iVar12 + 1) & 0xff000000;
                          uVar39 = (lVar21 * (ulong)(byte)uVar6 + lVar29 * (ulong)(byte)uVar4 +
                                    lVar35 * (ulong)(byte)uVar5 + lVar31 * (ulong)(byte)uVar7 &
                                   0xff00) * (long)(iVar40 + 1) & 0xff0000;
                          if (iVar26 < 0xfb) {
                            uVar4 = *(uint *)(lVar28 + -4);
                            uVar9 = (ulong)(uVar4 >> 0x18);
                            lVar29 = (long)(0x100 - iVar26);
                            iVar26 = -(int)(lVar29 * (0x100 - uVar9) >> 8);
                            uVar38 = (ulong)(iVar26 + 0x100);
                            uVar5 = 0;
                            if (uVar38 != 0) {
                              uVar5 = (uint)((uVar36 + lVar29 * (((ulong)uVar4 & 0xff0000) * uVar9
                                                                 >> 8 & 0xff0000)) / uVar38);
                            }
                            uVar6 = 0;
                            if (uVar38 != 0) {
                              uVar6 = (uint)((lVar29 * (((ulong)uVar4 & 0xff00) * uVar9 >> 8 &
                                                       0xff00) + (uVar30 >> 8)) / uVar38);
                            }
                            uVar7 = 0;
                            if (uVar38 != 0) {
                              uVar7 = (uint)((lVar29 * ((byte)uVar4 * uVar9 >> 8) + (uVar39 >> 8)) /
                                            uVar38);
                            }
                            *(uint *)(lVar28 + -4) =
                                 uVar5 & 0xff0000 | uVar6 & 0xff00 | (iVar26 + 0xff) * 0x1000000 |
                                 uVar7 & 0xff;
                          }
                          else {
                            *(uint *)(lVar28 + -4) =
                                 (uint)(uVar36 >> 8) | (uint)(uVar30 >> 0x10) | 0xff000000 |
                                 (uint)(uVar39 >> 0x10);
                          }
                        }
                        lVar28 = lVar28 + 4;
                        uVar41 = uVar41 + iVar44;
                        uVar33 = uVar33 + iVar45;
                        if (lVar28 == lVar16 + ((ulong)(uint)(iVar19 - iVar20) + 2) * 4) break;
                        uVar4 = *(uint *)(param_1 + 0x38);
                      }
                    }
                  }
                }
                iVar27 = iVar27 + 1;
                lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)
                ;
              } while ((float)iVar27 < local_1c);
            }
          }
          else if (0.0 < local_1c) {
            iVar12 = (int)(local_20 - 1.0);
            dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
            iVar42 = 0;
            do {
              dVar49 = (double)(((float)(iVar42 + (int)local_24) - param_10) - local_38);
              iVar40 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar49) * 65536.0);
              if (iVar44 < 0) {
                if (-1 < iVar40 >> 0x10) {
                  iVar13 = 0;
                  if (iVar44 != 0) {
                    iVar13 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar40) / iVar44;
                  }
                  if (iVar13 < 0) {
                    iVar13 = 0;
                  }
                  iVar27 = 0;
                  if (iVar44 != 0) {
                    iVar27 = (0x7fff - iVar40) / iVar44;
                  }
                  if (iVar12 < iVar27) {
                    iVar27 = iVar12;
                  }
                  goto LAB_05164a24;
                }
              }
              else if (iVar44 == 0) {
                if ((-1 < iVar40) && (iVar40 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                  iVar13 = 0;
                  iVar27 = iVar12;
                  goto LAB_05164a24;
                }
              }
              else if (iVar40 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar40) / iVar44;
                }
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = (0x10000 - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
LAB_05164a24:
                iVar32 = (int)(((double)param_10 + dVar48 * dVar47 + dVar46 * dVar49) * 65536.0);
                if (iVar45 < 0) {
                  if (-1 < iVar32 >> 0x10) {
                    iVar26 = 0;
                    if (iVar45 != 0) {
                      iVar26 = -iVar32 / iVar45;
                    }
                    iVar20 = 0;
                    if (iVar45 != 0) {
                      iVar20 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar32) / iVar45;
                    }
                    if (iVar13 < iVar20) {
                      iVar13 = iVar20;
                    }
                    if (iVar26 < iVar27) {
                      iVar27 = iVar26;
                    }
                    goto LAB_05164a80;
                  }
                }
                else if (iVar45 == 0) {
                  if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                  goto LAB_05164a80;
                }
                else if (iVar32 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                  iVar26 = 0;
                  if (iVar45 != 0) {
                    iVar26 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar32) / iVar45;
                  }
                  iVar20 = 0;
                  if (iVar45 != 0) {
                    iVar20 = (0x10000 - iVar32) / iVar45;
                  }
                  if (iVar13 < iVar20) {
                    iVar13 = iVar20;
                  }
                  if (iVar26 < iVar27) {
                    iVar27 = iVar26;
                  }
LAB_05164a80:
                  lVar16 = lVar15 + (long)iVar13 * 4;
                  uVar41 = iVar40 + iVar13 * iVar44;
                  uVar33 = iVar32 + iVar13 * iVar45;
                  uVar3 = *(uint *)(param_1 + 0x38);
                  if (iVar13 <= iVar27) {
                    lVar28 = lVar16 + 4;
                    uVar4 = uVar3;
                    while( true ) {
                      iVar40 = (uVar41 & 0xfffe) + 1;
                      iVar26 = 0xffff - (uVar33 & 0xfffe);
                      iVar32 = (uVar33 & 0xfffe) + 1;
                      iVar20 = 0xffff - (uVar41 & 0xfffe);
                      lVar31 = ((long)((int)uVar41 >> 0x10) +
                               (long)(int)(((int)uVar33 >> 0x10) * uVar3)) * 4;
                      lVar29 = lVar43 + lVar31;
                      uVar30 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                      uVar6 = *(uint *)(lVar43 + lVar31);
                      uVar4 = *(uint *)(lVar29 + 4);
                      uVar7 = *(uint *)(lVar29 + uVar30);
                      uVar5 = *(uint *)(lVar29 + uVar30 + 4);
                      iVar17 = (int)((ulong)(uVar6 >> 0x18) *
                                     ((ulong)(long)(iVar20 * iVar26) >> 0x10) >> 0x10);
                      iVar19 = (int)((ulong)(uVar4 >> 0x18) *
                                     ((ulong)(long)(iVar40 * iVar26) >> 0x10) >> 0x10);
                      iVar26 = (int)((ulong)(uVar7 >> 0x18) *
                                     ((ulong)(long)(iVar32 * iVar20) >> 0x10) >> 0x10);
                      iVar32 = (int)((ulong)(uVar5 >> 0x18) *
                                     ((ulong)(long)(iVar40 * iVar32) >> 0x10) >> 0x10);
                      iVar40 = iVar19 + iVar17 + iVar26 + iVar32;
                      if (iVar40 != 0) {
                        lVar21 = (long)iVar17;
                        lVar35 = (long)iVar19;
                        lVar29 = (long)iVar32;
                        lVar31 = (long)iVar26;
                        uVar39 = lVar21 * ((ulong)uVar6 & 0xff0000) +
                                 lVar35 * ((ulong)uVar4 & 0xff0000) +
                                 lVar29 * ((ulong)uVar5 & 0xff0000) +
                                 lVar31 * ((ulong)uVar7 & 0xff0000) & 0xff000000;
                        uVar36 = lVar21 * ((ulong)uVar6 & 0xff00) + lVar35 * ((ulong)uVar4 & 0xff00)
                                 + lVar29 * ((ulong)uVar5 & 0xff00) +
                                 lVar31 * ((ulong)uVar7 & 0xff00) & 0xff0000;
                        uVar30 = lVar21 * (ulong)(byte)uVar6 + lVar35 * (ulong)(byte)uVar4 +
                                 lVar29 * (ulong)(byte)uVar5 + lVar31 * (ulong)(byte)uVar7 & 0xff00;
                        if (iVar40 < 0xfb) {
                          uVar4 = *(uint *)(lVar28 + -4);
                          uVar9 = (ulong)(uVar4 >> 0x18);
                          lVar29 = (long)(0x100 - iVar40);
                          iVar40 = -(int)(lVar29 * (0x100 - uVar9) >> 8);
                          uVar38 = (ulong)(iVar40 + 0x100);
                          uVar5 = 0;
                          if (uVar38 != 0) {
                            uVar5 = (uint)((uVar39 + lVar29 * (((ulong)uVar4 & 0xff0000) * uVar9 >>
                                                               8 & 0xff0000)) / uVar38);
                          }
                          uVar6 = 0;
                          if (uVar38 != 0) {
                            uVar6 = (uint)((uVar36 + lVar29 * (((ulong)uVar4 & 0xff00) * uVar9 >> 8
                                                              & 0xff00)) / uVar38);
                          }
                          uVar7 = 0;
                          if (uVar38 != 0) {
                            uVar7 = (uint)((uVar30 + lVar29 * ((byte)uVar4 * uVar9 >> 8)) / uVar38);
                          }
                          *(uint *)(lVar28 + -4) =
                               uVar5 & 0xff0000 | uVar6 & 0xff00 | (iVar40 + 0xff) * 0x1000000 |
                               uVar7 & 0xff;
                        }
                        else {
                          *(uint *)(lVar28 + -4) =
                               (uint)(uVar39 >> 8) | (uint)(uVar36 >> 8) | 0xff000000 |
                               (uint)(uVar30 >> 8);
                        }
                      }
                      lVar28 = lVar28 + 4;
                      uVar41 = uVar41 + iVar44;
                      uVar33 = uVar33 + iVar45;
                      if (lVar28 == lVar16 + ((ulong)(uint)(iVar27 - iVar13) + 2) * 4) break;
                      uVar4 = *(uint *)(param_1 + 0x38);
                    }
                  }
                }
              }
              iVar42 = iVar42 + 1;
              lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
            } while ((float)iVar42 < local_1c);
          }
        }
        else {
          dVar46 = cos(param_8);
          dVar47 = sin(param_8);
          iVar45 = (int)(dVar47 * 65536.0);
          iVar44 = (int)(dVar46 * 65536.0);
          lVar16 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
          uVar2 = *(uint *)(this + 0x38);
          lVar16 = lVar16 + ((long)(int)local_28 + (long)(int)((int)local_24 * uVar2)) * 4;
          Color::Color(aCStack_18,1);
          cVar11 = Sexy::operator==(param_6,aCStack_18);
          if (cVar11 == '\0') {
            iVar42 = *(int *)(param_6 + 0xc);
            iVar12 = *(int *)(param_6 + 8);
            iVar40 = *(int *)param_6;
            iVar13 = *(int *)(param_6 + 4);
            if (0.0 < local_1c) {
              dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
              iVar32 = (int)(local_20 - 1.0);
              iVar27 = 0;
              do {
                dVar49 = (double)(((float)(iVar27 + (int)local_24) - param_10) - local_38);
                iVar26 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar49) * 65536.0);
                if (iVar44 < 0) {
                  if (-1 < iVar26 >> 0x10) {
                    iVar20 = 0;
                    if (iVar44 != 0) {
                      iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar44;
                    }
                    if (iVar20 < 0) {
                      iVar20 = 0;
                    }
                    iVar19 = 0;
                    if (iVar44 != 0) {
                      iVar19 = (0x7fff - iVar26) / iVar44;
                    }
                    if (iVar32 < iVar19) {
                      iVar19 = iVar32;
                    }
                    goto LAB_05165818;
                  }
                }
                else if (iVar44 == 0) {
                  if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                    iVar20 = 0;
                    iVar19 = iVar32;
                    goto LAB_05165818;
                  }
                }
                else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar44;
                  }
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = (0x10000 - iVar26) / iVar44;
                  }
                  if (iVar20 < 0) {
                    iVar20 = 0;
                  }
                  if (iVar32 < iVar19) {
                    iVar19 = iVar32;
                  }
LAB_05165818:
                  iVar17 = (int)(((double)param_10 + dVar48 * dVar47 + dVar46 * dVar49) * 65536.0);
                  if (iVar45 < 0) {
                    if (-1 < iVar17 >> 0x10) {
                      iVar18 = 0;
                      if (iVar45 != 0) {
                        iVar18 = -iVar17 / iVar45;
                      }
                      iVar34 = 0;
                      if (iVar45 != 0) {
                        iVar34 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar17) / iVar45;
                      }
                      if (iVar20 < iVar34) {
                        iVar20 = iVar34;
                      }
                      if (iVar18 < iVar19) {
                        iVar19 = iVar18;
                      }
                      goto LAB_05165874;
                    }
                  }
                  else if (iVar45 == 0) {
                    if ((-1 < iVar17) && (iVar17 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                    goto LAB_05165874;
                  }
                  else if (iVar17 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                    iVar18 = 0;
                    if (iVar45 != 0) {
                      iVar18 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar17) / iVar45;
                    }
                    iVar34 = 0;
                    if (iVar45 != 0) {
                      iVar34 = (0x10000 - iVar17) / iVar45;
                    }
                    if (iVar20 < iVar34) {
                      iVar20 = iVar34;
                    }
                    if (iVar18 < iVar19) {
                      iVar19 = iVar18;
                    }
LAB_05165874:
                    lVar28 = lVar16 + (long)iVar20 * 4;
                    uVar41 = iVar26 + iVar20 * iVar44;
                    uVar33 = iVar17 + iVar20 * iVar45;
                    uVar3 = *(uint *)(param_1 + 0x38);
                    if (iVar20 <= iVar19) {
                      lVar29 = lVar28 + 4;
                      uVar4 = uVar3;
                      while( true ) {
                        iVar18 = 0xffff - (uVar33 & 0xfffe);
                        iVar26 = (uVar41 & 0xfffe) + 1;
                        iVar17 = (uVar33 & 0xfffe) + 1;
                        iVar34 = 0xffff - (uVar41 & 0xfffe);
                        lVar35 = ((long)((int)uVar41 >> 0x10) +
                                 (long)(int)(((int)uVar33 >> 0x10) * uVar3)) * 4;
                        lVar31 = lVar43 + lVar35;
                        uVar30 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                        uVar7 = *(uint *)(lVar43 + lVar35);
                        uVar4 = *(uint *)(lVar31 + 4);
                        uVar8 = *(uint *)(lVar31 + uVar30);
                        uVar5 = *(uint *)(lVar31 + uVar30 + 4);
                        uVar6 = *(uint *)(lVar29 + -4);
                        iVar23 = (int)((ulong)(uVar7 >> 0x18) *
                                       ((ulong)(long)(iVar34 * iVar18) >> 0x10) >> 0x10);
                        iVar22 = (int)((ulong)(uVar4 >> 0x18) *
                                       ((ulong)(long)(iVar26 * iVar18) >> 0x10) >> 0x10);
                        iVar18 = (int)((ulong)(uVar8 >> 0x18) *
                                       ((ulong)(long)(iVar17 * iVar34) >> 0x10) >> 0x10);
                        iVar26 = (int)((ulong)(uVar5 >> 0x18) *
                                       ((ulong)(long)(iVar26 * iVar17) >> 0x10) >> 0x10);
                        if (iVar22 + iVar23 + iVar18 + iVar26 != 0) {
                          lVar24 = (long)iVar23;
                          lVar21 = (long)iVar22;
                          lVar35 = (long)iVar26;
                          lVar31 = (long)iVar18;
                          *(uint *)(lVar29 + -4) =
                               (uint)*(byte *)(lVar15 + ((lVar24 * (ulong)(byte)uVar7 +
                                                          lVar21 * (ulong)(byte)uVar4 +
                                                          lVar35 * (ulong)(byte)uVar5 +
                                                         lVar31 * (ulong)(byte)uVar8) *
                                                         (long)((iVar42 * iVar12) / 0xff) >> 0x10) +
                                              (ulong)(byte)uVar6) | uVar6 & 0xff000000 |
                               (uint)*(byte *)(lVar15 + ((lVar24 * ((ulong)uVar7 & 0xff00) +
                                                          lVar21 * ((ulong)uVar4 & 0xff00) +
                                                          lVar35 * ((ulong)uVar5 & 0xff00) +
                                                         lVar31 * ((ulong)uVar8 & 0xff00)) *
                                                         (long)((iVar42 * iVar13) / 0xff) >> 0x18) +
                                              ((ulong)(uVar6 >> 8) & 0xff)) << 8 |
                               (uint)*(byte *)(lVar15 + ((lVar24 * ((ulong)uVar7 & 0xff0000) +
                                                          lVar21 * ((ulong)uVar4 & 0xff0000) +
                                                          lVar35 * ((ulong)uVar5 & 0xff0000) +
                                                          lVar31 * ((ulong)uVar8 & 0xff0000) >> 0x18
                                                         ) * (long)((iVar42 * iVar40) / 0xff) >> 8)
                                              + ((ulong)(uVar6 >> 0x10) & 0xff)) << 0x10;
                        }
                        lVar29 = lVar29 + 4;
                        uVar41 = uVar41 + iVar44;
                        uVar33 = uVar33 + iVar45;
                        if (lVar29 == lVar28 + ((ulong)(uint)(iVar19 - iVar20) + 2) * 4) break;
                        uVar4 = *(uint *)(param_1 + 0x38);
                      }
                    }
                  }
                }
                iVar27 = iVar27 + 1;
                lVar16 = lVar16 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)
                ;
              } while ((float)iVar27 < local_1c);
            }
          }
          else if (0.0 < local_1c) {
            iVar12 = (int)(local_20 - 1.0);
            dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
            iVar42 = 0;
            do {
              dVar49 = (double)(((float)(iVar42 + (int)local_24) - param_10) - local_38);
              iVar40 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar49) * 65536.0);
              if (iVar44 < 0) {
                if (-1 < iVar40 >> 0x10) {
                  iVar13 = 0;
                  if (iVar44 != 0) {
                    iVar13 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar40) / iVar44;
                  }
                  if (iVar13 < 0) {
                    iVar13 = 0;
                  }
                  iVar27 = 0;
                  if (iVar44 != 0) {
                    iVar27 = (0x7fff - iVar40) / iVar44;
                  }
                  if (iVar12 < iVar27) {
                    iVar27 = iVar12;
                  }
                  goto LAB_05164ecc;
                }
              }
              else if (iVar44 == 0) {
                if ((-1 < iVar40) && (iVar40 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                  iVar13 = 0;
                  iVar27 = iVar12;
                  goto LAB_05164ecc;
                }
              }
              else if (iVar40 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar40) / iVar44;
                }
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = (0x10000 - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
LAB_05164ecc:
                iVar32 = (int)(((double)param_10 + dVar48 * dVar47 + dVar46 * dVar49) * 65536.0);
                if (iVar45 < 0) {
                  if (-1 < iVar32 >> 0x10) {
                    iVar26 = 0;
                    if (iVar45 != 0) {
                      iVar26 = -iVar32 / iVar45;
                    }
                    iVar20 = 0;
                    if (iVar45 != 0) {
                      iVar20 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar32) / iVar45;
                    }
                    if (iVar13 < iVar20) {
                      iVar13 = iVar20;
                    }
                    if (iVar26 < iVar27) {
                      iVar27 = iVar26;
                    }
                    goto LAB_05164f28;
                  }
                }
                else if (iVar45 == 0) {
                  if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                  goto LAB_05164f28;
                }
                else if (iVar32 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                  iVar26 = 0;
                  if (iVar45 != 0) {
                    iVar26 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar32) / iVar45;
                  }
                  iVar20 = 0;
                  if (iVar45 != 0) {
                    iVar20 = (0x10000 - iVar32) / iVar45;
                  }
                  if (iVar13 < iVar20) {
                    iVar13 = iVar20;
                  }
                  if (iVar26 < iVar27) {
                    iVar27 = iVar26;
                  }
LAB_05164f28:
                  lVar28 = lVar16 + (long)iVar13 * 4;
                  uVar41 = iVar40 + iVar13 * iVar44;
                  uVar33 = iVar32 + iVar13 * iVar45;
                  uVar3 = *(uint *)(param_1 + 0x38);
                  if (iVar13 <= iVar27) {
                    lVar29 = lVar28 + 4;
                    uVar4 = uVar3;
                    while( true ) {
                      iVar26 = 0xffff - (uVar33 & 0xfffe);
                      iVar40 = (uVar41 & 0xfffe) + 1;
                      iVar20 = 0xffff - (uVar41 & 0xfffe);
                      iVar32 = (uVar33 & 0xfffe) + 1;
                      lVar35 = ((long)((int)uVar41 >> 0x10) +
                               (long)(int)(((int)uVar33 >> 0x10) * uVar3)) * 4;
                      uVar30 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                      lVar31 = lVar43 + lVar35;
                      uVar7 = *(uint *)(lVar43 + lVar35);
                      uVar4 = *(uint *)(lVar31 + 4);
                      uVar8 = *(uint *)(lVar31 + uVar30);
                      uVar5 = *(uint *)(lVar31 + uVar30 + 4);
                      uVar6 = *(uint *)(lVar29 + -4);
                      iVar17 = (int)((ulong)(uVar7 >> 0x18) *
                                     ((ulong)(long)(iVar20 * iVar26) >> 0x10) >> 0x10);
                      iVar19 = (int)((ulong)(uVar4 >> 0x18) *
                                     ((ulong)(long)(iVar40 * iVar26) >> 0x10) >> 0x10);
                      iVar26 = (int)((ulong)(uVar8 >> 0x18) *
                                     ((ulong)(long)(iVar32 * iVar20) >> 0x10) >> 0x10);
                      iVar40 = (int)((ulong)(uVar5 >> 0x18) *
                                     ((ulong)(long)(iVar40 * iVar32) >> 0x10) >> 0x10);
                      if (iVar19 + iVar17 + iVar26 + iVar40 != 0) {
                        lVar24 = (long)iVar17;
                        lVar21 = (long)iVar19;
                        lVar31 = (long)iVar40;
                        lVar35 = (long)iVar26;
                        *(uint *)(lVar29 + -4) =
                             (uint)*(byte *)(lVar15 + (lVar24 * (ulong)(byte)uVar7 +
                                                       lVar21 * (ulong)(byte)uVar4 +
                                                       lVar31 * (ulong)(byte)uVar5 +
                                                       lVar35 * (ulong)(byte)uVar8 >> 8) +
                                            (ulong)(byte)uVar6) | uVar6 & 0xff000000 |
                             (uint)*(byte *)(lVar15 + (lVar24 * ((ulong)uVar7 & 0xff0000) +
                                                       lVar21 * ((ulong)uVar4 & 0xff0000) +
                                                       lVar31 * ((ulong)uVar5 & 0xff0000) +
                                                       lVar35 * ((ulong)uVar8 & 0xff0000) >> 0x18) +
                                            ((ulong)(uVar6 >> 0x10) & 0xff)) << 0x10 |
                             (uint)*(byte *)(lVar15 + (lVar24 * ((ulong)uVar7 & 0xff00) +
                                                       lVar21 * ((ulong)uVar4 & 0xff00) +
                                                       lVar31 * ((ulong)uVar5 & 0xff00) +
                                                       lVar35 * ((ulong)uVar8 & 0xff00) >> 0x10) +
                                            ((ulong)(uVar6 >> 8) & 0xff)) << 8;
                      }
                      lVar29 = lVar29 + 4;
                      uVar41 = uVar41 + iVar44;
                      uVar33 = uVar33 + iVar45;
                      if (lVar29 == lVar28 + ((ulong)(uint)(iVar27 - iVar13) + 2) * 4) break;
                      uVar4 = *(uint *)(param_1 + 0x38);
                    }
                  }
                }
              }
              iVar42 = iVar42 + 1;
              lVar16 = lVar16 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
            } while ((float)iVar42 < local_1c);
          }
        }
      }
      else {
        lVar16 = plVar14[0x11] +
                 (long)*(int *)param_4 + (long)(*(int *)(param_4 + 4) * *(int *)(param_4 + 8));
        if (param_7 == 0) {
          dVar46 = cos(param_8);
          dVar47 = sin(param_8);
          iVar45 = (int)(dVar47 * 65536.0);
          iVar44 = (int)(dVar46 * 65536.0);
          lVar15 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
          uVar2 = *(uint *)(this + 0x38);
          lVar15 = lVar15 + ((long)(int)local_28 + (long)(int)((int)local_24 * uVar2)) * 4;
          Color::Color(aCStack_18,1);
          cVar11 = Sexy::operator==(param_6,aCStack_18);
          if (cVar11 == '\0') {
            iVar42 = *(int *)param_6;
            iVar12 = *(int *)(param_6 + 4);
            iVar40 = *(int *)(param_6 + 8);
            iVar13 = *(int *)(param_6 + 0xc);
            if (0.0 < local_1c) {
              dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
              dVar49 = (double)param_10 + dVar48 * dVar47;
              iVar32 = (int)(local_20 - 1.0);
              iVar27 = 0;
              do {
                dVar50 = (double)(((float)(iVar27 + (int)local_24) - param_10) - local_38);
                iVar26 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar50) * 65536.0);
                if (iVar44 < 0) {
                  if (iVar26 >> 0x10 < 0) goto LAB_0516452c;
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = (0x7fff - iVar26) / iVar44;
                  }
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar44;
                  }
                  if (iVar19 < 0) {
                    iVar19 = 0;
                  }
                  if (iVar32 < iVar20) {
                    iVar20 = iVar32;
                  }
                  iVar18 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                  iVar17 = iVar18 >> 0x10;
                  if (-1 < iVar45) goto LAB_05164248;
LAB_0516459c:
                  if (iVar17 < 0) goto LAB_0516452c;
                  iVar17 = 0;
                  if (iVar45 != 0) {
                    iVar17 = -iVar18 / iVar45;
                  }
                  iVar34 = 0;
                  if (iVar45 != 0) {
                    iVar34 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar18) / iVar45;
                  }
                  if (iVar19 < iVar34) {
                    iVar19 = iVar34;
                  }
                  if (iVar17 < iVar20) {
                    iVar20 = iVar17;
                  }
                  goto LAB_0516428c;
                }
                if (iVar44 == 0) {
                  if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                    iVar19 = 0;
                    iVar20 = iVar32;
                    goto LAB_05164230;
                  }
                }
                else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = (0x10000 - iVar26) / iVar44;
                  }
                  if (iVar19 < 0) {
                    iVar19 = 0;
                  }
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar44;
                  }
                  if (iVar32 < iVar20) {
                    iVar20 = iVar32;
                  }
LAB_05164230:
                  iVar18 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                  iVar17 = iVar18 >> 0x10;
                  if (iVar45 < 0) goto LAB_0516459c;
LAB_05164248:
                  if (iVar45 == 0) {
                    if ((-1 < iVar18) && (iVar18 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                    goto LAB_0516428c;
                  }
                  else if (iVar17 < *(int *)(param_4 + 0xc) + -1) {
                    iVar17 = 0;
                    if (iVar45 != 0) {
                      iVar17 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar18) / iVar45;
                    }
                    iVar34 = 0;
                    if (iVar45 != 0) {
                      iVar34 = (0x10000 - iVar18) / iVar45;
                    }
                    if (iVar19 < iVar34) {
                      iVar19 = iVar34;
                    }
                    if (iVar17 < iVar20) {
                      iVar20 = iVar17;
                    }
LAB_0516428c:
                    puVar1 = (uint *)(lVar15 + (long)iVar19 * 4);
                    uVar41 = iVar26 + iVar19 * iVar44;
                    uVar33 = iVar18 + iVar19 * iVar45;
                    iVar26 = *(int *)(param_1 + 0x38);
                    if (iVar19 <= iVar20) {
                      iVar17 = iVar26;
                      puVar10 = puVar1;
                      while( true ) {
                        iVar18 = (uVar41 & 0xfffe) + 1;
                        iVar23 = 0xffff - (uVar33 & 0xfffe);
                        iVar25 = 0xffff - (uVar41 & 0xfffe);
                        lVar28 = (long)((int)uVar41 >> 0x10) +
                                 (long)(((int)uVar33 >> 0x10) * iVar26);
                        lVar29 = lVar16 + lVar28;
                        iVar34 = (uVar33 & 0xfffe) + 1;
                        uVar3 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + 1) * 4);
                        uVar4 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar16 + lVar28) * 4);
                        uVar5 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + iVar17) * 4);
                        uVar6 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + iVar17 + 1) * 4);
                        iVar22 = iVar13 * (int)((ulong)(uVar4 >> 0x18) *
                                                ((ulong)(long)(iVar25 * iVar23) >> 0x10) >> 0x10) >>
                                 8;
                        iVar23 = iVar13 * (int)((ulong)(uVar3 >> 0x18) *
                                                ((ulong)(long)(iVar18 * iVar23) >> 0x10) >> 0x10) >>
                                 8;
                        iVar25 = iVar13 * (int)((ulong)(uVar5 >> 0x18) *
                                                ((ulong)(long)(iVar34 * iVar25) >> 0x10) >> 0x10) >>
                                 8;
                        iVar18 = iVar13 * (int)((ulong)(uVar6 >> 0x18) *
                                                ((ulong)(long)(iVar18 * iVar34) >> 0x10) >> 0x10) >>
                                 8;
                        iVar17 = iVar22 + iVar23 + iVar25 + iVar18;
                        if (iVar17 != 0) {
                          lVar28 = (long)iVar22;
                          lVar35 = (long)iVar23;
                          lVar31 = (long)iVar18;
                          lVar29 = (long)iVar25;
                          uVar39 = (lVar28 * ((ulong)uVar4 & 0xff00) +
                                    lVar35 * ((ulong)uVar3 & 0xff00) +
                                    lVar31 * ((ulong)uVar6 & 0xff00) +
                                    lVar29 * ((ulong)uVar5 & 0xff00) & 0xff0000) *
                                   (long)(iVar12 + 1) & 0xff000000;
                          uVar36 = (lVar28 * ((ulong)uVar4 & 0xff0000) +
                                    lVar35 * ((ulong)uVar3 & 0xff0000) +
                                    lVar31 * ((ulong)uVar6 & 0xff0000) +
                                    lVar29 * ((ulong)uVar5 & 0xff0000) >> 8) * (long)(iVar42 + 1) &
                                   0xff000000;
                          uVar30 = (lVar28 * (ulong)(byte)uVar4 + lVar35 * (ulong)(byte)uVar3 +
                                    lVar31 * (ulong)(byte)uVar6 + lVar29 * (ulong)(byte)uVar5 &
                                   0xff00) * (long)(iVar40 + 1) & 0xff0000;
                          if (iVar17 < 0xfb) {
                            uVar3 = *puVar10;
                            uVar9 = (ulong)(uVar3 >> 0x18);
                            lVar28 = (long)(0x100 - iVar17);
                            iVar17 = -(int)(lVar28 * (0x100 - uVar9) >> 8);
                            uVar38 = (ulong)(iVar17 + 0x100);
                            uVar4 = 0;
                            if (uVar38 != 0) {
                              uVar4 = (uint)((uVar36 + lVar28 * (((ulong)uVar3 & 0xff0000) * uVar9
                                                                 >> 8 & 0xff0000)) / uVar38);
                            }
                            uVar5 = 0;
                            if (uVar38 != 0) {
                              uVar5 = (uint)((lVar28 * (((ulong)uVar3 & 0xff00) * uVar9 >> 8 &
                                                       0xff00) + (uVar39 >> 8)) / uVar38);
                            }
                            uVar6 = 0;
                            if (uVar38 != 0) {
                              uVar6 = (uint)((lVar28 * ((byte)uVar3 * uVar9 >> 8) + (uVar30 >> 8)) /
                                            uVar38);
                            }
                            *puVar10 = uVar4 & 0xff0000 | uVar5 & 0xff00 |
                                       (iVar17 + 0xff) * 0x1000000 | uVar6 & 0xff;
                          }
                          else {
                            *puVar10 = (uint)(uVar36 >> 8) | (uint)(uVar39 >> 0x10) | 0xff000000 |
                                       (uint)(uVar30 >> 0x10);
                          }
                        }
                        if (puVar10 + 2 == puVar1 + (ulong)(uint)(iVar20 - iVar19) + 2) break;
                        uVar41 = uVar41 + iVar44;
                        uVar33 = uVar33 + iVar45;
                        iVar17 = *(int *)(param_1 + 0x38);
                        puVar10 = puVar10 + 1;
                      }
                    }
                  }
                }
LAB_0516452c:
                iVar27 = iVar27 + 1;
                lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)
                ;
              } while ((float)iVar27 < local_1c);
            }
          }
          else if (0.0 < local_1c) {
            iVar12 = (int)(local_20 - 1.0);
            dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
            dVar49 = (double)param_10 + dVar48 * dVar47;
            iVar42 = 0;
            do {
              dVar50 = (double)(((float)(iVar42 + (int)local_24) - param_10) - local_38);
              iVar40 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar50) * 65536.0);
              if (iVar44 < 0) {
                if (iVar40 >> 0x10 < 0) goto LAB_05163910;
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                iVar32 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = (0x7fff - iVar40) / iVar44;
                }
                iVar26 = iVar32 >> 0x10;
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
                if (-1 < iVar45) goto LAB_0516367c;
LAB_05164740:
                if (iVar26 < 0) goto LAB_05163910;
                iVar26 = 0;
                if (iVar45 != 0) {
                  iVar26 = -iVar32 / iVar45;
                }
                iVar20 = 0;
                if (iVar45 != 0) {
                  iVar20 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar32) / iVar45;
                }
                if (iVar13 < iVar20) {
                  iVar13 = iVar20;
                }
                if (iVar26 < iVar27) {
                  iVar27 = iVar26;
                }
                goto LAB_051636c0;
              }
              if (iVar44 == 0) {
                if ((-1 < iVar40) && (iVar40 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                  iVar13 = 0;
                  iVar27 = iVar12;
                  goto LAB_05163664;
                }
              }
              else if (iVar40 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar40) / iVar44;
                }
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = (0x10000 - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
LAB_05163664:
                iVar32 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                iVar26 = iVar32 >> 0x10;
                if (iVar45 < 0) goto LAB_05164740;
LAB_0516367c:
                if (iVar45 == 0) {
                  if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                  goto LAB_051636c0;
                }
                else if (iVar26 < *(int *)(param_4 + 0xc) + -1) {
                  iVar26 = 0;
                  if (iVar45 != 0) {
                    iVar26 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar32) / iVar45;
                  }
                  iVar20 = 0;
                  if (iVar45 != 0) {
                    iVar20 = (0x10000 - iVar32) / iVar45;
                  }
                  if (iVar13 < iVar20) {
                    iVar13 = iVar20;
                  }
                  if (iVar26 < iVar27) {
                    iVar27 = iVar26;
                  }
LAB_051636c0:
                  puVar1 = (uint *)(lVar15 + (long)iVar13 * 4);
                  uVar41 = iVar40 + iVar13 * iVar44;
                  uVar33 = iVar32 + iVar13 * iVar45;
                  iVar40 = *(int *)(param_1 + 0x38);
                  if (iVar13 <= iVar27) {
                    iVar32 = iVar40;
                    puVar10 = puVar1;
                    while( true ) {
                      iVar26 = (uVar41 & 0xfffe) + 1;
                      iVar19 = 0xffff - (uVar33 & 0xfffe);
                      iVar17 = 0xffff - (uVar41 & 0xfffe);
                      lVar28 = (long)((int)uVar41 >> 0x10) + (long)(((int)uVar33 >> 0x10) * iVar40);
                      lVar29 = lVar16 + lVar28;
                      iVar20 = (uVar33 & 0xfffe) + 1;
                      uVar3 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar16 + lVar28) * 4);
                      uVar4 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + 1) * 4);
                      uVar5 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + iVar32) * 4);
                      uVar6 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar29 + iVar32 + 1) * 4);
                      iVar34 = (int)((ulong)(uVar3 >> 0x18) *
                                     ((ulong)(long)(iVar17 * iVar19) >> 0x10) >> 0x10);
                      iVar18 = (int)((ulong)(uVar4 >> 0x18) *
                                     ((ulong)(long)(iVar26 * iVar19) >> 0x10) >> 0x10);
                      iVar19 = (int)((ulong)(uVar5 >> 0x18) *
                                     ((ulong)(long)(iVar20 * iVar17) >> 0x10) >> 0x10);
                      iVar26 = (int)((ulong)(uVar6 >> 0x18) *
                                     ((ulong)(long)(iVar26 * iVar20) >> 0x10) >> 0x10);
                      iVar32 = iVar18 + iVar34 + iVar19 + iVar26;
                      if (iVar32 != 0) {
                        lVar35 = (long)iVar34;
                        lVar31 = (long)iVar18;
                        lVar29 = (long)iVar26;
                        lVar28 = (long)iVar19;
                        uVar39 = lVar35 * ((ulong)uVar3 & 0xff0000) +
                                 lVar31 * ((ulong)uVar4 & 0xff0000) +
                                 lVar29 * ((ulong)uVar6 & 0xff0000) +
                                 lVar28 * ((ulong)uVar5 & 0xff0000) & 0xff000000;
                        uVar36 = lVar35 * ((ulong)uVar3 & 0xff00) + lVar31 * ((ulong)uVar4 & 0xff00)
                                 + lVar29 * ((ulong)uVar6 & 0xff00) +
                                 lVar28 * ((ulong)uVar5 & 0xff00) & 0xff0000;
                        uVar30 = lVar35 * (ulong)(byte)uVar3 + lVar31 * (ulong)(byte)uVar4 +
                                 lVar29 * (ulong)(byte)uVar6 + lVar28 * (ulong)(byte)uVar5 & 0xff00;
                        if (iVar32 < 0xfb) {
                          uVar3 = *puVar10;
                          uVar9 = (ulong)(uVar3 >> 0x18);
                          lVar28 = (long)(0x100 - iVar32);
                          iVar32 = -(int)(lVar28 * (0x100 - uVar9) >> 8);
                          uVar38 = (ulong)(iVar32 + 0x100);
                          uVar4 = 0;
                          if (uVar38 != 0) {
                            uVar4 = (uint)((uVar39 + lVar28 * (((ulong)uVar3 & 0xff0000) * uVar9 >>
                                                               8 & 0xff0000)) / uVar38);
                          }
                          uVar5 = 0;
                          if (uVar38 != 0) {
                            uVar5 = (uint)((uVar36 + lVar28 * (((ulong)uVar3 & 0xff00) * uVar9 >> 8
                                                              & 0xff00)) / uVar38);
                          }
                          uVar6 = 0;
                          if (uVar38 != 0) {
                            uVar6 = (uint)((uVar30 + lVar28 * ((byte)uVar3 * uVar9 >> 8)) / uVar38);
                          }
                          *puVar10 = uVar4 & 0xff0000 | uVar5 & 0xff00 | (iVar32 + 0xff) * 0x1000000
                                     | uVar6 & 0xff;
                        }
                        else {
                          *puVar10 = (uint)(uVar39 >> 8) | (uint)(uVar36 >> 8) | 0xff000000 |
                                     (uint)(uVar30 >> 8);
                        }
                      }
                      if (puVar10 + 2 == puVar1 + (ulong)(uint)(iVar27 - iVar13) + 2) break;
                      uVar41 = uVar41 + iVar44;
                      uVar33 = uVar33 + iVar45;
                      iVar32 = *(int *)(param_1 + 0x38);
                      puVar10 = puVar10 + 1;
                    }
                  }
                }
              }
LAB_05163910:
              iVar42 = iVar42 + 1;
              lVar15 = lVar15 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
            } while ((float)iVar42 < local_1c);
          }
        }
        else {
          dVar46 = cos(param_8);
          dVar47 = sin(param_8);
          iVar45 = (int)(dVar47 * 65536.0);
          iVar44 = (int)(dVar46 * 65536.0);
          lVar28 = (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
          uVar2 = *(uint *)(this + 0x38);
          lVar28 = lVar28 + ((long)(int)local_28 + (long)(int)((int)local_24 * uVar2)) * 4;
          Color::Color(aCStack_18,1);
          cVar11 = Sexy::operator==(param_6,aCStack_18);
          if (cVar11 == '\0') {
            iVar42 = *(int *)(param_6 + 0xc);
            iVar12 = *(int *)(param_6 + 8);
            iVar40 = *(int *)param_6;
            iVar13 = *(int *)(param_6 + 4);
            if (0.0 < local_1c) {
              dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
              iVar32 = (int)(local_20 - 1.0);
              dVar49 = (double)param_10 + dVar48 * dVar47;
              iVar27 = 0;
              do {
                dVar50 = (double)(((float)(iVar27 + (int)local_24) - param_10) - local_38);
                iVar26 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar50) * 65536.0);
                if (iVar44 < 0) {
                  if (iVar26 >> 0x10 < 0) goto LAB_051640e0;
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar44;
                  }
                  if (iVar20 < 0) {
                    iVar20 = 0;
                  }
                  iVar17 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = (0x7fff - iVar26) / iVar44;
                  }
                  iVar18 = iVar17 >> 0x10;
                  if (iVar32 < iVar19) {
                    iVar19 = iVar32;
                  }
                  if (-1 < iVar45) goto LAB_05163ec8;
LAB_051646b4:
                  if (iVar18 < 0) goto LAB_051640e0;
                  iVar18 = 0;
                  if (iVar45 != 0) {
                    iVar18 = -iVar17 / iVar45;
                  }
                  iVar34 = 0;
                  if (iVar45 != 0) {
                    iVar34 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar17) / iVar45;
                  }
                  if (iVar20 < iVar34) {
                    iVar20 = iVar34;
                  }
                  if (iVar18 < iVar19) {
                    iVar19 = iVar18;
                  }
                  goto LAB_05163f0c;
                }
                if (iVar44 == 0) {
                  if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                    iVar20 = 0;
                    iVar19 = iVar32;
                    goto LAB_05163eb0;
                  }
                }
                else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                  iVar20 = 0;
                  if (iVar44 != 0) {
                    iVar20 = (0x10000 - iVar26) / iVar44;
                  }
                  if (iVar20 < 0) {
                    iVar20 = 0;
                  }
                  iVar19 = 0;
                  if (iVar44 != 0) {
                    iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar44;
                  }
                  if (iVar32 < iVar19) {
                    iVar19 = iVar32;
                  }
LAB_05163eb0:
                  iVar17 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                  iVar18 = iVar17 >> 0x10;
                  if (iVar45 < 0) goto LAB_051646b4;
LAB_05163ec8:
                  if (iVar45 == 0) {
                    if ((-1 < iVar17) && (iVar17 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                    goto LAB_05163f0c;
                  }
                  else if (iVar18 < *(int *)(param_4 + 0xc) + -1) {
                    iVar18 = 0;
                    if (iVar45 != 0) {
                      iVar18 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar17) / iVar45;
                    }
                    iVar34 = 0;
                    if (iVar45 != 0) {
                      iVar34 = (0x10000 - iVar17) / iVar45;
                    }
                    if (iVar20 < iVar34) {
                      iVar20 = iVar34;
                    }
                    if (iVar18 < iVar19) {
                      iVar19 = iVar18;
                    }
LAB_05163f0c:
                    lVar29 = lVar28 + (long)iVar20 * 4;
                    uVar41 = iVar26 + iVar20 * iVar44;
                    uVar33 = iVar17 + iVar20 * iVar45;
                    iVar26 = *(int *)(param_1 + 0x38);
                    if (iVar20 <= iVar19) {
                      lVar31 = lVar29 + 4;
                      iVar17 = iVar26;
                      while( true ) {
                        lVar35 = (long)((int)uVar41 >> 0x10) +
                                 (long)(((int)uVar33 >> 0x10) * iVar26);
                        lVar21 = lVar16 + lVar35;
                        iVar18 = (uVar41 & 0xfffe) + 1;
                        iVar22 = 0xffff - (uVar33 & 0xfffe);
                        iVar23 = 0xffff - (uVar41 & 0xfffe);
                        iVar34 = (uVar33 & 0xfffe) + 1;
                        uVar4 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + 1) * 4);
                        uVar5 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar16 + lVar35) * 4);
                        uVar6 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + iVar17) * 4);
                        uVar7 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + iVar17 + 1) * 4);
                        uVar3 = *(uint *)(lVar31 + -4);
                        iVar25 = (int)((ulong)(uVar5 >> 0x18) *
                                       ((ulong)(long)(iVar23 * iVar22) >> 0x10) >> 0x10);
                        iVar22 = (int)((ulong)(uVar4 >> 0x18) *
                                       ((ulong)(long)(iVar18 * iVar22) >> 0x10) >> 0x10);
                        iVar23 = (int)((ulong)(uVar6 >> 0x18) *
                                       ((ulong)(long)(iVar34 * iVar23) >> 0x10) >> 0x10);
                        iVar17 = (int)((ulong)(uVar7 >> 0x18) *
                                       ((ulong)(long)(iVar18 * iVar34) >> 0x10) >> 0x10);
                        if (iVar22 + iVar25 + iVar23 + iVar17 != 0) {
                          lVar37 = (long)iVar25;
                          lVar21 = (long)iVar22;
                          lVar35 = (long)iVar17;
                          lVar24 = (long)iVar23;
                          *(uint *)(lVar31 + -4) =
                               (uint)*(byte *)(lVar15 + ((lVar37 * (ulong)(byte)uVar5 +
                                                          lVar21 * (ulong)(byte)uVar4 +
                                                          lVar35 * (ulong)(byte)uVar7 +
                                                         lVar24 * (ulong)(byte)uVar6) *
                                                         (long)((iVar42 * iVar12) / 0xff) >> 0x10) +
                                              (ulong)(byte)uVar3) | uVar3 & 0xff000000 |
                               (uint)*(byte *)(lVar15 + ((lVar37 * ((ulong)uVar5 & 0xff00) +
                                                          lVar21 * ((ulong)uVar4 & 0xff00) +
                                                          lVar35 * ((ulong)uVar7 & 0xff00) +
                                                         lVar24 * ((ulong)uVar6 & 0xff00)) *
                                                         (long)((iVar42 * iVar13) / 0xff) >> 0x18) +
                                              ((ulong)(uVar3 >> 8) & 0xff)) << 8 |
                               (uint)*(byte *)(lVar15 + ((lVar37 * ((ulong)uVar5 & 0xff0000) +
                                                          lVar21 * ((ulong)uVar4 & 0xff0000) +
                                                          lVar35 * ((ulong)uVar7 & 0xff0000) +
                                                          lVar24 * ((ulong)uVar6 & 0xff0000) >> 0x18
                                                         ) * (long)((iVar42 * iVar40) / 0xff) >> 8)
                                              + ((ulong)(uVar3 >> 0x10) & 0xff)) << 0x10;
                        }
                        lVar31 = lVar31 + 4;
                        uVar41 = uVar41 + iVar44;
                        uVar33 = uVar33 + iVar45;
                        if (lVar31 == lVar29 + ((ulong)(uint)(iVar19 - iVar20) + 2) * 4) break;
                        iVar17 = *(int *)(param_1 + 0x38);
                      }
                    }
                  }
                }
LAB_051640e0:
                iVar27 = iVar27 + 1;
                lVar28 = lVar28 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)
                ;
              } while ((float)iVar27 < local_1c);
            }
          }
          else if (0.0 < local_1c) {
            iVar42 = 0;
            iVar12 = (int)(local_20 - 1.0);
            dVar48 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
            dVar49 = (double)param_10 + dVar48 * dVar47;
            do {
              dVar50 = (double)(((float)(iVar42 + (int)local_24) - param_10) - local_38);
              iVar40 = (int)((((double)param_9 + dVar48 * dVar46) - dVar47 * dVar50) * 65536.0);
              if (iVar44 < 0) {
                if (iVar40 >> 0x10 < 0) goto LAB_05163d1c;
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = (0x7fff - iVar40) / iVar44;
                }
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
                iVar26 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                iVar32 = iVar26 >> 0x10;
                if (-1 < iVar45) goto LAB_05163b1c;
LAB_05164628:
                if (iVar32 < 0) goto LAB_05163d1c;
                iVar32 = 0;
                if (iVar45 != 0) {
                  iVar32 = -iVar26 / iVar45;
                }
                iVar20 = 0;
                if (iVar45 != 0) {
                  iVar20 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar26) / iVar45;
                }
                if (iVar13 < iVar20) {
                  iVar13 = iVar20;
                }
                if (iVar32 < iVar27) {
                  iVar27 = iVar32;
                }
                goto LAB_05163b60;
              }
              if (iVar44 == 0) {
                if ((-1 < iVar40) && (iVar40 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                  iVar13 = 0;
                  iVar27 = iVar12;
                  goto LAB_05163b04;
                }
              }
              else if (iVar40 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                iVar13 = 0;
                if (iVar44 != 0) {
                  iVar13 = (0x10000 - iVar40) / iVar44;
                }
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                iVar27 = 0;
                if (iVar44 != 0) {
                  iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar40) / iVar44;
                }
                if (iVar12 < iVar27) {
                  iVar27 = iVar12;
                }
LAB_05163b04:
                iVar26 = (int)((dVar49 + dVar46 * dVar50) * 65536.0);
                iVar32 = iVar26 >> 0x10;
                if (iVar45 < 0) goto LAB_05164628;
LAB_05163b1c:
                if (iVar45 == 0) {
                  if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                  goto LAB_05163b60;
                }
                else if (iVar32 < *(int *)(param_4 + 0xc) + -1) {
                  iVar32 = 0;
                  if (iVar45 != 0) {
                    iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar26) / iVar45;
                  }
                  iVar20 = 0;
                  if (iVar45 != 0) {
                    iVar20 = (0x10000 - iVar26) / iVar45;
                  }
                  if (iVar13 < iVar20) {
                    iVar13 = iVar20;
                  }
                  if (iVar32 < iVar27) {
                    iVar27 = iVar32;
                  }
LAB_05163b60:
                  lVar29 = lVar28 + (long)iVar13 * 4;
                  uVar41 = iVar40 + iVar13 * iVar44;
                  uVar33 = iVar26 + iVar13 * iVar45;
                  iVar40 = *(int *)(param_1 + 0x38);
                  if (iVar13 <= iVar27) {
                    lVar31 = lVar29 + 4;
                    iVar32 = iVar40;
                    while( true ) {
                      iVar26 = (uVar41 & 0xfffe) + 1;
                      lVar35 = (long)((int)uVar41 >> 0x10) + (long)(((int)uVar33 >> 0x10) * iVar40);
                      lVar21 = lVar16 + lVar35;
                      iVar19 = 0xffff - (uVar33 & 0xfffe);
                      iVar17 = 0xffff - (uVar41 & 0xfffe);
                      iVar20 = (uVar33 & 0xfffe) + 1;
                      uVar4 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar16 + lVar35) * 4);
                      uVar5 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + 1) * 4);
                      uVar6 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + iVar32) * 4);
                      uVar7 = *(uint *)(lVar43 + (ulong)*(byte *)(lVar21 + iVar32 + 1) * 4);
                      uVar3 = *(uint *)(lVar31 + -4);
                      iVar18 = (int)((ulong)(uVar4 >> 0x18) *
                                     ((ulong)(long)(iVar17 * iVar19) >> 0x10) >> 0x10);
                      iVar19 = (int)((ulong)(uVar5 >> 0x18) *
                                     ((ulong)(long)(iVar26 * iVar19) >> 0x10) >> 0x10);
                      iVar17 = (int)((ulong)(uVar6 >> 0x18) *
                                     ((ulong)(long)(iVar20 * iVar17) >> 0x10) >> 0x10);
                      iVar32 = (int)((ulong)(uVar7 >> 0x18) *
                                     ((ulong)(long)(iVar26 * iVar20) >> 0x10) >> 0x10);
                      if (iVar19 + iVar18 + iVar17 + iVar32 != 0) {
                        lVar37 = (long)iVar18;
                        lVar21 = (long)iVar19;
                        lVar35 = (long)iVar32;
                        lVar24 = (long)iVar17;
                        *(uint *)(lVar31 + -4) =
                             (uint)*(byte *)(lVar15 + (lVar37 * (ulong)(byte)uVar4 +
                                                       lVar21 * (ulong)(byte)uVar5 +
                                                       lVar35 * (ulong)(byte)uVar7 +
                                                       lVar24 * (ulong)(byte)uVar6 >> 8) +
                                            (ulong)(byte)uVar3) | uVar3 & 0xff000000 |
                             (uint)*(byte *)(lVar15 + (lVar37 * ((ulong)uVar4 & 0xff0000) +
                                                       lVar21 * ((ulong)uVar5 & 0xff0000) +
                                                       lVar35 * ((ulong)uVar7 & 0xff0000) +
                                                       lVar24 * ((ulong)uVar6 & 0xff0000) >> 0x18) +
                                            ((ulong)(uVar3 >> 0x10) & 0xff)) << 0x10 |
                             (uint)*(byte *)(lVar15 + (lVar37 * ((ulong)uVar4 & 0xff00) +
                                                       lVar21 * ((ulong)uVar5 & 0xff00) +
                                                       lVar35 * ((ulong)uVar7 & 0xff00) +
                                                       lVar24 * ((ulong)uVar6 & 0xff00) >> 0x10) +
                                            ((ulong)(uVar3 >> 8) & 0xff)) << 8;
                      }
                      lVar31 = lVar31 + 4;
                      uVar41 = uVar41 + iVar44;
                      uVar33 = uVar33 + iVar45;
                      if (lVar31 == lVar29 + ((ulong)(uint)(iVar27 - iVar13) + 2) * 4) break;
                      iVar32 = *(int *)(param_1 + 0x38);
                    }
                  }
                }
              }
LAB_05163d1c:
              iVar42 = iVar42 + 1;
              lVar28 = lVar28 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
            } while ((float)iVar42 < local_1c);
          }
        }
      }
      (**(code **)(*(long *)this + 0x98))(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::BltRotated(Sexy::Image*, float, float, Sexy::TRect<int>
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float) */

void __thiscall
Sexy::MemoryImage::BltRotated
          (MemoryImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7,double param_8,float param_9,float param_10)

{
  BltRotated(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10);
  return;
}


/* Sexy::MemoryImage::MemoryImage() */

void __thiscall Sexy::MemoryImage::MemoryImage(MemoryImage *this)

{
  Image::Image((Image *)this);
  RenderDevice::RenderDevice((RenderDevice *)(this + 0x68));
  *(undefined ***)this = &PTR_GetClass_06a2eae0;
  *(undefined ***)(this + 0x68) = &PTR__MemoryImage_06a2eca0;
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xc0));
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xd8));
  *(undefined8 *)(this + 0xb8) = gSexyAppBase;
  Init(this);
  return;
}


/* Sexy::MemoryImage::StaticNew() */

MemoryImage * Sexy::MemoryImage::StaticNew(void)

{
  MemoryImage *this;
  
  this = ::operator_new(0xf0);
  MemoryImage(this);
  return this;
}


/* Sexy::MemoryImage::MemoryImage(Sexy::SexyAppBase*) */

void __thiscall Sexy::MemoryImage::MemoryImage(MemoryImage *this,SexyAppBase *param_1)

{
  Image::Image((Image *)this);
  RenderDevice::RenderDevice((RenderDevice *)(this + 0x68));
  *(undefined ***)this = &PTR_GetClass_06a2eae0;
  *(undefined ***)(this + 0x68) = &PTR__MemoryImage_06a2eca0;
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xc0));
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xd8));
  *(SexyAppBase **)(this + 0xb8) = param_1;
  Init(this);
  return;
}


/* Sexy::MemoryImage::MemoryImage(Sexy::MemoryImage const&) */

void __thiscall Sexy::MemoryImage::MemoryImage(MemoryImage *this,MemoryImage *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  MemoryImage MVar3;
  MemoryImage MVar4;
  MemoryImage MVar5;
  MemoryImage MVar6;
  MemoryImage MVar7;
  MemoryImage MVar8;
  MemoryImage MVar9;
  MemoryImage MVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  void *__src;
  
  Image::Image((Image *)this,(Image *)param_1);
  bVar11 = false;
  RenderDevice::RenderDevice((RenderDevice *)(this + 0x68));
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  MVar3 = param_1[0x90];
  MVar4 = param_1[0x91];
  MVar5 = param_1[0x92];
  MVar6 = param_1[0x93];
  MVar7 = param_1[0x94];
  MVar8 = param_1[0x95];
  MVar9 = param_1[0x96];
  MVar10 = param_1[0xb0];
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined ***)this = &PTR_GetClass_06a2eae0;
  *(undefined ***)(this + 0x68) = &PTR__MemoryImage_06a2eca0;
  *(undefined4 *)(this + 0x78) = uVar2;
  this[0x90] = MVar3;
  this[0x91] = MVar4;
  this[0x92] = MVar5;
  this[0x93] = MVar6;
  this[0x94] = MVar7;
  this[0x95] = MVar8;
  this[0x96] = MVar9;
  this[0xb0] = MVar10;
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xc0));
  PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xd8));
  bVar12 = false;
  if (*(long *)(param_1 + 0x70) == 0) {
    if (*(long *)(param_1 + 0x80) != 0) {
      *(undefined8 *)(this + 0x70) = 0;
      goto LAB_05165fe8;
    }
    bVar11 = true;
    (**(code **)(*(long *)param_1 + 0xd0))(param_1,0,0,0,0);
    bVar12 = true;
    if (*(long *)(param_1 + 0x70) == 0) {
      *(undefined8 *)(this + 0x70) = 0;
      goto LAB_05165fe8;
    }
  }
  bVar11 = bVar12;
  uVar13 = (ulong)(*(int *)(this + 0x38) * *(int *)(this + 0x3c) + 1);
  uVar14 = uVar13 << 2;
  if (0x1fc0000000000000 < uVar13) {
    uVar14 = 0xffffffffffffffff;
  }
  pvVar15 = operator_new__(uVar14);
  *(void **)(this + 0x70) = pvVar15;
  __src = *(void **)(param_1 + 0x70);
  *(undefined4 *)((long)pvVar15 + (long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) * 4) =
       0x4beefade;
  uVar1 = *(int *)(this + 0x38) * *(int *)(this + 0x3c) + 1;
  memcpy(pvVar15,__src,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
LAB_05165fe8:
  if (bVar11) {
    if (*(ColourFit **)(param_1 + 0x70) != (ColourFit *)0x0) {
      EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    *(undefined8 *)(this + 0x80) = 0;
  }
  else {
    pvVar15 = operator_new__(0x400);
    *(void **)(this + 0x80) = pvVar15;
    memcpy(pvVar15,*(void **)(param_1 + 0x80),0x400);
  }
  if (*(long *)(param_1 + 0x88) == 0) {
    *(undefined8 *)(this + 0x88) = 0;
    lVar16 = *(long *)(param_1 + 0x98);
  }
  else {
    pvVar15 = operator_new__((long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
    *(void **)(this + 0x88) = pvVar15;
    memcpy(pvVar15,*(void **)(param_1 + 0x88),(long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)))
    ;
    lVar16 = *(long *)(param_1 + 0x98);
  }
  if (lVar16 == 0) {
    *(undefined8 *)(this + 0x98) = 0;
  }
  else if (*(long *)(param_1 + 0x80) == 0) {
    uVar14 = (long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) << 2;
    if (0x1fc0000000000000 < (ulong)(long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c))) {
      uVar14 = 0xffffffffffffffff;
    }
    pvVar15 = operator_new__(uVar14);
    *(void **)(this + 0x98) = pvVar15;
    memcpy(pvVar15,*(void **)(param_1 + 0x98),
           -(ulong)((uint)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) >> 0x1f) &
           0xfffffffc00000000 | (ulong)(uint)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)) << 2);
  }
  else {
    pvVar15 = operator_new__(0x400);
    *(void **)(this + 0x98) = pvVar15;
    memcpy(pvVar15,*(void **)(param_1 + 0x98),0x400);
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    *(undefined8 *)(this + 0xa0) = 0;
  }
  else {
    pvVar15 = operator_new__((long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
    *(void **)(this + 0xa0) = pvVar15;
    memcpy(pvVar15,*(void **)(param_1 + 0xa0),(long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)))
    ;
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    *(undefined8 *)(this + 0xa8) = 0;
    SexyAppBase::AddMemoryImage(*(SexyAppBase **)(this + 0xb8),this);
    return;
  }
  pvVar15 = operator_new__((long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
  *(void **)(this + 0xa8) = pvVar15;
  memcpy(pvVar15,*(void **)(param_1 + 0xa8),(long)(*(int *)(this + 0x38) * *(int *)(this + 0x3c)));
  SexyAppBase::AddMemoryImage(*(SexyAppBase **)(this + 0xb8),this);
  return;
}


/* Sexy::MemoryImage::~MemoryImage() */

void __thiscall Sexy::MemoryImage::~MemoryImage(MemoryImage *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2eae0;
  *(undefined ***)(this + 0x68) = &PTR__MemoryImage_06a2eca0;
  SexyAppBase::RemoveMemoryImage(*(SexyAppBase **)(this + 0xb8),this);
  if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
  }
  if (*(ColourFit **)(this + 0xa0) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa0));
  }
  if (*(ColourFit **)(this + 0xa8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa8));
  }
  if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
  }
  if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
  }
  TriRep::~TriRep((TriRep *)(this + 0xd8));
  TriRep::~TriRep((TriRep *)(this + 0xc0));
  Image::~Image((Image *)this);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::~MemoryImage() */

void __thiscall Sexy::MemoryImage::~MemoryImage(MemoryImage *this)

{
  ~MemoryImage(this + -0x68);
  return;
}


/* Sexy::MemoryImage::~MemoryImage() */

void __thiscall Sexy::MemoryImage::~MemoryImage(MemoryImage *this)

{
  ~MemoryImage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::MemoryImage::~MemoryImage() */

void __thiscall Sexy::MemoryImage::~MemoryImage(MemoryImage *this)

{
  ~MemoryImage(this + -0x68);
  return;
}


/* Sexy::MemoryImage::BitsChanged() */

void __thiscall Sexy::MemoryImage::BitsChanged(MemoryImage *this)

{
  this[0xb0] = (MemoryImage)0x1;
  *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
  }
  *(undefined8 *)(this + 0x98) = 0;
  if (*(ColourFit **)(this + 0xa0) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa0));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  if (*(ColourFit **)(this + 0xa8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa8) = 0;
  std::vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>::
  clear((vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>> *
        )(this + 0xc0));
  std::vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>::
  clear((vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>> *
        )(this + 0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MemoryImage::BuildTriRep(Sexy::MemoryImage::TriRep*, bool, bool) */

void __thiscall
Sexy::MemoryImage::BuildTriRep(MemoryImage *this,TriRep *param_1,bool param_2,bool param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::
          vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
          ::empty((vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
                   *)param_1);
  if ((bVar1 | param_3) != 0) {
    cVar2 = FUN_0515bcdc(*(undefined4 *)(this + 0x18));
    if (((cVar2 == '\0') &&
        (std::
         vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>::
         clear((vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
                *)param_1), 0x1f < *(int *)(this + 0x38))) && (0x1f < *(int *)(this + 0x3c))) {
      (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
      bVar4 = 0;
      if (*(long *)(this + 0x70) == 0) goto LAB_05169478;
      local_2c = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      local_30 = 0;
      local_28 = local_2c;
      local_24 = local_2c;
      TriRep::Level::Level((Level *)&local_30);
      std::vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
      ::push_back((vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
                   *)param_1,(Level *)&local_30);
      TriRep::Level::~Level((Level *)&local_30);
      uVar3 = std::
              vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
              ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                      *)param_1);
      cVar2 = FUN_05169110(uVar3,this,param_2);
      if (cVar2 == '\0') {
        FUN_05166ca8(param_1 + 8);
        bVar4 = bVar1 | param_3;
        goto LAB_05169478;
      }
    }
  }
  bVar4 = 1;
LAB_05169478:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}

