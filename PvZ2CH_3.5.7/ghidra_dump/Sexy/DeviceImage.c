// Class: Sexy::DeviceImage


/* Sexy::DeviceImage::SetSurface(void*) */

void __thiscall Sexy::DeviceImage::SetSurface(DeviceImage *this,void *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  this[0xf8] = (DeviceImage)0x1;
  if (*(long *)(this + 0x148) == 0) {
LAB_0512b194:
    if (param_1 == (void *)0x0) {
LAB_0512b210:
      *(undefined4 *)(this + 0x3c) = 0;
      *(undefined4 *)(this + 0x38) = 0;
      this[0xf9] = (DeviceImage)0x1;
      return;
    }
  }
  else {
    iVar1 = (**(code **)(**(long **)(this + 0xf0) + 0x18))(*(long **)(this + 0xf0));
    iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x20))(*(long **)(this + 0x148));
    plVar3 = *(long **)(this + 0x148);
    if (iVar1 != iVar2) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined8 *)(this + 0x148) = 0;
      goto LAB_0512b194;
    }
    if (param_1 == (void *)0x0) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        *(undefined8 *)(this + 0x148) = 0;
      }
      goto LAB_0512b210;
    }
    if (plVar3 != (long *)0x0) goto LAB_0512b1b0;
  }
  plVar3 = (long *)(**(code **)(**(long **)(this + 0xf0) + 0x98))(*(long **)(this + 0xf0));
  *(long **)(this + 0x148) = plVar3;
LAB_0512b1b0:
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this + 0x38,this + 0x3c);
  this[0xf9] = (DeviceImage)0x0;
  return;
}


/* Sexy::DeviceImage::NormalDrawLineAA(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::DeviceImage::NormalDrawLineAA
          (DeviceImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  short *psVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulong uVar39;
  
  if (this[0xf9] != (DeviceImage)0x0) {
    return;
  }
  cVar10 = (**(code **)(*(long *)this + 0x200))();
  if (cVar10 == '\0') {
    return;
  }
  uVar17 = *(uint *)(this + 0x138);
  uVar18 = *(uint *)(this + 0x13c);
  uVar23 = *(uint *)(this + 0x140);
  iVar25 = (int)param_2;
  iVar27 = (int)param_4;
  uVar20 = uVar18 & uVar18 * *(int *)(param_5 + 4) >> 8 | uVar17 & uVar17 * *(int *)param_5 >> 8 |
           uVar23 & uVar23 * *(int *)(param_5 + 8) >> 8;
  iVar29 = (int)param_3;
  dVar35 = param_1;
  dVar36 = param_2;
  iVar28 = iVar27;
  iVar30 = iVar29;
  iVar24 = (int)param_1;
  if (iVar27 < iVar25) {
    dVar35 = param_3;
    dVar36 = param_4;
    param_3 = param_1;
    param_4 = param_2;
    iVar28 = iVar25;
    iVar30 = (int)param_1;
    iVar24 = iVar29;
    iVar25 = iVar27;
  }
  iVar27 = iVar30 - iVar24;
  iVar29 = iVar28 - iVar25;
  dVar37 = param_3 - dVar35;
  uVar34 = 1;
  dVar38 = param_4 - dVar36;
  if (iVar27 < 0) {
    dVar37 = -dVar37;
    iVar27 = -iVar27;
    uVar34 = 0xffffffff;
  }
  iVar33 = (int)uVar34;
  if (*(int *)(this + 0x134) == 0x20) {
    iVar11 = *(int *)(param_5 + 0xc);
    lVar31 = *(long *)(this + 0x120);
    if (iVar11 == 0xff) {
      uVar39 = *(ulong *)(this + 0x118);
      uVar21 = uVar39 >> 2;
      iVar11 = (int)uVar21;
      uVar17 = iVar24 + iVar25 * iVar11;
      uVar32 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
      puVar15 = (uint *)(lVar31 + uVar32);
      uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                               (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
      uVar12 = (ulong)uVar17;
      if (iVar27 < iVar29) {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          iVar25 = 0x100 - uVar18;
          uVar17 = uVar17 & 0xff;
          *(uint *)(lVar31 + uVar32) =
               uVar17 * (uVar20 & 0xff00) + iVar25 * (*(uint *)(lVar31 + uVar32) & 0xff00) >> 8 &
               0xff00 | uVar17 * (uVar20 & 0xff00ff) +
                        iVar25 * (*(uint *)(lVar31 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
        }
        uVar34 = -(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2;
        while( true ) {
          iVar29 = iVar29 + -1;
          uVar12 = uVar12 + (uint)(int)((dVar37 / dVar38) * 65536.0);
          if (iVar29 == 0) break;
          if (0xffff < uVar12) {
            uVar12 = uVar12 & 0xffff;
            puVar15 = (uint *)((long)puVar15 + uVar34);
            iVar24 = iVar24 + iVar33;
          }
          puVar15 = (uint *)((long)puVar15 +
                            (-(uVar39 >> 0x21 & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2
                            ));
          uVar26 = uVar12 >> 8;
          uVar17 = (uint)(uVar12 >> 8);
          uVar18 = ~uVar17 & 0xff;
          iVar25 = 0x100 - uVar18;
          uVar23 = ~uVar17 & 0xff;
          if (uVar23 != 0) {
            *puVar15 = uVar18 * (uVar20 & 0xff00) + iVar25 * (*puVar15 & 0xff00) >> 8 & 0xff00 |
                       uVar23 * (uVar20 & 0xff00ff) + iVar25 * (*puVar15 & 0xff00ff) >> 8 & 0xff00ff
            ;
          }
          if (iVar24 < iVar11 + -1) {
            if (uVar26 != 0) {
              *(uint *)((long)puVar15 + uVar34) =
                   (uVar20 & 0xff00) * uVar17 +
                   (*(uint *)((long)puVar15 + uVar34) & 0xff00) * (0x100 - uVar17) >> 8 & 0xff00 |
                   (uVar20 & 0xff00ff) * uVar17 +
                   (0x100 - uVar17) * (*(uint *)((long)puVar15 + uVar34) & 0xff00ff) >> 8 & 0xff00ff
              ;
            }
          }
        }
      }
      else {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          iVar24 = 0x100 - uVar18;
          uVar17 = uVar17 & 0xff;
          *(uint *)(lVar31 + uVar32) =
               uVar17 * (uVar20 & 0xff00) + iVar24 * (*(uint *)(lVar31 + uVar32) & 0xff00) >> 8 &
               0xff00 | uVar17 * (uVar20 & 0xff00ff) +
                        iVar24 * (*(uint *)(lVar31 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
        }
        uVar32 = -(uVar39 >> 0x21 & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2;
LAB_0512b6c8:
        iVar27 = iVar27 + -1;
        if (iVar27 != 0) {
          while( true ) {
            uVar12 = uVar12 + (uint)(int)((dVar38 / dVar37) * 65536.0);
            if (0xffff < uVar12) {
              uVar12 = uVar12 & 0xffff;
              puVar15 = (uint *)((long)puVar15 + uVar32);
              iVar25 = iVar25 + 1;
            }
            puVar15 = (uint *)((long)puVar15 +
                              (-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
            uVar26 = uVar12 >> 8;
            uVar17 = (uint)(uVar12 >> 8);
            uVar18 = ~uVar17 & 0xff;
            iVar24 = 0x100 - uVar18;
            uVar23 = ~uVar17 & 0xff;
            if (uVar23 != 0) {
              *puVar15 = uVar18 * (uVar20 & 0xff00) + iVar24 * (*puVar15 & 0xff00) >> 8 & 0xff00 |
                         uVar23 * (uVar20 & 0xff00ff) + iVar24 * (*puVar15 & 0xff00ff) >> 8 &
                         0xff00ff;
            }
            if (*(int *)(this + 0x3c) + -1 <= iVar25) break;
            if (uVar26 == 0) break;
            iVar27 = iVar27 + -1;
            *(uint *)((long)puVar15 + uVar32) =
                 (uVar20 & 0xff00) * uVar17 +
                 (*(uint *)((long)puVar15 + uVar32) & 0xff00) * (0x100 - uVar17) >> 8 & 0xff00 |
                 (uVar20 & 0xff00ff) * uVar17 +
                 (0x100 - uVar17) * (*(uint *)((long)puVar15 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
            if (iVar27 == 0) goto LAB_0512b78c;
          }
          goto LAB_0512b6c8;
        }
      }
LAB_0512b78c:
      uVar17 = iVar30 + iVar28 * iVar11;
      uVar34 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
      uVar17 = *(uint *)(lVar31 + uVar34);
      uVar18 = ~(uint)uVar26 & 0xff;
      if (uVar18 != 0) {
        iVar25 = 0x100 - uVar18;
        uVar18 = ~(uint)uVar26 & 0xff;
        *(uint *)(lVar31 + uVar34) =
             uVar18 * (uVar20 & 0xff00) + iVar25 * (uVar17 & 0xff00) >> 8 & 0xff00 |
             uVar18 * (uVar20 & 0xff00ff) + iVar25 * (uVar17 & 0xff00ff) >> 8 & 0xff00ff;
      }
    }
    else {
      uVar39 = *(ulong *)(this + 0x118);
      uVar21 = uVar39 >> 2;
      iVar5 = (int)uVar21;
      uVar17 = iVar24 + iVar25 * iVar5;
      uVar32 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2;
      puVar15 = (uint *)(lVar31 + uVar32);
      uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                               (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
      uVar12 = (ulong)uVar17;
      if (iVar27 < iVar29) {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8) & 0xff;
        iVar25 = (int)(uVar17 + iVar11 * uVar17) >> 8;
        if (iVar25 != 0) {
          *(uint *)(lVar31 + uVar32) =
               iVar25 * (uVar20 & 0xff00) + (0x100 - iVar25) * (*(uint *)(lVar31 + uVar32) & 0xff00)
               >> 8 & 0xff00 |
               iVar25 * (uVar20 & 0xff00ff) +
               (0x100 - iVar25) * (*(uint *)(lVar31 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
          iVar11 = *(int *)(param_5 + 0xc);
        }
        uVar34 = -(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2;
        iVar11 = iVar11 + 1;
        while( true ) {
          uVar17 = (uint)uVar26;
          iVar29 = iVar29 + -1;
          uVar12 = uVar12 + (uint)(int)((dVar37 / dVar38) * 65536.0);
          if (iVar29 == 0) break;
          if (0xffff < uVar12) {
            uVar12 = uVar12 & 0xffff;
            puVar15 = (uint *)((long)puVar15 + uVar34);
            iVar24 = iVar24 + iVar33;
          }
          uVar26 = uVar12 >> 8;
          puVar15 = (uint *)((long)puVar15 +
                            (-(uVar39 >> 0x21 & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2
                            ));
          uVar17 = (uint)(uVar12 >> 8);
          iVar25 = (int)((~uVar17 & 0xff) * iVar11) >> 8;
          if (iVar25 != 0) {
            *puVar15 = iVar25 * (uVar20 & 0xff00) + (0x100 - iVar25) * (*puVar15 & 0xff00) >> 8 &
                       0xff00 | iVar25 * (uVar20 & 0xff00ff) +
                                (0x100 - iVar25) * (*puVar15 & 0xff00ff) >> 8 & 0xff00ff;
            iVar11 = *(int *)(param_5 + 0xc) + 1;
          }
          if (iVar24 < iVar5 + -1) {
            iVar25 = (int)(iVar11 * uVar17) >> 8;
            if (iVar25 != 0) {
              *(uint *)((long)puVar15 + uVar34) =
                   iVar25 * (uVar20 & 0xff00) +
                   (0x100 - iVar25) * (*(uint *)((long)puVar15 + uVar34) & 0xff00) >> 8 & 0xff00 |
                   iVar25 * (uVar20 & 0xff00ff) +
                   (0x100 - iVar25) * (*(uint *)((long)puVar15 + uVar34) & 0xff00ff) >> 8 & 0xff00ff
              ;
              iVar11 = *(int *)(param_5 + 0xc) + 1;
            }
          }
        }
      }
      else {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8) & 0xff;
        iVar24 = (int)(uVar17 + iVar11 * uVar17) >> 8;
        if (iVar24 != 0) {
          *(uint *)(lVar31 + uVar32) =
               iVar24 * (uVar20 & 0xff00) + (0x100 - iVar24) * (*(uint *)(lVar31 + uVar32) & 0xff00)
               >> 8 & 0xff00 |
               iVar24 * (uVar20 & 0xff00ff) +
               (0x100 - iVar24) * (*(uint *)(lVar31 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
          iVar11 = *(int *)(param_5 + 0xc);
        }
        uVar32 = -(uVar39 >> 0x21 & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2;
        iVar11 = iVar11 + 1;
LAB_0512b490:
        uVar17 = (uint)uVar26;
        iVar27 = iVar27 + -1;
        if (iVar27 != 0) {
          while( true ) {
            uVar12 = uVar12 + (uint)(int)((dVar38 / dVar37) * 65536.0);
            if (0xffff < uVar12) {
              uVar12 = uVar12 & 0xffff;
              puVar15 = (uint *)((long)puVar15 + uVar32);
              iVar25 = iVar25 + 1;
            }
            uVar26 = uVar12 >> 8;
            uVar17 = (uint)(uVar12 >> 8);
            puVar15 = (uint *)((long)puVar15 +
                              (-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
            iVar24 = (int)((~uVar17 & 0xff) * iVar11) >> 8;
            if (iVar24 != 0) {
              *puVar15 = iVar24 * (uVar20 & 0xff00) + (0x100 - iVar24) * (*puVar15 & 0xff00) >> 8 &
                         0xff00 | iVar24 * (uVar20 & 0xff00ff) +
                                  (0x100 - iVar24) * (*puVar15 & 0xff00ff) >> 8 & 0xff00ff;
              iVar11 = *(int *)(param_5 + 0xc) + 1;
            }
            iVar24 = (int)(iVar11 * uVar17) >> 8;
            if (*(int *)(this + 0x3c) + -1 <= iVar25) break;
            if (iVar24 == 0) break;
            iVar27 = iVar27 + -1;
            *(uint *)((long)puVar15 + uVar32) =
                 iVar24 * (uVar20 & 0xff00) +
                 (0x100 - iVar24) * (*(uint *)((long)puVar15 + uVar32) & 0xff00) >> 8 & 0xff00 |
                 iVar24 * (uVar20 & 0xff00ff) +
                 (0x100 - iVar24) * (*(uint *)((long)puVar15 + uVar32) & 0xff00ff) >> 8 & 0xff00ff;
            iVar11 = *(int *)(param_5 + 0xc) + 1;
            if (iVar27 == 0) goto LAB_0512b574;
          }
          goto LAB_0512b490;
        }
      }
LAB_0512b574:
      uVar18 = iVar30 + iVar28 * iVar5;
      uVar34 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2;
      iVar25 = (int)((~uVar17 & 0xff) * iVar11) >> 8;
      uVar17 = *(uint *)(lVar31 + uVar34);
      if (iVar25 != 0) {
        *(uint *)(lVar31 + uVar34) =
             iVar25 * (uVar20 & 0xff00) + (0x100 - iVar25) * (uVar17 & 0xff00) >> 8 & 0xff00 |
             iVar25 * (uVar20 & 0xff00ff) + (0x100 - iVar25) * (uVar17 & 0xff00ff) >> 8 & 0xff00ff;
      }
    }
    goto LAB_0512b35c;
  }
  if (*(int *)(this + 0x134) != 0x10) goto LAB_0512b35c;
  lVar31 = *(long *)(this + 0x120);
  if (uVar18 == 0x3e0) {
    iVar11 = *(int *)(param_5 + 0xc);
    uVar12 = *(ulong *)(this + 0x118);
    uVar32 = uVar12 >> 1;
    iVar5 = (int)uVar32;
    if (iVar11 == 0xff) {
      uVar17 = iVar24 + iVar25 * iVar5;
      uVar21 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      psVar22 = (short *)(lVar31 + uVar21);
      uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                               (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
      uVar39 = (ulong)uVar17;
      if (iVar27 < iVar29) {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          uVar23 = ((int)(uVar17 & 0xff) >> 3) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f) >> 5 &
                   0x3e07c1f;
          uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21)
                                  ) & 0x3e07c1f) * ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x3e07c1f;
          *(ushort *)(lVar31 + uVar21) =
               ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
               ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
        }
        uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
        uVar17 = (uVar20 << 0x10 | uVar20) & 0x3e07c1f;
        while( true ) {
          uVar18 = (uint)uVar26;
          iVar29 = iVar29 + -1;
          uVar39 = uVar39 + (uint)(int)((dVar37 / dVar38) * 65536.0);
          if (iVar29 == 0) break;
          if (0xffff < uVar39) {
            uVar39 = uVar39 & 0xffff;
            psVar22 = (short *)((long)psVar22 + uVar34);
            iVar24 = iVar24 + iVar33;
          }
          psVar22 = (short *)((long)psVar22 +
                             (-(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 |
                             (uVar32 & 0xffffffff) << 1));
          uVar26 = uVar39 >> 8;
          uVar18 = (uint)(uVar39 >> 8);
          uVar23 = ~uVar18 & 0xff;
          if ((~uVar18 & 0xff) != 0) {
            uVar14 = ((int)uVar23 >> 3) * uVar17 >> 5 & 0x3e07c1f;
            uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x3e07c1f) * ((int)(0x100 - uVar23) >> 3))
                     >> 5 & 0x3e07c1f;
            *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                       ((ushort)uVar14 | (ushort)(uVar14 >> 0x10));
          }
          if (iVar24 < iVar5 + -1) {
            if (uVar26 != 0) {
              uVar23 = uVar17 * ((int)uVar18 >> 3) >> 5 & 0x3e07c1f;
              uVar18 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar34),
                                       *(undefined2 *)((long)psVar22 + uVar34)) & 0x3e07c1f) *
                            ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x3e07c1f;
              *(ushort *)((long)psVar22 + uVar34) =
                   ((ushort)uVar18 | (ushort)(uVar18 >> 0x10)) +
                   ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
            }
          }
        }
      }
      else {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          uVar23 = ((int)(uVar17 & 0xff) >> 3) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f) >> 5 &
                   0x3e07c1f;
          uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21)
                                  ) & 0x3e07c1f) * ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x3e07c1f;
          *(ushort *)(lVar31 + uVar21) =
               ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
               ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
        }
        uVar12 = -(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1;
        uVar17 = (uVar20 << 0x10 | uVar20) & 0x3e07c1f;
        while( true ) {
          uVar18 = (uint)uVar26;
          iVar27 = iVar27 + -1;
          uVar39 = uVar39 + (uint)(int)((dVar38 / dVar37) * 65536.0);
          if (iVar27 == 0) break;
          if (0xffff < uVar39) {
            uVar39 = uVar39 & 0xffff;
            psVar22 = (short *)((long)psVar22 + uVar12);
            iVar25 = iVar25 + 1;
          }
          psVar22 = (short *)((long)psVar22 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1)
                             );
          uVar26 = uVar39 >> 8;
          uVar18 = (uint)(uVar39 >> 8);
          uVar23 = ~uVar18 & 0xff;
          if ((~uVar18 & 0xff) != 0) {
            uVar14 = ((int)uVar23 >> 3) * uVar17 >> 5 & 0x3e07c1f;
            uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x3e07c1f) * ((int)(0x100 - uVar23) >> 3))
                     >> 5 & 0x3e07c1f;
            *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                       ((ushort)uVar14 | (ushort)(uVar14 >> 0x10));
          }
          if (iVar25 < *(int *)(this + 0x3c) + -1) {
            if (uVar26 != 0) {
              uVar23 = uVar17 * ((int)uVar18 >> 3) >> 5 & 0x3e07c1f;
              uVar18 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar12),
                                       *(undefined2 *)((long)psVar22 + uVar12)) & 0x3e07c1f) *
                            ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x3e07c1f;
              *(ushort *)((long)psVar22 + uVar12) =
                   ((ushort)uVar18 | (ushort)(uVar18 >> 0x10)) +
                   ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
            }
          }
        }
      }
      uVar17 = iVar30 + iVar28 * iVar5;
      uVar34 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      uVar17 = ~uVar18 & 0xff;
      if (uVar17 == 0) goto LAB_0512b35c;
      uVar23 = 0x3e07c1f;
      uVar20 = ((int)uVar17 >> 3) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f);
      iVar25 = (CONCAT22(*(undefined2 *)(lVar31 + uVar34),*(undefined2 *)(lVar31 + uVar34)) &
               0x3e07c1f) * ((int)(0x100 - (~uVar18 & 0xff)) >> 3);
      uVar17 = 0x3e07c1f;
LAB_0512ca40:
      uVar23 = uVar23 & uVar20 >> 5;
      uVar17 = uVar17 & iVar25 >> 5;
      *(ushort *)(lVar31 + uVar34) =
           ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) + ((ushort)uVar23 | (ushort)(uVar23 >> 0x10))
      ;
      goto LAB_0512b35c;
    }
    uVar17 = iVar24 + iVar25 * iVar5;
    uVar21 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
    psVar22 = (short *)(lVar31 + uVar21);
    uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                             (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
    uVar39 = (ulong)uVar17;
    if (iVar27 < iVar29) {
      uVar26 = (ulong)(uVar17 >> 8);
      iVar25 = iVar11 + 1;
      iVar6 = (~(uVar17 >> 8) & 0xff) * iVar25;
      iVar27 = iVar6 >> 8;
      if (iVar27 != 0) {
        uVar18 = (iVar6 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f) >> 5 & 0x3e07c1f;
        uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21))
                       & 0x3e07c1f) * (0x100 - iVar27 >> 3)) >> 5 & 0x3e07c1f;
        *(ushort *)(lVar31 + uVar21) =
             ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
             ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
      }
      uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
      uVar17 = (uVar20 << 0x10 | uVar20) & 0x3e07c1f;
      while( true ) {
        uVar18 = (uint)uVar26;
        iVar29 = iVar29 + -1;
        uVar39 = uVar39 + (uint)(int)((dVar37 / dVar38) * 65536.0);
        if (iVar29 == 0) break;
        if (0xffff < uVar39) {
          uVar39 = uVar39 & 0xffff;
          psVar22 = (short *)((long)psVar22 + uVar34);
          iVar24 = iVar24 + iVar33;
        }
        uVar26 = uVar39 >> 8;
        psVar22 = (short *)((long)psVar22 +
                           (-(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1)
                           );
        uVar18 = (uint)(uVar39 >> 8);
        iVar3 = iVar25 * uVar18;
        iVar27 = iVar3 >> 8;
        iVar4 = iVar25 * (~uVar18 & 0xff);
        iVar6 = iVar4 >> 8;
        if (iVar6 != 0) {
          uVar18 = (iVar4 >> 0xb) * uVar17 >> 5 & 0x3e07c1f;
          uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x3e07c1f) * (0x100 - iVar6 >> 3)) >> 5 &
                   0x3e07c1f;
          *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                     ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
        }
        if (iVar24 < iVar5 + -1) {
          if (iVar27 != 0) {
            uVar18 = uVar17 * (iVar3 >> 0xb) >> 5 & 0x3e07c1f;
            uVar23 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar34),
                                     *(undefined2 *)((long)psVar22 + uVar34)) & 0x3e07c1f) *
                          (0x100 - iVar27 >> 3)) >> 5 & 0x3e07c1f;
            *(ushort *)((long)psVar22 + uVar34) =
                 ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                 ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
          }
        }
      }
    }
    else {
      uVar26 = (ulong)(uVar17 >> 8);
      iVar24 = iVar11 + 1;
      iVar33 = (~(uVar17 >> 8) & 0xff) * iVar24;
      iVar29 = iVar33 >> 8;
      if (iVar29 != 0) {
        uVar18 = (iVar33 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f) >> 5 & 0x3e07c1f;
        uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21))
                       & 0x3e07c1f) * (0x100 - iVar29 >> 3)) >> 5 & 0x3e07c1f;
        *(ushort *)(lVar31 + uVar21) =
             ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
             ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
      }
      uVar12 = -(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1;
      uVar17 = (uVar20 << 0x10 | uVar20) & 0x3e07c1f;
      while( true ) {
        uVar18 = (uint)uVar26;
        iVar27 = iVar27 + -1;
        uVar39 = uVar39 + (uint)(int)((dVar38 / dVar37) * 65536.0);
        if (iVar27 == 0) break;
        if (0xffff < uVar39) {
          uVar39 = uVar39 & 0xffff;
          psVar22 = (short *)((long)psVar22 + uVar12);
          iVar25 = iVar25 + 1;
        }
        uVar26 = uVar39 >> 8;
        psVar22 = (short *)((long)psVar22 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1));
        uVar18 = (uint)(uVar39 >> 8);
        iVar6 = iVar24 * uVar18;
        iVar29 = iVar6 >> 8;
        iVar3 = iVar24 * (~uVar18 & 0xff);
        iVar33 = iVar3 >> 8;
        if (iVar33 != 0) {
          uVar18 = (iVar3 >> 0xb) * uVar17 >> 5 & 0x3e07c1f;
          uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x3e07c1f) * (0x100 - iVar33 >> 3)) >> 5 &
                   0x3e07c1f;
          *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                     ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
        }
        if (iVar25 < *(int *)(this + 0x3c) + -1) {
          if (iVar29 != 0) {
            uVar18 = uVar17 * (iVar6 >> 0xb) >> 5 & 0x3e07c1f;
            uVar23 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar12),
                                     *(undefined2 *)((long)psVar22 + uVar12)) & 0x3e07c1f) *
                          (0x100 - iVar29 >> 3)) >> 5 & 0x3e07c1f;
            *(ushort *)((long)psVar22 + uVar12) =
                 ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                 ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
          }
        }
      }
    }
    uVar17 = iVar30 + iVar28 * iVar5;
    uVar34 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
    iVar24 = (~uVar18 & 0xff) * (iVar11 + 1);
    iVar25 = iVar24 >> 8;
    if (iVar25 == 0) goto LAB_0512b35c;
    uVar17 = 0x3e07c1f;
    uVar23 = (iVar24 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x3e07c1f);
    iVar25 = (CONCAT22(*(undefined2 *)(lVar31 + uVar34),*(undefined2 *)(lVar31 + uVar34)) &
             0x3e07c1f) * (0x100 - iVar25 >> 3);
    uVar18 = 0x3e07c1f;
  }
  else {
    if (uVar18 != 0x7e0) {
      iVar11 = *(int *)(param_5 + 0xc);
      uVar7 = (ushort)uVar23;
      uVar9 = (ushort)uVar17;
      uVar8 = (ushort)uVar18;
      if (iVar11 == 0xff) {
        uVar39 = *(ulong *)(this + 0x118) >> 1;
        uVar2 = (uint)uVar39;
        uVar14 = iVar24 + iVar25 * uVar2;
        uVar32 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
        puVar16 = (ushort *)(lVar31 + uVar32);
        uVar14 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                                 (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
        uVar12 = (ulong)uVar14;
        if (iVar27 < iVar29) {
          uVar21 = (ulong)(uVar14 >> 8);
          uVar14 = ~(uVar14 >> 8);
          uVar1 = *(ushort *)(lVar31 + uVar32);
          uVar13 = uVar14 & 0xff;
          if (uVar13 != 0) {
            iVar25 = 0x100 - uVar13;
            uVar14 = uVar14 & 0xff;
            *(ushort *)(lVar31 + uVar32) =
                 uVar8 & (ushort)(uVar14 * (uVar20 & uVar18) + iVar25 * (uVar1 & uVar18) >> 8) |
                 uVar9 & (ushort)(uVar14 * (uVar20 & uVar17) + iVar25 * (uVar1 & uVar17) >> 8) |
                 uVar7 & (ushort)(uVar14 * (uVar20 & uVar23) + iVar25 * (uVar1 & uVar23) >> 8);
          }
          uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
          while( true ) {
            iVar29 = iVar29 + -1;
            uVar12 = uVar12 + (uint)(int)((dVar37 / dVar38) * 65536.0);
            if (iVar29 == 0) break;
            if (0xffff < uVar12) {
              uVar12 = uVar12 & 0xffff;
              puVar16 = (ushort *)((long)puVar16 + uVar34);
              iVar24 = iVar24 + iVar33;
            }
            puVar16 = (ushort *)
                      ((long)puVar16 +
                      (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (uVar39 & 0xffffffff) << 1));
            uVar21 = uVar12 >> 8;
            uVar14 = (uint)(uVar12 >> 8);
            uVar1 = *puVar16;
            uVar13 = ~uVar14 & 0xff;
            iVar25 = 0x100 - uVar13;
            uVar19 = ~uVar14 & 0xff;
            if (uVar19 != 0) {
              *puVar16 = uVar8 & (ushort)(uVar13 * (uVar20 & uVar18) + iVar25 * (uVar1 & uVar18) >>
                                         8) |
                         uVar9 & (ushort)(uVar19 * (uVar20 & uVar17) + iVar25 * (uVar1 & uVar17) >>
                                         8) |
                         uVar7 & (ushort)(uVar19 * (uVar20 & uVar23) + iVar25 * (uVar1 & uVar23) >>
                                         8);
            }
            if (iVar24 < (int)(uVar2 - 1)) {
              iVar25 = 0x100 - uVar14;
              if (uVar21 != 0) {
                uVar1 = *(ushort *)((long)puVar16 + uVar34);
                *(ushort *)((long)puVar16 + uVar34) =
                     uVar8 & (ushort)((uVar20 & uVar18) * uVar14 + (uVar1 & uVar18) * iVar25 >> 8) |
                     uVar9 & (ushort)((uVar20 & uVar17) * uVar14 + (uVar1 & uVar17) * iVar25 >> 8) |
                     uVar7 & (ushort)((uVar20 & uVar23) * uVar14 + (uVar1 & uVar23) * iVar25 >> 8);
              }
            }
          }
        }
        else {
          uVar21 = (ulong)(uVar14 >> 8);
          uVar14 = ~(uVar14 >> 8);
          uVar1 = *(ushort *)(lVar31 + uVar32);
          uVar13 = uVar14 & 0xff;
          if (uVar13 != 0) {
            iVar24 = 0x100 - uVar13;
            uVar14 = uVar14 & 0xff;
            *(ushort *)(lVar31 + uVar32) =
                 uVar8 & (ushort)(uVar14 * (uVar20 & uVar18) + iVar24 * (uVar1 & uVar18) >> 8) |
                 uVar9 & (ushort)(uVar14 * (uVar20 & uVar17) + iVar24 * (uVar1 & uVar17) >> 8) |
                 uVar7 & (ushort)(uVar14 * (uVar20 & uVar23) + iVar24 * (uVar1 & uVar23) >> 8);
          }
          uVar32 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (uVar39 & 0xffffffff) << 1;
LAB_0512c4f4:
          iVar27 = iVar27 + -1;
          if (iVar27 != 0) {
            while( true ) {
              uVar12 = uVar12 + (uint)(int)((dVar38 / dVar37) * 65536.0);
              if (0xffff < uVar12) {
                uVar12 = uVar12 & 0xffff;
                puVar16 = (ushort *)((long)puVar16 + uVar32);
                iVar25 = iVar25 + 1;
              }
              puVar16 = (ushort *)
                        ((long)puVar16 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1));
              uVar21 = uVar12 >> 8;
              uVar19 = (uint)(uVar12 >> 8);
              uVar1 = *puVar16;
              uVar14 = ~uVar19 & 0xff;
              iVar24 = 0x100 - uVar14;
              uVar13 = ~uVar19 & 0xff;
              if (uVar13 != 0) {
                *puVar16 = uVar8 & (ushort)(uVar14 * (uVar20 & uVar18) + iVar24 * (uVar1 & uVar18)
                                           >> 8) |
                           uVar9 & (ushort)(uVar13 * (uVar20 & uVar17) + iVar24 * (uVar1 & uVar17)
                                           >> 8) |
                           uVar7 & (ushort)(uVar13 * (uVar20 & uVar23) + iVar24 * (uVar1 & uVar23)
                                           >> 8);
              }
              if (*(int *)(this + 0x3c) + -1 <= iVar25) break;
              iVar24 = 0x100 - uVar19;
              uVar1 = *(ushort *)((long)puVar16 + uVar32);
              if (uVar21 == 0) break;
              iVar27 = iVar27 + -1;
              *(ushort *)((long)puVar16 + uVar32) =
                   uVar8 & (ushort)((uVar20 & uVar18) * uVar19 + (uVar1 & uVar18) * iVar24 >> 8) |
                   uVar9 & (ushort)((uVar20 & uVar17) * uVar19 + (uVar1 & uVar17) * iVar24 >> 8) |
                   uVar7 & (ushort)((uVar20 & uVar23) * uVar19 + (uVar1 & uVar23) * iVar24 >> 8);
              if (iVar27 == 0) goto LAB_0512c5d0;
            }
            goto LAB_0512c4f4;
          }
        }
LAB_0512c5d0:
        uVar14 = iVar30 + iVar28 * uVar2;
        uVar34 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
        uVar1 = *(ushort *)(lVar31 + uVar34);
        uVar14 = ~(uint)uVar21 & 0xff;
        if (uVar14 != 0) {
          iVar25 = 0x100 - uVar14;
          uVar14 = ~(uint)uVar21 & 0xff;
          *(ushort *)(lVar31 + uVar34) =
               uVar8 & (ushort)(uVar14 * (uVar20 & uVar18) + iVar25 * (uVar1 & uVar18) >> 8) |
               uVar9 & (ushort)(uVar14 * (uVar20 & uVar17) + iVar25 * (uVar1 & uVar17) >> 8) |
               uVar7 & (ushort)(uVar14 * (uVar20 & uVar23) + iVar25 * (uVar1 & uVar23) >> 8);
        }
      }
      else {
        uVar39 = *(ulong *)(this + 0x118) >> 1;
        uVar2 = (uint)uVar39;
        uVar14 = iVar24 + iVar25 * uVar2;
        uVar32 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
        puVar16 = (ushort *)(lVar31 + uVar32);
        uVar14 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                                 (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
        uVar12 = (ulong)uVar14;
        if (iVar27 < iVar29) {
          uVar21 = (ulong)(uVar14 >> 8);
          iVar25 = iVar11 + 1;
          uVar1 = *(ushort *)(lVar31 + uVar32);
          iVar27 = (int)((~(uVar14 >> 8) & 0xff) * iVar25) >> 8;
          if (iVar27 != 0) {
            iVar5 = 0x100 - iVar27;
            *(ushort *)(lVar31 + uVar32) =
                 uVar8 & (ushort)(iVar27 * (uVar20 & uVar18) + iVar5 * (uVar1 & uVar18) >> 8) |
                 uVar9 & (ushort)(iVar27 * (uVar20 & uVar17) + iVar5 * (uVar1 & uVar17) >> 8) |
                 uVar7 & (ushort)(iVar27 * (uVar20 & uVar23) + iVar5 * (uVar1 & uVar23) >> 8);
          }
          uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
          while( true ) {
            uVar14 = (uint)uVar21;
            iVar29 = iVar29 + -1;
            uVar12 = uVar12 + (uint)(int)((dVar37 / dVar38) * 65536.0);
            if (iVar29 == 0) break;
            if (0xffff < uVar12) {
              uVar12 = uVar12 & 0xffff;
              puVar16 = (ushort *)((long)puVar16 + uVar34);
              iVar24 = iVar24 + iVar33;
            }
            uVar21 = uVar12 >> 8;
            puVar16 = (ushort *)
                      ((long)puVar16 +
                      (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (uVar39 & 0xffffffff) << 1));
            uVar14 = (uint)(uVar12 >> 8);
            uVar1 = *puVar16;
            iVar27 = (int)(iVar25 * uVar14) >> 8;
            iVar5 = (int)(iVar25 * (~uVar14 & 0xff)) >> 8;
            iVar6 = 0x100 - iVar5;
            if (iVar5 != 0) {
              *puVar16 = uVar8 & (ushort)(iVar5 * (uVar20 & uVar18) + iVar6 * (uVar1 & uVar18) >> 8)
                         | uVar9 & (ushort)(iVar5 * (uVar20 & uVar17) + iVar6 * (uVar1 & uVar17) >>
                                           8) |
                         uVar7 & (ushort)(iVar5 * (uVar20 & uVar23) + iVar6 * (uVar1 & uVar23) >> 8)
              ;
            }
            if (iVar24 < (int)(uVar2 - 1)) {
              iVar5 = 0x100 - iVar27;
              if (iVar27 != 0) {
                uVar1 = *(ushort *)((long)puVar16 + uVar34);
                *(ushort *)((long)puVar16 + uVar34) =
                     uVar8 & (ushort)(iVar27 * (uVar20 & uVar18) + iVar5 * (uVar1 & uVar18) >> 8) |
                     uVar9 & (ushort)(iVar27 * (uVar20 & uVar17) + iVar5 * (uVar1 & uVar17) >> 8) |
                     uVar7 & (ushort)(iVar27 * (uVar20 & uVar23) + iVar5 * (uVar1 & uVar23) >> 8);
              }
            }
          }
        }
        else {
          uVar21 = (ulong)(uVar14 >> 8);
          iVar24 = iVar11 + 1;
          uVar1 = *(ushort *)(lVar31 + uVar32);
          iVar29 = (int)((~(uVar14 >> 8) & 0xff) * iVar24) >> 8;
          if (iVar29 != 0) {
            iVar33 = 0x100 - iVar29;
            *(ushort *)(lVar31 + uVar32) =
                 uVar8 & (ushort)(iVar29 * (uVar20 & uVar18) + iVar33 * (uVar1 & uVar18) >> 8) |
                 uVar9 & (ushort)(iVar29 * (uVar20 & uVar17) + iVar33 * (uVar1 & uVar17) >> 8) |
                 uVar7 & (ushort)(iVar29 * (uVar20 & uVar23) + iVar33 * (uVar1 & uVar23) >> 8);
          }
          uVar32 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (uVar39 & 0xffffffff) << 1;
LAB_0512b918:
          uVar14 = (uint)uVar21;
          iVar27 = iVar27 + -1;
          if (iVar27 != 0) {
            while( true ) {
              uVar12 = uVar12 + (uint)(int)((dVar38 / dVar37) * 65536.0);
              if (0xffff < uVar12) {
                uVar12 = uVar12 & 0xffff;
                puVar16 = (ushort *)((long)puVar16 + uVar32);
                iVar25 = iVar25 + 1;
              }
              uVar21 = uVar12 >> 8;
              uVar14 = (uint)(uVar12 >> 8);
              puVar16 = (ushort *)
                        ((long)puVar16 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1));
              uVar1 = *puVar16;
              iVar29 = (int)(iVar24 * uVar14) >> 8;
              iVar33 = (int)(iVar24 * (~uVar14 & 0xff)) >> 8;
              iVar5 = 0x100 - iVar33;
              if (iVar33 != 0) {
                *puVar16 = uVar8 & (ushort)(iVar33 * (uVar20 & uVar18) + iVar5 * (uVar1 & uVar18) >>
                                           8) |
                           uVar9 & (ushort)(iVar33 * (uVar20 & uVar17) + iVar5 * (uVar1 & uVar17) >>
                                           8) |
                           uVar7 & (ushort)(iVar33 * (uVar20 & uVar23) + iVar5 * (uVar1 & uVar23) >>
                                           8);
              }
              if (*(int *)(this + 0x3c) + -1 <= iVar25) break;
              iVar33 = 0x100 - iVar29;
              uVar1 = *(ushort *)((long)puVar16 + uVar32);
              if (iVar29 == 0) break;
              iVar27 = iVar27 + -1;
              *(ushort *)((long)puVar16 + uVar32) =
                   uVar8 & (ushort)(iVar29 * (uVar20 & uVar18) + iVar33 * (uVar1 & uVar18) >> 8) |
                   uVar9 & (ushort)(iVar29 * (uVar20 & uVar17) + iVar33 * (uVar1 & uVar17) >> 8) |
                   uVar7 & (ushort)(iVar29 * (uVar20 & uVar23) + iVar33 * (uVar1 & uVar23) >> 8);
              if (iVar27 == 0) goto LAB_0512ba04;
            }
            goto LAB_0512b918;
          }
        }
LAB_0512ba04:
        uVar2 = iVar30 + iVar28 * uVar2;
        uVar34 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
        iVar25 = (int)((~uVar14 & 0xff) * (iVar11 + 1)) >> 8;
        uVar1 = *(ushort *)(lVar31 + uVar34);
        if (iVar25 != 0) {
          iVar24 = 0x100 - iVar25;
          *(ushort *)(lVar31 + uVar34) =
               uVar8 & (ushort)(iVar25 * (uVar20 & uVar18) + iVar24 * (uVar1 & uVar18) >> 8) |
               uVar9 & (ushort)(iVar25 * (uVar20 & uVar17) + iVar24 * (uVar1 & uVar17) >> 8) |
               uVar7 & (ushort)(iVar25 * (uVar20 & uVar23) + iVar24 * (uVar1 & uVar23) >> 8);
        }
      }
      goto LAB_0512b35c;
    }
    iVar11 = *(int *)(param_5 + 0xc);
    uVar12 = *(ulong *)(this + 0x118);
    uVar32 = uVar12 >> 1;
    iVar5 = (int)uVar32;
    if (iVar11 == 0xff) {
      uVar17 = iVar24 + iVar25 * iVar5;
      uVar21 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      psVar22 = (short *)(lVar31 + uVar21);
      uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                               (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
      uVar39 = (ulong)uVar17;
      if (iVar27 < iVar29) {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          uVar23 = ((int)(uVar17 & 0xff) >> 3) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f) >> 5 &
                   0x7e0f81f;
          uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21)
                                  ) & 0x7e0f81f) * ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x7e0f81f;
          *(ushort *)(lVar31 + uVar21) =
               ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
               ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
        }
        uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
        uVar17 = (uVar20 << 0x10 | uVar20) & 0x7e0f81f;
        while( true ) {
          uVar18 = (uint)uVar26;
          iVar29 = iVar29 + -1;
          uVar39 = uVar39 + (uint)(int)((dVar37 / dVar38) * 65536.0);
          if (iVar29 == 0) break;
          if (0xffff < uVar39) {
            uVar39 = uVar39 & 0xffff;
            psVar22 = (short *)((long)psVar22 + uVar34);
            iVar24 = iVar24 + iVar33;
          }
          psVar22 = (short *)((long)psVar22 +
                             (-(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 |
                             (uVar32 & 0xffffffff) << 1));
          uVar26 = uVar39 >> 8;
          uVar18 = (uint)(uVar39 >> 8);
          uVar23 = ~uVar18 & 0xff;
          if ((~uVar18 & 0xff) != 0) {
            uVar14 = ((int)uVar23 >> 3) * uVar17 >> 5 & 0x7e0f81f;
            uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x7e0f81f) * ((int)(0x100 - uVar23) >> 3))
                     >> 5 & 0x7e0f81f;
            *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                       ((ushort)uVar14 | (ushort)(uVar14 >> 0x10));
          }
          if (iVar24 < iVar5 + -1) {
            if (uVar26 != 0) {
              uVar23 = uVar17 * ((int)uVar18 >> 3) >> 5 & 0x7e0f81f;
              uVar18 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar34),
                                       *(undefined2 *)((long)psVar22 + uVar34)) & 0x7e0f81f) *
                            ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x7e0f81f;
              *(ushort *)((long)psVar22 + uVar34) =
                   ((ushort)uVar18 | (ushort)(uVar18 >> 0x10)) +
                   ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
            }
          }
        }
      }
      else {
        uVar26 = (ulong)(uVar17 >> 8);
        uVar17 = ~(uVar17 >> 8);
        uVar18 = uVar17 & 0xff;
        if (uVar18 != 0) {
          uVar23 = ((int)(uVar17 & 0xff) >> 3) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f) >> 5 &
                   0x7e0f81f;
          uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21)
                                  ) & 0x7e0f81f) * ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x7e0f81f;
          *(ushort *)(lVar31 + uVar21) =
               ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
               ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
        }
        uVar12 = -(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1;
        uVar17 = (uVar20 << 0x10 | uVar20) & 0x7e0f81f;
        while( true ) {
          uVar18 = (uint)uVar26;
          iVar27 = iVar27 + -1;
          uVar39 = uVar39 + (uint)(int)((dVar38 / dVar37) * 65536.0);
          if (iVar27 == 0) break;
          if (0xffff < uVar39) {
            uVar39 = uVar39 & 0xffff;
            psVar22 = (short *)((long)psVar22 + uVar12);
            iVar25 = iVar25 + 1;
          }
          psVar22 = (short *)((long)psVar22 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1)
                             );
          uVar26 = uVar39 >> 8;
          uVar18 = (uint)(uVar39 >> 8);
          uVar23 = ~uVar18 & 0xff;
          if ((~uVar18 & 0xff) != 0) {
            uVar14 = ((int)uVar23 >> 3) * uVar17 >> 5 & 0x7e0f81f;
            uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x7e0f81f) * ((int)(0x100 - uVar23) >> 3))
                     >> 5 & 0x7e0f81f;
            *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                       ((ushort)uVar14 | (ushort)(uVar14 >> 0x10));
          }
          if (iVar25 < *(int *)(this + 0x3c) + -1) {
            if (uVar26 != 0) {
              uVar23 = uVar17 * ((int)uVar18 >> 3) >> 5 & 0x7e0f81f;
              uVar18 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar12),
                                       *(undefined2 *)((long)psVar22 + uVar12)) & 0x7e0f81f) *
                            ((int)(0x100 - uVar18) >> 3)) >> 5 & 0x7e0f81f;
              *(ushort *)((long)psVar22 + uVar12) =
                   ((ushort)uVar18 | (ushort)(uVar18 >> 0x10)) +
                   ((ushort)uVar23 | (ushort)(uVar23 >> 0x10));
            }
          }
        }
      }
      uVar17 = iVar30 + iVar28 * iVar5;
      uVar34 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
      uVar17 = ~uVar18 & 0xff;
      if (uVar17 == 0) goto LAB_0512b35c;
      uVar23 = 0x7e0f81f;
      uVar20 = ((int)uVar17 >> 3) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f);
      iVar25 = (CONCAT22(*(undefined2 *)(lVar31 + uVar34),*(undefined2 *)(lVar31 + uVar34)) &
               0x7e0f81f) * ((int)(0x100 - (~uVar18 & 0xff)) >> 3);
      uVar17 = 0x7e0f81f;
      goto LAB_0512ca40;
    }
    uVar17 = iVar24 + iVar25 * iVar5;
    uVar21 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
    psVar22 = (short *)(lVar31 + uVar21);
    uVar17 = 0x10000 - (int)((1.0 - ABS((float)(dVar35 - (double)iVar24))) *
                             (1.0 - ABS((float)(dVar36 - (double)iVar25))) * 65536.0);
    uVar39 = (ulong)uVar17;
    if (iVar27 < iVar29) {
      uVar26 = (ulong)(uVar17 >> 8);
      iVar25 = iVar11 + 1;
      iVar6 = (~(uVar17 >> 8) & 0xff) * iVar25;
      iVar27 = iVar6 >> 8;
      if (iVar27 != 0) {
        uVar18 = (iVar6 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f) >> 5 & 0x7e0f81f;
        uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21))
                       & 0x7e0f81f) * (0x100 - iVar27 >> 3)) >> 5 & 0x7e0f81f;
        *(ushort *)(lVar31 + uVar21) =
             ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
             ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
      }
      uVar34 = -(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1;
      uVar17 = (uVar20 << 0x10 | uVar20) & 0x7e0f81f;
      while( true ) {
        uVar18 = (uint)uVar26;
        iVar29 = iVar29 + -1;
        uVar39 = uVar39 + (uint)(int)((dVar37 / dVar38) * 65536.0);
        if (iVar29 == 0) break;
        if (0xffff < uVar39) {
          uVar39 = uVar39 & 0xffff;
          psVar22 = (short *)((long)psVar22 + uVar34);
          iVar24 = iVar24 + iVar33;
        }
        uVar26 = uVar39 >> 8;
        psVar22 = (short *)((long)psVar22 +
                           (-(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1)
                           );
        uVar18 = (uint)(uVar39 >> 8);
        iVar3 = iVar25 * uVar18;
        iVar27 = iVar3 >> 8;
        iVar4 = iVar25 * (~uVar18 & 0xff);
        iVar6 = iVar4 >> 8;
        if (iVar6 != 0) {
          uVar18 = (iVar4 >> 0xb) * uVar17 >> 5 & 0x7e0f81f;
          uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x7e0f81f) * (0x100 - iVar6 >> 3)) >> 5 &
                   0x7e0f81f;
          *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                     ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
        }
        if (iVar24 < iVar5 + -1) {
          if (iVar27 != 0) {
            uVar18 = uVar17 * (iVar3 >> 0xb) >> 5 & 0x7e0f81f;
            uVar23 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar34),
                                     *(undefined2 *)((long)psVar22 + uVar34)) & 0x7e0f81f) *
                          (0x100 - iVar27 >> 3)) >> 5 & 0x7e0f81f;
            *(ushort *)((long)psVar22 + uVar34) =
                 ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                 ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
          }
        }
      }
    }
    else {
      uVar26 = (ulong)(uVar17 >> 8);
      iVar24 = iVar11 + 1;
      iVar33 = (~(uVar17 >> 8) & 0xff) * iVar24;
      iVar29 = iVar33 >> 8;
      if (iVar29 != 0) {
        uVar18 = (iVar33 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f) >> 5 & 0x7e0f81f;
        uVar17 = (int)((CONCAT22(*(undefined2 *)(lVar31 + uVar21),*(undefined2 *)(lVar31 + uVar21))
                       & 0x7e0f81f) * (0x100 - iVar29 >> 3)) >> 5 & 0x7e0f81f;
        *(ushort *)(lVar31 + uVar21) =
             ((ushort)uVar17 | (ushort)(uVar17 >> 0x10)) +
             ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
      }
      uVar12 = -(uVar12 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1;
      uVar17 = (uVar20 << 0x10 | uVar20) & 0x7e0f81f;
      while( true ) {
        uVar18 = (uint)uVar26;
        iVar27 = iVar27 + -1;
        uVar39 = uVar39 + (uint)(int)((dVar38 / dVar37) * 65536.0);
        if (iVar27 == 0) break;
        if (0xffff < uVar39) {
          uVar39 = uVar39 & 0xffff;
          psVar22 = (short *)((long)psVar22 + uVar12);
          iVar25 = iVar25 + 1;
        }
        uVar26 = uVar39 >> 8;
        psVar22 = (short *)((long)psVar22 + (-(uVar34 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1));
        uVar18 = (uint)(uVar39 >> 8);
        iVar6 = iVar24 * uVar18;
        iVar29 = iVar6 >> 8;
        iVar3 = iVar24 * (~uVar18 & 0xff);
        iVar33 = iVar3 >> 8;
        if (iVar33 != 0) {
          uVar18 = (iVar3 >> 0xb) * uVar17 >> 5 & 0x7e0f81f;
          uVar23 = (int)((CONCAT22(*psVar22,*psVar22) & 0x7e0f81f) * (0x100 - iVar33 >> 3)) >> 5 &
                   0x7e0f81f;
          *psVar22 = ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                     ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
        }
        if (iVar25 < *(int *)(this + 0x3c) + -1) {
          if (iVar29 != 0) {
            uVar18 = uVar17 * (iVar6 >> 0xb) >> 5 & 0x7e0f81f;
            uVar23 = (int)((CONCAT22(*(undefined2 *)((long)psVar22 + uVar12),
                                     *(undefined2 *)((long)psVar22 + uVar12)) & 0x7e0f81f) *
                          (0x100 - iVar29 >> 3)) >> 5 & 0x7e0f81f;
            *(ushort *)((long)psVar22 + uVar12) =
                 ((ushort)uVar23 | (ushort)(uVar23 >> 0x10)) +
                 ((ushort)uVar18 | (ushort)(uVar18 >> 0x10));
          }
        }
      }
    }
    uVar17 = iVar30 + iVar28 * iVar5;
    uVar34 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar17 << 1;
    iVar24 = (~uVar18 & 0xff) * (iVar11 + 1);
    iVar25 = iVar24 >> 8;
    if (iVar25 == 0) goto LAB_0512b35c;
    uVar23 = (iVar24 >> 0xb) * ((uVar20 << 0x10 | uVar20) & 0x7e0f81f);
    iVar25 = (CONCAT22(*(undefined2 *)(lVar31 + uVar34),*(undefined2 *)(lVar31 + uVar34)) &
             0x7e0f81f) * (0x100 - iVar25 >> 3);
    uVar17 = 0x7e0f81f;
    uVar18 = 0x7e0f81f;
  }
  uVar17 = uVar17 & uVar23 >> 5;
  uVar18 = uVar18 & iVar25 >> 5;
  *(ushort *)(lVar31 + uVar34) =
       ((ushort)uVar18 | (ushort)(uVar18 >> 0x10)) + ((ushort)uVar17 | (ushort)(uVar17 >> 0x10));
LAB_0512b35c:
  (**(code **)(*(long *)this + 0x208))(this);
  return;
}


/* Sexy::DeviceImage::NormalFillRect(Sexy::TRect<int> const&, Sexy::Color const&) */

void __thiscall Sexy::DeviceImage::NormalFillRect(DeviceImage *this,TRect *param_1,Color *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  byte bVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  byte bVar40;
  short sVar32;
  short sVar33;
  uint uVar34;
  byte bVar41;
  byte bVar42;
  undefined8 uVar39;
  byte bVar43;
  byte bVar51;
  short sVar44;
  short sVar45;
  byte bVar52;
  byte bVar53;
  undefined8 uVar50;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  uint uVar67;
  int iVar68;
  int iVar69;
  uint uVar70;
  int iVar71;
  int iVar72;
  uint uVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  uint uVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  uint uVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined6 uVar37;
  undefined6 uVar38;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined6 uVar48;
  undefined6 uVar49;
  undefined4 uVar65;
  undefined6 uVar66;
  
  if ((this[0xf9] != (DeviceImage)0x0) ||
     (cVar12 = (**(code **)(*(long *)this + 0x200))(), cVar12 == '\0')) {
    return;
  }
  uVar1 = *(uint *)(this + 0x138);
  uVar2 = *(uint *)(this + 0x13c);
  uVar3 = *(uint *)(this + 0x140);
  if (*(int *)(this + 0x134) == 0x10) {
    iVar5 = *(int *)(param_2 + 0xc);
    uVar10 = (ushort)uVar2;
    uVar11 = (ushort)uVar3;
    uVar9 = (ushort)uVar1;
    if (iVar5 == 0xff) {
      uVar19 = *(ulong *)(this + 0x118);
      iVar5 = *(int *)(param_1 + 0xc);
      uVar9 = uVar10 & (ushort)(uVar2 + uVar2 * *(int *)(param_2 + 4) >> 8) |
              uVar9 & (ushort)(uVar1 + uVar1 * *(int *)param_2 >> 8) |
              uVar11 & (ushort)(uVar3 + uVar3 * *(int *)(param_2 + 8) >> 8);
      puVar18 = (ushort *)
                (*(long *)(this + 0x120) +
                ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar19 >> 1)) * 2);
      if (0 < iVar5) {
        uVar2 = *(uint *)(param_1 + 8);
        uVar1 = (uVar2 - 8 >> 3) + 1;
        uVar3 = uVar1 * 8;
        iVar21 = 0;
        do {
          if (0 < (int)uVar2) {
            uVar14 = 0;
            puVar17 = puVar18;
            if (6 < uVar2 - 1) {
              do {
                *(ulong *)(puVar17 + 4) = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
                *(ulong *)puVar17 = CONCAT26(uVar9,CONCAT24(uVar9,CONCAT22(uVar9,uVar9)));
                uVar14 = uVar14 + 1;
                puVar17 = puVar17 + 8;
              } while (uVar14 < uVar1);
              puVar17 = puVar18 + uVar3;
              uVar14 = uVar3;
              if (uVar2 == uVar3) goto LAB_0512d840;
            }
            *puVar17 = uVar9;
            if (((((int)(uVar14 + 1) < (int)uVar2) &&
                 (puVar17[1] = uVar9, (int)(uVar14 + 2) < (int)uVar2)) &&
                (puVar17[2] = uVar9, (int)(uVar14 + 3) < (int)uVar2)) &&
               (((puVar17[3] = uVar9, (int)(uVar14 + 4) < (int)uVar2 &&
                 (puVar17[4] = uVar9, (int)(uVar14 + 5) < (int)uVar2)) &&
                (puVar17[5] = uVar9, (int)(uVar14 + 6) < (int)uVar2)))) {
              puVar17[6] = uVar9;
            }
          }
LAB_0512d840:
          iVar21 = iVar21 + 1;
          puVar18 = (ushort *)((long)puVar18 + (uVar19 & 0xfffffffffffffffe));
        } while (iVar21 != iVar5);
      }
    }
    else {
      uVar19 = *(ulong *)(this + 0x118);
      iVar21 = *(int *)(param_1 + 0xc);
      sVar8 = (uVar10 & (ushort)(uVar2 + (iVar5 * *(int *)(param_2 + 4) + 0x80 >> 8) * uVar2 >> 8))
              + (uVar9 & (ushort)(uVar1 + (iVar5 * *(int *)param_2 + 0x80 >> 8) * uVar1 >> 8)) +
              (uVar11 & (ushort)(uVar3 + (iVar5 * *(int *)(param_2 + 8) + 0x80 >> 8) * uVar3 >> 8));
      puVar18 = (ushort *)
                (*(long *)(this + 0x120) +
                ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar19 >> 1)) * 2);
      iVar5 = 0x100 - iVar5;
      if (0 < iVar21) {
        uVar4 = *(uint *)(param_1 + 8);
        bVar28 = (byte)uVar1;
        bVar29 = (byte)(uVar1 >> 8);
        uVar30 = (undefined1)(uVar1 >> 0x10);
        bVar25 = (byte)uVar2;
        bVar26 = (byte)(uVar2 >> 8);
        uVar27 = (undefined1)(uVar2 >> 0x10);
        uVar14 = (uVar4 - 8 >> 3) + 1;
        uVar7 = uVar14 * 8;
        bVar22 = (byte)uVar3;
        bVar23 = (byte)(uVar3 >> 8);
        uVar24 = (undefined1)(uVar3 >> 0x10);
        iVar20 = 0;
        do {
          if (0 < (int)uVar4) {
            if (uVar4 - 1 < 7) {
              puVar17 = puVar18;
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              puVar17 = puVar18;
              do {
                uVar50 = *(undefined8 *)(puVar17 + 4);
                uVar39 = *(undefined8 *)puVar17;
                uVar13 = uVar13 + 1;
                uVar34 = (uint)uVar50 & 0xffff;
                bVar54 = (byte)uVar39;
                bVar55 = (byte)((ulong)uVar39 >> 8);
                bVar56 = (byte)((ulong)uVar39 >> 0x10);
                uVar67 = (uint)CONCAT11(bVar55 & bVar26,bVar54 & bVar25);
                bVar57 = (byte)((ulong)uVar39 >> 0x18);
                bVar58 = (byte)((ulong)uVar39 >> 0x20);
                bVar59 = (byte)((ulong)uVar39 >> 0x28);
                bVar60 = (byte)((ulong)uVar39 >> 0x30);
                uVar70 = (uint)CONCAT11(bVar59 & bVar26,bVar58 & bVar25);
                bVar61 = (byte)((ulong)uVar39 >> 0x38);
                bVar31 = (byte)uVar34;
                bVar40 = (byte)(uVar34 >> 8);
                bVar41 = (byte)((ulong)uVar50 >> 0x10);
                uVar73 = (uint)CONCAT11(bVar40 & bVar29,bVar31 & bVar28);
                bVar42 = (byte)((ulong)uVar50 >> 0x18);
                bVar43 = (byte)((ulong)uVar50 >> 0x20);
                bVar51 = (byte)((ulong)uVar50 >> 0x28);
                bVar52 = (byte)((ulong)uVar50 >> 0x30);
                uVar77 = (uint)CONCAT11(bVar51 & bVar29,bVar43 & bVar28);
                bVar53 = (byte)((ulong)uVar50 >> 0x38);
                uVar82 = (uint)CONCAT11(bVar59 & bVar29,bVar58 & bVar28);
                uVar34 = (uint)CONCAT11(bVar51 & bVar26,bVar43 & bVar25);
                iVar87 = uVar1 + uVar73 * iVar5;
                iVar88 = (uint)(uint3)(CONCAT16(uVar30,CONCAT15(bVar29,CONCAT14(bVar28,uVar1))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar42 & bVar29,CONCAT14(bVar41 & bVar28,uVar73))
                                       >> 0x20) * iVar5;
                iVar89 = uVar1 + uVar77 * iVar5;
                iVar90 = (uint)(uint3)(CONCAT16(uVar30,CONCAT15(bVar29,CONCAT14(bVar28,uVar1))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar53 & bVar29,CONCAT14(bVar52 & bVar28,uVar77))
                                       >> 0x20) * iVar5;
                iVar83 = uVar1 + (uint)CONCAT11(bVar55 & bVar29,bVar54 & bVar28) * iVar5;
                iVar84 = (uint)(uint3)(CONCAT16(uVar30,CONCAT15(bVar29,CONCAT14(bVar28,uVar1))) >>
                                      0x20) +
                         (uint)CONCAT11(bVar57 & bVar29,bVar56 & bVar28) * iVar5;
                iVar85 = uVar1 + uVar82 * iVar5;
                iVar86 = (uint)(uint3)(CONCAT16(uVar30,CONCAT15(bVar29,CONCAT14(bVar28,uVar1))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar61 & bVar29,CONCAT14(bVar60 & bVar28,uVar82))
                                       >> 0x20) * iVar5;
                iVar74 = uVar2 + uVar67 * iVar5;
                iVar75 = (uint)(uint3)(CONCAT16(uVar27,CONCAT15(bVar26,CONCAT14(bVar25,uVar2))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar57 & bVar26,CONCAT14(bVar56 & bVar25,uVar67))
                                       >> 0x20) * iVar5;
                iVar78 = uVar2 + uVar70 * iVar5;
                iVar80 = (uint)(uint3)(CONCAT16(uVar27,CONCAT15(bVar26,CONCAT14(bVar25,uVar2))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar61 & bVar26,CONCAT14(bVar60 & bVar25,uVar70))
                                       >> 0x20) * iVar5;
                iVar68 = uVar2 + (uint)CONCAT11(bVar40 & bVar26,bVar31 & bVar25) * iVar5;
                iVar69 = (uint)(uint3)(CONCAT16(uVar27,CONCAT15(bVar26,CONCAT14(bVar25,uVar2))) >>
                                      0x20) +
                         (uint)CONCAT11(bVar42 & bVar26,bVar41 & bVar25) * iVar5;
                iVar71 = uVar2 + uVar34 * iVar5;
                iVar72 = (uint)(uint3)(CONCAT16(uVar27,CONCAT15(bVar26,CONCAT14(bVar25,uVar2))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar53 & bVar26,CONCAT14(bVar52 & bVar25,uVar34))
                                       >> 0x20) * iVar5;
                uVar34 = (uint)CONCAT11(bVar40 & bVar23,bVar31 & bVar22);
                uVar67 = (uint)CONCAT11(bVar51 & bVar23,bVar43 & bVar22);
                sVar62 = CONCAT11((byte)((uint)iVar83 >> 0x10) & bVar29,
                                  (byte)((uint)iVar83 >> 8) & bVar28);
                sVar63 = CONCAT11((byte)((uint)iVar85 >> 0x10) & bVar29,
                                  (byte)((uint)iVar85 >> 8) & bVar28);
                sVar64 = CONCAT11((byte)((uint)iVar87 >> 0x10) & bVar29,
                                  (byte)((uint)iVar87 >> 8) & bVar28);
                uVar65 = CONCAT13((byte)((uint)iVar88 >> 0x10) & bVar29,
                                  CONCAT12((byte)((uint)iVar88 >> 8) & bVar28,sVar64));
                uVar66 = CONCAT15((byte)((uint)iVar89 >> 0x10) & bVar29,
                                  CONCAT14((byte)((uint)iVar89 >> 8) & bVar28,uVar65));
                iVar83 = uVar3 + uVar34 * iVar5;
                iVar85 = (uint)(uint3)(CONCAT16(uVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar3))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar42 & bVar23,CONCAT14(bVar41 & bVar22,uVar34))
                                       >> 0x20) * iVar5;
                iVar87 = uVar3 + uVar67 * iVar5;
                iVar88 = (uint)(uint3)(CONCAT16(uVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar3))) >>
                                      0x20) +
                         (uint)(ushort)(CONCAT15(bVar53 & bVar23,CONCAT14(bVar52 & bVar22,uVar67))
                                       >> 0x20) * iVar5;
                iVar89 = uVar3 + (uint)CONCAT11(bVar55 & bVar23,bVar54 & bVar22) * iVar5;
                iVar76 = (uint)(uint3)(CONCAT16(uVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar3))) >>
                                      0x20) +
                         (uint)CONCAT11(bVar57 & bVar23,bVar56 & bVar22) * iVar5;
                iVar79 = uVar3 + (uint)CONCAT11(bVar59 & bVar23,bVar58 & bVar22) * iVar5;
                iVar81 = (uint)(uint3)(CONCAT16(uVar24,CONCAT15(bVar23,CONCAT14(bVar22,uVar3))) >>
                                      0x20) +
                         (uint)CONCAT11(bVar61 & bVar23,bVar60 & bVar22) * iVar5;
                sVar32 = CONCAT11((byte)((uint)iVar74 >> 0x10) & bVar26,
                                  (byte)((uint)iVar74 >> 8) & bVar25);
                uVar35 = CONCAT13((byte)((uint)iVar75 >> 0x10) & bVar26,
                                  CONCAT12((byte)((uint)iVar75 >> 8) & bVar25,sVar32));
                uVar37 = CONCAT15((byte)((uint)iVar78 >> 0x10) & bVar26,
                                  CONCAT14((byte)((uint)iVar78 >> 8) & bVar25,uVar35));
                sVar44 = CONCAT11((byte)((uint)iVar68 >> 0x10) & bVar26,
                                  (byte)((uint)iVar68 >> 8) & bVar25);
                uVar46 = CONCAT13((byte)((uint)iVar69 >> 0x10) & bVar26,
                                  CONCAT12((byte)((uint)iVar69 >> 8) & bVar25,sVar44));
                uVar48 = CONCAT15((byte)((uint)iVar71 >> 0x10) & bVar26,
                                  CONCAT14((byte)((uint)iVar71 >> 8) & bVar25,uVar46));
                sVar33 = CONCAT11((byte)((uint)iVar89 >> 0x10) & bVar23,
                                  (byte)((uint)iVar89 >> 8) & bVar22);
                uVar36 = CONCAT13((byte)((uint)iVar76 >> 0x10) & bVar23,
                                  CONCAT12((byte)((uint)iVar76 >> 8) & bVar22,sVar33));
                uVar38 = CONCAT15((byte)((uint)iVar79 >> 0x10) & bVar23,
                                  CONCAT14((byte)((uint)iVar79 >> 8) & bVar22,uVar36));
                sVar45 = CONCAT11((byte)((uint)iVar83 >> 0x10) & bVar23,
                                  (byte)((uint)iVar83 >> 8) & bVar22);
                uVar47 = CONCAT13((byte)((uint)iVar85 >> 0x10) & bVar23,
                                  CONCAT12((byte)((uint)iVar85 >> 8) & bVar22,sVar45));
                uVar49 = CONCAT15((byte)((uint)iVar87 >> 0x10) & bVar23,
                                  CONCAT14((byte)((uint)iVar87 >> 8) & bVar22,uVar47));
                *(ulong *)(puVar17 + 4) =
                     CONCAT26((short)(CONCAT17((byte)((uint)iVar90 >> 0x10) & bVar29,
                                               CONCAT16((byte)((uint)iVar90 >> 8) & bVar28,uVar66))
                                     >> 0x30) +
                              (short)(CONCAT17((byte)((uint)iVar72 >> 0x10) & bVar26,
                                               CONCAT16((byte)((uint)iVar72 >> 8) & bVar25,uVar48))
                                     >> 0x30) + sVar8 +
                              (short)(CONCAT17((byte)((uint)iVar88 >> 0x10) & bVar23,
                                               CONCAT16((byte)((uint)iVar88 >> 8) & bVar22,uVar49))
                                     >> 0x30),
                              CONCAT24((short)((uint6)uVar66 >> 0x20) +
                                       (short)((uint6)uVar48 >> 0x20) + sVar8 +
                                       (short)((uint6)uVar49 >> 0x20),
                                       CONCAT22((short)((uint)uVar65 >> 0x10) +
                                                (short)((uint)uVar46 >> 0x10) + sVar8 +
                                                (short)((uint)uVar47 >> 0x10),
                                                sVar64 + sVar44 + sVar8 + sVar45)));
                *(ulong *)puVar17 =
                     CONCAT26((short)(CONCAT13((byte)((uint)iVar86 >> 0x10) & bVar29,
                                               CONCAT12((byte)((uint)iVar86 >> 8) & bVar28,sVar63))
                                     >> 0x10) +
                              (short)(CONCAT17((byte)((uint)iVar80 >> 0x10) & bVar26,
                                               CONCAT16((byte)((uint)iVar80 >> 8) & bVar25,uVar37))
                                     >> 0x30) + sVar8 +
                              (short)(CONCAT17((byte)((uint)iVar81 >> 0x10) & bVar23,
                                               CONCAT16((byte)((uint)iVar81 >> 8) & bVar22,uVar38))
                                     >> 0x30),
                              CONCAT24(sVar63 + (short)((uint6)uVar37 >> 0x20) + sVar8 +
                                       (short)((uint6)uVar38 >> 0x20),
                                       CONCAT22((short)(CONCAT13((byte)((uint)iVar84 >> 0x10) &
                                                                 bVar29,CONCAT12((byte)((uint)iVar84
                                                                                       >> 8) &
                                                                                 bVar28,sVar62)) >>
                                                       0x10) + (short)((uint)uVar35 >> 0x10) + sVar8
                                                + (short)((uint)uVar36 >> 0x10),
                                                sVar62 + sVar32 + sVar8 + sVar33)));
                puVar17 = puVar17 + 8;
              } while (uVar13 < uVar14);
              puVar17 = puVar18 + uVar7;
              uVar13 = uVar7;
              if (uVar7 == uVar4) goto LAB_0512d710;
            }
            uVar6 = *puVar17;
            *puVar17 = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                               (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                       (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8));
            if ((((int)(uVar13 + 1) < (int)uVar4) &&
                (uVar6 = puVar17[1],
                puVar17[1] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                     (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                             (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8)),
                (int)(uVar13 + 2) < (int)uVar4)) &&
               ((uVar6 = puVar17[2],
                puVar17[2] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                     (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                             (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8)),
                (int)(uVar13 + 3) < (int)uVar4 &&
                (((uVar6 = puVar17[3],
                  puVar17[3] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                       (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                               (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8)),
                  (int)(uVar13 + 4) < (int)uVar4 &&
                  (uVar6 = puVar17[4],
                  puVar17[4] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                       (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                               (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8)),
                  (int)(uVar13 + 5) < (int)uVar4)) &&
                 (uVar6 = puVar17[5],
                 puVar17[5] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                      (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                              (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8)),
                 (int)(uVar13 + 6) < (int)uVar4)))))) {
              uVar6 = puVar17[6];
              puVar17[6] = sVar8 + (uVar9 & (ushort)(uVar1 + (uVar6 & uVar1) * iVar5 >> 8)) +
                                   (uVar10 & (ushort)(uVar2 + (uVar6 & uVar2) * iVar5 >> 8)) +
                           (uVar11 & (ushort)(uVar3 + (uVar6 & uVar3) * iVar5 >> 8));
            }
          }
LAB_0512d710:
          iVar20 = iVar20 + 1;
          puVar18 = (ushort *)((long)puVar18 + (uVar19 & 0xfffffffffffffffe));
        } while (iVar20 != iVar21);
      }
    }
  }
  else if (*(int *)(this + 0x134) == 0x20) {
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar5 == 0xff) {
      iVar5 = *(int *)(param_2 + 4);
      iVar21 = *(int *)param_2;
      uVar19 = *(ulong *)(this + 0x118);
      iVar20 = *(int *)(param_2 + 8);
      iVar83 = *(int *)(param_1 + 0xc);
      puVar16 = (uint *)(*(long *)(this + 0x120) +
                        ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar19 >> 2)) * 4);
      if (0 < iVar83) {
        iVar87 = *(int *)(param_1 + 8);
        iVar85 = 0;
        do {
          iVar88 = 0;
          puVar15 = puVar16;
          if (0 < iVar87) {
            do {
              *puVar15 = uVar2 & uVar2 * iVar5 >> 8 | uVar1 & uVar1 * iVar21 >> 8 |
                         uVar3 & uVar3 * iVar20 >> 8;
              iVar88 = iVar88 + 1;
              iVar87 = *(int *)(param_1 + 8);
              puVar15 = puVar15 + 1;
            } while (iVar88 < iVar87);
            iVar83 = *(int *)(param_1 + 0xc);
          }
          iVar85 = iVar85 + 1;
          puVar16 = (uint *)((long)puVar16 + (uVar19 & 0xfffffffffffffffc));
        } while (iVar85 < iVar83);
      }
    }
    else {
      iVar21 = *(int *)(param_2 + 4);
      iVar20 = *(int *)param_2;
      iVar87 = 0x100 - iVar5;
      iVar83 = *(int *)(param_2 + 8);
      uVar19 = *(ulong *)(this + 0x118);
      iVar85 = *(int *)(param_1 + 0xc);
      puVar16 = (uint *)(*(long *)(this + 0x120) +
                        ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar19 >> 2)) * 4);
      if (0 < iVar85) {
        iVar68 = *(int *)(param_1 + 8);
        iVar88 = 0;
        do {
          if (0 < iVar68) {
            iVar85 = 0;
            puVar15 = puVar16;
            do {
              uVar14 = *puVar15;
              iVar85 = iVar85 + 1;
              *puVar15 = (uVar1 & (uVar14 & uVar1) * iVar87 >> 8) +
                         (uVar2 & (uVar14 & uVar2) * iVar87 >> 8) +
                         (uVar2 & uVar2 + (iVar5 * iVar21 + 0x7f >> 8) * uVar2 >> 8) +
                         (uVar1 & uVar1 + (iVar5 * iVar20 + 0x7f >> 8) * uVar1 >> 8) +
                         (uVar3 & uVar3 + (iVar5 * iVar83 + 0x7f >> 8) * uVar3 >> 8) +
                         (uVar3 & (uVar14 & uVar3) * iVar87 >> 8);
              iVar68 = *(int *)(param_1 + 8);
              puVar15 = puVar15 + 1;
            } while (iVar85 < iVar68);
            iVar85 = *(int *)(param_1 + 0xc);
          }
          iVar88 = iVar88 + 1;
          puVar16 = (uint *)((long)puVar16 + (uVar19 & 0xfffffffffffffffc));
        } while (iVar88 < iVar85);
      }
    }
  }
  (**(code **)(*(long *)this + 0x208))(this);
  return;
}


/* Sexy::DeviceImage::AdditiveFillRect(Sexy::TRect<int> const&, Sexy::Color const&) */

void __thiscall Sexy::DeviceImage::AdditiveFillRect(DeviceImage *this,TRect *param_1,Color *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char cVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  
  if ((this[0xf9] == (DeviceImage)0x0) &&
     (cVar18 = (**(code **)(*(long *)this + 0x200))(), cVar18 != '\0')) {
    uVar1 = *(uint *)(this + 0x138);
    uVar2 = *(uint *)(this + 0x13c);
    uVar3 = *(uint *)(this + 0x140);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    uVar4 = *(uint *)(lVar20 + 0x1c);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    uVar5 = *(uint *)(lVar20 + 0x20);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    uVar6 = *(uint *)(lVar20 + 0x24);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    lVar29 = *(long *)(lVar20 + 0x28);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    lVar30 = *(long *)(lVar20 + 0x30);
    lVar20 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
    lVar20 = *(long *)(lVar20 + 0x38);
    if (*(int *)(this + 0x134) == 0x10) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar8 = *(int *)param_2;
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      iVar9 = *(int *)(lVar22 + 0x10);
      iVar10 = *(int *)(param_2 + 0xc);
      iVar11 = *(int *)(param_2 + 4);
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      iVar12 = *(int *)(lVar22 + 0x14);
      iVar13 = *(int *)(param_2 + 0xc);
      iVar14 = *(int *)(param_2 + 8);
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      iVar15 = *(int *)(lVar22 + 0x18);
      uVar28 = *(ulong *)(this + 0x118);
      iVar23 = *(int *)(param_1 + 0xc);
      lVar22 = *(long *)(this + 0x120) +
               ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar28 >> 1)) * 2;
      if (0 < iVar23) {
        iVar19 = *(int *)(param_1 + 8);
        iVar26 = 0;
        do {
          if (0 < iVar19) {
            lVar21 = 0;
            do {
              uVar17 = *(ushort *)(lVar22 + lVar21 * 2);
              *(ushort *)(lVar22 + lVar21 * 2) =
                   (ushort)(*(int *)(lVar30 + (ulong)(((uVar17 & uVar2) >> (ulong)(uVar5 & 0x1f)) +
                                                     ((iVar11 * iVar10) / 0xff >>
                                                      (8U - iVar12 & 0x1f) & 0xffffU)) * 4) <<
                           (ulong)(uVar5 & 0x1f)) |
                   (ushort)(*(int *)(lVar29 + (ulong)(((uVar17 & uVar1) >> (ulong)(uVar4 & 0x1f)) +
                                                     ((iVar8 * iVar7) / 0xff >> (8U - iVar9 & 0x1f)
                                                     & 0xffffU)) * 4) << (ulong)(uVar4 & 0x1f)) |
                   (ushort)(*(int *)(lVar20 + (ulong)(((uVar17 & uVar3) >> (ulong)(uVar6 & 0x1f)) +
                                                     ((iVar14 * iVar13) / 0xff >>
                                                      (8U - iVar15 & 0x1f) & 0xffffU)) * 4) <<
                           (ulong)(uVar6 & 0x1f));
              lVar21 = lVar21 + 1;
            } while ((int)lVar21 < iVar19);
          }
          iVar26 = iVar26 + 1;
          lVar22 = lVar22 + (uVar28 & 0xfffffffffffffffe);
        } while (iVar26 != iVar23);
      }
    }
    else if (*(int *)(this + 0x134) == 0x20) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar8 = *(int *)param_2;
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
      iVar9 = *(int *)(lVar22 + 0x10);
      iVar10 = *(int *)(param_2 + 0xc);
      iVar11 = *(int *)(param_2 + 4);
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      iVar12 = *(int *)(lVar22 + 0x14);
      iVar13 = *(int *)(param_2 + 0xc);
      iVar14 = *(int *)(param_2 + 8);
      lVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      iVar15 = *(int *)(lVar22 + 0x18);
      uVar28 = *(ulong *)(this + 0x118);
      iVar23 = *(int *)(param_1 + 0xc);
      puVar27 = (uint *)(*(long *)(this + 0x120) +
                        ((long)*(int *)param_1 + ((long)*(int *)(param_1 + 4) * uVar28 >> 2)) * 4);
      if (0 < iVar23) {
        iVar19 = *(int *)(param_1 + 8);
        iVar26 = 0;
        do {
          iVar24 = 0;
          puVar25 = puVar27;
          if (0 < iVar19) {
            do {
              uVar16 = *puVar25;
              iVar24 = iVar24 + 1;
              *puVar25 = *(int *)(lVar30 + (ulong)(((uVar16 & uVar2) >> (ulong)(uVar5 & 0x1f)) +
                                                  ((iVar11 * iVar10) / 0xff >> (8U - iVar12 & 0x1f))
                                                  ) * 4) << (ulong)(uVar5 & 0x1f) |
                         *(int *)(lVar29 + (ulong)(((uVar16 & uVar1) >> (ulong)(uVar4 & 0x1f)) +
                                                  ((iVar8 * iVar7) / 0xff >> (8U - iVar9 & 0x1f))) *
                                           4) << (ulong)(uVar4 & 0x1f) |
                         *(int *)(lVar20 + (ulong)(((uVar16 & uVar3) >> (ulong)(uVar6 & 0x1f)) +
                                                  ((iVar14 * iVar13) / 0xff >> (8U - iVar15 & 0x1f))
                                                  ) * 4) << (ulong)(uVar6 & 0x1f);
              iVar19 = *(int *)(param_1 + 8);
              puVar25 = puVar25 + 1;
            } while (iVar24 < iVar19);
            iVar23 = *(int *)(param_1 + 0xc);
          }
          iVar26 = iVar26 + 1;
          puVar27 = (uint *)((long)puVar27 + (uVar28 & 0xfffffffffffffffc));
        } while (iVar26 < iVar23);
      }
    }
    (**(code **)(*(long *)this + 0x208))(this);
    return;
  }
  return;
}


/* Sexy::DeviceImage::BltF(Sexy::Image*, float, float, Sexy::TRect<int> const&, Sexy::TRect<int>
   const&, Sexy::Color const&, int) */

void __thiscall
Sexy::DeviceImage::BltF
          (DeviceImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7)

{
  long lVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  lVar1 = *(long *)this;
  param_1[0x28] = (Image)0x1;
  (**(code **)(lVar1 + 0xa0))();
  (**(code **)(*(long *)this + 0x108))
            (CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),0,0,0,
             this,param_1,param_4,param_5,param_6,param_7);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltF(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::DeviceImage::BltF
          (DeviceImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7)

{
  BltF(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* Sexy::DeviceImage::BltMatrix2(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool, bool) */

void Sexy::DeviceImage::BltMatrix2
               (Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,TRect *param_5,
               Color *param_6,int param_7,TRect *param_8,bool param_9,bool param_10)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltMatrix2(Sexy::Image*, float, float, Sexy::SexyMatrix3
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool, bool) */

void __thiscall
Sexy::DeviceImage::BltMatrix2
          (DeviceImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9,bool param_10)

{
  BltMatrix2((Image *)(this + -0x68),param_2,param_3,(SexyMatrix3 *)param_1,(TRect *)param_4,
             (Color *)param_5,(int)param_6,(TRect *)(ulong)(uint)param_7,SUB81(param_8,0),param_9);
  return;
}


/* Sexy::DeviceImage::Create(int, int) */

void __thiscall Sexy::DeviceImage::Create(DeviceImage *this,int param_1,int param_2)

{
  code *pcVar1;
  
  if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  *(int *)(this + 0x38) = param_1;
  pcVar1 = *(code **)(*(long *)this + 0x98);
  *(int *)(this + 0x3c) = param_2;
  (*pcVar1)(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::AdditiveBlt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color
   const&) */

void __thiscall
Sexy::DeviceImage::AdditiveBlt
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  DeviceImage DVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  uint *puVar26;
  byte *pbVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  code *pcVar33;
  uint *puVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  Color aCStack_18 [16];
  long local_8;
  
  DVar9 = this[0xf9];
  local_8 = ___stack_chk_guard;
  lVar31 = (long)param_2;
  lVar29 = (long)param_3;
  param_1[0x28] = (Image)0x1;
  if (DVar9 == (DeviceImage)0x0) {
    plVar14 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    (**(code **)(*(long *)param_1 + 0x50))(param_1);
    if ((plVar14 != (long *)0x0) &&
       (cVar13 = (**(code **)(*(long *)this + 0x200))(this), cVar13 != '\0')) {
      pcVar33 = *(code **)(*plVar14 + 0x58);
      uVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      lVar16 = (*pcVar33)(plVar14,uVar15);
      if (plVar14[0x10] == 0) {
        iVar37 = *(int *)(param_4 + 4);
        iVar35 = *(int *)param_4;
        iVar1 = *(int *)(param_1 + 0x38);
        (**(code **)(*plVar14 + 0xa0))(plVar14);
        cVar13 = (**(code **)(*(long *)this + 0x200))(this);
        if (cVar13 == '\0') goto LAB_0512e0b8;
        pcVar33 = *(code **)(*plVar14 + 0x68);
        puVar26 = (uint *)(lVar16 + ((long)iVar35 + (long)(iVar37 * iVar1)) * 4);
        uVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar16 = (*pcVar33)(plVar14,uVar15);
        iVar37 = 0;
        if (*(int *)(this + 0x134) == 0x10) {
          lVar29 = *(long *)(this + 0x120) +
                   (lVar31 + ((ulong)(lVar29 * *(long *)(this + 0x118)) >> 1)) * 2;
          pbVar27 = (byte *)(lVar16 + (long)*(int *)param_4 +
                                      (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
          uVar2 = *(uint *)(this + 0x138);
          uVar3 = *(uint *)(this + 0x13c);
          uVar4 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar5 = *(uint *)(lVar31 + 0x1c);
          uVar28 = (ulong)uVar5;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar31 + 0x20);
          uVar30 = (ulong)uVar6;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar31 + 0x24);
          uVar32 = (ulong)uVar7;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar16 = *(long *)(lVar31 + 0x28);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar36 = *(long *)(lVar31 + 0x30);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = *(long *)(lVar31 + 0x38);
          Color::Color(aCStack_18,1);
          cVar13 = Sexy::operator==(param_5,aCStack_18);
          if (cVar13 == '\0') {
            iVar35 = *(int *)(param_5 + 0xc);
            iVar1 = *(int *)(param_5 + 8);
            iVar8 = *(int *)param_5;
            iVar39 = *(int *)(param_5 + 4);
            iVar40 = *(int *)(param_4 + 0xc);
            if (0 < iVar40) {
              iVar10 = *(int *)(param_1 + 0x38);
              uVar38 = *(uint *)(param_4 + 8);
              uVar17 = *(ulong *)(this + 0x118);
              lVar19 = NEON_shl((long)iVar10,2);
              uVar11 = uVar38;
              pbVar42 = pbVar27;
              lVar23 = lVar29;
              puVar34 = puVar26;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar25) {
                  bVar18 = *pbVar27;
                  uVar25 = (uint)bVar18;
                  if ((int)uVar11 < (int)uVar25) {
                    bVar18 = (byte)uVar11;
                    uVar22 = uVar11;
                    if ((*puVar26 & 0xffffff) == 0) goto LAB_0512f2fc;
LAB_0512f340:
                    uVar25 = uVar22;
                    lVar24 = 0;
                    do {
                      uVar22 = puVar26[lVar24];
                      uVar20 = (ulong)*(ushort *)(lVar29 + lVar24 * 2);
                      *(ushort *)(lVar29 + lVar24 * 2) =
                           (ushort)(*(int *)(lVar36 + (((uVar20 & uVar3) >> (uVar30 & 0x3f)) +
                                                      ((ulong)((uVar22 & uVar3) >> (uVar30 & 0x3f))
                                                       * (long)((iVar35 * iVar39) / 0xff) >> 8)) * 4
                                            ) << (ulong)(uVar6 & 0x1f)) |
                           (ushort)(*(int *)(lVar16 + (((uVar20 & uVar2) >> (uVar28 & 0x3f)) +
                                                      ((ulong)((uVar22 & uVar2) >> (uVar28 & 0x3f))
                                                       * (long)((iVar35 * iVar8) / 0xff) >> 8)) * 4)
                                   << (ulong)(uVar5 & 0x1f)) |
                           (ushort)(*(int *)(lVar31 + (((uVar20 & uVar4) >> (uVar32 & 0x3f)) +
                                                      ((ulong)((uVar22 & uVar4) >> (uVar32 & 0x3f))
                                                       * (long)((iVar35 * iVar1) / 0xff) >> 8)) * 4)
                                   << (ulong)(uVar7 & 0x1f));
                      lVar24 = lVar24 + 1;
                    } while ((int)lVar24 < (int)uVar25);
                    uVar20 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar25 - 1) + 1;
                    puVar26 = puVar26 + lVar24;
                    lVar29 = lVar29 + lVar24 * 2;
                  }
                  else {
                    uVar22 = (uint)bVar18;
                    if ((*puVar26 & 0xffffff) == 0) {
LAB_0512f2fc:
                      uVar25 = uVar22;
                      uVar20 = (ulong)bVar18;
                      puVar26 = puVar26 + uVar20;
                      lVar29 = lVar29 + uVar20 * 2;
                    }
                    else {
                      uVar20 = 0;
                      if (bVar18 != 0) goto LAB_0512f340;
                    }
                  }
                  pbVar27 = pbVar27 + uVar20;
                }
                iVar37 = iVar37 + 1;
                lVar29 = lVar23 + (uVar17 & 0xfffffffffffffffe);
                puVar26 = (uint *)((long)puVar34 + lVar19);
                pbVar27 = pbVar42 + iVar10;
                uVar11 = uVar38;
                pbVar42 = pbVar27;
                lVar23 = lVar29;
                puVar34 = puVar26;
              } while (iVar37 != iVar40);
            }
          }
          else {
            iVar37 = *(int *)(param_4 + 0xc);
            if (0 < iVar37) {
              iVar1 = *(int *)(param_1 + 0x38);
              iVar35 = 0;
              uVar17 = *(ulong *)(this + 0x118);
              uVar38 = *(uint *)(param_4 + 8);
              lVar19 = NEON_shl((long)iVar1,2);
              uVar11 = uVar38;
              pbVar42 = pbVar27;
              lVar23 = lVar29;
              puVar34 = puVar26;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar25) {
                  bVar18 = *pbVar27;
                  if ((int)uVar11 < (int)(uint)bVar18) {
                    bVar18 = (byte)uVar11;
                    uVar25 = uVar11;
                    if ((*puVar26 & 0xffffff) == 0) goto LAB_0512f168;
LAB_0512f1a8:
                    lVar24 = 0;
                    do {
                      uVar22 = puVar26[lVar24];
                      uVar20 = (ulong)*(ushort *)(lVar29 + lVar24 * 2);
                      *(ushort *)(lVar29 + lVar24 * 2) =
                           (ushort)(*(int *)(lVar36 + ((ulong)(uVar22 & uVar3) + (uVar20 & uVar3) >>
                                                      (uVar30 & 0x3f)) * 4) << (ulong)(uVar6 & 0x1f)
                                   ) |
                           (ushort)(*(int *)(lVar16 + ((ulong)(uVar22 & uVar2) + (uVar20 & uVar2) >>
                                                      (uVar28 & 0x3f)) * 4) << (ulong)(uVar5 & 0x1f)
                                   ) |
                           (ushort)(*(int *)(lVar31 + ((ulong)(uVar22 & uVar4) + (uVar20 & uVar4) >>
                                                      (uVar32 & 0x3f)) * 4) << (ulong)(uVar7 & 0x1f)
                                   );
                      lVar24 = lVar24 + 1;
                    } while ((int)lVar24 < (int)uVar25);
                    uVar20 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar25 - 1) + 1;
                    puVar26 = puVar26 + lVar24;
                    lVar29 = lVar29 + lVar24 * 2;
                  }
                  else {
                    uVar25 = (uint)bVar18;
                    if ((*puVar26 & 0xffffff) == 0) {
LAB_0512f168:
                      uVar20 = (ulong)bVar18;
                      puVar26 = puVar26 + uVar20;
                      lVar29 = lVar29 + uVar20 * 2;
                    }
                    else {
                      if (bVar18 != 0) goto LAB_0512f1a8;
                      uVar20 = 0;
                      uVar25 = 0;
                    }
                  }
                  pbVar27 = pbVar27 + uVar20;
                }
                iVar35 = iVar35 + 1;
                lVar29 = lVar23 + (uVar17 & 0xfffffffffffffffe);
                puVar26 = (uint *)((long)puVar34 + lVar19);
                pbVar27 = pbVar42 + iVar1;
                uVar11 = uVar38;
                pbVar42 = pbVar27;
                lVar23 = lVar29;
                puVar34 = puVar26;
              } while (iVar35 != iVar37);
            }
          }
        }
        else if (*(int *)(this + 0x134) == 0x20) {
          lVar29 = *(long *)(this + 0x120) +
                   (lVar31 + ((ulong)(lVar29 * *(long *)(this + 0x118)) >> 2)) * 8;
          pbVar27 = (byte *)(lVar16 + (long)*(int *)param_4 +
                                      (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
          uVar2 = *(uint *)(this + 0x138);
          uVar3 = *(uint *)(this + 0x13c);
          uVar4 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar5 = *(uint *)(lVar31 + 0x1c);
          uVar28 = (ulong)uVar5;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar31 + 0x20);
          uVar30 = (ulong)uVar6;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar31 + 0x24);
          uVar32 = (ulong)uVar7;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar16 = *(long *)(lVar31 + 0x28);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar36 = *(long *)(lVar31 + 0x30);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = *(long *)(lVar31 + 0x38);
          Color::Color(aCStack_18,1);
          cVar13 = Sexy::operator==(param_5,aCStack_18);
          if (cVar13 == '\0') {
            iVar35 = *(int *)(param_5 + 0xc);
            iVar1 = *(int *)(param_5 + 8);
            iVar8 = *(int *)param_5;
            iVar39 = *(int *)(param_5 + 4);
            iVar40 = *(int *)(param_4 + 0xc);
            if (0 < iVar40) {
              iVar10 = *(int *)(param_1 + 0x38);
              uVar38 = *(uint *)(param_4 + 8);
              lVar19 = NEON_shl((long)iVar10,2);
              uVar11 = uVar38;
              pbVar42 = pbVar27;
              lVar23 = lVar29;
              puVar34 = puVar26;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar25) {
                  bVar18 = *pbVar27;
                  uVar25 = (uint)bVar18;
                  if ((int)uVar11 < (int)uVar25) {
                    bVar18 = (byte)uVar11;
                    uVar22 = uVar11;
                    if ((*puVar26 & 0xffffff) == 0) goto LAB_0512f4ac;
LAB_0512f4f0:
                    uVar25 = uVar22;
                    lVar24 = 0;
                    do {
                      uVar22 = puVar26[lVar24];
                      uVar17 = *(ulong *)(lVar29 + lVar24 * 8);
                      *(long *)(lVar29 + lVar24 * 8) =
                           (long)(*(int *)(lVar36 + (((uVar17 & uVar3) >> (uVar30 & 0x3f)) +
                                                    ((ulong)((uVar22 & uVar3) >> (uVar30 & 0x3f)) *
                                                     (long)((iVar35 * iVar39) / 0xff) >> 8)) * 4) <<
                                  (ulong)(uVar6 & 0x1f) |
                                  *(int *)(lVar16 + (((uVar17 & uVar2) >> (uVar28 & 0x3f)) +
                                                    ((ulong)((uVar22 & uVar2) >> (uVar28 & 0x3f)) *
                                                     (long)((iVar35 * iVar8) / 0xff) >> 8)) * 4) <<
                                  (ulong)(uVar5 & 0x1f) |
                                 *(int *)(lVar31 + (((uVar17 & uVar4) >> (uVar32 & 0x3f)) +
                                                   ((ulong)((uVar22 & uVar4) >> (uVar32 & 0x3f)) *
                                                    (long)((iVar35 * iVar1) / 0xff) >> 8)) * 4) <<
                                 (ulong)(uVar7 & 0x1f));
                      lVar24 = lVar24 + 1;
                    } while ((int)lVar24 < (int)uVar25);
                    uVar17 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar25 - 1) + 1;
                    puVar26 = puVar26 + lVar24;
                    lVar29 = lVar29 + lVar24 * 8;
                  }
                  else {
                    uVar22 = (uint)bVar18;
                    if ((*puVar26 & 0xffffff) == 0) {
LAB_0512f4ac:
                      uVar25 = uVar22;
                      uVar17 = (ulong)bVar18;
                      puVar26 = puVar26 + uVar17;
                      lVar29 = lVar29 + uVar17 * 8;
                    }
                    else {
                      uVar17 = 0;
                      if (bVar18 != 0) goto LAB_0512f4f0;
                    }
                  }
                  pbVar27 = pbVar27 + uVar17;
                }
                iVar37 = iVar37 + 1;
                puVar26 = (uint *)((long)puVar34 + lVar19);
                pbVar27 = pbVar42 + iVar10;
                lVar29 = lVar23 + (*(ulong *)(this + 0x118) >> 2) * 8;
                uVar11 = uVar38;
                pbVar42 = pbVar27;
                lVar23 = lVar29;
                puVar34 = puVar26;
              } while (iVar37 != iVar40);
            }
          }
          else {
            iVar37 = *(int *)(param_4 + 0xc);
            if (0 < iVar37) {
              iVar1 = *(int *)(param_1 + 0x38);
              iVar35 = 0;
              uVar38 = *(uint *)(param_4 + 8);
              uVar11 = uVar38;
              pbVar42 = pbVar27;
              lVar23 = lVar29;
              puVar34 = puVar26;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar25) {
                  bVar18 = *pbVar27;
                  if ((int)uVar11 < (int)(uint)bVar18) {
                    bVar18 = (byte)uVar11;
                    uVar25 = uVar11;
                    if ((*puVar26 & 0xffffff) == 0) goto LAB_0512e778;
LAB_0512e7b8:
                    lVar19 = 0;
                    do {
                      uVar22 = puVar26[lVar19];
                      uVar17 = *(ulong *)(lVar29 + lVar19 * 8);
                      *(long *)(lVar29 + lVar19 * 8) =
                           (long)(*(int *)(lVar36 + ((ulong)(uVar22 & uVar3) + (uVar17 & uVar3) >>
                                                    (uVar30 & 0x3f)) * 4) << (ulong)(uVar6 & 0x1f) |
                                  *(int *)(lVar16 + ((ulong)(uVar22 & uVar2) + (uVar17 & uVar2) >>
                                                    (uVar28 & 0x3f)) * 4) << (ulong)(uVar5 & 0x1f) |
                                 *(int *)(lVar31 + ((ulong)(uVar22 & uVar4) + (uVar17 & uVar4) >>
                                                   (uVar32 & 0x3f)) * 4) << (ulong)(uVar7 & 0x1f));
                      lVar19 = lVar19 + 1;
                    } while ((int)lVar19 < (int)uVar25);
                    uVar17 = (ulong)bVar18;
                    lVar19 = (ulong)(uVar25 - 1) + 1;
                    puVar26 = puVar26 + lVar19;
                    lVar29 = lVar29 + lVar19 * 8;
                  }
                  else {
                    uVar25 = (uint)bVar18;
                    if ((*puVar26 & 0xffffff) == 0) {
LAB_0512e778:
                      uVar17 = (ulong)bVar18;
                      puVar26 = puVar26 + uVar17;
                      lVar29 = lVar29 + uVar17 * 8;
                    }
                    else {
                      if (bVar18 != 0) goto LAB_0512e7b8;
                      uVar17 = 0;
                      uVar25 = 0;
                    }
                  }
                  pbVar27 = pbVar27 + uVar17;
                }
                iVar35 = iVar35 + 1;
                puVar26 = puVar34 + iVar1;
                pbVar27 = pbVar42 + iVar1;
                lVar29 = lVar23 + (*(ulong *)(this + 0x118) >> 2) * 8;
                uVar11 = uVar38;
                pbVar42 = pbVar27;
                lVar23 = lVar29;
                puVar34 = puVar26;
              } while (iVar35 != iVar37);
            }
          }
        }
      }
      else {
        iVar37 = *(int *)(param_4 + 4);
        iVar35 = *(int *)param_4;
        lVar36 = plVar14[0x11];
        iVar1 = *(int *)(param_1 + 0x38);
        (**(code **)(*plVar14 + 0xa0))(plVar14);
        cVar13 = (**(code **)(*(long *)this + 0x200))(this);
        if (cVar13 == '\0') goto LAB_0512e0b8;
        pcVar33 = *(code **)(*plVar14 + 0x68);
        pbVar27 = (byte *)(lVar36 + (long)iVar35 + (long)(iVar37 * iVar1));
        uVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar36 = (*pcVar33)(plVar14,uVar15);
        if (*(int *)(this + 0x134) == 0x10) {
          lVar29 = *(long *)(this + 0x120) +
                   ((long)param_2 + ((ulong)(lVar29 * *(long *)(this + 0x118)) >> 1)) * 2;
          pbVar42 = (byte *)(lVar36 + (long)*(int *)param_4 +
                                      (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
          uVar2 = *(uint *)(this + 0x138);
          uVar3 = *(uint *)(this + 0x13c);
          uVar4 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar5 = *(uint *)(lVar31 + 0x1c);
          uVar28 = (ulong)uVar5;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar31 + 0x20);
          uVar30 = (ulong)uVar6;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar31 + 0x24);
          uVar32 = (ulong)uVar7;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar36 = *(long *)(lVar31 + 0x28);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar23 = *(long *)(lVar31 + 0x30);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = *(long *)(lVar31 + 0x38);
          Color::Color(aCStack_18,1);
          cVar13 = Sexy::operator==(param_5,aCStack_18);
          if (cVar13 == '\0') {
            iVar37 = *(int *)(param_5 + 0xc);
            iVar35 = *(int *)(param_5 + 8);
            iVar1 = *(int *)param_5;
            iVar8 = *(int *)(param_5 + 4);
            iVar39 = *(int *)(param_4 + 0xc);
            if (0 < iVar39) {
              iVar10 = *(int *)(param_1 + 0x38);
              uVar17 = *(ulong *)(this + 0x118);
              uVar38 = *(uint *)(param_4 + 8);
              iVar40 = 0;
              uVar11 = uVar38;
              pbVar43 = pbVar42;
              lVar19 = lVar29;
              pbVar41 = pbVar27;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar22) {
                  bVar18 = *pbVar42;
                  uVar25 = *(uint *)(lVar16 + (ulong)*pbVar27 * 4);
                  uVar22 = (uint)bVar18;
                  if ((int)uVar11 < (int)uVar22) {
                    uVar20 = (ulong)(byte)uVar11;
                    uVar21 = uVar20;
                    uVar12 = uVar11;
                    if ((uVar25 & 0xffffff) == 0) goto LAB_0512ec40;
LAB_0512ec84:
                    uVar22 = uVar12;
                    uVar20 = uVar21;
                    lVar24 = 0;
                    while( true ) {
                      uVar21 = (ulong)*(ushort *)(lVar29 + lVar24 * 2);
                      *(ushort *)(lVar29 + lVar24 * 2) =
                           (ushort)(*(int *)(lVar23 + (((uVar21 & uVar3) >> (uVar30 & 0x3f)) +
                                                      ((ulong)((uVar25 & uVar3) >> (uVar30 & 0x3f))
                                                       * (long)((iVar37 * iVar8) / 0xff) >> 8)) * 4)
                                   << (ulong)(uVar6 & 0x1f)) |
                           (ushort)(*(int *)(lVar36 + (((uVar21 & uVar2) >> (uVar28 & 0x3f)) +
                                                      ((ulong)((uVar25 & uVar2) >> (uVar28 & 0x3f))
                                                       * (long)((iVar37 * iVar1) / 0xff) >> 8)) * 4)
                                   << (ulong)(uVar5 & 0x1f)) |
                           (ushort)(*(int *)(lVar31 + (((uVar21 & uVar4) >> (uVar32 & 0x3f)) +
                                                      ((ulong)((uVar25 & uVar4) >> (uVar32 & 0x3f))
                                                       * (long)((iVar37 * iVar35) / 0xff) >> 8)) * 4
                                            ) << (ulong)(uVar7 & 0x1f));
                      lVar24 = lVar24 + 1;
                      if ((int)uVar22 <= (int)lVar24) break;
                      uVar25 = *(uint *)(lVar16 + (ulong)pbVar27[lVar24] * 4);
                    }
                    lVar24 = (ulong)(uVar22 - 1) + 1;
                    pbVar27 = pbVar27 + lVar24;
                    lVar29 = lVar29 + lVar24 * 2;
                  }
                  else {
                    uVar20 = (ulong)bVar18;
                    uVar12 = (uint)bVar18;
                    if ((uVar25 & 0xffffff) == 0) {
LAB_0512ec40:
                      uVar22 = uVar12;
                      lVar29 = lVar29 + uVar20 * 2;
                      pbVar27 = pbVar27 + uVar20;
                    }
                    else {
                      uVar20 = 0;
                      uVar21 = (ulong)bVar18;
                      if (bVar18 != 0) goto LAB_0512ec84;
                    }
                  }
                  pbVar42 = pbVar42 + uVar20;
                }
                iVar40 = iVar40 + 1;
                lVar29 = lVar19 + (uVar17 & 0xfffffffffffffffe);
                pbVar27 = pbVar41 + iVar10;
                pbVar42 = pbVar43 + iVar10;
                uVar11 = uVar38;
                pbVar43 = pbVar42;
                lVar19 = lVar29;
                pbVar41 = pbVar27;
              } while (iVar40 != iVar39);
            }
          }
          else {
            iVar37 = *(int *)(param_4 + 0xc);
            if (0 < iVar37) {
              uVar17 = *(ulong *)(this + 0x118);
              uVar38 = *(uint *)(param_4 + 8);
              iVar1 = *(int *)(param_1 + 0x38);
              iVar35 = 0;
              uVar11 = uVar38;
              pbVar43 = pbVar42;
              lVar19 = lVar29;
              pbVar41 = pbVar27;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar22) {
                  bVar18 = *pbVar42;
                  uVar25 = *(uint *)(lVar16 + (ulong)*pbVar27 * 4);
                  if ((int)uVar11 < (int)(uint)bVar18) {
                    bVar18 = (byte)uVar11;
                    uVar22 = uVar11;
                    if ((uVar25 & 0xffffff) == 0) goto LAB_0512ea28;
LAB_0512ea68:
                    lVar24 = 0;
                    while( true ) {
                      uVar20 = (ulong)*(ushort *)(lVar29 + lVar24 * 2);
                      *(ushort *)(lVar29 + lVar24 * 2) =
                           (ushort)(*(int *)(lVar23 + ((uVar20 & uVar3) + (ulong)(uVar25 & uVar3) >>
                                                      (uVar30 & 0x3f)) * 4) << (ulong)(uVar6 & 0x1f)
                                   ) |
                           (ushort)(*(int *)(lVar36 + ((uVar20 & uVar2) + (ulong)(uVar25 & uVar2) >>
                                                      (uVar28 & 0x3f)) * 4) << (ulong)(uVar5 & 0x1f)
                                   ) |
                           (ushort)(*(int *)(lVar31 + ((uVar20 & uVar4) + (ulong)(uVar25 & uVar4) >>
                                                      (uVar32 & 0x3f)) * 4) << (ulong)(uVar7 & 0x1f)
                                   );
                      lVar24 = lVar24 + 1;
                      if ((int)uVar22 <= (int)lVar24) break;
                      uVar25 = *(uint *)(lVar16 + (ulong)pbVar27[lVar24] * 4);
                    }
                    uVar20 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar22 - 1) + 1;
                    pbVar27 = pbVar27 + lVar24;
                    lVar29 = lVar29 + lVar24 * 2;
                  }
                  else {
                    uVar22 = (uint)bVar18;
                    if ((uVar25 & 0xffffff) == 0) {
LAB_0512ea28:
                      uVar20 = (ulong)bVar18;
                      lVar29 = lVar29 + (ulong)bVar18 * 2;
                      pbVar27 = pbVar27 + uVar20;
                    }
                    else {
                      if (bVar18 != 0) goto LAB_0512ea68;
                      uVar20 = 0;
                      uVar22 = 0;
                    }
                  }
                  pbVar42 = pbVar42 + uVar20;
                }
                iVar35 = iVar35 + 1;
                lVar29 = lVar19 + (uVar17 & 0xfffffffffffffffe);
                pbVar27 = pbVar41 + iVar1;
                pbVar42 = pbVar43 + iVar1;
                uVar11 = uVar38;
                pbVar43 = pbVar42;
                lVar19 = lVar29;
                pbVar41 = pbVar27;
              } while (iVar35 != iVar37);
            }
          }
        }
        else if (*(int *)(this + 0x134) == 0x20) {
          lVar29 = *(long *)(this + 0x120) +
                   (lVar31 + ((ulong)(lVar29 * *(long *)(this + 0x118)) >> 2)) * 8;
          pbVar42 = (byte *)(lVar36 + (long)*(int *)param_4 +
                                      (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38)));
          uVar2 = *(uint *)(this + 0x138);
          uVar3 = *(uint *)(this + 0x13c);
          uVar4 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar5 = *(uint *)(lVar31 + 0x1c);
          uVar28 = (ulong)uVar5;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar31 + 0x20);
          uVar30 = (ulong)uVar6;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar31 + 0x24);
          uVar32 = (ulong)uVar7;
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar36 = *(long *)(lVar31 + 0x28);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar23 = *(long *)(lVar31 + 0x30);
          lVar31 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar31 = *(long *)(lVar31 + 0x38);
          Color::Color(aCStack_18,1);
          cVar13 = Sexy::operator==(param_5,aCStack_18);
          if (cVar13 == '\0') {
            iVar37 = *(int *)(param_5 + 0xc);
            iVar35 = *(int *)(param_5 + 8);
            iVar1 = *(int *)param_5;
            iVar8 = *(int *)(param_5 + 4);
            iVar39 = *(int *)(param_4 + 0xc);
            if (0 < iVar39) {
              iVar10 = *(int *)(param_1 + 0x38);
              uVar38 = *(uint *)(param_4 + 8);
              iVar40 = 0;
              uVar11 = uVar38;
              pbVar43 = pbVar42;
              lVar19 = lVar29;
              pbVar41 = pbVar27;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar22) {
                  bVar18 = *pbVar42;
                  uVar25 = *(uint *)(lVar16 + (ulong)*pbVar27 * 4);
                  uVar22 = (uint)bVar18;
                  if ((int)uVar11 < (int)uVar22) {
                    bVar18 = (byte)uVar11;
                    uVar12 = uVar11;
                    if ((uVar25 & 0xffffff) == 0) goto LAB_0512ee3c;
LAB_0512ee80:
                    uVar22 = uVar12;
                    lVar24 = 0;
                    while( true ) {
                      uVar17 = *(ulong *)(lVar29 + lVar24 * 8);
                      *(long *)(lVar29 + lVar24 * 8) =
                           (long)(*(int *)(lVar23 + (((uVar17 & uVar3) >> (uVar30 & 0x3f)) +
                                                    ((ulong)((uVar25 & uVar3) >> (uVar30 & 0x3f)) *
                                                     (long)((iVar37 * iVar8) / 0xff) >> 8)) * 4) <<
                                  (ulong)(uVar6 & 0x1f) |
                                  *(int *)(lVar36 + (((uVar17 & uVar2) >> (uVar28 & 0x3f)) +
                                                    ((ulong)((uVar25 & uVar2) >> (uVar28 & 0x3f)) *
                                                     (long)((iVar37 * iVar1) / 0xff) >> 8)) * 4) <<
                                  (ulong)(uVar5 & 0x1f) |
                                 *(int *)(lVar31 + (((uVar17 & uVar4) >> (uVar32 & 0x3f)) +
                                                   ((ulong)((uVar25 & uVar4) >> (uVar32 & 0x3f)) *
                                                    (long)((iVar37 * iVar35) / 0xff) >> 8)) * 4) <<
                                 (ulong)(uVar7 & 0x1f));
                      lVar24 = lVar24 + 1;
                      if ((int)uVar22 <= (int)lVar24) break;
                      uVar25 = *(uint *)(lVar16 + (ulong)pbVar27[lVar24] * 4);
                    }
                    uVar17 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar22 - 1) + 1;
                    pbVar27 = pbVar27 + lVar24;
                    lVar29 = lVar29 + lVar24 * 8;
                  }
                  else {
                    uVar12 = (uint)bVar18;
                    if ((uVar25 & 0xffffff) == 0) {
LAB_0512ee3c:
                      uVar22 = uVar12;
                      uVar17 = (ulong)bVar18;
                      lVar29 = lVar29 + (ulong)bVar18 * 8;
                      pbVar27 = pbVar27 + uVar17;
                    }
                    else {
                      uVar17 = 0;
                      if (bVar18 != 0) goto LAB_0512ee80;
                    }
                  }
                  pbVar42 = pbVar42 + uVar17;
                }
                iVar40 = iVar40 + 1;
                pbVar27 = pbVar41 + iVar10;
                pbVar42 = pbVar43 + iVar10;
                lVar29 = lVar19 + (*(ulong *)(this + 0x118) >> 2) * 8;
                uVar11 = uVar38;
                pbVar43 = pbVar42;
                lVar19 = lVar29;
                pbVar41 = pbVar27;
              } while (iVar40 != iVar39);
            }
          }
          else {
            iVar37 = *(int *)(param_4 + 0xc);
            if (0 < iVar37) {
              uVar38 = *(uint *)(param_4 + 8);
              iVar1 = *(int *)(param_1 + 0x38);
              iVar35 = 0;
              uVar11 = uVar38;
              pbVar43 = pbVar42;
              lVar19 = lVar29;
              pbVar41 = pbVar27;
              do {
                for (; 0 < (int)uVar11; uVar11 = uVar11 - uVar22) {
                  bVar18 = *pbVar42;
                  uVar25 = *(uint *)(lVar16 + (ulong)*pbVar27 * 4);
                  if ((int)uVar11 < (int)(uint)bVar18) {
                    bVar18 = (byte)uVar11;
                    uVar22 = uVar11;
                    if ((uVar25 & 0xffffff) == 0) goto LAB_0512e3e4;
LAB_0512e424:
                    lVar24 = 0;
                    while( true ) {
                      uVar17 = *(ulong *)(lVar29 + lVar24 * 8);
                      *(long *)(lVar29 + lVar24 * 8) =
                           (long)(*(int *)(lVar23 + ((ulong)(uVar25 & uVar3) + (uVar17 & uVar3) >>
                                                    (uVar30 & 0x3f)) * 4) << (ulong)(uVar6 & 0x1f) |
                                  *(int *)(lVar36 + ((ulong)(uVar25 & uVar2) + (uVar17 & uVar2) >>
                                                    (uVar28 & 0x3f)) * 4) << (ulong)(uVar5 & 0x1f) |
                                 *(int *)(lVar31 + ((ulong)(uVar25 & uVar4) + (uVar17 & uVar4) >>
                                                   (uVar32 & 0x3f)) * 4) << (ulong)(uVar7 & 0x1f));
                      lVar24 = lVar24 + 1;
                      if ((int)uVar22 <= (int)lVar24) break;
                      uVar25 = *(uint *)(lVar16 + (ulong)pbVar27[lVar24] * 4);
                    }
                    uVar17 = (ulong)bVar18;
                    lVar24 = (ulong)(uVar22 - 1) + 1;
                    pbVar27 = pbVar27 + lVar24;
                    lVar29 = lVar29 + lVar24 * 8;
                  }
                  else {
                    uVar22 = (uint)bVar18;
                    if ((uVar25 & 0xffffff) == 0) {
LAB_0512e3e4:
                      uVar17 = (ulong)bVar18;
                      lVar29 = lVar29 + (ulong)bVar18 * 8;
                      pbVar27 = pbVar27 + uVar17;
                    }
                    else {
                      if (bVar18 != 0) goto LAB_0512e424;
                      uVar17 = 0;
                      uVar22 = 0;
                    }
                  }
                  pbVar42 = pbVar42 + uVar17;
                }
                iVar35 = iVar35 + 1;
                pbVar27 = pbVar41 + iVar1;
                pbVar42 = pbVar43 + iVar1;
                lVar29 = lVar19 + (*(ulong *)(this + 0x118) >> 2) * 8;
                uVar11 = uVar38;
                pbVar43 = pbVar42;
                lVar19 = lVar29;
                pbVar41 = pbVar27;
              } while (iVar35 != iVar37);
            }
          }
        }
      }
      (**(code **)(*(long *)this + 0x208))(this);
      (**(code **)(*(long *)this + 0x208))(this);
    }
  }
LAB_0512e0b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::NormalBlt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&)
    */

void __thiscall
Sexy::DeviceImage::NormalBlt
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  uint uVar1;
  byte *pbVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  char cVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  ulong uVar24;
  ulong *puVar25;
  ushort *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  undefined2 *puVar32;
  ushort *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong *puVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  ulong *puVar41;
  ulong *puVar43;
  byte *pbVar44;
  undefined8 *puVar45;
  ulong *puVar46;
  byte bVar47;
  uint uVar48;
  undefined2 *puVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  byte *pbVar53;
  ulong uVar54;
  int iVar55;
  int iVar56;
  code *pcVar57;
  long lVar58;
  long lVar59;
  ushort uVar60;
  short sVar61;
  int iVar62;
  int iVar64;
  ushort uVar66;
  short sVar67;
  int iVar69;
  int iVar70;
  undefined8 uVar72;
  int iVar73;
  ushort uVar74;
  int iVar75;
  int iVar76;
  ushort uVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  TRect aTStack_18 [16];
  long local_8;
  byte *pbVar23;
  ulong *puVar42;
  undefined4 uVar63;
  undefined6 uVar65;
  undefined4 uVar68;
  undefined6 uVar71;
  
  lVar58 = (long)param_3;
  param_1[0x28] = (Image)0x1;
  lVar59 = (long)param_2;
  local_8 = ___stack_chk_guard;
  plVar14 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  lVar15 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
  if (plVar14 == (long *)0x0) goto LAB_0512f918;
  (**(code **)(*plVar14 + 0xa0))(plVar14);
  if ((*(char *)((long)plVar14 + 0x93) != '\0') &&
     ((lVar15 == 0 || (*(long *)(lVar15 + 0x148) == 0)))) {
    if (this[0xf9] != (DeviceImage)0x0) {
      if (*(char *)((long)plVar14 + 0x92) != '\0') goto LAB_0512f918;
      goto LAB_0512f89c;
    }
    Color::Color((Color *)aTStack_18,1);
    cVar13 = Sexy::operator==(param_5,(Color *)aTStack_18);
    if (cVar13 == '\0') goto LAB_0512f894;
    lVar15 = plVar14[0x10];
    if (lVar15 == 0) {
      lVar15 = (**(code **)(*plVar14 + 0xd0))(plVar14,0,0,0,0);
      if ((this[0xf9] != (DeviceImage)0x0) ||
         (cVar13 = (**(code **)(*(long *)this + 0x200))(this), cVar13 == '\0')) goto LAB_0512f918;
      if (*(int *)(this + 0x134) == 0x10) {
        uVar34 = *(ulong *)(this + 0x118);
        uVar52 = *(uint *)(param_1 + 0x38);
        uVar54 = (ulong)uVar52;
        uVar1 = *(uint *)(this + 0x13c);
        uVar35 = (ulong)uVar1;
        lVar58 = *(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar34 >> 1)) * 2;
        uVar20 = *(uint *)(this + 0x138);
        lVar15 = lVar15 + ((long)*(int *)param_4 + (long)(int)(uVar52 * *(int *)(param_4 + 4))) * 4;
        uVar50 = *(uint *)(this + 0x140);
        if (gOptimizeSoftwareDrawing == '\0') {
LAB_05130e94:
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            iVar64 = *(int *)(param_4 + 8);
            iVar56 = 0;
            do {
              if (0 < iVar64) {
                lVar59 = 0;
                do {
                  uVar48 = *(uint *)(lVar15 + lVar59 * 4);
                  uVar24 = (ulong)*(ushort *)(lVar58 + lVar59 * 2);
                  lVar16 = (ulong)(uVar48 >> 0x18) + (ulong)(uVar48 >> 0x1f);
                  iVar62 = 0xff - (uVar48 >> 0x18);
                  lVar28 = (long)(iVar62 + (iVar62 >> 7));
                  *(ushort *)(lVar58 + lVar59 * 2) =
                       ((ushort)uVar1 &
                       (ushort)((((ulong)(uVar48 >> 8) & 0xff) * uVar35 * lVar16 >> 8) +
                                lVar28 * (uVar24 & uVar35) + (ulong)(uVar1 >> 1) >> 8)) +
                       ((ushort)uVar50 &
                       (ushort)(((ulong)(uVar48 & 0xff) * (ulong)uVar50 * lVar16 >> 8) +
                                lVar28 * (uVar24 & uVar50) + (ulong)(uVar50 >> 1) >> 8)) +
                       ((ushort)uVar20 &
                       (ushort)((((ulong)(uVar48 >> 0x10) & 0xff) * (ulong)uVar20 * lVar16 >> 8) +
                                lVar28 * (uVar24 & uVar20) + (ulong)(uVar20 >> 1) >> 8));
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar64);
              }
              iVar56 = iVar56 + 1;
              lVar58 = lVar58 + (uVar34 & 0xfffffffffffffffe);
              lVar15 = lVar15 + (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar54 << 2);
            } while (iVar56 != iVar55);
          }
        }
        else if (uVar35 == 0x7e0) {
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            iVar64 = *(int *)(param_4 + 8);
            iVar56 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar64) {
                do {
                  uVar1 = *(uint *)(lVar15 + lVar59 * 4);
                  uVar3 = *(undefined2 *)(lVar58 + lVar59 * 2);
                  uVar35 = (ulong)CONCAT22(uVar3,uVar3) & 0x7e0f81f;
                  uVar35 = uVar35 + (((((ulong)(uVar1 >> 8) & 0xf800) +
                                       ((ulong)uVar1 & 0xfc00) * 0x800 +
                                      ((ulong)(uVar1 >> 3) & 0x1f)) - uVar35) *
                                     (ulong)(uVar1 >> 0x1b) >> 5) & 0x7e0f81f;
                  *(ushort *)(lVar58 + lVar59 * 2) = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar64);
              }
              iVar56 = iVar56 + 1;
              lVar58 = lVar58 + (uVar34 & 0xfffffffffffffffe);
              lVar15 = lVar15 + (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar54 << 2);
            } while (iVar56 != iVar55);
          }
        }
        else {
          if (uVar35 != 0x3e0) goto LAB_05130e94;
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            iVar64 = *(int *)(param_4 + 8);
            iVar56 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar64) {
                do {
                  uVar1 = *(uint *)(lVar15 + lVar59 * 4);
                  uVar3 = *(undefined2 *)(lVar58 + lVar59 * 2);
                  uVar35 = (ulong)CONCAT22(uVar3,uVar3) & 0x3e07c1f;
                  uVar35 = uVar35 + (((((ulong)(uVar1 >> 9) & 0x7c00) +
                                       ((ulong)uVar1 & 0xf800) * 0x400 +
                                      ((ulong)(uVar1 >> 3) & 0x1f)) - uVar35) *
                                     (ulong)(uVar1 >> 0x1b) >> 5) & 0x3e07c1f;
                  *(ushort *)(lVar58 + lVar59 * 2) = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar64);
              }
              iVar56 = iVar56 + 1;
              lVar58 = lVar58 + (uVar34 & 0xfffffffffffffffe);
              lVar15 = lVar15 + (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar54 << 2);
            } while (iVar56 != iVar55);
          }
        }
      }
      else if (*(int *)(this + 0x134) == 0x20) {
        uVar34 = *(ulong *)(this + 0x118);
        uVar52 = *(uint *)(param_1 + 0x38);
        lVar58 = *(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar34 >> 2)) * 8;
        uVar1 = *(uint *)(this + 0x138);
        lVar15 = lVar15 + ((long)*(int *)param_4 + (long)(int)(uVar52 * *(int *)(param_4 + 4))) * 4;
        uVar20 = *(uint *)(this + 0x13c);
        uVar50 = *(uint *)(this + 0x140);
        if (gOptimizeSoftwareDrawing == '\0') {
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            uVar35 = (ulong)uVar1;
            uVar24 = (ulong)uVar20;
            uVar54 = (ulong)uVar50;
            iVar64 = *(int *)(param_4 + 8);
            iVar56 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar64) {
                do {
                  uVar48 = *(uint *)(lVar15 + lVar59 * 4);
                  uVar27 = *(ulong *)(lVar58 + lVar59 * 8);
                  uVar34 = (ulong)(uVar48 >> 0x18);
                  lVar16 = (long)(int)(0x100 - (uVar48 >> 0x18));
                  *(ulong *)(lVar58 + lVar59 * 8) =
                       (uVar24 & (((ulong)(uVar48 >> 8) & 0xff) * uVar34 >> 8) * uVar24 +
                                 lVar16 * (uVar27 & uVar24) + (ulong)(uVar20 >> 1) >> 8) +
                       (uVar35 & (((ulong)(uVar48 >> 0x10) & 0xff) * uVar34 >> 8) * uVar35 +
                                 lVar16 * (uVar27 & uVar35) + (ulong)(uVar1 >> 1) >> 8) +
                       (uVar54 & (ulong)(uVar50 >> 1) + ((byte)uVar48 * uVar34 >> 8) * uVar54 +
                                 lVar16 * (uVar27 & uVar54) >> 8);
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar64);
                uVar34 = *(ulong *)(this + 0x118);
              }
              iVar56 = iVar56 + 1;
              lVar15 = lVar15 + (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar52 << 2)
              ;
              lVar58 = lVar58 + (uVar34 >> 2) * 8;
            } while (iVar56 != iVar55);
          }
        }
        else {
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            iVar64 = *(int *)(param_4 + 8);
            iVar56 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar64) {
                do {
                  uVar1 = *(uint *)(lVar15 + lVar59 * 4);
                  uVar34 = *(ulong *)(lVar58 + lVar59 * 8);
                  uVar35 = uVar34 & 0xff00ff;
                  uVar34 = uVar34 & 0xff00;
                  *(ulong *)(lVar58 + lVar59 * 8) =
                       uVar34 + ((((ulong)uVar1 & 0xff00) - uVar34) * (ulong)(uVar1 >> 0x18) >> 8) &
                       0xff00 | uVar35 + (((uVar1 & 0xff00ff) - uVar35) * (ulong)(uVar1 >> 0x18) >>
                                         8) & 0xff00ff;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar64);
                uVar34 = *(ulong *)(this + 0x118);
              }
              iVar56 = iVar56 + 1;
              lVar15 = lVar15 + (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar52 << 2)
              ;
              lVar58 = lVar58 + (uVar34 >> 2) * 8;
            } while (iVar56 != iVar55);
          }
        }
      }
    }
    else {
      lVar16 = plVar14[0x11];
      if ((this[0xf9] != (DeviceImage)0x0) ||
         (cVar13 = (**(code **)(*(long *)this + 0x200))(this), cVar13 == '\0')) goto LAB_0512f918;
      if (*(int *)(this + 0x134) == 0x10) {
        uVar35 = *(ulong *)(this + 0x118);
        iVar55 = *(int *)(param_1 + 0x38);
        uVar52 = *(uint *)(this + 0x13c);
        uVar34 = (ulong)uVar52;
        lVar58 = *(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar35 >> 1)) * 2;
        uVar1 = *(uint *)(this + 0x138);
        lVar16 = lVar16 + (long)*(int *)param_4 + (long)(iVar55 * *(int *)(param_4 + 4));
        uVar20 = *(uint *)(this + 0x140);
        if (gOptimizeSoftwareDrawing == '\0') {
LAB_051300e0:
          iVar56 = *(int *)(param_4 + 0xc);
          if (0 < iVar56) {
            iVar62 = *(int *)(param_4 + 8);
            iVar64 = 0;
            do {
              if (0 < iVar62) {
                lVar59 = 0;
                do {
                  uVar54 = (ulong)*(ushort *)(lVar58 + lVar59 * 2);
                  uVar50 = *(uint *)(lVar15 + (ulong)*(byte *)(lVar16 + lVar59) * 4);
                  lVar28 = (ulong)(uVar50 >> 0x18) + (ulong)(uVar50 >> 0x1f);
                  iVar83 = 0xff - (uVar50 >> 0x18);
                  lVar29 = (long)(iVar83 + (iVar83 >> 7));
                  *(ushort *)(lVar58 + lVar59 * 2) =
                       ((ushort)uVar52 &
                       (ushort)((((ulong)(uVar50 >> 8) & 0xff) * uVar34 * lVar28 >> 8) +
                                lVar29 * (uVar54 & uVar34) + (ulong)(uVar52 >> 1) >> 8)) +
                       ((ushort)uVar20 &
                       (ushort)(((ulong)(uVar50 & 0xff) * (ulong)uVar20 * lVar28 >> 8) +
                                lVar29 * (uVar54 & uVar20) + (ulong)(uVar20 >> 1) >> 8)) +
                       ((ushort)uVar1 &
                       (ushort)((((ulong)(uVar50 >> 0x10) & 0xff) * (ulong)uVar1 * lVar28 >> 8) +
                                lVar29 * (uVar54 & uVar1) + (ulong)(uVar1 >> 1) >> 8));
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar62);
              }
              iVar64 = iVar64 + 1;
              lVar58 = lVar58 + (uVar35 & 0xfffffffffffffffe);
              lVar16 = lVar16 + iVar55;
            } while (iVar64 != iVar56);
          }
        }
        else if (uVar34 == 0x7e0) {
          iVar56 = *(int *)(param_4 + 0xc);
          if (0 < iVar56) {
            iVar62 = *(int *)(param_4 + 8);
            iVar64 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar62) {
                do {
                  uVar3 = *(undefined2 *)(lVar58 + lVar59 * 2);
                  uVar52 = *(uint *)(lVar15 + (ulong)*(byte *)(lVar16 + lVar59) * 4);
                  uVar34 = (ulong)CONCAT22(uVar3,uVar3) & 0x7e0f81f;
                  uVar34 = uVar34 + ((((((ulong)(uVar52 >> 8) & 0xf800) +
                                       ((ulong)uVar52 & 0xfc00) * 0x800) - uVar34) +
                                     ((ulong)(uVar52 >> 3) & 0x1f)) * (ulong)(uVar52 >> 0x1b) >> 5)
                           & 0x7e0f81f;
                  *(ushort *)(lVar58 + lVar59 * 2) = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar62);
              }
              iVar64 = iVar64 + 1;
              lVar58 = lVar58 + (uVar35 & 0xfffffffffffffffe);
              lVar16 = lVar16 + iVar55;
            } while (iVar64 != iVar56);
          }
        }
        else {
          if (uVar34 != 0x3e0) goto LAB_051300e0;
          iVar56 = *(int *)(param_4 + 0xc);
          if (0 < iVar56) {
            iVar62 = *(int *)(param_4 + 8);
            iVar64 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar62) {
                do {
                  uVar3 = *(undefined2 *)(lVar58 + lVar59 * 2);
                  uVar52 = *(uint *)(lVar15 + (ulong)*(byte *)(lVar16 + lVar59) * 4);
                  uVar34 = (ulong)CONCAT22(uVar3,uVar3) & 0x3e07c1f;
                  uVar34 = uVar34 + ((((((ulong)(uVar52 >> 9) & 0x7c00) +
                                       ((ulong)uVar52 & 0xf800) * 0x400) - uVar34) +
                                     ((ulong)(uVar52 >> 3) & 0x1f)) * (ulong)(uVar52 >> 0x1b) >> 5)
                           & 0x3e07c1f;
                  *(ushort *)(lVar58 + lVar59 * 2) = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar62);
              }
              iVar64 = iVar64 + 1;
              lVar58 = lVar58 + (uVar35 & 0xfffffffffffffffe);
              lVar16 = lVar16 + iVar55;
            } while (iVar64 != iVar56);
          }
        }
      }
      else if (*(int *)(this + 0x134) == 0x20) {
        uVar34 = *(ulong *)(this + 0x118);
        iVar55 = *(int *)(param_1 + 0x38);
        lVar58 = *(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar34 >> 2)) * 8;
        uVar52 = *(uint *)(this + 0x138);
        lVar16 = lVar16 + (long)*(int *)param_4 + (long)(iVar55 * *(int *)(param_4 + 4));
        uVar1 = *(uint *)(this + 0x13c);
        uVar20 = *(uint *)(this + 0x140);
        if (gOptimizeSoftwareDrawing == '\0') {
          iVar56 = *(int *)(param_4 + 0xc);
          if (0 < iVar56) {
            uVar35 = (ulong)uVar52;
            uVar24 = (ulong)uVar1;
            uVar54 = (ulong)uVar20;
            iVar62 = *(int *)(param_4 + 8);
            iVar64 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar62) {
                do {
                  uVar27 = *(ulong *)(lVar58 + lVar59 * 8);
                  uVar50 = *(uint *)(lVar15 + (ulong)*(byte *)(lVar16 + lVar59) * 4);
                  uVar34 = (ulong)(uVar50 >> 0x18);
                  lVar28 = (long)(int)(0x100 - (uVar50 >> 0x18));
                  *(ulong *)(lVar58 + lVar59 * 8) =
                       (uVar24 & (((ulong)(uVar50 >> 8) & 0xff) * uVar34 >> 8) * uVar24 +
                                 lVar28 * (uVar27 & uVar24) + (ulong)(uVar1 >> 1) >> 8) +
                       (uVar35 & (((ulong)(uVar50 >> 0x10) & 0xff) * uVar34 >> 8) * uVar35 +
                                 lVar28 * (uVar27 & uVar35) + (ulong)(uVar52 >> 1) >> 8) +
                       (uVar54 & (ulong)(uVar20 >> 1) + ((byte)uVar50 * uVar34 >> 8) * uVar54 +
                                 lVar28 * (uVar27 & uVar54) >> 8);
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar62);
                uVar34 = *(ulong *)(this + 0x118);
              }
              iVar64 = iVar64 + 1;
              lVar16 = lVar16 + iVar55;
              lVar58 = lVar58 + (uVar34 >> 2) * 8;
            } while (iVar64 != iVar56);
          }
        }
        else {
          iVar56 = *(int *)(param_4 + 0xc);
          if (0 < iVar56) {
            iVar62 = *(int *)(param_4 + 8);
            iVar64 = 0;
            do {
              lVar59 = 0;
              if (0 < iVar62) {
                do {
                  uVar34 = *(ulong *)(lVar58 + lVar59 * 8);
                  uVar52 = *(uint *)(lVar15 + (ulong)*(byte *)(lVar16 + lVar59) * 4);
                  uVar35 = uVar34 & 0xff00ff;
                  uVar34 = uVar34 & 0xff00;
                  *(ulong *)(lVar58 + lVar59 * 8) =
                       uVar34 + ((((ulong)uVar52 & 0xff00) - uVar34) * (ulong)(uVar52 >> 0x18) >> 8)
                       & 0xff00 |
                       uVar35 + (((uVar52 & 0xff00ff) - uVar35) * (ulong)(uVar52 >> 0x18) >> 8) &
                       0xff00ff;
                  lVar59 = lVar59 + 1;
                } while ((int)lVar59 < iVar62);
                uVar34 = *(ulong *)(this + 0x118);
              }
              iVar64 = iVar64 + 1;
              lVar16 = lVar16 + iVar55;
              lVar58 = lVar58 + (uVar34 >> 2) * 8;
            } while (iVar64 != iVar56);
          }
        }
      }
    }
    goto LAB_0512fbd8;
  }
LAB_0512f894:
  if (*(char *)((long)plVar14 + 0x92) == '\0') {
LAB_0512f89c:
    if (*(char *)((long)plVar14 + 0x91) == '\0') {
      Color::Color((Color *)aTStack_18,1);
      cVar13 = TRect<int>::operator!=((TRect<int> *)param_5,aTStack_18);
      if (cVar13 == '\0') {
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0x148) != 0)) &&
           ((cVar13 = FUN_0512f7dc(*(undefined4 *)(this + 0x18)), cVar13 != '\0' ||
            (cVar13 = FUN_0512f7dc(*(undefined4 *)(lVar15 + 0x18)), cVar13 == '\0')))) {
          if (0 < *(int *)(this + 0xfc)) {
            (**(code **)(**(long **)(this + 0x148) + 0x18))(*(long **)(this + 0x148),0);
          }
          goto LAB_0512f918;
        }
        if ((this[0xf9] != (DeviceImage)0x0) ||
           (cVar13 = (**(code **)(*(long *)this + 0x200))(this), cVar13 == '\0')) goto LAB_0512f918;
        pcVar57 = *(code **)(*plVar14 + 0x58);
        uVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar15 = (*pcVar57)(plVar14,uVar17);
        if (plVar14[0x10] == 0) {
          uVar52 = *(uint *)(param_1 + 0x38);
          uVar34 = (ulong)uVar52;
          puVar18 = (ulong *)(lVar15 + ((long)*(int *)param_4 +
                                       (long)(int)(uVar52 * *(int *)(param_4 + 4))) * 4);
          if (*(int *)(this + 0x134) == 0x10) {
            uVar35 = *(ulong *)(this + 0x118);
            puVar31 = (undefined8 *)
                      (*(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar35 >> 1)) * 2);
            if (*(char *)((long)plVar14 + 0x91) == '\0') {
              iVar55 = *(int *)(param_4 + 0xc);
              if (0 < iVar55) {
                uVar20 = *(uint *)(param_4 + 8);
                uVar1 = (uVar20 - 8 >> 3) + 1;
                uVar50 = uVar1 * 8;
                iVar56 = 0;
                do {
                  if (0 < (int)uVar20) {
                    if (uVar20 - 1 < 7) {
                      puVar45 = puVar31;
                      puVar25 = puVar18;
                      uVar48 = 0;
                    }
                    else {
                      uVar48 = 0;
                      puVar25 = puVar18;
                      puVar45 = puVar31;
                      do {
                        uVar48 = uVar48 + 1;
                        uVar24 = puVar25[1];
                        uVar54 = *puVar25;
                        puVar45[1] = CONCAT26((short)(puVar25[3] >> 0x20),
                                              CONCAT24((short)puVar25[3],
                                                       CONCAT22((short)(puVar25[2] >> 0x20),
                                                                (short)puVar25[2])));
                        *puVar45 = CONCAT26((short)(uVar24 >> 0x20),
                                            CONCAT24((short)uVar24,
                                                     CONCAT22((short)(uVar54 >> 0x20),(short)uVar54)
                                                    ));
                        puVar25 = puVar25 + 4;
                        puVar45 = puVar45 + 2;
                      } while (uVar48 < uVar1);
                      puVar25 = (ulong *)((long)puVar18 + (ulong)uVar50 * 4);
                      puVar45 = (undefined8 *)((long)puVar31 + (ulong)uVar50 * 2);
                      uVar48 = uVar50;
                      if (uVar50 == uVar20) goto LAB_051316c8;
                    }
                    *(short *)puVar45 = (short)(uint)*puVar25;
                    if ((((((int)(uVar48 + 1) < (int)uVar20) &&
                          (*(short *)((long)puVar45 + 2) = (short)*(uint *)((long)puVar25 + 4),
                          (int)(uVar48 + 2) < (int)uVar20)) &&
                         (*(short *)((long)puVar45 + 4) = (short)(uint)puVar25[1],
                         (int)(uVar48 + 3) < (int)uVar20)) &&
                        ((*(short *)((long)puVar45 + 6) = (short)*(uint *)((long)puVar25 + 0xc),
                         (int)(uVar48 + 4) < (int)uVar20 &&
                         (*(short *)(puVar45 + 1) = (short)(uint)puVar25[2],
                         (int)(uVar48 + 5) < (int)uVar20)))) &&
                       (*(short *)((long)puVar45 + 10) = (short)*(uint *)((long)puVar25 + 0x14),
                       (int)(uVar48 + 6) < (int)uVar20)) {
                      *(short *)((long)puVar45 + 0xc) = (short)(uint)puVar25[3];
                    }
                  }
LAB_051316c8:
                  iVar56 = iVar56 + 1;
                  puVar31 = (undefined8 *)((long)puVar31 + (uVar35 & 0xfffffffffffffffe));
                  puVar18 = (ulong *)((long)puVar18 +
                                     (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
                } while (iVar56 != iVar55);
              }
            }
            else {
              iVar55 = *(int *)(param_4 + 0xc);
              if (0 < iVar55) {
                iVar64 = *(int *)(param_4 + 8);
                puVar49 = (undefined2 *)((long)puVar31 + 2);
                iVar56 = 0;
                do {
                  lVar15 = 0;
                  puVar32 = puVar49;
                  if (0 < iVar64) {
                    do {
                      uVar1 = *(uint *)((long)puVar18 + lVar15 * 4);
                      if (uVar1 >> 0x18 != 0) {
                        puVar32[-1] = (short)uVar1;
                      }
                      lVar15 = lVar15 + 1;
                      puVar32 = puVar32 + 1;
                    } while ((int)lVar15 < iVar64);
                  }
                  iVar56 = iVar56 + 1;
                  puVar18 = (ulong *)((long)puVar18 +
                                     (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
                  puVar49 = (undefined2 *)((long)puVar49 + (uVar35 & 0xfffffffffffffffe));
                } while (iVar56 != iVar55);
              }
            }
          }
          else if (*(int *)(this + 0x134) == 0x20) {
            uVar35 = *(ulong *)(this + 0x118);
            puVar25 = (ulong *)(*(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar35 >> 2)) * 8);
            if (*(char *)((long)plVar14 + 0x91) == '\0') {
              iVar55 = *(int *)(param_4 + 0xc);
              if (0 < iVar55) {
                uVar20 = *(uint *)(param_4 + 8);
                uVar1 = (uVar20 - 4 >> 2) + 1;
                uVar50 = uVar1 * 4;
                iVar56 = 0;
                do {
                  if (0 < (int)uVar20) {
                    if (uVar20 - 1 < 3) {
                      uVar48 = 0;
                      puVar36 = puVar25;
                      puVar42 = puVar18;
LAB_05130d04:
                      *puVar36 = (ulong)(uint)*puVar42;
                      if (((int)(uVar48 + 1) < (int)uVar20) &&
                         (puVar36[1] = (ulong)*(uint *)((long)puVar42 + 4),
                         (int)(uVar48 + 2) < (int)uVar20)) {
                        puVar36[2] = (ulong)(uint)puVar42[1];
                        uVar35 = *(ulong *)(this + 0x118);
                        goto LAB_05130d38;
                      }
                    }
                    else {
                      uVar48 = 0;
                      puVar36 = puVar25;
                      puVar42 = puVar18;
                      do {
                        uVar54 = puVar42[1];
                        uVar35 = *puVar42;
                        uVar48 = uVar48 + 1;
                        puVar36[1] = uVar35 >> 0x20;
                        *puVar36 = uVar35 & 0xffffffff;
                        puVar36[3] = uVar54 >> 0x20;
                        puVar36[2] = uVar54 & 0xffffffff;
                        puVar36 = puVar36 + 4;
                        puVar42 = puVar42 + 2;
                      } while (uVar48 < uVar1);
                      puVar36 = puVar25 + uVar50;
                      puVar42 = (ulong *)((long)puVar18 + (ulong)uVar50 * 4);
                      uVar48 = uVar50;
                      if (uVar50 != uVar20) goto LAB_05130d04;
                    }
                    uVar35 = *(ulong *)(this + 0x118);
                  }
LAB_05130d38:
                  iVar56 = iVar56 + 1;
                  puVar18 = (ulong *)((long)puVar18 +
                                     (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
                  puVar25 = puVar25 + (uVar35 >> 2);
                } while (iVar56 != iVar55);
              }
            }
            else {
              iVar55 = *(int *)(param_4 + 0xc);
              if (0 < iVar55) {
                iVar64 = *(int *)(param_4 + 8);
                iVar56 = 0;
                do {
                  if (0 < iVar64) {
                    lVar15 = 0;
                    puVar36 = puVar25;
                    do {
                      uVar1 = *(uint *)((long)puVar18 + lVar15 * 4);
                      if (uVar1 >> 0x18 != 0) {
                        *puVar36 = (ulong)uVar1;
                      }
                      lVar15 = lVar15 + 1;
                      puVar36 = puVar36 + 1;
                    } while ((int)lVar15 < iVar64);
                    uVar35 = *(ulong *)(this + 0x118);
                  }
                  iVar56 = iVar56 + 1;
                  puVar18 = (ulong *)((long)puVar18 +
                                     (-(ulong)(uVar52 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2));
                  puVar25 = puVar25 + (uVar35 >> 2);
                } while (iVar56 != iVar55);
              }
            }
          }
        }
        else {
          iVar55 = *(int *)(param_1 + 0x38);
          pbVar30 = (byte *)(plVar14[0x11] +
                            (long)*(int *)param_4 + (long)(iVar55 * *(int *)(param_4 + 4)));
          if (*(int *)(this + 0x134) == 0x10) {
            uVar34 = *(ulong *)(this + 0x118);
            lVar58 = *(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar34 >> 1)) * 2;
            if (*(char *)((long)plVar14 + 0x91) == '\0') {
              iVar56 = *(int *)(param_4 + 0xc);
              if (0 < iVar56) {
                iVar62 = *(int *)(param_4 + 8);
                iVar64 = 0;
                do {
                  lVar59 = 0;
                  if (0 < iVar62) {
                    do {
                      *(short *)(lVar58 + lVar59 * 2) =
                           (short)*(undefined4 *)(lVar15 + (ulong)pbVar30[lVar59] * 4);
                      lVar59 = lVar59 + 1;
                    } while ((int)lVar59 < iVar62);
                  }
                  iVar64 = iVar64 + 1;
                  lVar58 = lVar58 + (uVar34 & 0xfffffffffffffffe);
                  pbVar30 = pbVar30 + iVar55;
                } while (iVar64 != iVar56);
              }
            }
            else {
              iVar56 = *(int *)(param_4 + 0xc);
              if (0 < iVar56) {
                iVar62 = *(int *)(param_4 + 8);
                lVar58 = lVar58 + 2;
                iVar64 = 0;
                do {
                  if (0 < iVar62) {
                    pbVar23 = pbVar30;
                    lVar59 = lVar58;
                    do {
                      pbVar22 = pbVar23 + 1;
                      uVar52 = *(uint *)(lVar15 + (ulong)*pbVar23 * 4);
                      if (uVar52 >> 0x18 != 0) {
                        *(short *)(lVar59 + -2) = (short)uVar52;
                      }
                      lVar59 = lVar59 + 2;
                      pbVar23 = pbVar22;
                    } while (pbVar30 + (ulong)(iVar62 - 1) + 1 != pbVar22);
                  }
                  iVar64 = iVar64 + 1;
                  pbVar30 = pbVar30 + iVar55;
                  lVar58 = lVar58 + (uVar34 & 0xfffffffffffffffe);
                } while (iVar64 != iVar56);
              }
            }
          }
          else if (*(int *)(this + 0x134) == 0x20) {
            uVar34 = *(ulong *)(this + 0x118);
            puVar18 = (ulong *)(*(long *)(this + 0x120) + (lVar59 + (lVar58 * uVar34 >> 2)) * 8);
            if (*(char *)((long)plVar14 + 0x91) == '\0') {
              iVar56 = *(int *)(param_4 + 0xc);
              if (0 < iVar56) {
                iVar62 = *(int *)(param_4 + 8);
                iVar64 = 0;
                do {
                  lVar58 = 0;
                  if (0 < iVar62) {
                    do {
                      puVar18[lVar58] = (ulong)*(uint *)(lVar15 + (ulong)pbVar30[lVar58] * 4);
                      lVar58 = lVar58 + 1;
                    } while ((int)lVar58 < iVar62);
                    uVar34 = *(ulong *)(this + 0x118);
                  }
                  iVar64 = iVar64 + 1;
                  pbVar30 = pbVar30 + iVar55;
                  puVar18 = puVar18 + (uVar34 >> 2);
                } while (iVar64 != iVar56);
              }
            }
            else {
              iVar56 = *(int *)(param_4 + 0xc);
              if (0 < iVar56) {
                iVar62 = *(int *)(param_4 + 8);
                iVar64 = 0;
                do {
                  if (0 < iVar62) {
                    pbVar23 = pbVar30;
                    puVar25 = puVar18;
                    do {
                      pbVar22 = pbVar23 + 1;
                      uVar52 = *(uint *)(lVar15 + (ulong)*pbVar23 * 4);
                      if (uVar52 >> 0x18 != 0) {
                        *puVar25 = (ulong)uVar52;
                      }
                      pbVar23 = pbVar22;
                      puVar25 = puVar25 + 1;
                    } while (pbVar30 + (ulong)(iVar62 - 1) + 1 != pbVar22);
                    uVar34 = *(ulong *)(this + 0x118);
                  }
                  iVar64 = iVar64 + 1;
                  pbVar30 = pbVar30 + iVar55;
                  puVar18 = puVar18 + (uVar34 >> 2);
                } while (iVar64 != iVar56);
              }
            }
          }
        }
        goto LAB_0512fbd8;
      }
    }
  }
  if ((this[0xf9] != (DeviceImage)0x0) ||
     (cVar13 = (**(code **)(*(long *)this + 0x200))(this), cVar13 == '\0')) goto LAB_0512f918;
  pcVar57 = *(code **)(*plVar14 + 0x58);
  uVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
  lVar15 = (*pcVar57)(plVar14,uVar17);
  lVar16 = (**(code **)(*plVar14 + 0x60))(plVar14);
  if (plVar14[0x10] == 0) {
    lVar28 = (long)*(int *)param_4 + (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38));
    puVar18 = (ulong *)(lVar15 + lVar28 * 4);
    if (*(int *)(this + 0x134) == 0x10) {
      uVar52 = *(uint *)(this + 0x13c);
      pbVar30 = (byte *)(lVar16 + lVar28);
      uVar1 = *(uint *)(this + 0x138);
      puVar26 = (ushort *)
                (*(long *)(this + 0x120) +
                (lVar59 + ((ulong)(lVar58 * *(long *)(this + 0x118)) >> 1)) * 2);
      uVar20 = *(uint *)(this + 0x140);
      Color::Color((Color *)aTStack_18,1);
      cVar13 = Sexy::operator==(param_5,(Color *)aTStack_18);
      uVar4 = (ushort)uVar1;
      uVar5 = (ushort)uVar52;
      uVar6 = (ushort)uVar20;
      if (cVar13 == '\0') {
        iVar62 = *(int *)(param_5 + 0xc);
        iVar55 = (iVar62 * *(int *)(param_5 + 4)) / 0xff;
        iVar56 = (iVar62 * *(int *)(param_5 + 8)) / 0xff;
        iVar64 = (iVar62 * *(int *)param_5) / 0xff;
        if ((iVar55 == iVar56) && (iVar64 == iVar55)) {
          iVar83 = iVar64 >> 3;
          if (uVar52 == 0x7e0) {
            iVar56 = *(int *)(param_4 + 0xc);
            for (iVar55 = 0; iVar55 < iVar56; iVar55 = iVar55 + 1) {
              uVar52 = *(uint *)(param_4 + 8);
              if (0 < (int)uVar52) {
                puVar33 = puVar26;
                puVar25 = puVar18;
                pbVar23 = pbVar30;
                do {
                  bVar47 = *pbVar23;
                  uVar34 = (ulong)bVar47;
                  uVar1 = (uint)*puVar25 >> 0x18;
                  if ((int)uVar52 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar52;
                    uVar34 = (ulong)bVar47;
                    uVar20 = uVar52;
                    if ((uVar1 != 0xff) || (iVar62 != 0xff)) {
LAB_05133a84:
                      bVar47 = (byte)uVar34;
                      if (uVar1 == 0) {
                        puVar33 = puVar33 + uVar34;
                        puVar25 = (ulong *)((long)puVar25 + uVar34 * 4);
                      }
                      else {
                        lVar15 = 0;
                        if (uVar20 != 0) {
                          do {
                            uVar1 = *(uint *)((long)puVar25 + lVar15 * 4);
                            uVar3 = (undefined2)uVar1;
                            uVar34 = ((ulong)CONCAT22(uVar3,uVar3) & 0x7e0f81f) * (long)iVar83 +
                                     (long)(0x100 - (int)(((ulong)(uVar1 >> 0x18) * (long)iVar62) /
                                                         0xff) >> 3) *
                                     (ulong)(CONCAT22(puVar33[lVar15],puVar33[lVar15]) & 0x7e0f81f)
                                     >> 5 & 0x7e0f81f;
                            puVar33[lVar15] = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                            lVar15 = lVar15 + 1;
                          } while ((int)lVar15 < (int)uVar20);
                          goto LAB_05133a2c;
                        }
                      }
                    }
                    else {
LAB_051339e4:
                      lVar15 = 0;
                      do {
                        uVar1 = *(uint *)((long)puVar25 + lVar15 * 4);
                        uVar34 = ((ulong)CONCAT42(uVar1,(short)uVar1) & 0x7e0f81f) * (long)iVar83 >>
                                 5 & 0x7e0f81f;
                        puVar33[lVar15] = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                        lVar15 = lVar15 + 1;
                      } while ((int)lVar15 < (int)uVar20);
LAB_05133a2c:
                      uVar34 = (ulong)bVar47;
                      lVar15 = (ulong)(uVar20 - 1) + 1;
                      puVar25 = (ulong *)((long)puVar25 + lVar15 * 4);
                      puVar33 = puVar33 + lVar15;
                    }
                  }
                  else {
                    uVar20 = (uint)bVar47;
                    if ((uVar1 != 0xff) || (iVar62 != 0xff)) goto LAB_05133a84;
                    uVar20 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_051339e4;
                    uVar34 = 0;
                    uVar20 = 0;
                  }
                  uVar52 = uVar52 - uVar20;
                  pbVar23 = pbVar23 + uVar34;
                } while (0 < (int)uVar52);
              }
              puVar18 = (ulong *)((long)puVar18 + (long)*(int *)(param_1 + 0x38) * 4);
              pbVar30 = pbVar30 + *(int *)(param_1 + 0x38);
              puVar26 = (ushort *)((long)puVar26 + (*(ulong *)(this + 0x118) & 0xfffffffffffffffe));
            }
          }
          else {
            if (uVar52 != 0x3e0) goto LAB_05131fe4;
            iVar56 = *(int *)(param_4 + 0xc);
            for (iVar55 = 0; iVar55 < iVar56; iVar55 = iVar55 + 1) {
              uVar52 = *(uint *)(param_4 + 8);
              if (0 < (int)uVar52) {
                puVar33 = puVar26;
                puVar25 = puVar18;
                pbVar23 = pbVar30;
                do {
                  bVar47 = *pbVar23;
                  uVar34 = (ulong)bVar47;
                  uVar1 = (uint)*puVar25 >> 0x18;
                  if ((int)uVar52 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar52;
                    uVar34 = (ulong)bVar47;
                    uVar20 = uVar52;
                    if ((uVar1 != 0xff) || (iVar62 != 0xff)) {
LAB_051338b8:
                      bVar47 = (byte)uVar34;
                      if (uVar1 == 0) {
                        puVar33 = puVar33 + uVar34;
                        puVar25 = (ulong *)((long)puVar25 + uVar34 * 4);
                      }
                      else {
                        lVar15 = 0;
                        if (uVar20 != 0) {
                          do {
                            uVar1 = *(uint *)((long)puVar25 + lVar15 * 4);
                            uVar3 = (undefined2)uVar1;
                            uVar34 = ((ulong)CONCAT22(uVar3,uVar3) & 0x3e07c1f) * (long)iVar83 +
                                     (long)(0x100 - (int)(((ulong)(uVar1 >> 0x18) * (long)iVar62) /
                                                         0xff) >> 3) *
                                     (ulong)(CONCAT22(puVar33[lVar15],puVar33[lVar15]) & 0x3e07c1f)
                                     >> 5 & 0x3e07c1f;
                            puVar33[lVar15] = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                            lVar15 = lVar15 + 1;
                          } while ((int)lVar15 < (int)uVar20);
                          goto LAB_05133860;
                        }
                      }
                    }
                    else {
LAB_05133818:
                      lVar15 = 0;
                      do {
                        uVar1 = *(uint *)((long)puVar25 + lVar15 * 4);
                        uVar34 = ((ulong)CONCAT42(uVar1,(short)uVar1) & 0x3e07c1f) * (long)iVar83 >>
                                 5 & 0x3e07c1f;
                        puVar33[lVar15] = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                        lVar15 = lVar15 + 1;
                      } while ((int)lVar15 < (int)uVar20);
LAB_05133860:
                      uVar34 = (ulong)bVar47;
                      lVar15 = (ulong)(uVar20 - 1) + 1;
                      puVar25 = (ulong *)((long)puVar25 + lVar15 * 4);
                      puVar33 = puVar33 + lVar15;
                    }
                  }
                  else {
                    uVar20 = (uint)bVar47;
                    if ((uVar1 != 0xff) || (iVar62 != 0xff)) goto LAB_051338b8;
                    uVar20 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_05133818;
                    uVar34 = 0;
                    uVar20 = 0;
                  }
                  uVar52 = uVar52 - uVar20;
                  pbVar23 = pbVar23 + uVar34;
                } while (0 < (int)uVar52);
              }
              puVar18 = (ulong *)((long)puVar18 + (long)*(int *)(param_1 + 0x38) * 4);
              pbVar30 = pbVar30 + *(int *)(param_1 + 0x38);
              puVar26 = (ushort *)((long)puVar26 + (*(ulong *)(this + 0x118) & 0xfffffffffffffffe));
            }
          }
        }
        else {
LAB_05131fe4:
          iVar83 = *(int *)(param_4 + 0xc);
          if (0 < iVar83) {
            iVar70 = *(int *)(param_1 + 0x38);
            uVar50 = *(uint *)(param_4 + 8);
            uVar34 = *(ulong *)(this + 0x118);
            iVar69 = 0;
            lVar15 = NEON_shl((long)iVar70,2);
            do {
              if (0 < (int)uVar50) {
                puVar33 = puVar26;
                puVar25 = puVar18;
                pbVar23 = pbVar30;
                uVar48 = uVar50;
                do {
                  bVar47 = *pbVar23;
                  uVar38 = (uint)bVar47;
                  uVar39 = (uint)*puVar25 >> 0x18;
                  uVar51 = (uint)bVar47;
                  if ((int)uVar48 < (int)(uint)bVar47) {
                    uVar51 = uVar48 & 0xff;
                    uVar21 = uVar48;
                    if ((uVar39 != 0xff) || (iVar62 != 0xff)) {
LAB_05132174:
                      uVar38 = uVar21;
                      if (uVar39 == 0) {
                        uVar35 = (ulong)(byte)uVar51;
                        puVar33 = puVar33 + uVar51;
                        puVar25 = (ulong *)((long)puVar25 + (ulong)uVar51 * 4);
                      }
                      else {
                        lVar58 = 0;
                        uVar35 = (ulong)(byte)uVar51;
                        if (uVar38 != 0) {
                          do {
                            uVar39 = *(uint *)((long)puVar25 + lVar58 * 4);
                            uVar21 = (uint)puVar33[lVar58];
                            iVar73 = 0x100 - (int)(((ulong)(uVar39 >> 0x18) * (long)iVar62) / 0xff);
                            puVar33[lVar58] =
                                 (uVar5 & (ushort)((uVar39 & uVar52) * iVar55 +
                                                   iVar73 * (uVar21 & uVar52) >> 8)) +
                                 (uVar4 & (ushort)((uVar39 & uVar1) * iVar64 +
                                                   iVar73 * (uVar21 & uVar1) >> 8)) +
                                 (uVar6 & (ushort)((uVar39 & uVar20) * iVar56 +
                                                   iVar73 * (uVar21 & uVar20) >> 8));
                            lVar58 = lVar58 + 1;
                          } while ((int)lVar58 < (int)uVar38);
                          goto LAB_05132100;
                        }
                      }
                    }
                    else {
LAB_051320b0:
                      uVar38 = uVar21;
                      lVar58 = 0;
                      do {
                        uVar39 = *(uint *)((long)puVar25 + lVar58 * 4);
                        puVar33[lVar58] =
                             (uVar5 & (ushort)((uVar39 & uVar52) * iVar55 >> 8)) +
                             (uVar4 & (ushort)((uVar39 & uVar1) * iVar64 >> 8)) +
                             (uVar6 & (ushort)((uVar39 & uVar20) * iVar56 >> 8));
                        lVar58 = lVar58 + 1;
                      } while ((int)lVar58 < (int)uVar38);
LAB_05132100:
                      lVar58 = (ulong)(uVar38 - 1) + 1;
                      puVar25 = (ulong *)((long)puVar25 + lVar58 * 4);
                      puVar33 = puVar33 + lVar58;
                      uVar35 = (ulong)(byte)uVar51;
                    }
                  }
                  else {
                    uVar21 = (uint)bVar47;
                    if ((uVar39 != 0xff) || (iVar62 != 0xff)) goto LAB_05132174;
                    uVar35 = 0;
                    uVar21 = (uint)bVar47;
                    if (uVar51 != 0) goto LAB_051320b0;
                  }
                  uVar48 = uVar48 - uVar38;
                  pbVar23 = pbVar23 + uVar35;
                } while (0 < (int)uVar48);
              }
              iVar69 = iVar69 + 1;
              puVar26 = (ushort *)((long)puVar26 + (uVar34 & 0xfffffffffffffffe));
              puVar18 = (ulong *)((long)puVar18 + lVar15);
              pbVar30 = pbVar30 + iVar70;
            } while (iVar69 != iVar83);
          }
        }
      }
      else if (uVar52 == 0x7e0) {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          iVar64 = *(int *)(param_1 + 0x38);
          uVar34 = *(ulong *)(this + 0x118);
          uVar52 = *(uint *)(param_4 + 8);
          iVar56 = 0;
          uVar1 = uVar52;
          pbVar23 = pbVar30;
          puVar33 = puVar26;
          puVar25 = puVar18;
          do {
            for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar50) {
              bVar47 = *pbVar30;
              uVar50 = (uint)bVar47;
              uVar35 = *puVar18;
              uVar20 = (uint)uVar35 >> 0x18;
              if ((int)(uint)bVar47 <= (int)uVar1) {
                iVar62 = 0x100 - uVar20;
                uVar20 = (uint)bVar47;
                if (iVar62 != 1) goto LAB_051326d8;
                uVar35 = 0;
                if (bVar47 != 0) goto LAB_05132b1c;
                goto LAB_05132acc;
              }
              iVar62 = 0x100 - uVar20;
              bVar47 = (byte)uVar1;
              uVar50 = uVar1;
              uVar20 = uVar1;
              if (iVar62 == 1) {
LAB_05132b1c:
                uVar20 = (uVar50 - 8 >> 3) + 1;
                uVar48 = uVar20 * 8;
                if (uVar50 - 1 < 7) {
                  uVar48 = 0;
                  puVar19 = puVar26;
                  puVar36 = puVar18;
LAB_05132b80:
                  *puVar19 = (ushort)(uint)*puVar36;
                  if (((((int)(uVar48 + 1) < (int)uVar50) &&
                       (puVar19[1] = (ushort)*(uint *)((long)puVar36 + 4),
                       (int)(uVar48 + 2) < (int)uVar50)) &&
                      (puVar19[2] = (ushort)(uint)puVar36[1], (int)(uVar48 + 3) < (int)uVar50)) &&
                     (((puVar19[3] = (ushort)*(uint *)((long)puVar36 + 0xc),
                       (int)(uVar48 + 4) < (int)uVar50 &&
                       (puVar19[4] = (ushort)(uint)puVar36[2], (int)(uVar48 + 5) < (int)uVar50)) &&
                      (puVar19[5] = (ushort)*(uint *)((long)puVar36 + 0x14),
                      (int)(uVar48 + 6) < (int)uVar50)))) {
                    puVar19[6] = (ushort)(uint)puVar36[3];
                  }
                }
                else {
                  uVar39 = 0;
                  puVar36 = puVar18;
                  puVar19 = puVar26;
                  do {
                    uVar39 = uVar39 + 1;
                    uVar54 = puVar36[1];
                    uVar35 = *puVar36;
                    *(ulong *)(puVar19 + 4) =
                         CONCAT26((short)(puVar36[3] >> 0x20),
                                  CONCAT24((short)puVar36[3],
                                           CONCAT22((short)(puVar36[2] >> 0x20),(short)puVar36[2])))
                    ;
                    *(ulong *)puVar19 =
                         CONCAT26((short)(uVar54 >> 0x20),
                                  CONCAT24((short)uVar54,
                                           CONCAT22((short)(uVar35 >> 0x20),(short)uVar35)));
                    puVar36 = puVar36 + 4;
                    puVar19 = puVar19 + 8;
                  } while (uVar39 < uVar20);
                  puVar19 = puVar26 + uVar48;
                  puVar36 = (ulong *)((long)puVar18 + (ulong)uVar48 * 4);
                  if (uVar50 != uVar48) goto LAB_05132b80;
                }
                uVar35 = (ulong)bVar47;
                lVar15 = (ulong)(uVar50 - 1) + 1;
                puVar26 = puVar26 + lVar15;
                puVar18 = (ulong *)((long)puVar18 + lVar15 * 4);
              }
              else {
LAB_051326d8:
                uVar50 = uVar20;
                if (iVar62 == 0x100) {
                  uVar35 = (ulong)bVar47;
                  puVar26 = puVar26 + bVar47;
                  puVar18 = (ulong *)((long)puVar18 + (ulong)bVar47 * 4);
                }
                else {
                  puVar19 = puVar26 + 1;
                  puVar18 = (ulong *)((long)puVar18 + 4);
                  uVar20 = (int)((CONCAT22(*puVar26,*puVar26) & 0x7e0f81f) * (iVar62 >> 3)) >> 5 &
                           0x7e0f81f;
                  *puVar26 = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) + (short)(uint)uVar35;
                  if ((int)uVar50 < 2) {
                    uVar35 = (ulong)bVar47;
                    puVar26 = puVar19;
                  }
                  else {
                    uVar20 = (uVar50 - 9 >> 3) + 1;
                    uVar48 = uVar20 * 8;
                    if (uVar50 - 2 < 7) {
                      iVar62 = 1;
                      puVar26 = puVar19;
                      puVar36 = puVar18;
LAB_0513287c:
                      uVar20 = (int)((CONCAT22(*puVar26,*puVar26) & 0x7e0f81f) *
                                    (int)(0x100 - (ulong)((uint)*puVar36 >> 0x18) >> 3)) >> 5 &
                               0x7e0f81f;
                      *puVar26 = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) + (short)(uint)*puVar36
                      ;
                      if (((iVar62 + 1 < (int)uVar50) &&
                          (uVar20 = (int)((CONCAT22(puVar26[1],puVar26[1]) & 0x7e0f81f) *
                                         (int)(0x100 - (ulong)(*(uint *)((long)puVar36 + 4) >> 0x18)
                                              >> 3)) >> 5 & 0x7e0f81f,
                          puVar26[1] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                       (short)*(uint *)((long)puVar36 + 4), iVar62 + 2 < (int)uVar50
                          )) && ((uVar20 = (int)((CONCAT22(puVar26[2],puVar26[2]) & 0x7e0f81f) *
                                                (int)(0x100 - (ulong)((uint)puVar36[1] >> 0x18) >> 3
                                                     )) >> 5 & 0x7e0f81f,
                                 puVar26[2] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                              (short)(uint)puVar36[1], iVar62 + 3 < (int)uVar50 &&
                                 (((uVar20 = (int)((CONCAT22(puVar26[3],puVar26[3]) & 0x7e0f81f) *
                                                  (int)(0x100 - (ulong)(*(uint *)((long)puVar36 +
                                                                                 0xc) >> 0x18) >> 3)
                                                  ) >> 5 & 0x7e0f81f,
                                   puVar26[3] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                                (short)*(uint *)((long)puVar36 + 0xc),
                                   iVar62 + 4 < (int)uVar50 &&
                                   (uVar20 = (int)((CONCAT22(puVar26[4],puVar26[4]) & 0x7e0f81f) *
                                                  (int)(0x100 - (ulong)((uint)puVar36[2] >> 0x18) >>
                                                       3)) >> 5 & 0x7e0f81f,
                                   puVar26[4] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                                (short)(uint)puVar36[2], iVar62 + 5 < (int)uVar50))
                                  && (uVar20 = (int)((CONCAT22(puVar26[5],puVar26[5]) & 0x7e0f81f) *
                                                    (int)(0x100 - (ulong)(*(uint *)((long)puVar36 +
                                                                                   0x14) >> 0x18) >>
                                                         3)) >> 5 & 0x7e0f81f,
                                     puVar26[5] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                                  (short)*(uint *)((long)puVar36 + 0x14),
                                     iVar62 + 6 < (int)uVar50)))))) {
                        uVar20 = (int)((CONCAT22(puVar26[6],puVar26[6]) & 0x7e0f81f) *
                                      (int)(0x100 - (ulong)((uint)puVar36[3] >> 0x18) >> 3)) >> 5 &
                                 0x7e0f81f;
                        puVar26[6] = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) +
                                     (short)(uint)puVar36[3];
                      }
                    }
                    else {
                      uVar39 = 0;
                      puVar36 = puVar18;
                      puVar26 = puVar19;
                      do {
                        uVar72 = *(undefined8 *)(puVar26 + 4);
                        uVar17 = *(undefined8 *)puVar26;
                        uVar39 = uVar39 + 1;
                        uVar27 = puVar36[1];
                        uVar24 = *puVar36;
                        uVar38 = (uint)uVar17 & 0xffff;
                        uVar51 = (uint)uVar72 & 0xffff;
                        uVar54 = puVar36[3];
                        uVar35 = puVar36[2];
                        uVar84 = (undefined1)((ulong)uVar72 >> 0x10);
                        uVar85 = (undefined1)((ulong)uVar72 >> 0x18);
                        uVar86 = (undefined1)((ulong)uVar72 >> 0x30);
                        uVar87 = (undefined1)((ulong)uVar72 >> 0x38);
                        uVar88 = (undefined1)((ulong)uVar17 >> 0x10);
                        uVar89 = (undefined1)((ulong)uVar17 >> 0x18);
                        uVar90 = (undefined1)((ulong)uVar17 >> 0x30);
                        uVar91 = (undefined1)((ulong)uVar17 >> 0x38);
                        uVar21 = CONCAT13((char)(uVar38 >> 8),CONCAT12((char)uVar38,(short)uVar17));
                        uVar12 = CONCAT13((char)((ulong)uVar17 >> 0x28),
                                          CONCAT12((char)((ulong)uVar17 >> 0x20),
                                                   (short)((ulong)uVar17 >> 0x20)));
                        uVar51 = CONCAT13((char)(uVar51 >> 8),CONCAT12((char)uVar51,(short)uVar72));
                        uVar38 = CONCAT13((char)((ulong)uVar72 >> 0x28),
                                          CONCAT12((char)((ulong)uVar72 >> 0x20),
                                                   (short)((ulong)uVar72 >> 0x20)));
                        iVar76 = (uVar21 & 0x7e0f81f) *
                                 (int)(0x100 - ((uVar24 & 0xffffffff) >> 0x18) >> 3);
                        iVar79 = ((uint)(CONCAT17(uVar89,CONCAT16(uVar88,CONCAT15(uVar89,CONCAT14(
                                                  uVar88,uVar21)))) >> 0x20) & 0x7e0f81f) *
                                 (int)(0x100 - (uVar24 >> 0x38) >> 3);
                        iVar80 = (uVar12 & 0x7e0f81f) *
                                 (int)(0x100 - ((uVar27 & 0xffffffff) >> 0x18) >> 3);
                        iVar81 = ((uint)(CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar91,CONCAT14(
                                                  uVar90,uVar12)))) >> 0x20) & 0x7e0f81f) *
                                 (int)(0x100 - (uVar27 >> 0x38) >> 3);
                        iVar62 = (uVar51 & 0x7e0f81f) *
                                 (int)(0x100 - ((uVar35 & 0xffffffff) >> 0x18) >> 3);
                        iVar69 = ((uint)(CONCAT17(uVar85,CONCAT16(uVar84,CONCAT15(uVar85,CONCAT14(
                                                  uVar84,uVar51)))) >> 0x20) & 0x7e0f81f) *
                                 (int)(0x100 - (uVar35 >> 0x38) >> 3);
                        iVar70 = (uVar38 & 0x7e0f81f) *
                                 (int)(0x100 - ((uVar54 & 0xffffffff) >> 0x18) >> 3);
                        iVar75 = ((uint)(CONCAT17(uVar87,CONCAT16(uVar86,CONCAT15(uVar87,CONCAT14(
                                                  uVar86,uVar38)))) >> 0x20) & 0x7e0f81f) *
                                 (int)(0x100 - (uVar54 >> 0x38) >> 3);
                        iVar78 = iVar76 >> 5;
                        iVar82 = iVar80 >> 5;
                        iVar83 = iVar62 >> 5;
                        iVar73 = iVar70 >> 5;
                        uVar74 = (ushort)iVar78 & 0xf81f;
                        uVar63 = CONCAT13((char)(iVar76 >> 0x1d),(int3)iVar78);
                        uVar6 = (ushort)((uint)uVar63 >> 0x10) & 0x7e0;
                        uVar65 = CONCAT15((char)((uint)(iVar79 >> 5) >> 8),
                                          CONCAT14((char)(iVar79 >> 5),uVar63));
                        uVar77 = (ushort)((uint6)uVar65 >> 0x20) & 0xf81f;
                        uVar4 = (ushort)(CONCAT17((char)(iVar79 >> 0x1d),
                                                  CONCAT16((char)((uint3)(int3)(iVar79 >> 0xd) >> 8)
                                                           ,uVar65)) >> 0x30) & 0x7e0;
                        uVar8 = CONCAT11((char)(iVar80 >> 0x1d),(char)((uint)iVar82 >> 0x10)) &
                                0x7e0;
                        uVar9 = CONCAT11((char)(iVar81 >> 0x1d),
                                         (char)((uint3)(int3)(iVar81 >> 0xd) >> 8)) & 0x7e0;
                        uVar60 = (ushort)iVar83 & 0xf81f;
                        uVar63 = CONCAT13((char)(iVar62 >> 0x1d),(int3)iVar83);
                        uVar7 = (ushort)((uint)uVar63 >> 0x10) & 0x7e0;
                        uVar65 = CONCAT15((char)((uint)(iVar69 >> 5) >> 8),
                                          CONCAT14((char)(iVar69 >> 5),uVar63));
                        uVar66 = (ushort)((uint6)uVar65 >> 0x20) & 0xf81f;
                        uVar5 = (ushort)(CONCAT17((char)(iVar69 >> 0x1d),
                                                  CONCAT16((char)((uint3)(int3)(iVar69 >> 0xd) >> 8)
                                                           ,uVar65)) >> 0x30) & 0x7e0;
                        uVar10 = CONCAT11((char)(iVar70 >> 0x1d),(char)((uint)iVar73 >> 0x10)) &
                                 0x7e0;
                        uVar11 = CONCAT11((char)(iVar75 >> 0x1d),
                                          (char)((uint3)(int3)(iVar75 >> 0xd) >> 8)) & 0x7e0;
                        sVar61 = CONCAT11((byte)(uVar6 >> 8) | (byte)(uVar74 >> 8),
                                          (byte)uVar6 | (byte)uVar74);
                        uVar63 = CONCAT13((byte)(uVar4 >> 8) | (byte)(uVar77 >> 8),
                                          CONCAT12((byte)uVar4 | (byte)uVar77,sVar61));
                        uVar65 = CONCAT15((byte)(uVar8 >> 8) | (byte)((uint)iVar82 >> 8) & 0xf8,
                                          CONCAT14((byte)uVar8 | (byte)iVar82 & 0x1f,uVar63));
                        sVar67 = CONCAT11((byte)(uVar7 >> 8) | (byte)(uVar60 >> 8),
                                          (byte)uVar7 | (byte)uVar60);
                        uVar68 = CONCAT13((byte)(uVar5 >> 8) | (byte)(uVar66 >> 8),
                                          CONCAT12((byte)uVar5 | (byte)uVar66,sVar67));
                        uVar71 = CONCAT15((byte)(uVar10 >> 8) | (byte)((uint)iVar73 >> 8) & 0xf8,
                                          CONCAT14((byte)uVar10 | (byte)iVar73 & 0x1f,uVar68));
                        *(ulong *)(puVar26 + 4) =
                             CONCAT26((short)(CONCAT17((byte)(uVar11 >> 8) |
                                                       (byte)((uint)(iVar75 >> 5) >> 8) & 0xf8,
                                                       CONCAT16((byte)uVar11 |
                                                                (byte)(iVar75 >> 5) & 0x1f,uVar71))
                                             >> 0x30) + (short)(uVar54 >> 0x20),
                                      CONCAT24((short)((uint6)uVar71 >> 0x20) + (short)uVar54,
                                               CONCAT22((short)((uint)uVar68 >> 0x10) +
                                                        (short)(uVar35 >> 0x20),
                                                        sVar67 + (short)uVar35)));
                        *(ulong *)puVar26 =
                             CONCAT26((short)(CONCAT17((byte)(uVar9 >> 8) |
                                                       (byte)((uint)(iVar81 >> 5) >> 8) & 0xf8,
                                                       CONCAT16((byte)uVar9 |
                                                                (byte)(iVar81 >> 5) & 0x1f,uVar65))
                                             >> 0x30) + (short)(uVar27 >> 0x20),
                                      CONCAT24((short)((uint6)uVar65 >> 0x20) + (short)uVar27,
                                               CONCAT22((short)((uint)uVar63 >> 0x10) +
                                                        (short)(uVar24 >> 0x20),
                                                        sVar61 + (short)uVar24)));
                        puVar36 = puVar36 + 4;
                        puVar26 = puVar26 + 8;
                      } while (uVar39 < uVar20);
                      iVar62 = uVar48 + 1;
                      puVar26 = puVar19 + uVar48;
                      puVar36 = (ulong *)((long)puVar18 + (ulong)uVar48 * 4);
                      if (uVar48 != uVar50 - 1) goto LAB_0513287c;
                    }
                    lVar15 = (ulong)(uVar50 - 2) + 1;
                    uVar35 = (ulong)bVar47;
                    puVar18 = (ulong *)((long)puVar18 + lVar15 * 4);
                    puVar26 = puVar19 + lVar15;
                  }
                }
              }
LAB_05132acc:
              pbVar30 = pbVar30 + uVar35;
            }
            iVar56 = iVar56 + 1;
            puVar18 = (ulong *)((long)puVar25 + (long)iVar64 * 4);
            puVar26 = (ushort *)((long)puVar33 + (uVar34 & 0xfffffffffffffffe));
            pbVar30 = pbVar23 + iVar64;
            uVar1 = uVar52;
            pbVar23 = pbVar30;
            puVar33 = puVar26;
            puVar25 = puVar18;
          } while (iVar56 != iVar55);
        }
      }
      else if (uVar52 == 0x3e0) {
        iVar56 = *(int *)(param_4 + 0xc);
        for (iVar55 = 0; iVar55 < iVar56; iVar55 = iVar55 + 1) {
          puVar25 = puVar18;
          puVar33 = puVar26;
          pbVar23 = pbVar30;
          for (uVar52 = *(uint *)(param_4 + 8); 0 < (int)uVar52; uVar52 = uVar52 - uVar20) {
            bVar47 = *pbVar23;
            uVar20 = (uint)bVar47;
            uVar34 = *puVar25;
            uVar1 = (uint)uVar34 >> 0x18;
            if ((int)(uint)bVar47 <= (int)uVar52) {
              iVar64 = 0x100 - uVar1;
              uVar1 = (uint)bVar47;
              if (iVar64 != 1) goto LAB_05133218;
              uVar34 = 0;
              if (bVar47 != 0) goto LAB_05133660;
              goto LAB_0513360c;
            }
            iVar64 = 0x100 - uVar1;
            bVar47 = (byte)uVar52;
            uVar20 = uVar52;
            uVar1 = uVar52;
            if (iVar64 == 1) {
LAB_05133660:
              uVar1 = (uVar20 - 8 >> 3) + 1;
              uVar50 = uVar1 * 8;
              if (uVar20 - 1 < 7) {
                uVar50 = 0;
                puVar19 = puVar33;
                puVar36 = puVar25;
LAB_051336c4:
                *puVar19 = (ushort)(uint)*puVar36;
                if ((((int)(uVar50 + 1) < (int)uVar20) &&
                    (puVar19[1] = (ushort)*(uint *)((long)puVar36 + 4),
                    (int)(uVar50 + 2) < (int)uVar20)) &&
                   (((puVar19[2] = (ushort)(uint)puVar36[1], (int)(uVar50 + 3) < (int)uVar20 &&
                     ((puVar19[3] = (ushort)*(uint *)((long)puVar36 + 0xc),
                      (int)(uVar50 + 4) < (int)uVar20 &&
                      (puVar19[4] = (ushort)(uint)puVar36[2], (int)(uVar50 + 5) < (int)uVar20)))) &&
                    (puVar19[5] = (ushort)*(uint *)((long)puVar36 + 0x14),
                    (int)(uVar50 + 6) < (int)uVar20)))) {
                  puVar19[6] = (ushort)(uint)puVar36[3];
                }
              }
              else {
                uVar48 = 0;
                puVar36 = puVar25;
                puVar19 = puVar33;
                do {
                  uVar48 = uVar48 + 1;
                  uVar35 = puVar36[1];
                  uVar34 = *puVar36;
                  *(ulong *)(puVar19 + 4) =
                       CONCAT26((short)(puVar36[3] >> 0x20),
                                CONCAT24((short)puVar36[3],
                                         CONCAT22((short)(puVar36[2] >> 0x20),(short)puVar36[2])));
                  *(ulong *)puVar19 =
                       CONCAT26((short)(uVar35 >> 0x20),
                                CONCAT24((short)uVar35,
                                         CONCAT22((short)(uVar34 >> 0x20),(short)uVar34)));
                  puVar36 = puVar36 + 4;
                  puVar19 = puVar19 + 8;
                } while (uVar48 < uVar1);
                puVar19 = puVar33 + uVar50;
                puVar36 = (ulong *)((long)puVar25 + (ulong)uVar50 * 4);
                if (uVar50 != uVar20) goto LAB_051336c4;
              }
              uVar34 = (ulong)bVar47;
              lVar15 = (ulong)(uVar20 - 1) + 1;
              puVar33 = puVar33 + lVar15;
              puVar25 = (ulong *)((long)puVar25 + lVar15 * 4);
            }
            else {
LAB_05133218:
              uVar20 = uVar1;
              if (iVar64 == 0x100) {
                uVar34 = (ulong)bVar47;
                puVar33 = puVar33 + bVar47;
                puVar25 = (ulong *)((long)puVar25 + (ulong)bVar47 * 4);
              }
              else {
                puVar19 = puVar33 + 1;
                puVar25 = (ulong *)((long)puVar25 + 4);
                uVar1 = (int)((CONCAT22(*puVar33,*puVar33) & 0x3e07c1f) * (iVar64 >> 3)) >> 5 &
                        0x3e07c1f;
                *puVar33 = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) + (short)(uint)uVar34;
                if ((int)uVar20 < 2) {
                  uVar34 = (ulong)bVar47;
                  puVar33 = puVar19;
                }
                else {
                  uVar1 = (uVar20 - 9 >> 3) + 1;
                  uVar50 = uVar1 * 8;
                  if (uVar20 - 2 < 7) {
                    iVar64 = 1;
                    puVar33 = puVar19;
                    puVar36 = puVar25;
LAB_051333bc:
                    uVar1 = (int)((CONCAT22(*puVar33,*puVar33) & 0x3e07c1f) *
                                 (int)(0x100 - (ulong)((uint)*puVar36 >> 0x18) >> 3)) >> 5 &
                            0x3e07c1f;
                    *puVar33 = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) + (short)(uint)*puVar36;
                    if (((((iVar64 + 1 < (int)uVar20) &&
                          (uVar1 = (int)((CONCAT22(puVar33[1],puVar33[1]) & 0x3e07c1f) *
                                        (int)(0x100 - (ulong)(*(uint *)((long)puVar36 + 4) >> 0x18)
                                             >> 3)) >> 5 & 0x3e07c1f,
                          puVar33[1] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                       (short)*(uint *)((long)puVar36 + 4), iVar64 + 2 < (int)uVar20
                          )) && (uVar1 = (int)((CONCAT22(puVar33[2],puVar33[2]) & 0x3e07c1f) *
                                              (int)(0x100 - (ulong)((uint)puVar36[1] >> 0x18) >> 3))
                                         >> 5 & 0x3e07c1f,
                                puVar33[2] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                             (short)(uint)puVar36[1], iVar64 + 3 < (int)uVar20)) &&
                        ((uVar1 = (int)((CONCAT22(puVar33[3],puVar33[3]) & 0x3e07c1f) *
                                       (int)(0x100 - (ulong)(*(uint *)((long)puVar36 + 0xc) >> 0x18)
                                            >> 3)) >> 5 & 0x3e07c1f,
                         puVar33[3] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                      (short)*(uint *)((long)puVar36 + 0xc),
                         iVar64 + 4 < (int)uVar20 &&
                         (uVar1 = (int)((CONCAT22(puVar33[4],puVar33[4]) & 0x3e07c1f) *
                                       (int)(0x100 - (ulong)((uint)puVar36[2] >> 0x18) >> 3)) >> 5 &
                                  0x3e07c1f,
                         puVar33[4] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                      (short)(uint)puVar36[2], iVar64 + 5 < (int)uVar20)))) &&
                       (uVar1 = (int)((CONCAT22(puVar33[5],puVar33[5]) & 0x3e07c1f) *
                                     (int)(0x100 - (ulong)(*(uint *)((long)puVar36 + 0x14) >> 0x18)
                                          >> 3)) >> 5 & 0x3e07c1f,
                       puVar33[5] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                    (short)*(uint *)((long)puVar36 + 0x14), iVar64 + 6 < (int)uVar20
                       )) {
                      uVar1 = (int)((CONCAT22(puVar33[6],puVar33[6]) & 0x3e07c1f) *
                                   (int)(0x100 - (ulong)((uint)puVar36[3] >> 0x18) >> 3)) >> 5 &
                              0x3e07c1f;
                      puVar33[6] = ((ushort)uVar1 | (ushort)(uVar1 >> 0x10)) +
                                   (short)(uint)puVar36[3];
                    }
                  }
                  else {
                    uVar48 = 0;
                    puVar36 = puVar25;
                    puVar33 = puVar19;
                    do {
                      uVar72 = *(undefined8 *)(puVar33 + 4);
                      uVar17 = *(undefined8 *)puVar33;
                      uVar48 = uVar48 + 1;
                      uVar24 = puVar36[1];
                      uVar54 = *puVar36;
                      uVar51 = (uint)uVar17 & 0xffff;
                      uVar39 = (uint)uVar72 & 0xffff;
                      uVar35 = puVar36[3];
                      uVar34 = puVar36[2];
                      uVar84 = (undefined1)((ulong)uVar72 >> 0x10);
                      uVar85 = (undefined1)((ulong)uVar72 >> 0x18);
                      uVar86 = (undefined1)((ulong)uVar72 >> 0x30);
                      uVar87 = (undefined1)((ulong)uVar72 >> 0x38);
                      uVar88 = (undefined1)((ulong)uVar17 >> 0x10);
                      uVar89 = (undefined1)((ulong)uVar17 >> 0x18);
                      uVar90 = (undefined1)((ulong)uVar17 >> 0x30);
                      uVar91 = (undefined1)((ulong)uVar17 >> 0x38);
                      uVar38 = CONCAT13((char)(uVar51 >> 8),CONCAT12((char)uVar51,(short)uVar17));
                      uVar21 = CONCAT13((char)((ulong)uVar17 >> 0x28),
                                        CONCAT12((char)((ulong)uVar17 >> 0x20),
                                                 (short)((ulong)uVar17 >> 0x20)));
                      uVar39 = CONCAT13((char)(uVar39 >> 8),CONCAT12((char)uVar39,(short)uVar72));
                      uVar51 = CONCAT13((char)((ulong)uVar72 >> 0x28),
                                        CONCAT12((char)((ulong)uVar72 >> 0x20),
                                                 (short)((ulong)uVar72 >> 0x20)));
                      iVar75 = (uVar38 & 0x3e07c1f) *
                               (int)(0x100 - ((uVar54 & 0xffffffff) >> 0x18) >> 3);
                      iVar78 = ((uint)(CONCAT17(uVar89,CONCAT16(uVar88,CONCAT15(uVar89,CONCAT14(
                                                  uVar88,uVar38)))) >> 0x20) & 0x3e07c1f) *
                               (int)(0x100 - (uVar54 >> 0x38) >> 3);
                      iVar79 = (uVar21 & 0x3e07c1f) *
                               (int)(0x100 - ((uVar24 & 0xffffffff) >> 0x18) >> 3);
                      iVar82 = ((uint)(CONCAT17(uVar91,CONCAT16(uVar90,CONCAT15(uVar91,CONCAT14(
                                                  uVar90,uVar21)))) >> 0x20) & 0x3e07c1f) *
                               (int)(0x100 - (uVar24 >> 0x38) >> 3);
                      iVar64 = (uVar39 & 0x3e07c1f) *
                               (int)(0x100 - ((uVar34 & 0xffffffff) >> 0x18) >> 3);
                      iVar83 = ((uint)(CONCAT17(uVar85,CONCAT16(uVar84,CONCAT15(uVar85,CONCAT14(
                                                  uVar84,uVar39)))) >> 0x20) & 0x3e07c1f) *
                               (int)(0x100 - (uVar34 >> 0x38) >> 3);
                      iVar69 = (uVar51 & 0x3e07c1f) *
                               (int)(0x100 - ((uVar35 & 0xffffffff) >> 0x18) >> 3);
                      iVar73 = ((uint)(CONCAT17(uVar87,CONCAT16(uVar86,CONCAT15(uVar87,CONCAT14(
                                                  uVar86,uVar51)))) >> 0x20) & 0x3e07c1f) *
                               (int)(0x100 - (uVar35 >> 0x38) >> 3);
                      iVar76 = iVar75 >> 5;
                      iVar80 = iVar79 >> 5;
                      iVar62 = iVar64 >> 5;
                      iVar70 = iVar69 >> 5;
                      uVar74 = (ushort)iVar76 & 0x7c1f;
                      uVar63 = CONCAT13((char)(iVar75 >> 0x1d),(int3)iVar76);
                      uVar6 = (ushort)((uint)uVar63 >> 0x10) & 0x3e0;
                      uVar65 = CONCAT15((char)((uint)(iVar78 >> 5) >> 8),
                                        CONCAT14((char)(iVar78 >> 5),uVar63));
                      uVar77 = (ushort)((uint6)uVar65 >> 0x20) & 0x7c1f;
                      uVar4 = (ushort)(CONCAT17((char)(iVar78 >> 0x1d),
                                                CONCAT16((char)((uint3)(int3)(iVar78 >> 0xd) >> 8),
                                                         uVar65)) >> 0x30) & 0x3e0;
                      uVar8 = CONCAT11((char)(iVar79 >> 0x1d),(char)((uint)iVar80 >> 0x10)) & 0x3e0;
                      uVar9 = CONCAT11((char)(iVar82 >> 0x1d),
                                       (char)((uint3)(int3)(iVar82 >> 0xd) >> 8)) & 0x3e0;
                      uVar60 = (ushort)iVar62 & 0x7c1f;
                      uVar63 = CONCAT13((char)(iVar64 >> 0x1d),(int3)iVar62);
                      uVar7 = (ushort)((uint)uVar63 >> 0x10) & 0x3e0;
                      uVar65 = CONCAT15((char)((uint)(iVar83 >> 5) >> 8),
                                        CONCAT14((char)(iVar83 >> 5),uVar63));
                      uVar66 = (ushort)((uint6)uVar65 >> 0x20) & 0x7c1f;
                      uVar5 = (ushort)(CONCAT17((char)(iVar83 >> 0x1d),
                                                CONCAT16((char)((uint3)(int3)(iVar83 >> 0xd) >> 8),
                                                         uVar65)) >> 0x30) & 0x3e0;
                      uVar10 = CONCAT11((char)(iVar69 >> 0x1d),(char)((uint)iVar70 >> 0x10)) & 0x3e0
                      ;
                      uVar11 = CONCAT11((char)(iVar73 >> 0x1d),
                                        (char)((uint3)(int3)(iVar73 >> 0xd) >> 8)) & 0x3e0;
                      sVar61 = CONCAT11((byte)(uVar6 >> 8) | (byte)(uVar74 >> 8),
                                        (byte)uVar6 | (byte)uVar74);
                      uVar63 = CONCAT13((byte)(uVar4 >> 8) | (byte)(uVar77 >> 8),
                                        CONCAT12((byte)uVar4 | (byte)uVar77,sVar61));
                      uVar65 = CONCAT15((byte)(uVar8 >> 8) | (byte)((uint)iVar80 >> 8) & 0x7c,
                                        CONCAT14((byte)uVar8 | (byte)iVar80 & 0x1f,uVar63));
                      sVar67 = CONCAT11((byte)(uVar7 >> 8) | (byte)(uVar60 >> 8),
                                        (byte)uVar7 | (byte)uVar60);
                      uVar68 = CONCAT13((byte)(uVar5 >> 8) | (byte)(uVar66 >> 8),
                                        CONCAT12((byte)uVar5 | (byte)uVar66,sVar67));
                      uVar71 = CONCAT15((byte)(uVar10 >> 8) | (byte)((uint)iVar70 >> 8) & 0x7c,
                                        CONCAT14((byte)uVar10 | (byte)iVar70 & 0x1f,uVar68));
                      *(ulong *)(puVar33 + 4) =
                           CONCAT26((short)(CONCAT17((byte)(uVar11 >> 8) |
                                                     (byte)((uint)(iVar73 >> 5) >> 8) & 0x7c,
                                                     CONCAT16((byte)uVar11 |
                                                              (byte)(iVar73 >> 5) & 0x1f,uVar71)) >>
                                           0x30) + (short)(uVar35 >> 0x20),
                                    CONCAT24((short)((uint6)uVar71 >> 0x20) + (short)uVar35,
                                             CONCAT22((short)((uint)uVar68 >> 0x10) +
                                                      (short)(uVar34 >> 0x20),sVar67 + (short)uVar34
                                                     )));
                      *(ulong *)puVar33 =
                           CONCAT26((short)(CONCAT17((byte)(uVar9 >> 8) |
                                                     (byte)((uint)(iVar82 >> 5) >> 8) & 0x7c,
                                                     CONCAT16((byte)uVar9 |
                                                              (byte)(iVar82 >> 5) & 0x1f,uVar65)) >>
                                           0x30) + (short)(uVar24 >> 0x20),
                                    CONCAT24((short)((uint6)uVar65 >> 0x20) + (short)uVar24,
                                             CONCAT22((short)((uint)uVar63 >> 0x10) +
                                                      (short)(uVar54 >> 0x20),sVar61 + (short)uVar54
                                                     )));
                      puVar36 = puVar36 + 4;
                      puVar33 = puVar33 + 8;
                    } while (uVar48 < uVar1);
                    iVar64 = uVar50 + 1;
                    puVar33 = puVar19 + uVar50;
                    puVar36 = (ulong *)((long)puVar25 + (ulong)uVar50 * 4);
                    if (uVar50 != uVar20 - 1) goto LAB_051333bc;
                  }
                  lVar15 = (ulong)(uVar20 - 2) + 1;
                  uVar34 = (ulong)bVar47;
                  puVar25 = (ulong *)((long)puVar25 + lVar15 * 4);
                  puVar33 = puVar19 + lVar15;
                }
              }
            }
LAB_0513360c:
            pbVar23 = pbVar23 + uVar34;
          }
          puVar18 = (ulong *)((long)puVar18 + (long)*(int *)(param_1 + 0x38) * 4);
          pbVar30 = pbVar30 + *(int *)(param_1 + 0x38);
          puVar26 = (ushort *)((long)puVar26 + (*(ulong *)(this + 0x118) & 0xfffffffffffffffe));
        }
      }
      else {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          uVar34 = *(ulong *)(this + 0x118);
          iVar64 = *(int *)(param_1 + 0x38);
          uVar50 = *(uint *)(param_4 + 8);
          iVar56 = 0;
          uVar48 = uVar50;
          pbVar23 = pbVar30;
          puVar33 = puVar26;
          puVar25 = puVar18;
          do {
            for (; 0 < (int)uVar48; uVar48 = uVar48 - uVar51) {
              bVar47 = *pbVar30;
              uVar51 = (uint)bVar47;
              uVar39 = (uint)*puVar18 >> 0x18;
              if ((int)uVar48 < (int)(uint)bVar47) {
                iVar62 = 0x100 - uVar39;
                bVar47 = (byte)uVar48;
                uVar51 = uVar48;
                uVar39 = uVar48;
                if (iVar62 == 1) {
LAB_0513192c:
                  uVar39 = (uVar51 - 8 >> 3) + 1;
                  uVar38 = uVar39 * 8;
                  if (uVar51 - 1 < 7) {
                    uVar38 = 0;
                    puVar19 = puVar26;
                    puVar36 = puVar18;
LAB_05131994:
                    *puVar19 = (ushort)(uint)*puVar36;
                    if ((((int)(uVar38 + 1) < (int)uVar51) &&
                        (puVar19[1] = (ushort)*(uint *)((long)puVar36 + 4),
                        (int)(uVar38 + 2) < (int)uVar51)) &&
                       ((puVar19[2] = (ushort)(uint)puVar36[1], (int)(uVar38 + 3) < (int)uVar51 &&
                        (((puVar19[3] = (ushort)*(uint *)((long)puVar36 + 0xc),
                          (int)(uVar38 + 4) < (int)uVar51 &&
                          (puVar19[4] = (ushort)(uint)puVar36[2], (int)(uVar38 + 5) < (int)uVar51))
                         && (puVar19[5] = (ushort)*(uint *)((long)puVar36 + 0x14),
                            (int)(uVar38 + 6) < (int)uVar51)))))) {
                      puVar19[6] = (ushort)(uint)puVar36[3];
                    }
                  }
                  else {
                    uVar21 = 0;
                    puVar36 = puVar18;
                    puVar19 = puVar26;
                    do {
                      uVar21 = uVar21 + 1;
                      uVar54 = puVar36[1];
                      uVar35 = *puVar36;
                      *(ulong *)(puVar19 + 4) =
                           CONCAT26((short)(puVar36[3] >> 0x20),
                                    CONCAT24((short)puVar36[3],
                                             CONCAT22((short)(puVar36[2] >> 0x20),(short)puVar36[2])
                                            ));
                      *(ulong *)puVar19 =
                           CONCAT26((short)(uVar54 >> 0x20),
                                    CONCAT24((short)uVar54,
                                             CONCAT22((short)(uVar35 >> 0x20),(short)uVar35)));
                      puVar36 = puVar36 + 4;
                      puVar19 = puVar19 + 8;
                    } while (uVar21 < uVar39);
                    puVar19 = puVar26 + uVar38;
                    puVar36 = (ulong *)((long)puVar18 + (ulong)uVar38 * 4);
                    if (uVar38 != uVar51) goto LAB_05131994;
                  }
                  lVar15 = (ulong)(uVar51 - 1) + 1;
                  uVar35 = (ulong)bVar47;
                  puVar26 = puVar26 + lVar15;
                  puVar18 = (ulong *)((long)puVar18 + lVar15 * 4);
                }
                else {
LAB_051317fc:
                  uVar51 = uVar39;
                  if (iVar62 == 0x100) {
                    uVar35 = (ulong)bVar47;
                    puVar26 = puVar26 + bVar47;
                    puVar18 = (ulong *)((long)puVar18 + (ulong)bVar47 * 4);
                  }
                  else {
                    puVar36 = (ulong *)((long)puVar18 + 4);
                    puVar19 = puVar26 + 1;
                    uVar39 = (uint)*puVar26;
                    *puVar26 = (uVar4 & (ushort)(iVar62 * (uVar39 & uVar1) >> 8)) +
                               (uVar5 & (ushort)(iVar62 * (uVar39 & uVar52) >> 8)) +
                               (short)(uint)*puVar18 +
                               (uVar6 & (ushort)(iVar62 * (uVar39 & uVar20) >> 8));
                    if ((int)uVar51 < 2) {
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19;
                      puVar18 = puVar36;
                    }
                    else {
                      puVar42 = puVar36;
                      puVar26 = puVar19;
                      do {
                        puVar41 = (ulong *)((long)puVar42 + 4);
                        uVar39 = (uint)*puVar26;
                        iVar62 = 0x100 - ((uint)*puVar42 >> 0x18);
                        *puVar26 = (uVar4 & (ushort)((uVar39 & uVar1) * iVar62 >> 8)) +
                                   (uVar5 & (ushort)((uVar39 & uVar52) * iVar62 >> 8)) +
                                   (short)(uint)*puVar42 +
                                   (uVar6 & (ushort)((uVar39 & uVar20) * iVar62 >> 8));
                        puVar42 = puVar41;
                        puVar26 = puVar26 + 1;
                      } while (puVar41 != (ulong *)((long)puVar18 + ((ulong)(uVar51 - 2) + 2) * 4));
                      lVar15 = (ulong)(uVar51 - 2) + 1;
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19 + lVar15;
                      puVar18 = (ulong *)((long)puVar36 + lVar15 * 4);
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - uVar39;
                uVar39 = (uint)bVar47;
                if (iVar62 != 1) goto LAB_051317fc;
                uVar35 = 0;
                if (bVar47 != 0) goto LAB_0513192c;
              }
              pbVar30 = pbVar30 + uVar35;
            }
            iVar56 = iVar56 + 1;
            puVar18 = (ulong *)((long)puVar25 + (long)iVar64 * 4);
            puVar26 = (ushort *)((long)puVar33 + (uVar34 & 0xfffffffffffffffe));
            pbVar30 = pbVar23 + iVar64;
            uVar48 = uVar50;
            pbVar23 = pbVar30;
            puVar33 = puVar26;
            puVar25 = puVar18;
          } while (iVar56 != iVar55);
        }
      }
    }
    else if (*(int *)(this + 0x134) == 0x20) {
      pbVar30 = (byte *)(lVar16 + lVar28);
      uVar52 = *(uint *)(this + 0x138);
      uVar1 = *(uint *)(this + 0x13c);
      puVar25 = (ulong *)(*(long *)(this + 0x120) +
                         (lVar59 + ((ulong)(lVar58 * *(long *)(this + 0x118)) >> 2)) * 8);
      uVar20 = *(uint *)(this + 0x140);
      Color::Color((Color *)aTStack_18,1);
      cVar13 = Sexy::operator==(param_5,(Color *)aTStack_18);
      if (cVar13 == '\0') {
        iVar62 = *(int *)(param_5 + 0xc);
        iVar55 = (iVar62 * *(int *)(param_5 + 4)) / 0xff;
        iVar56 = (iVar62 * *(int *)(param_5 + 8)) / 0xff;
        iVar64 = (iVar62 * *(int *)param_5) / 0xff;
        if ((iVar55 == iVar56) && (iVar64 == iVar55)) {
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            iVar83 = *(int *)(param_1 + 0x38);
            uVar52 = *(uint *)(param_4 + 8);
            lVar15 = (long)iVar64;
            iVar56 = 0;
            do {
              if (0 < (int)uVar52) {
                puVar42 = puVar25;
                puVar36 = puVar18;
                pbVar23 = pbVar30;
                uVar1 = uVar52;
                do {
                  bVar47 = *pbVar23;
                  uVar34 = (ulong)bVar47;
                  uVar20 = (uint)*puVar36 >> 0x18;
                  if ((int)uVar1 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar1;
                    uVar34 = (ulong)bVar47;
                    uVar50 = uVar1;
                    if ((uVar20 != 0xff) || (iVar62 != 0xff)) {
LAB_0513048c:
                      bVar47 = (byte)uVar34;
                      if (uVar20 == 0) {
                        puVar42 = puVar42 + uVar34;
                        puVar36 = (ulong *)((long)puVar36 + uVar34 * 4);
                      }
                      else {
                        lVar58 = 0;
                        if (uVar50 != 0) {
                          do {
                            uVar20 = *(uint *)((long)puVar36 + lVar58 * 4);
                            lVar59 = (long)(0x100 - (int)(((ulong)(uVar20 >> 0x18) * (long)iVar62) /
                                                         0xff));
                            puVar42[lVar58] =
                                 (((ulong)uVar20 & 0xff00) * lVar15 +
                                  lVar59 * (puVar42[lVar58] & 0xff00) >> 8 & 0xff00) +
                                 ((ulong)(uVar20 & 0xff00ff) * lVar15 +
                                  lVar59 * (puVar42[lVar58] & 0xff00ff) >> 8 & 0xff00ff);
                            lVar58 = lVar58 + 1;
                          } while ((int)lVar58 < (int)uVar50);
                          goto LAB_05130430;
                        }
                      }
                    }
                    else {
LAB_051303f0:
                      lVar58 = 0;
                      do {
                        uVar20 = *(uint *)((long)puVar36 + lVar58 * 4);
                        puVar42[lVar58] =
                             (((ulong)uVar20 & 0xff00) * lVar15 >> 8 & 0xff00) +
                             ((ulong)(uVar20 & 0xff00ff) * lVar15 >> 8 & 0xff00ff);
                        lVar58 = lVar58 + 1;
                      } while ((int)lVar58 < (int)uVar50);
LAB_05130430:
                      uVar34 = (ulong)bVar47;
                      lVar58 = (ulong)(uVar50 - 1) + 1;
                      puVar36 = (ulong *)((long)puVar36 + lVar58 * 4);
                      puVar42 = puVar42 + lVar58;
                    }
                  }
                  else {
                    uVar50 = (uint)bVar47;
                    if ((uVar20 != 0xff) || (iVar62 != 0xff)) goto LAB_0513048c;
                    uVar34 = 0;
                    uVar50 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_051303f0;
                    uVar50 = 0;
                  }
                  uVar1 = uVar1 - uVar50;
                  pbVar23 = pbVar23 + uVar34;
                } while (0 < (int)uVar1);
              }
              iVar56 = iVar56 + 1;
              puVar18 = (ulong *)((long)puVar18 + (long)iVar83 * 4);
              pbVar30 = pbVar30 + iVar83;
              puVar25 = puVar25 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar56 != iVar55);
          }
        }
        else {
          iVar83 = *(int *)(param_4 + 0xc);
          if (0 < iVar83) {
            iVar70 = *(int *)(param_1 + 0x38);
            uVar50 = *(uint *)(param_4 + 8);
            uVar54 = (ulong)uVar52;
            uVar35 = (ulong)uVar1;
            uVar34 = (ulong)uVar20;
            iVar69 = 0;
            lVar15 = NEON_shl((long)iVar70,2);
            do {
              if (0 < (int)uVar50) {
                puVar42 = puVar25;
                puVar36 = puVar18;
                pbVar23 = pbVar30;
                uVar48 = uVar50;
                do {
                  bVar47 = *pbVar23;
                  uVar24 = (ulong)bVar47;
                  uVar39 = (uint)*puVar36 >> 0x18;
                  if ((int)uVar48 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar48;
                    uVar24 = (ulong)bVar47;
                    uVar51 = uVar48;
                    if ((uVar39 != 0xff) || (iVar62 != 0xff)) {
LAB_051325a8:
                      bVar47 = (byte)uVar24;
                      if (uVar39 == 0) {
                        puVar42 = puVar42 + uVar24;
                        puVar36 = (ulong *)((long)puVar36 + uVar24 * 4);
                      }
                      else {
                        lVar58 = 0;
                        if (uVar51 != 0) {
                          do {
                            uVar39 = *(uint *)((long)puVar36 + lVar58 * 4);
                            uVar24 = puVar42[lVar58];
                            lVar59 = (long)(0x100 - (int)(((ulong)(uVar39 >> 0x18) * (long)iVar62) /
                                                         0xff));
                            puVar42[lVar58] =
                                 (uVar35 & (ulong)(uVar39 & uVar1) * (long)iVar55 +
                                           lVar59 * (uVar24 & uVar35) >> 8) +
                                 (uVar54 & (ulong)(uVar39 & uVar52) * (long)iVar64 +
                                           lVar59 * (uVar24 & uVar54) >> 8) +
                                 (uVar34 & (ulong)(uVar39 & uVar20) * (long)iVar56 +
                                           lVar59 * (uVar24 & uVar34) >> 8);
                            lVar58 = lVar58 + 1;
                          } while ((int)lVar58 < (int)uVar51);
                          goto LAB_05132538;
                        }
                      }
                    }
                    else {
LAB_051324f4:
                      lVar58 = 0;
                      do {
                        uVar39 = *(uint *)((long)puVar36 + lVar58 * 4);
                        puVar42[lVar58] =
                             (uVar35 & (ulong)(uVar39 & uVar1) * (long)iVar55 >> 8) +
                             (uVar54 & (ulong)(uVar39 & uVar52) * (long)iVar64 >> 8) +
                             (uVar34 & (ulong)(uVar39 & uVar20) * (long)iVar56 >> 8);
                        lVar58 = lVar58 + 1;
                      } while ((int)lVar58 < (int)uVar51);
LAB_05132538:
                      uVar24 = (ulong)bVar47;
                      lVar58 = (ulong)(uVar51 - 1) + 1;
                      puVar36 = (ulong *)((long)puVar36 + lVar58 * 4);
                      puVar42 = puVar42 + lVar58;
                    }
                  }
                  else {
                    uVar51 = (uint)bVar47;
                    if ((uVar39 != 0xff) || (iVar62 != 0xff)) goto LAB_051325a8;
                    uVar51 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_051324f4;
                    uVar24 = 0;
                    uVar51 = 0;
                  }
                  uVar48 = uVar48 - uVar51;
                  pbVar23 = pbVar23 + uVar24;
                } while (0 < (int)uVar48);
              }
              iVar69 = iVar69 + 1;
              puVar18 = (ulong *)((long)puVar18 + lVar15);
              pbVar30 = pbVar30 + iVar70;
              puVar25 = puVar25 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar69 != iVar83);
          }
        }
      }
      else {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          iVar64 = *(int *)(param_1 + 0x38);
          uVar52 = *(uint *)(param_4 + 8);
          iVar56 = 0;
          uVar1 = uVar52;
          pbVar23 = pbVar30;
          puVar36 = puVar25;
          puVar42 = puVar18;
          do {
            for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar50) {
              bVar47 = *pbVar30;
              uVar50 = (uint)bVar47;
              uVar20 = (uint)*puVar18 >> 0x18;
              if ((int)uVar1 < (int)(uint)bVar47) {
                iVar62 = 0x100 - uVar20;
                bVar47 = (byte)uVar1;
                uVar50 = uVar1;
                uVar20 = uVar1;
                if (iVar62 == 1) {
LAB_05131be4:
                  uVar20 = (uVar50 - 4 >> 2) + 1;
                  uVar48 = uVar20 * 4;
                  if (uVar50 - 1 < 3) {
                    uVar48 = 0;
                    puVar41 = puVar25;
                    puVar37 = puVar18;
LAB_05131c4c:
                    *puVar41 = (ulong)(uint)*puVar37;
                    if (((int)(uVar48 + 1) < (int)uVar50) &&
                       (puVar41[1] = (ulong)*(uint *)((long)puVar37 + 4),
                       (int)(uVar48 + 2) < (int)uVar50)) {
                      puVar41[2] = (ulong)(uint)puVar37[1];
                    }
                  }
                  else {
                    uVar39 = 0;
                    puVar41 = puVar25;
                    puVar37 = puVar18;
                    do {
                      uVar35 = puVar37[1];
                      uVar34 = *puVar37;
                      uVar39 = uVar39 + 1;
                      puVar41[1] = uVar34 >> 0x20;
                      *puVar41 = uVar34 & 0xffffffff;
                      puVar41[3] = uVar35 >> 0x20;
                      puVar41[2] = uVar35 & 0xffffffff;
                      puVar41 = puVar41 + 4;
                      puVar37 = puVar37 + 2;
                    } while (uVar39 < uVar20);
                    puVar41 = puVar25 + uVar48;
                    puVar37 = (ulong *)((long)puVar18 + (ulong)uVar48 * 4);
                    if (uVar48 != uVar50) goto LAB_05131c4c;
                  }
                  lVar15 = (ulong)(uVar50 - 1) + 1;
                  uVar34 = (ulong)bVar47;
                  puVar25 = puVar25 + lVar15;
                  puVar18 = (ulong *)((long)puVar18 + lVar15 * 4);
                }
                else {
LAB_05131ac0:
                  uVar50 = uVar20;
                  if (iVar62 == 0x100) {
                    uVar34 = (ulong)bVar47;
                    puVar25 = puVar25 + bVar47;
                    puVar18 = (ulong *)((long)puVar18 + (ulong)bVar47 * 4);
                  }
                  else {
                    puVar37 = puVar25 + 1;
                    puVar41 = (ulong *)((long)puVar18 + 4);
                    *puVar25 = ((long)iVar62 * (*puVar25 & 0xff00ff) >> 8 & 0xff00ff) +
                               ((long)iVar62 * (*puVar25 & 0xff00) >> 8 & 0xff00) +
                               (ulong)(uint)*puVar18;
                    if ((int)uVar50 < 2) {
                      uVar34 = (ulong)bVar47;
                      puVar25 = puVar37;
                      puVar18 = puVar41;
                    }
                    else {
                      puVar25 = puVar41;
                      puVar46 = puVar37;
                      do {
                        puVar43 = (ulong *)((long)puVar25 + 4);
                        uVar34 = (ulong)(0x100 - ((uint)*puVar25 >> 0x18));
                        *puVar46 = ((*puVar46 & 0xff00ff) * uVar34 >> 8 & 0xff00ff) +
                                   ((*puVar46 & 0xff00) * uVar34 >> 8 & 0xff00) +
                                   (ulong)(uint)*puVar25;
                        puVar25 = puVar43;
                        puVar46 = puVar46 + 1;
                      } while (puVar43 != (ulong *)((long)puVar18 + ((ulong)(uVar50 - 2) + 2) * 4));
                      lVar15 = (ulong)(uVar50 - 2) + 1;
                      uVar34 = (ulong)bVar47;
                      puVar25 = puVar37 + lVar15;
                      puVar18 = (ulong *)((long)puVar41 + lVar15 * 4);
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - uVar20;
                uVar20 = (uint)bVar47;
                if (iVar62 != 1) goto LAB_05131ac0;
                uVar34 = 0;
                if (bVar47 != 0) goto LAB_05131be4;
              }
              pbVar30 = pbVar30 + uVar34;
            }
            iVar56 = iVar56 + 1;
            puVar18 = (ulong *)((long)puVar42 + (long)iVar64 * 4);
            pbVar30 = pbVar23 + iVar64;
            puVar25 = puVar36 + (*(ulong *)(this + 0x118) >> 2);
            uVar1 = uVar52;
            pbVar23 = pbVar30;
            puVar36 = puVar25;
            puVar42 = puVar18;
          } while (iVar56 != iVar55);
        }
      }
    }
  }
  else {
    lVar28 = (long)*(int *)param_4 + (long)(*(int *)(param_4 + 4) * *(int *)(param_1 + 0x38));
    pbVar30 = (byte *)(plVar14[0x11] + lVar28);
    if (*(int *)(this + 0x134) == 0x10) {
      pbVar23 = (byte *)(lVar16 + lVar28);
      uVar52 = *(uint *)(this + 0x138);
      uVar1 = *(uint *)(this + 0x13c);
      uVar20 = *(uint *)(this + 0x140);
      puVar26 = (ushort *)
                (*(long *)(this + 0x120) +
                ((long)param_2 + ((ulong)(lVar58 * *(long *)(this + 0x118)) >> 1)) * 2);
      Color::Color((Color *)aTStack_18,1);
      cVar13 = Sexy::operator==(param_5,(Color *)aTStack_18);
      uVar6 = (ushort)uVar52;
      uVar5 = (ushort)uVar1;
      uVar4 = (ushort)uVar20;
      if (cVar13 == '\0') {
        iVar62 = *(int *)(param_5 + 0xc);
        iVar55 = (iVar62 * *(int *)(param_5 + 8)) / 0xff;
        iVar56 = (iVar62 * *(int *)(param_5 + 4)) / 0xff;
        iVar64 = (iVar62 * *(int *)param_5) / 0xff;
        if ((iVar56 == iVar55) && (iVar64 == iVar56)) {
          iVar83 = iVar64 >> 3;
          if (uVar1 == 0x7e0) {
            iVar55 = *(int *)(param_4 + 0xc);
            if (0 < iVar55) {
              uVar34 = *(ulong *)(this + 0x118);
              uVar52 = *(uint *)(param_4 + 8);
              iVar64 = *(int *)(param_1 + 0x38);
              iVar56 = 0;
              do {
                if (0 < (int)uVar52) {
                  puVar33 = puVar26;
                  pbVar22 = pbVar30;
                  pbVar53 = pbVar23;
                  uVar1 = uVar52;
                  do {
                    bVar47 = *pbVar53;
                    uVar48 = (uint)bVar47;
                    uVar20 = *(uint *)(lVar15 + (ulong)*pbVar22 * 4);
                    uVar35 = (ulong)uVar20;
                    uVar50 = uVar20 >> 0x18;
                    if ((int)uVar1 < (int)(uint)bVar47) {
                      bVar47 = (byte)uVar1;
                      uVar48 = uVar1;
                      if ((uVar50 != 0xff) || (iVar62 != 0xff)) {
LAB_051330f4:
                        if (uVar50 == 0) {
                          uVar35 = (ulong)bVar47;
                          puVar33 = puVar33 + bVar47;
                          pbVar22 = pbVar22 + uVar35;
                        }
                        else {
                          lVar58 = 0;
                          if (uVar48 != 0) {
                            while( true ) {
                              uVar35 = ((ulong)CONCAT22((short)uVar20,(short)uVar20) & 0x7e0f81f) *
                                       (long)iVar83 +
                                       (long)(0x100 - (int)(((uVar35 >> 0x18) * (long)iVar62) / 0xff
                                                           ) >> 3) *
                                       (ulong)(CONCAT22(puVar33[lVar58],puVar33[lVar58]) & 0x7e0f81f
                                              ) >> 5 & 0x7e0f81f;
                              puVar33[lVar58] = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                              lVar58 = lVar58 + 1;
                              if ((int)uVar48 <= (int)lVar58) break;
                              uVar20 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                              uVar35 = (ulong)uVar20;
                            }
                            goto LAB_05133098;
                          }
                          uVar35 = (ulong)bVar47;
                        }
                      }
                      else {
LAB_05133048:
                        lVar58 = 0;
                        while( true ) {
                          uVar35 = (((ulong)(ushort)uVar20 | uVar35 << 0x10) & 0x7e0f81f) *
                                   (long)iVar83 >> 5 & 0x7e0f81f;
                          puVar33[lVar58] = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                          lVar58 = lVar58 + 1;
                          if ((int)uVar48 <= (int)lVar58) break;
                          uVar20 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                          uVar35 = (ulong)uVar20;
                        }
LAB_05133098:
                        uVar35 = (ulong)bVar47;
                        lVar58 = (ulong)(uVar48 - 1) + 1;
                        pbVar22 = pbVar22 + lVar58;
                        puVar33 = puVar33 + lVar58;
                      }
                    }
                    else {
                      if ((uVar50 != 0xff) || (iVar62 != 0xff)) goto LAB_051330f4;
                      if (bVar47 != 0) goto LAB_05133048;
                      uVar35 = 0;
                    }
                    uVar1 = uVar1 - uVar48;
                    pbVar53 = pbVar53 + uVar35;
                  } while (0 < (int)uVar1);
                }
                iVar56 = iVar56 + 1;
                puVar26 = (ushort *)((long)puVar26 + (uVar34 & 0xfffffffffffffffe));
                pbVar30 = pbVar30 + iVar64;
                pbVar23 = pbVar23 + iVar64;
              } while (iVar56 != iVar55);
            }
          }
          else {
            if (uVar1 != 0x3e0) goto LAB_05131034;
            iVar55 = *(int *)(param_4 + 0xc);
            if (0 < iVar55) {
              uVar52 = *(uint *)(param_4 + 8);
              uVar34 = *(ulong *)(this + 0x118);
              iVar64 = *(int *)(param_1 + 0x38);
              iVar56 = 0;
              do {
                if (0 < (int)uVar52) {
                  puVar33 = puVar26;
                  pbVar22 = pbVar30;
                  pbVar53 = pbVar23;
                  uVar1 = uVar52;
                  do {
                    bVar47 = *pbVar53;
                    uVar48 = (uint)bVar47;
                    uVar20 = *(uint *)(lVar15 + (ulong)*pbVar22 * 4);
                    uVar35 = (ulong)uVar20;
                    uVar50 = uVar20 >> 0x18;
                    if ((int)uVar1 < (int)(uint)bVar47) {
                      bVar47 = (byte)uVar1;
                      uVar48 = uVar1;
                      if ((uVar50 != 0xff) || (iVar62 != 0xff)) {
LAB_05132ef4:
                        if (uVar50 == 0) {
                          uVar35 = (ulong)bVar47;
                          puVar33 = puVar33 + bVar47;
                          pbVar22 = pbVar22 + uVar35;
                        }
                        else {
                          lVar58 = 0;
                          if (uVar48 != 0) {
                            while( true ) {
                              uVar35 = ((ulong)CONCAT22((short)uVar20,(short)uVar20) & 0x3e07c1f) *
                                       (long)iVar83 +
                                       (long)(0x100 - (int)(((uVar35 >> 0x18) * (long)iVar62) / 0xff
                                                           ) >> 3) *
                                       (ulong)(CONCAT22(puVar33[lVar58],puVar33[lVar58]) & 0x3e07c1f
                                              ) >> 5 & 0x3e07c1f;
                              puVar33[lVar58] = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                              lVar58 = lVar58 + 1;
                              if ((int)uVar48 <= (int)lVar58) break;
                              uVar20 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                              uVar35 = (ulong)uVar20;
                            }
                            goto LAB_05132e98;
                          }
                          uVar35 = (ulong)bVar47;
                        }
                      }
                      else {
LAB_05132e48:
                        lVar58 = 0;
                        while( true ) {
                          uVar35 = (((ulong)(ushort)uVar20 | uVar35 << 0x10) & 0x3e07c1f) *
                                   (long)iVar83 >> 5 & 0x3e07c1f;
                          puVar33[lVar58] = (ushort)(uVar35 >> 0x10) | (ushort)uVar35;
                          lVar58 = lVar58 + 1;
                          if ((int)uVar48 <= (int)lVar58) break;
                          uVar20 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                          uVar35 = (ulong)uVar20;
                        }
LAB_05132e98:
                        uVar35 = (ulong)bVar47;
                        lVar58 = (ulong)(uVar48 - 1) + 1;
                        pbVar22 = pbVar22 + lVar58;
                        puVar33 = puVar33 + lVar58;
                      }
                    }
                    else {
                      if ((uVar50 != 0xff) || (iVar62 != 0xff)) goto LAB_05132ef4;
                      if (bVar47 != 0) goto LAB_05132e48;
                      uVar35 = 0;
                    }
                    uVar1 = uVar1 - uVar48;
                    pbVar53 = pbVar53 + uVar35;
                  } while (0 < (int)uVar1);
                }
                iVar56 = iVar56 + 1;
                puVar26 = (ushort *)((long)puVar26 + (uVar34 & 0xfffffffffffffffe));
                pbVar30 = pbVar30 + iVar64;
                pbVar23 = pbVar23 + iVar64;
              } while (iVar56 != iVar55);
            }
          }
        }
        else {
LAB_05131034:
          iVar83 = *(int *)(param_4 + 0xc);
          if (0 < iVar83) {
            uVar34 = *(ulong *)(this + 0x118);
            iVar69 = 0;
            uVar50 = *(uint *)(param_4 + 8);
            iVar70 = *(int *)(param_1 + 0x38);
            do {
              if (0 < (int)uVar50) {
                puVar33 = puVar26;
                pbVar22 = pbVar30;
                pbVar53 = pbVar23;
                uVar48 = uVar50;
                do {
                  bVar47 = *pbVar53;
                  uVar39 = *(uint *)(lVar15 + (ulong)*pbVar22 * 4);
                  uVar51 = uVar39 >> 0x18;
                  if ((int)uVar48 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar48;
                    uVar38 = uVar48;
                    if ((uVar51 != 0xff) || (iVar62 != 0xff)) {
LAB_051311cc:
                      if (uVar51 == 0) {
                        uVar35 = (ulong)bVar47;
                        puVar33 = puVar33 + bVar47;
                        pbVar22 = pbVar22 + uVar35;
                      }
                      else {
                        lVar58 = 0;
                        if (uVar38 != 0) {
                          while( true ) {
                            uVar51 = (uint)puVar33[lVar58];
                            iVar73 = 0x100 - (int)(((ulong)(uVar39 >> 0x18) * (long)iVar62) / 0xff);
                            puVar33[lVar58] =
                                 (uVar5 & (ushort)((uVar39 & uVar1) * iVar56 +
                                                   iVar73 * (uVar51 & uVar1) >> 8)) +
                                 (uVar6 & (ushort)((uVar39 & uVar52) * iVar64 +
                                                   iVar73 * (uVar51 & uVar52) >> 8)) +
                                 (uVar4 & (ushort)((uVar39 & uVar20) * iVar55 +
                                                   iVar73 * (uVar51 & uVar20) >> 8));
                            lVar58 = lVar58 + 1;
                            if ((int)uVar38 <= (int)lVar58) break;
                            uVar39 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                          }
                          goto LAB_05131158;
                        }
                        uVar35 = (ulong)bVar47;
                      }
                    }
                    else {
LAB_05131100:
                      lVar58 = 0;
                      while( true ) {
                        puVar33[lVar58] =
                             (uVar5 & (ushort)((uVar39 & uVar1) * iVar56 >> 8)) +
                             (uVar6 & (ushort)((uVar39 & uVar52) * iVar64 >> 8)) +
                             (uVar4 & (ushort)((uVar39 & uVar20) * iVar55 >> 8));
                        lVar58 = lVar58 + 1;
                        if ((int)uVar38 <= (int)lVar58) break;
                        uVar39 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                      }
LAB_05131158:
                      uVar35 = (ulong)bVar47;
                      lVar58 = (ulong)(uVar38 - 1) + 1;
                      pbVar22 = pbVar22 + lVar58;
                      puVar33 = puVar33 + lVar58;
                    }
                  }
                  else {
                    uVar38 = (uint)bVar47;
                    if ((uVar51 != 0xff) || (iVar62 != 0xff)) goto LAB_051311cc;
                    uVar38 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_05131100;
                    uVar35 = 0;
                    uVar38 = 0;
                  }
                  uVar48 = uVar48 - uVar38;
                  pbVar53 = pbVar53 + uVar35;
                } while (0 < (int)uVar48);
              }
              iVar69 = iVar69 + 1;
              puVar26 = (ushort *)((long)puVar26 + (uVar34 & 0xfffffffffffffffe));
              pbVar30 = pbVar30 + iVar70;
              pbVar23 = pbVar23 + iVar70;
            } while (iVar69 != iVar83);
          }
        }
      }
      else if (uVar1 == 0x7e0) {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          uVar34 = *(ulong *)(this + 0x118);
          uVar52 = *(uint *)(param_4 + 8);
          iVar64 = *(int *)(param_1 + 0x38);
          iVar56 = 0;
          uVar1 = uVar52;
          pbVar22 = pbVar23;
          puVar33 = puVar26;
          pbVar53 = pbVar30;
          do {
            for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar50) {
              bVar47 = *pbVar23;
              uVar50 = (uint)bVar47;
              uVar20 = *(uint *)(lVar15 + (ulong)*pbVar30 * 4);
              if ((int)uVar1 < (int)(uint)bVar47) {
                iVar62 = 0x100 - (uVar20 >> 0x18);
                bVar47 = (byte)uVar1;
                uVar50 = uVar1;
                if (iVar62 == 1) {
LAB_05131e5c:
                  lVar58 = 0;
                  while( true ) {
                    puVar26[lVar58] = (ushort)uVar20;
                    lVar58 = lVar58 + 1;
                    if ((int)uVar50 <= (int)lVar58) break;
                    uVar20 = *(uint *)(lVar15 + (ulong)pbVar30[lVar58] * 4);
                  }
                  uVar35 = (ulong)bVar47;
                  lVar58 = (ulong)(uVar50 - 1) + 1;
                  pbVar30 = pbVar30 + lVar58;
                  puVar26 = puVar26 + lVar58;
                }
                else {
LAB_05131d3c:
                  if (iVar62 == 0x100) {
                    uVar35 = (ulong)bVar47;
                    puVar26 = puVar26 + bVar47;
                    pbVar30 = pbVar30 + uVar35;
                  }
                  else {
                    puVar19 = puVar26 + 1;
                    pbVar2 = pbVar30 + 1;
                    uVar48 = (int)((CONCAT22(*puVar26,*puVar26) & 0x7e0f81f) * (iVar62 >> 3)) >> 5 &
                             0x7e0f81f;
                    *puVar26 = ((ushort)uVar48 | (ushort)(uVar48 >> 0x10)) + (short)uVar20;
                    if ((int)uVar50 < 2) {
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19;
                      pbVar30 = pbVar2;
                    }
                    else {
                      pbVar44 = pbVar2;
                      puVar26 = puVar19;
                      do {
                        pbVar40 = pbVar44 + 1;
                        uVar48 = *(uint *)(lVar15 + (ulong)*pbVar44 * 4);
                        uVar20 = (int)((CONCAT22(*puVar26,*puVar26) & 0x7e0f81f) *
                                      (int)(0x100 - (ulong)(uVar48 >> 0x18) >> 3)) >> 5 & 0x7e0f81f;
                        *puVar26 = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) + (short)uVar48;
                        pbVar44 = pbVar40;
                        puVar26 = puVar26 + 1;
                      } while (pbVar40 != pbVar30 + (ulong)(uVar50 - 2) + 2);
                      lVar58 = (ulong)(uVar50 - 2) + 1;
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19 + lVar58;
                      pbVar30 = pbVar2 + lVar58;
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - (uVar20 >> 0x18);
                if (iVar62 != 1) goto LAB_05131d3c;
                if (bVar47 != 0) goto LAB_05131e5c;
                uVar35 = 0;
              }
              pbVar23 = pbVar23 + uVar35;
            }
            iVar56 = iVar56 + 1;
            puVar26 = (ushort *)((long)puVar33 + (uVar34 & 0xfffffffffffffffe));
            pbVar30 = pbVar53 + iVar64;
            pbVar23 = pbVar22 + iVar64;
            uVar1 = uVar52;
            pbVar22 = pbVar23;
            puVar33 = puVar26;
            pbVar53 = pbVar30;
          } while (iVar56 != iVar55);
        }
      }
      else if (uVar1 == 0x3e0) {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          uVar34 = *(ulong *)(this + 0x118);
          uVar52 = *(uint *)(param_4 + 8);
          iVar64 = *(int *)(param_1 + 0x38);
          iVar56 = 0;
          uVar1 = uVar52;
          pbVar22 = pbVar23;
          puVar33 = puVar26;
          pbVar53 = pbVar30;
          do {
            for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar50) {
              bVar47 = *pbVar23;
              uVar50 = (uint)bVar47;
              uVar20 = *(uint *)(lVar15 + (ulong)*pbVar30 * 4);
              if ((int)uVar1 < (int)(uint)bVar47) {
                iVar62 = 0x100 - (uVar20 >> 0x18);
                bVar47 = (byte)uVar1;
                uVar50 = uVar1;
                if (iVar62 == 1) {
LAB_051323e8:
                  lVar58 = 0;
                  while( true ) {
                    puVar26[lVar58] = (ushort)uVar20;
                    lVar58 = lVar58 + 1;
                    if ((int)uVar50 <= (int)lVar58) break;
                    uVar20 = *(uint *)(lVar15 + (ulong)pbVar30[lVar58] * 4);
                  }
                  uVar35 = (ulong)bVar47;
                  lVar58 = (ulong)(uVar50 - 1) + 1;
                  pbVar30 = pbVar30 + lVar58;
                  puVar26 = puVar26 + lVar58;
                }
                else {
LAB_051322c8:
                  if (iVar62 == 0x100) {
                    uVar35 = (ulong)bVar47;
                    puVar26 = puVar26 + bVar47;
                    pbVar30 = pbVar30 + uVar35;
                  }
                  else {
                    puVar19 = puVar26 + 1;
                    pbVar2 = pbVar30 + 1;
                    uVar48 = (int)((CONCAT22(*puVar26,*puVar26) & 0x3e07c1f) * (iVar62 >> 3)) >> 5 &
                             0x3e07c1f;
                    *puVar26 = ((ushort)uVar48 | (ushort)(uVar48 >> 0x10)) + (short)uVar20;
                    if ((int)uVar50 < 2) {
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19;
                      pbVar30 = pbVar2;
                    }
                    else {
                      pbVar44 = pbVar2;
                      puVar26 = puVar19;
                      do {
                        pbVar40 = pbVar44 + 1;
                        uVar48 = *(uint *)(lVar15 + (ulong)*pbVar44 * 4);
                        uVar20 = (int)((CONCAT22(*puVar26,*puVar26) & 0x3e07c1f) *
                                      (int)(0x100 - (ulong)(uVar48 >> 0x18) >> 3)) >> 5 & 0x3e07c1f;
                        *puVar26 = ((ushort)uVar20 | (ushort)(uVar20 >> 0x10)) + (short)uVar48;
                        pbVar44 = pbVar40;
                        puVar26 = puVar26 + 1;
                      } while (pbVar40 != pbVar30 + (ulong)(uVar50 - 2) + 2);
                      lVar58 = (ulong)(uVar50 - 2) + 1;
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19 + lVar58;
                      pbVar30 = pbVar2 + lVar58;
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - (uVar20 >> 0x18);
                if (iVar62 != 1) goto LAB_051322c8;
                if (bVar47 != 0) goto LAB_051323e8;
                uVar35 = 0;
              }
              pbVar23 = pbVar23 + uVar35;
            }
            iVar56 = iVar56 + 1;
            puVar26 = (ushort *)((long)puVar33 + (uVar34 & 0xfffffffffffffffe));
            pbVar30 = pbVar53 + iVar64;
            pbVar23 = pbVar22 + iVar64;
            uVar1 = uVar52;
            pbVar22 = pbVar23;
            puVar33 = puVar26;
            pbVar53 = pbVar30;
          } while (iVar56 != iVar55);
        }
      }
      else {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          uVar34 = *(ulong *)(this + 0x118);
          iVar64 = *(int *)(param_1 + 0x38);
          uVar50 = *(uint *)(param_4 + 8);
          iVar56 = 0;
          uVar48 = uVar50;
          pbVar22 = pbVar23;
          puVar33 = puVar26;
          pbVar53 = pbVar30;
          do {
            for (; 0 < (int)uVar48; uVar48 = uVar48 - uVar51) {
              bVar47 = *pbVar23;
              uVar51 = (uint)bVar47;
              uVar39 = *(uint *)(lVar15 + (ulong)*pbVar30 * 4);
              if ((int)uVar48 < (int)(uint)bVar47) {
                iVar62 = 0x100 - (uVar39 >> 0x18);
                bVar47 = (byte)uVar48;
                uVar51 = uVar48;
                if (iVar62 == 1) {
LAB_05130800:
                  lVar58 = 0;
                  while( true ) {
                    puVar26[lVar58] = (ushort)uVar39;
                    lVar58 = lVar58 + 1;
                    if ((int)uVar51 <= (int)lVar58) break;
                    uVar39 = *(uint *)(lVar15 + (ulong)pbVar30[lVar58] * 4);
                  }
                  uVar35 = (ulong)bVar47;
                  lVar58 = (ulong)(uVar51 - 1) + 1;
                  pbVar30 = pbVar30 + lVar58;
                  puVar26 = puVar26 + lVar58;
                }
                else {
LAB_051306cc:
                  if (iVar62 == 0x100) {
                    uVar35 = (ulong)bVar47;
                    puVar26 = puVar26 + bVar47;
                    pbVar30 = pbVar30 + uVar35;
                  }
                  else {
                    pbVar2 = pbVar30 + 1;
                    puVar19 = puVar26 + 1;
                    uVar38 = (uint)*puVar26;
                    *puVar26 = (uVar6 & (ushort)(iVar62 * (uVar38 & uVar52) >> 8)) +
                               (uVar5 & (ushort)(iVar62 * (uVar38 & uVar1) >> 8)) + (short)uVar39 +
                               (uVar4 & (ushort)(iVar62 * (uVar38 & uVar20) >> 8));
                    if ((int)uVar51 < 2) {
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19;
                      pbVar30 = pbVar2;
                    }
                    else {
                      pbVar44 = pbVar2;
                      puVar26 = puVar19;
                      do {
                        pbVar40 = pbVar44 + 1;
                        uVar38 = (uint)*puVar26;
                        uVar39 = *(uint *)(lVar15 + (ulong)*pbVar44 * 4);
                        iVar62 = 0x100 - (uVar39 >> 0x18);
                        *puVar26 = (uVar6 & (ushort)((uVar38 & uVar52) * iVar62 >> 8)) +
                                   (uVar5 & (ushort)((uVar38 & uVar1) * iVar62 >> 8)) +
                                   (short)uVar39 +
                                   (uVar4 & (ushort)((uVar38 & uVar20) * iVar62 >> 8));
                        pbVar44 = pbVar40;
                        puVar26 = puVar26 + 1;
                      } while (pbVar40 != pbVar30 + (ulong)(uVar51 - 2) + 2);
                      lVar58 = (ulong)(uVar51 - 2) + 1;
                      uVar35 = (ulong)bVar47;
                      puVar26 = puVar19 + lVar58;
                      pbVar30 = pbVar2 + lVar58;
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - (uVar39 >> 0x18);
                if (iVar62 != 1) goto LAB_051306cc;
                if (bVar47 != 0) goto LAB_05130800;
                uVar35 = 0;
              }
              pbVar23 = pbVar23 + uVar35;
            }
            iVar56 = iVar56 + 1;
            puVar26 = (ushort *)((long)puVar33 + (uVar34 & 0xfffffffffffffffe));
            pbVar30 = pbVar53 + iVar64;
            pbVar23 = pbVar22 + iVar64;
            uVar48 = uVar50;
            pbVar22 = pbVar23;
            puVar33 = puVar26;
            pbVar53 = pbVar30;
          } while (iVar56 != iVar55);
        }
      }
    }
    else if (*(int *)(this + 0x134) == 0x20) {
      pbVar23 = (byte *)(lVar16 + lVar28);
      uVar52 = *(uint *)(this + 0x138);
      uVar1 = *(uint *)(this + 0x13c);
      puVar18 = (ulong *)(*(long *)(this + 0x120) +
                         (lVar59 + ((ulong)(lVar58 * *(long *)(this + 0x118)) >> 2)) * 8);
      uVar20 = *(uint *)(this + 0x140);
      Color::Color((Color *)aTStack_18,1);
      cVar13 = Sexy::operator==(param_5,(Color *)aTStack_18);
      if (cVar13 == '\0') {
        iVar62 = *(int *)(param_5 + 0xc);
        iVar55 = (iVar62 * *(int *)(param_5 + 4)) / 0xff;
        iVar56 = (iVar62 * *(int *)(param_5 + 8)) / 0xff;
        iVar64 = (iVar62 * *(int *)param_5) / 0xff;
        if ((iVar55 == iVar56) && (iVar64 == iVar55)) {
          iVar55 = *(int *)(param_4 + 0xc);
          if (0 < iVar55) {
            uVar52 = *(uint *)(param_4 + 8);
            iVar83 = *(int *)(param_1 + 0x38);
            lVar58 = (long)iVar64;
            iVar56 = 0;
            do {
              if (0 < (int)uVar52) {
                puVar25 = puVar18;
                pbVar22 = pbVar30;
                pbVar53 = pbVar23;
                uVar1 = uVar52;
                do {
                  bVar47 = *pbVar53;
                  uVar50 = (uint)bVar47;
                  uVar20 = *(uint *)(lVar15 + (ulong)*pbVar22 * 4);
                  uVar34 = (ulong)uVar20;
                  uVar20 = uVar20 >> 0x18;
                  if ((int)uVar1 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar1;
                    uVar50 = uVar1;
                    if ((uVar20 != 0xff) || (iVar62 != 0xff)) {
LAB_05130b6c:
                      if (uVar20 == 0) {
                        uVar35 = (ulong)bVar47;
                        puVar25 = puVar25 + bVar47;
                        pbVar22 = pbVar22 + uVar35;
                      }
                      else {
                        lVar59 = 0;
                        if (uVar50 != 0) {
                          while( true ) {
                            lVar16 = (long)(0x100 - (int)(((uVar34 >> 0x18) * (long)iVar62) / 0xff))
                            ;
                            puVar25[lVar59] =
                                 ((uVar34 & 0xff00) * lVar58 + lVar16 * (puVar25[lVar59] & 0xff00)
                                  >> 8 & 0xff00) +
                                 ((ulong)((uint)uVar34 & 0xff00ff) * lVar58 +
                                  lVar16 * (puVar25[lVar59] & 0xff00ff) >> 8 & 0xff00ff);
                            lVar59 = lVar59 + 1;
                            if ((int)uVar50 <= (int)lVar59) break;
                            uVar34 = (ulong)*(uint *)(lVar15 + (ulong)pbVar22[lVar59] * 4);
                          }
                          goto LAB_05130b08;
                        }
                        uVar35 = (ulong)bVar47;
                      }
                    }
                    else {
LAB_05130ac0:
                      lVar59 = 0;
                      while( true ) {
                        puVar25[lVar59] =
                             ((uVar34 & 0xff00) * lVar58 >> 8 & 0xff00) +
                             ((ulong)((uint)uVar34 & 0xff00ff) * lVar58 >> 8 & 0xff00ff);
                        lVar59 = lVar59 + 1;
                        if ((int)uVar50 <= (int)lVar59) break;
                        uVar34 = (ulong)*(uint *)(lVar15 + (ulong)pbVar22[lVar59] * 4);
                      }
LAB_05130b08:
                      uVar35 = (ulong)bVar47;
                      lVar59 = (ulong)(uVar50 - 1) + 1;
                      pbVar22 = pbVar22 + lVar59;
                      puVar25 = puVar25 + lVar59;
                    }
                  }
                  else {
                    if ((uVar20 != 0xff) || (iVar62 != 0xff)) goto LAB_05130b6c;
                    uVar35 = 0;
                    if (bVar47 != 0) goto LAB_05130ac0;
                  }
                  uVar1 = uVar1 - uVar50;
                  pbVar53 = pbVar53 + uVar35;
                } while (0 < (int)uVar1);
              }
              iVar56 = iVar56 + 1;
              pbVar30 = pbVar30 + iVar83;
              pbVar23 = pbVar23 + iVar83;
              puVar18 = puVar18 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar56 != iVar55);
          }
        }
        else {
          iVar83 = *(int *)(param_4 + 0xc);
          if (0 < iVar83) {
            uVar50 = *(uint *)(param_4 + 8);
            uVar54 = (ulong)uVar52;
            iVar70 = *(int *)(param_1 + 0x38);
            iVar69 = 0;
            uVar35 = (ulong)uVar1;
            uVar34 = (ulong)uVar20;
            do {
              if (0 < (int)uVar50) {
                puVar25 = puVar18;
                pbVar22 = pbVar30;
                pbVar53 = pbVar23;
                uVar48 = uVar50;
                do {
                  bVar47 = *pbVar53;
                  uVar39 = *(uint *)(lVar15 + (ulong)*pbVar22 * 4);
                  uVar51 = uVar39 >> 0x18;
                  if ((int)uVar48 < (int)(uint)bVar47) {
                    bVar47 = (byte)uVar48;
                    uVar38 = uVar48;
                    if ((uVar51 != 0xff) || (iVar62 != 0xff)) {
LAB_05131424:
                      if (uVar51 == 0) {
                        uVar24 = (ulong)bVar47;
                        puVar25 = puVar25 + bVar47;
                        pbVar22 = pbVar22 + uVar24;
                      }
                      else {
                        lVar58 = 0;
                        if (uVar38 != 0) {
                          while( true ) {
                            uVar24 = puVar25[lVar58];
                            lVar59 = (long)(0x100 - (int)(((ulong)(uVar39 >> 0x18) * (long)iVar62) /
                                                         0xff));
                            puVar25[lVar58] =
                                 (uVar35 & (ulong)(uVar39 & uVar1) * (long)iVar55 +
                                           lVar59 * (uVar24 & uVar35) >> 8) +
                                 (uVar54 & (ulong)(uVar39 & uVar52) * (long)iVar64 +
                                           lVar59 * (uVar24 & uVar54) >> 8) +
                                 (uVar34 & (ulong)(uVar39 & uVar20) * (long)iVar56 +
                                           lVar59 * (uVar24 & uVar34) >> 8);
                            lVar58 = lVar58 + 1;
                            if ((int)uVar38 <= (int)lVar58) break;
                            uVar39 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                          }
                          goto LAB_051313b0;
                        }
                        uVar24 = (ulong)bVar47;
                      }
                    }
                    else {
LAB_05131364:
                      lVar58 = 0;
                      while( true ) {
                        puVar25[lVar58] =
                             (uVar35 & (ulong)(uVar39 & uVar1) * (long)iVar55 >> 8) +
                             (uVar54 & (ulong)(uVar39 & uVar52) * (long)iVar64 >> 8) +
                             (uVar34 & (ulong)(uVar39 & uVar20) * (long)iVar56 >> 8);
                        lVar58 = lVar58 + 1;
                        if ((int)uVar38 <= (int)lVar58) break;
                        uVar39 = *(uint *)(lVar15 + (ulong)pbVar22[lVar58] * 4);
                      }
LAB_051313b0:
                      uVar24 = (ulong)bVar47;
                      lVar58 = (ulong)(uVar38 - 1) + 1;
                      pbVar22 = pbVar22 + lVar58;
                      puVar25 = puVar25 + lVar58;
                    }
                  }
                  else {
                    uVar38 = (uint)bVar47;
                    if ((uVar51 != 0xff) || (iVar62 != 0xff)) goto LAB_05131424;
                    uVar38 = (uint)bVar47;
                    if (bVar47 != 0) goto LAB_05131364;
                    uVar24 = 0;
                    uVar38 = 0;
                  }
                  uVar48 = uVar48 - uVar38;
                  pbVar53 = pbVar53 + uVar24;
                } while (0 < (int)uVar48);
              }
              iVar69 = iVar69 + 1;
              pbVar30 = pbVar30 + iVar70;
              pbVar23 = pbVar23 + iVar70;
              puVar18 = puVar18 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar69 != iVar83);
          }
        }
      }
      else {
        iVar55 = *(int *)(param_4 + 0xc);
        if (0 < iVar55) {
          uVar52 = *(uint *)(param_4 + 8);
          iVar64 = *(int *)(param_1 + 0x38);
          iVar56 = 0;
          uVar1 = uVar52;
          pbVar22 = pbVar23;
          puVar25 = puVar18;
          pbVar53 = pbVar30;
          do {
            for (; 0 < (int)uVar1; uVar1 = uVar1 - uVar50) {
              bVar47 = *pbVar23;
              uVar50 = (uint)bVar47;
              uVar20 = *(uint *)(lVar15 + (ulong)*pbVar30 * 4);
              uVar34 = (ulong)uVar20;
              uVar20 = uVar20 >> 0x18;
              if ((int)uVar1 < (int)(uint)bVar47) {
                iVar62 = 0x100 - uVar20;
                bVar47 = (byte)uVar1;
                uVar50 = uVar1;
                if (iVar62 == 1) {
LAB_0512fea8:
                  lVar58 = 0;
                  while( true ) {
                    puVar18[lVar58] = uVar34;
                    lVar58 = lVar58 + 1;
                    if ((int)uVar50 <= (int)lVar58) break;
                    uVar34 = (ulong)*(uint *)(lVar15 + (ulong)pbVar30[lVar58] * 4);
                  }
                  uVar34 = (ulong)bVar47;
                  lVar58 = (ulong)(uVar50 - 1) + 1;
                  pbVar30 = pbVar30 + lVar58;
                  puVar18 = puVar18 + lVar58;
                }
                else {
LAB_0512fac0:
                  if (iVar62 == 0x100) {
                    uVar34 = (ulong)bVar47;
                    puVar18 = puVar18 + bVar47;
                    pbVar30 = pbVar30 + uVar34;
                  }
                  else {
                    puVar36 = puVar18 + 1;
                    pbVar2 = pbVar30 + 1;
                    *puVar18 = ((long)iVar62 * (*puVar18 & 0xff00ff) >> 8 & 0xff00ff) +
                               ((long)iVar62 * (*puVar18 & 0xff00) >> 8 & 0xff00) + uVar34;
                    if ((int)uVar50 < 2) {
                      uVar34 = (ulong)bVar47;
                      puVar18 = puVar36;
                      pbVar30 = pbVar2;
                    }
                    else {
                      pbVar44 = pbVar2;
                      puVar18 = puVar36;
                      do {
                        pbVar40 = pbVar44 + 1;
                        uVar20 = *(uint *)(lVar15 + (ulong)*pbVar44 * 4);
                        uVar34 = (ulong)(0x100 - (uVar20 >> 0x18));
                        *puVar18 = ((*puVar18 & 0xff00ff) * uVar34 >> 8 & 0xff00ff) +
                                   ((*puVar18 & 0xff00) * uVar34 >> 8 & 0xff00) + (ulong)uVar20;
                        pbVar44 = pbVar40;
                        puVar18 = puVar18 + 1;
                      } while (pbVar40 != pbVar30 + (ulong)(uVar50 - 2) + 2);
                      lVar58 = (ulong)(uVar50 - 2) + 1;
                      uVar34 = (ulong)bVar47;
                      puVar18 = puVar36 + lVar58;
                      pbVar30 = pbVar2 + lVar58;
                    }
                  }
                }
              }
              else {
                iVar62 = 0x100 - uVar20;
                if (iVar62 != 1) goto LAB_0512fac0;
                if (bVar47 != 0) goto LAB_0512fea8;
                uVar34 = 0;
              }
              pbVar23 = pbVar23 + uVar34;
            }
            iVar56 = iVar56 + 1;
            pbVar30 = pbVar53 + iVar64;
            pbVar23 = pbVar22 + iVar64;
            puVar18 = puVar25 + (*(ulong *)(this + 0x118) >> 2);
            uVar1 = uVar52;
            pbVar22 = pbVar23;
            puVar25 = puVar18;
            pbVar53 = pbVar30;
          } while (iVar56 != iVar55);
        }
      }
    }
  }
LAB_0512fbd8:
  (**(code **)(*(long *)this + 0x208))(this);
LAB_0512f918:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DeviceImage::UnlockSurface() */

undefined8 __thiscall Sexy::DeviceImage::UnlockSurface(DeviceImage *this)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0));
  if (cVar2 != '\0') {
    cVar2 = FUN_0512f7dc(*(undefined4 *)(this + 0x18));
    if (cVar2 != '\0') {
      return 0;
    }
  }
  iVar1 = *(int *)(this + 0xfc);
  *(int *)(this + 0xfc) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return 1;
  }
  (**(code **)(**(long **)(this + 0x148) + 0x18))(*(long **)(this + 0x148),0);
  return 1;
}


/* Sexy::DeviceImage::StaticGetClass() */

long * Sexy::DeviceImage::StaticGetClass(void)

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
  uVar2 = MemoryImage::StaticGetClass();
  (*pcVar3)(plVar1,"DeviceImage",uVar2,StaticNew);
  return sClass;
}


/* Sexy::DeviceImage::GetClass() const */

long * Sexy::DeviceImage::GetClass(void)

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
  uVar2 = MemoryImage::StaticGetClass();
  (*pcVar3)(plVar1,"DeviceImage",uVar2,StaticNew);
  return sClass;
}


/* Sexy::DeviceImage::Init() */

void __thiscall Sexy::DeviceImage::Init(DeviceImage *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xf0);
  *(undefined8 *)(this + 0x148) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,this);
  }
  *(undefined8 *)(this + 0x158) = 0;
  this[0xf9] = (DeviceImage)0x0;
  this[0xfa] = (DeviceImage)0x0;
  this[0xfb] = (DeviceImage)0x0;
  this[0xf8] = (DeviceImage)0x0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  return;
}


/* Sexy::DeviceImage::DeviceImage(Sexy::SexyAppBase*) */

void __thiscall Sexy::DeviceImage::DeviceImage(DeviceImage *this,SexyAppBase *param_1)

{
  MemoryImage::MemoryImage((MemoryImage *)this,param_1);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)this = &PTR_GetClass_06a2d5b0;
  *(undefined ***)(this + 0x68) = &PTR__DeviceImage_06a2d7e0;
  Init(this);
  return;
}


/* Sexy::DeviceImage::DeviceImage(Sexy::IGraphicsDriver*) */

void __thiscall Sexy::DeviceImage::DeviceImage(DeviceImage *this,IGraphicsDriver *param_1)

{
  MemoryImage::MemoryImage((MemoryImage *)this,gSexyAppBase);
  *(IGraphicsDriver **)(this + 0xf0) = param_1;
  *(undefined ***)this = &PTR_GetClass_06a2d5b0;
  *(undefined ***)(this + 0x68) = &PTR__DeviceImage_06a2d7e0;
  Init(this);
  return;
}


/* Sexy::DeviceImage::DeviceImage() */

void __thiscall Sexy::DeviceImage::DeviceImage(DeviceImage *this)

{
  MemoryImage::MemoryImage((MemoryImage *)this,gSexyAppBase);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(gSexyAppBase + 0x20);
  *(undefined ***)this = &PTR_GetClass_06a2d5b0;
  *(undefined ***)(this + 0x68) = &PTR__DeviceImage_06a2d7e0;
  Init(this);
  return;
}


/* Sexy::DeviceImage::StaticNew() */

DeviceImage * Sexy::DeviceImage::StaticNew(void)

{
  DeviceImage *this;
  
  this = ::operator_new(0x160);
  DeviceImage(this);
  return this;
}


/* Sexy::DeviceImage::GenerateDeviceSurface() */

undefined1 __thiscall Sexy::DeviceImage::GenerateDeviceSurface(DeviceImage *this)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if ((*(long *)(this + 0x148) == 0) &&
     (plVar3 = (long *)(**(code **)(**(long **)(this + 0xf0) + 0x98))(*(long **)(this + 0xf0)),
     plVar3 != (long *)0x0)) {
    uVar2 = FUN_0512f5e0(*(undefined4 *)(this + 0x18));
    *(undefined4 *)(plVar3 + 1) = uVar2;
    uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,this);
    *(long **)(this + 0x148) = plVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Sexy::DeviceImage::LockSurface() */

undefined8 __thiscall Sexy::DeviceImage::LockSurface(DeviceImage *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0));
  if ((cVar1 != '\0') && (cVar1 = FUN_0512f7dc(*(undefined4 *)(this + 0x18)), cVar1 != '\0')) {
    return 0;
  }
  iVar2 = *(int *)(this + 0xfc);
  if (iVar2 == 0) {
    plVar3 = *(long **)(this + 0x148);
    if (plVar3 == (long *)0x0) {
      GenerateDeviceSurface(this);
      plVar3 = *(long **)(this + 0x148);
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,this + 0x100);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = *(int *)(this + 0xfc);
  }
  *(int *)(this + 0xfc) = iVar2 + 1;
  return 1;
}


/* Sexy::DeviceImage::DeleteDeviceSurface() */

void __thiscall Sexy::DeviceImage::DeleteDeviceSurface(DeviceImage *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x148);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (((*(long *)(this + 0x80) == 0) && (*(long *)(this + 0x70) == 0)) &&
     (lVar1 = FUN_0512f5ec(*(undefined8 *)(this + 0x20)), lVar1 == 0)) {
    (**(code **)(*(long *)this + 0xd0))(this,0,0,0);
    plVar2 = *(long **)(this + 0x148);
    if (plVar2 == (long *)0x0) goto LAB_05133ffc;
  }
  (**(code **)(*plVar2 + 8))(plVar2);
LAB_05133ffc:
  *(undefined8 *)(this + 0x148) = 0;
  return;
}


/* Sexy::DeviceImage::DeleteAllNonSurfaceData() */

void __thiscall Sexy::DeviceImage::DeleteAllNonSurfaceData(DeviceImage *this)

{
  if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  if (*(ColourFit **)(this + 0x98) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x98));
  }
  *(undefined8 *)(this + 0x98) = 0;
  if (*(ColourFit **)(this + 0xa8) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(ColourFit **)(this + 0xa0) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0xa0));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x80) = 0;
  if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
  }
  *(undefined8 *)(this + 0x88) = 0;
  return;
}


/* Sexy::DeviceImage::BltMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&,
   int) */

void __thiscall
Sexy::DeviceImage::BltMirror
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  (**(code **)(*(long *)this + 0xa0))();
  if (param_6 != 0) {
    if (param_6 == 1) {
      (**(code **)(*(long *)this + 0x1f8))(this);
    }
    DeleteAllNonSurfaceData(this);
    return;
  }
  (**(code **)(*(long *)this + 0x1f0))(this,param_1,param_2,param_3,param_4,param_5);
  DeleteAllNonSurfaceData(this);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltMirror(Sexy::Image*, int, int, Sexy::TRect<int>
   const&, Sexy::Color const&, int) */

void __thiscall
Sexy::DeviceImage::BltMirror
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  BltMirror(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* Sexy::DeviceImage::BltTriangles(Sexy::Image*, Sexy::SexyVertex2D const (*) [3], int, Sexy::Color
   const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::DeviceImage::BltTriangles
          (DeviceImage *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8,TRect *param_9)

{
  char cVar1;
  code *pcVar2;
  int unaff_w23;
  
  pcVar2 = *(code **)(*(long *)this + 0x200);
  param_1[0x28] = (Image)0x1;
  cVar1 = (*pcVar2)();
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(this + 0x134) == 0x20) {
    unaff_w23 = 0x888;
  }
  else if (*(long *)(this + 0x138) == 0x7e00000f800) {
    unaff_w23 = 0x565;
    if (*(int *)(this + 0x140) != 0x1f) {
      unaff_w23 = 0;
    }
  }
  else if ((*(long *)(this + 0x138) == 0x3e000007c00) &&
          (unaff_w23 = 0x555, *(int *)(this + 0x140) != 0x1f)) {
    unaff_w23 = 0;
  }
  MemoryImage::BltTrianglesTexHelper
            ((MemoryImage *)this,param_1,param_2,param_3,param_9,param_4,param_5,
             *(void **)(this + 0x120),(int)*(undefined8 *)(this + 0x118),unaff_w23,param_6,param_7,
             param_8);
  (**(code **)(*(long *)this + 0x208))(this);
  DeleteAllNonSurfaceData(this);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltTriangles(Sexy::Image*, Sexy::SexyVertex2D const (*)
   [3], int, Sexy::Color const&, int, float, float, bool, Sexy::TRect<int> const*) */

void __thiscall
Sexy::DeviceImage::BltTriangles
          (DeviceImage *this,Image *param_1,SexyVertex2D *param_2,int param_3,Color *param_4,
          int param_5,float param_6,float param_7,bool param_8,TRect *param_9)

{
  BltTriangles(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  return;
}


/* Sexy::DeviceImage::FillScanLinesWithCoverage(Sexy::RenderDevice::Span*, int, Sexy::Color const&,
   int, unsigned char const*, int, int, int, int) */

void Sexy::DeviceImage::FillScanLinesWithCoverage
               (Span *param_1,int param_2,Color *param_3,int param_4,uchar *param_5,int param_6,
               int param_7,int param_8,int param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint3 uVar15;
  uint5 uVar16;
  uint5 uVar17;
  uint5 uVar18;
  char cVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  int iVar36;
  undefined8 uVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  byte bVar56;
  undefined8 uVar55;
  byte bVar57;
  uint uVar58;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined8 uVar59;
  uint uVar63;
  undefined8 uVar64;
  byte bVar66;
  byte bVar67;
  undefined8 uVar65;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  int iVar71;
  int iVar72;
  uint uVar73;
  int iVar74;
  int iVar75;
  uint uVar76;
  int iVar77;
  int iVar78;
  uint uVar79;
  int iVar80;
  int iVar81;
  byte bVar82;
  byte bVar84;
  uint uVar83;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  
  uVar24 = (ulong)(uint)param_6;
  piVar23 = (int *)(ulong)(uint)param_4;
  uVar20 = (ulong)(uint)param_2;
  iVar21 = (int)param_3;
  if (((iVar21 != 0) && (param_1[0xf9] == (Span)0x0)) &&
     (cVar19 = (**(code **)(*(long *)param_1 + 0x200))(), cVar19 != '\0')) {
    uVar5 = *(uint *)(param_1 + 0x138);
    uVar6 = *(uint *)(param_1 + 0x13c);
    uVar7 = *(uint *)(param_1 + 0x140);
    if (*(int *)(param_1 + 0x134) == 0x10) {
      lVar32 = *(long *)(param_1 + 0x120);
      uVar14 = uVar6 & 0xffff & uVar6 * piVar23[1] >> 8 | uVar5 & 0xffff & uVar5 * *piVar23 >> 8 |
               uVar7 & 0xffff & uVar7 * piVar23[2] >> 8;
      if (0 < iVar21) {
        uVar11 = uVar14 & uVar5;
        uVar4 = uVar14 & uVar6;
        iVar9 = *(int *)(param_1 + 0x38);
        uVar14 = uVar14 & uVar7;
        piVar25 = (int *)(uVar20 + 4);
        do {
          uVar8 = piVar25[1];
          lVar26 = (long)(*piVar25 + piVar25[-1] * iVar9);
          lVar27 = (long)((*piVar25 - param_7) + (piVar25[-1] - param_8) * param_9);
          puVar2 = (undefined8 *)(lVar32 + lVar26 * 2);
          puVar3 = (undefined8 *)(uVar24 + lVar27);
          if (0 < (int)uVar8) {
            iVar10 = piVar23[3];
            if ((puVar2 < (undefined8 *)(uVar24 + lVar27 + (int)uVar8) &&
                 puVar3 < (undefined8 *)(lVar32 + (lVar26 + (int)uVar8) * 2)) || (uVar8 < 0x10)) {
              lVar27 = 0;
              do {
                uVar12 = *(ushort *)((long)puVar2 + lVar27 * 2);
                iVar36 = (int)(iVar10 + (uint)*(byte *)((long)puVar3 + lVar27) * iVar10) >> 8;
                iVar38 = 0x100 - iVar36;
                *(ushort *)((long)puVar2 + lVar27 * 2) =
                     (ushort)uVar6 & (ushort)(iVar36 * uVar4 + iVar38 * (uVar12 & uVar6) >> 8) |
                     (ushort)uVar5 & (ushort)(iVar36 * uVar11 + iVar38 * (uVar12 & uVar5) >> 8) |
                     (ushort)uVar7 & (ushort)(iVar36 * uVar14 + iVar38 * (uVar12 & uVar7) >> 8);
                lVar27 = lVar27 + 1;
              } while ((int)lVar27 < (int)uVar8);
            }
            else {
              uVar1 = (uVar8 - 0x10 >> 4) + 1;
              uVar28 = 0;
              uVar13 = uVar1 * 0x10;
              puVar29 = puVar2;
              puVar30 = puVar2;
              puVar31 = puVar3;
              do {
                uVar40 = puVar31[1];
                uVar37 = *puVar31;
                uVar28 = uVar28 + 1;
                uVar59 = puVar29[1];
                uVar55 = *puVar29;
                bVar33 = (byte)((ulong)uVar37 >> 8);
                bVar34 = (byte)((ulong)uVar37 >> 0x28);
                uVar15 = CONCAT12((char)((ulong)uVar40 >> 8),(short)uVar40) & 0xff00ff;
                bVar35 = (byte)((ulong)uVar40 >> 0x28);
                uVar65 = puVar29[3];
                uVar64 = puVar29[2];
                uVar54 = (uint)uVar59 & 0xffff;
                uVar16 = (uint5)(CONCAT24((short)((ulong)uVar59 >> 0x10),(uint)uVar59) >> 8) &
                         0xffff0000ff;
                iVar50 = (int)(iVar10 + ((CONCAT12(bVar33,(short)uVar37) & 0xff00ff) & 0xffff) *
                                        iVar10) >> 8;
                iVar51 = (int)(iVar10 + (uint)bVar33 * iVar10) >> 8;
                iVar52 = (int)(iVar10 + (uint)(byte)((ulong)uVar37 >> 0x10) * iVar10) >> 8;
                iVar53 = (int)(iVar10 + (uint)(byte)((ulong)uVar37 >> 0x18) * iVar10) >> 8;
                iVar46 = (int)(iVar10 + (CONCAT12(bVar34,(ushort)(byte)((ulong)uVar37 >> 0x20)) &
                                        0xffff) * iVar10) >> 8;
                iVar47 = (int)(iVar10 + (uint)bVar34 * iVar10) >> 8;
                iVar48 = (int)(iVar10 + (uint)(byte)((ulong)uVar37 >> 0x30) * iVar10) >> 8;
                iVar49 = (int)(iVar10 + (uint)(byte)((ulong)uVar37 >> 0x38) * iVar10) >> 8;
                uVar83 = (uint)uVar64 & 0xffff;
                uVar18 = (uint5)(CONCAT24((short)((ulong)uVar64 >> 0x10),(uint)uVar64) >> 8) &
                         0xffff0000ff;
                iVar123 = 0x100 - iVar50;
                iVar124 = 0x100 - iVar51;
                iVar125 = 0x100 - iVar52;
                iVar126 = 0x100 - iVar53;
                iVar42 = (int)(iVar10 + (uVar15 & 0xffff) * iVar10) >> 8;
                iVar43 = (int)(iVar10 + (uint)(byte)(uVar15 >> 0x10) * iVar10) >> 8;
                iVar44 = (int)(iVar10 + (uint)(byte)((ulong)uVar40 >> 0x10) * iVar10) >> 8;
                iVar45 = (int)(iVar10 + (uint)(byte)((ulong)uVar40 >> 0x18) * iVar10) >> 8;
                iVar127 = 0x100 - iVar46;
                iVar128 = 0x100 - iVar47;
                iVar129 = 0x100 - iVar48;
                iVar130 = 0x100 - iVar49;
                uVar63 = (uint)uVar65 & 0xffff;
                uVar17 = (uint5)(CONCAT24((short)((ulong)uVar65 >> 0x10),(uint)uVar65) >> 8) &
                         0xffff0000ff;
                bVar107 = (byte)uVar55;
                bVar133 = (byte)uVar6;
                bVar108 = (byte)((ulong)uVar55 >> 8);
                bVar134 = (byte)(uVar6 >> 8);
                uVar76 = (uint)CONCAT11(bVar108 & bVar134,bVar107 & bVar133);
                bVar109 = (byte)((ulong)uVar55 >> 0x10);
                bVar110 = (byte)((ulong)uVar55 >> 0x18);
                bVar111 = (byte)((ulong)uVar55 >> 0x20);
                bVar112 = (byte)((ulong)uVar55 >> 0x28);
                uVar79 = (uint)CONCAT11(bVar112 & bVar134,bVar111 & bVar133);
                bVar113 = (byte)((ulong)uVar55 >> 0x30);
                bVar114 = (byte)((ulong)uVar55 >> 0x38);
                iVar36 = (int)(iVar10 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uVar40 >> 0x20)) &
                                        0xffff) * iVar10) >> 8;
                iVar38 = (int)(iVar10 + (uint)bVar35 * iVar10) >> 8;
                iVar39 = (int)(iVar10 + (uint)(byte)((ulong)uVar40 >> 0x30) * iVar10) >> 8;
                iVar41 = (int)(iVar10 + (uint)(byte)((ulong)uVar40 >> 0x38) * iVar10) >> 8;
                bVar33 = (byte)uVar54;
                bVar34 = (byte)(uVar54 >> 8);
                bVar35 = (byte)((ulong)uVar59 >> 0x10);
                uVar70 = (uint)CONCAT11(bVar34 & bVar134,bVar33 & bVar133);
                bVar56 = (byte)((ulong)uVar59 >> 0x18);
                bVar57 = (byte)((ulong)uVar59 >> 0x20);
                bVar60 = (byte)((ulong)uVar59 >> 0x28);
                bVar61 = (byte)((ulong)uVar59 >> 0x30);
                uVar73 = (uint)CONCAT11(bVar60 & bVar134,bVar57 & bVar133);
                bVar62 = (byte)((ulong)uVar59 >> 0x38);
                bVar135 = (byte)uVar5;
                bVar136 = (byte)(uVar5 >> 8);
                uVar68 = (uint)CONCAT11(bVar108 & bVar136,bVar107 & bVar135);
                uVar69 = (uint)CONCAT11(bVar112 & bVar136,bVar111 & bVar135);
                uVar54 = (uint)CONCAT11(bVar34 & bVar136,bVar33 & bVar135);
                uVar58 = (uint)CONCAT11(bVar60 & bVar136,bVar57 & bVar135);
                iVar119 = 0x100 - iVar42;
                iVar120 = 0x100 - iVar43;
                iVar121 = 0x100 - iVar44;
                iVar122 = 0x100 - iVar45;
                iVar115 = 0x100 - iVar36;
                iVar116 = 0x100 - iVar38;
                iVar117 = 0x100 - iVar39;
                iVar118 = 0x100 - iVar41;
                iVar103 = iVar50 * uVar4 + iVar123 * uVar76;
                iVar104 = iVar51 * uVar4 +
                          iVar124 * (uint)(ushort)(CONCAT15(bVar110 & bVar134,
                                                            CONCAT14(bVar109 & bVar133,uVar76)) >>
                                                  0x20);
                iVar105 = iVar52 * uVar4 + iVar125 * uVar79;
                iVar106 = iVar53 * uVar4 +
                          iVar126 * (uint)(ushort)(CONCAT15(bVar114 & bVar134,
                                                            CONCAT14(bVar113 & bVar133,uVar79)) >>
                                                  0x20);
                iVar99 = iVar46 * uVar4 + iVar127 * uVar70;
                iVar100 = iVar47 * uVar4 +
                          iVar128 * (uint)(ushort)(CONCAT15(bVar56 & bVar134,
                                                            CONCAT14(bVar35 & bVar133,uVar70)) >>
                                                  0x20);
                iVar101 = iVar48 * uVar4 + iVar129 * uVar73;
                iVar102 = iVar49 * uVar4 +
                          iVar130 * (uint)(ushort)(CONCAT15(bVar62 & bVar134,
                                                            CONCAT14(bVar61 & bVar133,uVar73)) >>
                                                  0x20);
                iVar95 = iVar50 * uVar11 + iVar123 * uVar68;
                iVar96 = iVar51 * uVar11 +
                         iVar124 * (uint)(ushort)(CONCAT15(bVar110 & bVar136,
                                                           CONCAT14(bVar109 & bVar135,uVar68)) >>
                                                 0x20);
                iVar97 = iVar52 * uVar11 + iVar125 * uVar69;
                iVar98 = iVar53 * uVar11 +
                         iVar126 * (uint)(ushort)(CONCAT15(bVar114 & bVar136,
                                                           CONCAT14(bVar113 & bVar135,uVar69)) >>
                                                 0x20);
                iVar91 = iVar46 * uVar11 + iVar127 * uVar54;
                iVar92 = iVar47 * uVar11 +
                         iVar128 * (uint)(ushort)(CONCAT15(bVar56 & bVar136,
                                                           CONCAT14(bVar35 & bVar135,uVar54)) >>
                                                 0x20);
                iVar93 = iVar48 * uVar11 + iVar129 * uVar58;
                iVar94 = iVar49 * uVar11 +
                         iVar130 * (uint)(ushort)(CONCAT15(bVar62 & bVar136,
                                                           CONCAT14(bVar61 & bVar135,uVar58)) >>
                                                 0x20);
                bVar131 = (byte)uVar7;
                bVar132 = (byte)(uVar7 >> 8);
                uVar54 = (uint)CONCAT11((byte)uVar16 & bVar132,bVar33 & bVar131);
                uVar58 = (uint)CONCAT11(bVar60 & bVar132,bVar57 & bVar131);
                bVar33 = (byte)uVar63;
                bVar34 = (byte)(uVar63 >> 8);
                bVar35 = (byte)((ulong)uVar65 >> 0x10);
                uVar63 = (uint)CONCAT11(bVar34 & bVar136,bVar33 & bVar135);
                bVar56 = (byte)((ulong)uVar65 >> 0x18);
                bVar57 = (byte)((ulong)uVar65 >> 0x20);
                bVar60 = (byte)((ulong)uVar65 >> 0x28);
                bVar66 = (byte)((ulong)uVar65 >> 0x30);
                uVar68 = (uint)CONCAT11(bVar60 & bVar136,bVar57 & bVar135);
                bVar67 = (byte)((ulong)uVar65 >> 0x38);
                bVar82 = (byte)uVar83;
                bVar84 = (byte)(uVar83 >> 8);
                bVar85 = (byte)((ulong)uVar64 >> 0x10);
                bVar86 = (byte)((ulong)uVar64 >> 0x18);
                bVar87 = (byte)((ulong)uVar64 >> 0x20);
                bVar88 = (byte)((ulong)uVar64 >> 0x28);
                bVar89 = (byte)((ulong)uVar64 >> 0x30);
                bVar90 = (byte)((ulong)uVar64 >> 0x38);
                iVar46 = iVar46 * uVar14 + iVar127 * uVar54;
                iVar47 = iVar47 * uVar14 +
                         iVar128 * (uint)(ushort)(CONCAT15((byte)(uVar16 >> 0x20) & bVar132,
                                                           CONCAT14((byte)(uVar16 >> 0x18) & bVar131
                                                                    ,uVar54)) >> 0x20);
                iVar48 = iVar48 * uVar14 + iVar129 * uVar58;
                iVar49 = iVar49 * uVar14 +
                         iVar130 * (uint)(ushort)(CONCAT15(bVar62 & bVar132,
                                                           CONCAT14(bVar61 & bVar131,uVar58)) >>
                                                 0x20);
                iVar50 = iVar50 * uVar14 +
                         iVar123 * (uint)CONCAT11(bVar108 & bVar132,bVar107 & bVar131);
                iVar51 = iVar51 * uVar14 +
                         iVar124 * (uint)CONCAT11(bVar110 & bVar132,bVar109 & bVar131);
                iVar52 = iVar52 * uVar14 +
                         iVar125 * (uint)CONCAT11(bVar112 & bVar132,bVar111 & bVar131);
                iVar53 = iVar53 * uVar14 +
                         iVar126 * (uint)CONCAT11(bVar114 & bVar132,bVar113 & bVar131);
                iVar77 = iVar42 * uVar4 +
                         iVar119 * (uint)CONCAT11(bVar84 & bVar134,bVar82 & bVar133);
                iVar78 = iVar43 * uVar4 +
                         iVar120 * (uint)CONCAT11(bVar86 & bVar134,bVar85 & bVar133);
                iVar80 = iVar44 * uVar4 +
                         iVar121 * (uint)CONCAT11(bVar88 & bVar134,bVar87 & bVar133);
                iVar81 = iVar45 * uVar4 +
                         iVar122 * (uint)CONCAT11(bVar90 & bVar134,bVar89 & bVar133);
                iVar71 = iVar36 * uVar4 +
                         iVar115 * (uint)CONCAT11(bVar34 & bVar134,bVar33 & bVar133);
                iVar72 = iVar38 * uVar4 +
                         iVar116 * (uint)CONCAT11(bVar56 & bVar134,bVar35 & bVar133);
                iVar74 = iVar39 * uVar4 +
                         iVar117 * (uint)CONCAT11(bVar60 & bVar134,bVar57 & bVar133);
                iVar75 = iVar41 * uVar4 +
                         iVar118 * (uint)CONCAT11(bVar67 & bVar134,bVar66 & bVar133);
                uVar54 = (uint)CONCAT11((byte)uVar17 & bVar132,bVar33 & bVar131);
                uVar58 = (uint)CONCAT11(bVar60 & bVar132,bVar57 & bVar131);
                iVar127 = iVar42 * uVar11 +
                          iVar119 * (uint)CONCAT11(bVar84 & bVar136,bVar82 & bVar135);
                iVar128 = iVar43 * uVar11 +
                          iVar120 * (uint)CONCAT11(bVar86 & bVar136,bVar85 & bVar135);
                iVar129 = iVar44 * uVar11 +
                          iVar121 * (uint)CONCAT11(bVar88 & bVar136,bVar87 & bVar135);
                iVar130 = iVar45 * uVar11 +
                          iVar122 * (uint)CONCAT11(bVar90 & bVar136,bVar89 & bVar135);
                iVar123 = iVar36 * uVar11 + iVar115 * uVar63;
                iVar124 = iVar38 * uVar11 +
                          iVar116 * (uint)(ushort)(CONCAT15(bVar56 & bVar136,
                                                            CONCAT14(bVar35 & bVar135,uVar63)) >>
                                                  0x20);
                iVar125 = iVar39 * uVar11 + iVar117 * uVar68;
                iVar126 = iVar41 * uVar11 +
                          iVar118 * (uint)(ushort)(CONCAT15(bVar67 & bVar136,
                                                            CONCAT14(bVar66 & bVar135,uVar68)) >>
                                                  0x20);
                uVar63 = (uint)CONCAT11((byte)uVar18 & bVar132,bVar82 & bVar131);
                uVar68 = (uint)CONCAT11(bVar88 & bVar132,bVar87 & bVar131);
                iVar42 = iVar42 * uVar14 + iVar119 * uVar63;
                iVar43 = iVar43 * uVar14 +
                         iVar120 * (uint)(ushort)(CONCAT15((byte)(uVar18 >> 0x20) & bVar132,
                                                           CONCAT14((byte)(uVar18 >> 0x18) & bVar131
                                                                    ,uVar63)) >> 0x20);
                iVar44 = iVar44 * uVar14 + iVar121 * uVar68;
                iVar45 = iVar45 * uVar14 +
                         iVar122 * (uint)(ushort)(CONCAT15(bVar90 & bVar132,
                                                           CONCAT14(bVar89 & bVar131,uVar68)) >>
                                                 0x20);
                iVar36 = iVar36 * uVar14 + iVar115 * uVar54;
                iVar38 = iVar38 * uVar14 +
                         iVar116 * (uint)(ushort)(CONCAT15((byte)(uVar17 >> 0x20) & bVar132,
                                                           CONCAT14((byte)(uVar17 >> 0x18) & bVar131
                                                                    ,uVar54)) >> 0x20);
                iVar39 = iVar39 * uVar14 + iVar117 * uVar58;
                iVar41 = iVar41 * uVar14 +
                         iVar118 * (uint)(ushort)(CONCAT15(bVar67 & bVar132,
                                                           CONCAT14(bVar66 & bVar131,uVar58)) >>
                                                 0x20);
                puVar30[1] = CONCAT17((byte)((uint)iVar102 >> 0x10) & bVar134 |
                                      (byte)((uint)iVar94 >> 0x10) & bVar136 |
                                      (byte)((uint)iVar49 >> 0x10) & bVar132,
                                      CONCAT16((byte)((uint)iVar102 >> 8) & bVar133 |
                                               (byte)((uint)iVar94 >> 8) & bVar135 |
                                               (byte)((uint)iVar49 >> 8) & bVar131,
                                               CONCAT15((byte)((uint)iVar101 >> 0x10) & bVar134 |
                                                        (byte)((uint)iVar93 >> 0x10) & bVar136 |
                                                        (byte)((uint)iVar48 >> 0x10) & bVar132,
                                                        CONCAT14((byte)((uint)iVar101 >> 8) &
                                                                 bVar133 | (byte)((uint)iVar93 >> 8)
                                                                           & bVar135 |
                                                                 (byte)((uint)iVar48 >> 8) & bVar131
                                                                 ,CONCAT13((byte)((uint)iVar100 >>
                                                                                 0x10) & bVar134 |
                                                                           (byte)((uint)iVar92 >>
                                                                                 0x10) & bVar136 |
                                                                           (byte)((uint)iVar47 >>
                                                                                 0x10) & bVar132,
                                                                           CONCAT12((byte)((uint)
                                                  iVar100 >> 8) & bVar133 |
                                                  (byte)((uint)iVar92 >> 8) & bVar135 |
                                                  (byte)((uint)iVar47 >> 8) & bVar131,
                                                  CONCAT11((byte)((uint)iVar99 >> 0x10) & bVar134 |
                                                           (byte)((uint)iVar91 >> 0x10) & bVar136 |
                                                           (byte)((uint)iVar46 >> 0x10) & bVar132,
                                                           (byte)((uint)iVar99 >> 8) & bVar133 |
                                                           (byte)((uint)iVar91 >> 8) & bVar135 |
                                                           (byte)((uint)iVar46 >> 8) & bVar131))))))
                                     );
                *puVar30 = CONCAT17((byte)((uint)iVar106 >> 0x10) & bVar134 |
                                    (byte)((uint)iVar98 >> 0x10) & bVar136 |
                                    (byte)((uint)iVar53 >> 0x10) & bVar132,
                                    CONCAT16((byte)((uint)iVar106 >> 8) & bVar133 |
                                             (byte)((uint)iVar98 >> 8) & bVar135 |
                                             (byte)((uint)iVar53 >> 8) & bVar131,
                                             CONCAT15((byte)((uint)iVar105 >> 0x10) & bVar134 |
                                                      (byte)((uint)iVar97 >> 0x10) & bVar136 |
                                                      (byte)((uint)iVar52 >> 0x10) & bVar132,
                                                      CONCAT14((byte)((uint)iVar105 >> 8) & bVar133
                                                               | (byte)((uint)iVar97 >> 8) & bVar135
                                                               | (byte)((uint)iVar52 >> 8) & bVar131
                                                               ,CONCAT13((byte)((uint)iVar104 >>
                                                                               0x10) & bVar134 |
                                                                         (byte)((uint)iVar96 >> 0x10
                                                                               ) & bVar136 |
                                                                         (byte)((uint)iVar51 >> 0x10
                                                                               ) & bVar132,
                                                                         CONCAT12((byte)((uint)
                                                  iVar104 >> 8) & bVar133 |
                                                  (byte)((uint)iVar96 >> 8) & bVar135 |
                                                  (byte)((uint)iVar51 >> 8) & bVar131,
                                                  CONCAT11((byte)((uint)iVar103 >> 0x10) & bVar134 |
                                                           (byte)((uint)iVar95 >> 0x10) & bVar136 |
                                                           (byte)((uint)iVar50 >> 0x10) & bVar132,
                                                           (byte)((uint)iVar103 >> 8) & bVar133 |
                                                           (byte)((uint)iVar95 >> 8) & bVar135 |
                                                           (byte)((uint)iVar50 >> 8) & bVar131))))))
                                   );
                puVar30[3] = CONCAT17((byte)((uint)iVar75 >> 0x10) & bVar134 |
                                      (byte)((uint)iVar126 >> 0x10) & bVar136 |
                                      (byte)((uint)iVar41 >> 0x10) & bVar132,
                                      CONCAT16((byte)((uint)iVar75 >> 8) & bVar133 |
                                               (byte)((uint)iVar126 >> 8) & bVar135 |
                                               (byte)((uint)iVar41 >> 8) & bVar131,
                                               CONCAT15((byte)((uint)iVar74 >> 0x10) & bVar134 |
                                                        (byte)((uint)iVar125 >> 0x10) & bVar136 |
                                                        (byte)((uint)iVar39 >> 0x10) & bVar132,
                                                        CONCAT14((byte)((uint)iVar74 >> 8) & bVar133
                                                                 | (byte)((uint)iVar125 >> 8) &
                                                                   bVar135 |
                                                                 (byte)((uint)iVar39 >> 8) & bVar131
                                                                 ,CONCAT13((byte)((uint)iVar72 >>
                                                                                 0x10) & bVar134 |
                                                                           (byte)((uint)iVar124 >>
                                                                                 0x10) & bVar136 |
                                                                           (byte)((uint)iVar38 >>
                                                                                 0x10) & bVar132,
                                                                           CONCAT12((byte)((uint)
                                                  iVar72 >> 8) & bVar133 |
                                                  (byte)((uint)iVar124 >> 8) & bVar135 |
                                                  (byte)((uint)iVar38 >> 8) & bVar131,
                                                  CONCAT11((byte)((uint)iVar71 >> 0x10) & bVar134 |
                                                           (byte)((uint)iVar123 >> 0x10) & bVar136 |
                                                           (byte)((uint)iVar36 >> 0x10) & bVar132,
                                                           (byte)((uint)iVar71 >> 8) & bVar133 |
                                                           (byte)((uint)iVar123 >> 8) & bVar135 |
                                                           (byte)((uint)iVar36 >> 8) & bVar131))))))
                                     );
                puVar30[2] = CONCAT17((byte)((uint)iVar81 >> 0x10) & bVar134 |
                                      (byte)((uint)iVar130 >> 0x10) & bVar136 |
                                      (byte)((uint)iVar45 >> 0x10) & bVar132,
                                      CONCAT16((byte)((uint)iVar81 >> 8) & bVar133 |
                                               (byte)((uint)iVar130 >> 8) & bVar135 |
                                               (byte)((uint)iVar45 >> 8) & bVar131,
                                               CONCAT15((byte)((uint)iVar80 >> 0x10) & bVar134 |
                                                        (byte)((uint)iVar129 >> 0x10) & bVar136 |
                                                        (byte)((uint)iVar44 >> 0x10) & bVar132,
                                                        CONCAT14((byte)((uint)iVar80 >> 8) & bVar133
                                                                 | (byte)((uint)iVar129 >> 8) &
                                                                   bVar135 |
                                                                 (byte)((uint)iVar44 >> 8) & bVar131
                                                                 ,CONCAT13((byte)((uint)iVar78 >>
                                                                                 0x10) & bVar134 |
                                                                           (byte)((uint)iVar128 >>
                                                                                 0x10) & bVar136 |
                                                                           (byte)((uint)iVar43 >>
                                                                                 0x10) & bVar132,
                                                                           CONCAT12((byte)((uint)
                                                  iVar78 >> 8) & bVar133 |
                                                  (byte)((uint)iVar128 >> 8) & bVar135 |
                                                  (byte)((uint)iVar43 >> 8) & bVar131,
                                                  CONCAT11((byte)((uint)iVar77 >> 0x10) & bVar134 |
                                                           (byte)((uint)iVar127 >> 0x10) & bVar136 |
                                                           (byte)((uint)iVar42 >> 0x10) & bVar132,
                                                           (byte)((uint)iVar77 >> 8) & bVar133 |
                                                           (byte)((uint)iVar127 >> 8) & bVar135 |
                                                           (byte)((uint)iVar42 >> 8) & bVar131))))))
                                     );
                puVar29 = puVar29 + 4;
                puVar30 = puVar30 + 4;
                puVar31 = puVar31 + 2;
              } while (uVar28 < uVar1);
              uVar22 = (ulong)uVar13;
              if (uVar8 != uVar13) {
                lVar27 = 0;
                do {
                  uVar12 = *(ushort *)((long)puVar2 + lVar27 * 2 + uVar22 * 2);
                  iVar36 = (int)(iVar10 + (uint)*(byte *)((long)puVar3 + lVar27 + uVar22) * iVar10)
                           >> 8;
                  iVar38 = 0x100 - iVar36;
                  *(ushort *)((long)puVar2 + lVar27 * 2 + uVar22 * 2) =
                       (ushort)uVar6 & (ushort)(iVar36 * uVar4 + iVar38 * (uVar12 & uVar6) >> 8) |
                       (ushort)uVar5 & (ushort)(iVar36 * uVar11 + iVar38 * (uVar12 & uVar5) >> 8) |
                       (ushort)uVar7 & (ushort)(iVar36 * uVar14 + iVar38 * (uVar12 & uVar7) >> 8);
                  lVar27 = lVar27 + 1;
                } while ((int)(uVar13 + (int)lVar27) < (int)uVar8);
              }
            }
          }
          piVar25 = piVar25 + 3;
        } while (piVar25 != (int *)(uVar20 + (ulong)(iVar21 - 1) * 0xc + 0x10));
      }
    }
    else if (*(int *)(param_1 + 0x134) == 0x20) {
      lVar32 = *(long *)(param_1 + 0x120);
      uVar14 = uVar6 & uVar6 * piVar23[1] >> 8 | uVar5 & uVar5 * *piVar23 >> 8 |
               uVar7 & uVar7 * piVar23[2] >> 8;
      if (0 < iVar21) {
        piVar25 = (int *)(uVar20 + 8);
        do {
          iVar9 = piVar25[-1];
          lVar26 = 0;
          iVar10 = piVar25[-2];
          lVar27 = lVar32 + (long)(iVar9 + iVar10 * *(int *)(param_1 + 0x38)) * 4;
          if (0 < *piVar25) {
            do {
              iVar39 = (int)lVar26;
              uVar11 = *(uint *)(lVar27 + lVar26 * 4);
              iVar36 = (int)(piVar23[3] +
                            (uint)*(byte *)(uVar24 + (long)((iVar9 - param_7) +
                                                           (iVar10 - param_8) * param_9) + lVar26) *
                            piVar23[3]) >> 8;
              iVar38 = 0x100 - iVar36;
              *(uint *)(lVar27 + lVar26 * 4) =
                   uVar6 & iVar36 * (uVar14 & uVar6) + iVar38 * (uVar11 & uVar6) >> 8 |
                   uVar5 & iVar36 * (uVar14 & uVar5) + iVar38 * (uVar11 & uVar5) >> 8 |
                   uVar7 & iVar36 * (uVar14 & uVar7) + iVar38 * (uVar11 & uVar7) >> 8;
              lVar26 = lVar26 + 1;
            } while (iVar39 + 1 < *piVar25);
          }
          piVar25 = piVar25 + 3;
        } while (piVar25 != (int *)(uVar20 + (ulong)(iVar21 - 1) * 0xc + 0x14));
      }
    }
    (**(code **)(*(long *)param_1 + 0x208))(param_1);
    DeleteAllNonSurfaceData((DeviceImage *)param_1);
    return;
  }
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::FillScanLinesWithCoverage(Sexy::RenderDevice::Span*, int,
   Sexy::Color const&, int, unsigned char const*, int, int, int, int) */

void __thiscall
Sexy::DeviceImage::FillScanLinesWithCoverage
          (DeviceImage *this,Span *param_1,int param_2,Color *param_3,int param_4,uchar *param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  FillScanLinesWithCoverage
            ((Span *)(this + -0x68),(int)param_1,(Color *)(ulong)(uint)param_2,(int)param_3,
             (uchar *)(ulong)(uint)param_4,(int)param_5,param_6,param_7,param_8);
  return;
}


/* Sexy::DeviceImage::NormalDrawLine(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::DeviceImage::NormalDrawLine
          (DeviceImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  char cVar15;
  double *pdVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  ushort *puVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  if (this[0xf9] == (DeviceImage)0x0) {
    local_20 = param_4;
    local_18 = param_3;
    local_10 = param_2;
    local_8 = param_1;
    pdVar16 = std::min<double>(&local_8,&local_18);
    dVar35 = *pdVar16;
    pdVar16 = std::min<double>(&local_10,&local_20);
    dVar36 = *pdVar16;
    pdVar16 = std::max<double>(&local_8,&local_18);
    dVar37 = *pdVar16;
    pdVar16 = std::max<double>(&local_10,&local_20);
    dVar38 = *pdVar16;
    cVar15 = (**(code **)(*(long *)this + 0x200))(this);
    if (cVar15 != '\0') {
      uVar1 = *(uint *)(this + 0x138);
      uVar2 = *(uint *)(this + 0x13c);
      uVar3 = *(uint *)(this + 0x140);
      uVar8 = uVar1 >> 1;
      uVar9 = uVar2 >> 1;
      uVar10 = uVar3 >> 1;
      if (*(int *)(this + 0x134) == 0x10) {
        iVar17 = *(int *)(param_5 + 0xc);
        uVar6 = (ushort)uVar1;
        uVar13 = (ushort)uVar3;
        uVar14 = (ushort)uVar2;
        if (iVar17 == 0xff) {
          dVar33 = local_20;
          dVar34 = local_18;
          uVar24 = *(ulong *)(this + 0x118);
          dVar32 = local_20 - local_10;
          dVar31 = local_18 - local_8;
          uVar19 = uVar24 >> 1;
          uVar6 = uVar14 & (ushort)(uVar9 + uVar2 * *(int *)(param_5 + 4) >> 8) |
                  uVar6 & (ushort)(uVar8 + uVar1 * *(int *)param_5 >> 8) |
                  uVar13 & (ushort)(uVar10 + uVar3 * *(int *)(param_5 + 8) >> 8);
          if (ABS(dVar31) <= ABS(dVar32)) {
            if (dVar32 < 0.0) {
              dVar31 = -dVar31;
              dVar32 = -dVar32;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar33;
              local_8 = dVar34;
            }
            uVar28 = 1;
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              uVar28 = 0xffffffff;
            }
            lVar25 = *(long *)(this + 0x120);
            iVar20 = (int)local_8;
            iVar29 = (int)(dVar31 + dVar31);
            iVar17 = (int)(local_10 + 1.0);
            lVar18 = ((long)iVar20 + ((long)(int)local_10 * uVar24 >> 1)) * 2;
            *(ushort *)(lVar25 + lVar18) = uVar6;
            puVar21 = (ushort *)(lVar25 + lVar18);
            iVar22 = (int)((double)(int)((dVar31 + dVar31) - dVar32) +
                          (local_8 - (double)iVar20) * (double)iVar29);
            while (dVar33 = (double)iVar17, dVar33 <= local_20) {
              puVar21 = (ushort *)
                        ((long)puVar21 +
                        (-(uVar24 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar19 & 0xffffffff) << 1));
              iVar17 = iVar17 + 1;
              iVar27 = iVar29;
              if (0 < iVar22) {
                iVar20 = iVar20 + (int)uVar28;
                puVar21 = (ushort *)
                          ((long)puVar21 + (-(uVar28 >> 0x1f) & 0xfffffffe00000000 | uVar28 << 1));
                if (((double)iVar20 < dVar35 || (dVar38 < dVar33 || dVar33 < dVar36)) ||
                   (iVar27 = (int)((dVar31 - dVar32) + (dVar31 - dVar32)), dVar37 < (double)iVar20))
                break;
              }
              iVar22 = iVar22 + iVar27;
              *puVar21 = uVar6;
            }
          }
          else {
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              dVar32 = -dVar32;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar33;
              local_8 = dVar34;
            }
            if (dVar32 < 0.0) {
              dVar32 = -dVar32;
              uVar24 = (ulong)(uint)-(int)uVar19;
              iVar17 = -1;
            }
            else {
              uVar24 = uVar19 & 0xffffffff;
              iVar17 = 1;
            }
            lVar25 = *(long *)(this + 0x120);
            iVar20 = (int)local_10;
            iVar29 = (int)local_8;
            iVar27 = (int)(dVar32 + dVar32);
            lVar18 = ((long)iVar29 + (long)(iVar20 * (int)uVar19)) * 2;
            *(ushort *)(lVar25 + lVar18) = uVar6;
            puVar21 = (ushort *)(lVar25 + lVar18);
            iVar22 = (int)((double)(int)((dVar32 + dVar32) - dVar31) +
                          (local_10 - (double)iVar20) * (double)iVar27);
            while( true ) {
              iVar29 = iVar29 + 1;
              dVar33 = (double)iVar29;
              if (local_18 < dVar33) break;
              puVar21 = puVar21 + 1;
              iVar23 = iVar27;
              if (0 < iVar22) {
                iVar20 = iVar20 + iVar17;
                puVar21 = (ushort *)
                          ((long)puVar21 + (-(uVar24 >> 0x1f) & 0xfffffffe00000000 | uVar24 << 1));
                if (((dVar33 < dVar35) || ((double)iVar20 < dVar36 || dVar37 < dVar33)) ||
                   (iVar23 = (int)((dVar32 - dVar31) + (dVar32 - dVar31)), dVar38 < (double)iVar20))
                break;
              }
              iVar22 = iVar22 + iVar23;
              *puVar21 = uVar6;
            }
          }
        }
        else {
          dVar32 = local_20;
          uVar19 = *(ulong *)(this + 0x118);
          dVar33 = local_18;
          uVar24 = uVar19 >> 1;
          dVar34 = local_20 - local_10;
          dVar31 = local_18 - local_8;
          iVar20 = 0x100 - iVar17;
          uVar7 = (int)dVar34 >> 0x1f;
          uVar4 = (int)dVar31 >> 0x1f;
          sVar12 = (uVar14 & (ushort)(uVar9 + (iVar17 * *(int *)(param_5 + 4) + 0x80 >> 8) * uVar2
                                     >> 8)) +
                   (uVar6 & (ushort)(uVar8 + (iVar17 * *(int *)param_5 + 0x80 >> 8) * uVar1 >> 8)) +
                   (uVar13 & (ushort)(uVar10 + (iVar17 * *(int *)(param_5 + 8) + 0x80 >> 8) * uVar3
                                     >> 8));
          if ((int)(((int)dVar34 ^ uVar7) - uVar7) < (int)(((int)dVar31 ^ uVar4) - uVar4)) {
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              dVar34 = -dVar34;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar32;
              local_8 = dVar33;
            }
            if (dVar34 < 0.0) {
              dVar34 = -dVar34;
              uVar19 = (ulong)(uint)-(int)uVar24;
              iVar17 = -1;
            }
            else {
              uVar19 = uVar24 & 0xffffffff;
              iVar17 = 1;
            }
            lVar25 = *(long *)(this + 0x120);
            iVar29 = (int)local_10;
            iVar23 = (int)(dVar34 + dVar34);
            lVar18 = ((long)(int)local_8 + (long)(iVar29 * (int)uVar24)) * 2;
            puVar21 = (ushort *)(lVar25 + lVar18);
            iVar22 = (int)(local_8 + 1.0);
            uVar5 = *(ushort *)(lVar25 + lVar18);
            *(ushort *)(lVar25 + lVar18) =
                 sVar12 + (uVar6 & (ushort)(uVar8 + (uVar5 & uVar1) * iVar20 >> 8)) +
                          (uVar14 & (ushort)(uVar9 + (uVar5 & uVar2) * iVar20 >> 8)) +
                 (uVar13 & (ushort)(uVar10 + (uVar5 & uVar3) * iVar20 >> 8));
            iVar27 = (int)((double)(int)((dVar34 + dVar34) - dVar31) +
                          (local_10 - (double)iVar29) * (double)iVar23);
            while (dVar32 = (double)iVar22, dVar32 <= local_18) {
              puVar21 = puVar21 + 1;
              iVar22 = iVar22 + 1;
              iVar30 = iVar23;
              if (0 < iVar27) {
                iVar29 = iVar29 + iVar17;
                if (((dVar32 < dVar35) || ((double)iVar29 < dVar36 || dVar37 < dVar32)) ||
                   (puVar21 = (ushort *)
                              ((long)puVar21 +
                              (-(uVar19 >> 0x1f) & 0xfffffffe00000000 | uVar19 << 1)),
                   iVar30 = (int)((dVar34 - dVar31) + (dVar34 - dVar31)), dVar38 < (double)iVar29))
                break;
              }
              iVar27 = iVar27 + iVar30;
              uVar5 = *puVar21;
              *puVar21 = sVar12 + (uVar6 & (ushort)(uVar8 + (uVar5 & uVar1) * iVar20 >> 8)) +
                                  (uVar14 & (ushort)(uVar9 + (uVar5 & uVar2) * iVar20 >> 8)) +
                         (uVar13 & (ushort)(uVar10 + (uVar5 & uVar3) * iVar20 >> 8));
            }
          }
          else {
            if (dVar34 < 0.0) {
              dVar31 = -dVar31;
              dVar34 = -dVar34;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar32;
              local_8 = dVar33;
            }
            uVar28 = 1;
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              uVar28 = 0xffffffff;
            }
            lVar18 = *(long *)(this + 0x120);
            iVar22 = (int)local_8;
            lVar25 = ((long)iVar22 + ((long)(int)local_10 * uVar19 >> 1)) * 2;
            iVar27 = (int)(dVar31 + dVar31);
            puVar21 = (ushort *)(lVar18 + lVar25);
            iVar17 = (int)(local_10 + 1.0);
            uVar5 = *(ushort *)(lVar18 + lVar25);
            *(ushort *)(lVar18 + lVar25) =
                 sVar12 + (uVar6 & (ushort)(uVar8 + (uVar5 & uVar1) * iVar20 >> 8)) +
                          (uVar14 & (ushort)(uVar9 + (uVar5 & uVar2) * iVar20 >> 8)) +
                 (uVar13 & (ushort)(uVar10 + (uVar5 & uVar3) * iVar20 >> 8));
            iVar29 = (int)((double)(int)((dVar31 + dVar31) - dVar34) +
                          (local_8 - (double)iVar22) * (double)iVar27);
            while (dVar32 = (double)iVar17, dVar32 <= local_20) {
              puVar21 = (ushort *)
                        ((long)puVar21 +
                        (-(uVar19 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar24 & 0xffffffff) << 1));
              iVar17 = iVar17 + 1;
              iVar23 = iVar27;
              if (0 < iVar29) {
                iVar22 = iVar22 + (int)uVar28;
                puVar21 = (ushort *)
                          ((long)puVar21 + (-(uVar28 >> 0x1f) & 0xfffffffe00000000 | uVar28 << 1));
                if (((double)iVar22 < dVar35 || (dVar38 < dVar32 || dVar32 < dVar36)) ||
                   (iVar23 = (int)((dVar31 - dVar34) + (dVar31 - dVar34)), dVar37 < (double)iVar22))
                break;
              }
              iVar29 = iVar29 + iVar23;
              uVar5 = *puVar21;
              *puVar21 = sVar12 + (uVar6 & (ushort)(uVar8 + (uVar5 & uVar1) * iVar20 >> 8)) +
                                  (uVar14 & (ushort)(uVar9 + (uVar5 & uVar2) * iVar20 >> 8)) +
                         (uVar13 & (ushort)(uVar10 + (uVar5 & uVar3) * iVar20 >> 8));
            }
          }
        }
      }
      else if (*(int *)(this + 0x134) == 0x20) {
        iVar17 = *(int *)(param_5 + 0xc);
        if (iVar17 == 0xff) {
          dVar33 = local_20;
          dVar34 = local_18;
          uVar19 = *(ulong *)(this + 0x118);
          dVar32 = local_20 - local_10;
          dVar31 = local_18 - local_8;
          uVar24 = uVar19 >> 2;
          uVar7 = (int)dVar32 >> 0x1f;
          uVar4 = (int)dVar31 >> 0x1f;
          uVar1 = uVar2 & uVar9 + uVar2 * *(int *)(param_5 + 4) >> 8 |
                  uVar1 & uVar8 + uVar1 * *(int *)param_5 >> 8 |
                  uVar3 & uVar10 + uVar3 * *(int *)(param_5 + 8) >> 8;
          iVar17 = (int)uVar24;
          if ((int)(((int)dVar32 ^ uVar7) - uVar7) < (int)(((int)dVar31 ^ uVar4) - uVar4)) {
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              dVar32 = -dVar32;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar33;
              local_8 = dVar34;
            }
            if (dVar32 < 0.0) {
              dVar32 = -dVar32;
              uVar24 = (ulong)(uint)-iVar17;
              iVar20 = -1;
            }
            else {
              uVar24 = uVar24 & 0xffffffff;
              iVar20 = 1;
            }
            lVar25 = *(long *)(this + 0x120);
            iVar29 = (int)local_10;
            iVar27 = (int)(dVar32 + dVar32);
            iVar22 = (int)(local_8 + 1.0);
            lVar18 = ((long)(int)local_8 + (long)(iVar29 * iVar17)) * 4;
            *(uint *)(lVar25 + lVar18) = uVar1;
            puVar26 = (uint *)(lVar25 + lVar18);
            iVar17 = (int)((double)(int)((dVar32 + dVar32) - dVar31) +
                          (local_10 - (double)iVar29) * (double)iVar27);
            while (dVar33 = (double)iVar22, dVar33 <= local_18) {
              puVar26 = puVar26 + 1;
              iVar22 = iVar22 + 1;
              iVar23 = iVar27;
              if (0 < iVar17) {
                iVar29 = iVar29 + iVar20;
                puVar26 = (uint *)((long)puVar26 +
                                  (-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2));
                if (((dVar33 < dVar35) || ((double)iVar29 < dVar36 || dVar37 < dVar33)) ||
                   (iVar23 = (int)((dVar32 - dVar31) + (dVar32 - dVar31)), dVar38 < (double)iVar29))
                break;
              }
              iVar17 = iVar17 + iVar23;
              *puVar26 = uVar1;
            }
          }
          else {
            if (dVar32 < 0.0) {
              dVar31 = -dVar31;
              dVar32 = -dVar32;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar33;
              local_8 = dVar34;
            }
            uVar28 = 1;
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              uVar28 = 0xffffffff;
            }
            lVar25 = *(long *)(this + 0x120);
            iVar22 = (int)local_8;
            iVar29 = (int)(dVar31 + dVar31);
            iVar20 = (int)(local_10 + 1.0);
            lVar18 = ((long)iVar22 + (long)((int)local_10 * iVar17)) * 4;
            *(uint *)(lVar25 + lVar18) = uVar1;
            puVar26 = (uint *)(lVar25 + lVar18);
            iVar17 = (int)((double)(int)((dVar31 + dVar31) - dVar32) +
                          (local_8 - (double)iVar22) * (double)iVar29);
            while (dVar33 = (double)iVar20, dVar33 <= local_20) {
              puVar26 = (uint *)((long)puVar26 +
                                (-(uVar19 >> 0x21 & 1) & 0xfffffffc00000000 |
                                (uVar24 & 0xffffffff) << 2));
              iVar20 = iVar20 + 1;
              iVar27 = iVar29;
              if (0 < iVar17) {
                iVar22 = iVar22 + (int)uVar28;
                puVar26 = (uint *)((long)puVar26 +
                                  (-(uVar28 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2));
                if (((double)iVar22 < dVar35 || (dVar38 < dVar33 || dVar33 < dVar36)) ||
                   (iVar27 = (int)((dVar31 - dVar32) + (dVar31 - dVar32)), dVar37 < (double)iVar22))
                break;
              }
              iVar17 = iVar17 + iVar27;
              *puVar26 = uVar1;
            }
          }
        }
        else {
          dVar32 = local_20;
          dVar33 = local_18;
          uVar19 = *(ulong *)(this + 0x118);
          dVar34 = local_20 - local_10;
          dVar31 = local_18 - local_8;
          uVar24 = uVar19 >> 2;
          iVar20 = 0x100 - iVar17;
          uVar7 = (int)dVar34 >> 0x1f;
          uVar4 = (int)dVar31 >> 0x1f;
          iVar17 = (uVar2 & uVar9 + (iVar17 * *(int *)(param_5 + 4) + 0x80 >> 8) * uVar2 >> 8) +
                   (uVar1 & uVar8 + (iVar17 * *(int *)param_5 + 0x80 >> 8) * uVar1 >> 8) +
                   (uVar3 & uVar10 + (iVar17 * *(int *)(param_5 + 8) + 0x80 >> 8) * uVar3 >> 8);
          iVar22 = (int)uVar24;
          if ((int)(((int)dVar34 ^ uVar7) - uVar7) < (int)(((int)dVar31 ^ uVar4) - uVar4)) {
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              dVar34 = -dVar34;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar32;
              local_8 = dVar33;
            }
            if (dVar34 < 0.0) {
              dVar34 = -dVar34;
              uVar24 = (ulong)(uint)-iVar22;
              iVar29 = -1;
            }
            else {
              uVar24 = uVar24 & 0xffffffff;
              iVar29 = 1;
            }
            lVar18 = *(long *)(this + 0x120);
            iVar27 = (int)local_10;
            iVar30 = (int)(dVar34 + dVar34);
            lVar25 = ((long)(int)local_8 + (long)(iVar27 * iVar22)) * 4;
            puVar26 = (uint *)(lVar18 + lVar25);
            uVar4 = *(uint *)(lVar18 + lVar25);
            iVar22 = (int)(local_8 + 1.0);
            *(uint *)(lVar18 + lVar25) =
                 (uVar1 & uVar8 + (uVar4 & uVar1) * iVar20 >> 8) +
                 (uVar2 & uVar9 + (uVar4 & uVar2) * iVar20 >> 8) + iVar17 +
                 (uVar3 & uVar10 + (uVar4 & uVar3) * iVar20 >> 8);
            iVar23 = (int)((double)(int)((dVar34 + dVar34) - dVar31) +
                          (local_8 - (double)(int)local_8) * (double)iVar30);
            while (dVar32 = (double)iVar22, dVar32 <= local_18) {
              puVar26 = puVar26 + 1;
              iVar22 = iVar22 + 1;
              iVar11 = iVar30;
              if (0 < iVar23) {
                iVar27 = iVar27 + iVar29;
                if (((dVar32 < dVar35) || ((double)iVar27 < dVar36 || dVar37 < dVar32)) ||
                   (puVar26 = (uint *)((long)puVar26 +
                                      (-(uVar24 >> 0x1f) & 0xfffffffc00000000 | uVar24 << 2)),
                   iVar11 = (int)((dVar34 - dVar31) + (dVar34 - dVar31)), dVar38 < (double)iVar27))
                break;
              }
              iVar23 = iVar23 + iVar11;
              uVar4 = *puVar26;
              *puVar26 = (uVar1 & uVar8 + (uVar4 & uVar1) * iVar20 >> 8) +
                         (uVar2 & uVar9 + (uVar4 & uVar2) * iVar20 >> 8) + iVar17 +
                         (uVar3 & uVar10 + (uVar4 & uVar3) * iVar20 >> 8);
            }
          }
          else {
            if (dVar34 < 0.0) {
              dVar31 = -dVar31;
              dVar34 = -dVar34;
              local_20 = local_10;
              local_18 = local_8;
              local_10 = dVar32;
              local_8 = dVar33;
            }
            uVar28 = 1;
            if (dVar31 < 0.0) {
              dVar31 = -dVar31;
              uVar28 = 0xffffffff;
            }
            lVar18 = *(long *)(this + 0x120);
            iVar29 = (int)local_8;
            iVar23 = (int)(dVar31 + dVar31);
            lVar25 = ((long)iVar29 + (long)((int)local_10 * iVar22)) * 4;
            iVar22 = (int)(local_10 + 1.0);
            puVar26 = (uint *)(lVar18 + lVar25);
            uVar4 = *(uint *)(lVar18 + lVar25);
            *(uint *)(lVar18 + lVar25) =
                 (uVar1 & uVar8 + (uVar4 & uVar1) * iVar20 >> 8) +
                 (uVar2 & uVar9 + (uVar4 & uVar2) * iVar20 >> 8) + iVar17 +
                 (uVar3 & uVar10 + (uVar4 & uVar3) * iVar20 >> 8);
            iVar27 = (int)((double)(int)((dVar31 + dVar31) - dVar34) +
                          (local_8 - (double)iVar29) * (double)iVar23);
            while (dVar32 = (double)iVar22, dVar32 <= local_20) {
              puVar26 = (uint *)((long)puVar26 +
                                (-(uVar19 >> 0x21 & 1) & 0xfffffffc00000000 |
                                (uVar24 & 0xffffffff) << 2));
              iVar22 = iVar22 + 1;
              iVar30 = iVar23;
              if (0 < iVar27) {
                iVar29 = iVar29 + (int)uVar28;
                puVar26 = (uint *)((long)puVar26 +
                                  (-(uVar28 >> 0x1f) & 0xfffffffc00000000 | uVar28 << 2));
                if (((double)iVar29 < dVar35 || (dVar38 < dVar32 || dVar32 < dVar36)) ||
                   (iVar30 = (int)((dVar31 - dVar34) + (dVar31 - dVar34)), dVar37 < (double)iVar29))
                break;
              }
              iVar27 = iVar27 + iVar30;
              uVar4 = *puVar26;
              *puVar26 = (uVar1 & uVar8 + (uVar4 & uVar1) * iVar20 >> 8) +
                         (uVar2 & uVar9 + (uVar4 & uVar2) * iVar20 >> 8) + iVar17 +
                         (uVar3 & uVar10 + (uVar4 & uVar3) * iVar20 >> 8);
            }
          }
        }
      }
      (**(code **)(*(long *)this + 0x208))(this);
      return;
    }
  }
  return;
}


/* Sexy::DeviceImage::AdditiveDrawLine(double, double, double, double, Sexy::Color const&) */

void __thiscall
Sexy::DeviceImage::AdditiveDrawLine
          (DeviceImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5)

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
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  double *pdVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ushort *puVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  if (this[0xf9] == (DeviceImage)0x0) {
    local_20 = param_4;
    local_18 = param_3;
    local_10 = param_2;
    local_8 = param_1;
    pdVar14 = std::min<double>(&local_8,&local_18);
    dVar36 = *pdVar14;
    pdVar14 = std::min<double>(&local_10,&local_20);
    dVar37 = *pdVar14;
    pdVar14 = std::max<double>(&local_8,&local_18);
    dVar38 = *pdVar14;
    pdVar14 = std::max<double>(&local_10,&local_20);
    dVar39 = *pdVar14;
    cVar13 = (**(code **)(*(long *)this + 0x200))(this);
    if (cVar13 != '\0') {
      uVar3 = *(uint *)(this + 0x138);
      uVar4 = *(uint *)(this + 0x13c);
      uVar5 = *(uint *)(this + 0x140);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      uVar6 = *(uint *)(lVar15 + 0x1c);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      uVar7 = *(uint *)(lVar15 + 0x20);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      uVar8 = *(uint *)(lVar15 + 0x24);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      lVar31 = *(long *)(lVar15 + 0x28);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      lVar30 = *(long *)(lVar15 + 0x30);
      lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      lVar15 = *(long *)(lVar15 + 0x38);
      if (*(int *)(this + 0x134) == 0x10) {
        iVar25 = *(int *)(param_5 + 0xc);
        iVar26 = *(int *)param_5;
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
        iVar27 = *(int *)(param_5 + 0xc);
        iVar18 = *(int *)(param_5 + 4);
        uVar1 = (iVar26 * iVar25) / 0xff >> (8U - *(int *)(lVar16 + 0x10) & 0x1f);
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        iVar25 = *(int *)(param_5 + 0xc);
        iVar26 = *(int *)(param_5 + 8);
        uVar9 = (iVar18 * iVar27) / 0xff >> (8U - *(int *)(lVar16 + 0x14) & 0x1f);
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        dVar34 = local_20;
        dVar33 = local_18;
        uVar19 = *(ulong *)(this + 0x118);
        dVar35 = local_20 - local_10;
        uVar2 = (iVar26 * iVar25) / 0xff >> (8U - *(int *)(lVar16 + 0x18) & 0x1f);
        dVar32 = local_18 - local_8;
        uVar21 = uVar19 >> 1;
        uVar12 = (int)dVar35 >> 0x1f;
        uVar11 = (int)dVar32 >> 0x1f;
        if ((int)(((int)dVar35 ^ uVar12) - uVar12) < (int)(((int)dVar32 ^ uVar11) - uVar11)) {
          if (dVar32 < 0.0) {
            dVar32 = -dVar32;
            dVar35 = -dVar35;
            local_20 = local_10;
            local_18 = local_8;
            local_10 = dVar34;
            local_8 = dVar33;
          }
          if (dVar35 < 0.0) {
            dVar35 = -dVar35;
            uVar19 = (ulong)(uint)-(int)uVar21;
            iVar25 = -1;
          }
          else {
            uVar19 = uVar21 & 0xffffffff;
            iVar25 = 1;
          }
          lVar20 = *(long *)(this + 0x120);
          iVar27 = (int)local_10;
          uVar2 = uVar2 & 0xffff;
          uVar1 = uVar1 & 0xffff;
          uVar9 = uVar9 & 0xffff;
          lVar16 = ((long)(int)local_8 + (long)(iVar27 * (int)uVar21)) * 2;
          iVar28 = (int)(dVar35 + dVar35);
          puVar22 = (ushort *)(lVar20 + lVar16);
          uVar10 = *(ushort *)(lVar20 + lVar16);
          iVar26 = (int)(local_8 + 1.0);
          *(ushort *)(lVar20 + lVar16) =
               (ushort)(*(int *)(lVar30 + (ulong)(((uVar10 & uVar4) >> (ulong)(uVar7 & 0x1f)) +
                                                 uVar9) * 4) << (ulong)(uVar7 & 0x1f)) |
               (ushort)(*(int *)(lVar31 + (ulong)(((uVar10 & uVar3) >> (ulong)(uVar6 & 0x1f)) +
                                                 uVar1) * 4) << (ulong)(uVar6 & 0x1f)) |
               (ushort)(*(int *)(lVar15 + (ulong)(((uVar10 & uVar5) >> (ulong)(uVar8 & 0x1f)) +
                                                 uVar2) * 4) << (ulong)(uVar8 & 0x1f));
          iVar18 = (int)((double)(int)((dVar35 + dVar35) - dVar32) +
                        (local_10 - (double)iVar27) * (double)iVar28);
          while (dVar33 = (double)iVar26, dVar33 <= local_18) {
            puVar22 = puVar22 + 1;
            iVar26 = iVar26 + 1;
            iVar17 = iVar28;
            if (0 < iVar18) {
              iVar27 = iVar27 + iVar25;
              if (((dVar33 < dVar36) || ((double)iVar27 < dVar37 || dVar38 < dVar33)) ||
                 (puVar22 = (ushort *)
                            ((long)puVar22 + (-(uVar19 >> 0x1f) & 0xfffffffe00000000 | uVar19 << 1))
                 , iVar17 = (int)((dVar35 - dVar32) + (dVar35 - dVar32)), dVar39 < (double)iVar27))
              break;
            }
            iVar18 = iVar18 + iVar17;
            uVar10 = *puVar22;
            *puVar22 = (ushort)(*(int *)(lVar30 + (ulong)(((uVar10 & uVar4) >> (ulong)(uVar7 & 0x1f)
                                                          ) + uVar9) * 4) << (ulong)(uVar7 & 0x1f))
                       | (ushort)(*(int *)(lVar31 + (ulong)(((uVar10 & uVar3) >>
                                                            (ulong)(uVar6 & 0x1f)) + uVar1) * 4) <<
                                 (ulong)(uVar6 & 0x1f)) |
                       (ushort)(*(int *)(lVar15 + (ulong)(((uVar10 & uVar5) >> (ulong)(uVar8 & 0x1f)
                                                          ) + uVar2) * 4) << (ulong)(uVar8 & 0x1f));
          }
        }
        else {
          if (dVar35 < 0.0) {
            dVar32 = -dVar32;
            dVar35 = -dVar35;
            local_20 = local_10;
            local_18 = local_8;
            local_10 = dVar34;
            local_8 = dVar33;
          }
          uVar29 = 1;
          if (dVar32 < 0.0) {
            dVar32 = -dVar32;
            uVar29 = 0xffffffff;
          }
          uVar9 = uVar9 & 0xffff;
          uVar2 = uVar2 & 0xffff;
          iVar26 = (int)local_8;
          lVar20 = *(long *)(this + 0x120);
          uVar1 = uVar1 & 0xffff;
          lVar16 = ((long)iVar26 + ((long)(int)local_10 * uVar19 >> 1)) * 2;
          puVar22 = (ushort *)(lVar20 + lVar16);
          iVar18 = (int)(dVar32 + dVar32);
          uVar10 = *(ushort *)(lVar20 + lVar16);
          iVar25 = (int)(local_10 + 1.0);
          *(ushort *)(lVar20 + lVar16) =
               (ushort)(*(int *)(lVar30 + (ulong)(((uVar10 & uVar4) >> (ulong)(uVar7 & 0x1f)) +
                                                 uVar9) * 4) << (ulong)(uVar7 & 0x1f)) |
               (ushort)(*(int *)(lVar31 + (ulong)(((uVar10 & uVar3) >> (ulong)(uVar6 & 0x1f)) +
                                                 uVar1) * 4) << (ulong)(uVar6 & 0x1f)) |
               (ushort)(*(int *)(lVar15 + (ulong)(((uVar10 & uVar5) >> (ulong)(uVar8 & 0x1f)) +
                                                 uVar2) * 4) << (ulong)(uVar8 & 0x1f));
          iVar27 = (int)((double)(int)((dVar32 + dVar32) - dVar35) +
                        (local_8 - (double)iVar26) * (double)iVar18);
          while (dVar33 = (double)iVar25, dVar33 <= local_20) {
            puVar22 = (ushort *)
                      ((long)puVar22 +
                      (-(uVar19 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar21 & 0xffffffff) << 1));
            iVar25 = iVar25 + 1;
            iVar28 = iVar18;
            if (0 < iVar27) {
              iVar26 = iVar26 + (int)uVar29;
              puVar22 = (ushort *)
                        ((long)puVar22 + (-(uVar29 >> 0x1f) & 0xfffffffe00000000 | uVar29 << 1));
              if (((double)iVar26 < dVar36 || (dVar39 < dVar33 || dVar33 < dVar37)) ||
                 (iVar28 = (int)((dVar32 - dVar35) + (dVar32 - dVar35)), dVar38 < (double)iVar26))
              break;
            }
            iVar27 = iVar27 + iVar28;
            uVar10 = *puVar22;
            *puVar22 = (ushort)(*(int *)(lVar30 + (ulong)(((uVar10 & uVar4) >> (ulong)(uVar7 & 0x1f)
                                                          ) + uVar9) * 4) << (ulong)(uVar7 & 0x1f))
                       | (ushort)(*(int *)(lVar31 + (ulong)(((uVar10 & uVar3) >>
                                                            (ulong)(uVar6 & 0x1f)) + uVar1) * 4) <<
                                 (ulong)(uVar6 & 0x1f)) |
                       (ushort)(*(int *)(lVar15 + (ulong)(((uVar10 & uVar5) >> (ulong)(uVar8 & 0x1f)
                                                          ) + uVar2) * 4) << (ulong)(uVar8 & 0x1f));
          }
        }
      }
      else if (*(int *)(this + 0x134) == 0x20) {
        iVar25 = *(int *)(param_5 + 0xc);
        iVar26 = *(int *)param_5;
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
        iVar27 = *(int *)(param_5 + 0xc);
        iVar18 = *(int *)(param_5 + 4);
        iVar25 = (iVar26 * iVar25) / 0xff >> (8U - *(int *)(lVar16 + 0x10) & 0x1f);
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        iVar28 = *(int *)(param_5 + 0xc);
        iVar17 = *(int *)(param_5 + 8);
        iVar26 = (iVar18 * iVar27) / 0xff >> (8U - *(int *)(lVar16 + 0x14) & 0x1f);
        lVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        dVar34 = local_20;
        dVar35 = local_18;
        uVar21 = *(ulong *)(this + 0x118);
        dVar32 = local_20 - local_10;
        iVar27 = (iVar17 * iVar28) / 0xff >> (8U - *(int *)(lVar16 + 0x18) & 0x1f);
        dVar33 = local_18 - local_8;
        uVar19 = uVar21 >> 2;
        uVar2 = (int)dVar32 >> 0x1f;
        uVar9 = (int)dVar33 >> 0x1f;
        if ((int)(((int)dVar32 ^ uVar2) - uVar2) < (int)(((int)dVar33 ^ uVar9) - uVar9)) {
          if (dVar33 < 0.0) {
            dVar33 = -dVar33;
            dVar32 = -dVar32;
            local_20 = local_10;
            local_18 = local_8;
            local_10 = dVar34;
            local_8 = dVar35;
          }
          if (dVar32 < 0.0) {
            dVar32 = -dVar32;
            uVar21 = (ulong)(uint)-(int)uVar19;
            iVar18 = -1;
          }
          else {
            uVar21 = uVar19 & 0xffffffff;
            iVar18 = 1;
          }
          iVar17 = (int)local_10;
          lVar16 = *(long *)(this + 0x120);
          lVar20 = ((long)(int)local_8 + (long)(iVar17 * (int)uVar19)) * 4;
          puVar24 = (uint *)(lVar16 + lVar20);
          uVar9 = *(uint *)(lVar16 + lVar20);
          iVar28 = (int)(local_8 + 1.0);
          *(int *)(lVar16 + lVar20) =
               *(int *)(lVar30 + (ulong)(((uVar9 & uVar4) >> (ulong)(uVar7 & 0x1f)) + iVar26) * 4)
               << (ulong)(uVar7 & 0x1f) |
               *(int *)(lVar31 + (ulong)(((uVar9 & uVar3) >> (ulong)(uVar6 & 0x1f)) + iVar25) * 4)
               << (ulong)(uVar6 & 0x1f) |
               *(int *)(lVar15 + (ulong)(((uVar9 & uVar5) >> (ulong)(uVar8 & 0x1f)) + iVar27) * 4)
               << (ulong)(uVar8 & 0x1f);
          iVar23 = (int)((dVar32 + dVar32) - dVar33);
          while (dVar34 = (double)iVar28, dVar34 <= local_18) {
            puVar24 = puVar24 + 1;
            iVar28 = iVar28 + 1;
            dVar35 = dVar32 + dVar32;
            if (0 < iVar23) {
              iVar17 = iVar17 + iVar18;
              if (((dVar34 < dVar36) || (dVar39 < (double)iVar17)) ||
                 (puVar24 = (uint *)((long)puVar24 +
                                    (-(uVar21 >> 0x1f) & 0xfffffffc00000000 | uVar21 << 2)),
                 dVar35 = (dVar32 - dVar33) + (dVar32 - dVar33),
                 dVar38 < dVar34 || (double)iVar17 < dVar37)) break;
            }
            iVar23 = iVar23 + (int)dVar35;
            uVar9 = *puVar24;
            *puVar24 = *(int *)(lVar30 + (ulong)(((uVar9 & uVar4) >> (ulong)(uVar7 & 0x1f)) + iVar26
                                                ) * 4) << (ulong)(uVar7 & 0x1f) |
                       *(int *)(lVar31 + (ulong)(((uVar9 & uVar3) >> (ulong)(uVar6 & 0x1f)) + iVar25
                                                ) * 4) << (ulong)(uVar6 & 0x1f) |
                       *(int *)(lVar15 + (ulong)(((uVar9 & uVar5) >> (ulong)(uVar8 & 0x1f)) + iVar27
                                                ) * 4) << (ulong)(uVar8 & 0x1f);
          }
        }
        else {
          if (dVar32 < 0.0) {
            dVar33 = -dVar33;
            dVar32 = -dVar32;
            local_20 = local_10;
            local_18 = local_8;
            local_10 = dVar34;
            local_8 = dVar35;
          }
          uVar29 = 1;
          if (dVar33 < 0.0) {
            dVar33 = -dVar33;
            uVar29 = 0xffffffff;
          }
          iVar28 = (int)local_8;
          lVar16 = *(long *)(this + 0x120);
          lVar20 = ((long)iVar28 + ((long)(int)local_10 * uVar21 >> 2)) * 4;
          puVar24 = (uint *)(lVar16 + lVar20);
          iVar18 = (int)(local_10 + 1.0);
          uVar9 = *(uint *)(lVar16 + lVar20);
          iVar17 = (int)((dVar33 + dVar33) - dVar32);
          *(int *)(lVar16 + lVar20) =
               *(int *)(lVar30 + (ulong)(((uVar9 & uVar4) >> (ulong)(uVar7 & 0x1f)) + iVar26) * 4)
               << (ulong)(uVar7 & 0x1f) |
               *(int *)(lVar31 + (ulong)(((uVar9 & uVar3) >> (ulong)(uVar6 & 0x1f)) + iVar25) * 4)
               << (ulong)(uVar6 & 0x1f) |
               *(int *)(lVar15 + (ulong)(((uVar9 & uVar5) >> (ulong)(uVar8 & 0x1f)) + iVar27) * 4)
               << (ulong)(uVar8 & 0x1f);
          while (dVar34 = (double)iVar18, dVar34 <= local_20) {
            puVar24 = (uint *)((long)puVar24 +
                              (-(uVar21 >> 0x21 & 1) & 0xfffffffc00000000 |
                              (uVar19 & 0xffffffff) << 2));
            iVar18 = iVar18 + 1;
            dVar35 = dVar33 + dVar33;
            if (0 < iVar17) {
              iVar28 = iVar28 + (int)uVar29;
              puVar24 = (uint *)((long)puVar24 +
                                (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2));
              if (((double)iVar28 < dVar36 || (dVar39 < dVar34 || dVar34 < dVar37)) ||
                 (dVar35 = (dVar33 - dVar32) + (dVar33 - dVar32), dVar38 < (double)iVar28)) break;
            }
            iVar17 = iVar17 + (int)dVar35;
            uVar9 = *puVar24;
            *puVar24 = *(int *)(lVar30 + (ulong)(((uVar9 & uVar4) >> (ulong)(uVar7 & 0x1f)) + iVar26
                                                ) * 4) << (ulong)(uVar7 & 0x1f) |
                       *(int *)(lVar31 + (ulong)(((uVar9 & uVar3) >> (ulong)(uVar6 & 0x1f)) + iVar25
                                                ) * 4) << (ulong)(uVar6 & 0x1f) |
                       *(int *)(lVar15 + (ulong)(((uVar9 & uVar5) >> (ulong)(uVar8 & 0x1f)) + iVar27
                                                ) * 4) << (ulong)(uVar8 & 0x1f);
          }
        }
      }
      (**(code **)(*(long *)this + 0x208))(this);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::NormalBltMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color
   const&) */

void __thiscall
Sexy::DeviceImage::NormalBltMirror
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ushort uVar17;
  ushort uVar18;
  char cVar19;
  int iVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ushort *puVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  byte *pbVar31;
  ulong *puVar32;
  ulong uVar34;
  ulong uVar35;
  undefined1 (*pauVar36) [16];
  ushort *puVar37;
  ulong *puVar38;
  uint uVar39;
  byte *pbVar40;
  ulong *puVar41;
  ulong *puVar42;
  uint uVar43;
  uint uVar44;
  byte *pbVar45;
  ulong *puVar46;
  undefined8 *puVar47;
  undefined1 (*pauVar48) [16];
  byte bVar49;
  byte *pbVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  byte *pbVar54;
  byte *pbVar55;
  ushort *puVar56;
  uint uVar57;
  uint uVar58;
  byte *pbVar59;
  undefined1 (*pauVar60) [16];
  code *pcVar61;
  long lVar62;
  int iVar63;
  uint3 uVar64;
  short sVar65;
  int iVar66;
  undefined1 auVar71 [12];
  int iVar87;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  int iVar68;
  int iVar69;
  undefined1 auVar73 [12];
  int iVar88;
  int iVar89;
  int iVar90;
  undefined1 auVar74 [12];
  int iVar91;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  int iVar92;
  ulong uVar93;
  ulong local_38;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  ulong *puVar33;
  undefined4 uVar67;
  undefined6 uVar70;
  undefined1 auVar72 [12];
  undefined1 auVar79 [16];
  undefined1 auVar75 [14];
  undefined1 auVar83 [16];
  undefined1 auVar76 [14];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  
  local_8 = ___stack_chk_guard;
  param_1[0x28] = (Image)0x1;
  lVar62 = (long)param_3;
  Insets::Insets((Insets *)&local_28,(Insets *)param_4);
  uVar2 = local_20;
  plVar21 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  (**(code **)(*(long *)param_1 + 0x50))(param_1);
  if (((plVar21 == (long *)0x0) ||
      ((**(code **)(*plVar21 + 0xa0))(plVar21), this[0xf9] != (DeviceImage)0x0)) ||
     (cVar19 = (**(code **)(*(long *)this + 0x200))(this), cVar19 == '\0')) goto LAB_05136544;
  iVar63 = (uVar2 - 1) + param_2;
  pcVar61 = *(code **)(*plVar21 + 0x58);
  uVar22 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
  lVar23 = (*pcVar61)(plVar21,uVar22);
  lVar24 = (**(code **)(*plVar21 + 0x60))(plVar21);
  if (plVar21[0x10] == 0) {
    lVar1 = (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38));
    puVar32 = (ulong *)(lVar23 + lVar1 * 4);
    if (*(int *)(this + 0x134) == 0x10) {
      pbVar50 = (byte *)(lVar24 + lVar1);
      uVar2 = *(uint *)(this + 0x138);
      uVar30 = *(uint *)(this + 0x13c);
      uVar52 = *(uint *)(this + 0x140);
      pauVar36 = (undefined1 (*) [16])
                 (*(long *)(this + 0x120) +
                 (((ulong)(lVar62 * *(long *)(this + 0x118)) >> 1) + (long)iVar63) * 2);
      Color::Color(aCStack_18,1);
      cVar19 = Sexy::operator==(param_5,aCStack_18);
      uVar17 = (ushort)uVar2;
      uVar18 = (ushort)uVar52;
      uVar6 = (ushort)uVar30;
      if (cVar19 == '\0') {
        iVar66 = *(int *)(param_5 + 0xc);
        iVar63 = (iVar66 * *(int *)(param_5 + 4)) / 0xff;
        iVar3 = (iVar66 * *(int *)(param_5 + 8)) / 0xff;
        iVar20 = (iVar66 * *(int *)param_5) / 0xff;
        if ((iVar63 == iVar3) && (iVar20 == iVar63)) {
          iVar92 = iVar20 >> 3;
          if (uVar30 == 0x7e0) {
            if (0 < local_1c) {
              iVar3 = *(int *)(param_1 + 0x38);
              uVar34 = *(ulong *)(this + 0x118);
              iVar63 = 0;
              do {
                if (0 < (int)local_20) {
                  puVar42 = puVar32;
                  pbVar55 = pbVar50;
                  pauVar60 = pauVar36;
                  uVar2 = local_20;
                  do {
                    bVar49 = *pbVar55;
                    uVar52 = (uint)bVar49;
                    uVar30 = (uint)*puVar42 >> 0x18;
                    if ((int)uVar2 < (int)(uint)bVar49) {
                      uVar51 = uVar2 & 0xff;
                      uVar52 = uVar2;
                      if ((uVar30 != 0xff) || (iVar66 != 0xff)) {
LAB_051398a4:
                        if (uVar30 == 0) {
                          uVar27 = (ulong)(byte)uVar51;
                          pauVar60 = (undefined1 (*) [16])((long)pauVar60 + (ulong)uVar51 * -2);
                          puVar42 = (ulong *)((long)puVar42 + (ulong)uVar51 * 4);
                        }
                        else {
                          if (uVar52 != 0) {
                            lVar62 = (ulong)(uVar52 - 1) + 1;
                            puVar41 = (ulong *)((long)puVar42 + lVar62 * 4);
                            puVar38 = puVar42;
                            pauVar29 = pauVar60;
                            do {
                              puVar42 = (ulong *)((long)puVar38 + 4);
                              uVar7 = (undefined2)(uint)*puVar38;
                              uVar27 = ((ulong)CONCAT22(uVar7,uVar7) & 0x7e0f81f) * (long)iVar92 +
                                       (ulong)(CONCAT22(*(undefined2 *)*pauVar29,
                                                        *(undefined2 *)*pauVar29) & 0x7e0f81f) *
                                       (long)(0x100 - (int)(((ulong)((uint)*puVar38 >> 0x18) *
                                                            (long)iVar66) / 0xff) >> 3) >> 5 &
                                       0x7e0f81f;
                              *(ushort *)*pauVar29 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                              puVar38 = puVar42;
                              pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                            } while (puVar42 != puVar41);
                            pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar62 * -2);
                          }
                          uVar27 = (ulong)(byte)uVar51;
                        }
                      }
                      else {
LAB_051397ec:
                        lVar62 = (ulong)(uVar52 - 1) + 1;
                        puVar41 = (ulong *)((long)puVar42 + lVar62 * 4);
                        puVar38 = puVar42;
                        pauVar29 = pauVar60;
                        do {
                          puVar42 = (ulong *)((long)puVar38 + 4);
                          uVar27 = ((ulong)CONCAT42((uint)*puVar38,(short)(uint)*puVar38) &
                                   0x7e0f81f) * (long)iVar92 >> 5 & 0x7e0f81f;
                          *(ushort *)*pauVar29 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                          puVar38 = puVar42;
                          pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                        } while (puVar42 != puVar41);
                        pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar62 * -2);
                        uVar27 = (ulong)(byte)uVar51;
                      }
                    }
                    else {
                      uVar51 = uVar52;
                      if ((uVar30 != 0xff) || (iVar66 != 0xff)) goto LAB_051398a4;
                      if (bVar49 != 0) goto LAB_051397ec;
                      uVar27 = 0;
                    }
                    uVar2 = uVar2 - uVar52;
                    pbVar55 = pbVar55 + uVar27;
                  } while (0 < (int)uVar2);
                }
                iVar63 = iVar63 + 1;
                pauVar36 = (undefined1 (*) [16])(*pauVar36 + (uVar34 & 0xfffffffffffffffe));
                puVar32 = (ulong *)((long)puVar32 + (long)iVar3 * 4);
                pbVar50 = pbVar50 + iVar3;
              } while (iVar63 != local_1c);
            }
          }
          else {
            if (uVar30 != 0x3e0) goto LAB_05138044;
            for (iVar63 = 0; iVar63 < local_1c; iVar63 = iVar63 + 1) {
              if (0 < (int)local_20) {
                puVar42 = puVar32;
                pbVar55 = pbVar50;
                pauVar60 = pauVar36;
                uVar2 = local_20;
                do {
                  bVar49 = *pbVar55;
                  uVar52 = (uint)bVar49;
                  uVar30 = (uint)*puVar42 >> 0x18;
                  if ((int)uVar2 < (int)(uint)bVar49) {
                    uVar51 = uVar2 & 0xff;
                    uVar52 = uVar2;
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) {
LAB_051396b8:
                      if (uVar30 == 0) {
                        uVar34 = (ulong)(byte)uVar51;
                        pauVar60 = (undefined1 (*) [16])((long)pauVar60 + (ulong)uVar51 * -2);
                        puVar42 = (ulong *)((long)puVar42 + (ulong)uVar51 * 4);
                      }
                      else {
                        if (uVar52 != 0) {
                          lVar62 = (ulong)(uVar52 - 1) + 1;
                          puVar41 = (ulong *)((long)puVar42 + lVar62 * 4);
                          puVar38 = puVar42;
                          pauVar29 = pauVar60;
                          do {
                            puVar42 = (ulong *)((long)puVar38 + 4);
                            uVar7 = (undefined2)(uint)*puVar38;
                            uVar34 = ((ulong)CONCAT22(uVar7,uVar7) & 0x3e07c1f) * (long)iVar92 +
                                     (ulong)(CONCAT22(*(undefined2 *)*pauVar29,
                                                      *(undefined2 *)*pauVar29) & 0x3e07c1f) *
                                     (long)(0x100 - (int)(((ulong)((uint)*puVar38 >> 0x18) *
                                                          (long)iVar66) / 0xff) >> 3) >> 5 &
                                     0x3e07c1f;
                            *(ushort *)*pauVar29 = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                            puVar38 = puVar42;
                            pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                          } while (puVar42 != puVar41);
                          pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar62 * -2);
                        }
                        uVar34 = (ulong)(byte)uVar51;
                      }
                    }
                    else {
LAB_051395fc:
                      lVar62 = (ulong)(uVar52 - 1) + 1;
                      puVar41 = (ulong *)((long)puVar42 + lVar62 * 4);
                      puVar38 = puVar42;
                      pauVar29 = pauVar60;
                      do {
                        puVar42 = (ulong *)((long)puVar38 + 4);
                        uVar34 = ((ulong)CONCAT42((uint)*puVar38,(short)(uint)*puVar38) & 0x3e07c1f)
                                 * (long)iVar92 >> 5 & 0x3e07c1f;
                        *(ushort *)*pauVar29 = (ushort)(uVar34 >> 0x10) | (ushort)uVar34;
                        puVar38 = puVar42;
                        pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                      } while (puVar42 != puVar41);
                      pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar62 * -2);
                      uVar34 = (ulong)(byte)uVar51;
                    }
                  }
                  else {
                    uVar51 = uVar52;
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) goto LAB_051396b8;
                    if (bVar49 != 0) goto LAB_051395fc;
                    uVar34 = 0;
                  }
                  uVar2 = uVar2 - uVar52;
                  pbVar55 = pbVar55 + uVar34;
                } while (0 < (int)uVar2);
              }
              pbVar50 = pbVar50 + *(int *)(param_1 + 0x38);
              puVar32 = (ulong *)((long)puVar32 + (long)*(int *)(param_1 + 0x38) * 4);
              pauVar36 = (undefined1 (*) [16])
                         (*pauVar36 + (*(ulong *)(this + 0x118) & 0xfffffffffffffffe));
            }
          }
        }
        else {
LAB_05138044:
          if (0 < local_1c) {
            iVar4 = *(int *)(param_1 + 0x38);
            iVar92 = 0;
            uVar34 = *(ulong *)(this + 0x118);
            lVar62 = NEON_shl((long)iVar4,2);
            do {
              if (0 < (int)local_20) {
                puVar42 = puVar32;
                pbVar55 = pbVar50;
                pauVar60 = pauVar36;
                uVar51 = local_20;
                do {
                  bVar49 = *pbVar55;
                  uVar43 = (uint)bVar49;
                  uVar57 = (uint)bVar49;
                  uVar44 = (uint)*puVar42 >> 0x18;
                  if ((int)uVar51 < (int)(uint)bVar49) {
                    uVar57 = uVar51 & 0xff;
                    uVar39 = uVar51;
                    uVar58 = uVar57;
                    if ((uVar44 != 0xff) || (uVar43 = uVar51, iVar66 != 0xff)) {
LAB_051381e8:
                      uVar57 = uVar39;
                      if (uVar44 == 0) {
                        uVar27 = (ulong)(byte)uVar58;
                        pauVar60 = (undefined1 (*) [16])((long)pauVar60 + (ulong)uVar58 * -2);
                        puVar42 = (ulong *)((long)puVar42 + (ulong)uVar58 * 4);
                      }
                      else {
                        if (uVar57 != 0) {
                          lVar23 = (ulong)(uVar57 - 1) + 1;
                          puVar41 = (ulong *)((long)puVar42 + lVar23 * 4);
                          puVar38 = puVar42;
                          pauVar29 = pauVar60;
                          do {
                            puVar42 = (ulong *)((long)puVar38 + 4);
                            uVar44 = (uint)*puVar38;
                            uVar43 = (uint)*(ushort *)*pauVar29;
                            iVar5 = 0x100 - (int)(((ulong)(uVar44 >> 0x18) * (long)iVar66) / 0xff);
                            *(ushort *)*pauVar29 =
                                 (uVar6 & (ushort)((uVar44 & uVar30) * iVar63 +
                                                   (uVar43 & uVar30) * iVar5 >> 8)) +
                                 (uVar17 & (ushort)((uVar44 & uVar2) * iVar20 +
                                                    (uVar43 & uVar2) * iVar5 >> 8)) +
                                 (uVar18 & (ushort)((uVar44 & uVar52) * iVar3 +
                                                    (uVar43 & uVar52) * iVar5 >> 8));
                            puVar38 = puVar42;
                            pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                          } while (puVar42 != puVar41);
                          pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar23 * -2);
                        }
                        uVar27 = (ulong)(byte)uVar58;
                      }
                    }
                    else {
LAB_05138108:
                      lVar23 = (ulong)(uVar43 - 1) + 1;
                      puVar41 = (ulong *)((long)puVar42 + lVar23 * 4);
                      puVar38 = puVar42;
                      pauVar29 = pauVar60;
                      do {
                        puVar42 = (ulong *)((long)puVar38 + 4);
                        uVar44 = (uint)*puVar38;
                        *(ushort *)*pauVar29 =
                             (uVar6 & (ushort)((uVar44 & uVar30) * iVar63 >> 8)) +
                             (uVar17 & (ushort)((uVar44 & uVar2) * iVar20 >> 8)) +
                             (uVar18 & (ushort)((uVar44 & uVar52) * iVar3 >> 8));
                        puVar38 = puVar42;
                        pauVar29 = (undefined1 (*) [16])(pauVar29[-1] + 0xe);
                      } while (puVar42 != puVar41);
                      pauVar60 = (undefined1 (*) [16])((long)pauVar60 + lVar23 * -2);
                      uVar27 = (ulong)(byte)uVar57;
                      uVar57 = uVar43;
                    }
                  }
                  else {
                    uVar39 = uVar57;
                    uVar58 = uVar57;
                    if ((uVar44 != 0xff) || (uVar58 = (uint)bVar49, iVar66 != 0xff))
                    goto LAB_051381e8;
                    if (bVar49 != 0) goto LAB_05138108;
                    uVar27 = 0;
                  }
                  uVar51 = uVar51 - uVar57;
                  pbVar55 = pbVar55 + uVar27;
                } while (0 < (int)uVar51);
              }
              iVar92 = iVar92 + 1;
              pauVar36 = (undefined1 (*) [16])(*pauVar36 + (uVar34 & 0xfffffffffffffffe));
              puVar32 = (ulong *)((long)puVar32 + lVar62);
              pbVar50 = pbVar50 + iVar4;
            } while (iVar92 != local_1c);
          }
        }
      }
      else if (uVar30 == 0x7e0) {
        if (0 < local_1c) {
          iVar3 = *(int *)(param_1 + 0x38);
          uVar34 = *(ulong *)(this + 0x118);
          iVar63 = 0;
          uVar2 = local_20;
          pbVar55 = pbVar50;
          pauVar60 = pauVar36;
          puVar42 = puVar32;
          do {
            for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
              bVar49 = *pbVar50;
              uVar52 = (uint)bVar49;
              uVar27 = *puVar32;
              uVar30 = (uint)uVar27 >> 0x18;
              if ((int)(uint)bVar49 <= (int)uVar2) {
                iVar20 = 0x100 - uVar30;
                uVar30 = (uint)bVar49;
                if (iVar20 != 1) goto LAB_051389b0;
                if (bVar49 != 0) goto LAB_05138e10;
                uVar27 = 0;
                goto LAB_05138dbc;
              }
              iVar20 = 0x100 - uVar30;
              bVar49 = (byte)uVar2;
              uVar52 = uVar2;
              uVar30 = uVar2;
              if (iVar20 == 1) {
LAB_05138e10:
                uVar30 = (uVar52 - 8 >> 3) + 1;
                uVar51 = uVar30 * 8;
                if (uVar52 - 1 < 7) {
                  uVar51 = 0;
                  pauVar29 = pauVar36;
                  puVar41 = puVar32;
LAB_05138e88:
                  *(short *)*pauVar29 = (short)(uint)*puVar41;
                  if ((((((int)(uVar51 + 1) < (int)uVar52) &&
                        (*(short *)(pauVar29[-1] + 0xe) = (short)*(uint *)((long)puVar41 + 4),
                        (int)(uVar51 + 2) < (int)uVar52)) &&
                       (*(short *)(pauVar29[-1] + 0xc) = (short)(uint)puVar41[1],
                       (int)(uVar51 + 3) < (int)uVar52)) &&
                      ((*(short *)(pauVar29[-1] + 10) = (short)*(uint *)((long)puVar41 + 0xc),
                       (int)(uVar51 + 4) < (int)uVar52 &&
                       (*(short *)(pauVar29[-1] + 8) = (short)(uint)puVar41[2],
                       (int)(uVar51 + 5) < (int)uVar52)))) &&
                     (*(short *)(pauVar29[-1] + 6) = (short)*(uint *)((long)puVar41 + 0x14),
                     (int)(uVar51 + 6) < (int)uVar52)) {
                    *(short *)(pauVar29[-1] + 4) = (short)(uint)puVar41[3];
                  }
                }
                else {
                  puVar47 = (undefined8 *)(pauVar36[-1] + 2);
                  uVar44 = 0;
                  puVar41 = puVar32;
                  do {
                    uVar44 = uVar44 + 1;
                    auVar82._2_2_ = (short)(*puVar41 >> 0x20);
                    auVar82._0_2_ = (short)*puVar41;
                    auVar82._4_2_ = (short)puVar41[1];
                    auVar82._6_2_ = (short)(puVar41[1] >> 0x20);
                    auVar82._8_2_ = (short)puVar41[2];
                    auVar82._10_2_ = (short)(puVar41[2] >> 0x20);
                    auVar82._12_2_ = (short)puVar41[3];
                    auVar82._14_2_ = (short)(puVar41[3] >> 0x20);
                    auVar78[8] = 6;
                    auVar78._0_8_ = 0x9080b0a0d0c0f0e;
                    auVar78[9] = 7;
                    auVar78[10] = 4;
                    auVar78[0xb] = 5;
                    auVar78[0xc] = 2;
                    auVar78[0xd] = 3;
                    auVar78[0xe] = 0;
                    auVar78[0xf] = 1;
                    auVar78 = a64_TBL(ZEXT816(0),auVar82,auVar78);
                    puVar47[1] = auVar78._8_8_;
                    *puVar47 = auVar78._0_8_;
                    puVar47 = puVar47 + -2;
                    puVar41 = puVar41 + 4;
                  } while (uVar44 < uVar30);
                  pauVar29 = (undefined1 (*) [16])((long)pauVar36 + (ulong)uVar51 * -2);
                  puVar41 = (ulong *)((long)puVar32 + (ulong)uVar51 * 4);
                  if (uVar51 != uVar52) goto LAB_05138e88;
                }
                uVar27 = (ulong)bVar49;
                lVar62 = (ulong)(uVar52 - 1) + 1;
                pauVar36 = (undefined1 (*) [16])((long)pauVar36 + lVar62 * -2);
                puVar32 = (ulong *)((long)puVar32 + lVar62 * 4);
              }
              else {
LAB_051389b0:
                uVar52 = uVar30;
                if (iVar20 == 0x100) {
                  uVar27 = (ulong)bVar49;
                  pauVar36 = (undefined1 (*) [16])((long)pauVar36 + (ulong)bVar49 * -2);
                  puVar32 = (ulong *)((long)puVar32 + (ulong)bVar49 * 4);
                }
                else {
                  pauVar29 = (undefined1 (*) [16])(pauVar36[-1] + 0xe);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  uVar30 = (int)((CONCAT22(*(undefined2 *)*pauVar36,*(undefined2 *)*pauVar36) &
                                 0x7e0f81f) * (iVar20 >> 3)) >> 5 & 0x7e0f81f;
                  *(ushort *)*pauVar36 =
                       ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)uVar27;
                  if ((int)uVar52 < 2) {
                    uVar27 = (ulong)bVar49;
                    pauVar36 = pauVar29;
                  }
                  else {
                    uVar30 = (uVar52 - 9 >> 3) + 1;
                    uVar51 = uVar30 * 8;
                    if (uVar52 - 2 < 7) {
                      iVar20 = 1;
                      pauVar36 = pauVar29;
                      puVar41 = puVar32;
LAB_05138b68:
                      uVar30 = (int)((CONCAT22(*(undefined2 *)*pauVar36,*(undefined2 *)*pauVar36) &
                                     0x7e0f81f) *
                                    (int)(0x100 - (ulong)((uint)*puVar41 >> 0x18) >> 3)) >> 5 &
                               0x7e0f81f;
                      *(ushort *)*pauVar36 =
                           ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)*puVar41;
                      if (((iVar20 + 1 < (int)uVar52) &&
                          (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 0xe),
                                                    *(undefined2 *)(pauVar36[-1] + 0xe)) & 0x7e0f81f
                                          ) * (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 4) >>
                                                                   0x18) >> 3)) >> 5 & 0x7e0f81f,
                          *(ushort *)(pauVar36[-1] + 0xe) =
                               ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                               (short)*(uint *)((long)puVar41 + 4), iVar20 + 2 < (int)uVar52)) &&
                         ((uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 0xc),
                                                    *(undefined2 *)(pauVar36[-1] + 0xc)) & 0x7e0f81f
                                          ) * (int)(0x100 - (ulong)((uint)puVar41[1] >> 0x18) >> 3))
                                    >> 5 & 0x7e0f81f,
                          *(ushort *)(pauVar36[-1] + 0xc) =
                               ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)puVar41[1]
                          , iVar20 + 3 < (int)uVar52 &&
                          (((uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 10),
                                                      *(undefined2 *)(pauVar36[-1] + 10)) &
                                            0x7e0f81f) *
                                           (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 0xc) >>
                                                                0x18) >> 3)) >> 5 & 0x7e0f81f,
                            *(ushort *)(pauVar36[-1] + 10) =
                                 ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                 (short)*(uint *)((long)puVar41 + 0xc), iVar20 + 4 < (int)uVar52 &&
                            (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 8),
                                                      *(undefined2 *)(pauVar36[-1] + 8)) & 0x7e0f81f
                                            ) * (int)(0x100 - (ulong)((uint)puVar41[2] >> 0x18) >> 3
                                                     )) >> 5 & 0x7e0f81f,
                            *(ushort *)(pauVar36[-1] + 8) =
                                 ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                 (short)(uint)puVar41[2], iVar20 + 5 < (int)uVar52)) &&
                           (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 6),
                                                     *(undefined2 *)(pauVar36[-1] + 6)) & 0x7e0f81f)
                                          * (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 0x14) >>
                                                                 0x18) >> 3)) >> 5 & 0x7e0f81f,
                           *(ushort *)(pauVar36[-1] + 6) =
                                ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                (short)*(uint *)((long)puVar41 + 0x14), iVar20 + 6 < (int)uVar52))))
                         )) {
                        uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 4),
                                                 *(undefined2 *)(pauVar36[-1] + 4)) & 0x7e0f81f) *
                                      (int)(0x100 - (ulong)((uint)puVar41[3] >> 0x18) >> 3)) >> 5 &
                                 0x7e0f81f;
                        *(ushort *)(pauVar36[-1] + 4) =
                             ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)puVar41[3];
                      }
                    }
                    else {
                      uVar44 = 0;
                      puVar41 = puVar32;
                      do {
                        pauVar48 = pauVar36 + -1;
                        uVar44 = uVar44 + 1;
                        uVar93 = puVar41[1];
                        uVar35 = *puVar41;
                        auVar15._8_8_ = 0x100030205040706;
                        auVar15._0_8_ = 0x9080b0a0d0c0f0e;
                        auVar78 = a64_TBL(ZEXT816(0),*pauVar48,auVar15);
                        uVar53 = puVar41[3];
                        uVar27 = puVar41[2];
                        uVar43 = auVar78._0_4_ & 0xffff;
                        uVar57 = auVar78._8_4_ & 0xffff;
                        uVar57 = CONCAT13((char)(uVar57 >> 8),CONCAT12((char)uVar57,auVar78._8_2_));
                        auVar71._0_8_ =
                             CONCAT17(auVar78[0xb],
                                      CONCAT16(auVar78[10],
                                               CONCAT15(auVar78[0xb],CONCAT14(auVar78[10],uVar57))))
                             & 0x7e0f81f07e0f81f;
                        auVar71[8] = auVar78[0xc] & 0x1f;
                        auVar71[9] = auVar78[0xd] & 0xf8;
                        auVar71[10] = auVar78[0xc] & 0xe0;
                        auVar71[0xb] = auVar78[0xd] & 7;
                        auVar79[0xc] = auVar78[0xe] & 0x1f;
                        auVar79._0_12_ = auVar71;
                        auVar79[0xd] = auVar78[0xf] & 0xf8;
                        auVar79[0xe] = auVar78[0xe] & 0xe0;
                        auVar79[0xf] = auVar78[0xf] & 7;
                        iVar20 = (CONCAT13((char)(uVar43 >> 8),CONCAT12((char)uVar43,auVar78._0_2_))
                                 & 0x7e0f81f) * (int)(0x100 - ((uVar35 & 0xffffffff) >> 0x18) >> 3);
                        iVar92 = (CONCAT13(auVar78[3],CONCAT12(auVar78[2],auVar78._2_2_)) &
                                 0x7e0f81f) * (int)(0x100 - (uVar35 >> 0x38) >> 3);
                        iVar5 = (CONCAT13(auVar78[5],CONCAT12(auVar78[4],auVar78._4_2_)) & 0x7e0f81f
                                ) * (int)(0x100 - ((uVar93 & 0xffffffff) >> 0x18) >> 3);
                        iVar11 = (CONCAT13(auVar78[7],CONCAT12(auVar78[6],auVar78._6_2_)) &
                                 0x7e0f81f) * (int)(0x100 - (uVar93 >> 0x38) >> 3);
                        iVar68 = (uVar57 & 0x7e0f81f) *
                                 (int)(0x100 - ((uVar27 & 0xffffffff) >> 0x18) >> 3);
                        iVar87 = (int)(auVar71._0_8_ >> 0x20) * (int)(0x100 - (uVar27 >> 0x38) >> 3)
                        ;
                        iVar89 = auVar71._8_4_ * (int)(0x100 - ((uVar53 & 0xffffffff) >> 0x18) >> 3)
                        ;
                        iVar91 = auVar79._12_4_ * (int)(0x100 - (uVar53 >> 0x38) >> 3);
                        iVar66 = iVar20 >> 5;
                        iVar4 = iVar92 >> 5;
                        iVar10 = iVar5 >> 5;
                        iVar12 = iVar11 >> 5;
                        iVar69 = iVar68 >> 5;
                        iVar88 = iVar87 >> 5;
                        iVar90 = iVar89 >> 5;
                        uVar6 = CONCAT11((char)(iVar20 >> 0x1d),(char)((uint)iVar66 >> 0x10)) &
                                0x7e0;
                        uVar18 = CONCAT11((char)(iVar92 >> 0x1d),(char)((uint)iVar4 >> 0x10)) &
                                 0x7e0;
                        uVar17 = CONCAT11((char)(iVar11 >> 0x1d),(char)((uint)iVar12 >> 0x10)) &
                                 0x7e0;
                        uVar64 = CONCAT11((char)(iVar5 >> 0x1d),(char)((uint)iVar10 >> 0x10)) &
                                 0x7e0;
                        sVar65 = CONCAT11((byte)(uVar6 >> 8) | (byte)((uint)iVar66 >> 8) & 0xf8,
                                          (byte)uVar6 | (byte)iVar66 & 0x1f);
                        uVar67 = CONCAT13((byte)(uVar18 >> 8) | (byte)((uint)iVar4 >> 8) & 0xf8,
                                          CONCAT12((byte)uVar18 | (byte)iVar4 & 0x1f,sVar65));
                        uVar70 = CONCAT15((byte)(uVar64 >> 8) | (byte)((uint)iVar10 >> 8) & 0xf8,
                                          CONCAT14((byte)uVar64 | (byte)iVar10 & 0x1f,uVar67));
                        uVar22 = CONCAT17((byte)(uVar17 >> 8) | (byte)((uint)iVar12 >> 8) & 0xf8,
                                          CONCAT16((byte)uVar17 | (byte)iVar12 & 0x1f,uVar70));
                        auVar72._0_10_ =
                             CONCAT19((byte)(iVar68 >> 0x1d) & 7 | (byte)((uint)iVar69 >> 8) & 0xf8,
                                      CONCAT18((byte)((uint)iVar69 >> 0x10) & 0xe0 |
                                               (byte)iVar69 & 0x1f,uVar22));
                        auVar72[10] = (byte)((uint)iVar88 >> 0x10) & 0xe0 | (byte)iVar88 & 0x1f;
                        auVar72[0xb] = (byte)(iVar87 >> 0x1d) & 7 | (byte)((uint)iVar88 >> 8) & 0xf8
                        ;
                        auVar75[0xc] = (byte)((uint)iVar90 >> 0x10) & 0xe0 | (byte)iVar90 & 0x1f;
                        auVar75._0_12_ = auVar72;
                        auVar75[0xd] = (byte)(iVar89 >> 0x1d) & 7 | (byte)((uint)iVar90 >> 8) & 0xf8
                        ;
                        auVar80[0xe] = (byte)((uint3)(int3)(iVar91 >> 0xd) >> 8) & 0xe0 |
                                       (byte)(iVar91 >> 5) & 0x1f;
                        auVar80._0_14_ = auVar75;
                        auVar80[0xf] = (byte)(iVar91 >> 0x1d) & 7 |
                                       (byte)((uint)(iVar91 >> 5) >> 8) & 0xf8;
                        auVar81._0_2_ = sVar65 + (short)uVar35;
                        auVar81._2_2_ = (short)((uint)uVar67 >> 0x10) + (short)(uVar35 >> 0x20);
                        auVar81._4_2_ = (short)((uint6)uVar70 >> 0x20) + (short)uVar93;
                        auVar81._6_2_ = (short)((ulong)uVar22 >> 0x30) + (short)(uVar93 >> 0x20);
                        auVar81._8_2_ = (short)((unkuint10)auVar72._0_10_ >> 0x40) + (short)uVar27;
                        auVar81._10_2_ = auVar72._10_2_ + (short)(uVar27 >> 0x20);
                        auVar81._12_2_ = auVar75._12_2_ + (short)uVar53;
                        auVar81._14_2_ = auVar80._14_2_ + (short)(uVar53 >> 0x20);
                        auVar16._8_8_ = 0x100030205040706;
                        auVar16._0_8_ = 0x9080b0a0d0c0f0e;
                        auVar78 = a64_TBL(ZEXT816(0),auVar81,auVar16);
                        *(long *)(pauVar36[-1] + 8) = auVar78._8_8_;
                        *(long *)*pauVar48 = auVar78._0_8_;
                        puVar41 = puVar41 + 4;
                        pauVar36 = pauVar48;
                      } while (uVar44 < uVar30);
                      iVar20 = uVar51 + 1;
                      pauVar36 = (undefined1 (*) [16])((long)pauVar29 + (ulong)uVar51 * -2);
                      puVar41 = (ulong *)((long)puVar32 + (ulong)uVar51 * 4);
                      if (uVar51 != uVar52 - 1) goto LAB_05138b68;
                    }
                    uVar27 = (ulong)bVar49;
                    lVar62 = (ulong)(uVar52 - 2) + 1;
                    puVar32 = (ulong *)((long)puVar32 + lVar62 * 4);
                    pauVar36 = (undefined1 (*) [16])((long)pauVar29 + lVar62 * -2);
                  }
                }
              }
LAB_05138dbc:
              pbVar50 = pbVar50 + uVar27;
            }
            iVar63 = iVar63 + 1;
            pauVar36 = (undefined1 (*) [16])(*pauVar60 + (uVar34 & 0xfffffffffffffffe));
            puVar32 = (ulong *)((long)puVar42 + (long)iVar3 * 4);
            pbVar50 = pbVar55 + iVar3;
            uVar2 = local_20;
            pbVar55 = pbVar50;
            pauVar60 = pauVar36;
            puVar42 = puVar32;
          } while (iVar63 != local_1c);
        }
      }
      else if (uVar30 == 0x3e0) {
        if (0 < local_1c) {
          iVar3 = *(int *)(param_1 + 0x38);
          uVar34 = *(ulong *)(this + 0x118);
          iVar63 = 0;
          uVar2 = local_20;
          pbVar55 = pbVar50;
          pauVar60 = pauVar36;
          puVar42 = puVar32;
          do {
            for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
              bVar49 = *pbVar50;
              uVar52 = (uint)bVar49;
              uVar27 = *puVar32;
              uVar30 = (uint)uVar27 >> 0x18;
              if ((int)(uint)bVar49 <= (int)uVar2) {
                iVar20 = 0x100 - uVar30;
                uVar30 = (uint)bVar49;
                if (iVar20 != 1) goto LAB_05138fd4;
                uVar27 = 0;
                if (bVar49 != 0) goto LAB_05139434;
                goto LAB_051393dc;
              }
              iVar20 = 0x100 - uVar30;
              bVar49 = (byte)uVar2;
              uVar52 = uVar2;
              uVar30 = uVar2;
              if (iVar20 == 1) {
LAB_05139434:
                uVar30 = (uVar52 - 8 >> 3) + 1;
                uVar51 = uVar30 * 8;
                if (uVar52 - 1 < 7) {
                  uVar51 = 0;
                  pauVar29 = pauVar36;
                  puVar41 = puVar32;
LAB_051394a8:
                  *(short *)*pauVar29 = (short)(uint)*puVar41;
                  if ((((int)(uVar51 + 1) < (int)uVar52) &&
                      (*(short *)(pauVar29[-1] + 0xe) = (short)*(uint *)((long)puVar41 + 4),
                      (int)(uVar51 + 2) < (int)uVar52)) &&
                     (((*(short *)(pauVar29[-1] + 0xc) = (short)(uint)puVar41[1],
                       (int)(uVar51 + 3) < (int)uVar52 &&
                       ((*(short *)(pauVar29[-1] + 10) = (short)*(uint *)((long)puVar41 + 0xc),
                        (int)(uVar51 + 4) < (int)uVar52 &&
                        (*(short *)(pauVar29[-1] + 8) = (short)(uint)puVar41[2],
                        (int)(uVar51 + 5) < (int)uVar52)))) &&
                      (*(short *)(pauVar29[-1] + 6) = (short)*(uint *)((long)puVar41 + 0x14),
                      (int)(uVar51 + 6) < (int)uVar52)))) {
                    *(short *)(pauVar29[-1] + 4) = (short)(uint)puVar41[3];
                  }
                }
                else {
                  puVar47 = (undefined8 *)(pauVar36[-1] + 2);
                  uVar44 = 0;
                  puVar41 = puVar32;
                  do {
                    uVar44 = uVar44 + 1;
                    auVar86._2_2_ = (short)(*puVar41 >> 0x20);
                    auVar86._0_2_ = (short)*puVar41;
                    auVar86._4_2_ = (short)puVar41[1];
                    auVar86._6_2_ = (short)(puVar41[1] >> 0x20);
                    auVar86._8_2_ = (short)puVar41[2];
                    auVar86._10_2_ = (short)(puVar41[2] >> 0x20);
                    auVar86._12_2_ = (short)puVar41[3];
                    auVar86._14_2_ = (short)(puVar41[3] >> 0x20);
                    auVar9[8] = 6;
                    auVar9._0_8_ = 0x9080b0a0d0c0f0e;
                    auVar9[9] = 7;
                    auVar9[10] = 4;
                    auVar9[0xb] = 5;
                    auVar9[0xc] = 2;
                    auVar9[0xd] = 3;
                    auVar9[0xe] = 0;
                    auVar9[0xf] = 1;
                    auVar78 = a64_TBL(ZEXT816(0),auVar86,auVar9);
                    puVar47[1] = auVar78._8_8_;
                    *puVar47 = auVar78._0_8_;
                    puVar47 = puVar47 + -2;
                    puVar41 = puVar41 + 4;
                  } while (uVar44 < uVar30);
                  pauVar29 = (undefined1 (*) [16])((long)pauVar36 + (ulong)uVar51 * -2);
                  puVar41 = (ulong *)((long)puVar32 + (ulong)uVar51 * 4);
                  if (uVar51 != uVar52) goto LAB_051394a8;
                }
                uVar27 = (ulong)bVar49;
                lVar62 = (ulong)(uVar52 - 1) + 1;
                pauVar36 = (undefined1 (*) [16])((long)pauVar36 + lVar62 * -2);
                puVar32 = (ulong *)((long)puVar32 + lVar62 * 4);
              }
              else {
LAB_05138fd4:
                uVar52 = uVar30;
                if (iVar20 == 0x100) {
                  uVar27 = (ulong)bVar49;
                  pauVar36 = (undefined1 (*) [16])((long)pauVar36 + (ulong)bVar49 * -2);
                  puVar32 = (ulong *)((long)puVar32 + (ulong)bVar49 * 4);
                }
                else {
                  pauVar29 = (undefined1 (*) [16])(pauVar36[-1] + 0xe);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                  uVar30 = (int)((CONCAT22(*(undefined2 *)*pauVar36,*(undefined2 *)*pauVar36) &
                                 0x3e07c1f) * (iVar20 >> 3)) >> 5 & 0x3e07c1f;
                  *(ushort *)*pauVar36 =
                       ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)uVar27;
                  if ((int)uVar52 < 2) {
                    uVar27 = (ulong)bVar49;
                    pauVar36 = pauVar29;
                  }
                  else {
                    uVar30 = (uVar52 - 9 >> 3) + 1;
                    uVar51 = uVar30 * 8;
                    if (uVar52 - 2 < 7) {
                      iVar20 = 1;
                      pauVar36 = pauVar29;
                      puVar41 = puVar32;
LAB_0513918c:
                      uVar30 = (int)((CONCAT22(*(undefined2 *)*pauVar36,*(undefined2 *)*pauVar36) &
                                     0x3e07c1f) *
                                    (int)(0x100 - (ulong)((uint)*puVar41 >> 0x18) >> 3)) >> 5 &
                               0x3e07c1f;
                      *(ushort *)*pauVar36 =
                           ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)*puVar41;
                      if ((((iVar20 + 1 < (int)uVar52) &&
                           (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 0xe),
                                                     *(undefined2 *)(pauVar36[-1] + 0xe)) &
                                           0x3e07c1f) *
                                          (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 4) >> 0x18
                                                               ) >> 3)) >> 5 & 0x3e07c1f,
                           *(ushort *)(pauVar36[-1] + 0xe) =
                                ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                (short)*(uint *)((long)puVar41 + 4), iVar20 + 2 < (int)uVar52)) &&
                          (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 0xc),
                                                    *(undefined2 *)(pauVar36[-1] + 0xc)) & 0x3e07c1f
                                          ) * (int)(0x100 - (ulong)((uint)puVar41[1] >> 0x18) >> 3))
                                    >> 5 & 0x3e07c1f,
                          *(ushort *)(pauVar36[-1] + 0xc) =
                               ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)puVar41[1]
                          , iVar20 + 3 < (int)uVar52)) &&
                         (((uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 10),
                                                     *(undefined2 *)(pauVar36[-1] + 10)) & 0x3e07c1f
                                           ) * (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 0xc)
                                                                    >> 0x18) >> 3)) >> 5 & 0x3e07c1f
                           , *(ushort *)(pauVar36[-1] + 10) =
                                  ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                  (short)*(uint *)((long)puVar41 + 0xc), iVar20 + 4 < (int)uVar52 &&
                           (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 8),
                                                     *(undefined2 *)(pauVar36[-1] + 8)) & 0x3e07c1f)
                                          * (int)(0x100 - (ulong)((uint)puVar41[2] >> 0x18) >> 3))
                                     >> 5 & 0x3e07c1f,
                           *(ushort *)(pauVar36[-1] + 8) =
                                ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                                (short)(uint)puVar41[2], iVar20 + 5 < (int)uVar52)) &&
                          (uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 6),
                                                    *(undefined2 *)(pauVar36[-1] + 6)) & 0x3e07c1f)
                                         * (int)(0x100 - (ulong)(*(uint *)((long)puVar41 + 0x14) >>
                                                                0x18) >> 3)) >> 5 & 0x3e07c1f,
                          *(ushort *)(pauVar36[-1] + 6) =
                               ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) +
                               (short)*(uint *)((long)puVar41 + 0x14), iVar20 + 6 < (int)uVar52))))
                      {
                        uVar30 = (int)((CONCAT22(*(undefined2 *)(pauVar36[-1] + 4),
                                                 *(undefined2 *)(pauVar36[-1] + 4)) & 0x3e07c1f) *
                                      (int)(0x100 - (ulong)((uint)puVar41[3] >> 0x18) >> 3)) >> 5 &
                                 0x3e07c1f;
                        *(ushort *)(pauVar36[-1] + 4) =
                             ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)(uint)puVar41[3];
                      }
                    }
                    else {
                      uVar44 = 0;
                      puVar41 = puVar32;
                      do {
                        pauVar48 = pauVar36 + -1;
                        uVar44 = uVar44 + 1;
                        uVar93 = puVar41[1];
                        uVar35 = *puVar41;
                        auVar13._8_8_ = 0x100030205040706;
                        auVar13._0_8_ = 0x9080b0a0d0c0f0e;
                        auVar78 = a64_TBL(ZEXT816(0),*pauVar48,auVar13);
                        uVar53 = puVar41[3];
                        uVar27 = puVar41[2];
                        uVar43 = auVar78._0_4_ & 0xffff;
                        uVar57 = auVar78._8_4_ & 0xffff;
                        uVar57 = CONCAT13((char)(uVar57 >> 8),CONCAT12((char)uVar57,auVar78._8_2_));
                        auVar73._0_8_ =
                             CONCAT17(auVar78[0xb],
                                      CONCAT16(auVar78[10],
                                               CONCAT15(auVar78[0xb],CONCAT14(auVar78[10],uVar57))))
                             & 0x3e07c1f03e07c1f;
                        auVar73[8] = auVar78[0xc] & 0x1f;
                        auVar73[9] = auVar78[0xd] & 0x7c;
                        auVar73[10] = auVar78[0xc] & 0xe0;
                        auVar73[0xb] = auVar78[0xd] & 3;
                        auVar83[0xc] = auVar78[0xe] & 0x1f;
                        auVar83._0_12_ = auVar73;
                        auVar83[0xd] = auVar78[0xf] & 0x7c;
                        auVar83[0xe] = auVar78[0xe] & 0xe0;
                        auVar83[0xf] = auVar78[0xf] & 3;
                        iVar20 = (CONCAT13((char)(uVar43 >> 8),CONCAT12((char)uVar43,auVar78._0_2_))
                                 & 0x3e07c1f) * (int)(0x100 - ((uVar35 & 0xffffffff) >> 0x18) >> 3);
                        iVar92 = (CONCAT13(auVar78[3],CONCAT12(auVar78[2],auVar78._2_2_)) &
                                 0x3e07c1f) * (int)(0x100 - (uVar35 >> 0x38) >> 3);
                        iVar5 = (CONCAT13(auVar78[5],CONCAT12(auVar78[4],auVar78._4_2_)) & 0x3e07c1f
                                ) * (int)(0x100 - ((uVar93 & 0xffffffff) >> 0x18) >> 3);
                        iVar11 = (CONCAT13(auVar78[7],CONCAT12(auVar78[6],auVar78._6_2_)) &
                                 0x3e07c1f) * (int)(0x100 - (uVar93 >> 0x38) >> 3);
                        iVar68 = (uVar57 & 0x3e07c1f) *
                                 (int)(0x100 - ((uVar27 & 0xffffffff) >> 0x18) >> 3);
                        iVar87 = (int)(auVar73._0_8_ >> 0x20) * (int)(0x100 - (uVar27 >> 0x38) >> 3)
                        ;
                        iVar89 = auVar73._8_4_ * (int)(0x100 - ((uVar53 & 0xffffffff) >> 0x18) >> 3)
                        ;
                        iVar91 = auVar83._12_4_ * (int)(0x100 - (uVar53 >> 0x38) >> 3);
                        iVar66 = iVar20 >> 5;
                        iVar4 = iVar92 >> 5;
                        iVar10 = iVar5 >> 5;
                        iVar12 = iVar11 >> 5;
                        iVar69 = iVar68 >> 5;
                        iVar88 = iVar87 >> 5;
                        iVar90 = iVar89 >> 5;
                        uVar6 = CONCAT11((char)(iVar20 >> 0x1d),(char)((uint)iVar66 >> 0x10)) &
                                0x3e0;
                        uVar18 = CONCAT11((char)(iVar92 >> 0x1d),(char)((uint)iVar4 >> 0x10)) &
                                 0x3e0;
                        uVar17 = CONCAT11((char)(iVar11 >> 0x1d),(char)((uint)iVar12 >> 0x10)) &
                                 0x3e0;
                        uVar64 = CONCAT11((char)(iVar5 >> 0x1d),(char)((uint)iVar10 >> 0x10)) &
                                 0x3e0;
                        sVar65 = CONCAT11((byte)(uVar6 >> 8) | (byte)((uint)iVar66 >> 8) & 0x7c,
                                          (byte)uVar6 | (byte)iVar66 & 0x1f);
                        uVar67 = CONCAT13((byte)(uVar18 >> 8) | (byte)((uint)iVar4 >> 8) & 0x7c,
                                          CONCAT12((byte)uVar18 | (byte)iVar4 & 0x1f,sVar65));
                        uVar70 = CONCAT15((byte)(uVar64 >> 8) | (byte)((uint)iVar10 >> 8) & 0x7c,
                                          CONCAT14((byte)uVar64 | (byte)iVar10 & 0x1f,uVar67));
                        uVar22 = CONCAT17((byte)(uVar17 >> 8) | (byte)((uint)iVar12 >> 8) & 0x7c,
                                          CONCAT16((byte)uVar17 | (byte)iVar12 & 0x1f,uVar70));
                        auVar74._0_10_ =
                             CONCAT19((byte)(iVar68 >> 0x1d) & 3 | (byte)((uint)iVar69 >> 8) & 0x7c,
                                      CONCAT18((byte)((uint)iVar69 >> 0x10) & 0xe0 |
                                               (byte)iVar69 & 0x1f,uVar22));
                        auVar74[10] = (byte)((uint)iVar88 >> 0x10) & 0xe0 | (byte)iVar88 & 0x1f;
                        auVar74[0xb] = (byte)(iVar87 >> 0x1d) & 3 | (byte)((uint)iVar88 >> 8) & 0x7c
                        ;
                        auVar76[0xc] = (byte)((uint)iVar90 >> 0x10) & 0xe0 | (byte)iVar90 & 0x1f;
                        auVar76._0_12_ = auVar74;
                        auVar76[0xd] = (byte)(iVar89 >> 0x1d) & 3 | (byte)((uint)iVar90 >> 8) & 0x7c
                        ;
                        auVar84[0xe] = (byte)((uint3)(int3)(iVar91 >> 0xd) >> 8) & 0xe0 |
                                       (byte)(iVar91 >> 5) & 0x1f;
                        auVar84._0_14_ = auVar76;
                        auVar84[0xf] = (byte)(iVar91 >> 0x1d) & 3 |
                                       (byte)((uint)(iVar91 >> 5) >> 8) & 0x7c;
                        auVar85._0_2_ = sVar65 + (short)uVar35;
                        auVar85._2_2_ = (short)((uint)uVar67 >> 0x10) + (short)(uVar35 >> 0x20);
                        auVar85._4_2_ = (short)((uint6)uVar70 >> 0x20) + (short)uVar93;
                        auVar85._6_2_ = (short)((ulong)uVar22 >> 0x30) + (short)(uVar93 >> 0x20);
                        auVar85._8_2_ = (short)((unkuint10)auVar74._0_10_ >> 0x40) + (short)uVar27;
                        auVar85._10_2_ = auVar74._10_2_ + (short)(uVar27 >> 0x20);
                        auVar85._12_2_ = auVar76._12_2_ + (short)uVar53;
                        auVar85._14_2_ = auVar84._14_2_ + (short)(uVar53 >> 0x20);
                        auVar14._8_8_ = 0x100030205040706;
                        auVar14._0_8_ = 0x9080b0a0d0c0f0e;
                        auVar78 = a64_TBL(ZEXT816(0),auVar85,auVar14);
                        *(long *)(pauVar36[-1] + 8) = auVar78._8_8_;
                        *(long *)*pauVar48 = auVar78._0_8_;
                        puVar41 = puVar41 + 4;
                        pauVar36 = pauVar48;
                      } while (uVar44 < uVar30);
                      iVar20 = uVar51 + 1;
                      pauVar36 = (undefined1 (*) [16])((long)pauVar29 + (ulong)uVar51 * -2);
                      puVar41 = (ulong *)((long)puVar32 + (ulong)uVar51 * 4);
                      if (uVar51 != uVar52 - 1) goto LAB_0513918c;
                    }
                    lVar62 = (ulong)(uVar52 - 2) + 1;
                    uVar27 = (ulong)bVar49;
                    puVar32 = (ulong *)((long)puVar32 + lVar62 * 4);
                    pauVar36 = (undefined1 (*) [16])((long)pauVar29 + lVar62 * -2);
                  }
                }
              }
LAB_051393dc:
              pbVar50 = pbVar50 + uVar27;
            }
            iVar63 = iVar63 + 1;
            pauVar36 = (undefined1 (*) [16])(*pauVar60 + (uVar34 & 0xfffffffffffffffe));
            puVar32 = (ulong *)((long)puVar42 + (long)iVar3 * 4);
            pbVar50 = pbVar55 + iVar3;
            uVar2 = local_20;
            pbVar55 = pbVar50;
            pauVar60 = pauVar36;
            puVar42 = puVar32;
          } while (iVar63 != local_1c);
        }
      }
      else if (0 < local_1c) {
        iVar3 = *(int *)(param_1 + 0x38);
        uVar34 = *(ulong *)(this + 0x118);
        iVar63 = 0;
        uVar51 = local_20;
        pbVar55 = pbVar50;
        pauVar60 = pauVar36;
        puVar42 = puVar32;
        do {
          for (; 0 < (int)uVar51; uVar51 = uVar51 - uVar57) {
            bVar49 = *pbVar50;
            uVar57 = (uint)bVar49;
            uVar44 = (uint)*puVar32 >> 0x18;
            if ((int)uVar51 < (int)(uint)bVar49) {
              iVar20 = 0x100 - uVar44;
              bVar49 = (byte)uVar51;
              uVar57 = uVar51;
              uVar44 = uVar51;
              if (iVar20 == 1) {
LAB_05137888:
                uVar44 = (uVar57 - 8 >> 3) + 1;
                uVar43 = uVar44 * 8;
                if (uVar57 - 1 < 7) {
                  uVar43 = 0;
                  pauVar29 = pauVar36;
                  puVar41 = puVar32;
LAB_051378fc:
                  *(short *)*pauVar29 = (short)(uint)*puVar41;
                  if ((((int)(uVar43 + 1) < (int)uVar57) &&
                      (*(short *)(pauVar29[-1] + 0xe) = (short)*(uint *)((long)puVar41 + 4),
                      (int)(uVar43 + 2) < (int)uVar57)) &&
                     ((*(short *)(pauVar29[-1] + 0xc) = (short)(uint)puVar41[1],
                      (int)(uVar43 + 3) < (int)uVar57 &&
                      (((*(short *)(pauVar29[-1] + 10) = (short)*(uint *)((long)puVar41 + 0xc),
                        (int)(uVar43 + 4) < (int)uVar57 &&
                        (*(short *)(pauVar29[-1] + 8) = (short)(uint)puVar41[2],
                        (int)(uVar43 + 5) < (int)uVar57)) &&
                       (*(short *)(pauVar29[-1] + 6) = (short)*(uint *)((long)puVar41 + 0x14),
                       (int)(uVar43 + 6) < (int)uVar57)))))) {
                    *(short *)(pauVar29[-1] + 4) = (short)(uint)puVar41[3];
                  }
                }
                else {
                  puVar47 = (undefined8 *)(pauVar36[-1] + 2);
                  uVar39 = 0;
                  puVar41 = puVar32;
                  do {
                    uVar39 = uVar39 + 1;
                    auVar77._2_2_ = (short)(*puVar41 >> 0x20);
                    auVar77._0_2_ = (short)*puVar41;
                    auVar77._4_2_ = (short)puVar41[1];
                    auVar77._6_2_ = (short)(puVar41[1] >> 0x20);
                    auVar77._8_2_ = (short)puVar41[2];
                    auVar77._10_2_ = (short)(puVar41[2] >> 0x20);
                    auVar77._12_2_ = (short)puVar41[3];
                    auVar77._14_2_ = (short)(puVar41[3] >> 0x20);
                    auVar8[8] = 6;
                    auVar8._0_8_ = 0x9080b0a0d0c0f0e;
                    auVar8[9] = 7;
                    auVar8[10] = 4;
                    auVar8[0xb] = 5;
                    auVar8[0xc] = 2;
                    auVar8[0xd] = 3;
                    auVar8[0xe] = 0;
                    auVar8[0xf] = 1;
                    auVar78 = a64_TBL(ZEXT816(0),auVar77,auVar8);
                    puVar47[1] = auVar78._8_8_;
                    *puVar47 = auVar78._0_8_;
                    puVar47 = puVar47 + -2;
                    puVar41 = puVar41 + 4;
                  } while (uVar39 < uVar44);
                  pauVar29 = (undefined1 (*) [16])((long)pauVar36 + (ulong)uVar43 * -2);
                  puVar41 = (ulong *)((long)puVar32 + (ulong)uVar43 * 4);
                  if (uVar43 != uVar57) goto LAB_051378fc;
                }
                uVar27 = (ulong)bVar49;
                lVar62 = (ulong)(uVar57 - 1) + 1;
                pauVar36 = (undefined1 (*) [16])((long)pauVar36 + lVar62 * -2);
                puVar32 = (ulong *)((long)puVar32 + lVar62 * 4);
              }
              else {
LAB_05137758:
                uVar57 = uVar44;
                if (iVar20 == 0x100) {
                  uVar27 = (ulong)bVar49;
                  pauVar36 = (undefined1 (*) [16])((long)pauVar36 + (ulong)bVar49 * -2);
                  puVar32 = (ulong *)((long)puVar32 + (ulong)bVar49 * 4);
                }
                else {
                  puVar41 = (ulong *)((long)puVar32 + 4);
                  pauVar29 = (undefined1 (*) [16])(pauVar36[-1] + 0xe);
                  uVar44 = (uint)*(ushort *)*pauVar36;
                  *(ushort *)*pauVar36 =
                       (uVar17 & (ushort)(iVar20 * (uVar44 & uVar2) >> 8)) +
                       (uVar6 & (ushort)(iVar20 * (uVar44 & uVar30) >> 8)) + (short)(uint)*puVar32 +
                       (uVar18 & (ushort)(iVar20 * (uVar44 & uVar52) >> 8));
                  if ((int)uVar57 < 2) {
                    uVar27 = (ulong)bVar49;
                    pauVar36 = pauVar29;
                    puVar32 = puVar41;
                  }
                  else {
                    puVar38 = puVar41;
                    pauVar36 = pauVar29;
                    do {
                      puVar46 = (ulong *)((long)puVar38 + 4);
                      uVar44 = (uint)*(ushort *)*pauVar36;
                      iVar20 = 0x100 - ((uint)*puVar38 >> 0x18);
                      *(ushort *)*pauVar36 =
                           (uVar17 & (ushort)((uVar44 & uVar2) * iVar20 >> 8)) +
                           (uVar6 & (ushort)((uVar44 & uVar30) * iVar20 >> 8)) +
                           (short)(uint)*puVar38 +
                           (uVar18 & (ushort)((uVar44 & uVar52) * iVar20 >> 8));
                      puVar38 = puVar46;
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xe);
                    } while (puVar46 != (ulong *)((long)puVar32 + ((ulong)(uVar57 - 2) + 2) * 4));
                    lVar62 = (ulong)(uVar57 - 2) + 1;
                    uVar27 = (ulong)bVar49;
                    pauVar36 = (undefined1 (*) [16])((long)pauVar29 + lVar62 * -2);
                    puVar32 = (ulong *)((long)puVar41 + lVar62 * 4);
                  }
                }
              }
            }
            else {
              iVar20 = 0x100 - uVar44;
              uVar44 = (uint)bVar49;
              if (iVar20 != 1) goto LAB_05137758;
              if (bVar49 != 0) goto LAB_05137888;
              uVar27 = 0;
            }
            pbVar50 = pbVar50 + uVar27;
          }
          iVar63 = iVar63 + 1;
          pauVar36 = (undefined1 (*) [16])(*pauVar60 + (uVar34 & 0xfffffffffffffffe));
          puVar32 = (ulong *)((long)puVar42 + (long)iVar3 * 4);
          pbVar50 = pbVar55 + iVar3;
          uVar51 = local_20;
          pbVar55 = pbVar50;
          pauVar60 = pauVar36;
          puVar42 = puVar32;
        } while (iVar63 != local_1c);
      }
    }
    else if (*(int *)(this + 0x134) == 0x20) {
      pbVar50 = (byte *)(lVar24 + lVar1);
      uVar2 = *(uint *)(this + 0x138);
      uVar30 = *(uint *)(this + 0x13c);
      puVar42 = (ulong *)(*(long *)(this + 0x120) +
                         (((ulong)(lVar62 * *(long *)(this + 0x118)) >> 2) + (long)iVar63) * 8);
      uVar52 = *(uint *)(this + 0x140);
      Color::Color(aCStack_18,1);
      cVar19 = Sexy::operator==(param_5,aCStack_18);
      if (cVar19 == '\0') {
        iVar66 = *(int *)(param_5 + 0xc);
        iVar63 = (iVar66 * *(int *)(param_5 + 4)) / 0xff;
        iVar3 = (iVar66 * *(int *)(param_5 + 8)) / 0xff;
        iVar20 = (iVar66 * *(int *)param_5) / 0xff;
        if ((iVar63 == iVar3) && (iVar20 == iVar63)) {
          if (0 < local_1c) {
            iVar3 = *(int *)(param_1 + 0x38);
            iVar63 = 0;
            lVar62 = (long)iVar20;
            do {
              if (0 < (int)local_20) {
                puVar41 = puVar32;
                pbVar55 = pbVar50;
                puVar38 = puVar42;
                uVar2 = local_20;
                do {
                  bVar49 = *pbVar55;
                  uVar52 = (uint)bVar49;
                  uVar30 = (uint)*puVar41 >> 0x18;
                  if ((int)uVar2 < (int)(uint)bVar49) {
                    uVar51 = uVar2 & 0xff;
                    uVar52 = uVar2;
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) {
LAB_05137f4c:
                      if (uVar30 == 0) {
                        uVar34 = (ulong)(byte)uVar51;
                        puVar38 = puVar38 + -(ulong)uVar51;
                        puVar41 = (ulong *)((long)puVar41 + (ulong)uVar51 * 4);
                      }
                      else {
                        if (uVar52 != 0) {
                          lVar23 = (ulong)(uVar52 - 1) + 1;
                          puVar46 = (ulong *)((long)puVar41 + lVar23 * 4);
                          puVar26 = puVar41;
                          puVar33 = puVar38;
                          do {
                            puVar41 = (ulong *)((long)puVar26 + 4);
                            uVar30 = (uint)*puVar26;
                            lVar24 = (long)(0x100 - (int)(((ulong)(uVar30 >> 0x18) * (long)iVar66) /
                                                         0xff));
                            *puVar33 = (((ulong)uVar30 & 0xff00) * lVar62 +
                                        (*puVar33 & 0xff00) * lVar24 >> 8 & 0xff00) +
                                       ((ulong)(uVar30 & 0xff00ff) * lVar62 +
                                        (*puVar33 & 0xff00ff) * lVar24 >> 8 & 0xff00ff);
                            puVar26 = puVar41;
                            puVar33 = puVar33 + -1;
                          } while (puVar41 != puVar46);
                          puVar38 = puVar38 + -lVar23;
                        }
                        uVar34 = (ulong)(byte)uVar51;
                      }
                    }
                    else {
LAB_05137e94:
                      lVar23 = (ulong)(uVar52 - 1) + 1;
                      puVar46 = (ulong *)((long)puVar41 + lVar23 * 4);
                      puVar26 = puVar41;
                      puVar33 = puVar38;
                      do {
                        puVar41 = (ulong *)((long)puVar26 + 4);
                        *puVar33 = (((ulong)(uint)*puVar26 & 0xff00) * lVar62 >> 8 & 0xff00) +
                                   ((ulong)((uint)*puVar26 & 0xff00ff) * lVar62 >> 8 & 0xff00ff);
                        puVar26 = puVar41;
                        puVar33 = puVar33 + -1;
                      } while (puVar41 != puVar46);
                      puVar38 = puVar38 + -lVar23;
                      uVar34 = (ulong)(byte)uVar51;
                    }
                  }
                  else {
                    uVar51 = uVar52;
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) goto LAB_05137f4c;
                    if (bVar49 != 0) goto LAB_05137e94;
                    uVar34 = 0;
                  }
                  uVar2 = uVar2 - uVar52;
                  pbVar55 = pbVar55 + uVar34;
                } while (0 < (int)uVar2);
              }
              iVar63 = iVar63 + 1;
              puVar32 = (ulong *)((long)puVar32 + (long)iVar3 * 4);
              pbVar50 = pbVar50 + iVar3;
              puVar42 = puVar42 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar63 != local_1c);
          }
        }
        else if (0 < local_1c) {
          iVar4 = *(int *)(param_1 + 0x38);
          iVar92 = 0;
          uVar53 = (ulong)uVar2;
          uVar27 = (ulong)uVar30;
          uVar34 = (ulong)uVar52;
          do {
            if (0 < (int)local_20) {
              puVar41 = puVar32;
              pbVar55 = pbVar50;
              puVar38 = puVar42;
              uVar51 = local_20;
              do {
                bVar49 = *pbVar55;
                uVar43 = (uint)bVar49;
                uVar57 = (uint)bVar49;
                uVar44 = (uint)*puVar41 >> 0x18;
                if ((int)uVar51 < (int)(uint)bVar49) {
                  uVar57 = uVar51 & 0xff;
                  uVar39 = uVar51;
                  uVar58 = uVar57;
                  if ((uVar44 != 0xff) || (uVar43 = uVar51, iVar66 != 0xff)) {
LAB_0513888c:
                    uVar57 = uVar39;
                    if (uVar44 == 0) {
                      uVar35 = (ulong)(byte)uVar58;
                      puVar38 = puVar38 + -(ulong)uVar58;
                      puVar41 = (ulong *)((long)puVar41 + (ulong)uVar58 * 4);
                    }
                    else {
                      if (uVar57 != 0) {
                        lVar62 = (ulong)(uVar57 - 1) + 1;
                        puVar46 = (ulong *)((long)puVar41 + lVar62 * 4);
                        puVar26 = puVar41;
                        puVar33 = puVar38;
                        do {
                          puVar41 = (ulong *)((long)puVar26 + 4);
                          uVar44 = (uint)*puVar26;
                          uVar35 = *puVar33;
                          lVar23 = (long)(0x100 - (int)(((ulong)(uVar44 >> 0x18) * (long)iVar66) /
                                                       0xff));
                          *puVar33 = (uVar27 & (ulong)(uVar44 & uVar30) * (long)iVar63 +
                                               (uVar35 & uVar27) * lVar23 >> 8) +
                                     (uVar53 & (ulong)(uVar44 & uVar2) * (long)iVar20 +
                                               (uVar35 & uVar53) * lVar23 >> 8) +
                                     (uVar34 & (ulong)(uVar44 & uVar52) * (long)iVar3 +
                                               (uVar35 & uVar34) * lVar23 >> 8);
                          puVar26 = puVar41;
                          puVar33 = puVar33 + -1;
                        } while (puVar41 != puVar46);
                        puVar38 = puVar38 + -lVar62;
                      }
                      uVar35 = (ulong)(byte)uVar58;
                    }
                  }
                  else {
LAB_051387bc:
                    lVar62 = (ulong)(uVar43 - 1) + 1;
                    puVar46 = (ulong *)((long)puVar41 + lVar62 * 4);
                    puVar26 = puVar41;
                    puVar33 = puVar38;
                    do {
                      puVar41 = (ulong *)((long)puVar26 + 4);
                      uVar44 = (uint)*puVar26;
                      *puVar33 = (uVar27 & (ulong)(uVar44 & uVar30) * (long)iVar63 >> 8) +
                                 (uVar53 & (ulong)(uVar44 & uVar2) * (long)iVar20 >> 8) +
                                 (uVar34 & (ulong)(uVar44 & uVar52) * (long)iVar3 >> 8);
                      puVar26 = puVar41;
                      puVar33 = puVar33 + -1;
                    } while (puVar41 != puVar46);
                    puVar38 = puVar38 + -lVar62;
                    uVar35 = (ulong)(byte)uVar57;
                    uVar57 = uVar43;
                  }
                }
                else {
                  uVar39 = uVar57;
                  uVar58 = uVar57;
                  if ((uVar44 != 0xff) || (uVar58 = (uint)bVar49, iVar66 != 0xff))
                  goto LAB_0513888c;
                  if (bVar49 != 0) goto LAB_051387bc;
                  uVar35 = 0;
                }
                uVar51 = uVar51 - uVar57;
                pbVar55 = pbVar55 + uVar35;
              } while (0 < (int)uVar51);
            }
            iVar92 = iVar92 + 1;
            puVar32 = (ulong *)((long)puVar32 + (long)iVar4 * 4);
            pbVar50 = pbVar50 + iVar4;
            puVar42 = puVar42 + (*(ulong *)(this + 0x118) >> 2);
          } while (iVar92 != local_1c);
        }
      }
      else if (0 < local_1c) {
        iVar3 = *(int *)(param_1 + 0x38);
        iVar63 = 0;
        uVar2 = local_20;
        pbVar55 = pbVar50;
        puVar41 = puVar42;
        puVar38 = puVar32;
        do {
          for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
            bVar49 = *pbVar50;
            uVar52 = (uint)bVar49;
            uVar30 = (uint)*puVar32 >> 0x18;
            if ((int)uVar2 < (int)(uint)bVar49) {
              iVar20 = 0x100 - uVar30;
              bVar49 = (byte)uVar2;
              uVar52 = uVar2;
              uVar30 = uVar2;
              if (iVar20 == 1) {
LAB_05136afc:
                lVar62 = (ulong)(uVar52 - 1) + 1;
                puVar46 = (ulong *)((long)puVar32 + lVar62 * 4);
                puVar26 = puVar42;
                puVar33 = puVar32;
                do {
                  puVar32 = (ulong *)((long)puVar33 + 4);
                  *puVar26 = (ulong)(uint)*puVar33;
                  puVar26 = puVar26 + -1;
                  puVar33 = puVar32;
                } while (puVar32 != puVar46);
                puVar42 = puVar42 + -lVar62;
                uVar34 = (ulong)bVar49;
              }
              else {
LAB_051369d4:
                uVar52 = uVar30;
                if (iVar20 == 0x100) {
                  uVar34 = (ulong)bVar49;
                  puVar42 = puVar42 + -(ulong)bVar49;
                  puVar32 = (ulong *)((long)puVar32 + (ulong)bVar49 * 4);
                }
                else {
                  puVar26 = puVar42 + -1;
                  puVar46 = (ulong *)((long)puVar32 + 4);
                  *puVar42 = ((long)iVar20 * (*puVar42 & 0xff00ff) >> 8 & 0xff00ff) +
                             ((long)iVar20 * (*puVar42 & 0xff00) >> 8 & 0xff00) +
                             (ulong)(uint)*puVar32;
                  if ((int)uVar52 < 2) {
                    uVar34 = (ulong)bVar49;
                    puVar32 = puVar46;
                    puVar42 = puVar26;
                  }
                  else {
                    puVar42 = puVar46;
                    puVar33 = puVar26;
                    do {
                      puVar25 = (ulong *)((long)puVar42 + 4);
                      uVar34 = (ulong)(0x100 - ((uint)*puVar42 >> 0x18));
                      *puVar33 = ((*puVar33 & 0xff00ff) * uVar34 >> 8 & 0xff00ff) +
                                 ((*puVar33 & 0xff00) * uVar34 >> 8 & 0xff00) +
                                 (ulong)(uint)*puVar42;
                      puVar42 = puVar25;
                      puVar33 = puVar33 + -1;
                    } while (puVar25 != (ulong *)((long)puVar32 + ((ulong)(uVar52 - 2) + 2) * 4));
                    lVar62 = (ulong)(uVar52 - 2) + 1;
                    uVar34 = (ulong)bVar49;
                    puVar32 = (ulong *)((long)puVar46 + lVar62 * 4);
                    puVar42 = puVar26 + -lVar62;
                  }
                }
              }
            }
            else {
              iVar20 = 0x100 - uVar30;
              uVar30 = (uint)bVar49;
              if (iVar20 != 1) goto LAB_051369d4;
              if (bVar49 != 0) goto LAB_05136afc;
              uVar34 = 0;
            }
            pbVar50 = pbVar50 + uVar34;
          }
          iVar63 = iVar63 + 1;
          puVar32 = (ulong *)((long)puVar38 + (long)iVar3 * 4);
          pbVar50 = pbVar55 + iVar3;
          puVar42 = puVar41 + (*(ulong *)(this + 0x118) >> 2);
          uVar2 = local_20;
          pbVar55 = pbVar50;
          puVar41 = puVar42;
          puVar38 = puVar32;
        } while (iVar63 != local_1c);
      }
    }
  }
  else {
    lVar1 = (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38));
    pbVar50 = (byte *)(plVar21[0x11] + lVar1);
    if (*(int *)(this + 0x134) == 0x10) {
      pbVar55 = (byte *)(lVar24 + lVar1);
      uVar2 = *(uint *)(this + 0x138);
      uVar30 = *(uint *)(this + 0x13c);
      puVar37 = (ushort *)
                (*(long *)(this + 0x120) +
                (((ulong)(lVar62 * *(long *)(this + 0x118)) >> 1) + (long)iVar63) * 2);
      uVar52 = *(uint *)(this + 0x140);
      Color::Color(aCStack_18,1);
      cVar19 = Sexy::operator==(param_5,aCStack_18);
      uVar17 = (ushort)uVar2;
      uVar6 = (ushort)uVar30;
      uVar18 = (ushort)uVar52;
      if (cVar19 == '\0') {
        iVar66 = *(int *)(param_5 + 0xc);
        iVar63 = (iVar66 * *(int *)(param_5 + 4)) / 0xff;
        iVar3 = (iVar66 * *(int *)(param_5 + 8)) / 0xff;
        iVar20 = (iVar66 * *(int *)param_5) / 0xff;
        if ((iVar63 == iVar3) && (iVar20 == iVar63)) {
          iVar92 = iVar20 >> 3;
          if (uVar30 == 0x7e0) {
            if (0 < local_1c) {
              uVar34 = *(ulong *)(this + 0x118);
              iVar3 = *(int *)(param_1 + 0x38);
              iVar63 = 0;
              do {
                if (0 < (int)local_20) {
                  pbVar54 = pbVar50;
                  puVar56 = puVar37;
                  pbVar59 = pbVar55;
                  uVar2 = local_20;
                  do {
                    bVar49 = *pbVar59;
                    uVar51 = (uint)bVar49;
                    uVar30 = *(uint *)(lVar23 + (ulong)*pbVar54 * 4);
                    uVar27 = (ulong)uVar30;
                    uVar52 = uVar30 >> 0x18;
                    if ((int)uVar2 < (int)(uint)bVar49) {
                      bVar49 = (byte)uVar2;
                      uVar51 = uVar2;
                      if ((uVar52 != 0xff) || (iVar66 != 0xff)) {
LAB_05138418:
                        if (uVar52 == 0) {
                          uVar27 = (ulong)bVar49;
                          puVar56 = puVar56 + -(ulong)bVar49;
                          pbVar54 = pbVar54 + uVar27;
                        }
                        else if (uVar51 == 0) {
                          uVar27 = (ulong)bVar49;
                        }
                        else {
                          puVar28 = puVar56;
                          pbVar31 = pbVar54;
                          while( true ) {
                            pbVar31 = pbVar31 + 1;
                            uVar27 = ((ulong)CONCAT22((short)uVar30,(short)uVar30) & 0x7e0f81f) *
                                     (long)iVar92 +
                                     (long)(0x100 - (int)(((uVar27 >> 0x18) * (long)iVar66) / 0xff)
                                           >> 3) * (ulong)(CONCAT22(*puVar28,*puVar28) & 0x7e0f81f)
                                     >> 5 & 0x7e0f81f;
                            *puVar28 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                            if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar51 - 1))) break;
                            uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                            uVar27 = (ulong)uVar30;
                            puVar28 = puVar28 + -1;
                          }
                          lVar62 = (ulong)(uVar51 - 1) + 1;
                          uVar27 = (ulong)bVar49;
                          pbVar54 = pbVar54 + lVar62;
                          puVar56 = puVar56 + -lVar62;
                        }
                      }
                      else {
LAB_05138348:
                        puVar28 = puVar56;
                        pbVar31 = pbVar54;
                        while( true ) {
                          pbVar31 = pbVar31 + 1;
                          uVar27 = (((ulong)(ushort)uVar30 | uVar27 << 0x10) & 0x7e0f81f) *
                                   (long)iVar92 >> 5 & 0x7e0f81f;
                          *puVar28 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                          if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar51 - 1))) break;
                          uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                          uVar27 = (ulong)uVar30;
                          puVar28 = puVar28 + -1;
                        }
                        lVar62 = (ulong)(uVar51 - 1) + 1;
                        uVar27 = (ulong)bVar49;
                        pbVar54 = pbVar54 + lVar62;
                        puVar56 = puVar56 + -lVar62;
                      }
                    }
                    else {
                      if ((uVar52 != 0xff) || (iVar66 != 0xff)) goto LAB_05138418;
                      if (bVar49 != 0) goto LAB_05138348;
                      uVar27 = 0;
                    }
                    uVar2 = uVar2 - uVar51;
                    pbVar59 = pbVar59 + uVar27;
                  } while (0 < (int)uVar2);
                }
                iVar63 = iVar63 + 1;
                puVar37 = (ushort *)((long)puVar37 + (uVar34 & 0xfffffffffffffffe));
                pbVar50 = pbVar50 + iVar3;
                pbVar55 = pbVar55 + iVar3;
              } while (iVar63 != local_1c);
            }
          }
          else {
            if (uVar30 != 0x3e0) goto LAB_05136e48;
            if (0 < local_1c) {
              uVar34 = *(ulong *)(this + 0x118);
              iVar3 = *(int *)(param_1 + 0x38);
              iVar63 = 0;
              do {
                if (0 < (int)local_20) {
                  pbVar54 = pbVar50;
                  puVar56 = puVar37;
                  pbVar59 = pbVar55;
                  uVar2 = local_20;
                  do {
                    bVar49 = *pbVar59;
                    uVar51 = (uint)bVar49;
                    uVar30 = *(uint *)(lVar23 + (ulong)*pbVar54 * 4);
                    uVar27 = (ulong)uVar30;
                    uVar52 = uVar30 >> 0x18;
                    if ((int)uVar2 < (int)(uint)bVar49) {
                      bVar49 = (byte)uVar2;
                      uVar51 = uVar2;
                      if ((uVar52 != 0xff) || (iVar66 != 0xff)) {
LAB_05138648:
                        if (uVar52 == 0) {
                          uVar27 = (ulong)bVar49;
                          puVar56 = puVar56 + -(ulong)bVar49;
                          pbVar54 = pbVar54 + uVar27;
                        }
                        else if (uVar51 == 0) {
                          uVar27 = (ulong)bVar49;
                        }
                        else {
                          puVar28 = puVar56;
                          pbVar31 = pbVar54;
                          while( true ) {
                            pbVar31 = pbVar31 + 1;
                            uVar27 = ((ulong)CONCAT22((short)uVar30,(short)uVar30) & 0x3e07c1f) *
                                     (long)iVar92 +
                                     (long)(0x100 - (int)(((uVar27 >> 0x18) * (long)iVar66) / 0xff)
                                           >> 3) * (ulong)(CONCAT22(*puVar28,*puVar28) & 0x3e07c1f)
                                     >> 5 & 0x3e07c1f;
                            *puVar28 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                            if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar51 - 1))) break;
                            uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                            uVar27 = (ulong)uVar30;
                            puVar28 = puVar28 + -1;
                          }
                          lVar62 = (ulong)(uVar51 - 1) + 1;
                          uVar27 = (ulong)bVar49;
                          pbVar54 = pbVar54 + lVar62;
                          puVar56 = puVar56 + -lVar62;
                        }
                      }
                      else {
LAB_05138578:
                        puVar28 = puVar56;
                        pbVar31 = pbVar54;
                        while( true ) {
                          pbVar31 = pbVar31 + 1;
                          uVar27 = (((ulong)(ushort)uVar30 | uVar27 << 0x10) & 0x3e07c1f) *
                                   (long)iVar92 >> 5 & 0x3e07c1f;
                          *puVar28 = (ushort)(uVar27 >> 0x10) | (ushort)uVar27;
                          if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar51 - 1))) break;
                          uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                          uVar27 = (ulong)uVar30;
                          puVar28 = puVar28 + -1;
                        }
                        lVar62 = (ulong)(uVar51 - 1) + 1;
                        uVar27 = (ulong)bVar49;
                        pbVar54 = pbVar54 + lVar62;
                        puVar56 = puVar56 + -lVar62;
                      }
                    }
                    else {
                      if ((uVar52 != 0xff) || (iVar66 != 0xff)) goto LAB_05138648;
                      if (bVar49 != 0) goto LAB_05138578;
                      uVar27 = 0;
                    }
                    uVar2 = uVar2 - uVar51;
                    pbVar59 = pbVar59 + uVar27;
                  } while (0 < (int)uVar2);
                }
                iVar63 = iVar63 + 1;
                puVar37 = (ushort *)((long)puVar37 + (uVar34 & 0xfffffffffffffffe));
                pbVar50 = pbVar50 + iVar3;
                pbVar55 = pbVar55 + iVar3;
              } while (iVar63 != local_1c);
            }
          }
        }
        else {
LAB_05136e48:
          if (0 < local_1c) {
            uVar34 = *(ulong *)(this + 0x118);
            iVar92 = 0;
            iVar4 = *(int *)(param_1 + 0x38);
            do {
              if (0 < (int)local_20) {
                pbVar54 = pbVar50;
                puVar56 = puVar37;
                pbVar59 = pbVar55;
                uVar51 = local_20;
                do {
                  bVar49 = *pbVar59;
                  uVar43 = (uint)bVar49;
                  local_38 = (ulong)(uint)bVar49;
                  uVar44 = *(uint *)(lVar23 + (ulong)*pbVar54 * 4);
                  uVar57 = uVar44 >> 0x18;
                  if (bVar49 == uVar51 || (int)(uint)bVar49 < (int)uVar51) {
                    if ((uVar57 != 0xff) || (iVar66 != 0xff)) goto LAB_05137014;
                    uVar39 = (uint)bVar49;
                    if (bVar49 != 0) goto LAB_05136f1c;
                    local_38 = 0;
                  }
                  else {
                    local_38 = (ulong)uVar51 & 0xffffffff000000ff;
                    uVar43 = uVar51;
                    if ((uVar57 != 0xff) || (uVar39 = uVar51, iVar66 != 0xff)) {
LAB_05137014:
                      if (uVar57 == 0) {
                        puVar56 = puVar56 + -local_38;
                        pbVar54 = pbVar54 + local_38;
                      }
                      else if (uVar43 != 0) {
                        puVar28 = puVar56;
                        pbVar31 = pbVar54;
                        while( true ) {
                          uVar57 = (uint)*puVar28;
                          pbVar31 = pbVar31 + 1;
                          iVar5 = 0x100 - (int)(((ulong)(uVar44 >> 0x18) * (long)iVar66) / 0xff);
                          *puVar28 = (uVar6 & (ushort)((uVar44 & uVar30) * iVar63 +
                                                       iVar5 * (uVar57 & uVar30) >> 8)) +
                                     (uVar17 & (ushort)((uVar44 & uVar2) * iVar20 +
                                                        iVar5 * (uVar57 & uVar2) >> 8)) +
                                     (uVar18 & (ushort)((uVar44 & uVar52) * iVar3 +
                                                        iVar5 * (uVar57 & uVar52) >> 8));
                          if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar43 - 1))) break;
                          uVar44 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                          puVar28 = puVar28 + -1;
                        }
                        lVar62 = (ulong)(uVar43 - 1) + 1;
                        pbVar54 = pbVar54 + lVar62;
                        puVar56 = puVar56 + -lVar62;
                      }
                    }
                    else {
LAB_05136f1c:
                      uVar43 = uVar39;
                      puVar28 = puVar56;
                      pbVar31 = pbVar54;
                      while( true ) {
                        pbVar31 = pbVar31 + 1;
                        *puVar28 = (uVar6 & (ushort)((uVar44 & uVar30) * iVar63 >> 8)) +
                                   (uVar17 & (ushort)((uVar44 & uVar2) * iVar20 >> 8)) +
                                   (uVar18 & (ushort)((uVar44 & uVar52) * iVar3 >> 8));
                        if (puVar28 + -1 == puVar56 + (-1 - (ulong)(uVar43 - 1))) break;
                        uVar44 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                        puVar28 = puVar28 + -1;
                      }
                      lVar62 = (ulong)(uVar43 - 1) + 1;
                      pbVar54 = pbVar54 + lVar62;
                      puVar56 = puVar56 + -lVar62;
                    }
                  }
                  uVar51 = uVar51 - uVar43;
                  pbVar59 = pbVar59 + local_38;
                } while (0 < (int)uVar51);
              }
              iVar92 = iVar92 + 1;
              puVar37 = (ushort *)((long)puVar37 + (uVar34 & 0xfffffffffffffffe));
              pbVar50 = pbVar50 + iVar4;
              pbVar55 = pbVar55 + iVar4;
            } while (iVar92 != local_1c);
          }
        }
      }
      else if (uVar30 == 0x7e0) {
        if (0 < local_1c) {
          uVar34 = *(ulong *)(this + 0x118);
          iVar3 = *(int *)(param_1 + 0x38);
          iVar63 = 0;
          uVar2 = local_20;
          pbVar54 = pbVar55;
          puVar56 = puVar37;
          pbVar59 = pbVar50;
          do {
            for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
              bVar49 = *pbVar55;
              uVar52 = (uint)bVar49;
              uVar30 = *(uint *)(lVar23 + (ulong)*pbVar50 * 4);
              if ((int)uVar2 < (int)(uint)bVar49) {
                iVar20 = 0x100 - (uVar30 >> 0x18);
                bVar49 = (byte)uVar2;
                uVar52 = uVar2;
                if (iVar20 == 1) {
LAB_05137b64:
                  puVar28 = puVar37;
                  pbVar31 = pbVar50;
                  while( true ) {
                    *puVar28 = (ushort)uVar30;
                    pbVar31 = pbVar31 + 1;
                    if (puVar28 + -1 == puVar37 + (-1 - (ulong)(uVar52 - 1))) break;
                    uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                    puVar28 = puVar28 + -1;
                  }
                  lVar62 = (ulong)(uVar52 - 1) + 1;
                  uVar27 = (ulong)bVar49;
                  pbVar50 = pbVar50 + lVar62;
                  puVar37 = puVar37 + -lVar62;
                }
                else {
LAB_05137a40:
                  if (iVar20 == 0x100) {
                    uVar27 = (ulong)bVar49;
                    puVar37 = puVar37 + -(ulong)bVar49;
                    pbVar50 = pbVar50 + uVar27;
                  }
                  else {
                    puVar28 = puVar37 + -1;
                    pbVar31 = pbVar50 + 1;
                    uVar51 = (int)((CONCAT22(*puVar37,*puVar37) & 0x7e0f81f) * (iVar20 >> 3)) >> 5 &
                             0x7e0f81f;
                    *puVar37 = ((ushort)uVar51 | (ushort)(uVar51 >> 0x10)) + (short)uVar30;
                    if ((int)uVar52 < 2) {
                      uVar27 = (ulong)bVar49;
                      puVar37 = puVar28;
                      pbVar50 = pbVar31;
                    }
                    else {
                      pbVar40 = pbVar31;
                      puVar37 = puVar28;
                      do {
                        pbVar45 = pbVar40 + 1;
                        uVar51 = *(uint *)(lVar23 + (ulong)*pbVar40 * 4);
                        uVar30 = (int)((CONCAT22(*puVar37,*puVar37) & 0x7e0f81f) *
                                      (int)(0x100 - (ulong)(uVar51 >> 0x18) >> 3)) >> 5 & 0x7e0f81f;
                        *puVar37 = ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)uVar51;
                        pbVar40 = pbVar45;
                        puVar37 = puVar37 + -1;
                      } while (pbVar45 != pbVar50 + (ulong)(uVar52 - 2) + 2);
                      lVar62 = (ulong)(uVar52 - 2) + 1;
                      uVar27 = (ulong)bVar49;
                      puVar37 = puVar28 + -lVar62;
                      pbVar50 = pbVar31 + lVar62;
                    }
                  }
                }
              }
              else {
                iVar20 = 0x100 - (uVar30 >> 0x18);
                if (iVar20 != 1) goto LAB_05137a40;
                uVar27 = 0;
                if (bVar49 != 0) goto LAB_05137b64;
              }
              pbVar55 = pbVar55 + uVar27;
            }
            iVar63 = iVar63 + 1;
            puVar37 = (ushort *)((long)puVar56 + (uVar34 & 0xfffffffffffffffe));
            pbVar50 = pbVar59 + iVar3;
            pbVar55 = pbVar54 + iVar3;
            uVar2 = local_20;
            pbVar54 = pbVar55;
            puVar56 = puVar37;
            pbVar59 = pbVar50;
          } while (iVar63 != local_1c);
        }
      }
      else if (uVar30 == 0x3e0) {
        if (0 < local_1c) {
          uVar34 = *(ulong *)(this + 0x118);
          iVar3 = *(int *)(param_1 + 0x38);
          iVar63 = 0;
          uVar2 = local_20;
          pbVar54 = pbVar55;
          puVar56 = puVar37;
          pbVar59 = pbVar50;
          do {
            for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
              bVar49 = *pbVar55;
              uVar52 = (uint)bVar49;
              uVar30 = *(uint *)(lVar23 + (ulong)*pbVar50 * 4);
              if ((int)uVar2 < (int)(uint)bVar49) {
                iVar20 = 0x100 - (uVar30 >> 0x18);
                bVar49 = (byte)uVar2;
                uVar52 = uVar2;
                if (iVar20 == 1) {
LAB_05137d6c:
                  puVar28 = puVar37;
                  pbVar31 = pbVar50;
                  while( true ) {
                    *puVar28 = (ushort)uVar30;
                    pbVar31 = pbVar31 + 1;
                    if (puVar28 + -1 == puVar37 + (-1 - (ulong)(uVar52 - 1))) break;
                    uVar30 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                    puVar28 = puVar28 + -1;
                  }
                  lVar62 = (ulong)(uVar52 - 1) + 1;
                  uVar27 = (ulong)bVar49;
                  pbVar50 = pbVar50 + lVar62;
                  puVar37 = puVar37 + -lVar62;
                }
                else {
LAB_05137c48:
                  if (iVar20 == 0x100) {
                    uVar27 = (ulong)bVar49;
                    puVar37 = puVar37 + -(ulong)bVar49;
                    pbVar50 = pbVar50 + uVar27;
                  }
                  else {
                    puVar28 = puVar37 + -1;
                    pbVar31 = pbVar50 + 1;
                    uVar51 = (int)((CONCAT22(*puVar37,*puVar37) & 0x3e07c1f) * (iVar20 >> 3)) >> 5 &
                             0x3e07c1f;
                    *puVar37 = ((ushort)uVar51 | (ushort)(uVar51 >> 0x10)) + (short)uVar30;
                    if ((int)uVar52 < 2) {
                      uVar27 = (ulong)bVar49;
                      puVar37 = puVar28;
                      pbVar50 = pbVar31;
                    }
                    else {
                      pbVar40 = pbVar31;
                      puVar37 = puVar28;
                      do {
                        pbVar45 = pbVar40 + 1;
                        uVar51 = *(uint *)(lVar23 + (ulong)*pbVar40 * 4);
                        uVar30 = (int)((CONCAT22(*puVar37,*puVar37) & 0x3e07c1f) *
                                      (int)(0x100 - (ulong)(uVar51 >> 0x18) >> 3)) >> 5 & 0x3e07c1f;
                        *puVar37 = ((ushort)uVar30 | (ushort)(uVar30 >> 0x10)) + (short)uVar51;
                        pbVar40 = pbVar45;
                        puVar37 = puVar37 + -1;
                      } while (pbVar45 != pbVar50 + (ulong)(uVar52 - 2) + 2);
                      lVar62 = (ulong)(uVar52 - 2) + 1;
                      uVar27 = (ulong)bVar49;
                      puVar37 = puVar28 + -lVar62;
                      pbVar50 = pbVar31 + lVar62;
                    }
                  }
                }
              }
              else {
                iVar20 = 0x100 - (uVar30 >> 0x18);
                if (iVar20 != 1) goto LAB_05137c48;
                uVar27 = 0;
                if (bVar49 != 0) goto LAB_05137d6c;
              }
              pbVar55 = pbVar55 + uVar27;
            }
            iVar63 = iVar63 + 1;
            puVar37 = (ushort *)((long)puVar56 + (uVar34 & 0xfffffffffffffffe));
            pbVar50 = pbVar59 + iVar3;
            pbVar55 = pbVar54 + iVar3;
            uVar2 = local_20;
            pbVar54 = pbVar55;
            puVar56 = puVar37;
            pbVar59 = pbVar50;
          } while (iVar63 != local_1c);
        }
      }
      else if (0 < local_1c) {
        uVar34 = *(ulong *)(this + 0x118);
        iVar3 = *(int *)(param_1 + 0x38);
        iVar63 = 0;
        uVar51 = local_20;
        pbVar54 = pbVar55;
        puVar56 = puVar37;
        pbVar59 = pbVar50;
        do {
          for (; 0 < (int)uVar51; uVar51 = uVar51 - uVar57) {
            bVar49 = *pbVar55;
            uVar57 = (uint)bVar49;
            uVar44 = *(uint *)(lVar23 + (ulong)*pbVar50 * 4);
            if ((int)uVar51 < (int)(uint)bVar49) {
              iVar20 = 0x100 - (uVar44 >> 0x18);
              bVar49 = (byte)uVar51;
              uVar57 = uVar51;
              if (iVar20 == 1) {
LAB_0513688c:
                puVar28 = puVar37;
                pbVar31 = pbVar50;
                while( true ) {
                  *puVar28 = (ushort)uVar44;
                  pbVar31 = pbVar31 + 1;
                  if (puVar28 + -1 == puVar37 + (-1 - (ulong)(uVar57 - 1))) break;
                  uVar44 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                  puVar28 = puVar28 + -1;
                }
                lVar62 = (ulong)(uVar57 - 1) + 1;
                uVar27 = (ulong)bVar49;
                pbVar50 = pbVar50 + lVar62;
                puVar37 = puVar37 + -lVar62;
              }
              else {
LAB_05136750:
                if (iVar20 == 0x100) {
                  uVar27 = (ulong)bVar49;
                  puVar37 = puVar37 + -(ulong)bVar49;
                  pbVar50 = pbVar50 + uVar27;
                }
                else {
                  pbVar31 = pbVar50 + 1;
                  puVar28 = puVar37 + -1;
                  uVar43 = (uint)*puVar37;
                  *puVar37 = (uVar17 & (ushort)(iVar20 * (uVar43 & uVar2) >> 8)) +
                             (uVar6 & (ushort)(iVar20 * (uVar43 & uVar30) >> 8)) + (short)uVar44 +
                             (uVar18 & (ushort)(iVar20 * (uVar43 & uVar52) >> 8));
                  if ((int)uVar57 < 2) {
                    uVar27 = (ulong)bVar49;
                    puVar37 = puVar28;
                    pbVar50 = pbVar31;
                  }
                  else {
                    pbVar40 = pbVar31;
                    puVar37 = puVar28;
                    do {
                      pbVar45 = pbVar40 + 1;
                      uVar43 = (uint)*puVar37;
                      uVar44 = *(uint *)(lVar23 + (ulong)*pbVar40 * 4);
                      iVar20 = 0x100 - (uVar44 >> 0x18);
                      *puVar37 = (uVar17 & (ushort)((uVar43 & uVar2) * iVar20 >> 8)) +
                                 (uVar6 & (ushort)((uVar43 & uVar30) * iVar20 >> 8)) + (short)uVar44
                                 + (uVar18 & (ushort)((uVar43 & uVar52) * iVar20 >> 8));
                      pbVar40 = pbVar45;
                      puVar37 = puVar37 + -1;
                    } while (pbVar45 != pbVar50 + (ulong)(uVar57 - 2) + 2);
                    lVar62 = (ulong)(uVar57 - 2) + 1;
                    uVar27 = (ulong)bVar49;
                    puVar37 = puVar28 + -lVar62;
                    pbVar50 = pbVar31 + lVar62;
                  }
                }
              }
            }
            else {
              iVar20 = 0x100 - (uVar44 >> 0x18);
              if (iVar20 != 1) goto LAB_05136750;
              uVar27 = 0;
              if (bVar49 != 0) goto LAB_0513688c;
            }
            pbVar55 = pbVar55 + uVar27;
          }
          iVar63 = iVar63 + 1;
          puVar37 = (ushort *)((long)puVar56 + (uVar34 & 0xfffffffffffffffe));
          pbVar50 = pbVar59 + iVar3;
          pbVar55 = pbVar54 + iVar3;
          uVar51 = local_20;
          pbVar54 = pbVar55;
          puVar56 = puVar37;
          pbVar59 = pbVar50;
        } while (iVar63 != local_1c);
      }
    }
    else if (*(int *)(this + 0x134) == 0x20) {
      pbVar55 = (byte *)(lVar24 + lVar1);
      puVar32 = (ulong *)(*(long *)(this + 0x120) +
                         (((ulong)(lVar62 * *(long *)(this + 0x118)) >> 2) + (long)iVar63) * 8);
      uVar2 = *(uint *)(this + 0x138);
      uVar30 = *(uint *)(this + 0x13c);
      uVar52 = *(uint *)(this + 0x140);
      Color::Color(aCStack_18,1);
      cVar19 = Sexy::operator==(param_5,aCStack_18);
      if (cVar19 == '\0') {
        iVar66 = *(int *)(param_5 + 0xc);
        iVar63 = (iVar66 * *(int *)(param_5 + 4)) / 0xff;
        iVar3 = (iVar66 * *(int *)(param_5 + 8)) / 0xff;
        iVar20 = (iVar66 * *(int *)param_5) / 0xff;
        if ((iVar63 == iVar3) && (iVar20 == iVar63)) {
          if (0 < local_1c) {
            lVar62 = (long)iVar20;
            iVar3 = *(int *)(param_1 + 0x38);
            iVar63 = 0;
            do {
              if (0 < (int)local_20) {
                pbVar54 = pbVar50;
                puVar42 = puVar32;
                pbVar59 = pbVar55;
                uVar2 = local_20;
                do {
                  bVar49 = *pbVar59;
                  uVar52 = (uint)bVar49;
                  uVar30 = *(uint *)(lVar23 + (ulong)*pbVar54 * 4);
                  uVar34 = (ulong)uVar30;
                  uVar30 = uVar30 >> 0x18;
                  if ((int)uVar2 < (int)(uint)bVar49) {
                    bVar49 = (byte)uVar2;
                    uVar52 = uVar2;
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) {
LAB_051372f0:
                      if (uVar30 == 0) {
                        uVar34 = (ulong)bVar49;
                        puVar42 = puVar42 + -(ulong)bVar49;
                        pbVar54 = pbVar54 + uVar34;
                      }
                      else if (uVar52 == 0) {
                        uVar34 = (ulong)bVar49;
                      }
                      else {
                        puVar41 = puVar42;
                        pbVar31 = pbVar54;
                        while( true ) {
                          lVar24 = (long)(0x100 - (int)(((uVar34 >> 0x18) * (long)iVar66) / 0xff));
                          pbVar31 = pbVar31 + 1;
                          *puVar41 = ((uVar34 & 0xff00) * lVar62 + lVar24 * (*puVar41 & 0xff00) >> 8
                                     & 0xff00) +
                                     ((ulong)((uint)uVar34 & 0xff00ff) * lVar62 +
                                      lVar24 * (*puVar41 & 0xff00ff) >> 8 & 0xff00ff);
                          if (puVar41 + -1 == puVar42 + (-1 - (ulong)(uVar52 - 1))) break;
                          uVar34 = (ulong)*(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                          puVar41 = puVar41 + -1;
                        }
                        lVar24 = (ulong)(uVar52 - 1) + 1;
                        uVar34 = (ulong)bVar49;
                        pbVar54 = pbVar54 + lVar24;
                        puVar42 = puVar42 + -lVar24;
                      }
                    }
                    else {
LAB_05137220:
                      puVar41 = puVar42;
                      pbVar31 = pbVar54;
                      while( true ) {
                        pbVar31 = pbVar31 + 1;
                        *puVar41 = ((uVar34 & 0xff00) * lVar62 >> 8 & 0xff00) +
                                   ((ulong)((uint)uVar34 & 0xff00ff) * lVar62 >> 8 & 0xff00ff);
                        if (puVar41 + -1 == puVar42 + (-1 - (ulong)(uVar52 - 1))) break;
                        uVar34 = (ulong)*(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                        puVar41 = puVar41 + -1;
                      }
                      lVar24 = (ulong)(uVar52 - 1) + 1;
                      uVar34 = (ulong)bVar49;
                      pbVar54 = pbVar54 + lVar24;
                      puVar42 = puVar42 + -lVar24;
                    }
                  }
                  else {
                    if ((uVar30 != 0xff) || (iVar66 != 0xff)) goto LAB_051372f0;
                    if (bVar49 != 0) goto LAB_05137220;
                    uVar34 = 0;
                  }
                  uVar2 = uVar2 - uVar52;
                  pbVar59 = pbVar59 + uVar34;
                } while (0 < (int)uVar2);
              }
              iVar63 = iVar63 + 1;
              pbVar50 = pbVar50 + iVar3;
              pbVar55 = pbVar55 + iVar3;
              puVar32 = puVar32 + (*(ulong *)(this + 0x118) >> 2);
            } while (iVar63 != local_1c);
          }
        }
        else if (0 < local_1c) {
          iVar4 = *(int *)(param_1 + 0x38);
          iVar92 = 0;
          uVar53 = (ulong)uVar2;
          uVar27 = (ulong)uVar30;
          uVar34 = (ulong)uVar52;
          do {
            if (0 < (int)local_20) {
              pbVar54 = pbVar50;
              puVar42 = puVar32;
              pbVar59 = pbVar55;
              uVar51 = local_20;
              do {
                bVar49 = *pbVar59;
                uVar43 = (uint)bVar49;
                uVar44 = *(uint *)(lVar23 + (ulong)*pbVar54 * 4);
                uVar57 = uVar44 >> 0x18;
                if ((int)uVar51 < (int)(uint)bVar49) {
                  bVar49 = (byte)uVar51;
                  uVar43 = uVar51;
                  if ((uVar57 != 0xff) || (uVar39 = uVar51, iVar66 != 0xff)) {
LAB_05137570:
                    if (uVar57 == 0) {
                      uVar35 = (ulong)bVar49;
                      puVar42 = puVar42 + -(ulong)bVar49;
                      pbVar54 = pbVar54 + uVar35;
                    }
                    else if (uVar43 == 0) {
                      uVar35 = (ulong)bVar49;
                    }
                    else {
                      puVar41 = puVar42;
                      pbVar31 = pbVar54;
                      while( true ) {
                        uVar35 = *puVar41;
                        pbVar31 = pbVar31 + 1;
                        lVar62 = (long)(0x100 - (int)(((ulong)(uVar44 >> 0x18) * (long)iVar66) /
                                                     0xff));
                        *puVar41 = (uVar27 & (ulong)(uVar44 & uVar30) * (long)iVar63 +
                                             lVar62 * (uVar35 & uVar27) >> 8) +
                                   (uVar53 & (ulong)(uVar44 & uVar2) * (long)iVar20 +
                                             lVar62 * (uVar35 & uVar53) >> 8) +
                                   (uVar34 & (ulong)(uVar44 & uVar52) * (long)iVar3 +
                                             lVar62 * (uVar35 & uVar34) >> 8);
                        if (puVar41 + -1 == puVar42 + (-1 - (ulong)(uVar43 - 1))) break;
                        uVar44 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                        puVar41 = puVar41 + -1;
                      }
                      uVar35 = (ulong)bVar49;
                      lVar62 = (ulong)(uVar43 - 1) + 1;
                      pbVar54 = pbVar54 + lVar62;
                      puVar42 = puVar42 + -lVar62;
                    }
                  }
                  else {
LAB_05137484:
                    uVar43 = uVar39;
                    puVar41 = puVar42;
                    pbVar31 = pbVar54;
                    while( true ) {
                      pbVar31 = pbVar31 + 1;
                      *puVar41 = (uVar27 & (ulong)(uVar44 & uVar30) * (long)iVar63 >> 8) +
                                 (uVar53 & (ulong)(uVar44 & uVar2) * (long)iVar20 >> 8) +
                                 (uVar34 & (ulong)(uVar44 & uVar52) * (long)iVar3 >> 8);
                      if (puVar41 + -1 == puVar42 + (-1 - (ulong)(uVar43 - 1))) break;
                      uVar44 = *(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                      puVar41 = puVar41 + -1;
                    }
                    lVar62 = (ulong)(uVar43 - 1) + 1;
                    uVar35 = (ulong)bVar49;
                    pbVar54 = pbVar54 + lVar62;
                    puVar42 = puVar42 + -lVar62;
                  }
                }
                else {
                  if ((uVar57 != 0xff) || (iVar66 != 0xff)) goto LAB_05137570;
                  uVar39 = (uint)bVar49;
                  if (bVar49 != 0) goto LAB_05137484;
                  uVar35 = 0;
                }
                uVar51 = uVar51 - uVar43;
                pbVar59 = pbVar59 + uVar35;
              } while (0 < (int)uVar51);
            }
            iVar92 = iVar92 + 1;
            pbVar50 = pbVar50 + iVar4;
            pbVar55 = pbVar55 + iVar4;
            puVar32 = puVar32 + (*(ulong *)(this + 0x118) >> 2);
          } while (iVar92 != local_1c);
        }
      }
      else if (0 < local_1c) {
        iVar3 = *(int *)(param_1 + 0x38);
        iVar63 = 0;
        uVar2 = local_20;
        pbVar54 = pbVar55;
        puVar42 = puVar32;
        pbVar59 = pbVar50;
        do {
          for (; 0 < (int)uVar2; uVar2 = uVar2 - uVar52) {
            bVar49 = *pbVar55;
            uVar52 = (uint)bVar49;
            uVar30 = *(uint *)(lVar23 + (ulong)*pbVar50 * 4);
            uVar34 = (ulong)uVar30;
            uVar30 = uVar30 >> 0x18;
            if ((int)uVar2 < (int)(uint)bVar49) {
              iVar20 = 0x100 - uVar30;
              bVar49 = (byte)uVar2;
              uVar52 = uVar2;
              if (iVar20 == 1) {
LAB_05136d4c:
                puVar41 = puVar32;
                pbVar31 = pbVar50;
                while( true ) {
                  *puVar41 = uVar34;
                  pbVar31 = pbVar31 + 1;
                  if (puVar41 + -1 == puVar32 + (-1 - (ulong)(uVar52 - 1))) break;
                  uVar34 = (ulong)*(uint *)(lVar23 + (ulong)*pbVar31 * 4);
                  puVar41 = puVar41 + -1;
                }
                lVar62 = (ulong)(uVar52 - 1) + 1;
                uVar27 = (ulong)bVar49;
                pbVar50 = pbVar50 + lVar62;
                puVar32 = puVar32 + -lVar62;
              }
              else {
LAB_05136c1c:
                if (iVar20 == 0x100) {
                  uVar27 = (ulong)bVar49;
                  puVar32 = puVar32 + -(ulong)bVar49;
                  pbVar50 = pbVar50 + uVar27;
                }
                else {
                  puVar41 = puVar32 + -1;
                  pbVar31 = pbVar50 + 1;
                  *puVar32 = ((long)iVar20 * (*puVar32 & 0xff00ff) >> 8 & 0xff00ff) +
                             ((long)iVar20 * (*puVar32 & 0xff00) >> 8 & 0xff00) + uVar34;
                  if ((int)uVar52 < 2) {
                    uVar27 = (ulong)bVar49;
                    puVar32 = puVar41;
                    pbVar50 = pbVar31;
                  }
                  else {
                    pbVar40 = pbVar31;
                    puVar32 = puVar41;
                    do {
                      pbVar45 = pbVar40 + 1;
                      uVar30 = *(uint *)(lVar23 + (ulong)*pbVar40 * 4);
                      uVar34 = (ulong)(0x100 - (uVar30 >> 0x18));
                      *puVar32 = ((*puVar32 & 0xff00ff) * uVar34 >> 8 & 0xff00ff) +
                                 ((*puVar32 & 0xff00) * uVar34 >> 8 & 0xff00) + (ulong)uVar30;
                      pbVar40 = pbVar45;
                      puVar32 = puVar32 + -1;
                    } while (pbVar45 != pbVar50 + (ulong)(uVar52 - 2) + 2);
                    lVar62 = (ulong)(uVar52 - 2) + 1;
                    uVar27 = (ulong)bVar49;
                    puVar32 = puVar41 + -lVar62;
                    pbVar50 = pbVar31 + lVar62;
                  }
                }
              }
            }
            else {
              iVar20 = 0x100 - uVar30;
              if (iVar20 != 1) goto LAB_05136c1c;
              uVar27 = 0;
              if (bVar49 != 0) goto LAB_05136d4c;
            }
            pbVar55 = pbVar55 + uVar27;
          }
          iVar63 = iVar63 + 1;
          pbVar50 = pbVar59 + iVar3;
          pbVar55 = pbVar54 + iVar3;
          puVar32 = puVar42 + (*(ulong *)(this + 0x118) >> 2);
          uVar2 = local_20;
          pbVar54 = pbVar55;
          puVar42 = puVar32;
          pbVar59 = pbVar50;
        } while (iVar63 != local_1c);
      }
    }
  }
  (**(code **)(*(long *)this + 0x208))(this);
LAB_05136544:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::AdditiveBltMirror(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color
   const&) */

void __thiscall
Sexy::DeviceImage::AdditiveBltMirror
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  DeviceImage DVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  ulong *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  uint *puVar29;
  byte *pbVar30;
  uint uVar31;
  ulong *puVar32;
  ulong uVar33;
  ushort *puVar34;
  ulong uVar35;
  code *pcVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  byte bVar40;
  int iVar41;
  int iVar42;
  byte *pbVar43;
  uint *puVar44;
  ushort *puVar45;
  ulong *puVar46;
  byte *pbVar47;
  byte *pbVar48;
  ulong local_38;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  DVar10 = this[0xf9];
  local_8 = ___stack_chk_guard;
  param_1[0x28] = (Image)0x1;
  if (DVar10 == (DeviceImage)0x0) {
    Insets::Insets((Insets *)&local_28,(Insets *)param_4);
    uVar3 = local_20;
    plVar15 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
    (**(code **)(*(long *)param_1 + 0x50))(param_1);
    if ((plVar15 != (long *)0x0) &&
       (cVar14 = (**(code **)(*(long *)this + 0x200))(this), cVar14 != '\0')) {
      iVar38 = (uVar3 - 1) + param_2;
      pcVar36 = *(code **)(*plVar15 + 0x58);
      uVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
      lVar17 = (*pcVar36)(plVar15,uVar16);
      iVar9 = local_24;
      iVar42 = local_28;
      if (plVar15[0x10] == 0) {
        iVar2 = *(int *)(param_1 + 0x38);
        (**(code **)(*plVar15 + 0xa0))(plVar15);
        cVar14 = (**(code **)(*(long *)this + 0x200))(this);
        if (cVar14 == '\0') goto LAB_051399dc;
        puVar23 = (uint *)(lVar17 + ((long)iVar42 + (long)(iVar9 * iVar2)) * 4);
        pcVar36 = *(code **)(*plVar15 + 0x68);
        uVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar17 = (*pcVar36)(plVar15,uVar16);
        iVar42 = 0;
        if (*(int *)(this + 0x134) == 0x10) {
          puVar34 = (ushort *)
                    (*(long *)(this + 0x120) +
                    (((ulong)((long)param_3 * *(long *)(this + 0x118)) >> 1) + (long)iVar38) * 2);
          pbVar19 = (byte *)(lVar17 + (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38)));
          uVar3 = *(uint *)(this + 0x138);
          uVar4 = *(uint *)(this + 0x13c);
          uVar5 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar17 + 0x1c);
          uVar35 = (ulong)uVar6;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar17 + 0x20);
          uVar37 = (ulong)uVar7;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar8 = *(uint *)(lVar17 + 0x24);
          uVar33 = (ulong)uVar8;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = *(long *)(lVar17 + 0x28);
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar20 = *(long *)(lVar17 + 0x30);
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar17 = *(long *)(lVar17 + 0x38);
          Color::Color(aCStack_18,1);
          cVar14 = Sexy::operator==(param_5,aCStack_18);
          if (cVar14 == '\0') {
            iVar38 = *(int *)(param_5 + 0xc);
            iVar42 = *(int *)(param_5 + 8);
            iVar9 = *(int *)param_5;
            iVar2 = *(int *)(param_5 + 4);
            if (0 < local_1c) {
              iVar11 = *(int *)(param_1 + 0x38);
              iVar41 = 0;
              uVar18 = *(ulong *)(this + 0x118);
              lVar21 = NEON_shl((long)iVar11,2);
              uVar12 = local_20;
              pbVar48 = pbVar19;
              puVar45 = puVar34;
              puVar44 = puVar23;
              do {
                for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar22) {
                  bVar40 = *pbVar19;
                  uVar22 = (uint)bVar40;
                  if ((int)uVar12 < (int)uVar22) {
                    bVar40 = (byte)uVar12;
                    uVar31 = uVar12;
                    if ((*puVar23 & 0xffffff) == 0) goto LAB_0513ae30;
LAB_0513ae7c:
                    uVar22 = uVar31;
                    lVar1 = (ulong)(uVar22 - 1) + 1;
                    puVar29 = puVar23 + lVar1;
                    puVar24 = puVar23;
                    puVar27 = puVar34;
                    do {
                      puVar23 = puVar24 + 1;
                      uVar31 = *puVar24;
                      uVar25 = (ulong)*puVar27;
                      *puVar27 = (ushort)(*(int *)(lVar20 + (((uVar25 & uVar4) >> (uVar37 & 0x3f)) +
                                                            ((ulong)((uVar31 & uVar4) >>
                                                                    (uVar37 & 0x3f)) *
                                                             (long)((iVar38 * iVar2) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar7 & 0x1f)) |
                                 (ushort)(*(int *)(lVar39 + (((uVar25 & uVar3) >> (uVar35 & 0x3f)) +
                                                            ((ulong)((uVar31 & uVar3) >>
                                                                    (uVar35 & 0x3f)) *
                                                             (long)((iVar38 * iVar9) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar6 & 0x1f)) |
                                 (ushort)(*(int *)(lVar17 + (((uVar25 & uVar5) >> (uVar33 & 0x3f)) +
                                                            ((ulong)((uVar31 & uVar5) >>
                                                                    (uVar33 & 0x3f)) *
                                                             (long)((iVar38 * iVar42) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar8 & 0x1f));
                      puVar24 = puVar23;
                      puVar27 = puVar27 + -1;
                    } while (puVar23 != puVar29);
                    puVar34 = puVar34 + -lVar1;
                    uVar25 = (ulong)bVar40;
                  }
                  else {
                    uVar31 = (uint)bVar40;
                    if ((*puVar23 & 0xffffff) == 0) {
LAB_0513ae30:
                      uVar22 = uVar31;
                      uVar25 = (ulong)bVar40;
                      puVar23 = puVar23 + uVar25;
                      puVar34 = puVar34 + -uVar25;
                    }
                    else {
                      uVar25 = 0;
                      if (bVar40 != 0) goto LAB_0513ae7c;
                    }
                  }
                  pbVar19 = pbVar19 + uVar25;
                }
                iVar41 = iVar41 + 1;
                puVar34 = (ushort *)((long)puVar45 + (uVar18 & 0xfffffffffffffffe));
                puVar23 = (uint *)((long)puVar44 + lVar21);
                pbVar19 = pbVar48 + iVar11;
                uVar12 = local_20;
                pbVar48 = pbVar19;
                puVar45 = puVar34;
                puVar44 = puVar23;
              } while (iVar41 != local_1c);
            }
          }
          else if (0 < local_1c) {
            iVar38 = *(int *)(param_1 + 0x38);
            uVar18 = *(ulong *)(this + 0x118);
            lVar21 = NEON_shl((long)iVar38,2);
            uVar12 = local_20;
            pbVar48 = pbVar19;
            puVar45 = puVar34;
            puVar44 = puVar23;
            do {
              for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar22) {
                bVar40 = *pbVar19;
                if ((int)uVar12 < (int)(uint)bVar40) {
                  bVar40 = (byte)uVar12;
                  uVar22 = uVar12;
                  if ((*puVar23 & 0xffffff) == 0) goto LAB_0513ac70;
LAB_0513acb0:
                  puVar27 = puVar34;
                  puVar29 = puVar23;
                  do {
                    uVar31 = *puVar29;
                    uVar25 = (ulong)*puVar27;
                    puVar28 = puVar27 + -1;
                    *puVar27 = (ushort)(*(int *)(lVar20 + ((uVar25 & uVar4) +
                                                           (ulong)(uVar31 & uVar4) >>
                                                          (uVar37 & 0x3f)) * 4) <<
                                       (ulong)(uVar7 & 0x1f)) |
                               (ushort)(*(int *)(lVar39 + ((uVar25 & uVar3) +
                                                           (ulong)(uVar31 & uVar3) >>
                                                          (uVar35 & 0x3f)) * 4) <<
                                       (ulong)(uVar6 & 0x1f)) |
                               (ushort)(*(int *)(lVar17 + ((uVar25 & uVar5) +
                                                           (ulong)(uVar31 & uVar5) >>
                                                          (uVar33 & 0x3f)) * 4) <<
                                       (ulong)(uVar8 & 0x1f));
                    puVar27 = puVar28;
                    puVar29 = puVar29 + 1;
                  } while (puVar28 != puVar34 + (-1 - (ulong)(uVar22 - 1)));
                  lVar1 = (ulong)(uVar22 - 1) + 1;
                  uVar25 = (ulong)bVar40;
                  puVar23 = puVar23 + lVar1;
                  puVar34 = puVar34 + -lVar1;
                }
                else {
                  uVar22 = (uint)bVar40;
                  if ((*puVar23 & 0xffffff) == 0) {
LAB_0513ac70:
                    uVar25 = (ulong)bVar40;
                    puVar23 = puVar23 + uVar25;
                    puVar34 = puVar34 + -uVar25;
                  }
                  else {
                    if (bVar40 != 0) goto LAB_0513acb0;
                    uVar25 = 0;
                    uVar22 = 0;
                  }
                }
                pbVar19 = pbVar19 + uVar25;
              }
              iVar42 = iVar42 + 1;
              puVar34 = (ushort *)((long)puVar45 + (uVar18 & 0xfffffffffffffffe));
              puVar23 = (uint *)((long)puVar44 + lVar21);
              pbVar19 = pbVar48 + iVar38;
              uVar12 = local_20;
              pbVar48 = pbVar19;
              puVar45 = puVar34;
              puVar44 = puVar23;
            } while (iVar42 != local_1c);
          }
        }
        else if (*(int *)(this + 0x134) == 0x20) {
          puVar32 = (ulong *)(*(long *)(this + 0x120) +
                             (((ulong)((long)param_3 * *(long *)(this + 0x118)) >> 2) + (long)iVar38
                             ) * 8);
          pbVar19 = (byte *)(lVar17 + (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38)));
          uVar3 = *(uint *)(this + 0x138);
          uVar4 = *(uint *)(this + 0x13c);
          uVar5 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar17 + 0x1c);
          uVar35 = (ulong)uVar6;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar17 + 0x20);
          uVar37 = (ulong)uVar7;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar8 = *(uint *)(lVar17 + 0x24);
          uVar33 = (ulong)uVar8;
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = *(long *)(lVar17 + 0x28);
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar20 = *(long *)(lVar17 + 0x30);
          lVar17 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar17 = *(long *)(lVar17 + 0x38);
          Color::Color(aCStack_18,1);
          cVar14 = Sexy::operator==(param_5,aCStack_18);
          if (cVar14 == '\0') {
            iVar38 = *(int *)(param_5 + 0xc);
            iVar9 = *(int *)(param_5 + 8);
            iVar2 = *(int *)param_5;
            iVar41 = *(int *)(param_5 + 4);
            if (0 < local_1c) {
              iVar11 = *(int *)(param_1 + 0x38);
              lVar21 = NEON_shl((long)iVar11,2);
              uVar12 = local_20;
              pbVar48 = pbVar19;
              puVar46 = puVar32;
              puVar44 = puVar23;
              do {
                for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar22) {
                  bVar40 = *pbVar19;
                  uVar22 = (uint)bVar40;
                  if ((int)uVar12 < (int)uVar22) {
                    bVar40 = (byte)uVar12;
                    uVar31 = uVar12;
                    if ((*puVar23 & 0xffffff) == 0) goto LAB_0513b000;
LAB_0513b04c:
                    uVar22 = uVar31;
                    lVar1 = (ulong)(uVar22 - 1) + 1;
                    puVar29 = puVar23 + lVar1;
                    puVar24 = puVar23;
                    puVar26 = puVar32;
                    do {
                      puVar23 = puVar24 + 1;
                      uVar31 = *puVar24;
                      uVar18 = *puVar26;
                      *puVar26 = (long)(*(int *)(lVar20 + (((uVar18 & uVar4) >> (uVar37 & 0x3f)) +
                                                          ((ulong)((uVar31 & uVar4) >>
                                                                  (uVar37 & 0x3f)) *
                                                           (long)((iVar38 * iVar41) / 0xff) >> 8)) *
                                                          4) << (ulong)(uVar7 & 0x1f) |
                                        *(int *)(lVar39 + (((uVar18 & uVar3) >> (uVar35 & 0x3f)) +
                                                          ((ulong)((uVar31 & uVar3) >>
                                                                  (uVar35 & 0x3f)) *
                                                           (long)((iVar38 * iVar2) / 0xff) >> 8)) *
                                                          4) << (ulong)(uVar6 & 0x1f) |
                                       *(int *)(lVar17 + (((uVar18 & uVar5) >> (uVar33 & 0x3f)) +
                                                         ((ulong)((uVar31 & uVar5) >>
                                                                 (uVar33 & 0x3f)) *
                                                          (long)((iVar38 * iVar9) / 0xff) >> 8)) * 4
                                               ) << (ulong)(uVar8 & 0x1f));
                      puVar24 = puVar23;
                      puVar26 = puVar26 + -1;
                    } while (puVar23 != puVar29);
                    puVar32 = puVar32 + -lVar1;
                    uVar18 = (ulong)bVar40;
                  }
                  else {
                    uVar31 = (uint)bVar40;
                    if ((*puVar23 & 0xffffff) == 0) {
LAB_0513b000:
                      uVar22 = uVar31;
                      uVar18 = (ulong)bVar40;
                      puVar23 = puVar23 + uVar18;
                      puVar32 = puVar32 + -uVar18;
                    }
                    else {
                      uVar18 = 0;
                      if (bVar40 != 0) goto LAB_0513b04c;
                    }
                  }
                  pbVar19 = pbVar19 + uVar18;
                }
                iVar42 = iVar42 + 1;
                puVar23 = (uint *)((long)puVar44 + lVar21);
                pbVar19 = pbVar48 + iVar11;
                puVar32 = puVar46 + (*(ulong *)(this + 0x118) >> 2);
                uVar12 = local_20;
                pbVar48 = pbVar19;
                puVar46 = puVar32;
                puVar44 = puVar23;
              } while (iVar42 != local_1c);
            }
          }
          else if (0 < local_1c) {
            iVar42 = *(int *)(param_1 + 0x38);
            iVar38 = 0;
            lVar21 = NEON_shl((long)iVar42,2);
            uVar12 = local_20;
            pbVar48 = pbVar19;
            puVar46 = puVar32;
            puVar44 = puVar23;
            do {
              for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar22) {
                bVar40 = *pbVar19;
                if ((int)uVar12 < (int)(uint)bVar40) {
                  bVar40 = (byte)uVar12;
                  uVar22 = uVar12;
                  if ((*puVar23 & 0xffffff) == 0) goto LAB_05139e3c;
LAB_05139e7c:
                  lVar1 = (ulong)(uVar22 - 1) + 1;
                  puVar29 = puVar23 + lVar1;
                  puVar24 = puVar23;
                  puVar26 = puVar32;
                  do {
                    puVar23 = puVar24 + 1;
                    uVar31 = *puVar24;
                    uVar18 = *puVar26;
                    *puVar26 = (long)(*(int *)(lVar20 + ((uVar18 & uVar4) + (ulong)(uVar31 & uVar4)
                                                        >> (uVar37 & 0x3f)) * 4) <<
                                      (ulong)(uVar7 & 0x1f) |
                                      *(int *)(lVar39 + ((uVar18 & uVar3) + (ulong)(uVar31 & uVar3)
                                                        >> (uVar35 & 0x3f)) * 4) <<
                                      (ulong)(uVar6 & 0x1f) |
                                     *(int *)(lVar17 + ((uVar18 & uVar5) + (ulong)(uVar31 & uVar5)
                                                       >> (uVar33 & 0x3f)) * 4) <<
                                     (ulong)(uVar8 & 0x1f));
                    puVar24 = puVar23;
                    puVar26 = puVar26 + -1;
                  } while (puVar23 != puVar29);
                  puVar32 = puVar32 + -lVar1;
                  uVar18 = (ulong)bVar40;
                }
                else {
                  uVar22 = (uint)bVar40;
                  if ((*puVar23 & 0xffffff) == 0) {
LAB_05139e3c:
                    uVar18 = (ulong)bVar40;
                    puVar23 = puVar23 + uVar18;
                    puVar32 = puVar32 + -uVar18;
                  }
                  else {
                    if (bVar40 != 0) goto LAB_05139e7c;
                    uVar18 = 0;
                    uVar22 = 0;
                  }
                }
                pbVar19 = pbVar19 + uVar18;
              }
              iVar38 = iVar38 + 1;
              puVar23 = (uint *)((long)puVar44 + lVar21);
              pbVar19 = pbVar48 + iVar42;
              puVar32 = puVar46 + (*(ulong *)(this + 0x118) >> 2);
              uVar12 = local_20;
              pbVar48 = pbVar19;
              puVar46 = puVar32;
              puVar44 = puVar23;
            } while (iVar38 != local_1c);
          }
        }
      }
      else {
        lVar39 = plVar15[0x11];
        iVar2 = *(int *)(param_1 + 0x38);
        (**(code **)(*plVar15 + 0xa0))(plVar15);
        cVar14 = (**(code **)(*(long *)this + 0x200))(this);
        if (cVar14 == '\0') goto LAB_051399dc;
        pcVar36 = *(code **)(*plVar15 + 0x68);
        pbVar19 = (byte *)(lVar39 + (long)iVar42 + (long)(iVar9 * iVar2));
        uVar16 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar39 = (*pcVar36)(plVar15,uVar16);
        if (*(int *)(this + 0x134) == 0x10) {
          puVar34 = (ushort *)
                    (*(long *)(this + 0x120) +
                    (((ulong)((long)param_3 * *(long *)(this + 0x118)) >> 1) + (long)iVar38) * 2);
          pbVar48 = (byte *)(lVar39 + (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38)));
          uVar3 = *(uint *)(this + 0x138);
          uVar4 = *(uint *)(this + 0x13c);
          uVar5 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar39 + 0x1c);
          uVar33 = (ulong)uVar6;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar39 + 0x20);
          uVar35 = (ulong)uVar7;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar8 = *(uint *)(lVar39 + 0x24);
          uVar37 = (ulong)uVar8;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar20 = *(long *)(lVar39 + 0x28);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar21 = *(long *)(lVar39 + 0x30);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = *(long *)(lVar39 + 0x38);
          Color::Color(aCStack_18,1);
          cVar14 = Sexy::operator==(param_5,aCStack_18);
          if (cVar14 == '\0') {
            iVar38 = *(int *)(param_5 + 0xc);
            iVar42 = *(int *)(param_5 + 8);
            iVar9 = *(int *)param_5;
            iVar2 = *(int *)(param_5 + 4);
            if (0 < local_1c) {
              uVar18 = *(ulong *)(this + 0x118);
              iVar11 = *(int *)(param_1 + 0x38);
              iVar41 = 0;
              uVar12 = local_20;
              pbVar47 = pbVar48;
              puVar45 = puVar34;
              pbVar43 = pbVar19;
              do {
                for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar31) {
                  bVar40 = *pbVar48;
                  uVar31 = (uint)bVar40;
                  local_38 = (ulong)(uint)bVar40;
                  uVar22 = *(uint *)(lVar17 + (ulong)*pbVar19 * 4);
                  if ((int)uVar12 < (int)uVar31) {
                    local_38 = (ulong)uVar12 & 0xffffffff000000ff;
                    uVar13 = uVar12;
                    if ((uVar22 & 0xffffff) == 0) goto LAB_0513a698;
LAB_0513a6f0:
                    uVar31 = uVar13;
                    puVar27 = puVar34;
                    pbVar30 = pbVar19;
                    while( true ) {
                      uVar25 = (ulong)*puVar27;
                      pbVar30 = pbVar30 + 1;
                      *puVar27 = (ushort)(*(int *)(lVar21 + (((uVar25 & uVar4) >> (uVar35 & 0x3f)) +
                                                            ((ulong)((uVar22 & uVar4) >>
                                                                    (uVar35 & 0x3f)) *
                                                             (long)((iVar38 * iVar2) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar7 & 0x1f)) |
                                 (ushort)(*(int *)(lVar20 + (((uVar25 & uVar3) >> (uVar33 & 0x3f)) +
                                                            ((ulong)((uVar22 & uVar3) >>
                                                                    (uVar33 & 0x3f)) *
                                                             (long)((iVar38 * iVar9) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar6 & 0x1f)) |
                                 (ushort)(*(int *)(lVar39 + (((uVar25 & uVar5) >> (uVar37 & 0x3f)) +
                                                            ((ulong)((uVar22 & uVar5) >>
                                                                    (uVar37 & 0x3f)) *
                                                             (long)((iVar38 * iVar42) / 0xff) >> 8))
                                                            * 4) << (ulong)(uVar8 & 0x1f));
                      if (puVar27 + -1 == puVar34 + (-1 - (ulong)(uVar31 - 1))) break;
                      uVar22 = *(uint *)(lVar17 + (ulong)*pbVar30 * 4);
                      puVar27 = puVar27 + -1;
                    }
                    lVar1 = (ulong)(uVar31 - 1) + 1;
                    pbVar19 = pbVar19 + lVar1;
                    puVar34 = puVar34 + -lVar1;
                  }
                  else {
                    uVar13 = (uint)bVar40;
                    if ((uVar22 & 0xffffff) == 0) {
LAB_0513a698:
                      uVar31 = uVar13;
                      puVar34 = puVar34 + -local_38;
                      pbVar19 = pbVar19 + local_38;
                    }
                    else {
                      if (bVar40 != 0) goto LAB_0513a6f0;
                      local_38 = 0;
                    }
                  }
                  pbVar48 = pbVar48 + local_38;
                }
                iVar41 = iVar41 + 1;
                puVar34 = (ushort *)((long)puVar45 + (uVar18 & 0xfffffffffffffffe));
                pbVar19 = pbVar43 + iVar11;
                pbVar48 = pbVar47 + iVar11;
                uVar12 = local_20;
                pbVar47 = pbVar48;
                puVar45 = puVar34;
                pbVar43 = pbVar19;
              } while (iVar41 != local_1c);
            }
          }
          else if (0 < local_1c) {
            uVar18 = *(ulong *)(this + 0x118);
            iVar38 = 0;
            iVar42 = *(int *)(param_1 + 0x38);
            uVar12 = local_20;
            pbVar47 = pbVar48;
            puVar45 = puVar34;
            pbVar43 = pbVar19;
            do {
              for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar31) {
                bVar40 = *pbVar48;
                uVar22 = *(uint *)(lVar17 + (ulong)*pbVar19 * 4);
                if ((int)uVar12 < (int)(uint)bVar40) {
                  bVar40 = (byte)uVar12;
                  uVar31 = uVar12;
                  if ((uVar22 & 0xffffff) == 0) goto LAB_0513a108;
LAB_0513a148:
                  puVar27 = puVar34;
                  pbVar30 = pbVar19;
                  while( true ) {
                    uVar25 = (ulong)*puVar27;
                    pbVar30 = pbVar30 + 1;
                    *puVar27 = (ushort)(*(int *)(lVar21 + ((uVar25 & uVar4) +
                                                           (ulong)(uVar22 & uVar4) >>
                                                          (uVar35 & 0x3f)) * 4) <<
                                       (ulong)(uVar7 & 0x1f)) |
                               (ushort)(*(int *)(lVar20 + ((uVar25 & uVar3) +
                                                           (ulong)(uVar22 & uVar3) >>
                                                          (uVar33 & 0x3f)) * 4) <<
                                       (ulong)(uVar6 & 0x1f)) |
                               (ushort)(*(int *)(lVar39 + ((uVar25 & uVar5) +
                                                           (ulong)(uVar22 & uVar5) >>
                                                          (uVar37 & 0x3f)) * 4) <<
                                       (ulong)(uVar8 & 0x1f));
                    if (puVar27 + -1 == puVar34 + (-1 - (ulong)(uVar31 - 1))) break;
                    uVar22 = *(uint *)(lVar17 + (ulong)*pbVar30 * 4);
                    puVar27 = puVar27 + -1;
                  }
                  uVar25 = (ulong)bVar40;
                  lVar1 = (ulong)(uVar31 - 1) + 1;
                  pbVar19 = pbVar19 + lVar1;
                  puVar34 = puVar34 + -lVar1;
                }
                else {
                  uVar31 = (uint)bVar40;
                  if ((uVar22 & 0xffffff) == 0) {
LAB_0513a108:
                    uVar25 = (ulong)bVar40;
                    puVar34 = puVar34 + -(ulong)bVar40;
                    pbVar19 = pbVar19 + uVar25;
                  }
                  else {
                    if (bVar40 != 0) goto LAB_0513a148;
                    uVar25 = 0;
                    uVar31 = 0;
                  }
                }
                pbVar48 = pbVar48 + uVar25;
              }
              iVar38 = iVar38 + 1;
              puVar34 = (ushort *)((long)puVar45 + (uVar18 & 0xfffffffffffffffe));
              pbVar19 = pbVar43 + iVar42;
              pbVar48 = pbVar47 + iVar42;
              uVar12 = local_20;
              pbVar47 = pbVar48;
              puVar45 = puVar34;
              pbVar43 = pbVar19;
            } while (iVar38 != local_1c);
          }
        }
        else if (*(int *)(this + 0x134) == 0x20) {
          puVar32 = (ulong *)(*(long *)(this + 0x120) +
                             (((ulong)((long)param_3 * *(long *)(this + 0x118)) >> 2) + (long)iVar38
                             ) * 8);
          pbVar48 = (byte *)(lVar39 + (long)local_28 + (long)(local_24 * *(int *)(param_1 + 0x38)));
          uVar3 = *(uint *)(this + 0x138);
          uVar4 = *(uint *)(this + 0x13c);
          uVar5 = *(uint *)(this + 0x140);
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))();
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar6 = *(uint *)(lVar39 + 0x1c);
          uVar33 = (ulong)uVar6;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar7 = *(uint *)(lVar39 + 0x20);
          uVar35 = (ulong)uVar7;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar8 = *(uint *)(lVar39 + 0x24);
          uVar37 = (ulong)uVar8;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar20 = *(long *)(lVar39 + 0x28);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar21 = *(long *)(lVar39 + 0x30);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar39 = *(long *)(lVar39 + 0x38);
          Color::Color(aCStack_18,1);
          cVar14 = Sexy::operator==(param_5,aCStack_18);
          if (cVar14 == '\0') {
            iVar38 = *(int *)(param_5 + 0xc);
            iVar42 = *(int *)(param_5 + 8);
            iVar9 = *(int *)param_5;
            iVar2 = *(int *)(param_5 + 4);
            if (0 < local_1c) {
              iVar11 = *(int *)(param_1 + 0x38);
              iVar41 = 0;
              uVar12 = local_20;
              pbVar47 = pbVar48;
              puVar46 = puVar32;
              pbVar43 = pbVar19;
              do {
                for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar31) {
                  bVar40 = *pbVar48;
                  uVar31 = (uint)bVar40;
                  local_38 = (ulong)(uint)bVar40;
                  uVar22 = *(uint *)(lVar17 + (ulong)*pbVar19 * 4);
                  if ((int)uVar12 < (int)uVar31) {
                    local_38 = (ulong)uVar12 & 0xffffffff000000ff;
                    uVar13 = uVar12;
                    if ((uVar22 & 0xffffff) == 0) goto LAB_0513a8e0;
LAB_0513a938:
                    uVar31 = uVar13;
                    puVar26 = puVar32;
                    pbVar30 = pbVar19;
                    while( true ) {
                      uVar18 = *puVar26;
                      pbVar30 = pbVar30 + 1;
                      *puVar26 = (long)(*(int *)(lVar21 + (((uVar18 & uVar4) >> (uVar35 & 0x3f)) +
                                                          ((ulong)((uVar22 & uVar4) >>
                                                                  (uVar35 & 0x3f)) *
                                                           (long)((iVar38 * iVar2) / 0xff) >> 8)) *
                                                          4) << (ulong)(uVar7 & 0x1f) |
                                        *(int *)(lVar20 + (((uVar18 & uVar3) >> (uVar33 & 0x3f)) +
                                                          ((ulong)((uVar22 & uVar3) >>
                                                                  (uVar33 & 0x3f)) *
                                                           (long)((iVar38 * iVar9) / 0xff) >> 8)) *
                                                          4) << (ulong)(uVar6 & 0x1f) |
                                       *(int *)(lVar39 + (((uVar18 & uVar5) >> (uVar37 & 0x3f)) +
                                                         ((ulong)((uVar22 & uVar5) >>
                                                                 (uVar37 & 0x3f)) *
                                                          (long)((iVar38 * iVar42) / 0xff) >> 8)) *
                                                         4) << (ulong)(uVar8 & 0x1f));
                      if (puVar26 + -1 == puVar32 + (-1 - (ulong)(uVar31 - 1))) break;
                      uVar22 = *(uint *)(lVar17 + (ulong)*pbVar30 * 4);
                      puVar26 = puVar26 + -1;
                    }
                    lVar1 = (ulong)(uVar31 - 1) + 1;
                    pbVar19 = pbVar19 + lVar1;
                    puVar32 = puVar32 + -lVar1;
                  }
                  else {
                    uVar13 = (uint)bVar40;
                    if ((uVar22 & 0xffffff) == 0) {
LAB_0513a8e0:
                      uVar31 = uVar13;
                      puVar32 = puVar32 + -local_38;
                      pbVar19 = pbVar19 + local_38;
                    }
                    else {
                      if (bVar40 != 0) goto LAB_0513a938;
                      local_38 = 0;
                    }
                  }
                  pbVar48 = pbVar48 + local_38;
                }
                iVar41 = iVar41 + 1;
                pbVar19 = pbVar43 + iVar11;
                pbVar48 = pbVar47 + iVar11;
                puVar32 = puVar46 + (*(ulong *)(this + 0x118) >> 2);
                uVar12 = local_20;
                pbVar47 = pbVar48;
                puVar46 = puVar32;
                pbVar43 = pbVar19;
              } while (iVar41 != local_1c);
            }
          }
          else if (0 < local_1c) {
            iVar42 = *(int *)(param_1 + 0x38);
            iVar38 = 0;
            uVar12 = local_20;
            pbVar47 = pbVar48;
            puVar46 = puVar32;
            pbVar43 = pbVar19;
            do {
              for (; 0 < (int)uVar12; uVar12 = uVar12 - uVar31) {
                bVar40 = *pbVar48;
                uVar22 = *(uint *)(lVar17 + (ulong)*pbVar19 * 4);
                uVar31 = (uint)bVar40;
                if ((int)uVar12 < (int)uVar31) {
                  bVar40 = (byte)uVar12;
                  uVar13 = uVar12;
                  if ((uVar22 & 0xffffff) == 0) goto LAB_0513a434;
LAB_0513a478:
                  uVar31 = uVar13;
                  puVar26 = puVar32;
                  pbVar30 = pbVar19;
                  while( true ) {
                    uVar18 = *puVar26;
                    pbVar30 = pbVar30 + 1;
                    *puVar26 = (long)(*(int *)(lVar21 + ((ulong)(uVar22 & uVar4) + (uVar18 & uVar4)
                                                        >> (uVar35 & 0x3f)) * 4) <<
                                      (ulong)(uVar7 & 0x1f) |
                                      *(int *)(lVar20 + ((ulong)(uVar22 & uVar3) + (uVar18 & uVar3)
                                                        >> (uVar33 & 0x3f)) * 4) <<
                                      (ulong)(uVar6 & 0x1f) |
                                     *(int *)(lVar39 + ((ulong)(uVar22 & uVar5) + (uVar18 & uVar5)
                                                       >> (uVar37 & 0x3f)) * 4) <<
                                     (ulong)(uVar8 & 0x1f));
                    if (puVar26 + -1 == puVar32 + (-1 - (ulong)(uVar31 - 1))) break;
                    uVar22 = *(uint *)(lVar17 + (ulong)*pbVar30 * 4);
                    puVar26 = puVar26 + -1;
                  }
                  uVar18 = (ulong)bVar40;
                  lVar1 = (ulong)(uVar31 - 1) + 1;
                  pbVar19 = pbVar19 + lVar1;
                  puVar32 = puVar32 + -lVar1;
                }
                else {
                  uVar13 = (uint)bVar40;
                  if ((uVar22 & 0xffffff) == 0) {
LAB_0513a434:
                    uVar31 = uVar13;
                    uVar18 = (ulong)bVar40;
                    puVar32 = puVar32 + -(ulong)bVar40;
                    pbVar19 = pbVar19 + uVar18;
                  }
                  else {
                    uVar18 = 0;
                    if (bVar40 != 0) goto LAB_0513a478;
                  }
                }
                pbVar48 = pbVar48 + uVar18;
              }
              iVar38 = iVar38 + 1;
              pbVar19 = pbVar43 + iVar42;
              pbVar48 = pbVar47 + iVar42;
              puVar32 = puVar46 + (*(ulong *)(this + 0x118) >> 2);
              uVar12 = local_20;
              pbVar47 = pbVar48;
              puVar46 = puVar32;
              pbVar43 = pbVar19;
            } while (iVar38 != local_1c);
          }
        }
      }
      (**(code **)(*(long *)this + 0x208))(this);
      (**(code **)(*(long *)this + 0x208))(this);
    }
  }
LAB_051399dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::CheckCache(std::string const&, std::string const&) */

void Sexy::DeviceImage::CheckCache(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"*");
  if (bVar1) {
    FUN_05475d88(asStack_10,param_2);
  }
  else {
    FUN_031f5e7c(asStack_10,"DDImage5:",param_2);
  }
  uVar2 = FUN_0512f5f8();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::SetCacheUpToDate(std::string const&, std::string const&) */

void Sexy::DeviceImage::SetCacheUpToDate(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"*");
  if (bVar1) {
    FUN_05475d88(asStack_10,param_2);
  }
  else {
    FUN_031f5e7c(asStack_10,"DDImage5:",param_2);
  }
  uVar2 = FUN_0512f600();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::WriteToCache(std::string const&, std::string const&) */

void __thiscall Sexy::DeviceImage::WriteToCache(DeviceImage *this,string *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int local_74;
  uint *local_70;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  undefined4 local_28 [2];
  int local_20 [2];
  DeviceImage *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0512f5f0();
  if (cVar1 != '\0') {
    local_18[0] = this + 0xc0;
    local_18[1] = this + 0xd8;
    local_74 = FUN_0512f5e0(*(undefined4 *)(this + 0x18));
    local_74 = local_74 << 0x10;
    FUN_031f5e7c((string *)local_20,"DDImage5:",param_2);
    puVar3 = (uint *)FUN_0512f610();
    std::string::~string((string *)local_20);
    if (puVar3 != (uint *)0x0) {
      local_70 = puVar3;
      SMemW(&local_70,this + 0x38,4);
      SMemW(&local_70,this + 0x3c,4);
      puVar3 = local_70;
      SMemW(&local_70,&local_74,4);
      pvVar7 = *(void **)(this + 0x80);
      if (pvVar7 == (void *)0x0) {
        (**(code **)(*(long *)this + 0xd0))(this,0,0,0);
        SMemW(&local_70,*(void **)(this + 0x70),*(int *)(this + 0x38) * *(int *)(this + 0x3c) * 4);
      }
      else {
        *puVar3 = *puVar3 | 1;
        SMemW(&local_70,pvVar7,0x400);
        SMemW(&local_70,*(void **)(this + 0x88),*(int *)(this + 0x38) * *(int *)(this + 0x3c));
      }
      lVar14 = 0;
      SMemW(&local_70,this + 0x44,4);
      SMemW(&local_70,this + 0x40,4);
      SMemW(&local_70,this + 0x90,1);
      SMemW(&local_70,this + 0x91,1);
      SMemW(&local_70,this + 0x92,1);
      SMemW(&local_70,this + 0x93,1);
      SMemW(&local_70,this + 0x94,1);
      SMemW(&local_70,this + 0x95,1);
      SMemW(&local_70,this + 0xb0,1);
      SMemW(&local_70,this + 0x96,1);
      do {
        lVar12 = 0;
        puVar13 = *(undefined8 **)((long)local_18 + lVar14);
        local_28[0] = FUN_0512f618(*puVar13,puVar13[1]);
        SMemW(&local_70,(string *)local_28,4);
        uVar9 = *puVar13;
        iVar2 = FUN_0512f618(uVar9,puVar13[1]);
        if (0 < iVar2) {
          do {
            lVar11 = 0;
            pvVar7 = (void *)FUN_0512f62c(uVar9,lVar12);
            SMemW(&local_70,pvVar7,4);
            SMemW(&local_70,(void *)((long)pvVar7 + 4),4);
            SMemW(&local_70,(void *)((long)pvVar7 + 8),4);
            SMemW(&local_70,(void *)((long)pvVar7 + 0xc),4);
            iVar2 = *(int *)((long)pvVar7 + 8) * *(int *)((long)pvVar7 + 0xc);
            if (0 < iVar2) {
              do {
                lVar10 = 0;
                pvVar4 = (void *)FUN_0512f64c(*(undefined8 *)((long)pvVar7 + 0x10),lVar11);
                SMemW(&local_70,pvVar4,0x10);
                local_20[0] = FUN_0512f658(*(undefined8 *)((long)pvVar4 + 0x10),
                                           *(undefined8 *)((long)pvVar4 + 0x18));
                SMemW(&local_70,(string *)local_20,4);
                if (0 < local_20[0]) {
                  do {
                    pvVar5 = (void *)FUN_0512f66c(*(undefined8 *)((long)pvVar4 + 0x10),lVar10);
                    SMemW(&local_70,pvVar5,0x18);
                    iVar8 = (int)lVar10;
                    lVar10 = lVar10 + 1;
                  } while (iVar8 + 1 < local_20[0]);
                }
                lVar11 = lVar11 + 1;
              } while ((int)lVar11 < iVar2);
            }
            uVar9 = *puVar13;
            lVar12 = lVar12 + 1;
            iVar2 = FUN_0512f618(uVar9,puVar13[1]);
          } while ((int)lVar12 < iVar2);
        }
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0x10);
      iVar2 = FUN_054744e0(param_1,0x2e,0xffffffffffffffff);
      if (iVar2 == -1) {
        local_28[0] = FUN_054744e0(param_1,0x5c,0xffffffffffffffff);
        local_20[0] = FUN_054744e0(param_1,0x2f,0xffffffffffffffff);
        piVar6 = eastl::max_alt<int>((int *)local_28,local_20);
        iVar2 = *piVar6;
        FUN_031f5e7c(asStack_68,"DDImage5:",param_2);
        std::operator+(param_1,".*\n");
        std::operator+(asStack_60,param_1);
        std::operator+(asStack_58,"_.*\n");
        lVar12 = (long)(iVar2 + 1);
        FUN_05475ffc(asStack_48,param_1,0,lVar12);
        std::operator+(asStack_50,asStack_48);
        std::operator+(asStack_40,"_");
        lVar14 = FUN_05474184(param_1);
        FUN_05475ffc(asStack_30,param_1,lVar12,(lVar14 + -1) - (long)iVar2);
        std::operator+(asStack_38,asStack_30);
        std::operator+((string *)local_28,".*");
        std::string::~string((string *)local_20);
        std::string::~string((string *)local_28);
        std::string::~string(asStack_30);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        std::string::~string(asStack_50);
        std::string::~string(asStack_58);
        std::string::~string(asStack_60);
        std::string::~string(asStack_68);
      }
      else {
        FUN_031f5e7c((string *)local_20,"DDImage5:",param_2);
        std::string::~string((string *)local_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DeviceImage::~DeviceImage() */

void __thiscall Sexy::DeviceImage::~DeviceImage(DeviceImage *this)

{
  CachedImageDrawInfo *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06a2d5b0;
  *(undefined ***)(this + 0x68) = &PTR__DeviceImage_06a2d7e0;
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  (**(code **)(**(long **)(this + 0xf0) + 0x50))(*(long **)(this + 0xf0),this);
  this_00 = *(CachedImageDrawInfo **)(this + 0x158);
  if (this_00 != (CachedImageDrawInfo *)0x0) {
    CachedImageDrawInfo::~CachedImageDrawInfo(this_00);
    AK::FreeHook(this_00);
    *(undefined8 *)(this + 0x158) = 0;
  }
  MemoryImage::~MemoryImage((MemoryImage *)this);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::~DeviceImage() */

void __thiscall Sexy::DeviceImage::~DeviceImage(DeviceImage *this)

{
  ~DeviceImage(this + -0x68);
  return;
}


/* Sexy::DeviceImage::~DeviceImage() */

void __thiscall Sexy::DeviceImage::~DeviceImage(DeviceImage *this)

{
  ~DeviceImage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::~DeviceImage() */

void __thiscall Sexy::DeviceImage::~DeviceImage(DeviceImage *this)

{
  ~DeviceImage(this + -0x68);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::ReadFromCache(std::string const&, std::string const&) */

void Sexy::DeviceImage::ReadFromCache(string *param_1,string *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  DeviceImage *this;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  char *pcVar7;
  char *__s2;
  size_t __n;
  undefined8 uVar8;
  undefined8 uVar9;
  vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>> *this_00
  ;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined4 local_6c;
  void *local_68;
  int local_60 [2];
  DeviceImage *local_58 [2];
  Tri aTStack_48 [24];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031f5e7c((string *)&local_30,"DDImage5:");
  cVar2 = FUN_0512f608();
  std::string::~string((string *)&local_30);
  if (cVar2 == '\0') {
    this = (DeviceImage *)0x0;
    if (local_8 != ___stack_chk_guard) goto LAB_0513cb08;
  }
  else {
    this = ::operator_new(0x160);
    DeviceImage(this);
    local_68 = (void *)0x0;
    SMemR(&local_68,this + 0x38,4);
    SMemR(&local_68,this + 0x3c,4);
    SMemR(&local_68,&local_6c,4);
    FUN_0512f5e4(this + 0x18,(long)local_6c._2_2_);
    if ((local_6c & 1) == 0) {
      iVar3 = *(int *)(this + 0x38) * *(int *)(this + 0x3c);
      uVar4 = (long)(iVar3 + 1) << 2;
      if (0x1fc0000000000000 < (ulong)(long)(iVar3 + 1)) {
        uVar4 = 0xffffffffffffffff;
      }
      pvVar5 = operator_new__(uVar4);
      *(void **)(this + 0x70) = pvVar5;
      *(undefined4 *)((long)pvVar5 + (long)iVar3 * 4) = 0x4beefade;
      SMemR(&local_68,pvVar5,iVar3 * 4);
    }
    else {
      iVar3 = *(int *)(this + 0x38);
      iVar11 = *(int *)(this + 0x3c);
      pvVar5 = operator_new__(0x400);
      *(void **)(this + 0x80) = pvVar5;
      pvVar5 = operator_new__((long)(iVar3 * iVar11));
      *(void **)(this + 0x88) = pvVar5;
      SMemR(&local_68,*(void **)(this + 0x80),0x400);
      SMemR(&local_68,*(void **)(this + 0x88),iVar3 * iVar11);
    }
    lVar12 = 0;
    SMemR(&local_68,this + 0x44,4);
    SMemR(&local_68,this + 0x40,4);
    SMemR(&local_68,this + 0x90,1);
    SMemR(&local_68,this + 0x91,1);
    SMemR(&local_68,this + 0x92,1);
    SMemR(&local_68,this + 0x93,1);
    SMemR(&local_68,this + 0x94,1);
    SMemR(&local_68,this + 0x95,1);
    SMemR(&local_68,this + 0xb0,1);
    SMemR(&local_68,this + 0x96,1);
    local_58[0] = this + 0xc0;
    local_58[1] = this + 0xd8;
    do {
      iVar3 = 0;
      this_00 = *(vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
                  **)((long)local_58 + lVar12);
      SMemR(&local_68,(string *)local_60,4);
      if (0 < local_60[0]) {
        do {
          iVar11 = 0;
          local_30 = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_18 = 0;
          local_10 = 0;
          MemoryImage::TriRep::Level::Level((Level *)&local_30);
          std::
          vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
          ::push_back(this_00,(Level *)&local_30);
          MemoryImage::TriRep::Level::~Level((Level *)&local_30);
          pvVar5 = (void *)std::
                           vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                           ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                                   *)this_00);
          SMemR(&local_68,pvVar5,4);
          SMemR(&local_68,(void *)((long)pvVar5 + 4),4);
          SMemR(&local_68,(void *)((long)pvVar5 + 8),4);
          SMemR(&local_68,(void *)((long)pvVar5 + 0xc),4);
          iVar1 = *(int *)((long)pvVar5 + 8) * *(int *)((long)pvVar5 + 0xc);
          if (0 < iVar1) {
            do {
              iVar10 = 0;
              local_30 = 0;
              local_28 = 0;
              local_24 = 0;
              local_20 = 0;
              local_18 = 0;
              local_10 = 0;
              MemoryImage::TriRep::Level::Region::Region((Region *)&local_30);
              std::
              vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
              ::push_back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                           *)((long)pvVar5 + 0x10),(Region *)&local_30);
              MemoryImage::TriRep::Level::Region::~Region((Region *)&local_30);
              pvVar6 = (void *)std::
                               vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                               ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                                       *)((long)pvVar5 + 0x10));
              SMemR(&local_68,pvVar6,0x10);
              SMemR(&local_68,(string *)&local_30,4);
              if (0 < (int)local_30) {
                do {
                  iVar10 = iVar10 + 1;
                  SMemR(&local_68,aTStack_48,0x18);
                  std::
                  vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>
                  ::push_back((vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>
                               *)((long)pvVar6 + 0x10),aTStack_48);
                } while (iVar10 < (int)local_30);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_60[0]);
      }
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x10);
    FUN_05475d88((string *)local_60,param_1);
    lVar12 = gSexyAppBase + 0xa8;
    pcVar7 = (char *)FUN_0547429c(lVar12);
    __s2 = (char *)FUN_0547429c((string *)local_60);
    __n = FUN_05474184(lVar12);
    iVar3 = strncmp(pcVar7,__s2,__n);
    if (iVar3 == 0) {
      uVar8 = FUN_05474e7c((string *)local_60);
      local_30 = FUN_05474e7c((string *)local_60);
      lVar12 = FUN_05474184(gSexyAppBase + 0xa8);
      uVar9 = __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator+
                        ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)
                         &local_30,lVar12);
      FUN_054750b4((string *)local_60,uVar8,uVar9);
    }
    lVar12 = FUN_05474184((string *)local_60);
    if ((lVar12 != 0) &&
       ((pcVar7 = (char *)FUN_05474ee8((string *)local_60,0), *pcVar7 == '\\' ||
        (pcVar7 = (char *)FUN_05474ee8((string *)local_60,0), *pcVar7 == '/')))) {
      uVar8 = FUN_05474e7c((string *)local_60);
      FUN_05475070((string *)local_60,uVar8);
    }
    thunk_FUN_05475e00(this + 0x30,(string *)local_60);
    std::string::~string((string *)local_60);
    if (local_8 != ___stack_chk_guard) {
LAB_0513cb08:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
    }
  }
  return;
}


/* Sexy::DeviceImage::ReInit() */

void __thiscall Sexy::DeviceImage::ReInit(DeviceImage *this)

{
  MemoryImage::ReInit((MemoryImage *)this);
  if (this[0xfa] == (DeviceImage)0x0) {
    return;
  }
  GenerateDeviceSurface(this);
  return;
}


/* Sexy::DeviceImage::PurgeBits() */

void __thiscall Sexy::DeviceImage::PurgeBits(DeviceImage *this)

{
  char cVar1;
  
  if (this[0xf8] != (DeviceImage)0x0) {
    return;
  }
  this[0x94] = (DeviceImage)0x1;
  (**(code **)(*(long *)this + 0xa0))();
  cVar1 = SexyAppBase::Is3DAccelerated(*(SexyAppBase **)(this + 0xb8));
  if (cVar1 == '\0') {
    if ((this[0xfa] != (DeviceImage)0x0) && (cVar1 = GenerateDeviceSurface(this), cVar1 != '\0')) {
      if (*(ColourFit **)(this + 0x70) != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x70));
      }
      *(undefined8 *)(this + 0x70) = 0;
      if (*(ColourFit **)(this + 0x88) != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x88));
      }
      *(undefined8 *)(this + 0x88) = 0;
      if (*(ColourFit **)(this + 0x80) != (ColourFit *)0x0) {
        EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(this + 0x80));
      }
      *(undefined8 *)(this + 0x80) = 0;
      return;
    }
  }
  else if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)this + 0xd0))(this,0,0,0,0);
    DeleteDeviceSurface(this);
  }
  MemoryImage::PurgeBits((MemoryImage *)this);
  return;
}


/* Sexy::DeviceImage::DeleteNativeData() */

void __thiscall Sexy::DeviceImage::DeleteNativeData(DeviceImage *this)

{
  if (this[0xf8] != (DeviceImage)0x0) {
    return;
  }
  MemoryImage::DeleteNativeData((MemoryImage *)this);
  DeleteDeviceSurface(this);
  return;
}


/* Sexy::DeviceImage::DeleteExtraBuffers() */

void __thiscall Sexy::DeviceImage::DeleteExtraBuffers(DeviceImage *this)

{
  if (this[0xf8] != (DeviceImage)0x0) {
    return;
  }
  MemoryImage::DeleteExtraBuffers((MemoryImage *)this);
  DeleteDeviceSurface(this);
  return;
}


/* Sexy::DeviceImage::FillRect(Sexy::TRect<int> const&, Sexy::Color const&, int) */

void __thiscall
Sexy::DeviceImage::FillRect(DeviceImage *this,TRect *param_1,Color *param_2,int param_3)

{
  char cVar1;
  
  (**(code **)(*(long *)this + 0xa0))();
  if (((this[0xfb] == (DeviceImage)0x0) && (this[0x92] == (DeviceImage)0x0)) &&
     (this[0x91] == (DeviceImage)0x0)) {
    cVar1 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0));
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        if (param_3 == 1) {
          (**(code **)(*(long *)this + 0x1b8))(this);
        }
        DeleteAllNonSurfaceData(this);
        return;
      }
      (**(code **)(*(long *)this + 0x1b0))(this);
      DeleteAllNonSurfaceData(this);
      return;
    }
  }
  MemoryImage::FillRect((TRect *)this,(Color *)param_1,(int)param_2);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::FillRect(Sexy::TRect<int> const&, Sexy::Color const&,
   int) */

void __thiscall
Sexy::DeviceImage::FillRect(DeviceImage *this,TRect *param_1,Color *param_2,int param_3)

{
  FillRect(this + -0x68,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::DrawLine(double, double, double, double, Sexy::Color const&, int, bool) */

void __thiscall
Sexy::DeviceImage::DrawLine
          (DeviceImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5,int param_6,bool param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
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
  if ((((this[0xfb] == (DeviceImage)0x0) && (this[0x92] == (DeviceImage)0x0)) &&
      (this[0x91] == (DeviceImage)0x0)) &&
     (cVar5 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0)),
     dVar4 = local_28[0], dVar3 = local_30, dVar2 = local_38, dVar1 = local_40, cVar5 == '\0')) {
    if (local_30 == local_40) {
      pdVar6 = std::min<double>(local_28,&local_38);
      iVar7 = (int)*pdVar6;
      pdVar6 = std::max<double>(local_28,&local_38);
      iVar9 = 1;
      iVar10 = (int)dVar3;
      pcVar11 = *(code **)(*(long *)this + 0xd8);
      iVar8 = ((int)*pdVar6 - iVar7) + 1;
    }
    else {
      if (local_28[0] != local_38) {
        (**(code **)(*(long *)this + 0xa0))(this);
        if (param_7) {
          if (param_6 == 0) {
            (**(code **)(*(long *)this + 0x1e0))(dVar4,dVar3,dVar2,dVar1,this,param_5);
          }
          else if (param_6 == 1) {
            (**(code **)(*(long *)this + 0x1e8))(dVar4,dVar3,dVar2,dVar1,this,param_5);
          }
        }
        else if (param_6 == 0) {
          (**(code **)(*(long *)this + 0x1d0))(dVar4,dVar3,dVar2,dVar1,this,param_5);
        }
        else if (param_6 == 1) {
          (**(code **)(*(long *)this + 0x1d8))(dVar4,dVar3,dVar2,dVar1,this,param_5);
        }
        DeleteAllNonSurfaceData(this);
        goto LAB_0513cebc;
      }
      pdVar6 = std::min<double>(&local_30,&local_40);
      iVar10 = (int)*pdVar6;
      pdVar6 = std::max<double>(&local_30,&local_40);
      iVar7 = (int)dVar4;
      iVar8 = 1;
      pcVar11 = *(code **)(*(long *)this + 0xd8);
      iVar9 = ((int)*pdVar6 - iVar10) + 1;
    }
    Insets::Insets(aIStack_18,iVar7,iVar10,iVar8,iVar9);
    (*pcVar11)(this,aIStack_18,param_5,param_6);
  }
  else {
    MemoryImage::DrawLine
              ((MemoryImage *)this,local_28[0],local_30,local_38,local_40,param_5,param_6,param_7);
  }
LAB_0513cebc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::DeviceImage::DrawLine(double, double, double, double, Sexy::Color
   const&, int, bool) */

void __thiscall
Sexy::DeviceImage::DrawLine
          (DeviceImage *this,double param_1,double param_2,double param_3,double param_4,
          Color *param_5,int param_6,bool param_7)

{
  DrawLine(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* Sexy::DeviceImage::CommitBits() */

void __thiscall Sexy::DeviceImage::CommitBits(DeviceImage *this)

{
  if (*(long *)(this + 0x148) != 0) {
    return;
  }
  MemoryImage::CommitBits((MemoryImage *)this);
  return;
}


/* Sexy::DeviceImage::BitsChanged() */

void __thiscall Sexy::DeviceImage::BitsChanged(DeviceImage *this)

{
  MemoryImage::BitsChanged((MemoryImage *)this);
  if (*(long **)(this + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  *(undefined8 *)(this + 0x148) = 0;
  return;
}


/* Sexy::DeviceImage::GetBits(int, int, int, int) */

long __thiscall
Sexy::DeviceImage::GetBits(DeviceImage *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(this + 0x70) == 0) {
    plVar2 = *(long **)(this + 0x148);
    if (plVar2 == (long *)0x0) {
      lVar1 = MemoryImage::GetBits((MemoryImage *)this,param_1,param_2,param_3,param_4);
      return lVar1;
    }
    if (this[0xf9] == (DeviceImage)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,this);
      *(long *)(this + 0x70) = lVar1;
      return lVar1;
    }
  }
  return *(long *)(this + 0x70);
}


/* Sexy::DeviceImage::Blt(Sexy::Image*, int, int, Sexy::TRect<int> const&, Sexy::Color const&, int)
    */

void __thiscall
Sexy::DeviceImage::Blt
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  char cVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)this + 0xa0);
  param_1[0x28] = (Image)0x1;
  (*pcVar2)();
  if (((this[0xfb] == (DeviceImage)0x0) && (this[0x92] == (DeviceImage)0x0)) &&
     (this[0x91] == (DeviceImage)0x0)) {
    cVar1 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0));
    if (cVar1 == '\0') {
      if (param_6 != 0) {
        if (param_6 == 1) {
          (**(code **)(*(long *)this + 0x1c8))(this);
        }
        DeleteAllNonSurfaceData(this);
        return;
      }
      (**(code **)(*(long *)this + 0x1c0))(this);
      DeleteAllNonSurfaceData(this);
      return;
    }
  }
  MemoryImage::Blt((MemoryImage *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::Blt(Sexy::Image*, int, int, Sexy::TRect<int> const&,
   Sexy::Color const&, int) */

void __thiscall
Sexy::DeviceImage::Blt
          (DeviceImage *this,Image *param_1,int param_2,int param_3,TRect *param_4,Color *param_5,
          int param_6)

{
  Blt(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::BltRotated(Sexy::Image*, float, float, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float) */

void __thiscall
Sexy::DeviceImage::BltRotated
          (DeviceImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7,double param_8,float param_9,float param_10)

{
  ushort *puVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  LotteryResultProgressBar *this_00;
  long lVar21;
  code *pcVar22;
  ushort *puVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  ulong *puVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  int iVar42;
  long lVar43;
  ushort *puVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  int iVar48;
  ulong *puVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  uint uVar60;
  uint uVar61;
  int iVar62;
  uint uVar63;
  uint uVar64;
  long local_70;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  pcVar22 = *(code **)(*(long *)this + 0xa0);
  local_8 = ___stack_chk_guard;
  param_1[0x28] = (Image)0x1;
  local_38 = param_3;
  local_34[0] = param_2;
  (*pcVar22)();
  if (this[0xf9] == (DeviceImage)0x0) {
    if ((((this[0xfb] == (DeviceImage)0x0) && (this[0x92] == (DeviceImage)0x0)) &&
        (this[0x91] == (DeviceImage)0x0)) &&
       (cVar17 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0)),
       cVar17 == '\0')) {
      SexyVector4::SexyVector4((SexyVector4 *)&local_28);
      cVar17 = MemoryImage::BltRotatedClipHelper
                         ((MemoryImage *)this,local_34,&local_38,param_4,param_5,param_8,
                          (TRect *)&local_28,param_9,param_10);
      if (cVar17 != '\0') {
        this_00 = (LotteryResultProgressBar *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
        (**(code **)(*(long *)param_1 + 0x50))(param_1);
        if (this_00 != (LotteryResultProgressBar *)0x0) {
          (**(code **)(*(long *)this_00 + 0xa0))(this_00);
          if (param_7 == 0) {
            lVar51 = *(long *)(this_00 + 0x80);
            if (lVar51 == 0) {
              lVar51 = (**(code **)(*(long *)this_00 + 0xd0))(this_00,0,0,0,0);
              iVar54 = *(int *)param_4;
              iVar18 = *(int *)(param_4 + 4);
              iVar62 = LotteryResultProgressBar::GetCurrentLevel(this_00);
              dVar56 = cos(param_8);
              dVar57 = sin(param_8);
              cVar17 = (**(code **)(*(long *)this + 0x200))(this);
              if (cVar17 == '\0') goto LAB_0513d37c;
              iVar53 = (int)(dVar56 * 65536.0);
              lVar51 = lVar51 + ((long)iVar54 + (long)(iVar18 * iVar62)) * 4;
              iVar54 = (int)(dVar57 * 65536.0);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar61 = *(uint *)(lVar52 + 0x1c);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar63 = *(uint *)(lVar52 + 0x20);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar41 = *(uint *)(lVar52 + 0x24);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar36 = 0x20 - *(int *)(lVar52 + 0x10);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar3 = 0x18 - *(int *)(lVar52 + 0x14);
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar55 = *(uint *)(this + 0x138);
              uVar28 = (ulong)uVar55;
              uVar10 = 0x10 - *(int *)(lVar52 + 0x18);
              uVar37 = (ulong)uVar10;
              uVar24 = *(uint *)(this + 0x13c);
              uVar33 = (ulong)uVar24;
              uVar60 = *(uint *)(this + 0x140);
              uVar38 = (ulong)uVar60;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar39 = *(ulong *)(this + 0x118);
                lVar52 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar39 >> 1)) * 2;
                Color::Color(aCStack_18,1);
                cVar17 = Sexy::operator==(param_6,aCStack_18);
                uVar14 = (ushort)uVar55;
                uVar16 = (ushort)uVar60;
                uVar15 = (ushort)uVar24;
                if (cVar17 == '\0') {
                  iVar18 = *(int *)param_6;
                  iVar62 = *(int *)(param_6 + 4);
                  iVar31 = *(int *)(param_6 + 8);
                  iVar27 = *(int *)(param_6 + 0xc);
                  if (0.0 < local_1c) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar34 = (int)(local_20 - 1.0);
                    iVar20 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar20 + (int)local_24) - param_10) - local_38);
                      iVar32 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar32 >> 0x10) {
                          iVar19 = 0;
                          if (iVar53 != 0) {
                            iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar32) /
                                     iVar53;
                          }
                          if (iVar19 < 0) {
                            iVar19 = 0;
                          }
                          iVar26 = 0;
                          if (iVar53 != 0) {
                            iVar26 = (0x7fff - iVar32) / iVar53;
                          }
                          if (iVar34 < iVar26) {
                            iVar26 = iVar34;
                          }
                          goto LAB_05141590;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar19 = 0;
                          iVar26 = iVar34;
                          goto LAB_05141590;
                        }
                      }
                      else if (iVar32 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar26 = 0;
                        if (iVar53 != 0) {
                          iVar26 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar32) / iVar53;
                        }
                        iVar19 = 0;
                        if (iVar53 != 0) {
                          iVar19 = (0x10000 - iVar32) / iVar53;
                        }
                        if (iVar19 < 0) {
                          iVar19 = 0;
                        }
                        if (iVar34 < iVar26) {
                          iVar26 = iVar34;
                        }
LAB_05141590:
                        iVar48 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar48 >> 0x10) {
                            iVar42 = 0;
                            if (iVar54 != 0) {
                              iVar42 = -iVar48 / iVar54;
                            }
                            iVar30 = 0;
                            if (iVar54 != 0) {
                              iVar30 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar48) /
                                       iVar54;
                            }
                            if (iVar19 < iVar30) {
                              iVar19 = iVar30;
                            }
                            if (iVar42 < iVar26) {
                              iVar26 = iVar42;
                            }
                            goto LAB_051415ec;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar48) && (iVar48 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_051415ec;
                        }
                        else if (iVar48 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar42 = 0;
                          if (iVar54 != 0) {
                            iVar42 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar48) /
                                     iVar54;
                          }
                          iVar30 = 0;
                          if (iVar54 != 0) {
                            iVar30 = (0x10000 - iVar48) / iVar54;
                          }
                          if (iVar19 < iVar30) {
                            iVar19 = iVar30;
                          }
                          if (iVar42 < iVar26) {
                            iVar26 = iVar42;
                          }
LAB_051415ec:
                          uVar55 = iVar32 + iVar19 * iVar53;
                          uVar24 = iVar48 + iVar19 * iVar54;
                          puVar1 = (ushort *)(lVar52 + (long)iVar19 * 2);
                          uVar60 = *(uint *)(param_1 + 0x38);
                          if (iVar19 <= iVar26) {
                            uVar37 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar60 << 2;
                            puVar23 = puVar1;
                            do {
                              iVar13 = 0xffff - (uVar55 & 0xfffe);
                              iVar30 = 0xffff - (uVar24 & 0xfffe);
                              iVar32 = (uVar55 & 0xfffe) + 1;
                              iVar48 = (uVar24 & 0xfffe) + 1;
                              lVar29 = ((long)((int)uVar55 >> 0x10) +
                                       (long)(int)(((int)uVar24 >> 0x10) * uVar60)) * 4;
                              lVar21 = lVar51 + lVar29;
                              uVar64 = *(uint *)(lVar21 + 4);
                              uVar5 = *(uint *)(lVar51 + lVar29);
                              uVar6 = *(uint *)(lVar21 + uVar37 + 4);
                              uVar7 = *(uint *)(lVar21 + uVar37);
                              iVar42 = iVar27 * (int)((ulong)(uVar5 >> 0x18) *
                                                      ((ulong)(long)(iVar13 * iVar30) >> 0x10) >>
                                                     0x10) >> 8;
                              iVar30 = iVar27 * (int)((ulong)(uVar64 >> 0x18) *
                                                      ((ulong)(long)(iVar32 * iVar30) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar29 = (long)iVar42;
                              iVar32 = iVar27 * (int)((ulong)(uVar6 >> 0x18) *
                                                      ((ulong)(long)(iVar32 * iVar48) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar46 = (long)iVar30;
                              lVar50 = (long)iVar32;
                              iVar48 = iVar27 * (int)((ulong)(uVar7 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar45 = (long)iVar48;
                              uVar47 = (ulong)*puVar23;
                              uVar55 = uVar55 + iVar53;
                              lVar21 = (long)(0x100 - (iVar42 + iVar30 + iVar48 + iVar32));
                              uVar24 = uVar24 + iVar54;
                              puVar44 = puVar23 + 1;
                              *puVar23 = (uVar15 & (ushort)(lVar21 * (uVar47 & uVar33) >> 8)) +
                                         (short)(((lVar29 * ((ulong)uVar5 & 0xff00) +
                                                   lVar46 * ((ulong)uVar64 & 0xff00) +
                                                   lVar50 * ((ulong)uVar6 & 0xff00) +
                                                   lVar45 * ((ulong)uVar7 & 0xff00) >> 8) *
                                                  (long)(iVar62 + 1) >> ((ulong)uVar3 & 0x3f)) <<
                                                ((ulong)uVar63 & 0x3f)) |
                                         (uVar16 & (ushort)(lVar21 * (uVar47 & uVar38) >> 8)) +
                                         (short)(((lVar29 * (ulong)(byte)uVar5 +
                                                   lVar46 * (ulong)(byte)uVar64 +
                                                   lVar50 * (ulong)(byte)uVar6 +
                                                   lVar45 * (ulong)(byte)uVar7 >> 8) *
                                                  (long)(iVar31 + 1) >> ((ulong)uVar10 & 0x3f)) <<
                                                ((ulong)uVar41 & 0x3f)) |
                                         (uVar14 & (ushort)(lVar21 * (uVar47 & uVar28) >> 8)) +
                                         (short)(((lVar29 * ((ulong)uVar5 & 0xff0000) +
                                                   lVar46 * ((ulong)uVar64 & 0xff0000) +
                                                   lVar50 * ((ulong)uVar6 & 0xff0000) +
                                                   lVar45 * ((ulong)uVar7 & 0xff0000) >> 8) *
                                                  (long)(iVar18 + 1) >> ((ulong)uVar36 & 0x3f)) <<
                                                ((ulong)(uVar61 & 0xff) & 0x3f));
                              puVar23 = puVar44;
                            } while (puVar44 != puVar1 + (ulong)(uint)(iVar26 - iVar19) + 1);
                          }
                        }
                      }
                      lVar52 = lVar52 + (-(uVar39 >> 0x20 & 1) & 0xfffffffe00000000 |
                                        (uVar39 >> 1 & 0xffffffff) << 1);
                      iVar20 = iVar20 + 1;
                    } while ((float)iVar20 < local_1c);
                  }
                }
                else {
                  uVar39 = -(uVar39 >> 0x20 & 1) & 0xfffffffe00000000 |
                           (uVar39 >> 1 & 0xffffffff) << 1;
                  if (gOptimizeSoftwareDrawing == '\0') {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar27 < 0) {
                            iVar27 = 0;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = (0x7fff - iVar31) / iVar53;
                          }
                          if (iVar62 < iVar20) {
                            iVar20 = iVar62;
                          }
                          goto LAB_051410e8;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar27 = 0;
                          iVar20 = iVar62;
                          goto LAB_051410e8;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
LAB_051410e8:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar27 < iVar19) {
                              iVar27 = iVar19;
                            }
                            if (iVar32 < iVar20) {
                              iVar20 = iVar32;
                            }
                            goto LAB_05141144;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_05141144;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
LAB_05141144:
                          puVar1 = (ushort *)(lVar52 + (long)iVar27 * 2);
                          uVar55 = iVar31 + iVar27 * iVar53;
                          uVar24 = iVar34 + iVar27 * iVar54;
                          uVar60 = *(uint *)(param_1 + 0x38);
                          if (iVar27 <= iVar20) {
                            uVar47 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar60 << 2;
                            puVar23 = puVar1;
                            do {
                              iVar34 = (int)uVar24 >> 0x10;
                              uVar10 = uVar55 & 0xfffe;
                              iVar32 = (int)uVar55 >> 0x10;
                              uVar64 = uVar24 & 0xfffe;
                              uVar55 = uVar55 + iVar53;
                              uVar24 = uVar24 + iVar54;
                              iVar19 = 0xffff - uVar10;
                              iVar26 = 0xffff - uVar64;
                              iVar31 = uVar10 + 1;
                              lVar29 = ((long)iVar32 + (long)(int)(iVar34 * uVar60)) * 4;
                              lVar21 = lVar51 + lVar29;
                              iVar34 = uVar64 + 1;
                              uVar64 = *(uint *)(lVar51 + lVar29);
                              uVar10 = *(uint *)(lVar21 + 4);
                              uVar5 = *(uint *)(lVar21 + uVar47 + 4);
                              uVar6 = *(uint *)(lVar21 + uVar47);
                              iVar48 = (int)((ulong)(uVar64 >> 0x18) *
                                             ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                              lVar50 = (long)iVar48;
                              iVar26 = (int)((ulong)(uVar10 >> 0x18) *
                                             ((ulong)(long)(iVar31 * iVar26) >> 0x10) >> 0x10);
                              lVar46 = (long)iVar26;
                              uVar25 = (ulong)*puVar23;
                              iVar32 = (int)((ulong)(uVar5 >> 0x18) *
                                             ((ulong)(long)(iVar31 * iVar34) >> 0x10) >> 0x10);
                              lVar45 = (long)iVar32;
                              iVar31 = (int)((ulong)(uVar6 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar19) >> 0x10) >> 0x10);
                              lVar21 = (long)iVar31;
                              lVar29 = (long)(0x100 - (iVar26 + iVar48 + iVar31 + iVar32));
                              puVar44 = puVar23 + 1;
                              *puVar23 = (uVar15 & (ushort)(lVar29 * (uVar25 & uVar33) >> 8)) +
                                         (short)((lVar50 * ((ulong)uVar64 & 0xff00) +
                                                  lVar46 * ((ulong)uVar10 & 0xff00) +
                                                  lVar45 * ((ulong)uVar5 & 0xff00) +
                                                  lVar21 * ((ulong)uVar6 & 0xff00) >>
                                                 ((ulong)uVar3 & 0x3f)) <<
                                                ((ulong)(uVar63 & 0xff) & 0x3f)) |
                                         (uVar16 & (ushort)(lVar29 * (uVar25 & uVar38) >> 8)) +
                                         (short)((lVar50 * (ulong)(byte)uVar64 +
                                                  lVar46 * (ulong)(byte)uVar10 +
                                                  lVar45 * (ulong)(byte)uVar5 +
                                                  lVar21 * (ulong)(byte)uVar6 >> (uVar37 & 0x3f)) <<
                                                ((ulong)uVar41 & 0x3f)) |
                                         (uVar14 & (ushort)(lVar29 * (uVar25 & uVar28) >> 8)) +
                                         (short)((lVar50 * ((ulong)uVar64 & 0xff0000) +
                                                  lVar46 * ((ulong)uVar10 & 0xff0000) +
                                                  lVar45 * ((ulong)uVar5 & 0xff0000) +
                                                  lVar21 * ((ulong)uVar6 & 0xff0000) >>
                                                 ((ulong)uVar36 & 0x3f)) <<
                                                ((ulong)(uVar61 & 0xff) & 0x3f));
                              puVar23 = puVar44;
                            } while (puVar44 != puVar1 + (ulong)(uint)(iVar20 - iVar27) + 1);
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                  else if (uVar33 == 0x7e0) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = (0x7fff - iVar31) / iVar53;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar20 < 0) {
                            iVar20 = 0;
                          }
                          if (iVar62 < iVar27) {
                            iVar27 = iVar62;
                          }
                          goto LAB_051435f0;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar20 = 0;
                          iVar27 = iVar62;
                          goto LAB_051435f0;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar20 < 0) {
                          iVar20 = 0;
                        }
                        if (iVar62 < iVar27) {
                          iVar27 = iVar62;
                        }
LAB_051435f0:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar20 < iVar19) {
                              iVar20 = iVar19;
                            }
                            if (iVar32 < iVar27) {
                              iVar27 = iVar32;
                            }
                            goto LAB_0514364c;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0514364c;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar20 < iVar19) {
                            iVar20 = iVar19;
                          }
                          if (iVar32 < iVar27) {
                            iVar27 = iVar32;
                          }
LAB_0514364c:
                          uVar24 = *(uint *)(param_1 + 0x38);
                          lVar21 = lVar52 + (long)iVar20 * 2;
                          uVar41 = iVar31 + iVar20 * iVar53;
                          uVar28 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar24 << 2;
                          uVar55 = iVar34 + iVar20 * iVar54;
                          for (lVar29 = 0; iVar20 + (int)lVar29 <= iVar27; lVar29 = lVar29 + 1) {
                            iVar32 = 0xffff - (uVar41 & 0xfffe);
                            iVar19 = 0xffff - (uVar55 & 0xfffe);
                            iVar31 = (uVar41 & 0xfffe) + 1;
                            iVar34 = (uVar55 & 0xfffe) + 1;
                            lVar46 = ((long)((int)uVar41 >> 0x10) +
                                     (long)(int)(((int)uVar55 >> 0x10) * uVar24)) * 4;
                            uVar8 = *(undefined2 *)(lVar21 + lVar29 * 2);
                            lVar45 = lVar51 + lVar46;
                            uVar41 = uVar41 + iVar53;
                            uVar60 = *(uint *)(lVar45 + 4);
                            uVar36 = *(uint *)(lVar51 + lVar46);
                            uVar3 = *(uint *)(lVar45 + uVar28 + 4);
                            uVar10 = *(uint *)(lVar45 + uVar28);
                            uVar55 = uVar55 + iVar54;
                            iVar26 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            iVar19 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar19) >> 0x10) >> 0x10);
                            iVar32 = (int)((ulong)(uVar10 >> 0x18) *
                                           ((ulong)(long)(iVar34 * iVar32) >> 0x10) >> 0x10);
                            iVar31 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar34) >> 0x10) >> 0x10);
                            uVar33 = (long)iVar26 * (ulong)(uVar36 & 0xff00ff) +
                                     (long)iVar19 * (ulong)(uVar60 & 0xff00ff) +
                                     (long)iVar31 * (ulong)(uVar3 & 0xff00ff) +
                                     (long)iVar32 * (ulong)(uVar10 & 0xff00ff);
                            lVar45 = ((long)iVar26 * ((ulong)uVar36 & 0xff00) +
                                      (long)iVar19 * ((ulong)uVar60 & 0xff00) +
                                      (long)iVar31 * ((ulong)uVar3 & 0xff00) +
                                      (long)iVar32 * ((ulong)uVar10 & 0xff00) & 0xfc0000) * 8 +
                                     ((uVar33 & 0xf8000000) >> 0x10) +
                                     ((long)(0x100 - (iVar19 + iVar26 + iVar32 + iVar31) >> 3) *
                                      (ulong)(CONCAT22(uVar8,uVar8) & 0x7e0f81f) >> 5 & 0x7e0f81f) +
                                     ((uVar33 & 0xf800) >> 0xb);
                            *(ushort *)(lVar21 + lVar29 * 2) =
                                 (ushort)((ulong)lVar45 >> 0x10) | (ushort)lVar45;
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                  else if (uVar33 == 0x3e0) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar27 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      iVar31 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar27 >> 0x10) {
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar27) /
                                     iVar53;
                          }
                          if (iVar20 < 0) {
                            iVar20 = 0;
                          }
                          iVar34 = 0;
                          if (iVar53 != 0) {
                            iVar34 = (0x7fff - iVar27) / iVar53;
                          }
                          if (iVar62 < iVar34) {
                            iVar34 = iVar62;
                          }
                          goto LAB_0514328c;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar27) && (iVar27 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar20 = 0;
                          iVar34 = iVar62;
                          goto LAB_0514328c;
                        }
                      }
                      else if (iVar27 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar34 = 0;
                        if (iVar53 != 0) {
                          iVar34 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar27) / iVar53;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x10000 - iVar27) / iVar53;
                        }
                        if (iVar20 < 0) {
                          iVar20 = 0;
                        }
                        if (iVar62 < iVar34) {
                          iVar34 = iVar62;
                        }
LAB_0514328c:
                        if (iVar54 < 0) {
                          if (-1 < iVar31 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar31 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar31) /
                                       iVar54;
                            }
                            if (iVar20 < iVar19) {
                              iVar20 = iVar19;
                            }
                            if (iVar32 < iVar34) {
                              iVar34 = iVar32;
                            }
                            goto LAB_051432d8;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_051432d8;
                        }
                        else if (iVar31 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar31) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar31) / iVar54;
                          }
                          if (iVar20 < iVar19) {
                            iVar20 = iVar19;
                          }
                          if (iVar32 < iVar34) {
                            iVar34 = iVar32;
                          }
LAB_051432d8:
                          uVar24 = *(uint *)(param_1 + 0x38);
                          uVar41 = iVar27 + iVar20 * iVar53;
                          lVar21 = lVar52 + (long)iVar20 * 2;
                          uVar28 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar24 << 2;
                          uVar55 = iVar31 + iVar20 * iVar54;
                          for (lVar29 = 0; iVar20 + (int)lVar29 <= iVar34; lVar29 = lVar29 + 1) {
                            iVar32 = 0xffff - (uVar41 & 0xfffe);
                            iVar19 = 0xffff - (uVar55 & 0xfffe);
                            iVar31 = (uVar41 & 0xfffe) + 1;
                            iVar27 = (uVar55 & 0xfffe) + 1;
                            lVar46 = ((long)((int)uVar41 >> 0x10) +
                                     (long)(int)(((int)uVar55 >> 0x10) * uVar24)) * 4;
                            uVar8 = *(undefined2 *)(lVar21 + lVar29 * 2);
                            lVar45 = lVar51 + lVar46;
                            uVar41 = uVar41 + iVar53;
                            uVar60 = *(uint *)(lVar45 + 4);
                            uVar36 = *(uint *)(lVar51 + lVar46);
                            uVar3 = *(uint *)(lVar45 + uVar28 + 4);
                            uVar10 = *(uint *)(lVar45 + uVar28);
                            uVar55 = uVar55 + iVar54;
                            iVar26 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            iVar19 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar19) >> 0x10) >> 0x10);
                            iVar32 = (int)((ulong)(uVar10 >> 0x18) *
                                           ((ulong)(long)(iVar27 * iVar32) >> 0x10) >> 0x10);
                            iVar31 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar27) >> 0x10) >> 0x10);
                            uVar33 = (long)iVar26 * (ulong)(uVar36 & 0xff00ff) +
                                     (long)iVar19 * (ulong)(uVar60 & 0xff00ff) +
                                     (long)iVar31 * (ulong)(uVar3 & 0xff00ff) +
                                     (long)iVar32 * (ulong)(uVar10 & 0xff00ff);
                            lVar45 = ((long)iVar26 * ((ulong)uVar36 & 0xff00) +
                                      (long)iVar19 * ((ulong)uVar60 & 0xff00) +
                                      (long)iVar31 * ((ulong)uVar3 & 0xff00) +
                                      (long)iVar32 * ((ulong)uVar10 & 0xff00) & 0xf80000) * 4 +
                                     ((uVar33 & 0xf8000000) >> 0x11) +
                                     ((long)(0x100 - (iVar19 + iVar26 + iVar32 + iVar31) >> 3) *
                                      (ulong)(CONCAT22(uVar8,uVar8) & 0x3e07c1f) >> 5 & 0x3e07c1f) +
                                     ((uVar33 & 0xf800) >> 0xb);
                            *(ushort *)(lVar21 + lVar29 * 2) =
                                 (ushort)((ulong)lVar45 >> 0x10) | (ushort)lVar45;
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                  else {
                    iVar62 = (int)(local_20 - 1.0);
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar27 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      iVar31 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar27 >> 0x10) {
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar27) /
                                     iVar53;
                          }
                          if (iVar20 < 0) {
                            iVar20 = 0;
                          }
                          iVar34 = 0;
                          if (iVar53 != 0) {
                            iVar34 = (0x7fff - iVar27) / iVar53;
                          }
                          if (iVar62 < iVar34) {
                            iVar34 = iVar62;
                          }
                          goto LAB_051424a4;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar27) && (iVar27 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar20 = 0;
                          iVar34 = iVar62;
                          goto LAB_051424a4;
                        }
                      }
                      else if (iVar27 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar34 = 0;
                        if (iVar53 != 0) {
                          iVar34 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar27) / iVar53;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x10000 - iVar27) / iVar53;
                        }
                        if (iVar20 < 0) {
                          iVar20 = 0;
                        }
                        if (iVar62 < iVar34) {
                          iVar34 = iVar62;
                        }
LAB_051424a4:
                        if (iVar54 < 0) {
                          if (-1 < iVar31 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar31 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar31) /
                                       iVar54;
                            }
                            if (iVar20 < iVar19) {
                              iVar20 = iVar19;
                            }
                            if (iVar32 < iVar34) {
                              iVar34 = iVar32;
                            }
                            goto LAB_051424f0;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_051424f0;
                        }
                        else if (iVar31 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar31) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar31) / iVar54;
                          }
                          if (iVar20 < iVar19) {
                            iVar20 = iVar19;
                          }
                          if (iVar32 < iVar34) {
                            iVar34 = iVar32;
                          }
LAB_051424f0:
                          uVar60 = *(uint *)(param_1 + 0x38);
                          lVar21 = lVar52 + (long)iVar20 * 2;
                          uVar55 = iVar27 + iVar20 * iVar53;
                          uVar47 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar60 << 2;
                          uVar24 = iVar31 + iVar20 * iVar54;
                          for (lVar29 = 0; iVar20 + (int)lVar29 <= iVar34; lVar29 = lVar29 + 1) {
                            lVar45 = ((long)((int)uVar55 >> 0x10) +
                                     (long)(int)(((int)uVar24 >> 0x10) * uVar60)) * 4;
                            iVar32 = 0xffff - (uVar55 & 0xfffe);
                            iVar19 = 0xffff - (uVar24 & 0xfffe);
                            iVar31 = (uVar55 & 0xfffe) + 1;
                            iVar27 = (uVar24 & 0xfffe) + 1;
                            uVar64 = *(uint *)(lVar51 + lVar45);
                            lVar45 = lVar51 + lVar45;
                            uVar10 = *(uint *)(lVar45 + 4);
                            uVar25 = (ulong)*(ushort *)(lVar21 + lVar29 * 2);
                            uVar5 = *(uint *)(lVar45 + uVar47 + 4);
                            uVar55 = uVar55 + iVar53;
                            uVar24 = uVar24 + iVar54;
                            uVar6 = *(uint *)(lVar45 + uVar47);
                            iVar26 = (int)((ulong)(uVar64 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            lVar43 = (long)iVar26;
                            iVar19 = (int)((ulong)(uVar10 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar19) >> 0x10) >> 0x10);
                            lVar46 = (long)iVar19;
                            iVar48 = (int)((ulong)(uVar5 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar27) >> 0x10) >> 0x10);
                            lVar45 = (long)iVar48;
                            iVar31 = (int)((ulong)(uVar6 >> 0x18) *
                                           ((ulong)(long)(iVar27 * iVar32) >> 0x10) >> 0x10);
                            lVar50 = (long)iVar31;
                            lVar40 = (long)(0x100 - (iVar19 + iVar26 + iVar31 + iVar48));
                            *(ushort *)(lVar21 + lVar29 * 2) =
                                 (uVar15 & (ushort)(lVar40 * (uVar25 & uVar33) >> 8)) +
                                 (short)((lVar43 * ((ulong)uVar64 & 0xff00) +
                                          lVar46 * ((ulong)uVar10 & 0xff00) +
                                          lVar45 * ((ulong)uVar5 & 0xff00) +
                                          lVar50 * ((ulong)uVar6 & 0xff00) >> ((ulong)uVar3 & 0x3f))
                                        << ((ulong)(uVar63 & 0xff) & 0x3f)) |
                                 (uVar16 & (ushort)(lVar40 * (uVar25 & uVar38) >> 8)) +
                                 (short)((lVar43 * (ulong)(byte)uVar64 +
                                          lVar46 * (ulong)(byte)uVar10 + lVar45 * (ulong)(byte)uVar5
                                          + lVar50 * (ulong)(byte)uVar6 >> (uVar37 & 0x3f)) <<
                                        ((ulong)uVar41 & 0x3f)) |
                                 (uVar14 & (ushort)(lVar40 * (uVar25 & uVar28) >> 8)) +
                                 (short)((lVar43 * ((ulong)uVar64 & 0xff0000) +
                                          lVar46 * ((ulong)uVar10 & 0xff0000) +
                                          lVar45 * ((ulong)uVar5 & 0xff0000) +
                                          lVar50 * ((ulong)uVar6 & 0xff0000) >>
                                         ((ulong)uVar36 & 0x3f)) << ((ulong)(uVar61 & 0xff) & 0x3f))
                            ;
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar39 = *(ulong *)(this + 0x118);
                lVar52 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar39 >> 2)) * 8;
                Color::Color(aCStack_18,1);
                cVar17 = Sexy::operator==(param_6,aCStack_18);
                if (cVar17 == '\0') {
                  iVar18 = *(int *)param_6;
                  iVar62 = *(int *)(param_6 + 4);
                  iVar31 = *(int *)(param_6 + 8);
                  iVar27 = *(int *)(param_6 + 0xc);
                  if (0.0 < local_1c) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar34 = (int)(local_20 - 1.0);
                    iVar20 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar20 + (int)local_24) - param_10) - local_38);
                      iVar32 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar32 >> 0x10) {
                          iVar19 = 0;
                          if (iVar53 != 0) {
                            iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar32) /
                                     iVar53;
                          }
                          if (iVar19 < 0) {
                            iVar19 = 0;
                          }
                          iVar26 = 0;
                          if (iVar53 != 0) {
                            iVar26 = (0x7fff - iVar32) / iVar53;
                          }
                          if (iVar34 < iVar26) {
                            iVar26 = iVar34;
                          }
                          goto LAB_05141fd8;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar19 = 0;
                          iVar26 = iVar34;
                          goto LAB_05141fd8;
                        }
                      }
                      else if (iVar32 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar26 = 0;
                        if (iVar53 != 0) {
                          iVar26 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar32) / iVar53;
                        }
                        iVar19 = 0;
                        if (iVar53 != 0) {
                          iVar19 = (0x10000 - iVar32) / iVar53;
                        }
                        if (iVar19 < 0) {
                          iVar19 = 0;
                        }
                        if (iVar34 < iVar26) {
                          iVar26 = iVar34;
                        }
LAB_05141fd8:
                        iVar48 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar48 >> 0x10) {
                            iVar42 = 0;
                            if (iVar54 != 0) {
                              iVar42 = -iVar48 / iVar54;
                            }
                            iVar30 = 0;
                            if (iVar54 != 0) {
                              iVar30 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar48) /
                                       iVar54;
                            }
                            if (iVar19 < iVar30) {
                              iVar19 = iVar30;
                            }
                            if (iVar42 < iVar26) {
                              iVar26 = iVar42;
                            }
                            goto LAB_05142034;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar48) && (iVar48 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_05142034;
                        }
                        else if (iVar48 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar42 = 0;
                          if (iVar54 != 0) {
                            iVar42 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar48) /
                                     iVar54;
                          }
                          iVar30 = 0;
                          if (iVar54 != 0) {
                            iVar30 = (0x10000 - iVar48) / iVar54;
                          }
                          if (iVar19 < iVar30) {
                            iVar19 = iVar30;
                          }
                          if (iVar42 < iVar26) {
                            iVar26 = iVar42;
                          }
LAB_05142034:
                          uVar24 = iVar32 + iVar19 * iVar53;
                          uVar55 = iVar48 + iVar19 * iVar54;
                          puVar2 = (ulong *)(lVar52 + (long)iVar19 * 8);
                          uVar60 = *(uint *)(param_1 + 0x38);
                          if (iVar19 <= iVar26) {
                            uVar37 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar60 << 2;
                            puVar35 = puVar2;
                            do {
                              iVar42 = (int)uVar55 >> 0x10;
                              uVar64 = uVar24 & 0xfffe;
                              uVar5 = uVar55 & 0xfffe;
                              iVar30 = (int)uVar24 >> 0x10;
                              uVar55 = uVar55 + iVar54;
                              uVar24 = uVar24 + iVar53;
                              iVar13 = 0xffff - uVar64;
                              iVar12 = 0xffff - uVar5;
                              iVar32 = uVar64 + 1;
                              iVar48 = uVar5 + 1;
                              lVar21 = ((long)iVar30 + (long)(int)(iVar42 * uVar60)) * 4;
                              uVar5 = *(uint *)(lVar51 + lVar21);
                              lVar21 = lVar51 + lVar21;
                              uVar64 = *(uint *)(lVar21 + 4);
                              uVar6 = *(uint *)(lVar21 + uVar37 + 4);
                              uVar7 = *(uint *)(lVar21 + uVar37);
                              iVar42 = iVar27 * (int)((ulong)(uVar5 >> 0x18) *
                                                      ((ulong)(long)(iVar13 * iVar12) >> 0x10) >>
                                                     0x10) >> 8;
                              iVar30 = iVar27 * (int)((ulong)(uVar64 >> 0x18) *
                                                      ((ulong)(long)(iVar32 * iVar12) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar45 = (long)iVar42;
                              lVar50 = (long)iVar30;
                              iVar32 = iVar27 * (int)((ulong)(uVar6 >> 0x18) *
                                                      ((ulong)(long)(iVar32 * iVar48) >> 0x10) >>
                                                     0x10) >> 8;
                              iVar48 = iVar27 * (int)((ulong)(uVar7 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar46 = (long)iVar32;
                              lVar29 = (long)iVar48;
                              uVar47 = *puVar35;
                              lVar21 = (long)(0x100 - (iVar42 + iVar30 + iVar48 + iVar32));
                              puVar49 = puVar35 + 1;
                              *puVar35 = (((lVar45 * ((ulong)uVar5 & 0xff00) +
                                            lVar50 * ((ulong)uVar64 & 0xff00) +
                                            lVar46 * ((ulong)uVar6 & 0xff00) +
                                            lVar29 * ((ulong)uVar7 & 0xff00) >> 8) *
                                           (long)(iVar62 + 1) >> ((ulong)uVar3 & 0x3f)) <<
                                         ((ulong)(uVar63 & 0xff) & 0x3f)) +
                                         (uVar33 & lVar21 * (uVar47 & uVar33) >> 8) |
                                         (((lVar45 * (ulong)(byte)uVar5 +
                                            lVar50 * (ulong)(byte)uVar64 +
                                            lVar46 * (ulong)(byte)uVar6 +
                                            lVar29 * (ulong)(byte)uVar7 >> 8) * (long)(iVar31 + 1)
                                          >> ((ulong)(uVar10 & 0xff) & 0x3f)) <<
                                         ((ulong)uVar41 & 0x3f)) +
                                         (uVar38 & lVar21 * (uVar47 & uVar38) >> 8) |
                                         (((lVar45 * ((ulong)uVar5 & 0xff0000) +
                                            lVar50 * ((ulong)uVar64 & 0xff0000) +
                                            lVar46 * ((ulong)uVar6 & 0xff0000) +
                                            lVar29 * ((ulong)uVar7 & 0xff0000) >> 8) *
                                           (long)(iVar18 + 1) >> ((ulong)uVar36 & 0x3f)) <<
                                         ((ulong)(uVar61 & 0xff) & 0x3f)) +
                                         (uVar28 & lVar21 * (uVar47 & uVar28) >> 8);
                              puVar35 = puVar49;
                            } while (puVar49 != puVar2 + (ulong)(uint)(iVar26 - iVar19) + 1);
                          }
                        }
                      }
                      lVar52 = lVar52 + (-(uVar39 >> 0x21 & 1) & 0xfffffff800000000 |
                                        (uVar39 >> 2 & 0xffffffff) << 3);
                      iVar20 = iVar20 + 1;
                    } while ((float)iVar20 < local_1c);
                  }
                }
                else {
                  uVar39 = -(uVar39 >> 0x21 & 1) & 0xfffffff800000000 |
                           (uVar39 >> 2 & 0xffffffff) << 3;
                  if (gOptimizeSoftwareDrawing == '\0') {
                    iVar62 = (int)(local_20 - 1.0);
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar27 < 0) {
                            iVar27 = 0;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = (0x7fff - iVar31) / iVar53;
                          }
                          if (iVar62 < iVar20) {
                            iVar20 = iVar62;
                          }
                          goto LAB_0513e4b4;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar27 = 0;
                          iVar20 = iVar62;
                          goto LAB_0513e4b4;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
LAB_0513e4b4:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar27 < iVar19) {
                              iVar27 = iVar19;
                            }
                            if (iVar32 < iVar20) {
                              iVar20 = iVar32;
                            }
                            goto LAB_0513e510;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0513e510;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
LAB_0513e510:
                          puVar2 = (ulong *)(lVar52 + (long)iVar27 * 8);
                          uVar55 = iVar31 + iVar27 * iVar53;
                          uVar24 = iVar34 + iVar27 * iVar54;
                          uVar60 = *(uint *)(param_1 + 0x38);
                          if (iVar27 <= iVar20) {
                            uVar47 = -(ulong)(uVar60 >> 0x1f) & 0xfffffffc00000000 |
                                     (ulong)uVar60 << 2;
                            puVar35 = puVar2;
                            do {
                              iVar19 = 0xffff - (uVar55 & 0xfffe);
                              iVar32 = (int)uVar55 >> 0x10;
                              iVar26 = 0xffff - (uVar24 & 0xfffe);
                              iVar31 = (uVar55 & 0xfffe) + 1;
                              iVar34 = (uVar24 & 0xfffe) + 1;
                              uVar55 = uVar55 + iVar53;
                              lVar29 = ((long)iVar32 + (long)(int)(((int)uVar24 >> 0x10) * uVar60))
                                       * 4;
                              uVar24 = uVar24 + iVar54;
                              lVar21 = lVar51 + lVar29;
                              uVar64 = *(uint *)(lVar51 + lVar29);
                              uVar10 = *(uint *)(lVar21 + 4);
                              uVar5 = *(uint *)(lVar21 + uVar47 + 4);
                              uVar6 = *(uint *)(lVar21 + uVar47);
                              iVar48 = (int)((ulong)(uVar10 >> 0x18) *
                                             ((ulong)(long)(iVar31 * iVar26) >> 0x10) >> 0x10);
                              lVar50 = (long)iVar48;
                              iVar32 = (int)((ulong)(uVar64 >> 0x18) *
                                             ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                              lVar46 = (long)iVar32;
                              iVar31 = (int)((ulong)(uVar5 >> 0x18) *
                                             ((ulong)(long)(iVar31 * iVar34) >> 0x10) >> 0x10);
                              lVar45 = (long)iVar31;
                              iVar34 = (int)((ulong)(uVar6 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar19) >> 0x10) >> 0x10);
                              lVar29 = (long)iVar34;
                              lVar21 = (long)(0x100 - (iVar48 + iVar32 + iVar34 + iVar31));
                              puVar49 = puVar35 + 1;
                              *puVar35 = (uVar33 & lVar21 * (*puVar35 & uVar33) >> 8) +
                                         ((lVar46 * ((ulong)uVar64 & 0xff00) +
                                           lVar50 * ((ulong)uVar10 & 0xff00) +
                                           lVar45 * ((ulong)uVar5 & 0xff00) +
                                           lVar29 * ((ulong)uVar6 & 0xff00) >> ((ulong)uVar3 & 0x3f)
                                          ) << ((ulong)uVar63 & 0x3f)) |
                                         (uVar38 & lVar21 * (*puVar35 & uVar38) >> 8) +
                                         ((lVar46 * (ulong)(byte)uVar64 +
                                           lVar50 * (ulong)(byte)uVar10 +
                                           lVar45 * (ulong)(byte)uVar5 + lVar29 * (ulong)(byte)uVar6
                                          >> (uVar37 & 0x3f)) << ((ulong)uVar41 & 0x3f)) |
                                         (uVar28 & lVar21 * (*puVar35 & uVar28) >> 8) +
                                         ((lVar46 * ((ulong)uVar64 & 0xff0000) +
                                           lVar50 * ((ulong)uVar10 & 0xff0000) +
                                           lVar45 * ((ulong)uVar5 & 0xff0000) +
                                           lVar29 * ((ulong)uVar6 & 0xff0000) >>
                                          ((ulong)uVar36 & 0x3f)) << ((ulong)(uVar61 & 0xff) & 0x3f)
                                         );
                              puVar35 = puVar49;
                            } while (puVar49 != puVar2 + (ulong)(uint)(iVar20 - iVar27) + 1);
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                  else {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar27 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      iVar31 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar27 >> 0x10) {
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar27) /
                                     iVar53;
                          }
                          if (iVar20 < 0) {
                            iVar20 = 0;
                          }
                          iVar34 = 0;
                          if (iVar53 != 0) {
                            iVar34 = (0x7fff - iVar27) / iVar53;
                          }
                          if (iVar62 < iVar34) {
                            iVar34 = iVar62;
                          }
                          goto LAB_05141c60;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar27) && (iVar27 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar20 = 0;
                          iVar34 = iVar62;
                          goto LAB_05141c60;
                        }
                      }
                      else if (iVar27 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x10000 - iVar27) / iVar53;
                        }
                        if (iVar20 < 0) {
                          iVar20 = 0;
                        }
                        iVar34 = 0;
                        if (iVar53 != 0) {
                          iVar34 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar27) / iVar53;
                        }
                        if (iVar62 < iVar34) {
                          iVar34 = iVar62;
                        }
LAB_05141c60:
                        if (iVar54 < 0) {
                          if (-1 < iVar31 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar31 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar31) /
                                       iVar54;
                            }
                            if (iVar20 < iVar19) {
                              iVar20 = iVar19;
                            }
                            if (iVar32 < iVar34) {
                              iVar34 = iVar32;
                            }
                            goto LAB_05141ca8;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_05141ca8;
                        }
                        else if (iVar31 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = (0x10000 - iVar31) / iVar54;
                          }
                          if (iVar20 < iVar32) {
                            iVar20 = iVar32;
                          }
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar31) /
                                     iVar54;
                          }
                          if (iVar32 < iVar34) {
                            iVar34 = iVar32;
                          }
LAB_05141ca8:
                          uVar24 = *(uint *)(param_1 + 0x38);
                          uVar41 = iVar27 + iVar20 * iVar53;
                          lVar21 = lVar52 + (long)iVar20 * 8;
                          uVar28 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar24 << 2;
                          uVar55 = iVar31 + iVar20 * iVar54;
                          for (lVar29 = 0; iVar20 + (int)lVar29 <= iVar34; lVar29 = lVar29 + 1) {
                            uVar60 = uVar41 & 0xfffe;
                            iVar31 = (int)uVar41 >> 0x10;
                            uVar41 = uVar41 + iVar53;
                            iVar32 = 0xffff - uVar60;
                            iVar19 = 0xffff - (uVar55 & 0xfffe);
                            lVar45 = ((long)iVar31 + (long)(int)(((int)uVar55 >> 0x10) * uVar24)) *
                                     4;
                            iVar31 = uVar60 + 1;
                            iVar27 = (uVar55 & 0xfffe) + 1;
                            uVar55 = uVar55 + iVar54;
                            uVar36 = *(uint *)(lVar51 + lVar45);
                            lVar45 = lVar51 + lVar45;
                            uVar60 = *(uint *)(lVar45 + 4);
                            iVar26 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            uVar3 = *(uint *)(lVar45 + uVar28 + 4);
                            uVar10 = *(uint *)(lVar45 + uVar28);
                            iVar19 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar19) >> 0x10) >> 0x10);
                            iVar31 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar27) >> 0x10) >> 0x10);
                            iVar27 = (int)((ulong)(uVar10 >> 0x18) *
                                           ((ulong)(long)(iVar27 * iVar32) >> 0x10) >> 0x10);
                            lVar45 = (long)(0x100 - (iVar19 + iVar26 + iVar27 + iVar31));
                            *(ulong *)(lVar21 + lVar29 * 8) =
                                 ((long)iVar26 * ((ulong)uVar36 & 0xff00) +
                                  (long)iVar19 * ((ulong)uVar60 & 0xff00) +
                                  (long)iVar31 * ((ulong)uVar3 & 0xff00) +
                                  (long)iVar27 * ((ulong)uVar10 & 0xff00) & 0xff0000) +
                                 lVar45 * (*(ulong *)(lVar21 + lVar29 * 8) & 0xff00) >> 8 & 0xff00 |
                                 ((long)iVar26 * (ulong)(uVar36 & 0xff00ff) +
                                  (long)iVar19 * (ulong)(uVar60 & 0xff00ff) +
                                  (long)iVar31 * (ulong)(uVar3 & 0xff00ff) +
                                  (long)iVar27 * (ulong)(uVar10 & 0xff00ff) & 0xff00ff00) +
                                 lVar45 * (*(ulong *)(lVar21 + lVar29 * 8) & 0xff00ff) >> 8 &
                                 0xff00ff;
                          }
                        }
                      }
                      lVar52 = lVar52 + uVar39;
                    }
                  }
                }
              }
            }
            else {
              iVar62 = *(int *)param_4;
              iVar54 = *(int *)(param_4 + 4);
              lVar52 = *(long *)(this_00 + 0x88);
              iVar18 = LotteryResultProgressBar::GetCurrentLevel(this_00);
              dVar56 = cos(param_8);
              dVar57 = sin(param_8);
              cVar17 = (**(code **)(*(long *)this + 0x200))(this);
              if (cVar17 == '\0') goto LAB_0513d37c;
              iVar53 = (int)(dVar56 * 65536.0);
              lVar52 = lVar52 + (long)iVar62 + (long)(iVar54 * iVar18);
              iVar54 = (int)(dVar57 * 65536.0);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar41 = *(uint *)(lVar21 + 0x1c);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar55 = *(uint *)(lVar21 + 0x20);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar24 = *(uint *)(lVar21 + 0x24);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar10 = 0x20 - *(int *)(lVar21 + 0x10);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar61 = 0x18 - *(int *)(lVar21 + 0x14);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar60 = *(uint *)(this + 0x138);
              uVar28 = (ulong)uVar60;
              uVar63 = 0x10 - *(int *)(lVar21 + 0x18);
              uVar36 = *(uint *)(this + 0x13c);
              uVar33 = (ulong)uVar36;
              uVar3 = *(uint *)(this + 0x140);
              uVar38 = (ulong)uVar3;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar37 = *(ulong *)(this + 0x118);
                uVar39 = uVar37 >> 1;
                local_70 = *(long *)(this + 0x120) +
                           ((long)(int)local_28 + ((long)(int)local_24 * uVar37 >> 1)) * 2;
                Color::Color(aCStack_18,1);
                cVar17 = Sexy::operator==(param_6,aCStack_18);
                uVar14 = (ushort)uVar60;
                uVar15 = (ushort)uVar36;
                uVar16 = (ushort)uVar3;
                if (cVar17 == '\0') {
                  iVar18 = *(int *)param_6;
                  iVar62 = *(int *)(param_6 + 4);
                  iVar31 = *(int *)(param_6 + 8);
                  iVar27 = *(int *)(param_6 + 0xc);
                  if (0.0 < local_1c) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar34 = (int)(local_20 - 1.0);
                    iVar20 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar20 + (int)local_24) - param_10) - local_38);
                      iVar32 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar32 >> 0x10) {
                          iVar19 = 0;
                          if (iVar53 != 0) {
                            iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar32) /
                                     iVar53;
                          }
                          if (iVar19 < 0) {
                            iVar19 = 0;
                          }
                          iVar26 = 0;
                          if (iVar53 != 0) {
                            iVar26 = (0x7fff - iVar32) / iVar53;
                          }
                          if (iVar34 < iVar26) {
                            iVar26 = iVar34;
                          }
                          goto LAB_0513f8b0;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar19 = 0;
                          iVar26 = iVar34;
                          goto LAB_0513f8b0;
                        }
                      }
                      else if (iVar32 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar19 = 0;
                        if (iVar53 != 0) {
                          iVar19 = (0x10000 - iVar32) / iVar53;
                        }
                        if (iVar19 < 0) {
                          iVar19 = 0;
                        }
                        iVar26 = 0;
                        if (iVar53 != 0) {
                          iVar26 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar32) / iVar53;
                        }
                        if (iVar34 < iVar26) {
                          iVar26 = iVar34;
                        }
LAB_0513f8b0:
                        iVar48 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar48 >> 0x10) {
                            iVar42 = 0;
                            if (iVar54 != 0) {
                              iVar42 = -iVar48 / iVar54;
                            }
                            iVar30 = 0;
                            if (iVar54 != 0) {
                              iVar30 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar48) /
                                       iVar54;
                            }
                            if (iVar19 < iVar30) {
                              iVar19 = iVar30;
                            }
                            if (iVar42 < iVar26) {
                              iVar26 = iVar42;
                            }
                            goto LAB_0513f910;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar48) && (iVar48 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0513f910;
                        }
                        else if (iVar48 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar42 = 0;
                          if (iVar54 != 0) {
                            iVar42 = (0x10000 - iVar48) / iVar54;
                          }
                          if (iVar19 < iVar42) {
                            iVar19 = iVar42;
                          }
                          iVar42 = 0;
                          if (iVar54 != 0) {
                            iVar42 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar48) /
                                     iVar54;
                          }
                          if (iVar42 < iVar26) {
                            iVar26 = iVar42;
                          }
LAB_0513f910:
                          puVar1 = (ushort *)(local_70 + (long)iVar19 * 2);
                          uVar60 = iVar32 + iVar19 * iVar53;
                          uVar36 = iVar48 + iVar19 * iVar54;
                          iVar32 = *(int *)(param_1 + 0x38);
                          if (iVar19 <= iVar26) {
                            puVar23 = puVar1;
                            do {
                              uVar47 = (ulong)*puVar23;
                              lVar21 = (long)((int)uVar60 >> 0x10) +
                                       (long)(((int)uVar36 >> 0x10) * iVar32);
                              lVar29 = lVar52 + lVar21;
                              iVar12 = 0xffff - (uVar60 & 0xfffe);
                              iVar13 = 0xffff - (uVar36 & 0xfffe);
                              iVar48 = (uVar60 & 0xfffe) + 1;
                              iVar42 = (uVar36 & 0xfffe) + 1;
                              uVar60 = uVar60 + iVar53;
                              uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                              uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                              uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar32 + 1)
                                                         * 4);
                              uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar32) * 4);
                              iVar30 = iVar27 * (int)((ulong)(uVar64 >> 0x18) *
                                                      ((ulong)(long)(iVar12 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              iVar13 = iVar27 * (int)((ulong)(uVar3 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar21 = (long)iVar30;
                              lVar50 = (long)iVar13;
                              iVar48 = iVar27 * (int)((ulong)(uVar5 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar42) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar46 = (long)iVar48;
                              iVar42 = iVar27 * (int)((ulong)(uVar6 >> 0x18) *
                                                      ((ulong)(long)(iVar42 * iVar12) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar29 = (long)iVar42;
                              uVar36 = uVar36 + iVar54;
                              lVar45 = (long)(0x100 - (iVar30 + iVar13 + iVar42 + iVar48));
                              puVar44 = puVar23 + 1;
                              *puVar23 = (uVar15 & (ushort)(lVar45 * (uVar47 & uVar33) >> 8)) +
                                         (short)(((lVar21 * ((ulong)uVar64 & 0xff00) +
                                                   lVar50 * ((ulong)uVar3 & 0xff00) +
                                                   lVar46 * ((ulong)uVar5 & 0xff00) +
                                                   lVar29 * ((ulong)uVar6 & 0xff00) >> 8) *
                                                  (long)(iVar62 + 1) >> ((ulong)uVar61 & 0x3f)) <<
                                                ((ulong)uVar55 & 0x3f)) |
                                         (uVar16 & (ushort)(lVar45 * (uVar47 & uVar38) >> 8)) +
                                         (short)(((lVar21 * (ulong)(byte)uVar64 +
                                                   lVar50 * (ulong)(byte)uVar3 +
                                                   lVar46 * (ulong)(byte)uVar5 +
                                                   lVar29 * (ulong)(byte)uVar6 >> 8) *
                                                  (long)(iVar31 + 1) >> ((ulong)uVar63 & 0x3f)) <<
                                                ((ulong)uVar24 & 0x3f)) |
                                         (uVar14 & (ushort)(lVar45 * (uVar47 & uVar28) >> 8)) +
                                         (short)(((lVar21 * ((ulong)uVar64 & 0xff0000) +
                                                   lVar50 * ((ulong)uVar3 & 0xff0000) +
                                                   lVar46 * ((ulong)uVar5 & 0xff0000) +
                                                   lVar29 * ((ulong)uVar6 & 0xff0000) >> 8) *
                                                  (long)(iVar18 + 1) >> ((ulong)uVar10 & 0x3f)) <<
                                                ((ulong)uVar41 & 0x3f));
                              puVar23 = puVar44;
                            } while (puVar44 != puVar1 + (ulong)(uint)(iVar26 - iVar19) + 1);
                          }
                        }
                      }
                      iVar20 = iVar20 + 1;
                      local_70 = local_70 +
                                 (-(uVar37 >> 0x20 & 1) & 0xfffffffe00000000 |
                                 (uVar39 & 0xffffffff) << 1);
                    } while ((float)iVar20 < local_1c);
                  }
                }
                else if (gOptimizeSoftwareDrawing == '\0') {
                  if (0.0 < local_1c) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    iVar18 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar27 < 0) {
                            iVar27 = 0;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = (0x7fff - iVar31) / iVar53;
                          }
                          if (iVar62 < iVar20) {
                            iVar20 = iVar62;
                          }
                          goto LAB_0513ef54;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar27 = 0;
                          iVar20 = iVar62;
                          goto LAB_0513ef54;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
LAB_0513ef54:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar27 < iVar19) {
                              iVar27 = iVar19;
                            }
                            if (iVar32 < iVar20) {
                              iVar20 = iVar32;
                            }
                            goto LAB_0513efb4;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0513efb4;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
LAB_0513efb4:
                          puVar1 = (ushort *)(local_70 + (long)iVar27 * 2);
                          uVar60 = iVar31 + iVar27 * iVar53;
                          uVar36 = iVar34 + iVar27 * iVar54;
                          iVar31 = *(int *)(param_1 + 0x38);
                          if (iVar27 <= iVar20) {
                            puVar23 = puVar1;
                            do {
                              iVar19 = 0xffff - (uVar60 & 0xfffe);
                              iVar26 = 0xffff - (uVar36 & 0xfffe);
                              iVar34 = (uVar60 & 0xfffe) + 1;
                              lVar21 = (long)((int)uVar60 >> 0x10) +
                                       (long)(((int)uVar36 >> 0x10) * iVar31);
                              lVar29 = lVar52 + lVar21;
                              iVar32 = (uVar36 & 0xfffe) + 1;
                              uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                              uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                              uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar31 + 1)
                                                         * 4);
                              uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar31) * 4);
                              iVar42 = (int)((ulong)(uVar3 >> 0x18) *
                                             ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                              lVar50 = (long)iVar42;
                              iVar26 = (int)((ulong)(uVar64 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                              lVar46 = (long)iVar26;
                              iVar48 = (int)((ulong)(uVar5 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar32) >> 0x10) >> 0x10);
                              lVar45 = (long)iVar48;
                              iVar34 = (int)((ulong)(uVar6 >> 0x18) *
                                             ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                              uVar47 = (ulong)*puVar23;
                              lVar21 = (long)iVar34;
                              lVar29 = (long)(0x100 - (iVar26 + iVar42 + iVar34 + iVar48));
                              uVar60 = uVar60 + iVar53;
                              uVar36 = uVar36 + iVar54;
                              puVar44 = puVar23 + 1;
                              *puVar23 = (uVar15 & (ushort)(lVar29 * (uVar47 & uVar33) >> 8)) +
                                         (short)((lVar50 * ((ulong)uVar3 & 0xff00) +
                                                  lVar46 * ((ulong)uVar64 & 0xff00) +
                                                  lVar45 * ((ulong)uVar5 & 0xff00) +
                                                  lVar21 * ((ulong)uVar6 & 0xff00) >>
                                                 ((ulong)uVar61 & 0x3f)) << ((ulong)uVar55 & 0x3f))
                                         | (uVar16 & (ushort)(lVar29 * (uVar47 & uVar38) >> 8)) +
                                           (short)((lVar50 * (ulong)(byte)uVar3 +
                                                    lVar46 * (ulong)(byte)uVar64 +
                                                    lVar45 * (ulong)(byte)uVar5 +
                                                    lVar21 * (ulong)(byte)uVar6 >>
                                                   ((ulong)uVar63 & 0x3f)) << ((ulong)uVar24 & 0x3f)
                                                  ) |
                                         (uVar14 & (ushort)(lVar29 * (uVar47 & uVar28) >> 8)) +
                                         (short)((lVar50 * ((ulong)uVar3 & 0xff0000) +
                                                  lVar46 * ((ulong)uVar64 & 0xff0000) +
                                                  lVar45 * ((ulong)uVar5 & 0xff0000) +
                                                  lVar21 * ((ulong)uVar6 & 0xff0000) >>
                                                 ((ulong)uVar10 & 0x3f)) << ((ulong)uVar41 & 0x3f));
                              puVar23 = puVar44;
                            } while (puVar44 != puVar1 + (ulong)(uint)(iVar20 - iVar27) + 1);
                          }
                        }
                      }
                      iVar18 = iVar18 + 1;
                      local_70 = local_70 +
                                 (-(uVar37 >> 0x20 & 1) & 0xfffffffe00000000 |
                                 (uVar39 & 0xffffffff) << 1);
                    } while ((float)iVar18 < local_1c);
                  }
                }
                else if (uVar33 == 0x7e0) {
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  iVar62 = (int)(local_20 - 1.0);
                  for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                    dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                    iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar53 < 0) {
                      if (-1 < iVar31 >> 0x10) {
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x7fff - iVar31) / iVar53;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
                        goto LAB_05142d28;
                      }
                    }
                    else if (iVar53 == 0) {
                      if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar27 = 0;
                        iVar20 = iVar62;
                        goto LAB_05142d28;
                      }
                    }
                    else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar27 = 0;
                      if (iVar53 != 0) {
                        iVar27 = (0x10000 - iVar31) / iVar53;
                      }
                      if (iVar27 < 0) {
                        iVar27 = 0;
                      }
                      iVar20 = 0;
                      if (iVar53 != 0) {
                        iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                      }
                      if (iVar62 < iVar20) {
                        iVar20 = iVar62;
                      }
LAB_05142d28:
                      iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar54 < 0) {
                        if (-1 < iVar34 >> 0x10) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = -iVar34 / iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                     iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
                          goto LAB_05142d80;
                        }
                      }
                      else if (iVar54 == 0) {
                        if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_05142d80;
                      }
                      else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar32 = 0;
                        if (iVar54 != 0) {
                          iVar32 = (0x10000 - iVar34) / iVar54;
                        }
                        if (iVar27 < iVar32) {
                          iVar27 = iVar32;
                        }
                        iVar32 = 0;
                        if (iVar54 != 0) {
                          iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                   iVar54;
                        }
                        if (iVar32 < iVar20) {
                          iVar20 = iVar32;
                        }
LAB_05142d80:
                        uVar41 = iVar31 + iVar27 * iVar53;
                        puVar1 = (ushort *)(local_70 + (long)iVar27 * 2);
                        uVar55 = iVar34 + iVar27 * iVar54;
                        iVar31 = *(int *)(param_1 + 0x38);
                        if (iVar27 <= iVar20) {
                          puVar23 = puVar1;
                          do {
                            iVar19 = 0xffff - (uVar55 & 0xfffe);
                            iVar26 = 0xffff - (uVar41 & 0xfffe);
                            iVar34 = (uVar55 & 0xfffe) + 1;
                            iVar32 = (uVar41 & 0xfffe) + 1;
                            lVar21 = (long)((int)uVar41 >> 0x10) +
                                     (long)(((int)uVar55 >> 0x10) * iVar31);
                            lVar29 = lVar52 + lVar21;
                            uVar24 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                            uVar60 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                            uVar36 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar31 + 1)
                                                        * 4);
                            uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar31) * 4);
                            iVar48 = (int)((ulong)(uVar24 >> 0x18) *
                                           ((ulong)(long)(iVar26 * iVar19) >> 0x10) >> 0x10);
                            iVar19 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            iVar32 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar34) >> 0x10) >> 0x10);
                            iVar34 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                            uVar41 = uVar41 + iVar53;
                            uVar55 = uVar55 + iVar54;
                            uVar28 = (long)iVar48 * (ulong)(uVar24 & 0xff00ff) +
                                     (long)iVar19 * (ulong)(uVar60 & 0xff00ff) +
                                     (long)iVar32 * (ulong)(uVar36 & 0xff00ff) +
                                     (long)iVar34 * (ulong)(uVar3 & 0xff00ff);
                            lVar21 = ((long)iVar48 * ((ulong)uVar24 & 0xff00) +
                                      (long)iVar19 * ((ulong)uVar60 & 0xff00) +
                                      (long)iVar32 * ((ulong)uVar36 & 0xff00) +
                                      (long)iVar34 * ((ulong)uVar3 & 0xff00) & 0xfc0000) * 8 +
                                     ((uVar28 & 0xf8000000) >> 0x10) +
                                     ((long)(0x100 - (iVar19 + iVar48 + iVar34 + iVar32) >> 3) *
                                      (ulong)(CONCAT22(*puVar23,*puVar23) & 0x7e0f81f) >> 5 &
                                     0x7e0f81f) + ((uVar28 & 0xf800) >> 0xb);
                            puVar44 = puVar23 + 1;
                            *puVar23 = (ushort)((ulong)lVar21 >> 0x10) | (ushort)lVar21;
                            puVar23 = puVar44;
                          } while (puVar44 != puVar1 + (ulong)(uint)(iVar20 - iVar27) + 1);
                        }
                      }
                    }
                    local_70 = local_70 +
                               (-(uVar37 >> 0x20 & 1) & 0xfffffffe00000000 |
                               (uVar39 & 0xffffffff) << 1);
                  }
                }
                else {
                  uVar37 = -(uVar37 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar39 & 0xffffffff) << 1;
                  if (uVar33 == 0x3e0) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = (0x7fff - iVar31) / iVar53;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar20 < 0) {
                            iVar20 = 0;
                          }
                          if (iVar62 < iVar27) {
                            iVar27 = iVar62;
                          }
                          goto LAB_05142940;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar20 = 0;
                          iVar27 = iVar62;
                          goto LAB_05142940;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar20 < 0) {
                          iVar20 = 0;
                        }
                        if (iVar62 < iVar27) {
                          iVar27 = iVar62;
                        }
LAB_05142940:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar20 < iVar19) {
                              iVar20 = iVar19;
                            }
                            if (iVar32 < iVar27) {
                              iVar27 = iVar32;
                            }
                            goto LAB_0514299c;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0514299c;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar20 < iVar19) {
                            iVar20 = iVar19;
                          }
                          if (iVar32 < iVar27) {
                            iVar27 = iVar32;
                          }
LAB_0514299c:
                          iVar32 = *(int *)(param_1 + 0x38);
                          lVar21 = local_70 + (long)iVar20 * 2;
                          uVar41 = iVar31 + iVar20 * iVar53;
                          uVar55 = iVar34 + iVar20 * iVar54;
                          for (lVar29 = 0; iVar20 + (int)lVar29 <= iVar27; lVar29 = lVar29 + 1) {
                            iVar19 = 0xffff - (uVar55 & 0xfffe);
                            iVar26 = 0xffff - (uVar41 & 0xfffe);
                            iVar31 = (uVar41 & 0xfffe) + 1;
                            iVar34 = (uVar55 & 0xfffe) + 1;
                            lVar45 = (long)((int)uVar41 >> 0x10) +
                                     (long)(((int)uVar55 >> 0x10) * iVar32);
                            lVar46 = lVar52 + lVar45;
                            uVar24 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar46 + 1) * 4);
                            uVar60 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar45) * 4);
                            uVar36 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar46 + iVar32 + 1) * 4);
                            uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar46 + iVar32) * 4);
                            uVar41 = uVar41 + iVar53;
                            uVar55 = uVar55 + iVar54;
                            iVar48 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar26 * iVar19) >> 0x10) >> 0x10);
                            iVar19 = (int)((ulong)(uVar24 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar19) >> 0x10) >> 0x10);
                            iVar26 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                            iVar31 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar31 * iVar34) >> 0x10) >> 0x10);
                            uVar8 = *(undefined2 *)(lVar21 + lVar29 * 2);
                            uVar28 = (long)iVar48 * (ulong)(uVar60 & 0xff00ff) +
                                     (long)iVar19 * (ulong)(uVar24 & 0xff00ff) +
                                     (long)iVar31 * (ulong)(uVar36 & 0xff00ff) +
                                     (long)iVar26 * (ulong)(uVar3 & 0xff00ff);
                            lVar45 = ((long)iVar48 * ((ulong)uVar60 & 0xff00) +
                                      (long)iVar19 * ((ulong)uVar24 & 0xff00) +
                                      (long)iVar31 * ((ulong)uVar36 & 0xff00) +
                                      (long)iVar26 * ((ulong)uVar3 & 0xff00) & 0xf80000) * 4 +
                                     ((uVar28 & 0xf8000000) >> 0x11) +
                                     ((long)(0x100 - (iVar19 + iVar48 + iVar26 + iVar31) >> 3) *
                                      (ulong)(CONCAT22(uVar8,uVar8) & 0x3e07c1f) >> 5 & 0x3e07c1f) +
                                     ((uVar28 & 0xf800) >> 0xb);
                            *(ushort *)(lVar21 + lVar29 * 2) =
                                 (ushort)((ulong)lVar45 >> 0x10) | (ushort)lVar45;
                          }
                        }
                      }
                      local_70 = local_70 + uVar37;
                    }
                  }
                  else {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar62 = (int)(local_20 - 1.0);
                    for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar27 < 0) {
                            iVar27 = 0;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = (0x7fff - iVar31) / iVar53;
                          }
                          if (iVar62 < iVar20) {
                            iVar20 = iVar62;
                          }
                          goto LAB_051408e8;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar27 = 0;
                          iVar20 = iVar62;
                          goto LAB_051408e8;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
LAB_051408e8:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar27 < iVar19) {
                              iVar27 = iVar19;
                            }
                            if (iVar32 < iVar20) {
                              iVar20 = iVar32;
                            }
                            goto LAB_05140944;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_05140944;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
LAB_05140944:
                          uVar36 = iVar34 + iVar27 * iVar54;
                          puVar1 = (ushort *)(local_70 + (long)iVar27 * 2);
                          uVar60 = iVar31 + iVar27 * iVar53;
                          iVar31 = *(int *)(param_1 + 0x38);
                          if (iVar27 <= iVar20) {
                            puVar23 = puVar1;
                            do {
                              iVar19 = 0xffff - (uVar60 & 0xfffe);
                              iVar26 = 0xffff - (uVar36 & 0xfffe);
                              iVar34 = (uVar60 & 0xfffe) + 1;
                              lVar21 = (long)((int)uVar60 >> 0x10) +
                                       (long)(((int)uVar36 >> 0x10) * iVar31);
                              lVar29 = lVar52 + lVar21;
                              iVar32 = (uVar36 & 0xfffe) + 1;
                              uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                              uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                              uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar31 + 1)
                                                         * 4);
                              uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar31) * 4);
                              iVar42 = (int)((ulong)(uVar3 >> 0x18) *
                                             ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                              lVar29 = (long)iVar42;
                              uVar39 = (ulong)*puVar23;
                              iVar48 = (int)((ulong)(uVar64 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                              lVar50 = (long)iVar48;
                              uVar60 = uVar60 + iVar53;
                              uVar36 = uVar36 + iVar54;
                              iVar26 = (int)((ulong)(uVar5 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar32) >> 0x10) >> 0x10);
                              lVar46 = (long)iVar26;
                              iVar34 = (int)((ulong)(uVar6 >> 0x18) *
                                             ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                              lVar21 = (long)iVar34;
                              lVar45 = (long)(0x100 - (iVar48 + iVar42 + iVar34 + iVar26));
                              puVar44 = puVar23 + 1;
                              *puVar23 = (uVar15 & (ushort)(lVar45 * (uVar39 & uVar33) >> 8)) +
                                         (short)((lVar29 * ((ulong)uVar3 & 0xff00) +
                                                  lVar50 * ((ulong)uVar64 & 0xff00) +
                                                  lVar46 * ((ulong)uVar5 & 0xff00) +
                                                  lVar21 * ((ulong)uVar6 & 0xff00) >>
                                                 ((ulong)uVar61 & 0x3f)) << ((ulong)uVar55 & 0x3f))
                                         | (uVar16 & (ushort)(lVar45 * (uVar39 & uVar38) >> 8)) +
                                           (short)((lVar29 * (ulong)(byte)uVar3 +
                                                    lVar50 * (ulong)(byte)uVar64 +
                                                    lVar46 * (ulong)(byte)uVar5 +
                                                    lVar21 * (ulong)(byte)uVar6 >>
                                                   ((ulong)uVar63 & 0x3f)) << ((ulong)uVar24 & 0x3f)
                                                  ) |
                                         (uVar14 & (ushort)(lVar45 * (uVar39 & uVar28) >> 8)) +
                                         (short)((lVar29 * ((ulong)uVar3 & 0xff0000) +
                                                  lVar50 * ((ulong)uVar64 & 0xff0000) +
                                                  lVar46 * ((ulong)uVar5 & 0xff0000) +
                                                  lVar21 * ((ulong)uVar6 & 0xff0000) >>
                                                 ((ulong)uVar10 & 0x3f)) << ((ulong)uVar41 & 0x3f));
                              puVar23 = puVar44;
                            } while (puVar44 != puVar1 + (ulong)(uint)(iVar20 - iVar27) + 1);
                          }
                        }
                      }
                      local_70 = local_70 + uVar37;
                    }
                  }
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar39 = *(ulong *)(this + 0x118);
                uVar37 = uVar39 >> 2;
                local_70 = *(long *)(this + 0x120) +
                           ((long)(int)local_28 + ((long)(int)local_24 * uVar39 >> 2)) * 8;
                Color::Color(aCStack_18,1);
                cVar17 = Sexy::operator==(param_6,aCStack_18);
                if (cVar17 == '\0') {
                  iVar18 = *(int *)param_6;
                  iVar62 = *(int *)(param_6 + 4);
                  iVar31 = *(int *)(param_6 + 8);
                  iVar27 = *(int *)(param_6 + 0xc);
                  if (0.0 < local_1c) {
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar34 = (int)(local_20 - 1.0);
                    iVar20 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar20 + (int)local_24) - param_10) - local_38);
                      iVar32 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar32 >> 0x10) {
                          iVar19 = 0;
                          if (iVar53 != 0) {
                            iVar19 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar32) /
                                     iVar53;
                          }
                          if (iVar19 < 0) {
                            iVar19 = 0;
                          }
                          iVar26 = 0;
                          if (iVar53 != 0) {
                            iVar26 = (0x7fff - iVar32) / iVar53;
                          }
                          if (iVar34 < iVar26) {
                            iVar26 = iVar34;
                          }
                          goto LAB_0513fdf4;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar32) && (iVar32 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar19 = 0;
                          iVar26 = iVar34;
                          goto LAB_0513fdf4;
                        }
                      }
                      else if (iVar32 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar26 = 0;
                        if (iVar53 != 0) {
                          iVar26 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar32) / iVar53;
                        }
                        iVar19 = 0;
                        if (iVar53 != 0) {
                          iVar19 = (0x10000 - iVar32) / iVar53;
                        }
                        if (iVar19 < 0) {
                          iVar19 = 0;
                        }
                        if (iVar34 < iVar26) {
                          iVar26 = iVar34;
                        }
LAB_0513fdf4:
                        iVar48 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar48 >> 0x10) {
                            iVar42 = 0;
                            if (iVar54 != 0) {
                              iVar42 = -iVar48 / iVar54;
                            }
                            iVar30 = 0;
                            if (iVar54 != 0) {
                              iVar30 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar48) /
                                       iVar54;
                            }
                            if (iVar19 < iVar30) {
                              iVar19 = iVar30;
                            }
                            if (iVar42 < iVar26) {
                              iVar26 = iVar42;
                            }
                            goto LAB_0513fe54;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar48) && (iVar48 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0513fe54;
                        }
                        else if (iVar48 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar42 = 0;
                          if (iVar54 != 0) {
                            iVar42 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar48) /
                                     iVar54;
                          }
                          iVar30 = 0;
                          if (iVar54 != 0) {
                            iVar30 = (0x10000 - iVar48) / iVar54;
                          }
                          if (iVar19 < iVar30) {
                            iVar19 = iVar30;
                          }
                          if (iVar42 < iVar26) {
                            iVar26 = iVar42;
                          }
LAB_0513fe54:
                          puVar2 = (ulong *)(local_70 + (long)iVar19 * 8);
                          uVar60 = iVar32 + iVar19 * iVar53;
                          uVar36 = iVar48 + iVar19 * iVar54;
                          iVar32 = *(int *)(param_1 + 0x38);
                          if (iVar19 <= iVar26) {
                            puVar35 = puVar2;
                            do {
                              iVar12 = 0xffff - (uVar60 & 0xfffe);
                              iVar13 = 0xffff - (uVar36 & 0xfffe);
                              iVar48 = (uVar60 & 0xfffe) + 1;
                              lVar21 = (long)((int)uVar60 >> 0x10) +
                                       (long)(((int)uVar36 >> 0x10) * iVar32);
                              lVar29 = lVar52 + lVar21;
                              iVar42 = (uVar36 & 0xfffe) + 1;
                              uVar60 = uVar60 + iVar53;
                              uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                              uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                              uVar47 = *puVar35;
                              uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar32 + 1)
                                                         * 4);
                              uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar32) * 4);
                              iVar30 = iVar27 * (int)((ulong)(uVar64 >> 0x18) *
                                                      ((ulong)(long)(iVar12 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              iVar13 = iVar27 * (int)((ulong)(uVar3 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar13) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar46 = (long)iVar30;
                              lVar29 = (long)iVar13;
                              iVar48 = iVar27 * (int)((ulong)(uVar5 >> 0x18) *
                                                      ((ulong)(long)(iVar48 * iVar42) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar50 = (long)iVar48;
                              iVar42 = iVar27 * (int)((ulong)(uVar6 >> 0x18) *
                                                      ((ulong)(long)(iVar42 * iVar12) >> 0x10) >>
                                                     0x10) >> 8;
                              lVar45 = (long)iVar42;
                              lVar21 = (long)(0x100 - (iVar30 + iVar13 + iVar42 + iVar48));
                              puVar49 = puVar35 + 1;
                              *puVar35 = (((lVar46 * ((ulong)uVar64 & 0xff00) +
                                            lVar29 * ((ulong)uVar3 & 0xff00) +
                                            lVar50 * ((ulong)uVar5 & 0xff00) +
                                            lVar45 * ((ulong)uVar6 & 0xff00) >> 8) *
                                           (long)(iVar62 + 1) >> ((ulong)uVar61 & 0x3f)) <<
                                         ((ulong)uVar55 & 0x3f)) +
                                         (uVar33 & lVar21 * (uVar47 & uVar33) >> 8) |
                                         (((lVar46 * (ulong)(byte)uVar64 +
                                            lVar29 * (ulong)(byte)uVar3 +
                                            lVar50 * (ulong)(byte)uVar5 +
                                            lVar45 * (ulong)(byte)uVar6 >> 8) * (long)(iVar31 + 1)
                                          >> ((ulong)uVar63 & 0x3f)) << ((ulong)uVar24 & 0x3f)) +
                                         (uVar38 & lVar21 * (uVar47 & uVar38) >> 8) |
                                         (((lVar46 * ((ulong)uVar64 & 0xff0000) +
                                            lVar29 * ((ulong)uVar3 & 0xff0000) +
                                            lVar50 * ((ulong)uVar5 & 0xff0000) +
                                            lVar45 * ((ulong)uVar6 & 0xff0000) >> 8) *
                                           (long)(iVar18 + 1) >> ((ulong)uVar10 & 0x3f)) <<
                                         ((ulong)uVar41 & 0x3f)) +
                                         (uVar28 & lVar21 * (uVar47 & uVar28) >> 8);
                              uVar36 = uVar36 + iVar54;
                              puVar35 = puVar49;
                            } while (puVar49 != puVar2 + (ulong)(uint)(iVar26 - iVar19) + 1);
                          }
                        }
                      }
                      iVar20 = iVar20 + 1;
                      local_70 = local_70 +
                                 (-(uVar39 >> 0x21 & 1) & 0xfffffff800000000 |
                                 (uVar37 & 0xffffffff) << 3);
                    } while ((float)iVar20 < local_1c);
                  }
                }
                else if (gOptimizeSoftwareDrawing == '\0') {
                  if (0.0 < local_1c) {
                    iVar62 = (int)(local_20 - 1.0);
                    dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                    iVar18 = 0;
                    do {
                      dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                      iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar31 >> 0x10) {
                          iVar27 = 0;
                          if (iVar53 != 0) {
                            iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) /
                                     iVar53;
                          }
                          if (iVar27 < 0) {
                            iVar27 = 0;
                          }
                          iVar20 = 0;
                          if (iVar53 != 0) {
                            iVar20 = (0x7fff - iVar31) / iVar53;
                          }
                          if (iVar62 < iVar20) {
                            iVar20 = iVar62;
                          }
                          goto LAB_0513f39c;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                          iVar27 = 0;
                          iVar20 = iVar62;
                          goto LAB_0513f39c;
                        }
                      }
                      else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = (0x10000 - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
LAB_0513f39c:
                        iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                      65536.0);
                        if (iVar54 < 0) {
                          if (-1 < iVar34 >> 0x10) {
                            iVar32 = 0;
                            if (iVar54 != 0) {
                              iVar32 = -iVar34 / iVar54;
                            }
                            iVar19 = 0;
                            if (iVar54 != 0) {
                              iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                       iVar54;
                            }
                            if (iVar27 < iVar19) {
                              iVar27 = iVar19;
                            }
                            if (iVar32 < iVar20) {
                              iVar20 = iVar32;
                            }
                            goto LAB_0513f3f8;
                          }
                        }
                        else if (iVar54 == 0) {
                          if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                          goto LAB_0513f3f8;
                        }
                        else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = (0x10000 - iVar34) / iVar54;
                          }
                          if (iVar27 < iVar32) {
                            iVar27 = iVar32;
                          }
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                     iVar54;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
LAB_0513f3f8:
                          puVar2 = (ulong *)(local_70 + (long)iVar27 * 8);
                          uVar60 = iVar31 + iVar27 * iVar53;
                          uVar36 = iVar34 + iVar27 * iVar54;
                          iVar31 = *(int *)(param_1 + 0x38);
                          if (iVar27 <= iVar20) {
                            puVar35 = puVar2;
                            do {
                              iVar19 = 0xffff - (uVar60 & 0xfffe);
                              iVar26 = 0xffff - (uVar36 & 0xfffe);
                              iVar34 = (uVar60 & 0xfffe) + 1;
                              lVar21 = (long)((int)uVar60 >> 0x10) +
                                       (long)(((int)uVar36 >> 0x10) * iVar31);
                              lVar29 = lVar52 + lVar21;
                              iVar32 = (uVar36 & 0xfffe) + 1;
                              uVar47 = *puVar35;
                              uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                              uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                              uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar31 + 1)
                                                         * 4);
                              uVar60 = uVar60 + iVar53;
                              iVar48 = (int)((ulong)(uVar3 >> 0x18) *
                                             ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                              lVar45 = (long)iVar48;
                              uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar31) * 4);
                              iVar26 = (int)((ulong)(uVar64 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                              lVar50 = (long)iVar26;
                              iVar34 = (int)((ulong)(uVar5 >> 0x18) *
                                             ((ulong)(long)(iVar34 * iVar32) >> 0x10) >> 0x10);
                              lVar46 = (long)iVar34;
                              iVar32 = (int)((ulong)(uVar6 >> 0x18) *
                                             ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                              lVar29 = (long)iVar32;
                              uVar36 = uVar36 + iVar54;
                              lVar21 = (long)(0x100 - (iVar26 + iVar48 + iVar32 + iVar34));
                              puVar49 = puVar35 + 1;
                              *puVar35 = (uVar33 & lVar21 * (uVar47 & uVar33) >> 8) +
                                         ((lVar45 * ((ulong)uVar3 & 0xff00) +
                                           lVar50 * ((ulong)uVar64 & 0xff00) +
                                           lVar46 * ((ulong)uVar5 & 0xff00) +
                                           lVar29 * ((ulong)uVar6 & 0xff00) >>
                                          ((ulong)uVar61 & 0x3f)) << ((ulong)uVar55 & 0x3f)) |
                                         (uVar38 & lVar21 * (uVar47 & uVar38) >> 8) +
                                         ((lVar45 * (ulong)(byte)uVar3 +
                                           lVar50 * (ulong)(byte)uVar64 +
                                           lVar46 * (ulong)(byte)uVar5 + lVar29 * (ulong)(byte)uVar6
                                          >> ((ulong)uVar63 & 0x3f)) << ((ulong)uVar24 & 0x3f)) |
                                         (uVar28 & lVar21 * (uVar47 & uVar28) >> 8) +
                                         ((lVar45 * ((ulong)uVar3 & 0xff0000) +
                                           lVar50 * ((ulong)uVar64 & 0xff0000) +
                                           lVar46 * ((ulong)uVar5 & 0xff0000) +
                                           lVar29 * ((ulong)uVar6 & 0xff0000) >>
                                          ((ulong)uVar10 & 0x3f)) << ((ulong)uVar41 & 0x3f));
                              puVar35 = puVar49;
                            } while (puVar49 != puVar2 + (ulong)(uint)(iVar20 - iVar27) + 1);
                          }
                        }
                      }
                      iVar18 = iVar18 + 1;
                      local_70 = local_70 +
                                 (-(uVar39 >> 0x21 & 1) & 0xfffffff800000000 |
                                 (uVar37 & 0xffffffff) << 3);
                    } while ((float)iVar18 < local_1c);
                  }
                }
                else {
                  iVar62 = (int)(local_20 - 1.0);
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  for (iVar18 = 0; (float)iVar18 < local_1c; iVar18 = iVar18 + 1) {
                    dVar59 = (double)(((float)(iVar18 + (int)local_24) - param_10) - local_38);
                    iVar31 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar53 < 0) {
                      if (-1 < iVar31 >> 0x10) {
                        iVar27 = 0;
                        if (iVar53 != 0) {
                          iVar27 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar31) / iVar53;
                        }
                        if (iVar27 < 0) {
                          iVar27 = 0;
                        }
                        iVar20 = 0;
                        if (iVar53 != 0) {
                          iVar20 = (0x7fff - iVar31) / iVar53;
                        }
                        if (iVar62 < iVar20) {
                          iVar20 = iVar62;
                        }
                        goto LAB_05140cc0;
                      }
                    }
                    else if (iVar53 == 0) {
                      if ((-1 < iVar31) && (iVar31 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar27 = 0;
                        iVar20 = iVar62;
                        goto LAB_05140cc0;
                      }
                    }
                    else if (iVar31 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar27 = 0;
                      if (iVar53 != 0) {
                        iVar27 = (0x10000 - iVar31) / iVar53;
                      }
                      if (iVar27 < 0) {
                        iVar27 = 0;
                      }
                      iVar20 = 0;
                      if (iVar53 != 0) {
                        iVar20 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar31) / iVar53;
                      }
                      if (iVar62 < iVar20) {
                        iVar20 = iVar62;
                      }
LAB_05140cc0:
                      iVar34 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar54 < 0) {
                        if (-1 < iVar34 >> 0x10) {
                          iVar32 = 0;
                          if (iVar54 != 0) {
                            iVar32 = -iVar34 / iVar54;
                          }
                          iVar19 = 0;
                          if (iVar54 != 0) {
                            iVar19 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar34) /
                                     iVar54;
                          }
                          if (iVar27 < iVar19) {
                            iVar27 = iVar19;
                          }
                          if (iVar32 < iVar20) {
                            iVar20 = iVar32;
                          }
                          goto LAB_05140d1c;
                        }
                      }
                      else if (iVar54 == 0) {
                        if ((-1 < iVar34) && (iVar34 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_05140d1c;
                      }
                      else if (iVar34 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar32 = 0;
                        if (iVar54 != 0) {
                          iVar32 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar34) /
                                   iVar54;
                        }
                        iVar19 = 0;
                        if (iVar54 != 0) {
                          iVar19 = (0x10000 - iVar34) / iVar54;
                        }
                        if (iVar27 < iVar19) {
                          iVar27 = iVar19;
                        }
                        if (iVar32 < iVar20) {
                          iVar20 = iVar32;
                        }
LAB_05140d1c:
                        puVar2 = (ulong *)(local_70 + (long)iVar27 * 8);
                        uVar41 = iVar31 + iVar27 * iVar53;
                        uVar55 = iVar34 + iVar27 * iVar54;
                        iVar31 = *(int *)(param_1 + 0x38);
                        if (iVar27 <= iVar20) {
                          puVar35 = puVar2;
                          do {
                            lVar21 = (long)((int)uVar41 >> 0x10) +
                                     (long)(((int)uVar55 >> 0x10) * iVar31);
                            lVar29 = lVar52 + lVar21;
                            iVar19 = 0xffff - (uVar41 & 0xfffe);
                            iVar26 = 0xffff - (uVar55 & 0xfffe);
                            iVar34 = (uVar41 & 0xfffe) + 1;
                            iVar32 = (uVar55 & 0xfffe) + 1;
                            uVar24 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar21) * 4);
                            uVar60 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + 1) * 4);
                            uVar36 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + (long)iVar31 + 1)
                                                        * 4);
                            uVar3 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar29 + iVar31) * 4);
                            iVar48 = (int)((ulong)(uVar24 >> 0x18) *
                                           ((ulong)(long)(iVar19 * iVar26) >> 0x10) >> 0x10);
                            iVar26 = (int)((ulong)(uVar60 >> 0x18) *
                                           ((ulong)(long)(iVar34 * iVar26) >> 0x10) >> 0x10);
                            iVar34 = (int)((ulong)(uVar36 >> 0x18) *
                                           ((ulong)(long)(iVar34 * iVar32) >> 0x10) >> 0x10);
                            iVar32 = (int)((ulong)(uVar3 >> 0x18) *
                                           ((ulong)(long)(iVar32 * iVar19) >> 0x10) >> 0x10);
                            lVar21 = (long)(0x100 - (iVar26 + iVar48 + iVar32 + iVar34));
                            uVar41 = uVar41 + iVar53;
                            uVar55 = uVar55 + iVar54;
                            puVar49 = puVar35 + 1;
                            *puVar35 = ((long)iVar48 * ((ulong)uVar24 & 0xff00) +
                                        (long)iVar26 * ((ulong)uVar60 & 0xff00) +
                                        (long)iVar34 * ((ulong)uVar36 & 0xff00) +
                                        (long)iVar32 * ((ulong)uVar3 & 0xff00) & 0xff0000) +
                                       lVar21 * (*puVar35 & 0xff00) >> 8 & 0xff00 |
                                       ((long)iVar48 * (ulong)(uVar24 & 0xff00ff) +
                                        (long)iVar26 * (ulong)(uVar60 & 0xff00ff) +
                                        (long)iVar34 * (ulong)(uVar36 & 0xff00ff) +
                                        (long)iVar32 * (ulong)(uVar3 & 0xff00ff) & 0xff00ff00) +
                                       lVar21 * (*puVar35 & 0xff00ff) >> 8 & 0xff00ff;
                            puVar35 = puVar49;
                          } while (puVar49 != puVar2 + (ulong)(uint)(iVar20 - iVar27) + 1);
                        }
                      }
                    }
                    local_70 = local_70 +
                               (-(uVar39 >> 0x21 & 1) & 0xfffffff800000000 |
                               (uVar37 & 0xffffffff) << 3);
                  }
                }
              }
            }
          }
          else {
            lVar51 = *(long *)(this_00 + 0x80);
            if (lVar51 == 0) {
              lVar51 = (**(code **)(*(long *)this_00 + 0xd0))(this_00,0,0,0,0);
              iVar54 = *(int *)param_4;
              iVar18 = *(int *)(param_4 + 4);
              iVar62 = LotteryResultProgressBar::GetCurrentLevel(this_00);
              dVar56 = cos(param_8);
              dVar57 = sin(param_8);
              cVar17 = (**(code **)(*(long *)this + 0x200))(this);
              if (cVar17 == '\0') goto LAB_0513d37c;
              iVar53 = (int)(dVar57 * 65536.0);
              iVar31 = (int)(dVar56 * 65536.0);
              lVar51 = lVar51 + ((long)iVar54 + (long)(iVar18 * iVar62)) * 4;
              lVar52 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar52 = *(long *)(lVar52 + 0x28);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar21 = *(long *)(lVar21 + 0x30);
              lVar29 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar29 = *(long *)(lVar29 + 0x38);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar41 = *(uint *)(lVar45 + 0x1c);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar55 = *(uint *)(lVar45 + 0x20);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar24 = *(uint *)(lVar45 + 0x24);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar10 = 0x20 - *(int *)(lVar45 + 0x10);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              iVar54 = *(int *)(lVar45 + 0x14);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              iVar18 = *(int *)(lVar45 + 0x18);
              uVar60 = *(uint *)(this + 0x138);
              uVar36 = *(uint *)(this + 0x13c);
              uVar3 = *(uint *)(this + 0x140);
              if (*(int *)(this + 0x134) == 0x10) {
                uVar28 = *(ulong *)(this + 0x118);
                iVar62 = *(int *)(param_6 + 0xc);
                iVar27 = *(int *)param_6;
                iVar20 = *(int *)(param_6 + 4);
                iVar34 = *(int *)(param_6 + 8);
                lVar45 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar28 >> 1)) * 2;
                if (0.0 < local_1c) {
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  iVar32 = 0;
                  iVar19 = (int)(local_20 - 1.0);
                  do {
                    dVar59 = (double)(((float)(iVar32 + (int)local_24) - param_10) - local_38);
                    iVar26 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar31 < 0) {
                      if (-1 < iVar26 >> 0x10) {
                        iVar48 = 0;
                        if (iVar31 != 0) {
                          iVar48 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar31;
                        }
                        if (iVar48 < 0) {
                          iVar48 = 0;
                        }
                        iVar42 = 0;
                        if (iVar31 != 0) {
                          iVar42 = (0x7fff - iVar26) / iVar31;
                        }
                        if (iVar19 < iVar42) {
                          iVar42 = iVar19;
                        }
                        goto LAB_051403d0;
                      }
                    }
                    else if (iVar31 == 0) {
                      if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar48 = 0;
                        iVar42 = iVar19;
                        goto LAB_051403d0;
                      }
                    }
                    else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar42 = 0;
                      if (iVar31 != 0) {
                        iVar42 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar31;
                      }
                      iVar48 = 0;
                      if (iVar31 != 0) {
                        iVar48 = (0x10000 - iVar26) / iVar31;
                      }
                      if (iVar48 < 0) {
                        iVar48 = 0;
                      }
                      if (iVar19 < iVar42) {
                        iVar42 = iVar19;
                      }
LAB_051403d0:
                      iVar30 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar30 >> 0x10) {
                          iVar13 = 0;
                          if (iVar53 != 0) {
                            iVar13 = -iVar30 / iVar53;
                          }
                          iVar12 = 0;
                          if (iVar53 != 0) {
                            iVar12 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar30) /
                                     iVar53;
                          }
                          if (iVar48 < iVar12) {
                            iVar48 = iVar12;
                          }
                          if (iVar13 < iVar42) {
                            iVar42 = iVar13;
                          }
                          goto LAB_05140430;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar30) && (iVar30 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_05140430;
                      }
                      else if (iVar30 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar13 = 0;
                        if (iVar53 != 0) {
                          iVar13 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar30) /
                                   iVar53;
                        }
                        iVar12 = 0;
                        if (iVar53 != 0) {
                          iVar12 = (0x10000 - iVar30) / iVar53;
                        }
                        if (iVar48 < iVar12) {
                          iVar48 = iVar12;
                        }
                        if (iVar13 < iVar42) {
                          iVar42 = iVar13;
                        }
LAB_05140430:
                        uVar61 = iVar26 + iVar48 * iVar31;
                        uVar63 = iVar30 + iVar48 * iVar53;
                        puVar1 = (ushort *)(lVar45 + (long)iVar48 * 2);
                        uVar64 = *(uint *)(param_1 + 0x38);
                        if (iVar48 <= iVar42) {
                          uVar33 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar64 << 2;
                          puVar23 = puVar1;
                          do {
                            iVar13 = 0xffff - (uVar61 & 0xfffe);
                            iVar12 = 0xffff - (uVar63 & 0xfffe);
                            iVar26 = (uVar61 & 0xfffe) + 1;
                            lVar50 = ((long)((int)uVar61 >> 0x10) +
                                     (long)(int)(((int)uVar63 >> 0x10) * uVar64)) * 4;
                            lVar46 = lVar51 + lVar50;
                            iVar30 = (uVar63 & 0xfffe) + 1;
                            uVar6 = *(uint *)(lVar51 + lVar50);
                            uVar61 = uVar61 + iVar31;
                            uVar5 = *(uint *)(lVar46 + 4);
                            uVar7 = *(uint *)(lVar46 + uVar33 + 4);
                            lVar50 = (long)((ulong)(uVar6 >> 0x18) *
                                            ((ulong)(long)(iVar13 * iVar12) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar4 = *(uint *)(lVar46 + uVar33);
                            lVar46 = (long)((ulong)(uVar5 >> 0x18) *
                                            ((ulong)(long)(iVar26 * iVar12) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar40 = (long)((ulong)(uVar7 >> 0x18) *
                                            ((ulong)(long)(iVar26 * iVar30) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar38 = (ulong)*puVar23;
                            lVar43 = (long)((ulong)(uVar4 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar13) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar63 = uVar63 + iVar53;
                            puVar44 = puVar23 + 1;
                            *puVar23 = (ushort)(*(int *)(lVar29 + (((lVar50 * (ulong)(byte)uVar6 +
                                                                     lVar46 * (ulong)(byte)uVar5 +
                                                                     lVar40 * (ulong)(byte)uVar7 +
                                                                    lVar43 * (ulong)(byte)uVar4) *
                                                                    (long)((iVar62 * iVar34) / 0xff)
                                                                   >> ((ulong)(0x18U - iVar18 & 0xff
                                                                              ) & 0x3f)) +
                                                                  ((uVar38 & uVar3) >>
                                                                  ((ulong)uVar24 & 0x3f))) * 4) <<
                                               (ulong)(uVar24 & 0x1f)) |
                                       (ushort)(*(int *)(lVar21 + (((lVar50 * ((ulong)uVar6 & 0xff00
                                                                              ) +
                                                                     lVar46 * ((ulong)uVar5 & 0xff00
                                                                              ) +
                                                                     lVar40 * ((ulong)uVar7 & 0xff00
                                                                              ) +
                                                                    lVar43 * ((ulong)uVar4 & 0xff00)
                                                                    ) * (long)((iVar62 * iVar20) /
                                                                              0xff) >>
                                                                   ((ulong)(0x20U - iVar54 & 0xff) &
                                                                   0x3f)) + ((uVar38 & uVar36) >>
                                                                            ((ulong)uVar55 & 0x3f)))
                                                                  * 4) << (ulong)(uVar55 & 0x1f)) |
                                       (ushort)(*(int *)(lVar52 + (((uVar38 & uVar60) >>
                                                                   ((ulong)uVar41 & 0x3f)) +
                                                                  ((lVar50 * ((ulong)uVar6 &
                                                                             0xff0000) +
                                                                    lVar46 * ((ulong)uVar5 &
                                                                             0xff0000) +
                                                                    lVar40 * ((ulong)uVar7 &
                                                                             0xff0000) +
                                                                    lVar43 * ((ulong)uVar4 &
                                                                             0xff0000) >>
                                                                   ((ulong)uVar10 & 0x3f)) *
                                                                   (long)((iVar62 * iVar27) / 0xff)
                                                                  >> 8)) * 4) <<
                                               (ulong)(uVar41 & 0x1f));
                            puVar23 = puVar44;
                          } while (puVar44 != puVar1 + (ulong)(uint)(iVar42 - iVar48) + 1);
                        }
                      }
                    }
                    iVar32 = iVar32 + 1;
                    lVar45 = lVar45 + (-(uVar28 >> 0x20 & 1) & 0xfffffffe00000000 |
                                      (uVar28 >> 1 & 0xffffffff) << 1);
                  } while ((float)iVar32 < local_1c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar28 = *(ulong *)(this + 0x118);
                iVar62 = *(int *)(param_6 + 0xc);
                iVar27 = *(int *)(param_6 + 4);
                iVar20 = *(int *)(param_6 + 8);
                iVar34 = *(int *)param_6;
                lVar45 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar28 >> 2)) * 8;
                if (0.0 < local_1c) {
                  iVar32 = 0;
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  iVar19 = (int)(local_20 - 1.0);
                  do {
                    dVar59 = (double)(((float)(iVar32 + (int)local_24) - param_10) - local_38);
                    iVar26 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar31 < 0) {
                      if (-1 < iVar26 >> 0x10) {
                        iVar48 = 0;
                        if (iVar31 != 0) {
                          iVar48 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar31;
                        }
                        if (iVar48 < 0) {
                          iVar48 = 0;
                        }
                        iVar42 = 0;
                        if (iVar31 != 0) {
                          iVar42 = (0x7fff - iVar26) / iVar31;
                        }
                        if (iVar19 < iVar42) {
                          iVar42 = iVar19;
                        }
                        goto LAB_0513df40;
                      }
                    }
                    else if (iVar31 == 0) {
                      if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar48 = 0;
                        iVar42 = iVar19;
                        goto LAB_0513df40;
                      }
                    }
                    else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar42 = 0;
                      if (iVar31 != 0) {
                        iVar42 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar31;
                      }
                      iVar48 = 0;
                      if (iVar31 != 0) {
                        iVar48 = (0x10000 - iVar26) / iVar31;
                      }
                      if (iVar48 < 0) {
                        iVar48 = 0;
                      }
                      if (iVar19 < iVar42) {
                        iVar42 = iVar19;
                      }
LAB_0513df40:
                      iVar30 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar30 >> 0x10) {
                          iVar13 = 0;
                          if (iVar53 != 0) {
                            iVar13 = -iVar30 / iVar53;
                          }
                          iVar12 = 0;
                          if (iVar53 != 0) {
                            iVar12 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar30) /
                                     iVar53;
                          }
                          if (iVar48 < iVar12) {
                            iVar48 = iVar12;
                          }
                          if (iVar13 < iVar42) {
                            iVar42 = iVar13;
                          }
                          goto LAB_0513dfa0;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar30) && (iVar30 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_0513dfa0;
                      }
                      else if (iVar30 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar13 = 0;
                        if (iVar53 != 0) {
                          iVar13 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar30) /
                                   iVar53;
                        }
                        iVar12 = 0;
                        if (iVar53 != 0) {
                          iVar12 = (0x10000 - iVar30) / iVar53;
                        }
                        if (iVar48 < iVar12) {
                          iVar48 = iVar12;
                        }
                        if (iVar13 < iVar42) {
                          iVar42 = iVar13;
                        }
LAB_0513dfa0:
                        uVar61 = iVar26 + iVar48 * iVar31;
                        uVar63 = iVar30 + iVar48 * iVar53;
                        puVar2 = (ulong *)(lVar45 + (long)iVar48 * 8);
                        uVar64 = *(uint *)(param_1 + 0x38);
                        if (iVar48 <= iVar42) {
                          uVar33 = -(ulong)(uVar64 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar64 << 2;
                          puVar35 = puVar2;
                          do {
                            iVar13 = 0xffff - (uVar61 & 0xfffe);
                            iVar12 = 0xffff - (uVar63 & 0xfffe);
                            iVar26 = (uVar61 & 0xfffe) + 1;
                            lVar50 = ((long)((int)uVar61 >> 0x10) +
                                     (long)(int)(((int)uVar63 >> 0x10) * uVar64)) * 4;
                            iVar30 = (uVar63 & 0xfffe) + 1;
                            lVar46 = lVar51 + lVar50;
                            uVar61 = uVar61 + iVar31;
                            uVar6 = *(uint *)(lVar51 + lVar50);
                            uVar63 = uVar63 + iVar53;
                            uVar5 = *(uint *)(lVar46 + 4);
                            uVar7 = *(uint *)(lVar46 + uVar33 + 4);
                            lVar50 = (long)((ulong)(uVar6 >> 0x18) *
                                            ((ulong)(long)(iVar13 * iVar12) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar4 = *(uint *)(lVar46 + uVar33);
                            lVar46 = (long)((ulong)(uVar5 >> 0x18) *
                                            ((ulong)(long)(iVar26 * iVar12) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar40 = (long)((ulong)(uVar7 >> 0x18) *
                                            ((ulong)(long)(iVar26 * iVar30) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar38 = *puVar35;
                            lVar43 = (long)((ulong)(uVar4 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar13) >> 0x10) * 0x10000) >>
                                     0x20;
                            puVar49 = puVar35 + 1;
                            *puVar35 = (long)(*(int *)(lVar29 + (((lVar50 * (ulong)(byte)uVar6 +
                                                                   lVar46 * (ulong)(byte)uVar5 +
                                                                   lVar40 * (ulong)(byte)uVar7 +
                                                                  lVar43 * (ulong)(byte)uVar4) *
                                                                  (long)((iVar62 * iVar20) / 0xff)
                                                                 >> ((ulong)(0x18U - iVar18 & 0xff)
                                                                    & 0x3f)) +
                                                                ((uVar38 & uVar3) >>
                                                                ((ulong)uVar24 & 0x3f))) * 4) <<
                                              (ulong)(uVar24 & 0x1f) |
                                              *(int *)(lVar21 + (((lVar50 * ((ulong)uVar6 & 0xff00)
                                                                   + lVar46 * ((ulong)uVar5 & 0xff00
                                                                              ) +
                                                                   lVar40 * ((ulong)uVar7 & 0xff00)
                                                                  + lVar43 * ((ulong)uVar4 & 0xff00)
                                                                  ) * (long)((iVar62 * iVar27) /
                                                                            0xff) >>
                                                                 ((ulong)(0x20 - iVar54) & 0x3f)) +
                                                                ((uVar38 & uVar36) >>
                                                                ((ulong)uVar55 & 0x3f))) * 4) <<
                                              (ulong)(uVar55 & 0x1f) |
                                             *(int *)(lVar52 + (((uVar38 & uVar60) >>
                                                                ((ulong)uVar41 & 0x3f)) +
                                                               ((lVar50 * ((ulong)uVar6 & 0xff0000)
                                                                 + lVar46 * ((ulong)uVar5 & 0xff0000
                                                                            ) +
                                                                 lVar40 * ((ulong)uVar7 & 0xff0000)
                                                                 + lVar43 * ((ulong)uVar4 & 0xff0000
                                                                            ) >>
                                                                ((ulong)uVar10 & 0x3f)) *
                                                                (long)((iVar62 * iVar34) / 0xff) >>
                                                               8)) * 4) << (ulong)(uVar41 & 0x1f));
                            puVar35 = puVar49;
                          } while (puVar49 != puVar2 + (ulong)(uint)(iVar42 - iVar48) + 1);
                        }
                      }
                    }
                    iVar32 = iVar32 + 1;
                    lVar45 = lVar45 + (-(uVar28 >> 0x21 & 1) & 0xfffffff800000000 |
                                      (uVar28 >> 2 & 0xffffffff) << 3);
                  } while ((float)iVar32 < local_1c);
                }
              }
            }
            else {
              lVar52 = *(long *)(this_00 + 0x88);
              iVar54 = *(int *)param_4;
              iVar18 = *(int *)(param_4 + 4);
              iVar62 = LotteryResultProgressBar::GetCurrentLevel(this_00);
              dVar56 = cos(param_8);
              dVar57 = sin(param_8);
              cVar17 = (**(code **)(*(long *)this + 0x200))(this);
              if (cVar17 == '\0') goto LAB_0513d37c;
              iVar53 = (int)(dVar57 * 65536.0);
              lVar52 = lVar52 + (long)iVar54 + (long)(iVar18 * iVar62);
              iVar18 = (int)(dVar56 * 65536.0);
              lVar21 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar21 = *(long *)(lVar21 + 0x28);
              lVar29 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar29 = *(long *)(lVar29 + 0x30);
              lVar45 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              lVar45 = *(long *)(lVar45 + 0x38);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar41 = *(uint *)(lVar46 + 0x1c);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar55 = *(uint *)(lVar46 + 0x20);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar24 = *(uint *)(lVar46 + 0x24);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              uVar10 = 0x20 - *(int *)(lVar46 + 0x10);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              iVar62 = *(int *)(lVar46 + 0x14);
              lVar46 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
              iVar54 = *(int *)(lVar46 + 0x18);
              uVar60 = *(uint *)(this + 0x138);
              uVar36 = *(uint *)(this + 0x13c);
              uVar3 = *(uint *)(this + 0x140);
              if (*(int *)(this + 0x134) == 0x10) {
                iVar31 = *(int *)(param_6 + 0xc);
                iVar27 = *(int *)param_6;
                iVar20 = *(int *)(param_6 + 4);
                iVar34 = *(int *)(param_6 + 8);
                uVar28 = *(ulong *)(this + 0x118);
                lVar46 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar28 >> 1)) * 2;
                if (0.0 < local_1c) {
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  iVar32 = 0;
                  iVar19 = (int)(local_20 - 1.0);
                  do {
                    dVar59 = (double)(((float)(iVar32 + (int)local_24) - param_10) - local_38);
                    iVar26 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar18 < 0) {
                      if (-1 < iVar26 >> 0x10) {
                        iVar48 = 0;
                        if (iVar18 != 0) {
                          iVar48 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar18;
                        }
                        if (iVar48 < 0) {
                          iVar48 = 0;
                        }
                        iVar42 = 0;
                        if (iVar18 != 0) {
                          iVar42 = (0x7fff - iVar26) / iVar18;
                        }
                        if (iVar19 < iVar42) {
                          iVar42 = iVar19;
                        }
                        goto LAB_0513ea20;
                      }
                    }
                    else if (iVar18 == 0) {
                      if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar48 = 0;
                        iVar42 = iVar19;
                        goto LAB_0513ea20;
                      }
                    }
                    else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar42 = 0;
                      if (iVar18 != 0) {
                        iVar42 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar18;
                      }
                      iVar48 = 0;
                      if (iVar18 != 0) {
                        iVar48 = (0x10000 - iVar26) / iVar18;
                      }
                      if (iVar48 < 0) {
                        iVar48 = 0;
                      }
                      if (iVar19 < iVar42) {
                        iVar42 = iVar19;
                      }
LAB_0513ea20:
                      iVar30 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar30 >> 0x10) {
                          iVar13 = 0;
                          if (iVar53 != 0) {
                            iVar13 = -iVar30 / iVar53;
                          }
                          iVar12 = 0;
                          if (iVar53 != 0) {
                            iVar12 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar30) /
                                     iVar53;
                          }
                          if (iVar48 < iVar12) {
                            iVar48 = iVar12;
                          }
                          if (iVar13 < iVar42) {
                            iVar42 = iVar13;
                          }
                          goto LAB_0513ea80;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar30) && (iVar30 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_0513ea80;
                      }
                      else if (iVar30 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar13 = 0;
                        if (iVar53 != 0) {
                          iVar13 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar30) /
                                   iVar53;
                        }
                        iVar12 = 0;
                        if (iVar53 != 0) {
                          iVar12 = (0x10000 - iVar30) / iVar53;
                        }
                        if (iVar48 < iVar12) {
                          iVar48 = iVar12;
                        }
                        if (iVar13 < iVar42) {
                          iVar42 = iVar13;
                        }
LAB_0513ea80:
                        uVar61 = iVar26 + iVar48 * iVar18;
                        uVar63 = iVar30 + iVar48 * iVar53;
                        puVar1 = (ushort *)(lVar46 + (long)iVar48 * 2);
                        iVar26 = *(int *)(param_1 + 0x38);
                        if (iVar48 <= iVar42) {
                          puVar23 = puVar1;
                          do {
                            iVar12 = 0xffff - (uVar61 & 0xfffe);
                            iVar11 = 0xffff - (uVar63 & 0xfffe);
                            lVar50 = (long)((int)uVar61 >> 0x10) +
                                     (long)(((int)uVar63 >> 0x10) * iVar26);
                            lVar40 = lVar52 + lVar50;
                            iVar30 = (uVar61 & 0xfffe) + 1;
                            iVar13 = (uVar63 & 0xfffe) + 1;
                            uVar61 = uVar61 + iVar18;
                            uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar50) * 4);
                            uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + 1) * 4);
                            uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + (long)iVar26 + 1) *
                                                       4);
                            lVar50 = (long)((ulong)(uVar64 >> 0x18) *
                                            ((ulong)(long)(iVar12 * iVar11) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar43 = (long)((ulong)(uVar5 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar11) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar7 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + iVar26) * 4);
                            lVar40 = (long)((ulong)(uVar6 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar13) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar9 = (long)((ulong)(uVar7 >> 0x18) *
                                           ((ulong)(long)(iVar13 * iVar12) >> 0x10) * 0x10000) >>
                                    0x20;
                            uVar33 = (ulong)*puVar23;
                            uVar63 = uVar63 + iVar53;
                            puVar44 = puVar23 + 1;
                            *puVar23 = (ushort)(*(int *)(lVar45 + (((lVar50 * (ulong)(byte)uVar64 +
                                                                     lVar43 * (ulong)(byte)uVar5 +
                                                                     lVar40 * (ulong)(byte)uVar6 +
                                                                    lVar9 * (ulong)(byte)uVar7) *
                                                                    (long)((iVar31 * iVar34) / 0xff)
                                                                   >> ((ulong)(0x18U - iVar54 & 0xff
                                                                              ) & 0x3f)) +
                                                                  ((uVar33 & uVar3) >>
                                                                  ((ulong)uVar24 & 0x3f))) * 4) <<
                                               (ulong)(uVar24 & 0x1f)) |
                                       (ushort)(*(int *)(lVar29 + (((lVar50 * ((ulong)uVar64 &
                                                                              0xff00) +
                                                                     lVar43 * ((ulong)uVar5 & 0xff00
                                                                              ) +
                                                                     lVar40 * ((ulong)uVar6 & 0xff00
                                                                              ) +
                                                                    lVar9 * ((ulong)uVar7 & 0xff00))
                                                                    * (long)((iVar31 * iVar20) /
                                                                            0xff) >>
                                                                   ((ulong)(0x20U - iVar62 & 0xff) &
                                                                   0x3f)) + ((uVar33 & uVar36) >>
                                                                            ((ulong)uVar55 & 0x3f)))
                                                                  * 4) << (ulong)(uVar55 & 0x1f)) |
                                       (ushort)(*(int *)(lVar21 + (((uVar33 & uVar60) >>
                                                                   ((ulong)uVar41 & 0x3f)) +
                                                                  ((lVar50 * ((ulong)uVar64 &
                                                                             0xff0000) +
                                                                    lVar43 * ((ulong)uVar5 &
                                                                             0xff0000) +
                                                                    lVar40 * ((ulong)uVar6 &
                                                                             0xff0000) +
                                                                    lVar9 * ((ulong)uVar7 & 0xff0000
                                                                            ) >>
                                                                   ((ulong)uVar10 & 0x3f)) *
                                                                   (long)((iVar31 * iVar27) / 0xff)
                                                                  >> 8)) * 4) <<
                                               (ulong)(uVar41 & 0x1f));
                            puVar23 = puVar44;
                          } while (puVar44 != puVar1 + (ulong)(uint)(iVar42 - iVar48) + 1);
                        }
                      }
                    }
                    iVar32 = iVar32 + 1;
                    lVar46 = lVar46 + (-(uVar28 >> 0x20 & 1) & 0xfffffffe00000000 |
                                      (uVar28 >> 1 & 0xffffffff) << 1);
                  } while ((float)iVar32 < local_1c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                iVar31 = *(int *)(param_6 + 0xc);
                iVar27 = *(int *)param_6;
                iVar20 = *(int *)(param_6 + 4);
                iVar34 = *(int *)(param_6 + 8);
                uVar28 = *(ulong *)(this + 0x118);
                lVar46 = *(long *)(this + 0x120) +
                         ((long)(int)local_28 + ((long)(int)local_24 * uVar28 >> 2)) * 8;
                if (0.0 < local_1c) {
                  iVar32 = 0;
                  dVar58 = (double)(((float)(int)local_28 - param_9) - local_34[0]);
                  iVar19 = (int)(local_20 - 1.0);
                  do {
                    dVar59 = (double)(((float)(iVar32 + (int)local_24) - param_10) - local_38);
                    iVar26 = (int)((((double)param_9 + dVar58 * dVar56) - dVar57 * dVar59) * 65536.0
                                  );
                    if (iVar18 < 0) {
                      if (-1 < iVar26 >> 0x10) {
                        iVar48 = 0;
                        if (iVar18 != 0) {
                          iVar48 = ((*(int *)(param_4 + 8) * 0x10000 + -0x27fff) - iVar26) / iVar18;
                        }
                        if (iVar48 < 0) {
                          iVar48 = 0;
                        }
                        iVar42 = 0;
                        if (iVar18 != 0) {
                          iVar42 = (0x7fff - iVar26) / iVar18;
                        }
                        if (iVar19 < iVar42) {
                          iVar42 = iVar19;
                        }
                        goto LAB_0513d970;
                      }
                    }
                    else if (iVar18 == 0) {
                      if ((-1 < iVar26) && (iVar26 < (*(int *)(param_4 + 8) + -1) * 0x10000)) {
                        iVar48 = 0;
                        iVar42 = iVar19;
                        goto LAB_0513d970;
                      }
                    }
                    else if (iVar26 >> 0x10 < *(int *)(param_4 + 8) + -1) {
                      iVar42 = 0;
                      if (iVar18 != 0) {
                        iVar42 = ((*(int *)(param_4 + 8) * 0x10000 + -0x17fff) - iVar26) / iVar18;
                      }
                      iVar48 = 0;
                      if (iVar18 != 0) {
                        iVar48 = (0x10000 - iVar26) / iVar18;
                      }
                      if (iVar48 < 0) {
                        iVar48 = 0;
                      }
                      if (iVar19 < iVar42) {
                        iVar42 = iVar19;
                      }
LAB_0513d970:
                      iVar30 = (int)(((double)param_10 + dVar58 * dVar57 + dVar56 * dVar59) *
                                    65536.0);
                      if (iVar53 < 0) {
                        if (-1 < iVar30 >> 0x10) {
                          iVar13 = 0;
                          if (iVar53 != 0) {
                            iVar13 = -iVar30 / iVar53;
                          }
                          iVar12 = 0;
                          if (iVar53 != 0) {
                            iVar12 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x27fff) - iVar30) /
                                     iVar53;
                          }
                          if (iVar48 < iVar12) {
                            iVar48 = iVar12;
                          }
                          if (iVar13 < iVar42) {
                            iVar42 = iVar13;
                          }
                          goto LAB_0513d9d0;
                        }
                      }
                      else if (iVar53 == 0) {
                        if ((-1 < iVar30) && (iVar30 < (*(int *)(param_4 + 0xc) + -1) * 0x10000))
                        goto LAB_0513d9d0;
                      }
                      else if (iVar30 >> 0x10 < *(int *)(param_4 + 0xc) + -1) {
                        iVar13 = 0;
                        if (iVar53 != 0) {
                          iVar13 = ((*(int *)(param_4 + 0xc) * 0x10000 + -0x17fff) - iVar30) /
                                   iVar53;
                        }
                        iVar12 = 0;
                        if (iVar53 != 0) {
                          iVar12 = (0x10000 - iVar30) / iVar53;
                        }
                        if (iVar48 < iVar12) {
                          iVar48 = iVar12;
                        }
                        if (iVar13 < iVar42) {
                          iVar42 = iVar13;
                        }
LAB_0513d9d0:
                        uVar61 = iVar26 + iVar48 * iVar18;
                        uVar63 = iVar30 + iVar48 * iVar53;
                        puVar2 = (ulong *)(lVar46 + (long)iVar48 * 8);
                        iVar26 = *(int *)(param_1 + 0x38);
                        if (iVar48 <= iVar42) {
                          puVar35 = puVar2;
                          do {
                            iVar12 = 0xffff - (uVar61 & 0xfffe);
                            iVar11 = 0xffff - (uVar63 & 0xfffe);
                            lVar50 = (long)((int)uVar61 >> 0x10) +
                                     (long)(((int)uVar63 >> 0x10) * iVar26);
                            lVar40 = lVar52 + lVar50;
                            iVar30 = (uVar61 & 0xfffe) + 1;
                            iVar13 = (uVar63 & 0xfffe) + 1;
                            uVar61 = uVar61 + iVar18;
                            uVar64 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar52 + lVar50) * 4);
                            uVar5 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + 1) * 4);
                            uVar6 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + (long)iVar26 + 1) *
                                                       4);
                            lVar50 = (long)((ulong)(uVar64 >> 0x18) *
                                            ((ulong)(long)(iVar12 * iVar11) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar43 = (long)((ulong)(uVar5 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar11) >> 0x10) * 0x10000) >>
                                     0x20;
                            uVar7 = *(uint *)(lVar51 + (ulong)*(byte *)(lVar40 + iVar26) * 4);
                            lVar40 = (long)((ulong)(uVar6 >> 0x18) *
                                            ((ulong)(long)(iVar30 * iVar13) >> 0x10) * 0x10000) >>
                                     0x20;
                            lVar9 = (long)((ulong)(uVar7 >> 0x18) *
                                           ((ulong)(long)(iVar13 * iVar12) >> 0x10) * 0x10000) >>
                                    0x20;
                            uVar33 = *puVar35;
                            uVar63 = uVar63 + iVar53;
                            puVar49 = puVar35 + 1;
                            *puVar35 = (long)(*(int *)(lVar45 + (((lVar50 * (ulong)(byte)uVar64 +
                                                                   lVar43 * (ulong)(byte)uVar5 +
                                                                   lVar40 * (ulong)(byte)uVar6 +
                                                                  lVar9 * (ulong)(byte)uVar7) *
                                                                  (long)((iVar31 * iVar34) / 0xff)
                                                                 >> ((ulong)(0x18U - iVar54 & 0xff)
                                                                    & 0x3f)) +
                                                                ((uVar33 & uVar3) >>
                                                                ((ulong)uVar24 & 0x3f))) * 4) <<
                                              (ulong)(uVar24 & 0x1f) |
                                              *(int *)(lVar29 + (((lVar50 * ((ulong)uVar64 & 0xff00)
                                                                   + lVar43 * ((ulong)uVar5 & 0xff00
                                                                              ) +
                                                                   lVar40 * ((ulong)uVar6 & 0xff00)
                                                                  + lVar9 * ((ulong)uVar7 & 0xff00))
                                                                  * (long)((iVar31 * iVar20) / 0xff)
                                                                 >> ((ulong)(0x20U - iVar62 & 0xff)
                                                                    & 0x3f)) +
                                                                ((uVar33 & uVar36) >>
                                                                ((ulong)uVar55 & 0x3f))) * 4) <<
                                              (ulong)(uVar55 & 0x1f) |
                                             *(int *)(lVar21 + (((uVar33 & uVar60) >>
                                                                ((ulong)uVar41 & 0x3f)) +
                                                               ((lVar50 * ((ulong)uVar64 & 0xff0000)
                                                                 + lVar43 * ((ulong)uVar5 & 0xff0000
                                                                            ) +
                                                                 lVar40 * ((ulong)uVar6 & 0xff0000)
                                                                 + lVar9 * ((ulong)uVar7 & 0xff0000)
                                                                >> ((ulong)uVar10 & 0x3f)) *
                                                                (long)((iVar31 * iVar27) / 0xff) >>
                                                               8)) * 4) << (ulong)(uVar41 & 0x1f));
                            puVar35 = puVar49;
                          } while (puVar49 != puVar2 + (ulong)(uint)(iVar42 - iVar48) + 1);
                        }
                      }
                    }
                    iVar32 = iVar32 + 1;
                    lVar46 = lVar46 + (-(uVar28 >> 0x21 & 1) & 0xfffffff800000000 |
                                      (uVar28 >> 2 & 0xffffffff) << 3);
                  } while ((float)iVar32 < local_1c);
                }
              }
            }
          }
          (**(code **)(*(long *)this + 0x208))(this);
        }
        DeleteAllNonSurfaceData(this);
      }
    }
    else {
      MemoryImage::BltRotated
                ((MemoryImage *)this,param_1,local_34[0],local_38,param_4,param_5,param_6,param_7,
                 param_8,param_9,param_10);
    }
  }
LAB_0513d37c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltRotated(Sexy::Image*, float, float, Sexy::TRect<int>
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, double, float, float) */

void __thiscall
Sexy::DeviceImage::BltRotated
          (DeviceImage *this,Image *param_1,float param_2,float param_3,TRect *param_4,
          TRect *param_5,Color *param_6,int param_7,double param_8,float param_9,float param_10)

{
  BltRotated(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DeviceImage::BltStretched(Sexy::Image*, Sexy::TRect<int> const&, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void __thiscall
Sexy::DeviceImage::BltStretched
          (DeviceImage *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          Color *param_5,int param_6,bool param_7,bool param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  code *pcVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  Insets aIStack_108 [16];
  Color aCStack_f8 [240];
  long local_8;
  
  param_1[0x28] = (Image)0x1;
  local_8 = ___stack_chk_guard;
  lVar11 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
  plVar12 = (long *)(**(code **)(*(long *)param_1 + 0x48))(param_1);
  (**(code **)(*(long *)this + 0xa0))(this);
  SexyVector4::SexyVector4((SexyVector4 *)&local_128);
  Insets::Insets((Insets *)&local_118);
  if (param_8) {
    cVar7 = MemoryImage::StretchBltMirrorClipHelper
                      ((MemoryImage *)this,param_3,param_4,param_2,(TRect *)&local_128,
                       (TRect *)&local_118);
    if (cVar7 != '\0') {
      local_118 = local_118 + local_110 + -1;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0xa0))(plVar12);
        pcVar30 = *(code **)(*plVar12 + 0x58);
        uVar13 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
        lVar11 = (*pcVar30)(plVar12,uVar13);
        if (param_6 == 0) {
          if (plVar12[0x10] == 0) {
            cVar7 = (**(code **)(*(long *)this + 0x200))(this);
            if (cVar7 == '\0') goto LAB_05143adc;
            iVar34 = (int)(local_124 * 65536.0);
            iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
            iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
            Color::Color(aCStack_f8,1);
            cVar7 = Sexy::operator==(param_5,aCStack_f8);
            if (cVar7 == '\0') {
              iVar36 = *(int *)(param_5 + 0xc);
              iVar29 = (iVar36 * *(int *)param_5) / 0xff;
              iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
              iVar31 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                uVar38 = *(uint *)(this + 0x140);
                if (0 < local_10c) {
                  lVar39 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + -2;
                  lVar15 = plVar12[7];
                  iVar32 = 0;
                  do {
                    uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                    if (0 < local_110) {
                      lVar25 = lVar39;
                      iVar27 = (int)(local_128 * 65536.0);
                      do {
                        uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                    (ulong)uVar3 << 2) + (long)(iVar27 >> 0x10) * 4)
                        ;
                        iVar10 = (int)(((ulong)(uVar23 >> 0x18) * (long)iVar36) / 0xff);
                        if (iVar10 != 0) {
                          iVar10 = 0x100 - iVar10;
                          uVar26 = (uint)*(ushort *)(lVar25 + 2);
                          *(ushort *)(lVar25 + 2) =
                               ((ushort)uVar2 &
                               (ushort)((uVar23 & uVar2) * iVar6 + iVar10 * (uVar26 & uVar2) >> 8))
                               + ((ushort)uVar1 &
                                 (ushort)((uVar23 & uVar1) * iVar29 + iVar10 * (uVar26 & uVar1) >> 8
                                         )) +
                               ((ushort)uVar38 &
                               (ushort)((uVar23 & uVar38) * iVar31 + iVar10 * (uVar26 & uVar38) >> 8
                                       ));
                        }
                        lVar25 = lVar25 + -2;
                        iVar27 = iVar27 + iVar33;
                      } while ((ulong)(local_110 - 1) * -2 + -2 + lVar39 != lVar25);
                    }
                    iVar32 = iVar32 + 1;
                    lVar39 = lVar39 + (uVar18 & 0xfffffffffffffffe);
                    iVar34 = iVar34 + iVar22;
                  } while (iVar32 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar38 = *(uint *)(this + 0x140);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                if (0 < local_10c) {
                  lVar15 = plVar12[7];
                  iVar32 = 0;
                  do {
                    uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                    if (0 < local_110) {
                      lVar25 = lVar39 + -8;
                      iVar27 = (int)(local_128 * 65536.0);
                      do {
                        uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                    (ulong)uVar3 << 2) + (long)(iVar27 >> 0x10) * 4)
                        ;
                        uVar18 = *(ulong *)(lVar25 + 8);
                        iVar10 = (int)(((ulong)(uVar23 >> 0x18) * (long)iVar36) / 0xff);
                        if (iVar10 != 0) {
                          lVar24 = (long)(0x100 - iVar10);
                          *(ulong *)(lVar25 + 8) =
                               ((ulong)uVar2 &
                               (ulong)(uVar23 & uVar2) * (long)iVar6 + lVar24 * (uVar18 & uVar2) >>
                               8) + ((ulong)uVar1 &
                                    (ulong)(uVar23 & uVar1) * (long)iVar29 +
                                    lVar24 * (uVar18 & uVar1) >> 8) +
                               ((ulong)uVar38 &
                               (ulong)(uVar23 & uVar38) * (long)iVar31 + lVar24 * (uVar18 & uVar38)
                               >> 8);
                        }
                        lVar25 = lVar25 + -8;
                        iVar27 = iVar27 + iVar33;
                      } while (lVar25 != lVar39 + (ulong)(local_110 - 1) * -8 + -0x10);
                      uVar18 = *(ulong *)(this + 0x118);
                    }
                    iVar32 = iVar32 + 1;
                    iVar34 = iVar34 + iVar22;
                    lVar39 = lVar39 + (uVar18 >> 2) * 8;
                  } while (iVar32 != local_10c);
                }
              }
            }
            else if (*(int *)(this + 0x134) == 0x10) {
              uVar18 = *(ulong *)(this + 0x118);
              uVar1 = *(uint *)(this + 0x138);
              uVar2 = *(uint *)(this + 0x13c);
              uVar38 = *(uint *)(this + 0x140);
              if (0 < local_10c) {
                lVar15 = plVar12[7];
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + -2;
                iVar36 = 0;
                do {
                  uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                  if (0 < local_110) {
                    lVar25 = lVar39;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                  (ulong)uVar3 << 2) + (long)(iVar29 >> 0x10) * 4);
                      uVar26 = uVar23 >> 0x18;
                      if (uVar26 != 0) {
                        iVar6 = 0x100 - uVar26;
                        uVar26 = (uint)*(ushort *)(lVar25 + 2);
                        *(ushort *)(lVar25 + 2) =
                             ((ushort)uVar1 & (ushort)(iVar6 * (uVar26 & uVar1) >> 8)) +
                             ((ushort)uVar2 & (ushort)(iVar6 * (uVar26 & uVar2) >> 8)) +
                             (short)uVar23 +
                             ((ushort)uVar38 & (ushort)(iVar6 * (uVar26 & uVar38) >> 8));
                      }
                      lVar25 = lVar25 + -2;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar25 != (ulong)(local_110 - 1) * -2 + -2 + lVar39);
                  }
                  iVar36 = iVar36 + 1;
                  lVar39 = lVar39 + (uVar18 & 0xfffffffffffffffe);
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar18 = *(ulong *)(this + 0x118);
              uVar1 = *(uint *)(this + 0x138);
              uVar2 = *(uint *)(this + 0x13c);
              uVar38 = *(uint *)(this + 0x140);
              lVar39 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
              if (0 < local_10c) {
                lVar15 = plVar12[7];
                iVar36 = 0;
                do {
                  uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                  if (0 < local_110) {
                    lVar25 = lVar39 + -8;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                  (ulong)uVar3 << 2) + (long)(iVar29 >> 0x10) * 4);
                      uVar18 = *(ulong *)(lVar25 + 8);
                      uVar26 = uVar23 >> 0x18;
                      if (uVar26 != 0) {
                        lVar24 = (long)(int)(0x100 - uVar26);
                        *(ulong *)(lVar25 + 8) =
                             ((ulong)uVar1 & lVar24 * (uVar18 & uVar1) >> 8) +
                             ((ulong)uVar2 & lVar24 * (uVar18 & uVar2) >> 8) + (ulong)uVar23 +
                             ((ulong)uVar38 & lVar24 * (uVar18 & uVar38) >> 8);
                      }
                      lVar25 = lVar25 + -8;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar25 != lVar39 + (ulong)(local_110 - 1) * -8 + -0x10);
                    uVar18 = *(ulong *)(this + 0x118);
                  }
                  iVar36 = iVar36 + 1;
                  lVar39 = lVar39 + (uVar18 >> 2) * 8;
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
          }
          else {
            lVar39 = plVar12[0x11];
            cVar7 = (**(code **)(*(long *)this + 0x200))();
            if (cVar7 == '\0') goto LAB_05143adc;
            iVar34 = (int)(local_124 * 65536.0);
            iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
            iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
            Color::Color(aCStack_f8,1);
            cVar7 = Sexy::operator==(param_5,aCStack_f8);
            if (cVar7 == '\0') {
              iVar36 = *(int *)(param_5 + 0xc);
              iVar29 = (iVar36 * *(int *)param_5) / 0xff;
              iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
              iVar31 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x140);
                uVar2 = *(uint *)(this + 0x138);
                uVar38 = *(uint *)(this + 0x13c);
                if (0 < local_10c) {
                  lVar15 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + -2;
                  lVar25 = plVar12[7];
                  iVar32 = 0;
                  do {
                    if (0 < local_110) {
                      lVar24 = lVar15;
                      iVar27 = (int)(local_128 * 65536.0);
                      do {
                        uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar25 +
                                                                   (long)(iVar27 >> 0x10)) * 4);
                        iVar10 = (int)(((ulong)(uVar3 >> 0x18) * (long)iVar36) / 0xff);
                        if (iVar10 != 0) {
                          iVar10 = 0x100 - iVar10;
                          uVar23 = (uint)*(ushort *)(lVar24 + 2);
                          *(ushort *)(lVar24 + 2) =
                               ((ushort)uVar38 &
                               (ushort)((uVar3 & uVar38) * iVar6 + iVar10 * (uVar23 & uVar38) >> 8))
                               + ((ushort)uVar2 &
                                 (ushort)((uVar3 & uVar2) * iVar29 + iVar10 * (uVar23 & uVar2) >> 8)
                                 ) + ((ushort)uVar1 &
                                     (ushort)((uVar3 & uVar1) * iVar31 + iVar10 * (uVar23 & uVar1)
                                             >> 8));
                        }
                        lVar24 = lVar24 + -2;
                        iVar27 = iVar27 + iVar33;
                      } while ((ulong)(local_110 - 1) * -2 + -2 + lVar15 != lVar24);
                    }
                    iVar32 = iVar32 + 1;
                    iVar34 = iVar34 + iVar22;
                    lVar15 = lVar15 + (uVar18 & 0xfffffffffffffffe);
                  } while (iVar32 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar38 = *(uint *)(this + 0x140);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                if (0 < local_10c) {
                  lVar25 = plVar12[7];
                  iVar32 = 0;
                  do {
                    if (0 < local_110) {
                      lVar24 = lVar15 + -8;
                      iVar27 = (int)(local_128 * 65536.0);
                      do {
                        uVar18 = *(ulong *)(lVar24 + 8);
                        uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar25 +
                                                                   (long)(iVar27 >> 0x10)) * 4);
                        iVar10 = (int)(((ulong)(uVar3 >> 0x18) * (long)iVar36) / 0xff);
                        if (iVar10 != 0) {
                          lVar14 = (long)(0x100 - iVar10);
                          *(ulong *)(lVar24 + 8) =
                               ((ulong)uVar2 &
                               (ulong)(uVar3 & uVar2) * (long)iVar6 + lVar14 * (uVar18 & uVar2) >> 8
                               ) + ((ulong)uVar1 &
                                   (ulong)(uVar3 & uVar1) * (long)iVar29 + lVar14 * (uVar18 & uVar1)
                                   >> 8) +
                               ((ulong)uVar38 &
                               (ulong)(uVar3 & uVar38) * (long)iVar31 + lVar14 * (uVar18 & uVar38)
                               >> 8);
                        }
                        lVar24 = lVar24 + -8;
                        iVar27 = iVar27 + iVar33;
                      } while (lVar24 != lVar15 + (ulong)(local_110 - 1) * -8 + -0x10);
                      uVar18 = *(ulong *)(this + 0x118);
                    }
                    iVar32 = iVar32 + 1;
                    iVar34 = iVar34 + iVar22;
                    lVar15 = lVar15 + (uVar18 >> 2) * 8;
                  } while (iVar32 != local_10c);
                }
              }
            }
            else if (*(int *)(this + 0x134) == 0x10) {
              uVar18 = *(ulong *)(this + 0x118);
              uVar1 = *(uint *)(this + 0x138);
              uVar2 = *(uint *)(this + 0x13c);
              uVar38 = *(uint *)(this + 0x140);
              if (0 < local_10c) {
                lVar25 = plVar12[7];
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + -2;
                iVar36 = 0;
                do {
                  if (0 < local_110) {
                    lVar24 = lVar15;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar25 +
                                                                 (long)(iVar29 >> 0x10)) * 4);
                      uVar23 = uVar3 >> 0x18;
                      if (uVar23 != 0) {
                        iVar6 = 0x100 - uVar23;
                        uVar23 = (uint)*(ushort *)(lVar24 + 2);
                        *(ushort *)(lVar24 + 2) =
                             ((ushort)uVar1 & (ushort)(iVar6 * (uVar23 & uVar1) >> 8)) +
                             ((ushort)uVar2 & (ushort)(iVar6 * (uVar23 & uVar2) >> 8)) +
                             (short)uVar3 +
                             ((ushort)uVar38 & (ushort)(iVar6 * (uVar23 & uVar38) >> 8));
                      }
                      lVar24 = lVar24 + -2;
                      iVar29 = iVar29 + iVar33;
                    } while ((ulong)(local_110 - 1) * -2 + -2 + lVar15 != lVar24);
                  }
                  iVar36 = iVar36 + 1;
                  lVar15 = lVar15 + (uVar18 & 0xfffffffffffffffe);
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar18 = *(ulong *)(this + 0x118);
              uVar1 = *(uint *)(this + 0x138);
              uVar2 = *(uint *)(this + 0x13c);
              uVar38 = *(uint *)(this + 0x140);
              lVar15 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
              if (0 < local_10c) {
                lVar25 = plVar12[7];
                iVar36 = 0;
                do {
                  if (0 < local_110) {
                    lVar24 = lVar15 + -8;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar18 = *(ulong *)(lVar24 + 8);
                      uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar25 +
                                                                 (long)(iVar29 >> 0x10)) * 4);
                      uVar23 = uVar3 >> 0x18;
                      if (uVar23 != 0) {
                        lVar14 = (long)(int)(0x100 - uVar23);
                        *(ulong *)(lVar24 + 8) =
                             ((ulong)uVar1 & lVar14 * (uVar18 & uVar1) >> 8) +
                             ((ulong)uVar2 & lVar14 * (uVar18 & uVar2) >> 8) + (ulong)uVar3 +
                             ((ulong)uVar38 & lVar14 * (uVar18 & uVar38) >> 8);
                      }
                      lVar24 = lVar24 + -8;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar24 != lVar15 + (ulong)(local_110 - 1) * -8 + -0x10);
                    uVar18 = *(ulong *)(this + 0x118);
                  }
                  iVar36 = iVar36 + 1;
                  lVar15 = lVar15 + (uVar18 >> 2) * 8;
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
          }
        }
        else if (plVar12[0x10] == 0) {
          cVar7 = (**(code **)(*(long *)this + 0x200))(this);
          if (cVar7 == '\0') goto LAB_05143adc;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar15 = *(long *)(lVar39 + 0x28);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar25 = *(long *)(lVar39 + 0x30);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar24 = *(long *)(lVar39 + 0x38);
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar1 = *(uint *)(lVar39 + 0x1c);
          uVar18 = (ulong)uVar1;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar2 = *(uint *)(lVar39 + 0x20);
          uVar35 = (ulong)uVar2;
          lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar38 = *(uint *)(lVar39 + 0x24);
          uVar37 = (ulong)uVar38;
          iVar22 = (int)(local_124 * 65536.0);
          iVar33 = (int)((local_11c * 65536.0) / (float)local_10c);
          iVar36 = (int)((local_120 * 65536.0) / (float)local_110);
          Color::Color(aCStack_f8,1);
          cVar7 = Sexy::operator==(param_5,aCStack_f8);
          iVar34 = 0;
          if (cVar7 == '\0') {
            iVar29 = *(int *)(param_5 + 0xc);
            iVar6 = (iVar29 * *(int *)param_5) / 0xff;
            iVar31 = (iVar29 * *(int *)(param_5 + 4)) / 0xff;
            iVar29 = (iVar29 * *(int *)(param_5 + 8)) / 0xff;
            if (*(int *)(this + 0x134) == 0x10) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x138);
              uVar23 = *(uint *)(this + 0x13c);
              uVar26 = *(uint *)(this + 0x140);
              if (0 < local_10c) {
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + -2;
                lVar14 = plVar12[7];
                do {
                  uVar5 = (iVar22 >> 0x10) * (int)lVar14;
                  if (0 < local_110) {
                    lVar28 = lVar39;
                    iVar32 = (int)(local_128 * 65536.0);
                    do {
                      uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar5 << 2) + (long)(iVar32 >> 0x10) * 4);
                      if (uVar4 != 0) {
                        uVar16 = (ulong)*(ushort *)(lVar28 + 2);
                        *(ushort *)(lVar28 + 2) =
                             (ushort)(*(int *)(lVar25 + (((uVar16 & uVar23) >> (uVar35 & 0x3f)) +
                                                        ((ulong)((uVar4 & uVar23) >> (uVar35 & 0x3f)
                                                                ) * (long)iVar31 >> 8)) * 4) <<
                                     (ulong)(uVar2 & 0x1f)) |
                             (ushort)(*(int *)(lVar15 + (((uVar16 & uVar3) >> (uVar18 & 0x3f)) +
                                                        ((ulong)((uVar4 & uVar3) >> (uVar18 & 0x3f))
                                                         * (long)iVar6 >> 8)) * 4) <<
                                     (ulong)(uVar1 & 0x1f)) |
                             (ushort)(*(int *)(lVar24 + (((uVar16 & uVar26) >> (uVar37 & 0x3f)) +
                                                        ((ulong)((uVar4 & uVar26) >> (uVar37 & 0x3f)
                                                                ) * (long)iVar29 >> 8)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                      }
                      lVar28 = lVar28 + -2;
                      iVar32 = iVar32 + iVar36;
                    } while ((ulong)(local_110 - 1) * -2 + -2 + lVar39 != lVar28);
                  }
                  iVar34 = iVar34 + 1;
                  iVar22 = iVar22 + iVar33;
                  lVar39 = lVar39 + (uVar19 & 0xfffffffffffffffe);
                } while (iVar34 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x140);
              uVar23 = *(uint *)(this + 0x138);
              uVar26 = *(uint *)(this + 0x13c);
              lVar39 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
              if (0 < local_10c) {
                lVar14 = plVar12[7];
                iVar34 = 0;
                do {
                  uVar5 = (iVar22 >> 0x10) * (int)lVar14;
                  if (0 < local_110) {
                    lVar28 = lVar39 + -8;
                    iVar32 = (int)(local_128 * 65536.0);
                    do {
                      uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar5 << 2) + (long)(iVar32 >> 0x10) * 4);
                      uVar19 = *(ulong *)(lVar28 + 8);
                      if (uVar4 != 0) {
                        *(long *)(lVar28 + 8) =
                             (long)(*(int *)(lVar25 + (((uVar19 & uVar26) >> (uVar35 & 0x3f)) +
                                                      ((ulong)((uVar4 & uVar26) >> (uVar35 & 0x3f))
                                                       * (long)iVar31 >> 8)) * 4) <<
                                    (ulong)(uVar2 & 0x1f) |
                                    *(int *)(lVar15 + (((uVar19 & uVar23) >> (uVar18 & 0x3f)) +
                                                      ((ulong)((uVar4 & uVar23) >> (uVar18 & 0x3f))
                                                       * (long)iVar6 >> 8)) * 4) <<
                                    (ulong)(uVar1 & 0x1f) |
                                   *(int *)(lVar24 + (((uVar19 & uVar3) >> (uVar37 & 0x3f)) +
                                                     ((ulong)((uVar4 & uVar3) >> (uVar37 & 0x3f)) *
                                                      (long)iVar29 >> 8)) * 4) <<
                                   (ulong)(uVar38 & 0x1f));
                      }
                      lVar28 = lVar28 + -8;
                      iVar32 = iVar32 + iVar36;
                    } while (lVar28 != lVar39 + (ulong)(local_110 - 1) * -8 + -0x10);
                    uVar19 = *(ulong *)(this + 0x118);
                  }
                  iVar34 = iVar34 + 1;
                  iVar22 = iVar22 + iVar33;
                  lVar39 = lVar39 + (uVar19 >> 2) * 8;
                } while (iVar34 != local_10c);
              }
            }
          }
          else if (*(int *)(this + 0x134) == 0x10) {
            uVar19 = *(ulong *)(this + 0x118);
            uVar3 = *(uint *)(this + 0x138);
            uVar23 = *(uint *)(this + 0x13c);
            uVar26 = *(uint *)(this + 0x140);
            if (0 < local_10c) {
              lVar39 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + -2;
              iVar34 = 0;
              lVar14 = plVar12[7];
              do {
                uVar5 = (iVar22 >> 0x10) * (int)lVar14;
                if (0 < local_110) {
                  lVar28 = lVar39;
                  iVar29 = (int)(local_128 * 65536.0);
                  do {
                    uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                               (ulong)uVar5 << 2) + (long)(iVar29 >> 0x10) * 4);
                    if (uVar4 != 0) {
                      uVar16 = (ulong)*(ushort *)(lVar28 + 2);
                      *(ushort *)(lVar28 + 2) =
                           (ushort)(*(int *)(lVar25 + ((ulong)(uVar4 & uVar23) + (uVar16 & uVar23)
                                                      >> (uVar35 & 0x3f)) * 4) <<
                                   (ulong)(uVar2 & 0x1f)) |
                           (ushort)(*(int *)(lVar15 + ((ulong)(uVar4 & uVar3) + (uVar16 & uVar3) >>
                                                      (uVar18 & 0x3f)) * 4) << (ulong)(uVar1 & 0x1f)
                                   ) |
                           (ushort)(*(int *)(lVar24 + ((ulong)(uVar4 & uVar26) + (uVar16 & uVar26)
                                                      >> (uVar37 & 0x3f)) * 4) <<
                                   (ulong)(uVar38 & 0x1f));
                    }
                    lVar28 = lVar28 + -2;
                    iVar29 = iVar29 + iVar36;
                  } while ((ulong)(local_110 - 1) * -2 + -2 + lVar39 != lVar28);
                }
                iVar34 = iVar34 + 1;
                iVar22 = iVar22 + iVar33;
                lVar39 = lVar39 + (uVar19 & 0xfffffffffffffffe);
              } while (iVar34 != local_10c);
            }
          }
          else if (*(int *)(this + 0x134) == 0x20) {
            uVar19 = *(ulong *)(this + 0x118);
            uVar3 = *(uint *)(this + 0x138);
            uVar23 = *(uint *)(this + 0x13c);
            uVar26 = *(uint *)(this + 0x140);
            lVar39 = *(long *)(this + 0x120) +
                     ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
            if (0 < local_10c) {
              iVar34 = 0;
              lVar14 = plVar12[7];
              do {
                uVar5 = (iVar22 >> 0x10) * (int)lVar14;
                if (0 < local_110) {
                  lVar28 = lVar39 + -8;
                  iVar29 = (int)(local_128 * 65536.0);
                  do {
                    uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                               (ulong)uVar5 << 2) + (long)(iVar29 >> 0x10) * 4);
                    uVar19 = *(ulong *)(lVar28 + 8);
                    if (uVar4 != 0) {
                      *(long *)(lVar28 + 8) =
                           (long)(*(int *)(lVar25 + ((ulong)(uVar4 & uVar23) + (uVar19 & uVar23) >>
                                                    (uVar35 & 0x3f)) * 4) << (ulong)(uVar2 & 0x1f) |
                                  *(int *)(lVar15 + ((ulong)(uVar4 & uVar3) + (uVar19 & uVar3) >>
                                                    (uVar18 & 0x3f)) * 4) << (ulong)(uVar1 & 0x1f) |
                                 *(int *)(lVar24 + ((ulong)(uVar4 & uVar26) + (uVar19 & uVar26) >>
                                                   (uVar37 & 0x3f)) * 4) << (ulong)(uVar38 & 0x1f));
                    }
                    lVar28 = lVar28 + -8;
                    iVar29 = iVar29 + iVar36;
                  } while (lVar28 != lVar39 + (ulong)(local_110 - 1) * -8 + -0x10);
                  uVar19 = *(ulong *)(this + 0x118);
                }
                iVar34 = iVar34 + 1;
                iVar22 = iVar22 + iVar33;
                lVar39 = lVar39 + (uVar19 >> 2) * 8;
              } while (iVar34 != local_10c);
            }
          }
        }
        else {
          lVar39 = plVar12[0x11];
          cVar7 = (**(code **)(*(long *)this + 0x200))(this);
          if (cVar7 == '\0') goto LAB_05143adc;
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar25 = *(long *)(lVar15 + 0x28);
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar24 = *(long *)(lVar15 + 0x30);
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar14 = *(long *)(lVar15 + 0x38);
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar1 = *(uint *)(lVar15 + 0x1c);
          uVar18 = (ulong)uVar1;
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar2 = *(uint *)(lVar15 + 0x20);
          uVar35 = (ulong)uVar2;
          lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          uVar38 = *(uint *)(lVar15 + 0x24);
          uVar37 = (ulong)uVar38;
          iVar34 = (int)(local_124 * 65536.0);
          iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
          iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
          Color::Color(aCStack_f8,1);
          cVar7 = Sexy::operator==(param_5,aCStack_f8);
          if (cVar7 == '\0') {
            iVar36 = *(int *)(param_5 + 0xc);
            iVar29 = (iVar36 * *(int *)param_5) / 0xff;
            iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
            iVar36 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
            if (*(int *)(this + 0x134) == 0x10) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x140);
              uVar23 = *(uint *)(this + 0x138);
              uVar26 = *(uint *)(this + 0x13c);
              if (0 < local_10c) {
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + -2;
                lVar28 = plVar12[7];
                iVar31 = 0;
                do {
                  if (0 < local_110) {
                    lVar20 = lVar15;
                    iVar32 = (int)(local_128 * 65536.0);
                    do {
                      uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar28 +
                                                                 (long)(iVar32 >> 0x10)) * 4);
                      if (uVar5 != 0) {
                        uVar16 = (ulong)*(ushort *)(lVar20 + 2);
                        *(ushort *)(lVar20 + 2) =
                             (ushort)(*(int *)(lVar24 + (((uVar16 & uVar26) >> (uVar35 & 0x3f)) +
                                                        ((ulong)((uVar5 & uVar26) >> (uVar35 & 0x3f)
                                                                ) * (long)iVar6 >> 8)) * 4) <<
                                     (ulong)(uVar2 & 0x1f)) |
                             (ushort)(*(int *)(lVar25 + (((uVar16 & uVar23) >> (uVar18 & 0x3f)) +
                                                        ((ulong)((uVar5 & uVar23) >> (uVar18 & 0x3f)
                                                                ) * (long)iVar29 >> 8)) * 4) <<
                                     (ulong)(uVar1 & 0x1f)) |
                             (ushort)(*(int *)(lVar14 + (((uVar16 & uVar3) >> (uVar37 & 0x3f)) +
                                                        ((ulong)((uVar5 & uVar3) >> (uVar37 & 0x3f))
                                                         * (long)iVar36 >> 8)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                      }
                      lVar20 = lVar20 + -2;
                      iVar32 = iVar32 + iVar33;
                    } while ((ulong)(local_110 - 1) * -2 + -2 + lVar15 != lVar20);
                  }
                  lVar15 = lVar15 + (uVar19 & 0xfffffffffffffffe);
                  iVar31 = iVar31 + 1;
                  iVar34 = iVar34 + iVar22;
                } while (iVar31 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x138);
              uVar23 = *(uint *)(this + 0x13c);
              uVar26 = *(uint *)(this + 0x140);
              lVar15 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
              if (0 < local_10c) {
                lVar28 = plVar12[7];
                iVar31 = 0;
                do {
                  if (0 < local_110) {
                    lVar20 = lVar15 + -8;
                    iVar32 = (int)(local_128 * 65536.0);
                    do {
                      uVar19 = *(ulong *)(lVar20 + 8);
                      uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar28 +
                                                                 (long)(iVar32 >> 0x10)) * 4);
                      if (uVar5 != 0) {
                        *(long *)(lVar20 + 8) =
                             (long)(*(int *)(lVar24 + (((uVar19 & uVar23) >> (uVar35 & 0x3f)) +
                                                      ((ulong)((uVar5 & uVar23) >> (uVar35 & 0x3f))
                                                       * (long)iVar6 >> 8)) * 4) <<
                                    (ulong)(uVar2 & 0x1f) |
                                    *(int *)(lVar25 + (((uVar19 & uVar3) >> (uVar18 & 0x3f)) +
                                                      ((ulong)((uVar5 & uVar3) >> (uVar18 & 0x3f)) *
                                                       (long)iVar29 >> 8)) * 4) <<
                                    (ulong)(uVar1 & 0x1f) |
                                   *(int *)(lVar14 + (((uVar19 & uVar26) >> (uVar37 & 0x3f)) +
                                                     ((ulong)((uVar5 & uVar26) >> (uVar37 & 0x3f)) *
                                                      (long)iVar36 >> 8)) * 4) <<
                                   (ulong)(uVar38 & 0x1f));
                      }
                      lVar20 = lVar20 + -8;
                      iVar32 = iVar32 + iVar33;
                    } while (lVar20 != lVar15 + (ulong)(local_110 - 1) * -8 + -0x10);
                    uVar19 = *(ulong *)(this + 0x118);
                  }
                  iVar31 = iVar31 + 1;
                  iVar34 = iVar34 + iVar22;
                  lVar15 = lVar15 + (uVar19 >> 2) * 8;
                } while (iVar31 != local_10c);
              }
            }
          }
          else if (*(int *)(this + 0x134) == 0x10) {
            uVar19 = *(ulong *)(this + 0x118);
            uVar3 = *(uint *)(this + 0x140);
            uVar23 = *(uint *)(this + 0x138);
            uVar26 = *(uint *)(this + 0x13c);
            if (0 < local_10c) {
              lVar28 = plVar12[7];
              lVar15 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + -2;
              iVar36 = 0;
              do {
                if (0 < local_110) {
                  lVar20 = lVar15;
                  iVar29 = (int)(local_128 * 65536.0);
                  do {
                    uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                         (int)lVar28 +
                                                               (long)(iVar29 >> 0x10)) * 4);
                    if (uVar5 != 0) {
                      uVar16 = (ulong)*(ushort *)(lVar20 + 2);
                      *(ushort *)(lVar20 + 2) =
                           (ushort)(*(int *)(lVar24 + ((ulong)(uVar5 & uVar26) + (uVar16 & uVar26)
                                                      >> (uVar35 & 0x3f)) * 4) <<
                                   (ulong)(uVar2 & 0x1f)) |
                           (ushort)(*(int *)(lVar25 + ((ulong)(uVar5 & uVar23) + (uVar16 & uVar23)
                                                      >> (uVar18 & 0x3f)) * 4) <<
                                   (ulong)(uVar1 & 0x1f)) |
                           (ushort)(*(int *)(lVar14 + ((ulong)(uVar5 & uVar3) + (uVar16 & uVar3) >>
                                                      (uVar37 & 0x3f)) * 4) <<
                                   (ulong)(uVar38 & 0x1f));
                    }
                    lVar20 = lVar20 + -2;
                    iVar29 = iVar29 + iVar33;
                  } while ((ulong)(local_110 - 1) * -2 + -2 + lVar15 != lVar20);
                }
                iVar36 = iVar36 + 1;
                iVar34 = iVar34 + iVar22;
                lVar15 = lVar15 + (uVar19 & 0xfffffffffffffffe);
              } while (iVar36 != local_10c);
            }
          }
          else if (*(int *)(this + 0x134) == 0x20) {
            uVar19 = *(ulong *)(this + 0x118);
            uVar3 = *(uint *)(this + 0x140);
            uVar23 = *(uint *)(this + 0x138);
            uVar26 = *(uint *)(this + 0x13c);
            lVar15 = *(long *)(this + 0x120) +
                     ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
            if (0 < local_10c) {
              lVar28 = plVar12[7];
              iVar36 = 0;
              do {
                if (0 < local_110) {
                  lVar20 = lVar15 + -8;
                  iVar29 = (int)(local_128 * 65536.0);
                  do {
                    uVar19 = *(ulong *)(lVar20 + 8);
                    uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                         (int)lVar28 +
                                                               (long)(iVar29 >> 0x10)) * 4);
                    if (uVar5 != 0) {
                      *(long *)(lVar20 + 8) =
                           (long)(*(int *)(lVar24 + ((ulong)(uVar5 & uVar26) + (uVar19 & uVar26) >>
                                                    (uVar35 & 0x3f)) * 4) << (ulong)(uVar2 & 0x1f) |
                                  *(int *)(lVar25 + ((ulong)(uVar5 & uVar23) + (uVar19 & uVar23) >>
                                                    (uVar18 & 0x3f)) * 4) << (ulong)(uVar1 & 0x1f) |
                                 *(int *)(lVar14 + ((ulong)(uVar5 & uVar3) + (uVar19 & uVar3) >>
                                                   (uVar37 & 0x3f)) * 4) << (ulong)(uVar38 & 0x1f));
                    }
                    lVar20 = lVar20 + -8;
                    iVar29 = iVar29 + iVar33;
                  } while (lVar20 != lVar15 + (ulong)(local_110 - 1) * -8 + -0x10);
                  uVar19 = *(ulong *)(this + 0x118);
                }
                iVar36 = iVar36 + 1;
                iVar34 = iVar34 + iVar22;
                lVar15 = lVar15 + (uVar19 >> 2) * 8;
              } while (iVar36 != local_10c);
            }
          }
        }
        (**(code **)(*(long *)this + 0x208))(this);
      }
      DeleteAllNonSurfaceData(this);
    }
  }
  else {
    cVar7 = MemoryImage::StretchBltClipHelper
                      ((MemoryImage *)this,param_3,param_4,param_2,(TRect *)&local_128,
                       (TRect *)&local_118);
    if (cVar7 != '\0') {
      if (param_7) {
        if (lVar11 == 0) {
          bVar9 = 0;
        }
        else {
          Color::Color(aCStack_f8,1);
          bVar8 = Sexy::operator==(param_5,aCStack_f8);
          bVar9 = 0;
          if ((bVar8 & param_6 == 0) != 0) {
            if (*(char *)(lVar11 + 0x92) == '\0') {
              bVar9 = 0;
              if ((*(char *)(lVar11 + 0x91) == '\0') &&
                 (plVar17 = *(long **)(this + 0x148), plVar17 != (long *)0x0)) {
                bVar9 = (**(code **)(*plVar17 + 0x30))(plVar17);
              }
            }
            else {
              bVar9 = 0;
            }
          }
        }
        if (bVar9 < (plVar12 != (long *)0x0)) {
          (**(code **)(*plVar12 + 0xa0))(plVar12);
          pcVar30 = *(code **)(*plVar12 + 0x58);
          uVar13 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
          lVar11 = (*pcVar30)(plVar12,uVar13);
          if (param_6 == 0) {
            if (plVar12[0x10] == 0) {
              cVar7 = (**(code **)(*(long *)this + 0x200))(this);
              if (cVar7 == '\0') goto LAB_05143adc;
              iVar34 = (int)(local_124 * 65536.0);
              iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
              iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
              Color::Color(aCStack_f8,1);
              cVar7 = Sexy::operator==(param_5,aCStack_f8);
              if (cVar7 == '\0') {
                iVar36 = *(int *)(param_5 + 0xc);
                iVar29 = (iVar36 * *(int *)param_5) / 0xff;
                iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
                iVar31 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
                if (*(int *)(this + 0x134) == 0x10) {
                  uVar18 = *(ulong *)(this + 0x118);
                  uVar1 = *(uint *)(this + 0x140);
                  uVar2 = *(uint *)(this + 0x138);
                  uVar38 = *(uint *)(this + 0x13c);
                  if (0 < local_10c) {
                    lVar39 = *(long *)(this + 0x120) +
                             ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + 2;
                    lVar15 = plVar12[7];
                    iVar32 = 0;
                    do {
                      uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                      if (0 < local_110) {
                        lVar25 = lVar39;
                        iVar27 = (int)(local_128 * 65536.0);
                        do {
                          uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000
                                                      | (ulong)uVar3 << 2) +
                                                      (long)(iVar27 >> 0x10) * 4);
                          iVar10 = (int)(((ulong)(uVar23 >> 0x18) * (long)iVar36) / 0xff);
                          if (iVar10 != 0) {
                            iVar10 = 0x100 - iVar10;
                            uVar26 = (uint)*(ushort *)(lVar25 + -2);
                            *(ushort *)(lVar25 + -2) =
                                 ((ushort)uVar38 &
                                 (ushort)((uVar23 & uVar38) * iVar6 + iVar10 * (uVar26 & uVar38) >>
                                         8)) +
                                 ((ushort)uVar2 &
                                 (ushort)((uVar23 & uVar2) * iVar29 + iVar10 * (uVar26 & uVar2) >> 8
                                         )) +
                                 ((ushort)uVar1 &
                                 (ushort)((uVar23 & uVar1) * iVar31 + iVar10 * (uVar26 & uVar1) >> 8
                                         ));
                          }
                          lVar25 = lVar25 + 2;
                          iVar27 = iVar27 + iVar33;
                        } while (lVar25 != (ulong)(local_110 - 1) * 2 + 2 + lVar39);
                      }
                      iVar32 = iVar32 + 1;
                      iVar34 = iVar34 + iVar22;
                      lVar39 = lVar39 + (uVar18 & 0xfffffffffffffffe);
                    } while (iVar32 != local_10c);
                  }
                }
                else if (*(int *)(this + 0x134) == 0x20) {
                  uVar18 = *(ulong *)(this + 0x118);
                  uVar38 = *(uint *)(this + 0x13c);
                  uVar1 = *(uint *)(this + 0x138);
                  uVar2 = *(uint *)(this + 0x140);
                  lVar39 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                  if (0 < local_10c) {
                    lVar15 = plVar12[7];
                    iVar32 = 0;
                    do {
                      uVar3 = (int)lVar15 * (iVar34 >> 0x10);
                      if (0 < local_110) {
                        lVar25 = lVar39 + 8;
                        iVar27 = (int)(local_128 * 65536.0);
                        do {
                          uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000
                                                      | (ulong)uVar3 << 2) +
                                                      (long)(iVar27 >> 0x10) * 4);
                          uVar18 = *(ulong *)(lVar25 + -8);
                          iVar10 = (int)(((ulong)(uVar23 >> 0x18) * (long)iVar36) / 0xff);
                          if (iVar10 != 0) {
                            lVar24 = (long)(0x100 - iVar10);
                            *(ulong *)(lVar25 + -8) =
                                 ((ulong)uVar38 &
                                 (ulong)(uVar23 & uVar38) * (long)iVar6 + lVar24 * (uVar18 & uVar38)
                                 >> 8) + ((ulong)uVar1 &
                                         (ulong)(uVar23 & uVar1) * (long)iVar29 +
                                         lVar24 * (uVar18 & uVar1) >> 8) +
                                 ((ulong)uVar2 &
                                 (ulong)(uVar23 & uVar2) * (long)iVar31 + lVar24 * (uVar18 & uVar2)
                                 >> 8);
                          }
                          lVar25 = lVar25 + 8;
                          iVar27 = iVar27 + iVar33;
                        } while (lVar25 != lVar39 + ((ulong)(local_110 - 1) + 2) * 8);
                        uVar18 = *(ulong *)(this + 0x118);
                      }
                      iVar32 = iVar32 + 1;
                      iVar34 = iVar34 + iVar22;
                      lVar39 = lVar39 + (uVar18 >> 2) * 8;
                    } while (iVar32 != local_10c);
                  }
                }
              }
              else if (*(int *)(this + 0x134) == 0x10) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                uVar38 = *(uint *)(this + 0x140);
                if (0 < local_10c) {
                  lVar15 = plVar12[7];
                  lVar39 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + 2;
                  iVar36 = 0;
                  do {
                    uVar3 = (iVar34 >> 0x10) * (int)lVar15;
                    if (0 < local_110) {
                      lVar25 = lVar39;
                      iVar29 = (int)(local_128 * 65536.0);
                      do {
                        uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                    (ulong)uVar3 << 2) + (long)(iVar29 >> 0x10) * 4)
                        ;
                        uVar26 = uVar23 >> 0x18;
                        if (uVar26 != 0) {
                          iVar6 = 0x100 - uVar26;
                          uVar26 = (uint)*(ushort *)(lVar25 + -2);
                          *(ushort *)(lVar25 + -2) =
                               ((ushort)uVar1 & (ushort)(iVar6 * (uVar26 & uVar1) >> 8)) +
                               ((ushort)uVar2 & (ushort)(iVar6 * (uVar26 & uVar2) >> 8)) +
                               (short)uVar23 +
                               ((ushort)uVar38 & (ushort)(iVar6 * (uVar26 & uVar38) >> 8));
                        }
                        lVar25 = lVar25 + 2;
                        iVar29 = iVar29 + iVar33;
                      } while ((ulong)(local_110 - 1) * 2 + 2 + lVar39 != lVar25);
                    }
                    iVar36 = iVar36 + 1;
                    lVar39 = lVar39 + (uVar18 & 0xfffffffffffffffe);
                    iVar34 = iVar34 + iVar22;
                  } while (iVar36 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                uVar38 = *(uint *)(this + 0x140);
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                if (0 < local_10c) {
                  lVar15 = plVar12[7];
                  iVar36 = 0;
                  do {
                    uVar3 = (int)lVar15 * (iVar34 >> 0x10);
                    if (0 < local_110) {
                      lVar25 = lVar39 + 8;
                      iVar29 = (int)(local_128 * 65536.0);
                      do {
                        uVar23 = *(uint *)(lVar11 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                                    (ulong)uVar3 << 2) + (long)(iVar29 >> 0x10) * 4)
                        ;
                        uVar18 = *(ulong *)(lVar25 + -8);
                        uVar26 = uVar23 >> 0x18;
                        if (uVar26 != 0) {
                          lVar24 = (long)(int)(0x100 - uVar26);
                          *(ulong *)(lVar25 + -8) =
                               ((ulong)uVar1 & lVar24 * (uVar18 & uVar1) >> 8) +
                               ((ulong)uVar2 & lVar24 * (uVar18 & uVar2) >> 8) + (ulong)uVar23 +
                               ((ulong)uVar38 & lVar24 * (uVar18 & uVar38) >> 8);
                        }
                        lVar25 = lVar25 + 8;
                        iVar29 = iVar29 + iVar33;
                      } while (lVar25 != lVar39 + ((ulong)(local_110 - 1) + 2) * 8);
                      uVar18 = *(ulong *)(this + 0x118);
                    }
                    iVar36 = iVar36 + 1;
                    lVar39 = lVar39 + (uVar18 >> 2) * 8;
                    iVar34 = iVar34 + iVar22;
                  } while (iVar36 != local_10c);
                }
              }
            }
            else {
              lVar39 = plVar12[0x11];
              cVar7 = (**(code **)(*(long *)this + 0x200))();
              if (cVar7 == '\0') goto LAB_05143adc;
              iVar34 = (int)(local_124 * 65536.0);
              iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
              iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
              Color::Color(aCStack_f8,1);
              cVar7 = Sexy::operator==(param_5,aCStack_f8);
              if (cVar7 == '\0') {
                iVar36 = *(int *)(param_5 + 0xc);
                iVar29 = (iVar36 * *(int *)param_5) / 0xff;
                iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
                iVar31 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
                if (*(int *)(this + 0x134) == 0x10) {
                  uVar18 = *(ulong *)(this + 0x118);
                  uVar1 = *(uint *)(this + 0x140);
                  uVar2 = *(uint *)(this + 0x138);
                  uVar38 = *(uint *)(this + 0x13c);
                  if (0 < local_10c) {
                    lVar15 = *(long *)(this + 0x120) +
                             ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + 2;
                    lVar25 = plVar12[7];
                    iVar32 = 0;
                    do {
                      if (0 < local_110) {
                        lVar24 = lVar15;
                        iVar27 = (int)(local_128 * 65536.0);
                        do {
                          uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                               (int)lVar25 +
                                                                     (long)(iVar27 >> 0x10)) * 4);
                          iVar10 = (int)(((ulong)(uVar3 >> 0x18) * (long)iVar36) / 0xff);
                          if (iVar10 != 0) {
                            iVar10 = 0x100 - iVar10;
                            uVar23 = (uint)*(ushort *)(lVar24 + -2);
                            *(ushort *)(lVar24 + -2) =
                                 ((ushort)uVar38 &
                                 (ushort)((uVar3 & uVar38) * iVar6 + iVar10 * (uVar23 & uVar38) >> 8
                                         )) +
                                 ((ushort)uVar2 &
                                 (ushort)((uVar3 & uVar2) * iVar29 + iVar10 * (uVar23 & uVar2) >> 8)
                                 ) + ((ushort)uVar1 &
                                     (ushort)((uVar3 & uVar1) * iVar31 + iVar10 * (uVar23 & uVar1)
                                             >> 8));
                          }
                          lVar24 = lVar24 + 2;
                          iVar27 = iVar27 + iVar33;
                        } while (lVar24 != (ulong)(local_110 - 1) * 2 + 2 + lVar15);
                      }
                      iVar32 = iVar32 + 1;
                      iVar34 = iVar34 + iVar22;
                      lVar15 = lVar15 + (uVar18 & 0xfffffffffffffffe);
                    } while (iVar32 != local_10c);
                  }
                }
                else if (*(int *)(this + 0x134) == 0x20) {
                  uVar18 = *(ulong *)(this + 0x118);
                  uVar38 = *(uint *)(this + 0x140);
                  uVar1 = *(uint *)(this + 0x138);
                  uVar2 = *(uint *)(this + 0x13c);
                  lVar15 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                  if (0 < local_10c) {
                    lVar25 = plVar12[7];
                    lVar24 = NEON_shl((ulong)(local_110 - 1) + 2,3);
                    iVar32 = 0;
                    do {
                      if (0 < local_110) {
                        lVar14 = lVar15 + 8;
                        iVar27 = (int)(local_128 * 65536.0);
                        do {
                          uVar18 = *(ulong *)(lVar14 + -8);
                          uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                               (int)lVar25 +
                                                                     (long)(iVar27 >> 0x10)) * 4);
                          iVar10 = (int)(((ulong)(uVar3 >> 0x18) * (long)iVar36) / 0xff);
                          if (iVar10 != 0) {
                            lVar28 = (long)(0x100 - iVar10);
                            *(ulong *)(lVar14 + -8) =
                                 ((ulong)uVar2 &
                                 (ulong)(uVar3 & uVar2) * (long)iVar6 + lVar28 * (uVar18 & uVar2) >>
                                 8) + ((ulong)uVar1 &
                                      (ulong)(uVar3 & uVar1) * (long)iVar29 +
                                      lVar28 * (uVar18 & uVar1) >> 8) +
                                 ((ulong)uVar38 &
                                 (ulong)(uVar3 & uVar38) * (long)iVar31 + lVar28 * (uVar18 & uVar38)
                                 >> 8);
                          }
                          lVar14 = lVar14 + 8;
                          iVar27 = iVar27 + iVar33;
                        } while (lVar14 != lVar15 + lVar24);
                        uVar18 = *(ulong *)(this + 0x118);
                      }
                      iVar32 = iVar32 + 1;
                      iVar34 = iVar34 + iVar22;
                      lVar15 = lVar15 + (uVar18 >> 2) * 8;
                    } while (iVar32 != local_10c);
                  }
                }
              }
              else if (*(int *)(this + 0x134) == 0x10) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                uVar38 = *(uint *)(this + 0x140);
                if (0 < local_10c) {
                  lVar25 = plVar12[7];
                  lVar15 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar18 >> 1)) * 2 + 2;
                  iVar36 = 0;
                  do {
                    if (0 < local_110) {
                      lVar24 = lVar15;
                      iVar29 = (int)(local_128 * 65536.0);
                      do {
                        uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar25 +
                                                                   (long)(iVar29 >> 0x10)) * 4);
                        uVar23 = uVar3 >> 0x18;
                        if (uVar23 != 0) {
                          iVar6 = 0x100 - uVar23;
                          uVar23 = (uint)*(ushort *)(lVar24 + -2);
                          *(ushort *)(lVar24 + -2) =
                               ((ushort)uVar1 & (ushort)(iVar6 * (uVar23 & uVar1) >> 8)) +
                               ((ushort)uVar2 & (ushort)(iVar6 * (uVar23 & uVar2) >> 8)) +
                               (short)uVar3 +
                               ((ushort)uVar38 & (ushort)(iVar6 * (uVar23 & uVar38) >> 8));
                        }
                        lVar24 = lVar24 + 2;
                        iVar29 = iVar29 + iVar33;
                      } while ((ulong)(local_110 - 1) * 2 + 2 + lVar15 != lVar24);
                    }
                    iVar36 = iVar36 + 1;
                    lVar15 = lVar15 + (uVar18 & 0xfffffffffffffffe);
                    iVar34 = iVar34 + iVar22;
                  } while (iVar36 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar18 = *(ulong *)(this + 0x118);
                uVar1 = *(uint *)(this + 0x138);
                uVar2 = *(uint *)(this + 0x13c);
                uVar38 = *(uint *)(this + 0x140);
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar18 >> 2)) * 8;
                if (0 < local_10c) {
                  lVar25 = plVar12[7];
                  iVar36 = 0;
                  do {
                    if (0 < local_110) {
                      lVar24 = lVar15 + 8;
                      iVar29 = (int)(local_128 * 65536.0);
                      do {
                        uVar18 = *(ulong *)(lVar24 + -8);
                        uVar3 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar25 +
                                                                   (long)(iVar29 >> 0x10)) * 4);
                        uVar23 = uVar3 >> 0x18;
                        if (uVar23 != 0) {
                          lVar14 = (long)(int)(0x100 - uVar23);
                          *(ulong *)(lVar24 + -8) =
                               ((ulong)uVar1 & lVar14 * (uVar18 & uVar1) >> 8) +
                               ((ulong)uVar2 & lVar14 * (uVar18 & uVar2) >> 8) + (ulong)uVar3 +
                               ((ulong)uVar38 & lVar14 * (uVar18 & uVar38) >> 8);
                        }
                        lVar24 = lVar24 + 8;
                        iVar29 = iVar29 + iVar33;
                      } while (lVar24 != lVar15 + ((ulong)(local_110 - 1) + 2) * 8);
                      uVar18 = *(ulong *)(this + 0x118);
                    }
                    iVar36 = iVar36 + 1;
                    lVar15 = lVar15 + (uVar18 >> 2) * 8;
                    iVar34 = iVar34 + iVar22;
                  } while (iVar36 != local_10c);
                }
              }
            }
          }
          else if (plVar12[0x10] == 0) {
            cVar7 = (**(code **)(*(long *)this + 0x200))(this);
            if (cVar7 == '\0') goto LAB_05143adc;
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar15 = *(long *)(lVar39 + 0x28);
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar25 = *(long *)(lVar39 + 0x30);
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar24 = *(long *)(lVar39 + 0x38);
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar1 = *(uint *)(lVar39 + 0x1c);
            uVar18 = (ulong)uVar1;
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar2 = *(uint *)(lVar39 + 0x20);
            uVar35 = (ulong)uVar2;
            lVar39 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar38 = *(uint *)(lVar39 + 0x24);
            uVar37 = (ulong)uVar38;
            iVar34 = (int)(local_124 * 65536.0);
            iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
            iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
            Color::Color(aCStack_f8,1);
            cVar7 = Sexy::operator==(param_5,aCStack_f8);
            if (cVar7 == '\0') {
              iVar36 = *(int *)(param_5 + 0xc);
              iVar29 = (iVar36 * *(int *)param_5) / 0xff;
              iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
              iVar36 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar3 = *(uint *)(this + 0x138);
                uVar19 = *(ulong *)(this + 0x118);
                uVar23 = *(uint *)(this + 0x140);
                uVar26 = *(uint *)(this + 0x13c);
                if (0 < local_10c) {
                  lVar39 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + 2;
                  lVar14 = plVar12[7];
                  iVar31 = 0;
                  do {
                    uVar5 = (iVar34 >> 0x10) * (int)lVar14;
                    if (0 < local_110) {
                      lVar28 = lVar39;
                      iVar32 = (int)(local_128 * 65536.0);
                      do {
                        uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                   (ulong)uVar5 << 2) + (long)(iVar32 >> 0x10) * 4);
                        if (uVar4 != 0) {
                          uVar16 = (ulong)*(ushort *)(lVar28 + -2);
                          *(ushort *)(lVar28 + -2) =
                               (ushort)(*(int *)(lVar25 + (((uVar16 & uVar26) >> (uVar35 & 0x3f)) +
                                                          ((ulong)((uVar4 & uVar26) >>
                                                                  (uVar35 & 0x3f)) * (long)iVar6 >>
                                                          8)) * 4) << (ulong)(uVar2 & 0x1f)) |
                               (ushort)(*(int *)(lVar15 + (((uVar16 & uVar3) >> (uVar18 & 0x3f)) +
                                                          ((ulong)((uVar4 & uVar3) >>
                                                                  (uVar18 & 0x3f)) * (long)iVar29 >>
                                                          8)) * 4) << (ulong)(uVar1 & 0x1f)) |
                               (ushort)(*(int *)(lVar24 + (((uVar16 & uVar23) >> (uVar37 & 0x3f)) +
                                                          ((ulong)((uVar4 & uVar23) >>
                                                                  (uVar37 & 0x3f)) * (long)iVar36 >>
                                                          8)) * 4) << (ulong)(uVar38 & 0x1f));
                        }
                        lVar28 = lVar28 + 2;
                        iVar32 = iVar32 + iVar33;
                      } while (lVar28 != (ulong)(local_110 - 1) * 2 + 2 + lVar39);
                    }
                    iVar31 = iVar31 + 1;
                    iVar34 = iVar34 + iVar22;
                    lVar39 = lVar39 + (uVar19 & 0xfffffffffffffffe);
                  } while (iVar31 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar19 = *(ulong *)(this + 0x118);
                uVar3 = *(uint *)(this + 0x138);
                uVar23 = *(uint *)(this + 0x140);
                uVar26 = *(uint *)(this + 0x13c);
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
                if (0 < local_10c) {
                  iVar31 = 0;
                  lVar14 = plVar12[7];
                  lVar28 = NEON_shl((ulong)(local_110 - 1) + 2,3);
                  do {
                    uVar5 = (int)lVar14 * (iVar34 >> 0x10);
                    if (0 < local_110) {
                      lVar20 = lVar39 + 8;
                      iVar32 = (int)(local_128 * 65536.0);
                      do {
                        uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                   (ulong)uVar5 << 2) + (long)(iVar32 >> 0x10) * 4);
                        uVar19 = *(ulong *)(lVar20 + -8);
                        if (uVar4 != 0) {
                          *(long *)(lVar20 + -8) =
                               (long)(*(int *)(lVar25 + (((uVar19 & uVar26) >> (uVar35 & 0x3f)) +
                                                        ((ulong)((uVar4 & uVar26) >> (uVar35 & 0x3f)
                                                                ) * (long)iVar6 >> 8)) * 4) <<
                                      (ulong)(uVar2 & 0x1f) |
                                      *(int *)(lVar15 + (((uVar19 & uVar3) >> (uVar18 & 0x3f)) +
                                                        ((ulong)((uVar4 & uVar3) >> (uVar18 & 0x3f))
                                                         * (long)iVar29 >> 8)) * 4) <<
                                      (ulong)(uVar1 & 0x1f) |
                                     *(int *)(lVar24 + (((uVar19 & uVar23) >> (uVar37 & 0x3f)) +
                                                       ((ulong)((uVar4 & uVar23) >> (uVar37 & 0x3f))
                                                        * (long)iVar36 >> 8)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                        }
                        lVar20 = lVar20 + 8;
                        iVar32 = iVar32 + iVar33;
                      } while (lVar20 != lVar39 + lVar28);
                      uVar19 = *(ulong *)(this + 0x118);
                    }
                    lVar39 = lVar39 + (uVar19 >> 2) * 8;
                    iVar31 = iVar31 + 1;
                    iVar34 = iVar34 + iVar22;
                  } while (iVar31 != local_10c);
                }
              }
            }
            else if (*(int *)(this + 0x134) == 0x10) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x140);
              uVar23 = *(uint *)(this + 0x138);
              uVar26 = *(uint *)(this + 0x13c);
              if (0 < local_10c) {
                lVar39 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + 2;
                lVar14 = plVar12[7];
                iVar36 = 0;
                do {
                  uVar5 = (iVar34 >> 0x10) * (int)lVar14;
                  if (0 < local_110) {
                    lVar28 = lVar39;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar5 << 2) + (long)(iVar29 >> 0x10) * 4);
                      if (uVar4 != 0) {
                        uVar16 = (ulong)*(ushort *)(lVar28 + -2);
                        *(ushort *)(lVar28 + -2) =
                             (ushort)(*(int *)(lVar25 + ((ulong)(uVar4 & uVar26) + (uVar16 & uVar26)
                                                        >> (uVar35 & 0x3f)) * 4) <<
                                     (ulong)(uVar2 & 0x1f)) |
                             (ushort)(*(int *)(lVar15 + ((ulong)(uVar4 & uVar23) + (uVar16 & uVar23)
                                                        >> (uVar18 & 0x3f)) * 4) <<
                                     (ulong)(uVar1 & 0x1f)) |
                             (ushort)(*(int *)(lVar24 + ((ulong)(uVar4 & uVar3) + (uVar16 & uVar3)
                                                        >> (uVar37 & 0x3f)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                      }
                      lVar28 = lVar28 + 2;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar28 != (ulong)(local_110 - 1) * 2 + 2 + lVar39);
                  }
                  iVar36 = iVar36 + 1;
                  lVar39 = lVar39 + (uVar19 & 0xfffffffffffffffe);
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x138);
              uVar23 = *(uint *)(this + 0x13c);
              uVar26 = *(uint *)(this + 0x140);
              lVar39 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
              if (0 < local_10c) {
                lVar14 = plVar12[7];
                iVar36 = 0;
                do {
                  uVar5 = (int)lVar14 * (iVar34 >> 0x10);
                  if (0 < local_110) {
                    lVar28 = lVar39 + 8;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar4 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                                 (ulong)uVar5 << 2) + (long)(iVar29 >> 0x10) * 4);
                      uVar19 = *(ulong *)(lVar28 + -8);
                      if (uVar4 != 0) {
                        *(long *)(lVar28 + -8) =
                             (long)(*(int *)(lVar25 + ((ulong)(uVar4 & uVar23) + (uVar19 & uVar23)
                                                      >> (uVar35 & 0x3f)) * 4) <<
                                    (ulong)(uVar2 & 0x1f) |
                                    *(int *)(lVar15 + ((ulong)(uVar4 & uVar3) + (uVar19 & uVar3) >>
                                                      (uVar18 & 0x3f)) * 4) << (ulong)(uVar1 & 0x1f)
                                   | *(int *)(lVar24 + ((ulong)(uVar4 & uVar26) + (uVar19 & uVar26)
                                                       >> (uVar37 & 0x3f)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                      }
                      lVar28 = lVar28 + 8;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar28 != lVar39 + ((ulong)(local_110 - 1) + 2) * 8);
                    uVar19 = *(ulong *)(this + 0x118);
                  }
                  iVar36 = iVar36 + 1;
                  lVar39 = lVar39 + (uVar19 >> 2) * 8;
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
          }
          else {
            lVar39 = plVar12[0x11];
            cVar7 = (**(code **)(*(long *)this + 0x200))(this);
            if (cVar7 == '\0') goto LAB_05143adc;
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar25 = *(long *)(lVar15 + 0x28);
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar24 = *(long *)(lVar15 + 0x30);
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            lVar14 = *(long *)(lVar15 + 0x38);
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar1 = *(uint *)(lVar15 + 0x1c);
            uVar18 = (ulong)uVar1;
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar2 = *(uint *)(lVar15 + 0x20);
            uVar35 = (ulong)uVar2;
            lVar15 = (**(code **)(**(long **)(this + 0xf0) + 0xa0))(*(long **)(this + 0xf0));
            uVar38 = *(uint *)(lVar15 + 0x24);
            uVar37 = (ulong)uVar38;
            iVar34 = (int)(local_124 * 65536.0);
            iVar22 = (int)((local_11c * 65536.0) / (float)local_10c);
            iVar33 = (int)((local_120 * 65536.0) / (float)local_110);
            Color::Color(aCStack_f8,1);
            cVar7 = Sexy::operator==(param_5,aCStack_f8);
            if (cVar7 == '\0') {
              iVar36 = *(int *)(param_5 + 0xc);
              iVar29 = (iVar36 * *(int *)param_5) / 0xff;
              iVar6 = (iVar36 * *(int *)(param_5 + 4)) / 0xff;
              iVar36 = (iVar36 * *(int *)(param_5 + 8)) / 0xff;
              if (*(int *)(this + 0x134) == 0x10) {
                uVar19 = *(ulong *)(this + 0x118);
                uVar3 = *(uint *)(this + 0x140);
                uVar23 = *(uint *)(this + 0x138);
                uVar26 = *(uint *)(this + 0x13c);
                if (0 < local_10c) {
                  lVar15 = *(long *)(this + 0x120) +
                           ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + 2;
                  lVar28 = plVar12[7];
                  iVar31 = 0;
                  do {
                    if (0 < local_110) {
                      lVar20 = lVar15;
                      iVar32 = (int)(local_128 * 65536.0);
                      do {
                        uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar28 +
                                                                   (long)(iVar32 >> 0x10)) * 4);
                        if (uVar5 != 0) {
                          uVar16 = (ulong)*(ushort *)(lVar20 + -2);
                          *(ushort *)(lVar20 + -2) =
                               (ushort)(*(int *)(lVar24 + (((uVar16 & uVar26) >> (uVar35 & 0x3f)) +
                                                          ((ulong)((uVar5 & uVar26) >>
                                                                  (uVar35 & 0x3f)) * (long)iVar6 >>
                                                          8)) * 4) << (ulong)(uVar2 & 0x1f)) |
                               (ushort)(*(int *)(lVar25 + (((uVar16 & uVar23) >> (uVar18 & 0x3f)) +
                                                          ((ulong)((uVar5 & uVar23) >>
                                                                  (uVar18 & 0x3f)) * (long)iVar29 >>
                                                          8)) * 4) << (ulong)(uVar1 & 0x1f)) |
                               (ushort)(*(int *)(lVar14 + (((uVar16 & uVar3) >> (uVar37 & 0x3f)) +
                                                          ((ulong)((uVar5 & uVar3) >>
                                                                  (uVar37 & 0x3f)) * (long)iVar36 >>
                                                          8)) * 4) << (ulong)(uVar38 & 0x1f));
                        }
                        lVar20 = lVar20 + 2;
                        iVar32 = iVar32 + iVar33;
                      } while (lVar20 != (ulong)(local_110 - 1) * 2 + 2 + lVar15);
                    }
                    lVar15 = lVar15 + (uVar19 & 0xfffffffffffffffe);
                    iVar31 = iVar31 + 1;
                    iVar34 = iVar34 + iVar22;
                  } while (iVar31 != local_10c);
                }
              }
              else if (*(int *)(this + 0x134) == 0x20) {
                uVar19 = *(ulong *)(this + 0x118);
                uVar3 = *(uint *)(this + 0x140);
                uVar23 = *(uint *)(this + 0x138);
                uVar26 = *(uint *)(this + 0x13c);
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
                if (0 < local_10c) {
                  lVar28 = plVar12[7];
                  lVar20 = NEON_shl((ulong)(local_110 - 1) + 2,3);
                  iVar31 = 0;
                  do {
                    if (0 < local_110) {
                      lVar21 = lVar15 + 8;
                      iVar32 = (int)(local_128 * 65536.0);
                      do {
                        uVar19 = *(ulong *)(lVar21 + -8);
                        uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                             (int)lVar28 +
                                                                   (long)(iVar32 >> 0x10)) * 4);
                        if (uVar5 != 0) {
                          *(long *)(lVar21 + -8) =
                               (long)(*(int *)(lVar24 + (((uVar19 & uVar26) >> (uVar35 & 0x3f)) +
                                                        ((ulong)((uVar5 & uVar26) >> (uVar35 & 0x3f)
                                                                ) * (long)iVar6 >> 8)) * 4) <<
                                      (ulong)(uVar2 & 0x1f) |
                                      *(int *)(lVar25 + (((uVar19 & uVar23) >> (uVar18 & 0x3f)) +
                                                        ((ulong)((uVar5 & uVar23) >> (uVar18 & 0x3f)
                                                                ) * (long)iVar29 >> 8)) * 4) <<
                                      (ulong)(uVar1 & 0x1f) |
                                     *(int *)(lVar14 + (((uVar19 & uVar3) >> (uVar37 & 0x3f)) +
                                                       ((ulong)((uVar5 & uVar3) >> (uVar37 & 0x3f))
                                                        * (long)iVar36 >> 8)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                        }
                        lVar21 = lVar21 + 8;
                        iVar32 = iVar32 + iVar33;
                      } while (lVar21 != lVar15 + lVar20);
                      uVar19 = *(ulong *)(this + 0x118);
                    }
                    iVar31 = iVar31 + 1;
                    iVar34 = iVar34 + iVar22;
                    lVar15 = lVar15 + (uVar19 >> 2) * 8;
                  } while (iVar31 != local_10c);
                }
              }
            }
            else if (*(int *)(this + 0x134) == 0x10) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x140);
              uVar23 = *(uint *)(this + 0x138);
              uVar26 = *(uint *)(this + 0x13c);
              if (0 < local_10c) {
                lVar28 = plVar12[7];
                lVar15 = *(long *)(this + 0x120) +
                         ((long)local_118 + ((long)local_114 * uVar19 >> 1)) * 2 + 2;
                iVar36 = 0;
                do {
                  if (0 < local_110) {
                    lVar20 = lVar15;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar28 +
                                                                 (long)(iVar29 >> 0x10)) * 4);
                      if (uVar5 != 0) {
                        uVar16 = (ulong)*(ushort *)(lVar20 + -2);
                        *(ushort *)(lVar20 + -2) =
                             (ushort)(*(int *)(lVar24 + ((ulong)(uVar5 & uVar26) + (uVar16 & uVar26)
                                                        >> (uVar35 & 0x3f)) * 4) <<
                                     (ulong)(uVar2 & 0x1f)) |
                             (ushort)(*(int *)(lVar25 + ((ulong)(uVar5 & uVar23) + (uVar16 & uVar23)
                                                        >> (uVar18 & 0x3f)) * 4) <<
                                     (ulong)(uVar1 & 0x1f)) |
                             (ushort)(*(int *)(lVar14 + ((ulong)(uVar5 & uVar3) + (uVar16 & uVar3)
                                                        >> (uVar37 & 0x3f)) * 4) <<
                                     (ulong)(uVar38 & 0x1f));
                      }
                      lVar20 = lVar20 + 2;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar20 != (ulong)(local_110 - 1) * 2 + 2 + lVar15);
                  }
                  iVar36 = iVar36 + 1;
                  lVar15 = lVar15 + (uVar19 & 0xfffffffffffffffe);
                  iVar34 = iVar34 + iVar22;
                } while (iVar36 != local_10c);
              }
            }
            else if (*(int *)(this + 0x134) == 0x20) {
              uVar19 = *(ulong *)(this + 0x118);
              uVar3 = *(uint *)(this + 0x140);
              uVar23 = *(uint *)(this + 0x138);
              uVar26 = *(uint *)(this + 0x13c);
              lVar15 = *(long *)(this + 0x120) +
                       ((long)local_118 + ((long)local_114 * uVar19 >> 2)) * 8;
              if (0 < local_10c) {
                lVar28 = plVar12[7];
                iVar36 = 0;
                lVar20 = NEON_shl((ulong)(local_110 - 1) + 2,3);
                do {
                  if (0 < local_110) {
                    lVar21 = lVar15 + 8;
                    iVar29 = (int)(local_128 * 65536.0);
                    do {
                      uVar19 = *(ulong *)(lVar21 + -8);
                      uVar5 = *(uint *)(lVar11 + (ulong)*(byte *)(lVar39 + (iVar34 >> 0x10) *
                                                                           (int)lVar28 +
                                                                 (long)(iVar29 >> 0x10)) * 4);
                      if (uVar5 != 0) {
                        *(long *)(lVar21 + -8) =
                             (long)(*(int *)(lVar24 + ((ulong)(uVar5 & uVar26) + (uVar19 & uVar26)
                                                      >> (uVar35 & 0x3f)) * 4) <<
                                    (ulong)(uVar2 & 0x1f) |
                                    *(int *)(lVar25 + ((ulong)(uVar5 & uVar23) + (uVar19 & uVar23)
                                                      >> (uVar18 & 0x3f)) * 4) <<
                                    (ulong)(uVar1 & 0x1f) |
                                   *(int *)(lVar14 + ((ulong)(uVar5 & uVar3) + (uVar19 & uVar3) >>
                                                     (uVar37 & 0x3f)) * 4) << (ulong)(uVar38 & 0x1f)
                                   );
                      }
                      lVar21 = lVar21 + 8;
                      iVar29 = iVar29 + iVar33;
                    } while (lVar21 != lVar15 + lVar20);
                    uVar19 = *(ulong *)(this + 0x118);
                  }
                  iVar36 = iVar36 + 1;
                  iVar34 = iVar34 + iVar22;
                  lVar15 = lVar15 + (uVar19 >> 2) * 8;
                } while (iVar36 != local_10c);
              }
            }
          }
          (**(code **)(*(long *)this + 0x208))(this);
        }
      }
      else {
        if ((((this[0xfb] != (DeviceImage)0x0) || (this[0x92] != (DeviceImage)0x0)) ||
            (this[0x91] != (DeviceImage)0x0)) ||
           (cVar7 = (**(code **)(**(long **)(this + 0xf0) + 0x10))(*(long **)(this + 0xf0)),
           cVar7 != '\0')) {
          MemoryImage::BltStretched
                    ((MemoryImage *)this,param_1,param_2,param_3,param_4,param_5,param_6,false,false
                    );
          goto LAB_05143adc;
        }
        MemoryImage::MemoryImage((MemoryImage *)aCStack_f8,*(SexyAppBase **)(this + 0xb8));
        Insets::Insets(aIStack_108,0,0,local_110,local_10c);
        MemoryImage::Create((MemoryImage *)aCStack_f8,local_110,local_10c);
        MemoryImage::SlowStretchBlt
                  ((Image *)aCStack_f8,(TRect *)param_1,(TRect *)aIStack_108,(Color *)&local_128,
                   (int)param_5);
        (**(code **)(*(long *)this + 0xf8))
                  (this,(MemoryImage *)aCStack_f8,local_118,local_114,aIStack_108,param_5,param_6);
        MemoryImage::~MemoryImage((MemoryImage *)aCStack_f8);
      }
      DeleteAllNonSurfaceData(this);
      DeleteAllNonSurfaceData(this);
    }
  }
LAB_05143adc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::DeviceImage::BltStretched(Sexy::Image*, Sexy::TRect<int> const&,
   Sexy::TRect<int> const&, Sexy::TRect<int> const&, Sexy::Color const&, int, bool, bool) */

void __thiscall
Sexy::DeviceImage::BltStretched
          (DeviceImage *this,Image *param_1,TRect *param_2,TRect *param_3,TRect *param_4,
          Color *param_5,int param_6,bool param_7,bool param_8)

{
  BltStretched(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


/* Sexy::DeviceImage::BltMatrix(Sexy::Image*, float, float, Sexy::SexyMatrix3 const&,
   Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::DeviceImage::BltMatrix
          (DeviceImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9)

{
  char cVar1;
  code *pcVar2;
  int unaff_w21;
  
  pcVar2 = *(code **)(*(long *)this + 0x200);
  param_1[0x28] = (Image)0x1;
  cVar1 = (*pcVar2)();
  if (cVar1 == '\0') {
    MemoryImage::BltMatrix
              ((MemoryImage *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9);
    return;
  }
  if (*(int *)(this + 0x134) == 0x20) {
    unaff_w21 = 0x888;
  }
  else if (*(long *)(this + 0x138) == 0x7e00000f800) {
    unaff_w21 = 0x565;
    if (*(int *)(this + 0x140) != 0x1f) {
      unaff_w21 = 0;
    }
  }
  else if ((*(long *)(this + 0x138) == 0x3e000007c00) &&
          (unaff_w21 = 0x555, *(int *)(this + 0x140) != 0x1f)) {
    unaff_w21 = 0;
  }
  MemoryImage::BltMatrixHelper
            ((MemoryImage *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(void **)(this + 0x120),(int)*(undefined8 *)(this + 0x118),unaff_w21,param_9);
  (**(code **)(*(long *)this + 0x208))(this);
  DeleteAllNonSurfaceData(this);
  return;
}


/* non-virtual thunk to Sexy::DeviceImage::BltMatrix(Sexy::Image*, float, float, Sexy::SexyMatrix3
   const&, Sexy::TRect<int> const&, Sexy::Color const&, int, Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::DeviceImage::BltMatrix
          (DeviceImage *this,Image *param_1,float param_2,float param_3,SexyMatrix3 *param_4,
          TRect *param_5,Color *param_6,int param_7,TRect *param_8,bool param_9)

{
  BltMatrix(this + -0x68,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

