// Class: Sexy::Bezier


/* Sexy::Bezier::Bezier() */

void __thiscall Sexy::Bezier::Bezier(Bezier *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* Sexy::Bezier::Clean() */

void __thiscall Sexy::Bezier::Clean(Bezier *this)

{
  if (*(ColourFit **)this != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)this);
  }
  if (*(ColourFit **)(this + 8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 8));
  }
  if (*(ColourFit **)(this + 0x18) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x18));
  }
  if (*(ColourFit **)(this + 0x20) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x20));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* Sexy::Bezier::~Bezier() */

void __thiscall Sexy::Bezier::~Bezier(Bezier *this)

{
  if (*(ColourFit **)this != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)this);
  }
  if (*(ColourFit **)(this + 8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 8));
  }
  if (*(ColourFit **)(this + 0x18) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x18));
  }
  if (*(ColourFit **)(this + 0x20) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x20));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* Sexy::Bezier::TEMPNAMEPLACEHOLDERVALUE(Sexy::Bezier const&) */

Bezier * __thiscall Sexy::Bezier::operator=(Bezier *this,Bezier *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  PieceConfig *pPVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  PieceConfig *pPVar15;
  long lVar16;
  ulong uVar17;
  
  if (this != param_1) {
    Clean(this);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x14);
    *(uint *)(this + 0x14) = uVar3;
    *(undefined4 *)(this + 0x10) = uVar2;
    if (0 < (int)uVar3) {
      pvVar6 = operator_new__(-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
      uVar17 = (ulong)*(int *)(this + 0x14);
      *(void **)this = pvVar6;
      uVar7 = uVar17 << 3;
      if (0xfe0000000000000 < uVar17) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar16 = uVar17 - 1;
      pPVar8 = operator_new__(uVar7);
      pPVar15 = pPVar8;
      if (uVar17 != 0) {
        do {
          lVar16 = lVar16 + -1;
          PieceConfig::PieceConfig(pPVar15);
          pPVar15 = pPVar15 + 8;
        } while (lVar16 != -1);
      }
      *(PieceConfig **)(this + 0x20) = pPVar8;
      uVar17 = (ulong)((*(int *)(this + 0x14) + -1) * 2);
      uVar7 = uVar17 << 3;
      if (0xfe0000000000000 < uVar17) {
        uVar7 = 0xffffffffffffffff;
      }
      lVar16 = uVar17 - 1;
      pPVar8 = operator_new__(uVar7);
      pPVar15 = pPVar8;
      if (uVar17 != 0) {
        do {
          lVar16 = lVar16 + -1;
          PieceConfig::PieceConfig(pPVar15);
          pPVar15 = pPVar15 + 8;
        } while (lVar16 != -1);
      }
      *(PieceConfig **)(this + 0x18) = pPVar8;
      uVar7 = (long)(*(int *)(this + 0x14) + -1) << 2;
      if (0x1fc0000000000000 < (ulong)(long)(*(int *)(this + 0x14) + -1)) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar6 = operator_new__(uVar7);
      *(void **)(this + 8) = pvVar6;
      iVar4 = *(int *)(this + 0x14);
      iVar5 = iVar4 + -1;
      if (0 < iVar5) {
        lVar16 = 0;
        lVar12 = *(long *)(this + 0x18);
        lVar11 = *(long *)(param_1 + 0x18);
        lVar10 = 0;
        iVar9 = 0;
        do {
          iVar1 = iVar9 + 1;
          if (iVar9 < iVar4) {
            lVar14 = *(long *)(param_1 + 0x20);
            lVar13 = *(long *)(this + 0x20);
            *(undefined4 *)(*(long *)this + lVar16) = *(undefined4 *)(*(long *)param_1 + lVar16);
            *(undefined8 *)(lVar13 + lVar10) = *(undefined8 *)(lVar14 + lVar10);
          }
          if (iVar9 < iVar5) {
            *(undefined4 *)((long)pvVar6 + lVar16) =
                 *(undefined4 *)(*(long *)(param_1 + 8) + lVar16);
          }
          *(undefined8 *)(lVar12 + lVar10) = *(undefined8 *)(lVar11 + lVar10);
          lVar16 = lVar16 + 4;
          lVar10 = lVar10 + 8;
          iVar9 = iVar1;
        } while (iVar1 < iVar5 * 2);
      }
    }
  }
  return this;
}


/* Sexy::Bezier::Bezier(Sexy::Bezier const&) */

void __thiscall Sexy::Bezier::Bezier(Bezier *this,Bezier *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  operator=(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::Evaluate(float) */

void Sexy::Bezier::Evaluate(float param_1)

{
  int iVar1;
  long *in_x0;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  FPoint *in_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  FPoint aFStack_50 [8];
  FPoint aFStack_48 [8];
  FPoint aFStack_40 [8];
  UDim aUStack_38 [8];
  TPoint<float> aTStack_30 [8];
  UDim aUStack_28 [8];
  UDim aUStack_20 [8];
  TPoint<float> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)((long)in_x0 + 0x14);
  local_8 = ___stack_chk_guard;
  if (iVar1 < 2) {
    DVec2::DVec2((DVec2 *)in_x8,0.0,0.0);
  }
  else {
    pfVar4 = (float *)*in_x0;
    if (param_1 <= *pfVar4) {
      FPoint::FPoint(in_x8,(TPoint *)in_x0[4]);
    }
    else if (pfVar4[(long)iVar1 + -1] <= param_1) {
      FPoint::FPoint(in_x8,(TPoint *)(in_x0[4] + (long)iVar1 * 8 + -8));
    }
    else {
      fVar10 = pfVar4[1];
      lVar3 = 1;
      lVar9 = 2;
      if (fVar10 <= param_1) {
        do {
          lVar5 = lVar9;
          lVar6 = lVar3;
          iVar2 = (int)lVar6;
          if (iVar1 + -1 <= iVar2) {
            lVar3 = (long)iVar2;
            lVar7 = lVar3 * 4;
            lVar5 = (lVar3 + 1) * 8;
            fVar10 = pfVar4[lVar3 + 1];
            lVar9 = (long)(iVar2 << 1) << 3;
            lVar3 = ((long)(iVar2 << 1) + 1) * 8;
            lVar6 = lVar5 + -8;
            goto LAB_05441208;
          }
          fVar10 = pfVar4[lVar5];
          lVar3 = lVar6 + 1;
          lVar9 = lVar5 + 1;
        } while (fVar10 <= param_1);
        lVar7 = lVar6 << 2;
        lVar5 = lVar5 << 3;
        lVar6 = lVar6 << 3;
        lVar9 = (long)(iVar2 << 1) << 3;
        lVar3 = ((long)(iVar2 << 1) + 1) * 8;
      }
      else {
        lVar7 = 0;
        lVar5 = 8;
        lVar3 = lVar5;
        lVar6 = lVar7;
        lVar9 = lVar7;
      }
LAB_05441208:
      lVar8 = in_x0[4];
      fVar10 = (param_1 - *(float *)((long)pfVar4 + lVar7)) /
               (fVar10 - *(float *)((long)pfVar4 + lVar7));
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar3),3.0);
      TPoint<float>::operator-((TPoint<float> *)(lVar8 + lVar5),(TPoint *)aTStack_30);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar9),3.0);
      UI::UDim::operator+(aUStack_28,aUStack_20);
      TPoint<float>::operator-(aTStack_18,(TPoint *)(in_x0[4] + lVar6));
      FPoint::FPoint(aFStack_50,aTStack_10);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar3),3.0);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar9),6.0);
      TPoint<float>::operator-(aTStack_30,(TPoint *)aUStack_28);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[4] + lVar6),3.0);
      UI::UDim::operator+(aUStack_20,(UDim *)aTStack_18);
      FPoint::FPoint(aFStack_48,aTStack_10);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar9),3.0);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[4] + lVar6),3.0);
      TPoint<float>::operator-((TPoint<float> *)aUStack_20,(TPoint *)aTStack_18);
      FPoint::FPoint(aFStack_40,aTStack_10);
      lVar3 = in_x0[4];
      TPoint<float>::operator*((TPoint<float> *)aFStack_50,fVar10);
      UI::UDim::operator+((UDim *)aFStack_48,aUStack_38);
      TPoint<float>::operator*(aTStack_30,fVar10);
      UI::UDim::operator+((UDim *)aFStack_40,aUStack_28);
      TPoint<float>::operator*((TPoint<float> *)aUStack_20,fVar10);
      UI::UDim::operator+((UDim *)(lVar3 + lVar6),(UDim *)aTStack_18);
      FPoint::FPoint(in_x8,aTStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::Velocity(float, bool) */

void Sexy::Bezier::Velocity(float param_1,bool param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char in_w1;
  int iVar4;
  float *pfVar5;
  long lVar6;
  FPoint *in_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  FPoint aFStack_48 [8];
  FPoint aFStack_40 [8];
  FPoint aFStack_38 [8];
  TPoint<float> aTStack_30 [8];
  UDim aUStack_28 [8];
  UDim aUStack_20 [8];
  TPoint<float> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  plVar2 = (long *)(ulong)param_2;
  iVar1 = *(int *)((long)plVar2 + 0x14);
  local_8 = ___stack_chk_guard;
  if (1 < iVar1) {
    pfVar5 = (float *)*plVar2;
    if (param_1 <= *pfVar5) {
      if (in_w1 != '\0') {
        FPoint::FPoint(in_x8,(TPoint *)plVar2[4]);
        goto LAB_05441794;
      }
    }
    else {
      if (param_1 < pfVar5[(long)iVar1 + -1]) {
        fVar11 = pfVar5[1];
        lVar3 = 1;
        lVar10 = 2;
        if (fVar11 <= param_1) {
          do {
            lVar6 = lVar10;
            lVar7 = lVar3;
            iVar4 = (int)lVar7;
            if (iVar1 + -1 <= iVar4) {
              lVar3 = (long)iVar4;
              lVar8 = lVar3 * 4;
              lVar6 = (lVar3 + 1) * 8;
              fVar11 = pfVar5[lVar3 + 1];
              lVar10 = (long)(iVar4 << 1) << 3;
              lVar3 = ((long)(iVar4 << 1) + 1) * 8;
              lVar7 = lVar6 + -8;
              goto LAB_054415a0;
            }
            fVar11 = pfVar5[lVar6];
            lVar3 = lVar7 + 1;
            lVar10 = lVar6 + 1;
          } while (fVar11 <= param_1);
          lVar8 = lVar7 << 2;
          lVar6 = lVar6 << 3;
          lVar7 = lVar7 << 3;
          lVar10 = (long)(iVar4 << 1) << 3;
          lVar3 = ((long)(iVar4 << 1) + 1) * 8;
        }
        else {
          lVar8 = 0;
          lVar6 = 8;
          lVar3 = lVar6;
          lVar7 = lVar8;
          lVar10 = lVar8;
        }
LAB_054415a0:
        lVar9 = plVar2[4];
        fVar11 = (param_1 - *(float *)((long)pfVar5 + lVar8)) /
                 (fVar11 - *(float *)((long)pfVar5 + lVar8));
        TPoint<float>::operator*((TPoint<float> *)(plVar2[3] + lVar3),3.0);
        TPoint<float>::operator-((TPoint<float> *)(lVar9 + lVar6),(TPoint *)aTStack_30);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[3] + lVar10),3.0);
        UI::UDim::operator+(aUStack_28,aUStack_20);
        TPoint<float>::operator-(aTStack_18,(TPoint *)(plVar2[4] + lVar7));
        FPoint::FPoint(aFStack_48,aTStack_10);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[3] + lVar3),6.0);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[3] + lVar10),12.0);
        TPoint<float>::operator-(aTStack_30,(TPoint *)aUStack_28);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[4] + lVar7),6.0);
        UI::UDim::operator+(aUStack_20,(UDim *)aTStack_18);
        FPoint::FPoint(aFStack_40,aTStack_10);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[3] + lVar10),3.0);
        TPoint<float>::operator*((TPoint<float> *)(plVar2[4] + lVar7),3.0);
        TPoint<float>::operator-((TPoint<float> *)aUStack_20,(TPoint *)aTStack_18);
        FPoint::FPoint(aFStack_38,aTStack_10);
        TPoint<float>::operator*((TPoint<float> *)aFStack_48,fVar11);
        TPoint<float>::operator*(aTStack_30,3.0);
        UI::UDim::operator+((UDim *)aFStack_40,aUStack_28);
        TPoint<float>::operator*((TPoint<float> *)aUStack_20,fVar11);
        UI::UDim::operator+((UDim *)aFStack_38,(UDim *)aTStack_18);
        FPoint::FPoint(in_x8,aTStack_10);
        goto LAB_05441794;
      }
      if (in_w1 != '\0') {
        FPoint::FPoint(in_x8,(TPoint *)(plVar2[4] + (long)iVar1 * 8 + -8));
        goto LAB_05441794;
      }
    }
  }
  DVec2::DVec2((DVec2 *)in_x8,0.0,0.0);
LAB_05441794:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::Acceleration(float) */

void Sexy::Bezier::Acceleration(float param_1)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  FPoint *in_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  FPoint aFStack_40 [8];
  FPoint aFStack_38 [8];
  TPoint<float> aTStack_30 [8];
  UDim aUStack_28 [8];
  UDim aUStack_20 [8];
  TPoint<float> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)((long)in_x0 + 0x14);
  local_8 = ___stack_chk_guard;
  if (iVar1 < 2) {
    DVec2::DVec2((DVec2 *)in_x8,0.0,0.0);
  }
  else {
    pfVar5 = (float *)*in_x0;
    if (param_1 <= *pfVar5) {
      FPoint::FPoint(in_x8,(TPoint *)in_x0[4]);
    }
    else if (pfVar5[(long)iVar1 + -1] <= param_1) {
      FPoint::FPoint(in_x8,(TPoint *)(in_x0[4] + (long)iVar1 * 8 + -8));
    }
    else {
      fVar9 = pfVar5[1];
      lVar2 = 1;
      lVar8 = 2;
      if (fVar9 <= param_1) {
        do {
          lVar4 = lVar8;
          lVar6 = lVar2;
          iVar3 = (int)lVar6;
          if (iVar1 + -1 <= iVar3) {
            lVar2 = (long)iVar3;
            lVar7 = lVar2 * 4;
            lVar4 = (lVar2 + 1) * 8;
            fVar9 = pfVar5[lVar2 + 1];
            lVar8 = (long)(iVar3 << 1) << 3;
            lVar2 = ((long)(iVar3 << 1) + 1) * 8;
            lVar6 = lVar4 + -8;
            goto LAB_05441918;
          }
          fVar9 = pfVar5[lVar4];
          lVar2 = lVar6 + 1;
          lVar8 = lVar4 + 1;
        } while (fVar9 <= param_1);
        lVar7 = lVar6 << 2;
        lVar4 = lVar4 << 3;
        lVar6 = lVar6 << 3;
        lVar8 = (long)(iVar3 << 1) << 3;
        lVar2 = ((long)(iVar3 << 1) + 1) * 8;
      }
      else {
        lVar7 = 0;
        lVar4 = 8;
        lVar2 = lVar4;
        lVar6 = lVar7;
        lVar8 = lVar7;
      }
LAB_05441918:
      fVar10 = *(float *)((long)pfVar5 + lVar7);
      lVar7 = in_x0[4];
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar2),3.0);
      TPoint<float>::operator-((TPoint<float> *)(lVar7 + lVar4),(TPoint *)aTStack_30);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar8),3.0);
      UI::UDim::operator+(aUStack_28,aUStack_20);
      TPoint<float>::operator-(aTStack_18,(TPoint *)(in_x0[4] + lVar6));
      FPoint::FPoint(aFStack_40,aTStack_10);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar2),6.0);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[3] + lVar8),12.0);
      TPoint<float>::operator-(aTStack_30,(TPoint *)aUStack_28);
      TPoint<float>::operator*((TPoint<float> *)(in_x0[4] + lVar6),6.0);
      UI::UDim::operator+(aUStack_20,(UDim *)aTStack_18);
      FPoint::FPoint(aFStack_38,aTStack_10);
      TPoint<float>::operator*((TPoint<float> *)aFStack_40,(param_1 - fVar10) / (fVar9 - fVar10));
      TPoint<float>::operator*((TPoint<float> *)aUStack_20,6.0);
      UI::UDim::operator+((UDim *)aFStack_38,(UDim *)aTStack_18);
      FPoint::FPoint(in_x8,aTStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::SubdivideLength(Sexy::FPoint const&, Sexy::FPoint const&, Sexy::FPoint const&,
   Sexy::FPoint const&) */

void __thiscall
Sexy::Bezier::SubdivideLength
          (Bezier *this,FPoint *param_1,FPoint *param_2,FPoint *param_3,FPoint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FPoint aFStack_48 [8];
  FPoint aFStack_40 [8];
  FPoint aFStack_38 [8];
  FPoint aFStack_30 [8];
  FPoint aFStack_28 [8];
  FPoint aFStack_20 [8];
  TPoint<float> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)Distance(param_1,param_4,true);
  fVar2 = (float)Distance(param_1,param_2,true);
  fVar3 = (float)Distance(param_2,param_3,true);
  fVar4 = (float)Distance(param_3,param_4,true);
  fVar4 = fVar3 + fVar2 + fVar4;
  fVar2 = fVar1 - fVar4;
  if (0.001 <= fVar2 * fVar2) {
    UI::UDim::operator+((UDim *)param_1,(UDim *)param_2);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_48,aTStack_10);
    UI::UDim::operator+((UDim *)param_2,(UDim *)param_3);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_40,aTStack_10);
    UI::UDim::operator+((UDim *)aFStack_48,(UDim *)aFStack_40);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_38,aTStack_10);
    UI::UDim::operator+((UDim *)param_3,(UDim *)param_4);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_30,aTStack_10);
    UI::UDim::operator+((UDim *)aFStack_40,(UDim *)aFStack_30);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_28,aTStack_10);
    UI::UDim::operator+((UDim *)aFStack_38,(UDim *)aFStack_28);
    TPoint<float>::operator*(aTStack_18,0.5);
    FPoint::FPoint(aFStack_20,aTStack_10);
    fVar2 = (float)SubdivideLength(this,param_1,aFStack_48,aFStack_38,aFStack_20);
    fVar1 = (float)SubdivideLength(this,aFStack_20,aFStack_28,aFStack_30,param_4);
    fVar1 = fVar1 + fVar2;
  }
  else {
    fVar1 = (fVar4 + fVar1) * 0.5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::SegmentArcLength(int, float, float) */

void __thiscall Sexy::Bezier::SegmentArcLength(Bezier *this,int param_1,float param_2,float param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FPoint aFStack_b0 [8];
  FPoint aFStack_a8 [8];
  FPoint aFStack_a0 [8];
  FPoint aFStack_98 [8];
  FPoint aFStack_90 [8];
  undefined8 local_88;
  FPoint aFStack_80 [8];
  FPoint aFStack_78 [8];
  FPoint aFStack_70 [8];
  FPoint aFStack_68 [8];
  FPoint aFStack_60 [8];
  FPoint aFStack_58 [8];
  UDim aUStack_50 [8];
  UDim aUStack_48 [8];
  UDim aUStack_40 [8];
  UDim aUStack_38 [8];
  TPoint<float> aTStack_30 [8];
  UDim aUStack_28 [8];
  UDim aUStack_20 [8];
  UDim aUStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < param_3) {
    uVar1 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    fVar2 = (float)NEON_fminnm(param_3,0x3f800000);
    FPoint::FPoint(aFStack_b0,(TPoint *)(*(long *)(this + 0x20) + uVar1));
    fVar4 = 1.0 - fVar2;
    FPoint::FPoint(aFStack_a8,(TPoint *)(*(long *)(this + 0x18) + (long)(param_1 << 1) * 8));
    FPoint::FPoint(aFStack_a0,(TPoint *)(*(long *)(this + 0x18) + ((long)(param_1 << 1) + 1) * 8));
    fVar3 = 1.0 - param_2;
    FPoint::FPoint(aFStack_98,(TPoint *)(*(long *)(this + 0x20) + uVar1 + 8));
    TPoint<float>::operator*((TPoint<float> *)aFStack_b0,fVar4);
    TPoint<float>::operator*((TPoint<float> *)aFStack_a8,fVar2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint(aFStack_90,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)aFStack_a8,fVar4);
    TPoint<float>::operator*((TPoint<float> *)aFStack_a0,fVar2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint((FPoint *)&local_88,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)aFStack_90,fVar4);
    TPoint<float>::operator*((TPoint<float> *)&local_88,fVar2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint(aFStack_80,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)aFStack_80,fVar4);
    TPoint<float>::operator*((TPoint<float> *)&local_88,fVar4);
    TPoint<float>::operator*((TPoint<float> *)aFStack_a0,fVar4);
    TPoint<float>::operator*((TPoint<float> *)aFStack_98,fVar2);
    UI::UDim::operator+(aUStack_40,aUStack_38);
    TPoint<float>::operator*(aTStack_30,fVar2);
    UI::UDim::operator+(aUStack_48,aUStack_28);
    TPoint<float>::operator*((TPoint<float> *)aUStack_20,fVar2);
    UI::UDim::operator+(aUStack_50,aUStack_18);
    FPoint::FPoint(aFStack_78,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)aFStack_90,fVar3);
    TPoint<float>::operator*((TPoint<float> *)aFStack_80,param_2);
    UI::UDim::operator+(aUStack_28,aUStack_20);
    FPoint::FPoint((FPoint *)&local_10,(TPoint *)aUStack_18);
    local_88 = local_10;
    FPoint::FPoint(aFStack_70,(TPoint *)aFStack_78);
    TPoint<float>::operator*((TPoint<float> *)aFStack_80,fVar3);
    TPoint<float>::operator*((TPoint<float> *)aFStack_78,param_2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint(aFStack_68,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)&local_88,fVar3);
    TPoint<float>::operator*((TPoint<float> *)aFStack_68,param_2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint(aFStack_60,(TPoint *)&local_10);
    TPoint<float>::operator*((TPoint<float> *)aFStack_b0,fVar3);
    TPoint<float>::operator*((TPoint<float> *)aFStack_90,param_2);
    UI::UDim::operator+(aUStack_50,aUStack_48);
    TPoint<float>::operator*((TPoint<float> *)aUStack_40,fVar3);
    TPoint<float>::operator*((TPoint<float> *)&local_88,param_2);
    UI::UDim::operator+(aUStack_38,(UDim *)aTStack_30);
    TPoint<float>::operator*((TPoint<float> *)aUStack_28,fVar3);
    TPoint<float>::operator*((TPoint<float> *)aFStack_60,param_2);
    UI::UDim::operator+(aUStack_20,aUStack_18);
    FPoint::FPoint(aFStack_58,(TPoint *)&local_10);
    SubdivideLength(this,aFStack_58,aFStack_60,aFStack_68,aFStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Bezier::Init(Sexy::FPoint const*, Sexy::FPoint const*, float const*, int) */

undefined4 __thiscall
Sexy::Bezier::Init(Bezier *this,FPoint *param_1,FPoint *param_2,float *param_3,int param_4)

{
  int iVar1;
  PieceConfig *pPVar2;
  void *pvVar3;
  long lVar4;
  PieceConfig *pPVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  if (*(int *)(this + 0x14) == 0) {
    if (param_4 < 2 || param_1 == (FPoint *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      if ((param_3 != (float *)0x0) && (param_2 != (FPoint *)0x0)) {
        lVar8 = (long)param_4;
        pPVar2 = operator_new__(lVar8 << 3);
        lVar6 = lVar8 + -1;
        pPVar5 = pPVar2;
        do {
          lVar6 = lVar6 + -1;
          PieceConfig::PieceConfig(pPVar5);
          pPVar5 = pPVar5 + 8;
        } while (lVar6 != -1);
        *(PieceConfig **)(this + 0x20) = pPVar2;
        iVar1 = (param_4 + -1) * 2;
        lVar6 = (long)iVar1;
        lVar7 = lVar6 + -1;
        pPVar2 = operator_new__(lVar6 << 3);
        pPVar5 = pPVar2;
        if (lVar6 != 0) {
          do {
            lVar7 = lVar7 + -1;
            PieceConfig::PieceConfig(pPVar5);
            pPVar5 = pPVar5 + 8;
          } while (lVar7 != -1);
        }
        *(PieceConfig **)(this + 0x18) = pPVar2;
        pvVar3 = operator_new__(lVar8 * 4);
        *(int *)(this + 0x14) = param_4;
        lVar6 = 0;
        lVar4 = *(long *)(this + 0x20);
        *(void **)this = pvVar3;
        lVar7 = 0;
        do {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(param_1 + lVar6);
          lVar6 = lVar6 + 8;
          *(float *)((long)pvVar3 + lVar7 * 4) = param_3[lVar7];
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < param_4);
        lVar7 = *(long *)(this + 0x18);
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar7 + lVar6) = *(undefined8 *)(param_2 + lVar6);
          lVar6 = lVar6 + 8;
        } while (lVar6 != ((ulong)(iVar1 - 1) + 1) * 8);
        lVar6 = 0;
        pvVar3 = operator_new__(lVar8 * 4 - 4);
        *(void **)(this + 8) = pvVar3;
        *(undefined4 *)(this + 0x10) = 0;
        do {
          lVar8 = lVar6 * 4;
          iVar1 = (int)lVar6;
          lVar6 = lVar6 + 1;
          uVar9 = SegmentArcLength(this,iVar1,0.0,1.0);
          *(undefined4 *)((long)pvVar3 + lVar8) = uVar9;
          pvVar3 = *(void **)(this + 8);
          *(float *)(this + 0x10) = *(float *)(this + 0x10) + *(float *)((long)pvVar3 + lVar8);
        } while ((int)lVar6 < param_4 + -1);
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Bezier::Init(Sexy::FPoint const*, float const*, int) */

void __thiscall Sexy::Bezier::Init(Bezier *this,FPoint *param_1,float *param_2,int param_3)

{
  TPoint *pTVar1;
  UDim *this_00;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  PieceConfig *pPVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  PieceConfig *pPVar10;
  TPoint *pTVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined4 uVar18;
  TPoint<float> aTStack_28 [8];
  UDim aUStack_20 [8];
  TPoint aTStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x14) == 0) {
    if ((param_3 < 2 || param_1 == (FPoint *)0x0) || (param_2 == (float *)0x0)) {
      uVar3 = 0;
    }
    else {
      lVar16 = (long)param_3;
      uVar4 = lVar16 * 8;
      lVar12 = lVar16 + -1;
      pPVar5 = operator_new__(uVar4);
      pPVar10 = pPVar5;
      do {
        lVar12 = lVar12 + -1;
        PieceConfig::PieceConfig(pPVar10);
        pPVar10 = pPVar10 + 8;
      } while (lVar12 != -1);
      iVar2 = param_3 + -1;
      *(PieceConfig **)(this + 0x20) = pPVar5;
      lVar15 = (long)(iVar2 * 2);
      uVar6 = lVar15 * 8;
      lVar12 = lVar15 + -1;
      pPVar5 = operator_new__(uVar6);
      pPVar10 = pPVar5;
      if (lVar15 != 0) {
        do {
          lVar12 = lVar12 + -1;
          PieceConfig::PieceConfig(pPVar10);
          pPVar10 = pPVar10 + 8;
        } while (lVar12 != -1);
      }
      *(PieceConfig **)(this + 0x18) = pPVar5;
      pvVar7 = operator_new__(lVar16 * 4);
      pTVar11 = *(TPoint **)(this + 0x20);
      lVar12 = 0;
      *(void **)this = pvVar7;
      *(int *)(this + 0x14) = param_3;
      lVar15 = 0;
      do {
        *(undefined8 *)(pTVar11 + lVar12) = *(undefined8 *)(param_1 + lVar12);
        lVar12 = lVar12 + 8;
        *(float *)((long)pvVar7 + lVar15 * 4) = param_2[lVar15];
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < param_3);
      lVar12 = 0;
      lVar15 = 8;
      iVar17 = 0;
      while( true ) {
        if (iVar17 < param_3 + -2) {
          lVar9 = *(long *)(this + 0x18);
          TPoint<float>::operator-((TPoint<float> *)(pTVar11 + lVar12 + 0x10),pTVar11 + lVar12);
          TPoint<float>::operator/(aTStack_28,3.0);
          TPoint<float>::operator-((TPoint<float> *)(pTVar11 + lVar15),(TPoint *)aUStack_20);
          FPoint::FPoint((FPoint *)&local_10,aTStack_18);
          pTVar11 = *(TPoint **)(this + 0x20);
          *(undefined8 *)(lVar9 + (lVar12 + 4) * 2) = local_10;
        }
        iVar17 = iVar17 + 1;
        if (iVar2 <= iVar17) break;
        lVar8 = *(long *)(this + 0x18);
        lVar9 = lVar12 + 0x10;
        pTVar1 = pTVar11 + lVar12;
        lVar14 = lVar15 * 2;
        lVar12 = lVar12 + 8;
        TPoint<float>::operator-((TPoint<float> *)(pTVar11 + lVar9),pTVar1);
        TPoint<float>::operator/(aTStack_28,3.0);
        this_00 = (UDim *)(pTVar11 + lVar15);
        lVar15 = lVar15 + 8;
        UI::UDim::operator+(this_00,aUStack_20);
        FPoint::FPoint((FPoint *)&local_10,aTStack_18);
        pTVar11 = *(TPoint **)(this + 0x20);
        *(undefined8 *)(lVar8 + lVar14) = local_10;
      }
      puVar13 = *(undefined8 **)(this + 0x18);
      lVar12 = 0;
      TPoint<float>::operator-((TPoint<float> *)(pTVar11 + 8),pTVar11);
      TPoint<float>::operator/(aTStack_28,3.0);
      TPoint<float>::operator-((TPoint<float> *)(puVar13 + 1),(TPoint *)aUStack_20);
      FPoint::FPoint((FPoint *)&local_10,aTStack_18);
      lVar15 = *(long *)(this + 0x20);
      *puVar13 = local_10;
      lVar9 = *(long *)(this + 0x18);
      TPoint<float>::operator-
                ((TPoint<float> *)(lVar15 + (uVar4 - 8)),(TPoint *)(lVar15 + (uVar4 - 0x10)));
      TPoint<float>::operator/(aTStack_28,3.0);
      UI::UDim::operator+((UDim *)(lVar9 + (uVar6 - 0x10)),aUStack_20);
      FPoint::FPoint((FPoint *)&local_10,aTStack_18);
      *(undefined8 *)(lVar9 + (uVar6 - 8)) = local_10;
      pvVar7 = operator_new__(lVar16 * 4 - 4);
      *(void **)(this + 8) = pvVar7;
      *(undefined4 *)(this + 0x10) = 0;
      do {
        lVar16 = lVar12 * 4;
        iVar17 = (int)lVar12;
        lVar12 = lVar12 + 1;
        uVar18 = SegmentArcLength(this,iVar17,0.0,1.0);
        *(undefined4 *)((long)pvVar7 + lVar16) = uVar18;
        pvVar7 = *(void **)(this + 8);
        *(float *)(this + 0x10) = *(float *)(this + 0x10) + *(float *)((long)pvVar7 + lVar16);
      } while ((int)lVar12 < iVar2);
      uVar3 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* Sexy::Bezier::ArcLength(float, float) */

void __thiscall Sexy::Bezier::ArcLength(Bezier *this,float param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar6;
  
  if (param_2 <= param_1) {
    return;
  }
  pfVar8 = *(float **)this;
  iVar1 = *(int *)(this + 0x14) + -1;
  fVar10 = (float)NEON_fminnm(pfVar8[(long)*(int *)(this + 0x14) + -1],param_2);
  fVar12 = *pfVar8;
  if (param_1 <= fVar12) {
    param_1 = fVar12;
  }
  fVar11 = pfVar8[1];
  if (iVar1 < 1) {
    iVar4 = 0;
    fVar9 = (param_1 - fVar12) / (fVar11 - fVar12);
    fVar10 = (fVar10 - fVar12) / (fVar11 - fVar12);
  }
  else {
    if (param_1 < fVar11) {
      uVar3 = 0;
      iVar4 = 0;
      fVar12 = fVar11;
    }
    else {
      pfVar2 = pfVar8 + 2;
      uVar6 = 1;
      do {
        uVar3 = uVar6;
        iVar4 = (int)uVar3;
        if (iVar1 <= iVar4) {
          uVar3 = -(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2;
          fVar12 = *(float *)((long)pfVar8 + uVar3 + 4);
          goto LAB_05442890;
        }
        fVar12 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        uVar6 = uVar3 + 1;
      } while (fVar12 <= param_1);
      uVar3 = uVar3 << 2;
    }
LAB_05442890:
    fVar9 = (param_1 - *(float *)((long)pfVar8 + uVar3)) /
            (fVar12 - *(float *)((long)pfVar8 + uVar3));
    if (fVar10 <= fVar11) {
      uVar3 = 0;
      iVar5 = 0;
LAB_054428e0:
      fVar10 = (fVar10 - *(float *)((long)pfVar8 + uVar3)) /
               (fVar11 - *(float *)((long)pfVar8 + uVar3));
    }
    else {
      uVar3 = 1;
      pfVar2 = pfVar8 + 2;
      do {
        uVar6 = uVar3;
        iVar5 = (int)uVar6;
        if (iVar1 <= iVar5) {
          uVar3 = -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2;
          fVar11 = *(float *)((long)pfVar8 + uVar3 + 4);
          goto LAB_054428e0;
        }
        fVar12 = *pfVar2;
        uVar3 = uVar6 + 1;
        pfVar2 = pfVar2 + 1;
      } while (fVar12 < fVar10);
      fVar10 = (fVar10 - pfVar8[uVar6]) / (fVar12 - pfVar8[uVar6]);
    }
    if (iVar4 != iVar5) {
      SegmentArcLength(this,iVar4,fVar9,1.0);
      if ((iVar4 + 1 < iVar5) && (3 < (uint)((iVar5 + -2) - iVar4))) {
        uVar7 = 0;
        do {
          uVar7 = uVar7 + 1;
        } while (uVar7 < ((iVar5 - iVar4) - 5U >> 2) + 1);
      }
      SegmentArcLength(this,iVar5,0.0,fVar10);
      return;
    }
  }
  SegmentArcLength(this,iVar4,fVar9,fVar10);
  return;
}

