// Class: Sexy::BSpline


/* Sexy::BSpline::~BSpline() */

void __thiscall Sexy::BSpline::~BSpline(BSpline *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x48));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<float,std::allocator<float>>::~vector((vector<float,std::allocator<float>> *)this);
  return;
}


/* Sexy::BSpline::GetPoint(float, std::vector<float, std::allocator<float> >&) */

float __thiscall Sexy::BSpline::GetPoint(BSpline *this,float param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  iVar8 = (int)param_1;
  if (iVar8 < 0) {
    fVar13 = 0.0;
    lVar10 = 3;
    lVar11 = 2;
    lVar12 = 1;
    lVar7 = 0;
    fVar14 = fVar13;
  }
  else {
    iVar1 = FUN_0511c690(*(undefined8 *)this,*(undefined8 *)(this + 8));
    if (iVar8 < iVar1 + -1) {
      iVar2 = iVar8 << 2;
      fVar13 = param_1 - (float)iVar8;
    }
    else {
      iVar2 = (iVar1 + -2) * 4;
      fVar13 = (float)(iVar1 + -1) - (float)(iVar1 + -2);
    }
    lVar7 = (long)iVar2;
    lVar12 = (long)(iVar2 + 1);
    lVar11 = (long)(iVar2 + 2);
    lVar10 = (long)(iVar2 + 3);
    fVar14 = fVar13 * fVar13;
  }
  uVar9 = *(undefined8 *)param_2;
  pfVar3 = (float *)FUN_0511c69c(uVar9,lVar7);
  pfVar4 = (float *)FUN_0511c69c(uVar9,lVar12);
  pfVar5 = (float *)FUN_0511c69c(uVar9,lVar11);
  pfVar6 = (float *)FUN_0511c69c(uVar9,lVar10);
  return *pfVar6 + fVar13 * *pfVar5 + fVar14 * (*pfVar4 + fVar13 * *pfVar3);
}


/* Sexy::BSpline::GetXPoint(float) */

void __thiscall Sexy::BSpline::GetXPoint(BSpline *this,float param_1)

{
  GetPoint(this,param_1,(vector *)(this + 0x48));
  return;
}


/* Sexy::BSpline::GetYPoint(float) */

void __thiscall Sexy::BSpline::GetYPoint(BSpline *this,float param_1)

{
  GetPoint(this,param_1,(vector *)(this + 0x60));
  return;
}


/* Sexy::BSpline::GetNextPoint(float&, float&, float&, float, int) */

undefined8 __thiscall
Sexy::BSpline::GetNextPoint
          (BSpline *this,float *param_1,float *param_2,float *param_3,float param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *param_3;
  iVar4 = (int)fVar9;
  if ((iVar4 < 0) ||
     (iVar1 = FUN_0511c690(*(undefined8 *)this,*(undefined8 *)(this + 8)), iVar1 + -1 <= iVar4)) {
    fVar9 = (float)GetXPoint(this,fVar9);
    *param_1 = fVar9;
    fVar9 = (float)GetYPoint(this,*param_3);
    *param_2 = fVar9;
    return 0;
  }
  pfVar2 = (float *)FUN_0511c69c(*(undefined8 *)(this + 0x30),(long)iVar4);
  fVar5 = *pfVar2;
  fVar9 = (float)GetXPoint(this,fVar9);
  fVar6 = (float)GetYPoint(this,*param_3);
  fVar10 = *param_3;
  do {
    fVar10 = fVar10 + (float)param_5 / (fVar5 * 100.0);
    fVar7 = (float)GetXPoint(this,fVar10);
    fVar8 = (float)GetYPoint(this,fVar10);
    if (param_4 * param_4 <= (fVar8 - fVar6) * (fVar8 - fVar6) + (fVar7 - fVar9) * (fVar7 - fVar9))
    break;
    lVar3 = FUN_0511c690(*(undefined8 *)this,*(undefined8 *)(this + 8));
  } while (fVar10 <= (float)(lVar3 - 1));
  *param_1 = fVar7;
  *param_2 = fVar8;
  *param_3 = fVar10;
  return 1;
}


/* Sexy::BSpline::Reset() */

void __thiscall Sexy::BSpline::Reset(BSpline *this)

{
  std::vector<float,std::allocator<float>>::clear((vector<float,std::allocator<float>> *)this);
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x48));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  return;
}


/* Sexy::BSpline::BSpline() */

void __thiscall Sexy::BSpline::BSpline(BSpline *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* Sexy::BSpline::AddPoint(float, float) */

void __thiscall Sexy::BSpline::AddPoint(BSpline *this,float param_1,float param_2)

{
  float local_8;
  float local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)this,&local_4);
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)(this + 0x18),&local_8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BSpline::CalcArcLengths() */

void __thiscall Sexy::BSpline::CalcArcLengths(BSpline *this)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  uVar7 = *(undefined8 *)this;
  iVar2 = FUN_0511c690(uVar7,*(undefined8 *)(this + 8));
  if (0 < iVar2 + -1) {
    lVar9 = 0;
    while( true ) {
      lVar1 = lVar9 + 1;
      pfVar3 = (float *)FUN_0511c69c(uVar7,lVar9);
      uVar8 = *(undefined8 *)(this + 0x18);
      pfVar4 = (float *)FUN_0511c69c(uVar8,lVar9);
      pfVar5 = (float *)FUN_0511c69c(uVar7,lVar1);
      pfVar6 = (float *)FUN_0511c69c(uVar8,lVar1);
      local_c = SQRT((*pfVar6 - *pfVar4) * (*pfVar6 - *pfVar4) +
                     (*pfVar5 - *pfVar3) * (*pfVar5 - *pfVar3));
      std::vector<float,std::allocator<float>>::push_back
                ((vector<float,std::allocator<float>> *)(this + 0x30),&local_c);
      if (iVar2 + -1 <= (int)lVar1) break;
      uVar7 = *(undefined8 *)this;
      lVar9 = lVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BSpline::CalculateSplinePrv(std::vector<float, std::allocator<float> >&, std::vector<float,
   std::allocator<float> >&) */

void __thiscall Sexy::BSpline::CalculateSplinePrv(BSpline *this,vector *param_1,vector *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  EquationSystem aEStack_40 [24];
  vector avStack_28 [28];
  undefined1 auStack_c [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_0511c690(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (1 < uVar4) {
    iVar3 = (int)uVar4 + -1;
    EquationSystem::EquationSystem(aEStack_40,iVar3 * 4);
    EquationSystem::SetCoefficient(aEStack_40,2,1.0);
    FUN_0511c680(auStack_c);
    if (0 < iVar3) {
      iVar7 = 0;
      lVar8 = 0;
      do {
        iVar1 = iVar7 + 1;
        lVar2 = lVar8 + 1;
        EquationSystem::SetCoefficient(aEStack_40,iVar7 + 3,1.0);
        pfVar5 = (float *)FUN_0511c69c(*(undefined8 *)param_1,lVar8);
        EquationSystem::SetConstantTerm(aEStack_40,*pfVar5);
        FUN_0511c680(auStack_c);
        EquationSystem::SetCoefficient(aEStack_40,iVar7,1.0);
        EquationSystem::SetCoefficient(aEStack_40,iVar1,1.0);
        EquationSystem::SetCoefficient(aEStack_40,iVar7 + 2,1.0);
        uVar9 = *(undefined8 *)param_1;
        pfVar5 = (float *)FUN_0511c69c(uVar9,lVar2);
        pfVar6 = (float *)FUN_0511c69c(uVar9,lVar8);
        EquationSystem::SetConstantTerm(aEStack_40,*pfVar5 - *pfVar6);
        FUN_0511c680(auStack_c);
        EquationSystem::SetCoefficient(aEStack_40,iVar7,3.0);
        EquationSystem::SetCoefficient(aEStack_40,iVar1,2.0);
        EquationSystem::SetCoefficient(aEStack_40,iVar7 + 2,1.0);
        if ((int)lVar8 < (int)uVar4 + -2) {
          EquationSystem::SetCoefficient(aEStack_40,iVar7 + 6,-1.0);
          FUN_0511c680(auStack_c);
          EquationSystem::SetCoefficient(aEStack_40,iVar7,6.0);
          EquationSystem::SetCoefficient(aEStack_40,iVar1,2.0);
          EquationSystem::SetCoefficient(aEStack_40,iVar7 + 5,-2.0);
        }
        iVar7 = iVar7 + 4;
        FUN_0511c680(auStack_c);
        lVar8 = lVar2;
      } while ((int)lVar2 < iVar3);
    }
    EquationSystem::Solve(aEStack_40);
    std::vector<float,std::allocator<float>>::operator=
              ((vector<float,std::allocator<float>> *)param_2,avStack_28);
    EquationSystem::~EquationSystem(aEStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::BSpline::CalculateSplinePrvLinear(std::vector<float, std::allocator<float> >&,
   std::vector<float, std::allocator<float> >&) */

void __thiscall
Sexy::BSpline::CalculateSplinePrvLinear(BSpline *this,vector *param_1,vector *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  uVar3 = FUN_0511c690(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (1 < uVar3) {
    iVar2 = (int)uVar3 + -1;
    std::vector<float,std::allocator<float>>::resize
              ((vector<float,std::allocator<float>> *)param_2,(long)(iVar2 * 4));
    if (0 < iVar2) {
      uVar10 = *(undefined8 *)param_1;
      lVar7 = 1;
      pfVar4 = (float *)FUN_0511c69c(uVar10,0);
      uVar8 = *(undefined8 *)param_2;
      lVar9 = 1;
      do {
        fVar12 = *pfVar4;
        lVar1 = lVar9 + 1;
        pfVar4 = (float *)FUN_0511c69c(uVar10,lVar9);
        fVar11 = *pfVar4;
        puVar5 = (undefined4 *)FUN_0511c69c(uVar8,lVar7 + -1);
        *puVar5 = 0;
        puVar5 = (undefined4 *)FUN_0511c69c(uVar8,lVar7);
        *puVar5 = 0;
        pfVar6 = (float *)FUN_0511c69c(uVar8,lVar7 + 1);
        lVar9 = lVar7 + 2;
        lVar7 = lVar7 + 4;
        *pfVar6 = fVar11 - fVar12;
        pfVar6 = (float *)FUN_0511c69c(uVar8,lVar9);
        *pfVar6 = fVar12;
        lVar9 = lVar1;
      } while (lVar1 != (ulong)((int)uVar3 - 2) + 2);
    }
  }
  return;
}


/* Sexy::BSpline::CalculateSpline(bool) */

void __thiscall Sexy::BSpline::CalculateSpline(BSpline *this,bool param_1)

{
  CalcArcLengths(this);
  if (!param_1) {
    CalculateSplinePrv(this,(vector *)this,(vector *)(this + 0x48));
    CalculateSplinePrv(this,(vector *)(this + 0x18),(vector *)(this + 0x60));
    CalcArcLengths(this);
    return;
  }
  CalculateSplinePrvLinear(this,(vector *)this,(vector *)(this + 0x48));
  CalculateSplinePrvLinear(this,(vector *)(this + 0x18),(vector *)(this + 0x60));
  CalcArcLengths(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::BSpline::CalculateSplinePrvSemiLinear(std::vector<float, std::allocator<float> >&,
   std::vector<float, std::allocator<float> >&) */

void __thiscall
Sexy::BSpline::CalculateSplinePrvSemiLinear(BSpline *this,vector *param_1,vector *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_0511c690(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (1 < uVar4) {
    iVar2 = (int)uVar4 + -1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        uVar10 = *(undefined8 *)param_1;
        lVar8 = lVar7 + 1;
        pfVar5 = (float *)FUN_0511c69c(uVar10,lVar7);
        fVar11 = *pfVar5;
        local_2c = fVar11;
        pfVar5 = (float *)FUN_0511c69c(uVar10,lVar8);
        local_28 = *pfVar5;
        if ((int)lVar7 == 0) {
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)&local_20,&local_2c);
        }
        else {
          local_24 = fVar11 * 0.7 + local_28 * 0.3;
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)&local_20,&local_24);
        }
        if ((int)lVar7 < (int)uVar4 + -2) {
          local_24 = local_28 * 0.7 + local_2c * 0.3;
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)&local_20,&local_24);
        }
        else {
          std::vector<float,std::allocator<float>>::push_back
                    ((vector<float,std::allocator<float>> *)&local_20,&local_28);
        }
        lVar7 = lVar8;
      } while ((int)lVar8 < iVar2);
    }
    std::vector<float,std::allocator<float>>::operator=
              ((vector<float,std::allocator<float>> *)param_1,(vector *)&local_20);
    iVar3 = FUN_0511c690(local_20,local_18);
    iVar2 = iVar3 + -1;
    std::vector<float,std::allocator<float>>::resize
              ((vector<float,std::allocator<float>> *)param_2,(long)(iVar2 * 4));
    if (0 < iVar2) {
      uVar10 = *(undefined8 *)param_2;
      uVar4 = 0;
      lVar7 = 1;
      lVar8 = 2;
      lVar9 = 3;
      do {
        while( true ) {
          uVar1 = uVar4 + 1;
          pfVar5 = (float *)FUN_0511c69c(local_20,uVar4);
          fVar12 = *pfVar5;
          pfVar5 = (float *)FUN_0511c69c(local_20,uVar1);
          fVar11 = *pfVar5;
          if (((uVar4 & 1) != 0) && ((int)uVar4 < iVar3 + -2)) break;
          puVar6 = (undefined4 *)FUN_0511c69c(uVar10,uVar4 << 2);
          *puVar6 = 0;
          puVar6 = (undefined4 *)FUN_0511c69c(uVar10,lVar7);
          *puVar6 = 0;
          pfVar5 = (float *)FUN_0511c69c(uVar10,lVar8);
          *pfVar5 = fVar11 - fVar12;
          pfVar5 = (float *)FUN_0511c69c(uVar10,lVar9);
          *pfVar5 = fVar12;
          uVar4 = uVar1;
          lVar7 = lVar7 + 4;
          lVar8 = lVar8 + 4;
          lVar9 = lVar9 + 4;
          if (iVar2 <= (int)uVar1) goto LAB_0511d6a8;
        }
        pfVar5 = (float *)FUN_0511c69c(local_20,uVar4 - 1);
        fVar13 = *pfVar5;
        pfVar5 = (float *)FUN_0511c69c(local_20,uVar4 + 2);
        fVar14 = fVar12 - fVar13;
        fVar13 = (fVar11 - fVar12 * 2.0) + fVar13;
        fVar11 = ((*pfVar5 - fVar11) + fVar13 * -2.0) - fVar14;
        pfVar5 = (float *)FUN_0511c69c(uVar10,uVar4 << 2);
        *pfVar5 = fVar11;
        pfVar5 = (float *)FUN_0511c69c(uVar10,lVar7);
        *pfVar5 = fVar13 - fVar11;
        pfVar5 = (float *)FUN_0511c69c(uVar10,lVar8);
        *pfVar5 = fVar14;
        pfVar5 = (float *)FUN_0511c69c(uVar10,lVar9);
        *pfVar5 = fVar12;
        uVar4 = uVar1;
        lVar7 = lVar7 + 4;
        lVar8 = lVar8 + 4;
        lVar9 = lVar9 + 4;
      } while ((int)uVar1 < iVar2);
    }
LAB_0511d6a8:
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

