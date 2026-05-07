// Class: TriRepGenerator::SpanSet


/* TriRepGenerator::SpanSet::SpanSet() */

void __thiscall TriRepGenerator::SpanSet::SpanSet(SpanSet *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* TriRepGenerator::SpanSet::GroupMonotoneSpans() */

void __thiscall TriRepGenerator::SpanSet::GroupMonotoneSpans(SpanSet *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar16 = *(undefined8 *)this;
  iVar2 = FUN_0515b83c(uVar16,*(undefined8 *)(this + 8));
  iVar3 = 0;
  if (0 < iVar2) {
    puVar6 = (undefined8 *)FUN_0515b830(uVar16,0);
    uVar14 = *puVar6;
    iVar3 = FUN_0515b850(uVar14,puVar6[1]);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      lVar12 = 0;
      do {
        lVar7 = FUN_0515b864(uVar14,lVar12);
        *(int *)(lVar7 + 0x10) = (int)lVar12;
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar3);
    }
    lVar12 = 1;
    if (1 < iVar2) {
      do {
        puVar6 = (undefined8 *)FUN_0515b830(uVar16,lVar12 + -1);
        puVar8 = (undefined8 *)FUN_0515b830(uVar16,lVar12);
        uVar14 = *puVar6;
        iVar4 = FUN_0515b850(uVar14,puVar6[1]);
        uVar15 = *puVar8;
        iVar5 = FUN_0515b850(uVar15,puVar8[1]);
        if (0 < iVar5) {
          lVar7 = 0;
          do {
            piVar9 = (int *)FUN_0515b864(uVar15,lVar7);
            lVar13 = 0;
            if (0 < iVar4) {
              do {
                lVar1 = lVar13 + 1;
                piVar10 = (int *)FUN_0515b864(uVar14,lVar13);
                if ((((char)piVar10[5] != '\0') && (*piVar10 <= piVar9[1])) &&
                   (*piVar9 <= piVar10[1])) {
                  iVar11 = piVar10[4];
                  piVar9[4] = iVar11;
                  *(undefined1 *)(piVar10 + 5) = 0;
                  goto LAB_05161878;
                }
                lVar13 = lVar1;
              } while ((int)lVar1 < iVar4);
            }
            iVar11 = piVar9[4];
LAB_05161878:
            if (iVar11 < 0) {
              piVar9[4] = iVar3;
              iVar3 = iVar3 + 1;
            }
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < iVar5);
        }
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < iVar2);
    }
  }
  *(int *)(this + 0x18) = iVar3;
  return;
}


/* TriRepGenerator::SpanSet::IsRangeOpen(int, int, int) */

undefined8 __thiscall
TriRepGenerator::SpanSet::IsRangeOpen(SpanSet *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)FUN_0515b830(*(undefined8 *)this,(long)param_3);
  uVar6 = *puVar3;
  iVar2 = FUN_0515b850(uVar6,puVar3[1]);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 1;
      piVar4 = (int *)FUN_0515b864(uVar6,lVar5);
      if ((param_1 <= piVar4[1]) && (*piVar4 <= param_2)) {
        return 0;
      }
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  return 1;
}


/* TriRepGenerator::SpanSet::GetWinding(int, int, int, int, int, int) */

int TriRepGenerator::SpanSet::GetWinding
              (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return (param_4 - param_2) * (param_1 - param_5) + (param_3 - param_1) * (param_6 - param_2);
}


/* TriRepGenerator::SpanSet::~SpanSet() */

void __thiscall TriRepGenerator::SpanSet::~SpanSet(SpanSet *this)

{
  std::_Destroy<TriRepGenerator::SpanRow*>(*(SpanRow **)this,*(SpanRow **)(this + 8));
  std::_Vector_base<TriRepGenerator::SpanRow,std::allocator<TriRepGenerator::SpanRow>>::
  ~_Vector_base((_Vector_base<TriRepGenerator::SpanRow,std::allocator<TriRepGenerator::SpanRow>> *)
                this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::SpanSet::TriangulatePointGroups(std::vector<TriRepGenerator::PointGroup,
   std::allocator<TriRepGenerator::PointGroup> >&, std::vector<Sexy::MemoryImage::TriRep::Tri,
   std::allocator<Sexy::MemoryImage::TriRep::Tri> >&) */

void __thiscall
TriRepGenerator::SpanSet::TriangulatePointGroups(SpanSet *this,vector *param_1,vector *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *__base;
  Point **ppPVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  Point *pPVar11;
  Point *pPVar12;
  undefined8 uVar13;
  Point *pPVar14;
  Point *pPVar15;
  Point *pPVar16;
  long lVar17;
  long lVar18;
  Point *local_70;
  Point *local_68;
  long local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  Point *local_38;
  undefined8 local_30 [2];
  Point *local_20;
  int *local_18;
  Point *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar18 = 0;
  uVar2 = FUN_0515b83c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  uVar13 = *(undefined8 *)param_1;
  iVar3 = FUN_0515b8a8(uVar13,*(undefined8 *)(param_1 + 8));
  if (0 < iVar3) {
    do {
      lVar17 = 0;
      lVar5 = FUN_0515b878(uVar13,lVar18);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      local_60[0] = lVar5 + 0x18;
      local_60[1] = lVar5 + 0x40;
      do {
        pPVar16 = *(Point **)((long)local_60 + lVar17);
        pPVar14 = *(Point **)(pPVar16 + 0x10);
        if (pPVar16 != pPVar14) {
          do {
            while( true ) {
              local_20 = (Point *)0x0;
              local_18 = (int *)0x0;
              local_10 = (Point *)0x0;
              if (*(int *)(pPVar14 + 8) != 1) break;
              local_18 = *(int **)(pPVar14 + 0x10);
              local_20 = pPVar14;
              local_10 = *(Point **)(local_18 + 4);
LAB_05167db8:
              FUN_05167b60(param_2,&local_20,uVar2,uVar2);
              lVar10 = *(long *)(local_18 + 4);
              *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(local_18 + 6);
              *(long *)(*(long *)(local_18 + 6) + 0x10) = lVar10;
              *(int **)(local_18 + 4) = local_18;
              *(int **)(local_18 + 6) = local_18;
              local_18[2] = 4;
              *(int *)(pPVar14 + 8) = 0;
              pPVar14 = *(Point **)(pPVar14 + 0x10);
              if (pPVar16 == pPVar14) goto LAB_05167e00;
            }
            if (*(int *)(pPVar14 + 8) == 2) {
              local_18 = *(int **)(pPVar14 + 0x18);
              local_20 = *(Point **)(local_18 + 6);
              local_10 = pPVar14;
              if (local_20 != (Point *)0x0) goto LAB_05167db8;
            }
            pPVar14 = *(Point **)(pPVar14 + 0x10);
          } while (pPVar16 != pPVar14);
LAB_05167e00:
          for (local_38 = *(Point **)(pPVar16 + 0x10); pPVar16 != local_38;
              local_38 = *(Point **)(local_38 + 0x10)) {
            std::
            vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
            ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                         *)&local_50,&local_38);
          }
        }
        uVar13 = local_50;
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0x10);
      uVar6 = FUN_0515b81c(local_50,local_48);
      if (uVar6 < 3) {
        std::
        vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
        ::~vector((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                   *)&local_50);
      }
      else {
        lVar17 = 2;
        __base = (void *)FUN_0515b828(uVar13,0);
        qsort(__base,uVar6,8,
              TriangulatePointGroups(std::vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>>&,std::vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>&)
              ::Local::PointCompare);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
        uVar13 = local_50;
        iVar3 = FUN_0515b81c(local_50,local_48);
        ppPVar7 = (Point **)FUN_0515b828(uVar13,0);
        std::
        vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
        ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                     *)&local_38,ppPVar7);
        ppPVar7 = (Point **)FUN_0515b828(local_50,1);
        std::
        vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
        ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                     *)&local_38,ppPVar7);
        if (2 < iVar3) {
          do {
            puVar8 = (undefined8 *)FUN_0515b828(local_50,lVar17);
            local_70 = (Point *)*puVar8;
            plVar9 = (long *)std::
                             vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                             ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                                      *)&local_38);
            pPVar15 = (Point *)*plVar9;
            plVar9 = (long *)std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     *)&local_38);
            pPVar16 = local_38;
            pPVar14 = local_70;
            local_68 = (Point *)*plVar9;
            pPVar11 = *(Point **)(local_70 + 0x10);
            if (pPVar11 == pPVar15) {
              if ((local_68 != pPVar11) && (local_68 != *(Point **)(local_70 + 0x18))) {
LAB_05167f3c:
                iVar4 = FUN_0515b81c(local_38,local_30[0]);
                if (1 < iVar4) {
                  lVar10 = 1;
                  do {
                    puVar8 = (undefined8 *)FUN_0515b828(pPVar16,lVar10 + -1);
                    local_20 = (Point *)*puVar8;
                    lVar1 = lVar10 + 1;
                    puVar8 = (undefined8 *)FUN_0515b828(pPVar16,lVar10);
                    local_18 = (int *)*puVar8;
                    local_10 = pPVar14;
                    FUN_05167b60(param_2,&local_20,uVar2,uVar2);
                    lVar10 = lVar1;
                    pPVar16 = local_38;
                    pPVar14 = local_70;
                  } while ((int)lVar1 < iVar4);
                }
                std::
                vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                ::clear((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                         *)&local_38);
                std::
                vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                             *)&local_38,&local_68);
                std::
                vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                             *)&local_38,&local_70);
              }
            }
            else {
              pPVar12 = *(Point **)(local_70 + 0x18);
              if ((local_68 == pPVar11) || (local_68 == pPVar12)) {
                if (pPVar15 != pPVar12) {
                  while (uVar6 = FUN_0515b81c(local_38,local_30[0]), 1 < uVar6) {
                    lVar10 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     *)&local_38);
                    local_20 = *(Point **)(lVar10 + -8);
                    puVar8 = (undefined8 *)
                             std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                     *)&local_38);
                    local_18 = (int *)*puVar8;
                    local_10 = local_70;
                    if (lVar5 + 0x18 == *(long *)(local_70 + 0x20)) {
                      iVar4 = GetWinding(*(int *)local_20,*(int *)(local_20 + 4),*local_18,
                                         local_18[1],*(int *)local_70,*(int *)(local_70 + 4));
                      if (0 < iVar4) break;
                    }
                    else {
                      iVar4 = GetWinding(*(int *)local_20,*(int *)(local_20 + 4),*local_18,
                                         local_18[1],*(int *)local_70,*(int *)(local_70 + 4));
                      if (iVar4 < 0) break;
                    }
                    FUN_05167b60(param_2,&local_20,uVar2,uVar2);
                    FUN_0515b940(local_30);
                  }
                  std::
                  vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                  ::push_back((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                               *)&local_38,&local_70);
                }
              }
              else if (pPVar15 == pPVar12) goto LAB_05167f3c;
            }
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < iVar3);
        }
        std::
        vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
        ::~vector((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                   *)&local_38);
        std::
        vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
        ::~vector((vector<TriRepGenerator::PointGroup::Point*,std::allocator<TriRepGenerator::PointGroup::Point*>>
                   *)&local_50);
      }
      lVar18 = lVar18 + 1;
      uVar13 = *(undefined8 *)param_1;
      iVar3 = FUN_0515b8a8(uVar13,*(undefined8 *)(param_1 + 8));
    } while ((int)lVar18 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::SpanSet::InitFromCoverageGrid(TriRepGenerator::CoverageGrid*) */

void __thiscall TriRepGenerator::SpanSet::InitFromCoverageGrid(SpanSet *this,CoverageGrid *param_1)

{
  int iVar1;
  int iVar2;
  vector<TriRepGenerator::SpanRow::Span,std::allocator<TriRepGenerator::SpanRow::Span>> *this_00;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (CoverageGrid *)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    lVar6 = *(long *)param_1;
    iVar2 = *(int *)(param_1 + 8);
    std::vector<TriRepGenerator::SpanRow,std::allocator<TriRepGenerator::SpanRow>>::resize
              ((vector<TriRepGenerator::SpanRow,std::allocator<TriRepGenerator::SpanRow>> *)this,
               (long)iVar1);
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        this_00 = (vector<TriRepGenerator::SpanRow::Span,std::allocator<TriRepGenerator::SpanRow::Span>>
                   *)FUN_0515b830(*(undefined8 *)this,lVar7);
        if (-1 < iVar2) {
          uVar5 = 0xffffffff;
          uVar3 = 0;
          iVar4 = -1;
          do {
            while (((int)uVar3 < iVar2 && (*(char *)(lVar6 + uVar3) != '\0'))) {
              uVar5 = uVar3 & 0xffffffff;
              if (iVar4 == -1) {
                iVar4 = (int)uVar3;
              }
LAB_05168574:
              uVar3 = uVar3 + 1;
              if (iVar2 < (int)uVar3) goto LAB_051685d0;
            }
            if (iVar4 == -1) goto LAB_05168574;
            uVar3 = uVar3 + 1;
            SpanRow::Span::Span((Span *)&local_20);
            local_1c = (undefined4)uVar5;
            uVar5 = 0xffffffff;
            local_20 = iVar4;
            local_18 = (int)lVar7;
            local_14 = (int)lVar7;
            std::
            vector<TriRepGenerator::SpanRow::Span,std::allocator<TriRepGenerator::SpanRow::Span>>::
            push_back(this_00,(Span *)&local_20);
            iVar4 = -1;
          } while ((int)uVar3 <= iVar2);
        }
LAB_051685d0:
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + iVar2;
      } while ((int)lVar7 < iVar1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::SpanSet::GeneratePointGroups(std::vector<TriRepGenerator::PointGroup,
   std::allocator<TriRepGenerator::PointGroup> >&) */

void __thiscall TriRepGenerator::SpanSet::GeneratePointGroups(SpanSet *this,vector *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  vector<TriRepGenerator::PointGroup::BarGroup::Bar,std::allocator<TriRepGenerator::PointGroup::BarGroup::Bar>>
  *pvVar9;
  PointGroup *this_00;
  undefined4 *puVar10;
  long lVar11;
  int *piVar12;
  wchar_t wVar13;
  wchar_t wVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  SortedKern aSStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  std::
  vector<TriRepGenerator::PointGroup::BarGroup,std::allocator<TriRepGenerator::PointGroup::BarGroup>>
  ::resize((vector<TriRepGenerator::PointGroup::BarGroup,std::allocator<TriRepGenerator::PointGroup::BarGroup>>
            *)local_20,(long)*(int *)(this + 0x18));
  uVar17 = *(undefined8 *)this;
  iVar3 = FUN_0515b83c(uVar17,*(undefined8 *)(this + 8));
  if (0 < iVar3) {
    lVar20 = 0;
    while( true ) {
      puVar5 = (undefined8 *)FUN_0515b830(uVar17,lVar20);
      uVar17 = *puVar5;
      iVar4 = FUN_0515b850(uVar17,puVar5[1]);
      if (0 < iVar4) {
        lVar18 = 0;
        while( true ) {
          pwVar8 = (wchar_t *)FUN_0515b864(uVar17,lVar18);
          pvVar9 = (vector<TriRepGenerator::PointGroup::BarGroup::Bar,std::allocator<TriRepGenerator::PointGroup::BarGroup::Bar>>
                    *)FUN_0515b870(local_20[0],(long)pwVar8[4]);
          piVar19 = *(int **)(pvVar9 + 0x18);
          if (piVar19 == (int *)0x0) {
            wVar13 = *pwVar8;
            wVar14 = pwVar8[1];
          }
          else {
            pwVar6 = eastl::min_alt<int>(pwVar8,piVar19);
            pwVar7 = eastl::max_alt<int>(pwVar8 + 1,piVar19 + 1);
            wVar14 = *pwVar7;
            wVar13 = *pwVar6;
          }
          lVar18 = lVar18 + 1;
          SortedKern::SortedKern(aSStack_30,wVar13,wVar14,pwVar8[2]);
          std::
          vector<TriRepGenerator::PointGroup::BarGroup::Bar,std::allocator<TriRepGenerator::PointGroup::BarGroup::Bar>>
          ::push_back(pvVar9,(Bar *)aSStack_30);
          *(wchar_t **)(pvVar9 + 0x18) = pwVar8;
          if (iVar4 <= (int)lVar18) break;
          uVar17 = *puVar5;
        }
      }
      lVar20 = lVar20 + 1;
      if (iVar3 <= (int)lVar20) break;
      uVar17 = *(undefined8 *)this;
    }
  }
  lVar20 = 0;
  std::vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>>::resize
            ((vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>> *)
             param_1,(long)*(int *)(this + 0x18));
  if (0 < *(int *)(this + 0x18)) {
    do {
      while( true ) {
        pvVar9 = (vector<TriRepGenerator::PointGroup::BarGroup::Bar,std::allocator<TriRepGenerator::PointGroup::BarGroup::Bar>>
                  *)FUN_0515b870(local_20[0],lVar20);
        this_00 = (PointGroup *)FUN_0515b878(*(undefined8 *)param_1,lVar20);
        PointGroup::Init(this_00);
        pwVar8 = *(wchar_t **)(pvVar9 + 0x18);
        if (pwVar8 != (wchar_t *)0x0) {
          SortedKern::SortedKern(aSStack_30,*pwVar8,pwVar8[1],pwVar8[2] + L'\x01');
          std::
          vector<TriRepGenerator::PointGroup::BarGroup::Bar,std::allocator<TriRepGenerator::PointGroup::BarGroup::Bar>>
          ::push_back(pvVar9,(Bar *)aSStack_30);
        }
        uVar17 = *(undefined8 *)pvVar9;
        iVar3 = FUN_0515b888(uVar17,*(undefined8 *)(pvVar9 + 8));
        iVar4 = (int)lVar20;
        if (iVar3 == 0) break;
        lVar18 = 1;
        puVar10 = (undefined4 *)FUN_0515b89c(uVar17,0);
        PointGroup::AddLeftChainPoint(this_00,*puVar10,puVar10[2],0);
        lVar11 = FUN_0515b89c(*(undefined8 *)pvVar9,0);
        PointGroup::AddRightChainPoint
                  (this_00,*(int *)(lVar11 + 4) + 1,*(undefined4 *)(lVar11 + 8),0);
        if (1 < iVar3) {
          do {
            while( true ) {
              uVar17 = *(undefined8 *)pvVar9;
              piVar19 = (int *)FUN_0515b89c(uVar17,lVar18 + -1);
              piVar12 = (int *)FUN_0515b89c(uVar17,lVar18);
              iVar16 = *piVar19;
              iVar15 = *piVar12;
              if (iVar15 < iVar16) {
                cVar2 = IsRangeOpen(this,iVar15,iVar16 + -1,piVar19[2]);
                if (cVar2 == '\0') {
                  PointGroup::AddLeftChainPoint(this_00,iVar16,piVar12[2],1);
                  iVar15 = *piVar12;
                }
              }
              else if (iVar16 < iVar15) {
                iVar1 = piVar19[2];
                cVar2 = IsRangeOpen(this,iVar16,iVar15 + -1,iVar1);
                if (cVar2 == '\0') {
                  PointGroup::AddLeftChainPoint(this_00,iVar15,iVar1,2);
                  iVar15 = *piVar12;
                }
              }
              PointGroup::AddLeftChainPoint(this_00,iVar15,piVar12[2],0);
              iVar16 = piVar12[1];
              iVar15 = piVar19[1];
              if (iVar15 < iVar16) break;
              if (iVar16 < iVar15) {
                iVar1 = piVar19[2];
                iVar16 = iVar16 + 1;
                cVar2 = IsRangeOpen(this,iVar16,iVar15,iVar1);
                if (cVar2 != '\0') goto LAB_05168f34;
                PointGroup::AddRightChainPoint(this_00,iVar16,iVar1,2);
                iVar16 = piVar12[1];
              }
LAB_0516900c:
              lVar18 = lVar18 + 1;
              PointGroup::AddRightChainPoint(this_00,iVar16 + 1,piVar12[2],0);
              if (iVar3 <= (int)lVar18) goto LAB_05169030;
            }
            cVar2 = IsRangeOpen(this,iVar15 + 1,iVar16,piVar19[2]);
            if (cVar2 != '\0') goto LAB_0516900c;
            PointGroup::AddRightChainPoint(this_00,iVar15 + 1,piVar12[2],1);
            iVar16 = piVar12[1] + 1;
LAB_05168f34:
            lVar18 = lVar18 + 1;
            PointGroup::AddRightChainPoint(this_00,iVar16,piVar12[2],0);
          } while ((int)lVar18 < iVar3);
        }
LAB_05169030:
        PointGroup::RemoveRedundantPoints(this_00);
        lVar20 = lVar20 + 1;
        if (*(int *)(this + 0x18) <= iVar4 + 1) goto LAB_0516904c;
      }
      lVar20 = lVar20 + 1;
    } while (iVar4 + 1 < *(int *)(this + 0x18));
  }
LAB_0516904c:
  std::
  vector<TriRepGenerator::PointGroup::BarGroup,std::allocator<TriRepGenerator::PointGroup::BarGroup>>
  ::~vector((vector<TriRepGenerator::PointGroup::BarGroup,std::allocator<TriRepGenerator::PointGroup::BarGroup>>
             *)local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TriRepGenerator::SpanSet::ConvertToTris(std::vector<Sexy::MemoryImage::TriRep::Tri,
   std::allocator<Sexy::MemoryImage::TriRep::Tri> >&) */

void __thiscall TriRepGenerator::SpanSet::ConvertToTris(SpanSet *this,vector *param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GeneratePointGroups(this,(vector *)avStack_20);
  TriangulatePointGroups(this,(vector *)avStack_20,param_1);
  std::vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>>::~vector
            ((vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>> *)
             avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

