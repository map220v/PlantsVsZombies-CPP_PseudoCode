// Class: UniverseMapScrollSnapper


/* UniverseMapScrollSnapper::SetSnapHandler(SnapHandler*) */

void __thiscall
UniverseMapScrollSnapper::SetSnapHandler(UniverseMapScrollSnapper *this,SnapHandler *param_1)

{
  *(SnapHandler **)(this + 0x30) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMapScrollSnapper::getWorldButtonCenterPoint(UniverseWorldButton*, Sexy::ScrollWidget*) */

void UniverseMapScrollSnapper::getWorldButtonCenterPoint
               (UniverseWorldButton *param_1,ScrollWidget *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float local_10;
  
  lVar3 = ___stack_chk_guard;
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(param_2 + 0x48);
  Sexy::ScrollWidget::GetScrollOffset();
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)((float)(iVar2 + iVar1 / 2) + local_10));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMapScrollSnapper::SnapToIndex(int, Sexy::ScrollWidget*, bool) */

void __thiscall
UniverseMapScrollSnapper::SnapToIndex
          (UniverseMapScrollSnapper *this,int param_1,ScrollWidget *param_2,bool param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float local_14;
  Point aPStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x28) = param_1;
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 8);
    uVar2 = FUN_044d55f4(uVar7,*(undefined8 *)(this + 0x10));
    if (uVar2 <= uVar6) break;
    plVar3 = (long *)FUN_044d5600(uVar7,uVar6);
    FUN_044d55c0(*plVar3 + 0x212,1);
    uVar6 = uVar6 + 1;
  }
  plVar3 = (long *)FUN_044d5600(uVar7,(long)*(int *)(this + 0x28));
  lVar5 = *plVar3;
  *(long *)(this + 0x20) = lVar5;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x48) + *(int *)(lVar5 + 0x50) / 2;
  }
  iVar1 = *(int *)(param_2 + 0x50);
  Sexy::ScrollWidget::GetScrollMin();
  Sexy::Point::Point(aPStack_10,iVar4 - iVar1 / 2,(int)local_14);
  Sexy::ScrollWidget::ScrollToPoint(param_2,aPStack_10,param_3);
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(this + 0x20));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMapScrollSnapper::DoSnap(Sexy::ScrollWidget*) */

void __thiscall
UniverseMapScrollSnapper::DoSnap(UniverseMapScrollSnapper *this,ScrollWidget *param_1)

{
  (**(code **)(*(long *)this + 0x18))();
  SnapToIndex(this,*(int *)(this + 0x28),param_1,true);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044d8b44 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* UniverseMapScrollSnapper::UpdateVisualStates(Sexy::ScrollWidget*) */

void __thiscall
UniverseMapScrollSnapper::UpdateVisualStates(UniverseMapScrollSnapper *this,ScrollWidget *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  ulong uVar9;
  ScrollWidget *pSVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float local_14 [3];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  pfVar5 = local_14 + 2;
  uVar12 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 8);
    uVar9 = FUN_044d55f4(uVar11,*(undefined8 *)(this + 0x10));
    if (uVar9 <= uVar12) break;
    puVar7 = (undefined8 *)FUN_044d5600(uVar11,uVar12);
    pSVar10 = (ScrollWidget *)*puVar7;
    iVar6 = getWorldButtonCenterPoint((UniverseWorldButton *)this,pSVar10);
    uVar2 = iVar6 - iVar1 / 2;
    local_14[2] = 0.0;
    uVar3 = (int)uVar2 >> 0x1f;
    local_14[0] = 0.4;
    fVar13 = (float)(int)((uVar2 ^ uVar3) - uVar3);
    local_14[1] = 3.57331e-43;
    iVar6 = CurveLerp<int>(0,(float)(int)((float)*(int *)(param_1 + 0x50) * 0.245),fVar13,
                           local_14 + 1,pfVar5,3);
    auVar4 = FUN_044d55c8(pSVar10 + 0x214,iVar6);
    local_14[1] = 0.0;
    local_14[2] = 0.6;
    local_14[2] = CurveLerp<float>(auVar4,0x3f800000,
                                   fVar13 / ((float)*(int *)(gLawnApp + 0x724) * 0.3),local_14 + 1,
                                   pfVar5,2);
    local_14[2] = 1.0 - local_14[2];
    pfVar8 = eastl::max_alt<float>(local_14,pfVar5);
    FUN_044d55d0(*pfVar8,pSVar10 + 0x218);
    FUN_044d55c0(pSVar10 + 0x212,iVar6 == 0);
    uVar12 = uVar12 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMapScrollSnapper::UniverseMapScrollSnapper() */

void __thiscall UniverseMapScrollSnapper::UniverseMapScrollSnapper(UniverseMapScrollSnapper *this)

{
  Sexy::ScrollSnapper::ScrollSnapper((ScrollSnapper *)this);
  *(undefined ***)this = &PTR__UniverseMapScrollSnapper_06854eb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* UniverseMapScrollSnapper::SelectSnapTarget(Sexy::ScrollWidget*) */

void __thiscall
UniverseMapScrollSnapper::SelectSnapTarget(UniverseMapScrollSnapper *this,ScrollWidget *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ScrollWidget *pSVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x50);
  iVar3 = iVar9 / 2;
  puVar4 = (undefined8 *)
           std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::front
                     ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *
                      )(this + 8));
  iVar2 = getWorldButtonCenterPoint((UniverseWorldButton *)this,(ScrollWidget *)*puVar4);
  if (iVar3 - iVar2 < 0) {
    *(undefined4 *)(this + 0x28) = 0;
    return;
  }
  puVar4 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  iVar2 = getWorldButtonCenterPoint((UniverseWorldButton *)this,(ScrollWidget *)*puVar4);
  if (iVar3 - iVar2 < 1) {
    uVar6 = 0;
    while( true ) {
      uVar7 = *(undefined8 *)(this + 8);
      uVar5 = FUN_044d55f4(uVar7,*(undefined8 *)(this + 0x10));
      if (uVar5 <= uVar6) break;
      puVar4 = (undefined8 *)FUN_044d5600(uVar7,uVar6);
      pSVar8 = (ScrollWidget *)*puVar4;
      iVar2 = getWorldButtonCenterPoint((UniverseWorldButton *)this,pSVar8);
      uVar1 = iVar2 - iVar3 >> 0x1f;
      iVar2 = (iVar2 - iVar3 ^ uVar1) - uVar1;
      if (*(ScrollWidget **)(this + 0x20) == pSVar8) {
        if ((float)iVar2 < (float)*(int *)(*(ScrollWidget **)(this + 0x20) + 0x50) * 0.35)
        goto LAB_044dd598;
        uVar6 = uVar6 + 1;
      }
      else {
        if (iVar2 < iVar9) {
LAB_044dd598:
          *(int *)(this + 0x28) = (int)uVar6;
          iVar9 = iVar2;
        }
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    iVar3 = FUN_044d55f4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    *(int *)(this + 0x28) = iVar3 + -1;
  }
  return;
}


/* UniverseMapScrollSnapper::~UniverseMapScrollSnapper() */

void __thiscall UniverseMapScrollSnapper::~UniverseMapScrollSnapper(UniverseMapScrollSnapper *this)

{
  *(undefined ***)this = &PTR__UniverseMapScrollSnapper_06854eb0;
  std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::~vector
            ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)(this + 8));
  return;
}


/* UniverseMapScrollSnapper::~UniverseMapScrollSnapper() */

void __thiscall UniverseMapScrollSnapper::~UniverseMapScrollSnapper(UniverseMapScrollSnapper *this)

{
  ~UniverseMapScrollSnapper(this);
  AK::FreeHook(this);
  return;
}


/* UniverseMapScrollSnapper::SetWorldButtons(std::vector<UniverseWorldButton*,
   std::allocator<UniverseWorldButton*> >) */

void __thiscall
UniverseMapScrollSnapper::SetWorldButtons(UniverseMapScrollSnapper *this,vector *param_2)

{
  std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::operator=
            ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)(this + 8),param_2
            );
  return;
}

