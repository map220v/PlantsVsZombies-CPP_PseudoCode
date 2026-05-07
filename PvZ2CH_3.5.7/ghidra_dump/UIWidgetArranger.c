// Class: UIWidgetArranger


/* UIWidgetArranger::UIWidgetArranger(int) */

void __thiscall UIWidgetArranger::UIWidgetArranger(UIWidgetArranger *this,int param_1)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* UIWidgetArranger::AddBySheetName(std::string const&) */

void __thiscall UIWidgetArranger::AddBySheetName(UIWidgetArranger *this,string *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(int *)(this + 4) < *(int *)this) &&
     (lVar2 = UIWidget::GetWidgetBySheetName(param_1), lVar2 != 0)) {
    iVar1 = *(int *)(this + 4);
    *(long *)(this + (long)iVar1 * 8 + 8) = lVar2;
    *(int *)(this + 4) = iVar1 + 1;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidgetArranger::Arrange(UIWidgetArranger::Layout, int, int, int, int, int, int) */

void UIWidgetArranger::Arrange
               (long param_1,int param_2,int param_3,int param_4,undefined8 param_5,int param_6,
               int param_7)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  long *plVar8;
  
  iVar6 = *(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  if (iVar6 < 1) {
    fVar10 = 1.0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    plVar7 = (long *)(param_1 + 8);
    do {
      plVar8 = plVar7 + 1;
      iVar2 = FUN_044cc014(*(undefined4 *)(*plVar7 + 0x38));
      iVar5 = iVar5 + iVar2;
      plVar7 = plVar8;
    } while (plVar8 != (long *)(param_1 + ((ulong)(iVar6 - 1) + 2) * 8));
    fVar10 = (float)(iVar6 + 1);
  }
  iVar5 = iVar5 + param_6 * 2;
  param_7 = param_7 - iVar5;
  if (param_7 < 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)param_7 / fVar10;
  }
  fVar11 = (float)param_6 + (float)param_3 + fVar9;
  if (0 < iVar6) {
    if (param_2 == 0) {
      iVar6 = 0;
      do {
        lVar1 = param_1 + (long)iVar6 * 8;
        iVar6 = iVar6 + 1;
        UIWidget::ClearPositionOffsetOverride(*(UIWidget **)(lVar1 + 8));
        lVar4 = UIWidget::GetPositionOffset(*(UIWidget **)(lVar1 + 8));
        uVar12 = *(undefined4 *)(lVar4 + 4);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar11,(float)param_4);
        local_c = uVar12;
        UIWidget::SetPositionOffset(local_10,uVar12,*(undefined8 *)(lVar1 + 8));
        iVar2 = FUN_044cc014(*(undefined4 *)(*(long *)(lVar1 + 8) + 0x38));
        fVar11 = fVar11 + (float)iVar2 + fVar9;
      } while (iVar6 < *(int *)(param_1 + 4));
    }
    else {
      iVar6 = 0;
      do {
        lVar1 = param_1 + (long)iVar6 * 8;
        iVar6 = iVar6 + 1;
        UIWidget::ClearPositionOffsetOverride(*(UIWidget **)(lVar1 + 8));
        puVar3 = (undefined4 *)UIWidget::GetPositionOffset(*(UIWidget **)(lVar1 + 8));
        uVar12 = *puVar3;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar11,(float)param_4);
        local_10 = uVar12;
        UIWidget::SetPositionOffset(uVar12,local_c,*(undefined8 *)(lVar1 + 8));
        iVar2 = FUN_044cc014(*(undefined4 *)(*(long *)(lVar1 + 8) + 0x38));
        fVar11 = fVar11 + (float)iVar2 + fVar9;
      } while (iVar6 < *(int *)(param_1 + 4));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)((float)iVar5 + fVar10 * fVar9));
}


/* UIWidgetArranger::GetWidgetByID(int) */

undefined8 __thiscall UIWidgetArranger::GetWidgetByID(UIWidgetArranger *this,int param_1)

{
  return *(undefined8 *)(this + (long)param_1 * 8 + 8);
}

