// Class: EquationSystem


/* EquationSystem::SetCoefficient(int, int, float) */

void __thiscall
EquationSystem::SetCoefficient(EquationSystem *this,int param_1,int param_2,float param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_0511c69c(*(undefined8 *)this,
                                 (long)(param_2 + param_1 * *(int *)(this + 0x30)));
  *pfVar1 = param_3;
  return;
}


/* EquationSystem::SetCoefficient(int, float) */

void __thiscall EquationSystem::SetCoefficient(EquationSystem *this,int param_1,float param_2)

{
  SetCoefficient(this,*(int *)(this + 0x34),param_1,param_2);
  return;
}


/* EquationSystem::SetConstantTerm(int, float) */

void __thiscall EquationSystem::SetConstantTerm(EquationSystem *this,int param_1,float param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_0511c69c(*(undefined8 *)this,
                                 (long)(*(int *)(this + 0x30) + param_1 * *(int *)(this + 0x30) + -1
                                       ));
  *pfVar1 = param_2;
  return;
}


/* EquationSystem::SetConstantTerm(float) */

void __thiscall EquationSystem::SetConstantTerm(EquationSystem *this,float param_1)

{
  SetConstantTerm(this,*(int *)(this + 0x34),param_1);
  return;
}


/* EquationSystem::Solve() */

void __thiscall EquationSystem::Solve(EquationSystem *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  
  iVar2 = *(int *)(this + 0x30);
  uVar3 = iVar2 - 1;
  if ((int)uVar3 < 1) {
LAB_0511ccc8:
    uVar1 = iVar2 - 2;
    if (-1 < (int)uVar1) {
      iVar10 = -iVar2;
      iVar23 = iVar2 * uVar1;
      lVar22 = (long)(int)uVar1 + 1;
      lVar21 = (long)iVar23;
      uVar14 = *(undefined8 *)this;
      uVar18 = 0xffffffff;
      uVar16 = *(undefined8 *)(this + 0x18);
      lVar9 = (long)(int)(uVar1 + iVar2 * uVar1);
      do {
        fVar19 = 0.0;
        if ((int)(uVar1 - uVar18) < (int)uVar3) {
          lVar13 = lVar22;
          do {
            pfVar6 = (float *)FUN_0511c69c(uVar14,lVar13 + lVar21);
            lVar15 = lVar13 + 1;
            pfVar7 = (float *)FUN_0511c69c(uVar16,lVar13);
            fVar19 = fVar19 + *pfVar6 * *pfVar7;
            lVar13 = lVar15;
          } while (lVar15 != lVar22 + 1 + (ulong)uVar18);
        }
        lVar22 = lVar22 + -1;
        uVar18 = uVar18 + 1;
        lVar21 = lVar21 + iVar10;
        pfVar6 = (float *)FUN_0511c69c(uVar16);
        iVar2 = uVar3 + iVar23;
        iVar23 = iVar23 + iVar10;
        pfVar7 = (float *)FUN_0511c69c(uVar14,(long)iVar2);
        fVar20 = *pfVar7;
        pfVar7 = (float *)FUN_0511c69c(uVar14,lVar9);
        *pfVar6 = (fVar20 - fVar19) / *pfVar7;
        lVar9 = lVar9 + (iVar10 + -1);
      } while (uVar18 != uVar1);
    }
    return;
  }
  lVar15 = (long)iVar2;
  uVar18 = 0;
  uVar1 = 1;
  lVar9 = lVar15 + -1;
  uVar14 = *(undefined8 *)this;
  lVar22 = 0;
  iVar23 = 0;
  lVar21 = 0;
  uVar24 = uVar1;
  iVar10 = iVar23;
  lVar13 = lVar21;
  iVar4 = iVar23;
  uVar17 = uVar18;
  if ((int)uVar3 < 2) goto LAB_0511cb74;
  do {
    do {
      pfVar6 = (float *)FUN_0511c69c(uVar14,lVar13 + lVar15);
      fVar19 = *pfVar6;
      pfVar6 = (float *)FUN_0511c69c(uVar14,(long)(int)(uVar18 * iVar2 + uVar17));
      iVar10 = iVar2 + iVar4;
      uVar5 = uVar1;
      if (ABS(fVar19) <= ABS(*pfVar6)) {
        iVar10 = uVar18 * iVar2;
        uVar5 = uVar18;
      }
      uVar18 = uVar5;
      uVar1 = uVar1 + 1;
      lVar13 = lVar13 + lVar15;
      iVar4 = iVar2 + iVar4;
    } while (uVar3 != uVar1);
LAB_0511cb74:
    do {
      uVar18 = uVar24;
      lVar13 = (long)iVar10;
      lVar11 = lVar22;
      while( true ) {
        pfVar6 = (float *)FUN_0511c69c(uVar14,lVar11);
        pfVar7 = (float *)FUN_0511c69c(uVar14,lVar13);
        std::swap<float>(pfVar6,pfVar7);
        if (lVar11 + 1 == (ulong)uVar3 + 1 + lVar22) break;
        uVar14 = *(undefined8 *)this;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 1;
      }
      if (uVar18 == uVar3) goto LAB_0511ccc8;
      uVar14 = *(undefined8 *)this;
      lVar22 = lVar22 + lVar15;
      pfVar6 = (float *)FUN_0511c69c(uVar14,lVar21);
      lVar13 = lVar15;
      uVar1 = uVar18;
      do {
        pfVar7 = (float *)FUN_0511c69c(uVar14,lVar21 + lVar13);
        fVar19 = *pfVar6;
        fVar20 = *pfVar7;
        lVar11 = lVar9;
        if (fVar20 / fVar19 != 0.0) {
          do {
            pfVar7 = (float *)FUN_0511c69c(uVar14,lVar11);
            lVar12 = lVar11 + -1;
            pfVar8 = (float *)FUN_0511c69c(uVar14,lVar13 + lVar11);
            *pfVar8 = *pfVar8 - (fVar20 / fVar19) * *pfVar7;
            lVar11 = lVar12;
          } while (lVar12 != (lVar9 + -1) - (ulong)(iVar2 - uVar18));
        }
        uVar1 = uVar1 + 1;
        lVar13 = lVar13 + lVar15;
      } while (uVar3 != uVar1);
      lVar21 = lVar21 + lVar15 + 1;
      lVar9 = lVar9 + lVar15;
      iVar23 = iVar23 + iVar2;
      uVar1 = uVar18 + 1;
      uVar24 = uVar1;
      iVar10 = iVar23;
      lVar13 = lVar21;
      iVar4 = iVar23;
      uVar17 = uVar18;
    } while ((int)uVar3 <= (int)uVar1);
  } while( true );
}


/* EquationSystem::~EquationSystem() */

void __thiscall EquationSystem::~EquationSystem(EquationSystem *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)this);
  return;
}


/* EquationSystem::EquationSystem(int) */

void __thiscall EquationSystem::EquationSystem(EquationSystem *this,int param_1)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x34) = 0;
  *(int *)(this + 0x30) = param_1 + 1;
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)this,(long)(param_1 * (param_1 + 1)));
  std::vector<float,std::allocator<float>>::resize
            ((vector<float,std::allocator<float>> *)(this + 0x18),(long)param_1);
  return;
}

