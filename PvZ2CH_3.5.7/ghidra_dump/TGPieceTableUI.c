// Class: TGPieceTableUI


/* TGPieceTableUI::SetMinChips(int) */

void __thiscall TGPieceTableUI::SetMinChips(TGPieceTableUI *this,int param_1)

{
  *(int *)(this + 0x134) = param_1;
  return;
}


/* TGPieceTableUI::HideAllButtonAndAnims() */

void __thiscall TGPieceTableUI::HideAllButtonAndAnims(TGPieceTableUI *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x208);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x208) + 0x188))(*(long **)(this + 0x208),1);
  }
  plVar1 = *(long **)(this + 0x210);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
    (**(code **)(**(long **)(this + 0x210) + 0x188))(*(long **)(this + 0x210),1);
  }
  return;
}


/* TGPieceTableUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void TGPieceTableUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TGPieceTableUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall TGPieceTableUI::ScrollTargetReached(TGPieceTableUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x128));
  return;
}


/* TGPieceTableUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void TGPieceTableUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TGPieceTableUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall TGPieceTableUI::ScrollTargetInterrupted(TGPieceTableUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x128));
  return;
}


/* TGPieceTableUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall TGPieceTableUI::DrawAll(TGPieceTableUI *this,ModalFlags *param_1,Graphics *param_2)

{
  if (this[0x130] == (TGPieceTableUI)0x0) {
    return;
  }
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


/* TGPieceTableUI::DeleteFromSelectBoxs(int) */

void __thiscall TGPieceTableUI::DeleteFromSelectBoxs(TGPieceTableUI *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x138);
  lVar4 = (long)param_1;
  puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,lVar4);
  piVar6 = (int *)*puVar2;
  if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
    *piVar6 = 0;
    if (param_1 < 4) {
      lVar5 = lVar4 + 1;
      do {
        lVar1 = lVar5 + 1;
        puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,lVar5);
        piVar3 = (int *)*puVar2;
        *piVar6 = *piVar3;
        lVar5 = lVar1;
        piVar6 = piVar3;
      } while (lVar1 != lVar4 + 2 + (ulong)(3 - param_1));
    }
    puVar2 = (undefined8 *)FUN_04bc48a8(uVar7,4);
    *(undefined4 *)*puVar2 = 0;
  }
  return;
}


/* TGPieceTableUI::NeedShowHighValueHint() */

byte TGPieceTableUI::NeedShowHighValueHint(void)

{
  byte bVar1;
  
  bVar1 = LocalProfileSaveData::CheckTransGenosisTips();
  return bVar1 ^ 1;
}


/* TGPieceTableUI::SetIsInTutorial(bool) */

void __thiscall TGPieceTableUI::SetIsInTutorial(TGPieceTableUI *this,bool param_1)

{
  this[0x131] = (TGPieceTableUI)param_1;
  if (!param_1) {
    return;
  }
  LawnApp::KillGameMaskUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::StartSelectTutorial() */

void __thiscall TGPieceTableUI::StartSelectTutorial(TGPieceTableUI *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x131] != (TGPieceTableUI)0x0) {
    plVar5 = *(long **)(this + 0x208);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,0);
    }
    plVar5 = *(long **)(this + 0x210);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,0);
    }
    plVar5 = *(long **)(this + 0x220);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,1);
    }
    lVar6 = *(long *)(this + 0x208);
    if (lVar6 != 0) {
      Sexy::Point::Point((Point *)&local_20,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
      for (lVar6 = *(long *)(*(long *)(this + 0x208) + 0x20); pLVar1 = gLawnApp, lVar6 != 0;
          lVar6 = *(long *)(lVar6 + 0x20)) {
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  (aUStack_10,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
        Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
      }
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,
                 (float)(int)((float)(*(int *)(this + 0x1c0) / 2) + (float)local_20),
                 (float)(int)((float)(*(int *)(this + 0x1c4) / 2) + (float)local_1c));
      uVar2 = FUN_04bc5564(100);
      uVar7 = *(undefined8 *)(this + 0x208);
      std::string::string((string *)aUStack_10,"[TRANS_GENOSIS_SELECT_TUTORIAL_3]");
      LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar2,uVar7,aUStack_10);
      std::string::~string((string *)aUStack_10);
      nop();
      lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar2 = FUN_04bc5564(0x8c);
      uVar3 = FUN_04bc5564(0x32);
      FUN_04bc4d80(0xc2b40000,lVar6 + 0xf8,lVar6 + 0x100,uVar2,uVar3);
      lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
      iVar4 = FUN_04bc5564(0x14a);
      uVar2 = FUN_04bc5564(0xbe);
      FUN_04bc4df0(lVar6 + 0x114,-iVar4,uVar2);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::StartSelectEndTutorial() */

void __thiscall TGPieceTableUI::StartSelectEndTutorial(TGPieceTableUI *this)

{
  LawnApp *pLVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  plVar5 = *(long **)(this + 0x210);
  local_8 = ___stack_chk_guard;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x188))(plVar5,0);
    lVar6 = *(long *)(this + 0x210);
    if (lVar6 != 0) {
      Sexy::Point::Point((Point *)&local_20,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
      for (lVar6 = *(long *)(*(long *)(this + 0x210) + 0x20); pLVar1 = gLawnApp, lVar6 != 0;
          lVar6 = *(long *)(lVar6 + 0x20)) {
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  (aUStack_10,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
        Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
      }
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,
                 (float)(int)((float)(*(int *)(this + 0x200) / 2) + (float)local_20),
                 (float)(int)((float)(*(int *)(this + 0x204) / 2) + (float)local_1c));
      uVar3 = *(undefined4 *)(this + 0x200);
      uVar7 = *(undefined8 *)(this + 0x210);
      std::string::string((string *)aUStack_10,"[TRANS_GENOSIS_SELECT_TUTORIAL_4]");
      LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar3,uVar7,aUStack_10);
      std::string::~string((string *)aUStack_10);
      nop();
      lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
      iVar2 = FUN_04bc5564(0x78);
      uVar3 = FUN_04bc5564(0xdc);
      FUN_04bc4d80(0x42b40000,lVar6 + 0xf8,lVar6 + 0x100,-iVar2,uVar3);
      lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
      iVar2 = FUN_04bc5564(0x154);
      iVar4 = FUN_04bc5564(0x46);
      FUN_04bc4df0(lVar6 + 0x114,-iVar2,-iVar4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::AddPieceSummary(int, int) */

void __thiscall TGPieceTableUI::AddPieceSummary(TGPieceTableUI *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x150));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04bc7e58:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    piVar3 = (int *)*puVar2;
    if ((piVar3 != (int *)0x0) && (piVar3[1] == param_1)) {
      *piVar3 = *piVar3 + param_2;
      goto LAB_04bc7e58;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::UpdateSummary() */

void __thiscall TGPieceTableUI::UpdateSummary(TGPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x150));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    puVar3 = (uint *)*puVar2;
    if (puVar3 != (uint *)0x0) {
      Sexy::StrFormat(L"%d",auStack_10,(ulong)*puVar3);
      FUN_054766c8(puVar3 + 0xe,auStack_10);
      FUN_05476c50(auStack_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::ClearSummary() */

void __thiscall TGPieceTableUI::ClearSummary(TGPieceTableUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  RateOfRares *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x150);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (RateOfRares *)*puVar2;
    if (this_01 != (RateOfRares *)0x0) {
      RateOfRares::~RateOfRares(this_01);
      AK::FreeHook(this_01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<RateOfRares*,std::allocator<RateOfRares*>>::clear
            ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::CanStartTrans() */

void __thiscall TGPieceTableUI::CanStartTrans(TGPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (0 < *(int *)*puVar2) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(int *)(this + 0x134) <= iVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::SetSelectBoxs(std::vector<int, std::allocator<int> >) */

void __thiscall TGPieceTableUI::SetSelectBoxs(TGPieceTableUI *this,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  uVar6 = 0;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    do {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      puVar7 = (undefined4 *)*puVar2;
      if (puVar7 != (undefined4 *)0x0) {
        uVar8 = *param_2;
        uVar3 = FUN_04bc4860(uVar8,param_2[1]);
        uVar5 = 0;
        if (uVar6 < uVar3) {
          puVar4 = (undefined4 *)FUN_04bc486c(uVar8,uVar6);
          uVar5 = *puVar4;
        }
        *puVar7 = uVar5;
      }
      uVar6 = uVar6 + 1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::GetInsertIndex() */

void __thiscall TGPieceTableUI::GetInsertIndex(TGPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (((int *)*puVar2 != (int *)0x0) && (*(int *)*puVar2 == 0)) break;
    iVar3 = iVar3 + 1;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* TGPieceTableUI::AddToSelectBoxs(int) */

char __thiscall TGPieceTableUI::AddToSelectBoxs(TGPieceTableUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x370))();
  if (cVar1 != '\0') {
    iVar2 = GetInsertIndex(this);
    puVar3 = (undefined8 *)FUN_04bc48a8(*(undefined8 *)(this + 0x138),(long)iVar2);
    *(int *)*puVar3 = param_1;
  }
  return cVar1;
}


/* TGPieceTableUI::CanSelectBoxAdd() */

bool __thiscall TGPieceTableUI::CanSelectBoxAdd(TGPieceTableUI *this)

{
  int iVar1;
  
  iVar1 = GetInsertIndex(this);
  return iVar1 < 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::ClearSelectBoxs() */

void __thiscall TGPieceTableUI::ClearSelectBoxs(TGPieceTableUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((void *)*puVar2 != (void *)0x0) {
      AK::FreeHook((void *)*puVar2);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<SelectBox*,std::allocator<SelectBox*>>::clear
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::ShowWasteHint() */

void __thiscall TGPieceTableUI::ShowWasteHint(TGPieceTableUI *this)

{
  HintUI *this_00;
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
  if (this_00 != (HintUI *)0x0) {
    HintUI::Default2Init(this_00);
    FUN_05478178(awStack_50,L"[TRANS_GENOSIS_PAY_ENSURE_TITLE]",auStack_58);
    HintUI::SetTitleString(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[TRANS_GENOSIS_WASTE]",auStack_58);
    HintUI::SetContentString(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[TRANS_GENOSIS_WASTE_LEFT]",auStack_58);
    HintUI::SetButtonString(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[TRANS_GENOSIS_WASTE_RIGHT]",auStack_58);
    HintUI::SetButton2String(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,TryReturnToTGMain);
    Sexy::Delegate0::Delegate0<TGPieceTableUI,void(TGPieceTableUI::*)()>(aDStack_38,awStack_50);
    HintUI::SetButtonPressedEvent(this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,RemoveWaste);
    Sexy::Delegate0::Delegate0<TGPieceTableUI,void(TGPieceTableUI::*)()>(aDStack_38,awStack_50);
    HintUI::SetButton2PressedEvent(this_00,aDStack_38);
    HintUI::ShowHintUI(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::ShowHighValueHint() */

void __thiscall TGPieceTableUI::ShowHighValueHint(TGPieceTableUI *this)

{
  HintUI *this_00;
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
  if (this_00 != (HintUI *)0x0) {
    HintUI::Default2Init(this_00);
    FUN_05478178(awStack_50,L"[HINT_DEFAULT_TITLE]",auStack_58);
    HintUI::SetTitleString(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[TRANS_GENOSIS_HINT]",auStack_58);
    HintUI::SetContentString(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x378);
    Sexy::Delegate0::Delegate0<TGPieceTableUI,void(TGPieceTableUI::*)()>(aDStack_38,awStack_50);
    HintUI::SetButton2PressedEvent(this_00,aDStack_38);
    HintUI::ShowHintUI(this_00);
    TodStringTranslate(L"[NOT_REMIND_TODAY]");
    FUN_04bc5470(aDStack_38);
    HintUI::SetCheckBoxTips(this_00,awStack_50,aDStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
    FUN_05476c50(awStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGPieceTableUI::TryReturnToTGMain() */

void __thiscall TGPieceTableUI::TryReturnToTGMain(TGPieceTableUI *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x388))();
  if ((cVar1 != '\0') && (cVar1 = NeedShowHighValueHint(), cVar1 != '\0')) {
    ShowHighValueHint(this);
    return;
  }
  (**(code **)(*(long *)this + 0x378))(this);
  return;
}


/* TGPieceTableUI::ButtonDepress(int) */

void __thiscall TGPieceTableUI::ButtonDepress(TGPieceTableUI *this,int param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0xc9) {
    (**(code **)(*(long *)this + 0x360))();
    return;
  }
  if (param_1 != 0xca) {
    uVar1 = param_1 - 1000;
    if ((uVar1 < 0x3e9) &&
       (puVar3 = (undefined8 *)FUN_04bc48a8(*(undefined8 *)(this + 0x138),(long)(int)uVar1),
       *(int *)*puVar3 != 0)) {
      (**(code **)(*(long *)this + 0x368))(this,uVar1);
      if (*(long *)(this + 0x220) != 0) {
        TGTableScrollPanel::OnRemoveFromBox((int)*(long *)(this + 0x220));
        return;
      }
    }
    return;
  }
  cVar2 = (**(code **)(*(long *)this + 0x380))();
  if (cVar2 != '\0') {
    ShowWasteHint(this);
    return;
  }
  TryReturnToTGMain(this);
  return;
}


/* non-virtual thunk to TGPieceTableUI::ButtonDepress(int) */

void __thiscall TGPieceTableUI::ButtonDepress(TGPieceTableUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::DrawSummary(Sexy::Graphics*) */

void __thiscall TGPieceTableUI::DrawSummary(TGPieceTableUI *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  int *piVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Insets local_28 [16];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_48);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x150));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    piVar6 = (int *)*puVar3;
    if (piVar6 != (int *)0x0) {
      switch(piVar6[1]) {
      case 0:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b150);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8ac70);
        break;
      case 1:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8acd0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8abd0);
        break;
      case 2:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b200);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8ad10);
        break;
      case 3:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8ad88);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b230);
        break;
      case 4:
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8b3b0);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b8adb0);
        break;
      default:
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (local_18);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_48,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (local_18);
      }
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
      if (bVar2) {
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)(piVar6 + 6));
        PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,pRVar4,local_18);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_48);
        if (bVar2) goto LAB_04bca510;
LAB_04bca368:
        cVar1 = FUN_04bc47f4(this[0x115]);
      }
      else {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_48);
        if (!bVar2) goto LAB_04bca368;
LAB_04bca510:
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_48);
        Sexy::Insets::Insets((Insets *)local_18,(Insets *)(piVar6 + 2));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar4,local_18);
        cVar1 = FUN_04bc47f4(this[0x115]);
      }
      if (cVar1 == '\0') {
        Sexy::Color::Color((Color *)local_28,1);
        if (*piVar6 == 0) {
          Sexy::Color::Color((Color *)local_18,0xb0,0xb0,0xb0);
        }
        uVar5 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
        Sexy::Insets::Insets((Insets *)local_18,local_28);
        WriteWordInRect(param_1,piVar6 + 0xe,piVar6 + 10,uVar5,local_18,4,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::DrawSelectBoxs(Sexy::Graphics*) */

void __thiscall TGPieceTableUI::DrawSelectBoxs(TGPieceTableUI *this,Graphics *param_1)

{
  Insets *pIVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  NameMapperBase *this_00;
  int *piVar7;
  undefined8 local_28;
  undefined8 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x138));
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar4) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    piVar7 = (int *)*puVar5;
    iVar2 = *piVar7;
    if (iVar2 < 1) {
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b400);
      Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 1));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
    }
    else {
      pIVar1 = (Insets *)(piVar7 + 1);
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
      Sexy::Insets::Insets(aIStack_18,pIVar1);
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
      cVar3 = FUN_04bc47f4(this[0x115]);
      if (cVar3 == '\0') {
        this_00 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        cVar3 = NameMapperBase::ContainsId(this_00,iVar2);
        if (cVar3 == '\0') {
          LawnApp::DrawPiecesInRect(gLawnApp,param_1,iVar2,(TRect *)pIVar1);
        }
        else {
          Sexy::Insets::Insets(aIStack_18,pIVar1);
          uVar6 = NewAvatar::GetNewAvatarPieceImage(iVar2);
          DrawAdaptiveImage(param_1,aIStack_18,uVar6);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::Draw(Sexy::Graphics*) */

void __thiscall TGPieceTableUI::Draw(TGPieceTableUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x130] != (TGPieceTableUI)0x0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b0d8);
    PopingWidget::GetMainRect();
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1a8));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aee8);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x198));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ab30);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1c8));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ac08);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1e8));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    DrawSelectBoxs(this,param_1);
    DrawSummary(this,param_1);
    cVar1 = FUN_04bc47f4(this[0x115]);
    if (cVar1 == '\0') {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x180,this + 0x188,uVar2,aIStack_40,5,1);
      FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,aIStack_50,(Insets *)(this + 0x1c8),uVar2,aIStack_40,5,1);
      FUN_05476c50(aIStack_50);
      nop();
    }
    else {
      if (*(long *)(this + 0x208) != 0) {
        PVZ2UIButton::GetImageNormal();
        uVar2 = local_38;
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1b8));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      }
      if (*(long *)(this + 0x210) != 0) {
        PVZ2UIButton::GetImageNormal();
        Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1f8));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::TGPieceTableUI() */

void __thiscall TGPieceTableUI::TGPieceTableUI(TGPieceTableUI *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x128));
  this[0x130] = (TGPieceTableUI)0x0;
  *(undefined ***)this = &PTR_GetClass_0697b3f0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697b790;
  *(undefined ***)(this + 0x128) = &PTR__TGPieceTableUI_0697b7d8;
  this[0x131] = (TGPieceTableUI)0x0;
  *(undefined4 *)(this + 0x134) = 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  FUN_05478178(this + 0x180,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  Sexy::Insets::Insets((Insets *)(this + 0x1c8));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  Sexy::Insets::Insets((Insets *)(this + 0x1e8));
  Sexy::Insets::Insets((Insets *)(this + 0x1f8));
  *(undefined8 *)(this + 0x208) = 0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGPieceTableUI::~TGPieceTableUI() */

void __thiscall TGPieceTableUI::~TGPieceTableUI(TGPieceTableUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0697b3f0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697b790;
  *(undefined ***)(this + 0x128) = &PTR__TGPieceTableUI_0697b7d8;
  ClearSelectBoxs(this);
  ClearSummary(this);
  FUN_05476c50(this + 0x180);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x168));
  std::vector<RateOfRares*,std::allocator<RateOfRares*>>::~vector
            ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x150));
  std::vector<SelectBox*,std::allocator<SelectBox*>>::~vector
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x138));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  return;
}


/* non-virtual thunk to TGPieceTableUI::~TGPieceTableUI() */

void __thiscall TGPieceTableUI::~TGPieceTableUI(TGPieceTableUI *this)

{
  ~TGPieceTableUI(this + -0x128);
  return;
}


/* TGPieceTableUI::~TGPieceTableUI() */

void __thiscall TGPieceTableUI::~TGPieceTableUI(TGPieceTableUI *this)

{
  ~TGPieceTableUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TGPieceTableUI::~TGPieceTableUI() */

void __thiscall TGPieceTableUI::~TGPieceTableUI(TGPieceTableUI *this)

{
  ~TGPieceTableUI(this + -0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::RemoveWaste() */

void __thiscall TGPieceTableUI::RemoveWaste(TGPieceTableUI *this)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  string *psVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x380))();
  if (cVar2 != '\0') {
    iVar13 = 0;
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      piVar12 = (int *)*puVar5;
      cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*piVar12);
      if (cVar2 != '\0') {
        LawnApp::GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_28,apStack_18);
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        if ((iVar13 < 2) && (3 < *(int *)(lVar7 + 0xd0))) {
          iVar13 = iVar13 + 1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          *piVar12 = 0;
        }
        std::string::~string(asStack_28);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  uVar11 = *(undefined8 *)(this + 0x138);
  uVar4 = FUN_04bc4a10(uVar11,*(undefined8 *)(this + 0x140));
  uVar9 = 0;
  if (uVar4 != 1) {
    do {
      uVar1 = uVar9 + 1;
      puVar5 = (undefined8 *)FUN_04bc48a8(uVar11,uVar9);
      piVar12 = (int *)*puVar5;
      if ((*piVar12 == 0) && (uVar10 = uVar1, uVar9 < uVar4)) {
        do {
          if (uVar10 == uVar4) goto LAB_04bd0320;
          puVar5 = (undefined8 *)FUN_04bc48a8(uVar11,uVar10);
          piVar8 = (int *)*puVar5;
          iVar13 = *piVar8;
          uVar10 = uVar10 + 1;
        } while (iVar13 == 0);
        *piVar12 = iVar13;
        *piVar8 = 0;
      }
LAB_04bd0320:
      uVar9 = uVar1;
    } while (uVar1 != uVar4 - 1);
  }
  TryReturnToTGMain(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::CheckWaste() */

void __thiscall TGPieceTableUI::CheckWaste(TGPieceTableUI *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  string *psVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x358))();
  bVar3 = false;
  if (cVar2 != '\0') {
    iVar8 = 0;
    iVar7 = 0;
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*(int *)*puVar4);
      if (cVar2 != '\0') {
        iVar8 = iVar8 + 1;
        LawnApp::GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_28,apStack_18);
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        iVar1 = *(int *)(lVar6 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (3 < iVar1) {
          iVar7 = iVar7 + 1;
        }
        std::string::~string(asStack_28);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    bVar3 = 2 < iVar8 && 1 < iVar7;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::CheckIsHighValue() */

void __thiscall TGPieceTableUI::CheckIsHighValue(TGPieceTableUI *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  string *psVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x358))();
  bVar3 = false;
  if (cVar2 != '\0') {
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x138));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
    while( true ) {
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
      if (!bVar3) break;
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38)
      ;
      cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*(int *)*puVar4);
      if (cVar2 != '\0') {
        LawnApp::GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_28,apStack_18);
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        iVar1 = *(int *)(lVar6 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (2 < iVar1) {
          std::string::~string(asStack_28);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
          bVar3 = true;
          break;
        }
        std::string::~string(asStack_28);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::ReturnToTGMain() */

void __thiscall TGPieceTableUI::ReturnToTGMain(TGPieceTableUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  TransGenosisUI *pTVar3;
  int local_44;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x138));
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x138));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20)
        , bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if ((int *)*puVar2 != (int *)0x0) {
      local_44 = *(int *)*puVar2;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,&local_44);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pTVar3 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(gLawnApp);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
  TransGenosisUI::SetSelectBoxs(pTVar3,(vector<int,std::allocator<int>> *)local_20,1);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  LawnApp::KillTGPieceTableUI(gLawnApp);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::GetSelectedBoxIDs() */

void TGPieceTableUI::GetSelectedBoxIDs(void)

{
  bool bVar1;
  long in_x0;
  undefined8 *puVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)in_x8,(int *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::AutoSelecting() */

void __thiscall TGPieceTableUI::AutoSelecting(TGPieceTableUI *this)

{
  bool bVar1;
  char cVar2;
  TransGenosisUI *this_00;
  int *piVar3;
  ulong uVar4;
  HintUI *this_01;
  ulong uVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x131] == (TGPieceTableUI)0x0) {
    this_00 = (TransGenosisUI *)LawnApp::GetTransGenosisUI(gLawnApp);
    if (this_00 != (TransGenosisUI *)0x0) {
      uVar5 = 5;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
      iVar6 = 0;
      while( true ) {
        std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)&local_50);
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_38);
        TransGenosisUI::CalcBestChipsForASWithRare(this_00,(map *)amStack_38,iVar6);
        local_60 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                             ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)amStack_38);
        local_58 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)amStack_38);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58);
        if (bVar1) {
          do {
            piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                       &local_60);
            cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*piVar3);
            if (cVar2 == '\0') {
              uVar4 = FUN_04bc4860(local_50,local_48);
              if (uVar5 <= uVar4) goto LAB_04bd4c98;
            }
            else {
              while( true ) {
                uVar4 = FUN_04bc4860(local_50,local_48);
                if (uVar5 <= uVar4) goto LAB_04bd4c98;
                if (piVar3[1] < 1) break;
                std::vector<int,std::allocator<int>>::push_back
                          ((vector<int,std::allocator<int>> *)&local_50,piVar3);
                piVar3[1] = piVar3[1] + -1;
              }
            }
            std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58);
          } while (bVar1);
        }
        uVar4 = FUN_04bc4860(local_50,local_48);
        if (uVar5 <= uVar4) break;
        iVar6 = iVar6 + 1;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   amStack_38);
        if (iVar6 == 5) goto LAB_04bd4ca0;
        uVar5 = 2;
        if (iVar6 != 4) {
          uVar5 = 5;
        }
      }
LAB_04bd4c98:
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38)
      ;
LAB_04bd4ca0:
      uVar4 = FUN_04bc4860(local_50,local_48);
      if (uVar4 < uVar5) {
        this_01 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
        if (this_01 != (HintUI *)0x0) {
          HintUI::Default1Init(this_01);
          FUN_05478178(amStack_38,L"[HINT_DEFAULT_TITLE]",(rbtree_iterator *)&local_58);
          HintUI::SetTitleString(this_01,(wstring *)amStack_38);
          FUN_05476c50(amStack_38);
          nop();
          FUN_05478178(amStack_38,L"[TRANS_GENOSIS_NOTENOUGH]",(rbtree_iterator *)&local_58);
          HintUI::SetContentString(this_01,(wstring *)amStack_38);
          FUN_05476c50(amStack_38);
          nop();
          HintUI::ShowHintUI(this_01);
        }
      }
      else {
        std::vector<int,std::allocator<int>>::vector
                  ((vector<int,std::allocator<int>> *)amStack_38,(vector *)&local_50);
        SetSelectBoxs(this,amStack_38);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)amStack_38)
        ;
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
    }
  }
  else {
    LawnApp::KillGameMaskUI(gLawnApp);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)amStack_38,&DAT_05755370,5,&local_50);
    SetSelectBoxs(this,(vector<int,std::allocator<int>> *)amStack_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)amStack_38);
    StartSelectEndTutorial(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::InitSummary() */

void __thiscall TGPieceTableUI::InitSummary(TGPieceTableUI *this)

{
  RateOfRares *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RateOfRares *pRVar17;
  int iVar18;
  RateOfRares *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar18 = 0;
  ClearSummary(this);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar11 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar4 = (int)((double)iVar10 * 1.7) / 2;
  iVar12 = FUN_04bc5564(0x3c);
  iVar2 = iVar4 + iVar12;
  iVar5 = *(int *)(this + 0x1f0);
  iVar13 = FUN_04bc5564(10);
  iVar6 = *(int *)(this + 0x1e8);
  iVar9 = iVar13 * -4;
  iVar7 = *(int *)(this + 0x1ec);
  iVar14 = FUN_04bc5564(0);
  iVar8 = *(int *)(this + 500);
  iVar15 = FUN_04bc5564(0x1e);
  iVar3 = iVar7 + (iVar8 - iVar15) / 2;
  while( true ) {
    iVar16 = iVar6 + (iVar5 + iVar2 * -5 + iVar9) / 2 + (iVar2 + iVar13) * iVar18;
    pRVar17 = ::operator_new(0x40);
    *(undefined4 *)pRVar17 = 0;
    *(undefined4 *)(pRVar17 + 4) = 0;
    *(undefined4 *)(pRVar17 + 8) = 0;
    *(undefined4 *)(pRVar17 + 0xc) = 0;
    *(undefined4 *)(pRVar17 + 0x10) = 0;
    *(undefined4 *)(pRVar17 + 0x14) = 0;
    iVar13 = iVar16 + iVar14;
    *(undefined4 *)(pRVar17 + 0x18) = 0;
    *(undefined4 *)(pRVar17 + 0x1c) = 0;
    *(undefined4 *)(pRVar17 + 0x20) = 0;
    *(undefined4 *)(pRVar17 + 0x24) = 0;
    *(undefined4 *)(pRVar17 + 0x28) = 0;
    *(undefined4 *)(pRVar17 + 0x2c) = 0;
    *(undefined4 *)(pRVar17 + 0x30) = 0;
    *(undefined4 *)(pRVar17 + 0x34) = 0;
    *(undefined8 *)(pRVar17 + 0x38) = 0;
    RateOfRares::RateOfRares(pRVar17);
    *(int *)(pRVar17 + 4) = iVar18;
    iVar18 = iVar18 + 1;
    local_20 = pRVar17;
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar13,iVar7 + (iVar8 - (int)((double)iVar11 * 1.7)) / 2,
               (int)((double)iVar10 * 1.7),(int)((double)iVar11 * 1.7));
    pRVar1 = local_20;
    *(undefined8 *)(pRVar17 + 8) = local_18;
    *(undefined8 *)(pRVar17 + 0x10) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar16,iVar3,iVar12,iVar15);
    pRVar17 = local_20;
    *(undefined8 *)(pRVar1 + 0x18) = local_18;
    *(undefined8 *)(pRVar1 + 0x20) = uStack_10;
    pRVar1 = local_20 + 0x28;
    iVar16 = FUN_04bc5564(3);
    Sexy::Insets::Insets((Insets *)&local_18,iVar13,iVar3,iVar2 - iVar16,iVar15);
    *(undefined8 *)pRVar1 = local_18;
    *(undefined8 *)(pRVar17 + 0x30) = uStack_10;
    *(undefined4 *)local_20 = 0;
    FUN_054772c4(local_20 + 0x38,&DAT_056f11a8);
    std::vector<RateOfRares*,std::allocator<RateOfRares*>>::push_back
              ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x150),&local_20);
    if (iVar18 == 5) break;
    iVar13 = FUN_04bc5564(10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::InitView() */

void __thiscall TGPieceTableUI::InitView(TGPieceTableUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  long *plVar16;
  code *pcVar17;
  PVZ2UIButton *pPVar18;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (TGPieceTableUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar3 = FUN_04bc5564(0x2c6);
  iVar4 = FUN_04bc5564(0x208);
  iVar1 = *(int *)(this + 0x50) - iVar3 >> 1;
  iVar8 = *(int *)(this + 0x54) - iVar4 >> 1;
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar8,iVar3,iVar4);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar5 = FUN_04bc5564(0x46);
  iVar4 = iVar8 + iVar5;
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar8,iVar3,iVar5);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar8 = FUN_04bc5564(6);
  iVar8 = iVar6 + iVar8 * 2;
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aad0);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar12 = FUN_04bc5564(6);
  iVar2 = (((iVar3 - iVar8) - iVar10) - iVar12) / 2;
  iVar5 = iVar1 + iVar2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar4,iVar8,iVar9);
  *(undefined8 *)(this + 0x198) = local_40;
  *(undefined8 *)(this + 0x1a0) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar12 + iVar5,iVar12 + iVar4,iVar6,iVar7);
  *(undefined8 *)(this + 0x1a8) = local_40;
  *(undefined8 *)(this + 0x1b0) = uStack_38;
  iVar6 = FUN_04bc5564(6);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + iVar8 + iVar6,iVar12 + iVar4 + (iVar7 - iVar11) / 2,iVar10,
             iVar11);
  pPVar18 = *(PVZ2UIButton **)(this + 0x208);
  *(undefined8 *)(this + 0x1b8) = local_40;
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  if (pPVar18 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar18,0xc9,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x208) = pPVar18;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar18 = *(PVZ2UIButton **)(this + 0x208);
    if (pPVar18 != (PVZ2UIButton *)0x0) goto LAB_04bd6774;
  }
  else {
LAB_04bd6774:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8af10,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ab80,3);
    PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x208) + 0x1a0))(*(long **)(this + 0x208),this + 0x1b8);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  }
  iVar6 = iVar3 + iVar2 * -2;
  iVar8 = FUN_04bc5564(10);
  iVar8 = iVar4 + iVar9 + iVar8;
  iVar7 = FUN_04bc5564(0xf0);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar8,iVar6,iVar7);
  *(undefined8 *)(this + 0x1c8) = local_40;
  *(undefined8 *)(this + 0x1d0) = uStack_38;
  iVar4 = FUN_04bc5564(5);
  iVar9 = FUN_04bc5564(10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar4,iVar8 + iVar4,iVar6 - iVar9,iVar7 - iVar9);
  *(undefined8 *)(this + 0x1d8) = local_40;
  *(undefined8 *)(this + 0x1e0) = uStack_38;
  iVar6 = FUN_04bc5564(5);
  iVar4 = FUN_04bc5564(10);
  iVar4 = iVar8 + iVar7 + iVar4;
  iVar8 = FUN_04bc5564(0x1c7);
  iVar7 = FUN_04bc5564(0x46);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 - iVar6,iVar4,iVar8,iVar7);
  *(undefined8 *)(this + 0x1e8) = local_40;
  *(undefined8 *)(this + 0x1f0) = uStack_38;
  iVar8 = FUN_04bc5564(0xaa);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar6 = FUN_04bc5564(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(((iVar1 + iVar3) - iVar8) - iVar2) + iVar6,iVar4,iVar8,iVar5);
  plVar16 = *(long **)(this + 0x210);
  *(undefined8 *)(this + 0x1f8) = local_40;
  *(undefined8 *)(this + 0x200) = uStack_38;
  if (plVar16 == (long *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar18 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar18,0xca,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x210) = pPVar18;
    FUN_05476c50(aPStack_78);
    nop();
    plVar16 = *(long **)(this + 0x210);
    if (plVar16 == (long *)0x0) goto LAB_04bd69c8;
  }
  pcVar17 = *(code **)(*plVar16 + 800);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar17)(plVar16,uVar15);
  pPVar18 = *(PVZ2UIButton **)(this + 0x210);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar18,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x210) + 0x1a0))(*(long **)(this + 0x210),this + 0x1f8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
LAB_04bd69c8:
  TodStringTranslate(L"[TRANS_GENOSIS_PIECES_TABLE_TITLE]");
  FUN_054766c8(this + 0x180,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x350))(this);
  InitSummary(this);
  (**(code **)(*(long *)this + 0x318))(this);
  this[0x130] = (TGPieceTableUI)0x1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::RecoverAllButtonAndAnims() */

void __thiscall TGPieceTableUI::RecoverAllButtonAndAnims(TGPieceTableUI *this)

{
  long *plVar1;
  PVZ2UIScrollingWidget *this_00;
  CrazyNPCManager *pCVar2;
  TGTableScrollPanel *this_01;
  long lVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  plVar1 = *(long **)(this + 0x208);
  local_8 = ___stack_chk_guard;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x210);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  if (*(long *)(this + 0x218) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x218));
    *(undefined8 *)(this + 0x218) = 0;
  }
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x128));
  lVar3 = *(long *)this_00;
  *(PVZ2UIScrollingWidget **)(this + 0x218) = this_00;
  (**(code **)(lVar3 + 0x1a0))(this_00,(TRect *)(this + 0x1d8));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x218),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  if (*(long *)(this + 0x220) == 0) {
    this_01 = ::operator_new(0x110);
    TGTableScrollPanel::TGTableScrollPanel(this_01,(TRect *)(this + 0x1d8),(bool)this[0x131]);
    lVar3 = *(long *)this_01;
    *(TGTableScrollPanel **)(this + 0x220) = this_01;
    (**(code **)(lVar3 + 0x158))(this_01,0);
    (**(code **)(**(long **)(this + 0x218) + 0x60))
              (*(long **)(this + 0x218),*(undefined8 *)(this + 0x220));
  }
  if (this[0x131] == (TGPieceTableUI)0x0) {
    if (*(long **)(this + 0x208) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x208) + 0x188))();
    }
    plVar1 = *(long **)(this + 0x210);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1,0);
    }
    plVar1 = *(long **)(this + 0x220);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
    }
  }
  else {
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"TRANS_GENOSIS_SELECT_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,StartSelectTutorial);
    Sexy::Delegate0::Delegate0<TGPieceTableUI,void(TGPieceTableUI::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::InitSelectBoxs() */

void __thiscall TGPieceTableUI::InitSelectBoxs(TGPieceTableUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LawnApp *this_00;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  SelectBox *this_03;
  PVZ2UIButton *this_04;
  int iVar10;
  undefined1 auStack_50 [8];
  SelectBox *local_48;
  PVZ2UIButton *local_40;
  vector<int,std::allocator<int>> avStack_38 [24];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar10 = 0;
  ClearSelectBoxs(this);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar1 = *(int *)(this + 0x1a4);
  iVar2 = *(int *)(this + 0x1a0);
  iVar3 = *(int *)(this + 0x19c);
  iVar9 = FUN_04bc5564(0x28);
  iVar5 = iVar9 * -4;
  iVar4 = *(int *)(this + 0x198);
  while( true ) {
    this_03 = ::operator_new(0x24);
    *(undefined4 *)this_03 = 0;
    *(undefined4 *)(this_03 + 4) = 0;
    *(undefined4 *)(this_03 + 8) = 0;
    *(undefined4 *)(this_03 + 0xc) = 0;
    *(undefined4 *)(this_03 + 0x10) = 0;
    *(undefined4 *)(this_03 + 0x14) = 0;
    *(undefined4 *)(this_03 + 0x18) = 0;
    *(undefined4 *)(this_03 + 0x1c) = 0;
    *(undefined4 *)(this_03 + 0x20) = 0;
    SelectBox::SelectBox(this_03);
    *(undefined4 *)this_03 = 0;
    local_48 = this_03;
    Sexy::Insets::Insets
              ((Insets *)&local_20,
               iVar4 + (iVar2 + iVar7 * -5 + iVar5) / 2 + (iVar7 + iVar9) * iVar10,
               iVar3 + (iVar1 - iVar8) / 2,iVar7,iVar8);
    *(undefined8 *)(this_03 + 4) = local_20;
    *(undefined8 *)(this_03 + 0xc) = uStack_18;
    FUN_05478178(avStack_38,&DAT_056f11a8,auStack_50);
    Sexy::Color::Color((Color *)&local_20,1);
    this_04 = ::operator_new(0x300);
    iVar9 = iVar10 + 1000;
    iVar10 = iVar10 + 1;
    PVZ2UIButton::PVZ2UIButton
              (this_04,iVar9,(ButtonListener *)(this + 0x120),(wstring *)avStack_38,
               (Color *)&local_20);
    local_40 = this_04;
    FUN_05476c50(avStack_38);
    nop();
    (**(code **)(*(long *)local_40 + 0x1a0))(local_40,local_48 + 4);
    (**(code **)(*(long *)this + 0x60))(this,local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x168),&local_40);
    std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back
              ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x138),&local_48);
    this_00 = gLawnApp;
    if (iVar10 == 5) break;
    iVar9 = FUN_04bc5564(0x28);
  }
  cVar6 = LawnApp::IsTransGenosisUIValid(gLawnApp);
  if (cVar6 != '\0') {
    LawnApp::GetTransGenosisUI(this_00);
    TransGenosisUI::GetSelectedBoxIDs();
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_20,(vector *)avStack_38);
    SetSelectBoxs(this,(Insets *)&local_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGPieceTableUI::Update() */

void __thiscall TGPieceTableUI::Update(TGPieceTableUI *this)

{
  char cVar1;
  wchar_t *pwVar2;
  long lVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x130] != (TGPieceTableUI)0x0) {
    PopingWidget::Update((PopingWidget *)this);
    UpdateSummary(this);
    if (*(long *)(this + 0x210) != 0) {
      cVar1 = (**(code **)(*(long *)this + 0x358))(this);
      lVar3 = *(long *)(this + 0x210);
      if (cVar1 == '\0') {
        pwVar2 = L"[TRANS_GENOSIS_RET_BTN]";
      }
      else {
        pwVar2 = L"[TRANS_GENOSIS_RET_CHOOSED_BTN]";
      }
      TodStringTranslate(pwVar2);
      FUN_054766c8(lVar3 + 0xd8,auStack_10);
      FUN_05476c50(auStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

