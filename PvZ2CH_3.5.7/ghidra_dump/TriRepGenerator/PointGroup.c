// Class: TriRepGenerator::PointGroup


/* TriRepGenerator::PointGroup::Init() */

void __thiscall TriRepGenerator::PointGroup::Init(PointGroup *this)

{
  FUN_0515b804(this + 0x18);
  FUN_0515b804(this + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::PointGroup::RemoveRedundantPoints() */

void __thiscall TriRepGenerator::PointGroup::RemoveRedundantPoints(PointGroup *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  PointGroup *pPVar9;
  PointGroup *pPVar10;
  PointGroup *pPVar11;
  int *piVar12;
  PointGroup *pPVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  PointGroup *local_18 [2];
  long local_8;
  
  lVar6 = ___stack_chk_guard;
  fVar5 = _FUN_05161720;
  local_8 = ___stack_chk_guard;
LAB_051614d8:
  lVar16 = 0;
  local_18[0] = this + 0x18;
  local_18[1] = this + 0x40;
  iVar15 = 0;
  do {
    piVar14 = *(int **)((long)local_18 + lVar16);
    piVar7 = *(int **)(piVar14 + 4);
joined_r0x051614f4:
    piVar8 = piVar7;
    if (piVar14 != piVar7) {
      while( true ) {
        piVar7 = *(int **)(piVar8 + 4);
        if (((piVar8[2] != 0) || (piVar12 = *(int **)(piVar8 + 6), piVar12[2] == 3)) ||
           (piVar7[2] == 3)) goto joined_r0x051614f4;
        iVar2 = *piVar7 - *piVar8;
        iVar1 = *piVar8 - *piVar12;
        if (iVar2 == 0) break;
        if (iVar1 == 0) goto joined_r0x051614f4;
        if (ABS((float)(piVar7[1] - piVar8[1]) / (float)iVar2 -
                (float)(piVar8[1] - piVar12[1]) / (float)iVar1) < fVar5) goto LAB_05161500;
        piVar8 = piVar7;
        if (piVar14 == piVar7) goto LAB_051615b0;
      }
      if (iVar1 == 0) {
LAB_05161500:
        *(int **)(piVar7 + 6) = piVar12;
        iVar15 = iVar15 + 1;
        *(int **)(*(long *)(piVar8 + 6) + 0x10) = piVar7;
        *(int **)(piVar8 + 6) = piVar8;
        *(int **)(piVar8 + 4) = piVar8;
        piVar8[2] = 4;
      }
      goto joined_r0x051614f4;
    }
LAB_051615b0:
    lVar16 = lVar16 + 8;
  } while (lVar16 != 0x10);
  lVar16 = 0;
  do {
    pPVar13 = local_18[lVar16];
    pPVar9 = *(PointGroup **)(pPVar13 + 0x10);
    pPVar10 = pPVar9;
    if (pPVar13 != pPVar9) {
      do {
        pPVar11 = *(PointGroup **)(pPVar10 + 0x10);
        if (((*(int *)(pPVar10 + 8) == 0) && (*(int *)(pPVar11 + 8) == 0)) &&
           (piVar7 = *(int **)(pPVar11 + 0x10), piVar7[2] == 0)) {
          iVar1 = *(int *)pPVar11 - *(int *)pPVar10;
          iVar2 = *(int *)(pPVar11 + 4) - *(int *)(pPVar10 + 4);
          iVar3 = *piVar7 - *(int *)pPVar11;
          iVar4 = piVar7[1] - *(int *)(pPVar11 + 4);
          if (lVar16 == 0) {
            if (((iVar1 < 1) || (iVar2 != iVar1)) || ((iVar3 != 0 || (4 < iVar4)))) {
              if ((iVar3 < 0) && (iVar4 + iVar3 == 0)) goto LAB_05161634;
            }
            else {
LAB_05161640:
              *(int *)(pPVar11 + 8) = 5;
            }
          }
          else if ((iVar1 < 0) && (((iVar2 + iVar1 == 0 && (iVar3 == 0)) && (iVar4 < 5)))) {
            *(int *)(pPVar11 + 8) = 5;
          }
          else if ((0 < iVar3) && (iVar4 == iVar3)) {
LAB_05161634:
            if ((iVar1 == 0) && (iVar2 < 5)) goto LAB_05161640;
          }
        }
        pPVar10 = pPVar11;
      } while (pPVar13 != pPVar11);
      iVar1 = *(int *)(pPVar9 + 8);
      pPVar10 = *(PointGroup **)(pPVar9 + 0x10);
      while( true ) {
        if (iVar1 == 5) {
          *(undefined8 *)(pPVar10 + 0x18) = *(undefined8 *)(pPVar9 + 0x18);
          iVar15 = iVar15 + 1;
          *(PointGroup **)(*(long *)(pPVar9 + 0x18) + 0x10) = pPVar10;
          *(PointGroup **)(pPVar9 + 0x18) = pPVar9;
          *(PointGroup **)(pPVar9 + 0x10) = pPVar9;
          *(int *)(pPVar9 + 8) = 4;
        }
        if (pPVar13 == pPVar10) break;
        iVar1 = *(int *)(pPVar10 + 8);
        pPVar9 = pPVar10;
        pPVar10 = *(PointGroup **)(pPVar10 + 0x10);
      }
    }
    if (lVar16 != 0) break;
    lVar16 = 1;
  } while( true );
  if (iVar15 == 0) {
    if (lVar6 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_051614d8;
}


/* TriRepGenerator::PointGroup::~PointGroup() */

void __thiscall TriRepGenerator::PointGroup::~PointGroup(PointGroup *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)this;
  iVar1 = FUN_0515b81c(uVar3,*(undefined8 *)(this + 8));
  if (0 < iVar1) {
    lVar4 = 0;
    while( true ) {
      puVar2 = (undefined8 *)FUN_0515b828(uVar3,lVar4);
      AK::FreeHook((void *)*puVar2);
      if (iVar1 <= (int)(lVar4 + 1)) break;
      uVar3 = *(undefined8 *)this;
      lVar4 = lVar4 + 1;
    }
  }
  std::
  vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>::
  ~vector((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
           *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::PointGroup::AddChainPoint(TriRepGenerator::PointGroup::Point*, int, int,
   TriRepGenerator::PointGroup::Point::EPointType) */

void __thiscall
TriRepGenerator::PointGroup::AddChainPoint
          (PointGroup *this,long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5)

{
  long lVar1;
  Point *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = ::operator_new(0x28);
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)local_10 = param_2;
  *(undefined4 *)(local_10 + 4) = param_3;
  *(undefined4 *)(local_10 + 8) = param_5;
  *(long *)(local_10 + 0x10) = param_1;
  *(long *)(local_10 + 0x18) = lVar1;
  *(Point **)(lVar1 + 0x10) = local_10;
  *(Point **)(param_1 + 0x18) = local_10;
  *(long *)(local_10 + 0x20) = param_1;
  std::
  vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>::
  push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
             *)this,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TriRepGenerator::PointGroup::AddLeftChainPoint(int, int,
   TriRepGenerator::PointGroup::Point::EPointType) */

void __thiscall
TriRepGenerator::PointGroup::AddLeftChainPoint
          (PointGroup *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  AddChainPoint(this,this + 0x18,param_1,param_2,param_4);
  return;
}


/* TriRepGenerator::PointGroup::AddRightChainPoint(int, int,
   TriRepGenerator::PointGroup::Point::EPointType) */

void __thiscall
TriRepGenerator::PointGroup::AddRightChainPoint
          (PointGroup *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  AddChainPoint(this,this + 0x40,param_1,param_2,param_4);
  return;
}


/* TriRepGenerator::PointGroup::PointGroup(TriRepGenerator::PointGroup const&) */

void __thiscall TriRepGenerator::PointGroup::PointGroup(PointGroup *this,PointGroup *param_1)

{
  undefined8 uVar1;
  
  std::
  vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>::
  vector((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
          *)this,(vector *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  return;
}

