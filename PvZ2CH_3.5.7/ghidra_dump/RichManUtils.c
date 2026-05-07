// Class: RichManUtils


/* RichManUtils::GetInitialValue(Sexy::TRect<int>&, AdaptorBoardConfig const&, int, int) */

void RichManUtils::GetInitialValue
               (TRect *param_1,AdaptorBoardConfig *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_038dbc04(*(undefined4 *)(param_2 + 8));
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)param_2;
  iVar5 = FUN_038dbc04(*(undefined4 *)(param_2 + 0xc));
  iVar6 = FUN_038dbc04(*(undefined4 *)(param_2 + 0x10));
  *(int *)param_1 = iVar5;
  *(int *)(param_1 + 4) = iVar6;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (param_4 + iVar6 * -2 + (1 - iVar2) * iVar4) / iVar2;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (param_3 + iVar5 * -2 + (1 - iVar1) * iVar4) / iVar1;
  }
  *(int *)(param_1 + 8) = iVar2;
  return;
}


/* RichManUtils::GetTargetPosition(Sexy::Point const&, Sexy::TRect<int> const&, int, int&, int&,
   bool) */

void RichManUtils::GetTargetPosition
               (Point *param_1,TRect *param_2,int param_3,int *param_4,int *param_5,bool param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)param_1;
  iVar4 = *(int *)(param_2 + 0xc);
  iVar7 = FUN_038dbc04(param_3);
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_2 + 4);
  *param_4 = iVar1 + iVar3 * iVar2 + iVar3 * iVar7;
  *param_5 = iVar6 + iVar5 * iVar4 + iVar7 * iVar5;
  if (param_6) {
    *param_4 = *param_4 + iVar2 / 2;
    *param_5 = *param_5 + iVar4 / 2;
  }
  return;
}


/* RichManUtils::GetTargetLocation(int, int, int) */

Point * __thiscall
RichManUtils::GetTargetLocation(RichManUtils *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Point *in_x8;
  
  iVar1 = param_1 + -1;
  iVar4 = (int)this;
  if (iVar4 <= iVar1) {
    Sexy::Point::Point(in_x8,iVar1 - iVar4,param_2 + -1);
    return in_x8;
  }
  iVar2 = iVar1 + param_2 + -1;
  if (iVar2 < iVar4) {
    iVar3 = iVar2 + param_1 + -1;
    if ((iVar4 <= iVar3) && (iVar2 < iVar4)) {
      Sexy::Point::Point(in_x8,iVar4 - iVar2,0);
      return in_x8;
    }
    Sexy::Point::Point(in_x8,iVar1,iVar4 - iVar3);
    return in_x8;
  }
  Sexy::Point::Point(in_x8,0,param_2 + -1 + (iVar1 - iVar4));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RichManUtils::GetTargetEventBgType(Sexy::Point const&, int, int) */

void RichManUtils::GetTargetEventBgType(Point *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = param_2 + -1;
  Sexy::Point::Point(aPStack_28,0,0);
  Sexy::Point::Point(aPStack_20,iVar1,0);
  Sexy::Point::Point(aPStack_18,0,param_3 + -1);
  Sexy::Point::Point(aPStack_10,iVar1,param_3 + -1);
  cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)aPStack_28);
  uVar3 = 0;
  if (cVar2 == '\0') {
    cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)aPStack_20);
    uVar3 = 1;
    if (cVar2 == '\0') {
      cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)aPStack_18);
      uVar3 = 2;
      if (cVar2 == '\0') {
        cVar2 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)aPStack_10);
        uVar3 = 3;
        if ((cVar2 == '\0') && ((iVar1 == *(int *)param_1 || (uVar3 = 5, *(int *)param_1 == 0)))) {
          uVar3 = 4;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

