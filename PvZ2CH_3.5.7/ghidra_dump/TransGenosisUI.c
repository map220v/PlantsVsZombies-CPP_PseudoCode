// Class: TransGenosisUI


/* TransGenosisUI::HideAllButtonAndAnims() */

void TransGenosisUI::HideAllButtonAndAnims(void)

{
  char cVar1;
  long in_x0;
  long *plVar2;
  code *in_x2;
  
  plVar2 = *(long **)(in_x0 + 0x490);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x490) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x490),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4a0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4a0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4a0),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4a8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4a8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4a8),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4b8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4b8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4b8),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4c0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4c0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4c0),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4e0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4e0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4e0),1);
  }
  plVar2 = *(long **)(in_x0 + 0x4d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4d8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4d8),1);
  }
  plVar2 = *(long **)(in_x0 + 0x478);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x478) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x478),1);
  }
  plVar2 = *(long **)(in_x0 + 0x480);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x480) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x480),1);
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(in_x0 + 0x448));
  if (cVar1 == '\0') {
    return;
  }
  EA::Thread::MutexParameters::MutexParameters
            ((MutexParameters *)(in_x0 + 0x448),false,(char *)in_x2);
  return;
}


/* TransGenosisUI::ShowCoinStore() */

void TransGenosisUI::ShowCoinStore(void)

{
  LawnApp::ShowCoinStore(gLawnApp,0);
  return;
}


/* TransGenosisUI::ShowGemStore() */

void TransGenosisUI::ShowGemStore(void)

{
  LawnApp::ShowCoinStore(gLawnApp,2);
  return;
}


/* TransGenosisUI::GetTGWidget() */

void TransGenosisUI::GetTGWidget(void)

{
  LawnApp::GetTransGenosisUI(gLawnApp);
  return;
}


/* TransGenosisUI::GetCurrentTGType() */

undefined4 __thiscall TransGenosisUI::GetCurrentTGType(TransGenosisUI *this)

{
  return *(undefined4 *)(this + 400);
}


/* TransGenosisUI::ShowPiecesTable() */

void __thiscall TransGenosisUI::ShowPiecesTable(TransGenosisUI *this)

{
  LawnApp *this_00;
  char cVar1;
  TGPieceTableUI *pTVar2;
  
  LawnApp::ShowTGPieceTableUI(gLawnApp);
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsTGPieceTableUIValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  pTVar2 = (TGPieceTableUI *)LawnApp::GetTGPieceTableUI(this_00);
  TGPieceTableUI::SetMinChips(pTVar2,*(int *)(this + 0x138));
  pTVar2 = (TGPieceTableUI *)LawnApp::GetTGPieceTableUI(gLawnApp);
  TGPieceTableUI::SetIsInTutorial(pTVar2,(bool)this[0x129]);
  return;
}


/* TransGenosisUI::ShowAvatarPiecesTable() */

void TransGenosisUI::ShowAvatarPiecesTable(void)

{
  LawnApp *this;
  char cVar1;
  TGPieceTableUI *pTVar2;
  
  LawnApp::ShowTGAvatarPieceTableUI(gLawnApp);
  this = gLawnApp;
  cVar1 = LawnApp::IsTGAvatarPieceTableUIValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  pTVar2 = (TGPieceTableUI *)LawnApp::GetTGAvatarPieceTableUI(this);
  TGPieceTableUI::SetMinChips(pTVar2,3);
  pTVar2 = (TGPieceTableUI *)LawnApp::GetTGAvatarPieceTableUI(gLawnApp);
  TGPieceTableUI::SetIsInTutorial(pTVar2,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::GetCorePoint() */

void __thiscall TransGenosisUI::GetCorePoint(TransGenosisUI *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar2 = FUN_04bc5564(0x25);
  Sexy::Point::Point(in_x8,local_28 + local_10 / 2,(local_24 + local_c / 2) - iVar2);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::StartOpenTutorial() */

void __thiscall TransGenosisUI::StartOpenTutorial(TransGenosisUI *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(this + 0x490);
  local_8 = ___stack_chk_guard;
  if (lVar4 != 0) {
    Sexy::Point::Point((Point *)&local_20,*(int *)(lVar4 + 0x48),*(int *)(lVar4 + 0x4c));
    for (lVar4 = *(long *)(*(long *)(this + 0x490) + 0x20); pLVar1 = gLawnApp, lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x20)) {
      UnchartedModePlantNumData::UnchartedModePlantNumData
                (aUStack_10,*(int *)(lVar4 + 0x48),*(int *)(lVar4 + 0x4c));
      Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,
               (float)(int)((float)(*(int *)(this + 0x2f4) / 2) + (float)local_20),
               (float)(int)((float)(*(int *)(this + 0x2f4) / 2) + (float)local_1c));
    uVar2 = *(undefined4 *)(this + 0x2f4);
    uVar5 = *(undefined8 *)(this + 0x490);
    std::string::string((string *)aUStack_10,"[TRANS_GENOSIS_SELECT_TUTORIAL_2]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar2,uVar5,aUStack_10);
    std::string::~string((string *)aUStack_10);
    nop();
    lVar4 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar2 = FUN_04bc5564(0);
    FUN_04bc4d80(0,lVar4 + 0xf8,lVar4 + 0x100,uVar2,0);
    lVar4 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar2 = FUN_04bc5564(0);
    uVar3 = FUN_04bc5564(0x1e);
    FUN_04bc4df0(lVar4 + 0x114,uVar2,uVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::RecoverAllButtonAndAnims() */

void TransGenosisUI::RecoverAllButtonAndAnims(void)

{
  EffectAnim_UIAnim *this;
  char cVar1;
  TransGenosisUI *in_x0;
  long *plVar2;
  code *in_x2;
  string asStack_10 [8];
  long local_8;
  
  plVar2 = *(long **)(in_x0 + 0x490);
  local_8 = ___stack_chk_guard;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x490) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x490),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4a0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4a0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4a0),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4a8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4a8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4a8),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4b8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4b8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4b8),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4c0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4c0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4c0),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4e0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4e0) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4e0),0);
  }
  plVar2 = *(long **)(in_x0 + 0x4d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x4d8) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x4d8),0);
  }
  plVar2 = *(long **)(in_x0 + 0x478);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x478) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x478),0);
  }
  plVar2 = *(long **)(in_x0 + 0x480);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    in_x2 = *(code **)(**(long **)(in_x0 + 0x480) + 0x188);
    (*in_x2)(*(long **)(in_x0 + 0x480),0);
  }
  this = (EffectAnim_UIAnim *)(in_x0 + 0x448);
  cVar1 = EffectAnim_UIAnim::IsValid(this);
  if (cVar1 != '\0') {
    EA::Thread::MutexParameters::MutexParameters((MutexParameters *)this,true,(char *)in_x2);
    cVar1 = EffectAnim_UIAnim::IsValid(this);
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"animation");
      EffectAnim_UIAnim::PlayLoop(this,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (in_x0[0x129] == (TransGenosisUI)0x0) {
    std::string::string(asStack_10,"TGShowSpecialActive");
    Cpp2Lua<int>(asStack_10,*(int *)(in_x0 + 0x140));
    std::string::~string(asStack_10);
    nop();
  }
  else {
    plVar2 = *(long **)(in_x0 + 0x4b8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    plVar2 = *(long **)(in_x0 + 0x4c0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    plVar2 = *(long **)(in_x0 + 0x4e0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    StartOpenTutorial(in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::StartTGTutorial() */

void __thiscall TransGenosisUI::StartTGTutorial(TransGenosisUI *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  plVar5 = *(long **)(this + 0x4b8);
  local_8 = ___stack_chk_guard;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x188))(plVar5,0);
    Sexy::Point::Point((Point *)&local_20,*(int *)(*(long *)(this + 0x4b8) + 0x48),
                       *(int *)(*(long *)(this + 0x4b8) + 0x4c));
    for (lVar6 = *(long *)(*(long *)(this + 0x4b8) + 0x20); pLVar1 = gLawnApp, lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x20)) {
      UnchartedModePlantNumData::UnchartedModePlantNumData
                (aUStack_10,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c));
      Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)aUStack_10);
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,
               (float)(int)((float)(*(int *)(this + 0x3c0) / 2) + (float)local_20),
               (float)(int)((float)(*(int *)(this + 0x3c4) / 2) + (float)local_1c));
    uVar2 = FUN_04bc5564(0x96);
    uVar7 = *(undefined8 *)(this + 0x4b8);
    std::string::string((string *)aUStack_10,"[TRANS_GENOSIS_SELECT_TUTORIAL_5]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar2,uVar7,aUStack_10);
    std::string::~string((string *)aUStack_10);
    nop();
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar3 = FUN_04bc5564(100);
    uVar2 = FUN_04bc5564(200);
    FUN_04bc4d80(0x42b40000,lVar6 + 0xf8,lVar6 + 0x100,-iVar3,uVar2);
    lVar6 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar3 = FUN_04bc5564(300);
    iVar4 = FUN_04bc5564(0x46);
    FUN_04bc4df0(lVar6 + 0x114,-iVar3,-iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TransGenosisUI::ADTrans() */

void __thiscall TransGenosisUI::ADTrans(TransGenosisUI *this)

{
  ADManager *pAVar1;
  
  *(undefined4 *)(this + 400) = 4;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x14);
  return;
}


/* TransGenosisUI::ADAvatarTrans() */

void __thiscall TransGenosisUI::ADAvatarTrans(TransGenosisUI *this)

{
  ADManager *pAVar1;
  
  *(undefined4 *)(this + 400) = 5;
  pAVar1 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar1,0x15);
  return;
}


/* TransGenosisUI::SwitchHiden(bool) */

void __thiscall TransGenosisUI::SwitchHiden(TransGenosisUI *this,bool param_1)

{
  byte bVar1;
  long *plVar2;
  ADManager *pAVar3;
  
  plVar2 = *(long **)(this + 0x490);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  plVar2 = *(long **)(this + 0x4a0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  plVar2 = *(long **)(this + 0x4a8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  plVar2 = *(long **)(this + 0x4b8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  plVar2 = *(long **)(this + 0x4c0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  if (*(long *)(this + 0x4e0) != 0) {
    pAVar3 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    bVar1 = ADManager::CanWatchAD(pAVar3,0x14);
    (**(code **)(**(long **)(this + 0x4e0) + 0x158))(*(long **)(this + 0x4e0),bVar1 & param_1);
  }
  plVar2 = *(long **)(this + 0x498);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,!param_1);
  }
  plVar2 = *(long **)(this + 0x4b0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,!param_1);
  }
  plVar2 = *(long **)(this + 0x4c8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,!param_1);
  }
  plVar2 = *(long **)(this + 0x4d0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,!param_1);
  }
  if (*(long *)(this + 0x4e8) != 0) {
    pAVar3 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    bVar1 = ADManager::CanWatchAD(pAVar3,0x15);
    (**(code **)(**(long **)(this + 0x4e8) + 0x158))(*(long **)(this + 0x4e8),bVar1 & !param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::SetSimpleRates(std::vector<int, std::allocator<int> >) */

void __thiscall TransGenosisUI::SetSimpleRates(TransGenosisUI *this,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x220));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x220));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    puVar4 = (undefined4 *)*puVar2;
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_04bc486c(*param_2,puVar4[1]);
      *puVar4 = *puVar3;
      Sexy::StrFormat(L"%d%%",auStack_10);
      FUN_054766c8(puVar4 + 0xe,auStack_10);
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
/* TransGenosisUI::SetSeniorRates(std::vector<int, std::allocator<int> >) */

void __thiscall TransGenosisUI::SetSeniorRates(TransGenosisUI *this,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x238));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x238));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    puVar4 = (undefined4 *)*puVar2;
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_04bc486c(*param_2,puVar4[1]);
      *puVar4 = *puVar3;
      Sexy::StrFormat(L"%d%%",auStack_10);
      FUN_054766c8(puVar4 + 0xe,auStack_10);
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
/* TransGenosisUI::ClearSimpleRates() */

void __thiscall TransGenosisUI::ClearSimpleRates(TransGenosisUI *this)

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
             *)(this + 0x220);
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
/* TransGenosisUI::ClearSeniorRates() */

void __thiscall TransGenosisUI::ClearSeniorRates(TransGenosisUI *this)

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
             *)(this + 0x238);
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
/* TransGenosisUI::SetAvatarSelectBoxs(std::vector<int, std::allocator<int> >, bool) */

void TransGenosisUI::SetAvatarSelectBoxs(long param_1,undefined8 *param_2)

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
                      *)(param_1 + 0x208));
  uVar6 = 0;
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x208));
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
/* TransGenosisUI::GetInsertIndex() */

void __thiscall TransGenosisUI::GetInsertIndex(TransGenosisUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x12a] == (TransGenosisUI)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x208));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x208));
    iVar3 = 0;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (((int *)*puVar2 != (int *)0x0) && (*(int *)*puVar2 == 0)) break;
      iVar3 = iVar3 + 1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    iVar3 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1f0));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (((int *)*puVar2 != (int *)0x0) && (*(int *)*puVar2 == 0)) break;
      iVar3 = iVar3 + 1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


/* TransGenosisUI::CanSelectBoxAdd() */

bool __thiscall TransGenosisUI::CanSelectBoxAdd(TransGenosisUI *this)

{
  int iVar1;
  
  if (this[0x12a] == (TransGenosisUI)0x0) {
    iVar1 = GetInsertIndex(this);
    return iVar1 < 3;
  }
  iVar1 = GetInsertIndex(this);
  return iVar1 < 5;
}


/* TransGenosisUI::AddToSelectBoxs(int) */

void __thiscall TransGenosisUI::AddToSelectBoxs(TransGenosisUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  cVar1 = CanSelectBoxAdd(this);
  if (cVar1 != '\0') {
    iVar2 = GetInsertIndex(this);
    puVar3 = (undefined8 *)FUN_04bc48a8(*(undefined8 *)(this + 0x1f0),(long)iVar2);
    *(int *)*puVar3 = param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::CanStartTrans() */

void __thiscall TransGenosisUI::CanStartTrans(TransGenosisUI *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x12a] == (TransGenosisUI)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x208));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x208));
    iVar3 = 0;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (0 < *(int *)*puVar2) {
        iVar3 = iVar3 + 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    bVar1 = iVar3 == 3;
  }
  else {
    iVar3 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1f0));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (0 < *(int *)*puVar2) {
        iVar3 = iVar3 + 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    bVar1 = *(int *)(this + 0x138) <= iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* TransGenosisUI::UpdateButtons() */

void __thiscall TransGenosisUI::UpdateButtons(TransGenosisUI *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  ADManager *pAVar5;
  long *plVar6;
  code *pcVar7;
  
  cVar2 = FUN_04bc47f4(this[0x115]);
  if (cVar2 != '\0') {
    return;
  }
  if (this[0x129] != (TransGenosisUI)0x0) {
    plVar6 = *(long **)(this + 0x4c0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x188))(plVar6,1);
    }
    plVar6 = *(long **)(this + 0x4e0);
    if (plVar6 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar6 + 0x188))(plVar6,1);
    return;
  }
  plVar6 = *(long **)(this + 0x4b8);
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x188);
    bVar3 = CanStartTrans(this);
    (*pcVar7)(plVar6,bVar3 ^ 1);
  }
  plVar6 = *(long **)(this + 0x4c0);
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x188);
    bVar3 = CanStartTrans(this);
    (*pcVar7)(plVar6,bVar3 ^ 1);
  }
  if (*(long *)(this + 0x4e0) != 0) {
    pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    cVar2 = ADManager::CanWatchAD(pAVar5,0x14);
    plVar6 = *(long **)(this + 0x4e0);
    pcVar7 = *(code **)(*plVar6 + 0x188);
    cVar4 = CanStartTrans(this);
    if (cVar4 == '\0') {
      (*pcVar7)(plVar6,1);
      plVar6 = *(long **)(this + 0x4e0);
      pcVar7 = *(code **)(*plVar6 + 0x158);
      if (cVar2 != '\0') goto LAB_04bc899c;
LAB_04bc8974:
      (*pcVar7)(plVar6,0);
    }
    else if (cVar2 == '\0') {
      (*pcVar7)(plVar6,1);
      (**(code **)(**(long **)(this + 0x4e0) + 0x158))(*(long **)(this + 0x4e0),0);
    }
    else {
      (*pcVar7)(plVar6,0);
      plVar6 = *(long **)(this + 0x4e0);
      pcVar7 = *(code **)(*plVar6 + 0x158);
LAB_04bc899c:
      if (this[0x12a] == (TransGenosisUI)0x0) goto LAB_04bc8974;
      (*pcVar7)();
    }
  }
  plVar6 = *(long **)(this + 0x4c8);
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x188);
    bVar3 = CanStartTrans(this);
    (*pcVar7)(plVar6,bVar3 ^ 1);
  }
  plVar6 = *(long **)(this + 0x4d0);
  if (plVar6 != (long *)0x0) {
    pcVar7 = *(code **)(*plVar6 + 0x188);
    bVar3 = CanStartTrans(this);
    (*pcVar7)(plVar6,bVar3 ^ 1);
  }
  if (*(long *)(this + 0x4e8) == 0) {
    return;
  }
  pAVar5 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  cVar2 = ADManager::CanWatchAD(pAVar5,0x15);
  plVar6 = *(long **)(this + 0x4e8);
  pcVar7 = *(code **)(*plVar6 + 0x188);
  cVar4 = CanStartTrans(this);
  bVar1 = false;
  if (cVar4 == '\0') {
    (*pcVar7)(plVar6,1);
    plVar6 = *(long **)(this + 0x4e8);
    pcVar7 = *(code **)(*plVar6 + 0x158);
    if (cVar2 == '\0') goto LAB_04bc88d0;
  }
  else {
    if (cVar2 == '\0') {
      (*pcVar7)(plVar6,1);
      plVar6 = *(long **)(this + 0x4e8);
      pcVar7 = *(code **)(*plVar6 + 0x158);
      goto LAB_04bc88d0;
    }
    (*pcVar7)(plVar6,0);
    plVar6 = *(long **)(this + 0x4e8);
    pcVar7 = *(code **)(*plVar6 + 0x158);
  }
  bVar1 = this[0x12a] == (TransGenosisUI)0x0;
LAB_04bc88d0:
  (*pcVar7)(plVar6,bVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::ClearSelectBoxs() */

void __thiscall TransGenosisUI::ClearSelectBoxs(TransGenosisUI *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1f0);
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
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x208);
  std::vector<SelectBox*,std::allocator<SelectBox*>>::clear
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)this_00);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
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
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::SetSelectBoxs(std::vector<int, std::allocator<int> >, bool) */

void __thiscall TransGenosisUI::SetSelectBoxs(TransGenosisUI *this,undefined8 *param_2,char param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  CrazyNPCManager *pCVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f0));
  uVar8 = 0;
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x1f0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
  if (bVar1) {
    do {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      puVar9 = (undefined4 *)*puVar2;
      if (puVar9 != (undefined4 *)0x0) {
        uVar10 = *param_2;
        uVar3 = FUN_04bc4860(uVar10,param_2[1]);
        uVar7 = 0;
        if (uVar8 < uVar3) {
          puVar4 = (undefined4 *)FUN_04bc486c(uVar10,uVar8);
          uVar7 = *puVar4;
        }
        *puVar9 = uVar7;
      }
      uVar8 = uVar8 + 1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
    } while (bVar1);
  }
  if ((param_3 != '\0') && (this[0x129] != (TransGenosisUI)0x0)) {
    LawnApp::KillGameMaskUI(gLawnApp);
    plVar5 = *(long **)(this + 0x4b8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
    pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"TRANS_GENOSIS_SELECT_DONE_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,StartTGTutorial);
    Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>
              (aDStack_38,(__normal_iterator *)local_50);
    std::string::string((string *)&local_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,(__normal_iterator *)&local_58);
    std::string::~string((string *)&local_58);
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
/* TransGenosisUI::DrawSimpleRates(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawSimpleRates(TransGenosisUI *this,Graphics *param_1)

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
                      *)(this + 0x220));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x220));
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
        if (bVar2) goto LAB_04bc9db8;
LAB_04bc9c10:
        cVar1 = FUN_04bc47f4(this[0x115]);
      }
      else {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_48);
        if (!bVar2) goto LAB_04bc9c10;
LAB_04bc9db8:
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
        WriteWordInRect(param_1,piVar6 + 0xe,piVar6 + 10,uVar5,local_18,5,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DrawSeniorRates(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawSeniorRates(TransGenosisUI *this,Graphics *param_1)

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
                      *)(this + 0x238));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x238));
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
        if (bVar2) goto LAB_04bca164;
LAB_04bc9fbc:
        cVar1 = FUN_04bc47f4(this[0x115]);
      }
      else {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_48);
        if (!bVar2) goto LAB_04bc9fbc;
LAB_04bca164:
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
        WriteWordInRect(param_1,piVar6 + 0xe,piVar6 + 10,uVar5,local_18,5,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DrawBanks(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawBanks(TransGenosisUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad38);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2b8));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar3,aIStack_18);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad38);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2c8));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar3,aIStack_18);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b128);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x298));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar3,aIStack_18);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b100);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2a8));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar3,aIStack_18);
  cVar1 = FUN_04bc47f4(this[0x115]);
  if (cVar1 == '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      iVar2 = PlayerInfo::GetNumCoins(this_01,false);
      Sexy::CommaSeparate(iVar2);
      uVar3 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_28,(Insets *)(this + 0x2b8),uVar3,aIStack_18,5,1);
      iVar2 = PlayerInfo::GetNumGems(this_01,false);
      Sexy::CommaSeparate(iVar2);
      uVar3 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_20,(Insets *)(this + 0x2c8),uVar3,aIStack_18,5,1);
      FUN_05476c50(auStack_20);
      FUN_05476c50(auStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DrawSelectBoxs(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawSelectBoxs(TransGenosisUI *this,Graphics *param_1)

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
  if (this[0x12a] == (TransGenosisUI)0x0) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x208));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x208));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar4)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      piVar7 = (int *)*puVar5;
      iVar2 = *piVar7;
      if (iVar2 < 1) {
        uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b400);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 1));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
        uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b258);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 5));
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
  }
  else {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1f0));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f0));
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar4)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      piVar7 = (int *)*puVar5;
      iVar2 = *piVar7;
      if (iVar2 < 1) {
        uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b400);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 1));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
        uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b258);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 5));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
      }
      else {
        uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(piVar7 + 1));
        PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar6,aIStack_18);
        cVar3 = FUN_04bc47f4(this[0x115]);
        if (cVar3 == '\0') {
          LawnApp::DrawPiecesInRect(gLawnApp,param_1,iVar2,(TRect *)(piVar7 + 1));
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DrawAwaitPanel(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawAwaitPanel(TransGenosisUI *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ac08);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2d8));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2f8));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aad0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x2e8));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afb0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x328));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  DrawSelectBoxs(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DrawTransPanel(Sexy::Graphics*) */

void __thiscall TransGenosisUI::DrawTransPanel(TransGenosisUI *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b430);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x3a8));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b1a0);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x408));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b088);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x388));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b060);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 1000));
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  if (this[0x12a] == (TransGenosisUI)0x0) {
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1c0,this + 0x398,uVar1,aIStack_18,5,1);
    uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x1c8,this + 0x3f8,uVar1,aIStack_18,5,1);
  }
  else {
    DrawSimpleRates(this,param_1);
    DrawSeniorRates(this,param_1);
  }
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aa80);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x368));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::Draw(Sexy::Graphics*) */

void __thiscall TransGenosisUI::Draw(TransGenosisUI *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x128] != (TransGenosisUI)0x0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ab58);
    PopingWidget::GetMainRect();
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b008);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x268));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    DrawBanks(this,param_1);
    DrawAwaitPanel(this,param_1);
    DrawTransPanel(this,param_1);
    cVar1 = FUN_04bc47f4(this[0x115]);
    if (cVar1 == '\0') {
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x1a0,this + 0x278,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,1);
      WriteWordInRect(param_1,this + 0x1a8,this + 0x378,uVar2,aIStack_40,5,1);
      uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_HardShadow)
      ;
      Sexy::Color::Color((Color *)aIStack_40,0xff,0xf0,0x84);
      WriteWordInRect(param_1,this + 0x1b0,this + 0x3d8,uVar2,aIStack_40,5,1);
      if (this[0x12a] != (TransGenosisUI)0x0) {
        uVar2 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
        Sexy::Color::Color((Color *)aIStack_40,0xf7,0xdb,0x6b);
        WriteWordInRect(param_1,this + 0x1b8,this + 0x388,uVar2,aIStack_40,5,1);
        uVar2 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
        Sexy::Color::Color((Color *)aIStack_40,0xf7,0xdb,0x6b);
        WriteWordInRect(param_1,this + 0x1b8,this + 1000,uVar2,aIStack_40,5,1);
      }
      cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x448));
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x448),param_1);
      }
    }
    else {
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x338));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x348));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x288));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x3b8));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
      PVZ2UIButton::GetImageNormal();
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x418));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af88);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x308));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ab08);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x318));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,aIStack_50,this + 0x3c8,uVar2,aIStack_40,5,1);
    FUN_05476c50(aIStack_50);
    nop();
    FUN_05478178(aIStack_50,&DAT_056f11a8,auStack_58);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,aIStack_50,this + 0x428,uVar2,aIStack_40,5,1);
    FUN_05476c50(aIStack_50);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TransGenosisUI::CreateTGProducts() */

void __thiscall TransGenosisUI::CreateTGProducts(TransGenosisUI *this)

{
  TGProduct *this_00;
  
  if (*(long *)(this + 0x198) != 0) {
    return;
  }
  this_00 = ::operator_new(0x298);
  TGProduct::TGProduct(this_00);
  *(TGProduct **)(this + 0x198) = this_00;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::TransGenosisUI() */

void __thiscall TransGenosisUI::TransGenosisUI(TransGenosisUI *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (TransGenosisUI)0x0;
  *(undefined ***)this = &PTR_GetClass_0697a9d0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697ad10;
  this[0x129] = (TransGenosisUI)0x0;
  this[0x12a] = (TransGenosisUI)0x1;
  *(undefined4 *)(this + 300) = 0;
  TGConfig::TGConfig((TGConfig *)(this + 0x130));
  *(undefined4 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  FUN_05478178(this + 0x1a0,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1a8,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1b0,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1b8,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1c0,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1c8,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1d0,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1d8,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1e0,&DAT_056f11a8,(string *)&local_20);
  nop();
  FUN_05478178(this + 0x1e8,&DAT_056f11a8,(string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x208));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  Sexy::Insets::Insets((Insets *)(this + 0x268));
  Sexy::Insets::Insets((Insets *)(this + 0x278));
  Sexy::Insets::Insets((Insets *)(this + 0x288));
  Sexy::Insets::Insets((Insets *)(this + 0x298));
  Sexy::Insets::Insets((Insets *)(this + 0x2a8));
  Sexy::Insets::Insets((Insets *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2c8));
  Sexy::Insets::Insets((Insets *)(this + 0x2d8));
  Sexy::Insets::Insets((Insets *)(this + 0x2e8));
  Sexy::Insets::Insets((Insets *)(this + 0x2f8));
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  Sexy::Insets::Insets((Insets *)(this + 0x328));
  Sexy::Insets::Insets((Insets *)(this + 0x338));
  Sexy::Insets::Insets((Insets *)(this + 0x348));
  Sexy::Insets::Insets((Insets *)(this + 0x358));
  Sexy::Insets::Insets((Insets *)(this + 0x368));
  Sexy::Insets::Insets((Insets *)(this + 0x378));
  Sexy::Insets::Insets((Insets *)(this + 0x388));
  Sexy::Insets::Insets((Insets *)(this + 0x398));
  Sexy::Insets::Insets((Insets *)(this + 0x3a8));
  Sexy::Insets::Insets((Insets *)(this + 0x3b8));
  Sexy::Insets::Insets((Insets *)(this + 0x3c8));
  Sexy::Insets::Insets((Insets *)(this + 0x3d8));
  Sexy::Insets::Insets((Insets *)(this + 1000));
  Sexy::Insets::Insets((Insets *)(this + 0x3f8));
  Sexy::Insets::Insets((Insets *)(this + 0x408));
  Sexy::Insets::Insets((Insets *)(this + 0x418));
  Sexy::Insets::Insets((Insets *)(this + 0x428));
  Sexy::Insets::Insets((Insets *)(this + 0x438));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x448));
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_TransGenosis");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"Effect_TransGenosis");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_WorldMap");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"LoadTGResource");
  Cpp2Lua((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<TransGenosisUI,void(TransGenosisUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTGResultGot);
  local_80 = local_28;
  local_90 = local_38;
  uStack_88 = uStack_30;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<TransGenosisUI,void(TransGenosisUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::TGResultGot,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_b0 = local_20;
  uStack_a8 = uStack_18;
  local_a0 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<TransGenosisUI,void(TransGenosisUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::InitTutorialState() */

void TransGenosisUI::InitTutorialState(void)

{
  undefined1 uVar1;
  int iVar2;
  long in_x0;
  wchar16 *pwVar3;
  ProfileMgr *this;
  long lVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"TGTutorial");
  uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  *(undefined1 *)(in_x0 + 0x129) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (*(char *)(in_x0 + 0x129) == '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this);
    if (lVar4 == 0) {
      if (*(char *)(in_x0 + 0x129) == '\0') goto LAB_04bcdaf8;
    }
    else {
      iVar2 = FUN_04bc4850(*(undefined4 *)(lVar4 + 0x40));
      *(bool *)(in_x0 + 0x129) = iVar2 == 0x29;
      if (iVar2 != 0x29) goto LAB_04bcdaf8;
    }
  }
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::TGTutorial,1);
LAB_04bcdaf8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::~TransGenosisUI() */

void __thiscall TransGenosisUI::~TransGenosisUI(TransGenosisUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_0697ad10;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0697a9d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ClearSelectBoxs(this);
  ClearSimpleRates(this);
  ClearSeniorRates(this);
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x448));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_TransGenosis");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effect_TransGenosis");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldMap");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DeleteTGResource");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x448));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x250));
  std::vector<RateOfRares*,std::allocator<RateOfRares*>>::~vector
            ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x238));
  std::vector<RateOfRares*,std::allocator<RateOfRares*>>::~vector
            ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x220));
  std::vector<SelectBox*,std::allocator<SelectBox*>>::~vector
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x208));
  std::vector<SelectBox*,std::allocator<SelectBox*>>::~vector
            ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x1f0));
  FUN_05476c50(this + 0x1e8);
  FUN_05476c50(this + 0x1e0);
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  FUN_05476c50(this + 0x1c0);
  FUN_05476c50(this + 0x1b8);
  FUN_05476c50(this + 0x1b0);
  FUN_05476c50(this + 0x1a8);
  FUN_05476c50(this + 0x1a0);
  TGConfig::~TGConfig((TGConfig *)(this + 0x130));
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransGenosisUI::~TransGenosisUI() */

void __thiscall TransGenosisUI::~TransGenosisUI(TransGenosisUI *this)

{
  ~TransGenosisUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::SeniorTrans() */

void __thiscall TransGenosisUI::SeniorTrans(TransGenosisUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  HintUI *pHVar2;
  char *pcVar3;
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetNumGems(this_01,false);
  if (iVar1 < *(int *)(this + 0x144)) {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[GEM_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[GEM_NOT_ENOUGH_DIALOG_TEXT]",auStack_58);
      HintUI::SetContentString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ShowGemStore);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
    }
  }
  else {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[TRANS_GENOSIS_PAY_ENSURE_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      HintUI::SetContentString(pHVar2,(wstring *)(this + 0x1d8));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,DoSeniorTrans);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::AvatarSimpleTrans() */

void __thiscall TransGenosisUI::AvatarSimpleTrans(TransGenosisUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  HintUI *pHVar2;
  char *pcVar3;
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetNumCoins(this_01,false);
  if (iVar1 < 1000) {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[COIN_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[COIN_NOT_ENOUGH_DIALOG_TEXT]",auStack_58);
      HintUI::SetContentString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ShowCoinStore);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
    }
  }
  else {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[TRANS_GENOSIS_PAY_ENSURE_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      HintUI::SetContentString(pHVar2,(wstring *)(this + 0x1e0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,DoAvatarSimpleTrans);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::AvatarSeniorTrans() */

void __thiscall TransGenosisUI::AvatarSeniorTrans(TransGenosisUI *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  HintUI *pHVar2;
  char *pcVar3;
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetNumGems(this_01,false);
  if (iVar1 < 10) {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[GEM_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[GEM_NOT_ENOUGH_DIALOG_TEXT]",auStack_58);
      HintUI::SetContentString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ShowGemStore);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
    }
  }
  else {
    pHVar2 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar2 != (HintUI *)0x0) {
      HintUI::Default2Init(pHVar2);
      FUN_05478178(awStack_50,L"[TRANS_GENOSIS_PAY_ENSURE_TITLE]",auStack_58);
      HintUI::SetTitleString(pHVar2,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      HintUI::SetContentString(pHVar2,(wstring *)(this + 0x1e8));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,DoAvatarSeniorTrans);
      Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>(aDStack_38,awStack_50);
      HintUI::SetButton2PressedEvent(pHVar2,aDStack_38);
      HintUI::ShowHintUI(pHVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::SetConfig(TGConfig) */

void __thiscall TransGenosisUI::SetConfig(TransGenosisUI *this,TGConfig *param_2)

{
  wstring *pwVar1;
  wstring *pwVar2;
  wstring *pwVar3;
  wstring *pwVar4;
  long lVar5;
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGConfig::operator=((TGConfig *)(this + 0x130),param_2);
  lVar5 = FUN_04bc4860(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
  if (lVar5 == 0) {
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x158),(vector *)&DAT_06b8acf8);
  }
  lVar5 = FUN_04bc4860(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x178));
  if (lVar5 == 0) {
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x170),(vector *)&DAT_06b8ac30);
  }
  pwVar1 = (wstring *)(this + 0x1d0);
  pwVar2 = (wstring *)(this + 0x1d8);
  TodStringTranslate(L"[TRANS_GENOSIS_PAY_ENSURE]");
  pwVar3 = (wstring *)(this + 0x1e0);
  pwVar4 = (wstring *)(this + 0x1e8);
  TodReplaceNumberString(awStack_18,L"{COST}",*(int *)(this + 0x148));
  FUN_054766c8(pwVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SIMPLE_CURRENCY]");
  TodReplaceString(pwVar1,L"{CURRENCY}",awStack_18);
  FUN_054766c8(pwVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SIMPLE]");
  TodReplaceString(pwVar1,L"{TYPE}",awStack_18);
  FUN_054766c8(pwVar1,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_PAY_ENSURE]");
  TodReplaceNumberString(awStack_18,L"{COST}",*(int *)(this + 0x144));
  FUN_054766c8(pwVar2,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SENIOR_CURRENCY]");
  TodReplaceString(pwVar2,L"{CURRENCY}",awStack_18);
  FUN_054766c8(pwVar2,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SENIOR]");
  TodReplaceString(pwVar2,L"{TYPE}",awStack_18);
  FUN_054766c8(pwVar2,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_PAY_ENSURE]");
  TodReplaceNumberString(awStack_18,L"{COST}",1000);
  FUN_054766c8(pwVar3,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SIMPLE_CURRENCY]");
  TodReplaceString(pwVar3,L"{CURRENCY}",awStack_18);
  FUN_054766c8(pwVar3,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SIMPLE]");
  TodReplaceString(pwVar3,L"{TYPE}",awStack_18);
  FUN_054766c8(pwVar3,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_PAY_ENSURE]");
  TodReplaceNumberString(awStack_18,L"{COST}",10);
  FUN_054766c8(pwVar4,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SENIOR_CURRENCY]");
  TodReplaceString(pwVar4,L"{CURRENCY}",awStack_18);
  FUN_054766c8(pwVar4,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  TodStringTranslate(L"[TRANS_GENOSIS_SENIOR]");
  TodReplaceString(pwVar4,L"{TYPE}",awStack_18);
  FUN_054766c8(pwVar4,auStack_10);
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::GetValueByPlantchipId(int) */

void __thiscall TransGenosisUI::GetValueByPlantchipId(TransGenosisUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this_00;
  string *psVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  string asStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,param_1);
  if (cVar1 == '\0') goto LAB_04bcff8c;
  iVar2 = PlantChipNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 == '\0') {
LAB_04bcfff0:
    uVar7 = 0;
  }
  else {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar8 = *(undefined8 *)(this + 0x158);
    iVar2 = *(int *)(lVar4 + 0xd0);
    uVar5 = FUN_04bc4860(uVar8,*(undefined8 *)(this + 0x160));
    if (uVar5 <= (ulong)(long)iVar2) goto LAB_04bcfff0;
    puVar6 = (undefined4 *)FUN_04bc486c(uVar8,(long)iVar2);
    uVar7 = *puVar6;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
LAB_04bcff8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::UpdateSelectedValues() */

void __thiscall TransGenosisUI::UpdateSelectedValues(TransGenosisUI *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(undefined4 *)(this + 300) = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1f0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1f0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar2 = GetValueByPlantchipId(this,*(int *)*puVar3);
    *(int *)(this + 300) = *(int *)(this + 300) + iVar2;
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
/* TransGenosisUI::HasRareOf(std::map<int, int, std::less<int>, std::allocator<std::pair<int const,
   int> > >&, RareTypes) */

void __thiscall
TransGenosisUI::HasRareOf
          (undefined8 param_1_00,
          map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *param_1,int param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  string *psVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       (param_1);
  local_30 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  do {
    cVar2 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_30);
    if (!(bool)cVar2) {
LAB_04bd0224:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar2);
    }
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
    if (0 < piVar3[1]) {
      cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*piVar3);
      if (cVar2 != '\0') {
        LawnApp::GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_28,apStack_18);
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        iVar1 = *(int *)(lVar5 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (iVar1 == param_3) {
          std::string::~string(asStack_28);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
          goto LAB_04bd0224;
        }
        std::string::~string(asStack_28);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::CalcBestChipsForASWithRare(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, int) */

void __thiscall
TransGenosisUI::CalcBestChipsForASWithRare(TransGenosisUI *this,map *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  NameMapperBase *this_02;
  LevelEditorCardPlantInterface aLStack_30 [8];
  int local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_30);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_30), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_20);
    if ((((cVar2 == '\0') &&
         (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20),
         *(char *)(lVar4 + 0x30) != '\0')) &&
        (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20),
        *(int *)(lVar4 + 0xd0) == param_2)) && (this_01 != (PlayerInfo *)0x0)) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      FUN_05475d88(asStack_18,lVar4 + 8);
      local_28 = PlayerInfo::GetPlantPieceCount(this_01,asStack_18,false);
      iVar3 = PlayerInfo::GetPlantStarLevel(this_01,asStack_18,false);
      if ((iVar3 < 5) || (local_28 < 1)) {
        std::string::~string(asStack_18);
      }
      else {
        this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        local_24 = NameMapperBase::GetIdForName(this_02,asStack_18);
        local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                             ((FestivalTab *)&local_24,(ActivityTypeID *)&local_28);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
        insert<std::pair<int,int>,void>
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_1,
                   (pair *)&local_10);
        std::string::~string(asStack_18);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::CalcChipsForAS(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > >&) */

void __thiscall TransGenosisUI::CalcChipsForAS(TransGenosisUI *this,map *param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  int *piVar4;
  NameMapperBase *this_02;
  LevelEditorCardPlantInterface aLStack_30 [8];
  int local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_30);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_30), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_20);
    if ((cVar2 == '\0') &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20),
       *(char *)(lVar3 + 0x30) != '\0')) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      piVar4 = (int *)FUN_04bc486c(*(undefined8 *)(this + 0x170),(long)*(int *)(lVar3 + 0xd0));
      if ((0 < *piVar4) && (this_01 != (PlayerInfo *)0x0)) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        FUN_05475d88(asStack_18,lVar3 + 8);
        local_28 = PlayerInfo::GetPlantPieceCount(this_01,asStack_18,false);
        if (0 < local_28) {
          this_02 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          local_24 = NameMapperBase::GetIdForName(this_02,asStack_18);
          local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                               ((FestivalTab *)&local_24,(ActivityTypeID *)&local_28);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
          insert<std::pair<int,int>,void>
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_1
                     ,(pair *)&local_10);
        }
        std::string::~string(asStack_18);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::CalcAvatarChipsForAS(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void __thiscall TransGenosisUI::CalcAvatarChipsForAS(TransGenosisUI *this,map *param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  long lVar3;
  long lVar4;
  int *piVar5;
  FestivalTab *pFVar6;
  ulong uVar7;
  string *extraout_x1;
  ulong uVar8;
  undefined8 uVar9;
  LevelEditorCardPlantInterface aLStack_40 [4];
  int local_3c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  NewAvatar aNStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_40);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_40), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_38);
    if ((cVar2 == '\0') &&
       (lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38),
       *(char *)(lVar4 + 0x30) != '\0')) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = NewAvatar::IsPlantAvatarExistence((string *)(lVar4 + 8));
      if ((cVar2 != '\0') && (lVar3 != 0)) {
        uVar8 = 0;
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        FUN_05475d88(aNStack_30,lVar4 + 8);
        NewAvatar::Common_GetPlantAvatarPiecesIdList(aNStack_30,extraout_x1);
        uVar9 = local_20;
        lVar4 = FUN_04bc4860(local_20,local_18);
        if (lVar4 != 0) {
          do {
            piVar5 = (int *)FUN_04bc486c(uVar9,uVar8);
            local_3c = NewAvatar::Common_GetAvatarPieceNum(*piVar5);
            if (0 < local_3c) {
              pFVar6 = (FestivalTab *)FUN_04bc486c(local_20,uVar8);
              local_28 = std::make_pair<FestivalTab,ActivityTypeID>
                                   (pFVar6,(ActivityTypeID *)&local_3c);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
              insert<std::pair<int,int>,void>
                        ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                         param_1,(pair *)&local_28);
            }
            uVar9 = local_20;
            uVar8 = uVar8 + 1;
            uVar7 = FUN_04bc4860(local_20,local_18);
          } while (uVar8 < uVar7);
        }
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
        std::string::~string((string *)aNStack_30);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::RecoverEverthingToNomal() */

void __thiscall TransGenosisUI::RecoverEverthingToNomal(TransGenosisUI *this)

{
  undefined *puVar1;
  undefined4 *puVar2;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x129] != (TransGenosisUI)0x0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    puVar2 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        amStack_68,(int *)&DAT_057553f0);
    *puVar2 = 1;
    puVar1 = gMessageRouter;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
              (amStack_38,(map *)amStack_68);
    MessageRouter::
    Post<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ((MessageRouter *)puVar1,Message::TGCraft,2,amStack_38);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(amStack_38);
    LawnApp::KillGameMaskUI(gLawnApp);
    this[0x129] = (TransGenosisUI)0x0;
    std::string::string((string *)amStack_38,"TGShowSpecialActive");
    Cpp2Lua<int>((string *)amStack_38,*(int *)(this + 0x140));
    std::string::~string((string *)amStack_38);
    nop();
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransGenosisUI::CloseProductUI() */

void __thiscall TransGenosisUI::CloseProductUI(TransGenosisUI *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x198) != 0) {
    (**(code **)(**(long **)(this + 0x18) + 0x68))(*(long **)(this + 0x18));
    (**(code **)(*(long *)gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x198) = 0;
    iVar1 = *(int *)(this + 400);
    if (this[0x129] == (TransGenosisUI)0x0) {
      *(undefined4 *)(this + 400) = 0;
    }
    else {
      RecoverEverthingToNomal(this);
      *(undefined4 *)(this + 400) = 0;
    }
    if (iVar1 - 4U < 2) {
      LawnApp::KillTransGenosisUI(gLawnApp);
      LawnApp::ShowTransGenosisUI(SUB81(gLawnApp,0));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::GetSelectedBoxIDs() */

void TransGenosisUI::GetSelectedBoxIDs(void)

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
                      *)(in_x0 + 0x1f0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x1f0));
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
/* TransGenosisUI::DoSimpleTrans() */

void __thiscall TransGenosisUI::DoSimpleTrans(TransGenosisUI *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 400) = 1;
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x278);
  GetSelectedBoxIDs();
  (*pcVar2)(plVar1,0,avStack_20,0);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoADTrans() */

void TransGenosisUI::DoADTrans(void)

{
  NetworkMgr *this;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  pcVar2 = *(code **)(*plVar1 + 0x278);
  GetSelectedBoxIDs();
  (*pcVar2)(plVar1,1,avStack_20,1);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoSeniorTrans() */

void __thiscall TransGenosisUI::DoSeniorTrans(TransGenosisUI *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 400) = 2;
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x278);
  GetSelectedBoxIDs();
  (*pcVar2)(plVar1,1,avStack_20,0);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::GetAvatarSelectedBoxIDs() */

void TransGenosisUI::GetAvatarSelectedBoxIDs(void)

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
                      *)(in_x0 + 0x208));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(in_x0 + 0x208));
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
/* TransGenosisUI::DoADAvatarTrans() */

void TransGenosisUI::DoADAvatarTrans(void)

{
  NetworkMgr *this;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  pcVar2 = *(code **)(*plVar1 + 0x280);
  GetAvatarSelectedBoxIDs();
  (*pcVar2)(plVar1,2,avStack_20,1);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransGenosisUI::onADFinished(int) */

void __thiscall TransGenosisUI::onADFinished(TransGenosisUI *this,int param_1)

{
  if (param_1 - 0x14U < 2) {
    if (*(int *)(this + 400) == 4) {
      DoADTrans();
      return;
    }
    if (*(int *)(this + 400) == 5) {
      DoADAvatarTrans();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoAvatarSimpleTrans() */

void __thiscall TransGenosisUI::DoAvatarSimpleTrans(TransGenosisUI *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 400) = 1;
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x280);
  GetAvatarSelectedBoxIDs();
  (*pcVar2)(plVar1,1,avStack_20,0);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoAvatarSeniorTrans() */

void __thiscall TransGenosisUI::DoAvatarSeniorTrans(TransGenosisUI *this)

{
  NetworkMgr *this_00;
  long *plVar1;
  code *pcVar2;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 400) = 2;
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x280);
  GetAvatarSelectedBoxIDs();
  (*pcVar2)(plVar1,2,avStack_20,0);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::AutoSelecting() */

void __thiscall TransGenosisUI::AutoSelecting(TransGenosisUI *this)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  HintUI *this_00;
  ulong uVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  uVar6 = 5;
  while( true ) {
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)&local_50);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    CalcBestChipsForASWithRare(this,(map *)amStack_38,iVar7);
    local_60 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_38);
    local_58 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58);
    if (bVar1) {
      do {
        piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60
                                  );
        cVar2 = LawnApp::IsNameMapperContainsId(gLawnApp,*piVar3);
        if (cVar2 == '\0') {
          uVar4 = FUN_04bc4860(local_50,local_48);
          if (uVar6 <= uVar4) goto LAB_04bd4018;
        }
        else {
          while( true ) {
            uVar4 = FUN_04bc4860(local_50,local_48);
            if (uVar6 <= uVar4) goto LAB_04bd4018;
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
    if (uVar6 <= uVar4) break;
    iVar7 = iVar7 + 1;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
    if (iVar7 == 5) goto LAB_04bd4020;
    uVar6 = 2;
    if (iVar7 != 4) {
      uVar6 = 5;
    }
  }
LAB_04bd4018:
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
LAB_04bd4020:
  lVar5 = FUN_04bc4860(local_50,local_48);
  if (lVar5 == 0) {
    this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (this_00 != (HintUI *)0x0) {
      HintUI::Default1Init(this_00);
      FUN_05478178(amStack_38,L"[HINT_DEFAULT_TITLE]",(rbtree_iterator *)&local_58);
      HintUI::SetTitleString(this_00,(wstring *)amStack_38);
      FUN_05476c50(amStack_38);
      nop();
      FUN_05478178(amStack_38,L"[TRANS_GENOSIS_NOTENOUGH]",(rbtree_iterator *)&local_58);
      HintUI::SetContentString(this_00,(wstring *)amStack_38);
      FUN_05476c50(amStack_38);
      nop();
      HintUI::ShowHintUI(this_00);
    }
  }
  else {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)amStack_38,(vector *)&local_50);
    SetSelectBoxs(this,amStack_38,0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)amStack_38);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::UpdateSimpleRates() */

void __thiscall TransGenosisUI::UpdateSimpleRates(TransGenosisUI *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int local_3c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = *(float *)(this + 0x14c) + *(float *)(this + 0x13c) * (float)*(int *)(this + 300);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar3 = CanStartTrans(this);
  if (cVar3 == '\0') {
LAB_04bd4f6c:
    local_20[0] = 0;
LAB_04bd4f78:
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
LAB_04bd4f90:
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
  }
  else {
    uVar6 = *(undefined8 *)(this + 0x158);
    lVar4 = FUN_04bc4860(uVar6,*(undefined8 *)(this + 0x160));
    if (lVar4 == 0) goto LAB_04bd4f6c;
    piVar5 = (int *)FUN_04bc486c(uVar6,0);
    iVar1 = *piVar5;
    fVar8 = (float)iVar1;
    if (fVar7 <= fVar8) {
      local_20[0] = 100;
      goto LAB_04bd4f78;
    }
    piVar5 = (int *)FUN_04bc486c(uVar6,1);
    iVar2 = *piVar5;
    if (fVar7 <= (float)iVar2) {
      local_3c = GetHalfAdjustedNum(((fVar7 - fVar8) * 100.0) / (float)(iVar2 - iVar1));
      local_20[0] = 100 - local_3c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
      goto LAB_04bd4f90;
    }
    piVar5 = (int *)FUN_04bc486c(uVar6,2);
    iVar1 = *piVar5;
    if ((float)iVar1 < fVar7) {
      piVar5 = (int *)FUN_04bc486c(uVar6,3);
      iVar2 = *piVar5;
      if ((float)iVar2 < fVar7) {
        piVar5 = (int *)FUN_04bc486c(uVar6,4);
        if ((float)*piVar5 < fVar7) {
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 100;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        }
        else {
          local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar2) * 100.0) / (float)(*piVar5 - iVar2))
          ;
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 100 - local_3c;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
        }
      }
      else {
        local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar1) * 100.0) / (float)(iVar2 - iVar1));
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        local_20[0] = 100 - local_3c;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      }
      goto LAB_04bd4fc0;
    }
    local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar2) * 100.0) / (float)(iVar1 - iVar2));
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    local_20[0] = 100 - local_3c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
  }
  local_20[0] = 0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_38,local_20);
  local_20[0] = 0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_38,local_20);
LAB_04bd4fc0:
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
  SetSimpleRates(this,(vector<int,std::allocator<int>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::UpdateSeniorRates() */

void __thiscall TransGenosisUI::UpdateSeniorRates(TransGenosisUI *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int local_3c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = *(float *)(this + 0x150) + *(float *)(this + 0x13c) * (float)*(int *)(this + 300);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  cVar3 = CanStartTrans(this);
  if (cVar3 == '\0') {
LAB_04bd5340:
    local_20[0] = 0;
LAB_04bd534c:
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
LAB_04bd5364:
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
  }
  else {
    uVar6 = *(undefined8 *)(this + 0x158);
    lVar4 = FUN_04bc4860(uVar6,*(undefined8 *)(this + 0x160));
    if (lVar4 == 0) goto LAB_04bd5340;
    piVar5 = (int *)FUN_04bc486c(uVar6,0);
    iVar1 = *piVar5;
    fVar8 = (float)iVar1;
    if (fVar7 <= fVar8) {
      local_20[0] = 100;
      goto LAB_04bd534c;
    }
    piVar5 = (int *)FUN_04bc486c(uVar6,1);
    iVar2 = *piVar5;
    if (fVar7 <= (float)iVar2) {
      local_3c = GetHalfAdjustedNum(((fVar7 - fVar8) * 100.0) / (float)(iVar2 - iVar1));
      local_20[0] = 100 - local_3c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
      goto LAB_04bd5364;
    }
    piVar5 = (int *)FUN_04bc486c(uVar6,2);
    iVar1 = *piVar5;
    if ((float)iVar1 < fVar7) {
      piVar5 = (int *)FUN_04bc486c(uVar6,3);
      iVar2 = *piVar5;
      if ((float)iVar2 < fVar7) {
        piVar5 = (int *)FUN_04bc486c(uVar6,4);
        if ((float)*piVar5 < fVar7) {
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 100;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        }
        else {
          local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar2) * 100.0) / (float)(*piVar5 - iVar2))
          ;
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 0;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          local_20[0] = 100 - local_3c;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,local_20);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
        }
      }
      else {
        local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar1) * 100.0) / (float)(iVar2 - iVar1));
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        local_20[0] = 100 - local_3c;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
        local_20[0] = 0;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,local_20);
      }
      goto LAB_04bd5394;
    }
    local_3c = GetHalfAdjustedNum(((fVar7 - (float)iVar2) * 100.0) / (float)(iVar1 - iVar2));
    local_20[0] = 0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    local_20[0] = 100 - local_3c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,local_20);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_38,&local_3c);
  }
  local_20[0] = 0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_38,local_20);
  local_20[0] = 0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_38,local_20);
LAB_04bd5394:
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
  SetSeniorRates(this,(vector<int,std::allocator<int>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::ShowProductUI() */

void __thiscall TransGenosisUI::ShowProductUI(TransGenosisUI *this)

{
  TGProduct *pTVar1;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x198) != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x198));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x198));
    TGProduct::SetRevise(*(TGProduct **)(this + 0x198),*(int *)(this + 400) == 2);
    pTVar1 = *(TGProduct **)(this + 0x198);
    if (this[0x12a] == (TransGenosisUI)0x0) {
      GetAvatarSelectedBoxIDs();
    }
    else {
      GetSelectedBoxIDs();
    }
    TGProduct::SetSource(pTVar1,avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    TGProduct::StartEffect(*(TGProduct **)(this + 0x198));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::OnTGResultGot(bool) */

void __thiscall TransGenosisUI::OnTGResultGot(TransGenosisUI *this,bool param_1)

{
  undefined1 auStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    ShowProductUI(this);
    if (this[0x12a] == (TransGenosisUI)0x0) {
      std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05755420,3,auStack_28);
      SetAvatarSelectBoxs(this,avStack_20,0);
      std::vector<int,std::allocator<int>>::~vector(avStack_20);
    }
    else {
      std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05755400,5,auStack_28);
      SetSelectBoxs(this,avStack_20,0);
      std::vector<int,std::allocator<int>>::~vector(avStack_20);
    }
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::InitSimpleRates() */

void __thiscall TransGenosisUI::InitSimpleRates(TransGenosisUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RateOfRares *pRVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RateOfRares *pRVar13;
  int iVar14;
  int iVar15;
  RateOfRares *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  ClearSimpleRates(this);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar15 = (int)((double)iVar5 * 1.5);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar7 = FUN_04bc5564(0x14);
  iVar5 = *(int *)(this + 0x3d0);
  iVar9 = *(int *)(this + 0x3c8);
  iVar2 = *(int *)(this + 0x3d4);
  iVar3 = *(int *)(this + 0x3cc);
  iVar8 = FUN_04bc5564(10);
  iVar8 = iVar9 + (iVar5 + (iVar7 + iVar15) * -5) / 2 + iVar8;
  iVar9 = FUN_04bc5564(0x16);
  iVar5 = (int)((double)iVar6 * 1.5) / 2;
  iVar10 = FUN_04bc5564(8);
  iVar11 = FUN_04bc5564(0x10);
  iVar12 = FUN_04bc5564(0x19);
  do {
    pRVar13 = ::operator_new(0x40);
    *(undefined4 *)pRVar13 = 0;
    *(undefined4 *)(pRVar13 + 4) = 0;
    *(undefined4 *)(pRVar13 + 8) = 0;
    *(undefined4 *)(pRVar13 + 0xc) = 0;
    *(undefined4 *)(pRVar13 + 0x10) = 0;
    *(undefined4 *)(pRVar13 + 0x14) = 0;
    *(undefined4 *)(pRVar13 + 0x18) = 0;
    *(undefined4 *)(pRVar13 + 0x1c) = 0;
    *(undefined4 *)(pRVar13 + 0x20) = 0;
    *(undefined4 *)(pRVar13 + 0x24) = 0;
    *(undefined4 *)(pRVar13 + 0x28) = 0;
    *(undefined4 *)(pRVar13 + 0x2c) = 0;
    *(undefined4 *)(pRVar13 + 0x30) = 0;
    *(undefined4 *)(pRVar13 + 0x34) = 0;
    *(undefined8 *)(pRVar13 + 0x38) = 0;
    RateOfRares::RateOfRares(pRVar13);
    *(int *)(pRVar13 + 4) = iVar14;
    iVar14 = iVar14 + 1;
    local_20 = pRVar13;
    Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar3,iVar15,(int)((double)iVar6 * 1.5));
    pRVar4 = local_20;
    *(undefined8 *)(pRVar13 + 8) = local_18;
    *(undefined8 *)(pRVar13 + 0x10) = uStack_10;
    Sexy::Insets::Insets
              ((Insets *)&local_18,(iVar15 - iVar9) / 2 + iVar8,iVar3 + iVar5,iVar9,iVar2 - iVar5);
    pRVar13 = local_20;
    iVar1 = iVar8 - iVar10;
    *(undefined8 *)(pRVar4 + 0x18) = local_18;
    *(undefined8 *)(pRVar4 + 0x20) = uStack_10;
    iVar8 = iVar8 + iVar7 + iVar15;
    Sexy::Insets::Insets((Insets *)&local_18,iVar1,(iVar3 + iVar2) - iVar7,iVar11 + iVar15,iVar12);
    *(undefined8 *)(pRVar13 + 0x28) = local_18;
    *(undefined8 *)(pRVar13 + 0x30) = uStack_10;
    *(undefined4 *)local_20 = 0;
    FUN_054772c4(local_20 + 0x38,&DAT_056f11a8);
    std::vector<RateOfRares*,std::allocator<RateOfRares*>>::push_back
              ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x220),&local_20);
  } while (iVar14 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::InitSeniorRates() */

void __thiscall TransGenosisUI::InitSeniorRates(TransGenosisUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RateOfRares *pRVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RateOfRares *pRVar13;
  int iVar14;
  int iVar15;
  RateOfRares *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  ClearSeniorRates(this);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar15 = (int)((double)iVar5 * 1.5);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b150);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar7 = FUN_04bc5564(0x14);
  iVar5 = *(int *)(this + 0x430);
  iVar9 = *(int *)(this + 0x428);
  iVar2 = *(int *)(this + 0x434);
  iVar3 = *(int *)(this + 0x42c);
  iVar8 = FUN_04bc5564(10);
  iVar8 = iVar9 + (iVar5 + (iVar7 + iVar15) * -5) / 2 + iVar8;
  iVar9 = FUN_04bc5564(0x16);
  iVar5 = (int)((double)iVar6 * 1.5) / 2;
  iVar10 = FUN_04bc5564(8);
  iVar11 = FUN_04bc5564(0x10);
  iVar12 = FUN_04bc5564(0x19);
  do {
    pRVar13 = ::operator_new(0x40);
    *(undefined4 *)pRVar13 = 0;
    *(undefined4 *)(pRVar13 + 4) = 0;
    *(undefined4 *)(pRVar13 + 8) = 0;
    *(undefined4 *)(pRVar13 + 0xc) = 0;
    *(undefined4 *)(pRVar13 + 0x10) = 0;
    *(undefined4 *)(pRVar13 + 0x14) = 0;
    *(undefined4 *)(pRVar13 + 0x18) = 0;
    *(undefined4 *)(pRVar13 + 0x1c) = 0;
    *(undefined4 *)(pRVar13 + 0x20) = 0;
    *(undefined4 *)(pRVar13 + 0x24) = 0;
    *(undefined4 *)(pRVar13 + 0x28) = 0;
    *(undefined4 *)(pRVar13 + 0x2c) = 0;
    *(undefined4 *)(pRVar13 + 0x30) = 0;
    *(undefined4 *)(pRVar13 + 0x34) = 0;
    *(undefined8 *)(pRVar13 + 0x38) = 0;
    RateOfRares::RateOfRares(pRVar13);
    *(int *)(pRVar13 + 4) = iVar14;
    iVar14 = iVar14 + 1;
    local_20 = pRVar13;
    Sexy::Insets::Insets((Insets *)&local_18,iVar8,iVar3,iVar15,(int)((double)iVar6 * 1.5));
    pRVar4 = local_20;
    *(undefined8 *)(pRVar13 + 8) = local_18;
    *(undefined8 *)(pRVar13 + 0x10) = uStack_10;
    Sexy::Insets::Insets
              ((Insets *)&local_18,(iVar15 - iVar9) / 2 + iVar8,iVar3 + iVar5,iVar9,iVar2 - iVar5);
    pRVar13 = local_20;
    iVar1 = iVar8 - iVar10;
    *(undefined8 *)(pRVar4 + 0x18) = local_18;
    *(undefined8 *)(pRVar4 + 0x20) = uStack_10;
    iVar8 = iVar8 + iVar7 + iVar15;
    Sexy::Insets::Insets((Insets *)&local_18,iVar1,(iVar3 + iVar2) - iVar7,iVar11 + iVar15,iVar12);
    *(undefined8 *)(pRVar13 + 0x28) = local_18;
    *(undefined8 *)(pRVar13 + 0x30) = uStack_10;
    *(undefined4 *)local_20 = 0;
    FUN_054772c4(local_20 + 0x38,&DAT_056f11a8);
    std::vector<RateOfRares*,std::allocator<RateOfRares*>>::push_back
              ((vector<RateOfRares*,std::allocator<RateOfRares*>> *)(this + 0x238),&local_20);
  } while (iVar14 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::InitSelectBoxs() */

void __thiscall TransGenosisUI::InitSelectBoxs(TransGenosisUI *this)

{
  vector<SelectBox*,std::allocator<SelectBox*>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SelectBox *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  SelectBox *pSVar12;
  SelectBox *pSVar13;
  SelectBox *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar11 = 0;
  ClearSelectBoxs(this);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar9 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar3 = *(int *)(this + 0x2f0);
  iVar1 = *(int *)(this + 0x2ec) + (*(int *)(this + 0x2f4) - iVar9) / 2;
  iVar10 = FUN_04bc5564(0x28);
  iVar4 = iVar8 / 5;
  iVar5 = (iVar9 * 3) / 5;
  iVar2 = *(int *)(this + 0x2e8) + (iVar3 + iVar8 * -5 + iVar10 * -4) / 2;
  iVar6 = (iVar8 * 3) / 5;
  iVar3 = iVar1 + iVar9 / 5;
  while( true ) {
    pSVar12 = ::operator_new(0x24);
    *(undefined4 *)pSVar12 = 0;
    *(undefined4 *)(pSVar12 + 4) = 0;
    *(undefined4 *)(pSVar12 + 8) = 0;
    *(undefined4 *)(pSVar12 + 0xc) = 0;
    *(undefined4 *)(pSVar12 + 0x10) = 0;
    *(undefined4 *)(pSVar12 + 0x14) = 0;
    *(undefined4 *)(pSVar12 + 0x18) = 0;
    *(undefined4 *)(pSVar12 + 0x1c) = 0;
    *(undefined4 *)(pSVar12 + 0x20) = 0;
    iVar10 = iVar2 + (iVar8 + iVar10) * iVar11;
    SelectBox::SelectBox(pSVar12);
    *(undefined4 *)pSVar12 = 0;
    iVar11 = iVar11 + 1;
    local_20 = pSVar12;
    Sexy::Insets::Insets((Insets *)&local_18,iVar10,iVar1,iVar8,iVar9);
    pSVar7 = local_20;
    pSVar13 = local_20 + 0x14;
    *(undefined8 *)(pSVar12 + 4) = local_18;
    *(undefined8 *)(pSVar12 + 0xc) = uStack_10;
    Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar10,iVar3,iVar6,iVar5);
    *(undefined8 *)pSVar13 = local_18;
    *(undefined8 *)(pSVar7 + 0x1c) = uStack_10;
    std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back
              ((vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x1f0),&local_20);
    if (iVar11 == 5) break;
    iVar10 = FUN_04bc5564(0x28);
  }
  this_00 = (vector<SelectBox*,std::allocator<SelectBox*>> *)(this + 0x208);
  pSVar12 = ::operator_new(0x24);
  *(undefined4 *)pSVar12 = 0;
  *(undefined4 *)(pSVar12 + 4) = 0;
  *(undefined4 *)(pSVar12 + 8) = 0;
  *(undefined4 *)(pSVar12 + 0xc) = 0;
  *(undefined4 *)(pSVar12 + 0x10) = 0;
  *(undefined4 *)(pSVar12 + 0x14) = 0;
  *(undefined4 *)(pSVar12 + 0x18) = 0;
  *(undefined4 *)(pSVar12 + 0x1c) = 0;
  *(undefined4 *)(pSVar12 + 0x20) = 0;
  SelectBox::SelectBox(pSVar12);
  *(undefined4 *)pSVar12 = 0;
  local_20 = pSVar12;
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar1,iVar8,iVar9);
  pSVar7 = local_20;
  pSVar13 = local_20 + 0x14;
  *(undefined8 *)(pSVar12 + 4) = local_18;
  *(undefined8 *)(pSVar12 + 0xc) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar3,iVar6,iVar5);
  *(undefined8 *)pSVar13 = local_18;
  *(undefined8 *)(pSVar7 + 0x1c) = uStack_10;
  std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back(this_00,&local_20);
  iVar11 = FUN_04bc5564(0x28);
  iVar11 = iVar2 + (iVar11 + iVar8) * 2;
  pSVar13 = ::operator_new(0x24);
  *(undefined4 *)pSVar13 = 0;
  *(undefined4 *)(pSVar13 + 4) = 0;
  *(undefined4 *)(pSVar13 + 8) = 0;
  *(undefined4 *)(pSVar13 + 0xc) = 0;
  *(undefined4 *)(pSVar13 + 0x10) = 0;
  *(undefined4 *)(pSVar13 + 0x14) = 0;
  *(undefined4 *)(pSVar13 + 0x18) = 0;
  *(undefined4 *)(pSVar13 + 0x1c) = 0;
  *(undefined4 *)(pSVar13 + 0x20) = 0;
  SelectBox::SelectBox(pSVar13);
  *(undefined4 *)pSVar13 = 0;
  local_20 = pSVar13;
  Sexy::Insets::Insets((Insets *)&local_18,iVar11,iVar1,iVar8,iVar9);
  pSVar7 = local_20;
  *(undefined8 *)(pSVar13 + 4) = local_18;
  *(undefined8 *)(pSVar13 + 0xc) = uStack_10;
  pSVar13 = local_20 + 0x14;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar11,iVar3,iVar6,iVar5);
  *(undefined8 *)pSVar13 = local_18;
  *(undefined8 *)(pSVar7 + 0x1c) = uStack_10;
  std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back(this_00,&local_20);
  iVar11 = FUN_04bc5564(0x28);
  iVar2 = iVar2 + (iVar11 + iVar8) * 4;
  pSVar12 = ::operator_new(0x24);
  *(undefined4 *)pSVar12 = 0;
  *(undefined4 *)(pSVar12 + 4) = 0;
  *(undefined4 *)(pSVar12 + 8) = 0;
  *(undefined4 *)(pSVar12 + 0xc) = 0;
  *(undefined4 *)(pSVar12 + 0x10) = 0;
  *(undefined4 *)(pSVar12 + 0x14) = 0;
  *(undefined4 *)(pSVar12 + 0x18) = 0;
  *(undefined4 *)(pSVar12 + 0x1c) = 0;
  *(undefined4 *)(pSVar12 + 0x20) = 0;
  SelectBox::SelectBox(pSVar12);
  *(undefined4 *)pSVar12 = 0;
  local_20 = pSVar12;
  Sexy::Insets::Insets((Insets *)&local_18,iVar2,iVar1,iVar8,iVar9);
  pSVar7 = local_20;
  pSVar13 = local_20 + 0x14;
  *(undefined8 *)(pSVar12 + 4) = local_18;
  *(undefined8 *)(pSVar12 + 0xc) = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar2,iVar3,iVar6,iVar5);
  *(undefined8 *)pSVar13 = local_18;
  *(undefined8 *)(pSVar7 + 0x1c) = uStack_10;
  std::vector<SelectBox*,std::allocator<SelectBox*>>::push_back(this_00,&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::InitView() */

void __thiscall TransGenosisUI::InitView(TransGenosisUI *this)

{
  TransGenosisUI *pTVar1;
  char cVar2;
  char cVar3;
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
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  LotteryResultProgressBar *pLVar24;
  SalesProgressBar *pSVar25;
  long *plVar26;
  ADManager *pAVar27;
  TGButton *pTVar28;
  PVZ2UIButton *pPVar29;
  code *pcVar30;
  int iVar31;
  float fVar32;
  double dVar33;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8 [2];
  int local_b0;
  Insets aIStack_a8 [16];
  int local_98;
  undefined1 auStack_88 [8];
  int local_80;
  PVZ2UIImage aPStack_78 [4];
  int local_74;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  pTVar1 = this + 0x2f8;
  local_8 = ___stack_chk_guard;
  InitTutorialState();
  EffectAnim_UIAnim::SafeRelease((EffectAnim_UIAnim *)(this + 0x448));
  this[0x59] = (TransGenosisUI)0x0;
  *(undefined4 *)(this + 400) = 0;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b008);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b008);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar23 = (iVar5 << 1) / 3;
  iVar6 = FUN_04bc5564(0x2ee);
  iVar7 = FUN_04bc5564(0x24e);
  iVar22 = iVar7 - iVar23;
  iVar21 = *(int *)(this + 0x50) - iVar6 >> 1;
  iVar9 = *(int *)(this + 0x54) - iVar7 >> 1;
  iVar23 = iVar9 + iVar23;
  iVar7 = iVar21 + iVar6 / 2;
  iVar10 = iVar7 - iVar4 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar21,iVar23,iVar6,iVar22);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_40,iVar10,iVar9,iVar4,iVar5);
  *(undefined8 *)(this + 0x268) = local_40;
  *(undefined8 *)(this + 0x270) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar10,iVar9,iVar4,(iVar5 * 5) / 6);
  *(undefined8 *)(this + 0x278) = local_40;
  *(undefined8 *)(this + 0x280) = local_38;
  iVar5 = FUN_04bc5564(0xb4);
  iVar8 = FUN_04bc5564(0x1e);
  iVar9 = FUN_04bc5564(8);
  iVar9 = iVar9 + iVar8;
  iVar10 = FUN_04bc5564(0xf);
  iVar4 = ((iVar7 - iVar10) - iVar5) + iVar5 / 2;
  iVar7 = iVar5 / 2 + iVar7 + iVar10 + iVar9 / 2;
  iVar10 = FUN_04bc5564(0x23);
  iVar10 = iVar10 + iVar23;
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar10,iVar5,iVar8);
  *(undefined8 *)(this + 0x2b8) = local_40;
  *(undefined8 *)(this + 0x2c0) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar10,iVar5,iVar8);
  iVar5 = -(iVar9 / 2);
  iVar4 = iVar5 + iVar4;
  *(undefined8 *)(this + 0x2c8) = local_40;
  *(undefined8 *)(this + 0x2d0) = local_38;
  iVar8 = FUN_04bc5564(3);
  iVar11 = FUN_04bc5564(4);
  iVar10 = iVar10 - iVar11;
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar10,iVar9,iVar9);
  *(undefined8 *)(this + 0x298) = local_40;
  *(undefined8 *)(this + 0x2a0) = local_38;
  iVar11 = FUN_04bc5564(3);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 + iVar5 + iVar8,iVar10 - iVar11,iVar9,iVar9);
  *(undefined8 *)(this + 0x2a8) = local_40;
  *(undefined8 *)(this + 0x2b0) = local_38;
  iVar5 = FUN_04bc5564(0x14);
  iVar11 = FUN_04bc5564(0x50);
  iVar8 = iVar6 + iVar5 * -4;
  iVar7 = iVar21 + iVar5 * 2;
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar7,iVar11 + iVar23,iVar8,
             (int)(((double)iVar22 - (double)iVar5 * 1.5) - (double)iVar11));
  *(undefined8 *)(this + 0x2d8) = local_40;
  *(undefined8 *)(this + 0x2e0) = local_38;
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8b178);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar5 = FUN_04bc5564(6);
  iVar5 = iVar12 + iVar5 * 2;
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aad0);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar25);
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar15 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af10);
  iVar16 = SalesProgressBar::GetCurrentLevel(pSVar25);
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afb0);
  iVar17 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afb0);
  iVar18 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar22 = ((iVar8 - iVar17) - iVar5) / 2;
  iVar19 = FUN_04bc5564(0x14);
  dVar33 = (double)FUN_04bc5590(0x3ff4cccccccccccd);
  iVar31 = (int)((double)(iVar7 + iVar22) - dVar33);
  iVar7 = FUN_04bc5564(5);
  iVar7 = (iVar11 + iVar23 + iVar19) - iVar7;
  iVar19 = FUN_04bc5564(6);
  dVar33 = (double)FUN_04bc5590(0x3ffb333333333333);
  iVar11 = FUN_04bc5564(1);
  iVar11 = (iVar7 + iVar19) - iVar11;
  Sexy::Insets::Insets((Insets *)&local_40,iVar31,iVar7,iVar5,iVar14);
  *(undefined8 *)(this + 0x2e8) = local_40;
  *(undefined8 *)(this + 0x2f0) = local_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)((double)(iVar19 + iVar31) + dVar33),iVar11,iVar12,iVar13);
  plVar26 = *(long **)(this + 0x490);
  *(undefined8 *)pTVar1 = local_40;
  *(undefined8 *)(this + 0x300) = local_38;
  if (plVar26 == (long *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x65,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x490) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    plVar26 = *(long **)(this + 0x490);
    if (plVar26 != (long *)0x0) goto LAB_04bd7b98;
  }
  else {
LAB_04bd7b98:
    (**(code **)(*plVar26 + 0x1a0))(plVar26,pTVar1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x490));
  }
  plVar26 = *(long **)(this + 0x498);
  if (plVar26 == (long *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x71,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x498) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    plVar26 = *(long **)(this + 0x498);
    if (plVar26 != (long *)0x0) goto LAB_04bd7bc4;
  }
  else {
LAB_04bd7bc4:
    (**(code **)(*plVar26 + 0x1a0))(plVar26,pTVar1);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x498));
    (**(code **)(**(long **)(this + 0x498) + 0x158))(*(long **)(this + 0x498),0);
  }
  pPVar29 = *(PVZ2UIButton **)(this + 0x478);
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x6c,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x478) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x478);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd7c08;
  }
  else {
LAB_04bd7c08:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8b388,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b388,3);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    plVar26 = *(long **)(this + 0x478);
    pcVar30 = *(code **)(*plVar26 + 0x1a0);
    iVar12 = FUN_04bc5564(200);
    iVar19 = FUN_04bc5564(10);
    iVar20 = FUN_04bc5564(0x5a);
    Sexy::Insets::Insets((Insets *)&local_40,iVar4 - iVar12,iVar19 + iVar10,iVar20,iVar9);
    (*pcVar30)(plVar26,(Insets *)&local_40);
    pPVar29 = *(PVZ2UIButton **)(this + 0x478);
    TodStringTranslate(L"[TRANS_GENOSIS_PLANT]");
    PVZ2UIButton::SetLabelText(pPVar29,(wstring *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x478));
  }
  pPVar29 = *(PVZ2UIButton **)(this + 0x480);
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x6d,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x480) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x480);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd7d08;
  }
  else {
LAB_04bd7d08:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8ae50,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ae50,3);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    plVar26 = *(long **)(this + 0x480);
    pcVar30 = *(code **)(*plVar26 + 0x1a0);
    iVar12 = FUN_04bc5564(0x6e);
    iVar19 = FUN_04bc5564(10);
    iVar20 = FUN_04bc5564(0x5a);
    Sexy::Insets::Insets((Insets *)&local_40,iVar4 - iVar12,iVar19 + iVar10,iVar20,iVar9);
    (*pcVar30)(plVar26,(Insets *)&local_40);
    pPVar29 = *(PVZ2UIButton **)(this + 0x480);
    TodStringTranslate(L"[TRANS_GENOSIS_AVATAR]");
    PVZ2UIButton::SetLabelText(pPVar29,(wstring *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x480));
  }
  pPVar29 = *(PVZ2UIButton **)(this + 0x488);
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x6e,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x488) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x488);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd7dfc;
  }
  else {
LAB_04bd7dfc:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8b3d8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b3d8,3);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    plVar26 = *(long **)(this + 0x488);
    iVar9 = *(int *)(this + 0x2d0);
    iVar10 = *(int *)(this + 0x2c8);
    pcVar30 = *(code **)(*plVar26 + 0x1a0);
    iVar4 = FUN_04bc5564(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar10 + iVar9 + iVar4,*(int *)(this + 0x2cc),
               *(int *)(this + 0x2d4),*(int *)(this + 0x2d4));
    (*pcVar30)(plVar26,(Insets *)&local_40);
    (**(code **)(**(long **)(this + 0x488) + 0x158))(*(long **)(this + 0x488),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x488));
  }
  iVar9 = FUN_04bc5564(5);
  iVar9 = (iVar31 + iVar5) - iVar9;
  iVar10 = FUN_04bc5564(1);
  iVar10 = (iVar11 + (iVar13 - iVar16) / 2) - iVar10;
  Sexy::Insets::Insets((Insets *)&local_40,iVar9,iVar10,iVar15,iVar16);
  *(undefined8 *)(this + 0x358) = local_40;
  *(undefined8 *)(this + 0x360) = local_38;
  iVar4 = FUN_04bc5564(2);
  Sexy::Insets::Insets((Insets *)&local_40,iVar9,iVar10,iVar15,iVar16 / 2 - iVar4);
  *(undefined8 *)(this + 0x338) = local_40;
  *(undefined8 *)(this + 0x340) = local_38;
  iVar9 = *(int *)(this + 0x344);
  iVar10 = *(int *)(this + 0x33c);
  iVar4 = FUN_04bc5564(4);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x338),iVar9 + iVar10 + iVar4,
             *(int *)(this + 0x340),iVar9);
  *(undefined8 *)(this + 0x348) = local_40;
  *(undefined8 *)(this + 0x350) = local_38;
  iVar9 = FUN_04bc5564(1);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar31 + iVar5,(iVar11 + (iVar13 - iVar18) / 2) - iVar9,iVar17,
             iVar18);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4a0);
  *(undefined8 *)(this + 0x328) = local_40;
  *(undefined8 *)(this + 0x330) = local_38;
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x66,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x4a0) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x4a0);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd7ff8;
  }
  else {
LAB_04bd7ff8:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8b038,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8aaa8,2);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x4a0) + 0x1a0))(*(long **)(this + 0x4a0),this + 0x338);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4a0));
  }
  pPVar29 = *(PVZ2UIButton **)(this + 0x4a8);
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x74,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x4a8) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x4a8);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd8064;
  }
  else {
LAB_04bd8064:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8ae00,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8af38,2);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x4a8) + 0x1a0))(*(long **)(this + 0x4a8),this + 0x348);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4a8));
  }
  pPVar29 = *(PVZ2UIButton **)(this + 0x4b0);
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x72,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x4b0) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x4b0);
    if (pPVar29 != (PVZ2UIButton *)0x0) goto LAB_04bd80d0;
  }
  else {
LAB_04bd80d0:
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8af10,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ab80,3);
    PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x4b0) + 0x1a0))(*(long **)(this + 0x4b0),this + 0x358);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4b0));
    (**(code **)(**(long **)(this + 0x4b0) + 0x158))(*(long **)(this + 0x4b0),0);
  }
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aa80);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aa80);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar21 = iVar21 + (iVar6 - iVar10) / 2;
  iVar9 = FUN_04bc5564(0xc);
  iVar9 = (iVar7 + iVar14) - iVar9;
  Sexy::Insets::Insets((Insets *)&local_40,iVar21,iVar9,iVar10,iVar4);
  *(undefined8 *)(this + 0x368) = local_40;
  *(undefined8 *)(this + 0x370) = local_38;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_c0,(float)iVar21 + (float)iVar10 * 0.5,
             (float)iVar9 + (float)iVar4 * 0.275);
  std::string::string((string *)&local_40,"POPANIM_EFFECTS_TRANSGENOSIS_CORE");
  EffectAnim_UIAnim::InitUIAnim
            (0x3f47ae14,local_c0,local_bc,(EffectAnim_UIAnim *)(this + 0x448),(Insets *)&local_40,1)
  ;
  std::string::~string((string *)&local_40);
  nop();
  fVar32 = (float)FUN_04bc5578();
  iVar11 = (int)(((float)iVar8 - fVar32) * 0.5 - (float)iVar22);
  iVar9 = FUN_04bc5564(0xf5);
  iVar23 = iVar23 + iVar9;
  iVar10 = FUN_04bc5564(0xd2);
  iVar7 = FUN_04bc5564(3);
  iVar6 = (int)((float)iVar7 + fVar32 + (float)(iVar31 + iVar11));
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af88);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8af88);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar5 = FUN_04bc5564(0xffffffe7);
  iVar21 = FUN_04bc5564(2);
  Sexy::Insets::Insets((Insets *)&local_40,iVar31 + iVar21,iVar5 + iVar23,iVar7,iVar4);
  *(undefined8 *)(this + 0x308) = local_40;
  *(undefined8 *)(this + 0x310) = local_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,((iVar6 + iVar11) - iVar7) - iVar21,iVar5 + iVar23,iVar7,iVar4);
  *(undefined8 *)(this + 0x318) = local_40;
  *(undefined8 *)(this + 800) = local_38;
  iVar4 = FUN_04bc5564(0x40);
  iVar7 = iVar23 + iVar4;
  Sexy::Insets::Insets((Insets *)&local_40,iVar31,iVar23,iVar11,iVar4);
  *(undefined8 *)(this + 0x378) = local_40;
  *(undefined8 *)(this + 0x380) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar23,iVar11,iVar4);
  *(undefined8 *)(this + 0x3d8) = local_40;
  *(undefined8 *)(this + 0x3e0) = local_38;
  iVar5 = FUN_04bc5564(6);
  iVar21 = FUN_04bc5564(2);
  iVar22 = FUN_04bc5564(0x1a);
  iVar8 = FUN_04bc5564(4);
  Sexy::Insets::Insets((Insets *)&local_40,iVar31 + iVar5,iVar7,iVar11 - iVar8,iVar22);
  *(undefined8 *)(this + 0x388) = local_40;
  *(undefined8 *)(this + 0x390) = local_38;
  iVar5 = FUN_04bc5564(4);
  Sexy::Insets::Insets((Insets *)&local_40,iVar21 + iVar6,iVar7,iVar11 - iVar5,iVar22);
  *(undefined8 *)(this + 1000) = local_40;
  *(undefined8 *)(this + 0x3f0) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar31,iVar23,iVar11,iVar9);
  *(undefined8 *)(this + 0x3a8) = local_40;
  *(undefined8 *)(this + 0x3b0) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar23,iVar11,iVar9);
  *(undefined8 *)(this + 0x408) = local_40;
  *(undefined8 *)(this + 0x410) = local_38;
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8afd8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar25);
  iVar21 = FUN_04bc5564(1);
  pAVar27 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  iVar9 = (iVar23 + iVar9) - iVar5;
  cVar2 = ADManager::CanWatchAD(pAVar27,0x14);
  pAVar27 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  cVar3 = ADManager::CanWatchAD(pAVar27,0x15);
  if (cVar2 == '\0') {
    iVar8 = FUN_04bc5564(3);
    iVar21 = (iVar21 + iVar11) - iVar8;
    iVar23 = iVar21;
  }
  else {
    iVar8 = FUN_04bc5564(3);
    iVar23 = (iVar21 + iVar11) - iVar8;
    iVar21 = iVar23 / 2;
  }
  iVar12 = iVar23;
  if (cVar3 != '\0') {
    iVar12 = iVar23 / 2;
  }
  pTVar1 = this + 0x3b8;
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 + iVar31,iVar9,iVar23,iVar5);
  *(undefined8 *)pTVar1 = local_40;
  *(undefined8 *)(this + 0x3c0) = local_38;
  iVar23 = FUN_04bc5564(3);
  Sexy::Insets::Insets((Insets *)&local_40,iVar23 + iVar6,iVar9,iVar21,iVar5);
  *(undefined8 *)(this + 0x418) = local_40;
  *(undefined8 *)(this + 0x420) = local_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x420) + (int)local_40,iVar9,iVar21,iVar5);
  *(undefined8 *)(this + 0x438) = local_40;
  *(undefined8 *)(this + 0x440) = local_38;
  iVar21 = FUN_04bc5564(3);
  Sexy::Insets::Insets((Insets *)local_b8,iVar21 + iVar6,iVar9,iVar12,iVar5);
  Sexy::Insets::Insets(aIStack_a8,local_b8[0] + local_b0,iVar9,iVar12,iVar5);
  pTVar28 = *(TGButton **)(this + 0x4b8);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x67,this + 0x120,1,*(undefined4 *)(this + 0x148));
    *(TGButton **)(this + 0x4b8) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4b8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4b8) + 0x1a0))(*(long **)(this + 0x4b8),pTVar1);
  TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4b8),(bool)this[0x129]);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4b8));
  pTVar28 = *(TGButton **)(this + 0x4c0);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x68,this + 0x120,2,*(undefined4 *)(this + 0x144));
    *(TGButton **)(this + 0x4c0) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4c0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8af60,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b1d8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4c0) + 0x1a0))(*(long **)(this + 0x4c0),this + 0x418);
  TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4c0),(bool)this[0x129]);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4c0));
  pTVar28 = *(TGButton **)(this + 0x4c8);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x6f,this + 0x120,1,1000);
    *(TGButton **)(this + 0x4c8) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4c8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4c8) + 0x1a0))(*(long **)(this + 0x4c8),pTVar1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4c8));
  (**(code **)(**(long **)(this + 0x4c8) + 0x158))(*(long **)(this + 0x4c8),0);
  pTVar28 = *(TGButton **)(this + 0x4d0);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x70,this + 0x120,2,10);
    *(TGButton **)(this + 0x4d0) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4d0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8af60,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b1d8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4d0) + 0x1a0))(*(long **)(this + 0x4d0),(Insets *)local_b8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4d0));
  (**(code **)(**(long **)(this + 0x4d0) + 0x158))(*(long **)(this + 0x4d0),0);
  pTVar28 = *(TGButton **)(this + 0x4e0);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x69,this + 0x120,4,0);
    *(TGButton **)(this + 0x4e0) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4e0);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4e0) + 0x1a0))(*(long **)(this + 0x4e0),this + 0x438);
  TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4e0),false);
  (**(code **)(**(long **)(this + 0x4e0) + 0x158))(*(long **)(this + 0x4e0),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4e0));
  pTVar28 = *(TGButton **)(this + 0x4e8);
  if (pTVar28 == (TGButton *)0x0) {
    pTVar28 = ::operator_new(0x360);
    TGButton::TGButton(pTVar28,0x73,this + 0x120,5,0);
    *(TGButton **)(this + 0x4e8) = pTVar28;
  }
  TGButton::InitView(pTVar28);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4e8);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8afd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8add8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4e8) + 0x1a0))(*(long **)(this + 0x4e8),aIStack_a8);
  TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4e8),false);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4e8));
  (**(code **)(**(long **)(this + 0x4e8) + 0x158))(*(long **)(this + 0x4e8),0);
  iVar9 = FUN_04bc5564(5);
  iVar9 = iVar7 + iVar22 + iVar9;
  iVar7 = FUN_04bc5564(0x3c);
  iVar7 = ((iVar10 - iVar4) - iVar22) - iVar7;
  Sexy::Insets::Insets((Insets *)&local_40,iVar31,iVar9,iVar11,iVar7);
  *(undefined8 *)(this + 0x3c8) = local_40;
  *(undefined8 *)(this + 0x3d0) = local_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar9,iVar11,iVar7);
  *(undefined8 *)(this + 0x428) = local_40;
  *(undefined8 *)(this + 0x430) = local_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x3c8),*(int *)(this + 0x3cc),
             *(int *)(this + 0x3d0),*(int *)(this + 0x3d4));
  *(undefined8 *)(this + 0x398) = local_40;
  *(undefined8 *)(this + 0x3a0) = local_38;
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x428),*(int *)(this + 0x42c),
             *(int *)(this + 0x430),*(int *)(this + 0x434));
  *(undefined8 *)(this + 0x3f8) = local_40;
  *(undefined8 *)(this + 0x400) = local_38;
  pLVar24 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ae28);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar24);
  pSVar25 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ae28);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar25);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar10 = FUN_04bc5564(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar4 = FUN_04bc5564(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar7 / 2) + iVar10,
             (local_74 - iVar9 / 2) + iVar4,iVar7,iVar9);
  pPVar29 = *(PVZ2UIButton **)(this + 0x4d8);
  *(undefined8 *)(this + 0x288) = local_40;
  *(undefined8 *)(this + 0x290) = local_38;
  if (pPVar29 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar29 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar29,0x6a,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,
               (Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x4d8) = pPVar29;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar29 = *(PVZ2UIButton **)(this + 0x4d8);
    if (pPVar29 == (PVZ2UIButton *)0x0) goto LAB_04bd8b70;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8ae28,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8b4b8,3);
  PVZ2UIButton::SetDialogStates(pPVar29,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x4d8) + 0x1a0))(*(long **)(this + 0x4d8),this + 0x288);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x4d8));
LAB_04bd8b70:
  InitSelectBoxs(this);
  InitSimpleRates(this);
  InitSeniorRates(this);
  TodStringTranslate(L"[TRANS_GENOSIS_TITLE]");
  FUN_054766c8(this + 0x1a0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[TRANS_GENOSIS_RATE]");
  FUN_054766c8(this + 0x1b8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[TRANS_GENOSIS_SIMPLE]");
  FUN_054766c8(this + 0x1a8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[TRANS_GENOSIS_SENIOR]");
  FUN_054766c8(this + 0x1b0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[TRANS_GENOSIS_AVATAR_SIMPLE_DES]");
  FUN_054766c8(this + 0x1c0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[TRANS_GENOSIS_AVATAR_SENIOR_DES]");
  FUN_054766c8(this + 0x1c8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  (**(code **)(*(long *)this + 0x318))(this);
  this[0x128] = (TransGenosisUI)0x1;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::ShowWindow() */

void __thiscall TransGenosisUI::ShowWindow(TransGenosisUI *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  TGALogMgr *pTVar5;
  TGATourismOctoberData aTStack_98 [72];
  TGALogTransGenosisData aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::RefreshTransGenosisUI(gLawnApp);
  lVar3 = FUN_04bc4860(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
  if (lVar3 == 0) {
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x158),(vector *)&DAT_06b8acf8);
  }
  lVar3 = FUN_04bc4860(*(undefined8 *)(this + 0x170),*(undefined8 *)(this + 0x178));
  if (lVar3 == 0) {
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + 0x170),(vector *)&DAT_06b8ac30);
  }
  cVar1 = LawnApp::IsTransGenosisUIValid(gLawnApp);
  if (cVar1 != '\0') {
    InitView(this);
    uVar4 = operator|(0x10,0x20);
    uVar4 = operator|(uVar4,0x1000);
    uVar2 = operator|(uVar4,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,this,uVar2);
    (**(code **)(*(long *)this + 0x310))(this);
    MessageRouter::Post<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::JoinActivity,"Plant_Crafting");
    TGATourismOctoberData::TGATourismOctoberData(aTStack_98);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogTransGenosisData::TGALogTransGenosisData(aTStack_50,(TGALogTransGenosisData *)aTStack_98);
    TGALogMgr::LogTransGenosis(pTVar5,1,aTStack_50);
    TGALogTransGenosisData::~TGALogTransGenosisData(aTStack_50);
    TGALogTransGenosisData::~TGALogTransGenosisData((TGALogTransGenosisData *)aTStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::AddTGProducts(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void __thiscall TransGenosisUI::AddTGProducts(TransGenosisUI *this,vector *param_2)

{
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *this_00;
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [3];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x198) == 0) && (CreateTGProducts(this), *(long *)(this + 0x198) == 0))
  goto LAB_04bdb27c;
  this_00 = (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x250);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=(this_00,param_2);
  uVar7 = *(undefined8 *)(this + 0x198);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38,param_2);
  TGProduct::AddTGProducts
            (uVar7,(vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38,this[0x129]);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38);
  if (this[0x129] != (TransGenosisUI)0x0) goto LAB_04bdb27c;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar3) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    local_80[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)amStack_68);
    local_38[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )amStack_68,piVar4);
    bVar3 = eastl::operator!=((rbtree_iterator *)local_80,(rbtree_iterator *)local_38);
    if (bVar3) {
      piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,piVar4);
      *piVar5 = *piVar5 + piVar4[1];
    }
    else {
      piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,piVar4);
      *piVar5 = piVar4[1];
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_90);
  }
  if (*(int *)(this + 400) == 1) {
    piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_68,&NameMapperBase::CoinServerID);
    *piVar4 = -*(int *)(this + 0x148);
    if (this[0x12a] == (TransGenosisUI)0x0) goto LAB_04bdb3a8;
LAB_04bdb458:
    GetSelectedBoxIDs();
  }
  else {
    if (*(int *)(this + 400) == 2) {
      piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,&NameMapperBase::GemServerID);
      *piVar4 = -*(int *)(this + 0x144);
    }
    if (this[0x12a] != (TransGenosisUI)0x0) goto LAB_04bdb458;
LAB_04bdb3a8:
    GetAvatarSelectedBoxIDs();
  }
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_80);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90),
        puVar2 = gMessageRouter, bVar3) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    local_88 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_68);
    local_38[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )amStack_68,piVar4);
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_88,(rbtree_iterator *)local_38);
    if (bVar3) {
      piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_68,piVar4);
      *piVar4 = *piVar4 + -1;
    }
    else {
      puVar6 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_68,piVar4);
      *puVar6 = 0xffffffff;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_98);
  }
  iVar1 = *(int *)(this + 400);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_38,
             (map *)amStack_68);
  MessageRouter::
  Post<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
            ((MessageRouter *)puVar2,Message::TGCraft,iVar1 + -1,
             (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_38);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
LAB_04bdb27c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::SimpleTrans() */

void __thiscall TransGenosisUI::SimpleTrans(TransGenosisUI *this)

{
  int iVar1;
  long *plVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  HintUI *pHVar3;
  char *pcVar4;
  undefined4 local_78;
  undefined4 local_74;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x129] == (TransGenosisUI)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumCoins(this_01,false);
    if (iVar1 < *(int *)(this + 0x148)) {
      pHVar3 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
      if (pHVar3 != (HintUI *)0x0) {
        HintUI::Default2Init(pHVar3);
        FUN_05478178((wstring *)avStack_50,L"[COIN_NOT_ENOUGH_DIALOG_TITLE]",avStack_68);
        HintUI::SetTitleString(pHVar3,(wstring *)avStack_50);
        FUN_05476c50((wstring *)avStack_50);
        nop();
        FUN_05478178((wstring *)avStack_50,L"[COIN_NOT_ENOUGH_DIALOG_TEXT]",avStack_68);
        HintUI::SetContentString(pHVar3,(wstring *)avStack_50);
        FUN_05476c50((wstring *)avStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,ShowCoinStore);
        Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>
                  (aDStack_38,(wstring *)avStack_50);
        HintUI::SetButton2PressedEvent(pHVar3,aDStack_38);
        HintUI::ShowHintUI(pHVar3);
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
      }
    }
    else {
      pHVar3 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
      if (pHVar3 != (HintUI *)0x0) {
        HintUI::Default2Init(pHVar3);
        FUN_05478178((wstring *)avStack_50,L"[TRANS_GENOSIS_PAY_ENSURE_TITLE]",avStack_68);
        HintUI::SetTitleString(pHVar3,(wstring *)avStack_50);
        FUN_05476c50((wstring *)avStack_50);
        nop();
        HintUI::SetContentString(pHVar3,(wstring *)(this + 0x1d0));
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,DoSimpleTrans);
        Sexy::Delegate0::Delegate0<TransGenosisUI,void(TransGenosisUI::*)()>
                  (aDStack_38,(wstring *)avStack_50);
        HintUI::SetButton2PressedEvent(pHVar3,aDStack_38);
        HintUI::ShowHintUI(pHVar3);
      }
    }
  }
  else {
    plVar2 = *(long **)(this + 0x4b8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x188))(plVar2,1);
    }
    *(undefined4 *)(this + 400) = 3;
    LawnApp::KillGameMaskUI(gLawnApp);
    CreateTGProducts(this);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_78);
    local_74 = 1;
    local_78 = 0x453;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_68,
               (S2C_BonusInfo *)&local_78);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              (avStack_50,(vector *)avStack_68);
    AddTGProducts(this,avStack_50);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_50);
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::TGResultGot,true);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoAvatarAutoSelect(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, int, bool&) */

void __thiscall
TransGenosisUI::DoAvatarAutoSelect(TransGenosisUI *this,map *param_1,int param_2,bool *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  HintUI *pHVar7;
  uint *puVar8;
  ProfileMgr *pPVar9;
  string *psVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auVar18 [12];
  undefined8 local_78;
  undefined8 local_70;
  string asStack_68 [8];
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [6];
  long local_8;
  
  iVar15 = 0;
  local_8 = ___stack_chk_guard;
  local_50 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        param_1);
  local_38[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_1);
LAB_04bdb818:
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)local_38);
  uVar16 = (ulong)bVar2;
  if (!bVar2) {
    *param_3 = true;
    pHVar7 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar7 == (HintUI *)0x0) {
      uVar16 = 0;
    }
    else {
      HintUI::Default1Init(pHVar7);
      FUN_05478178((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38,L"[HINT_DEFAULT_TITLE]"
                   ,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      HintUI::SetTitleString(pHVar7,(wstring *)local_38);
      FUN_05476c50((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
      nop();
      FUN_05478178((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38,
                   L"[TRANS_GENOSIS_NOTENOUGH]",
                   (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      HintUI::SetContentString(pHVar7,(wstring *)local_38);
      FUN_05476c50((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
      nop();
      HintUI::ShowHintUI(pHVar7);
    }
LAB_04bdbaa8:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar16);
    }
    return;
  }
  lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
  iVar15 = iVar15 + *(int *)(lVar6 + 4);
  if (iVar15 < 1) {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    goto LAB_04bdb818;
  }
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  local_78 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        param_1);
  local_70 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_1);
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_70), bVar2
        ) {
    puVar8 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
    uVar17 = *puVar8;
    if (0 < (int)puVar8[1]) {
      pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      auVar18 = ProfileMgr::GetCurrentProfile(pPVar9);
      NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)uVar17,auVar18._8_4_);
      cVar3 = NewAvatar::Common_GetAvatarUnlocked(uVar17);
      if ((cVar3 != '\0') &&
         (cVar3 = PlayerInfo::GetIsPlantUnlocked(auVar18._0_8_,asStack_68), cVar3 != '\0')) {
        local_60 = (ulong)uVar17;
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58)
        ;
        local_60 = CONCAT44(*(undefined4 *)(lVar6 + 0xd0),(undefined4)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50,
                   (pair *)&local_60);
      }
      std::string::~string(asStack_68);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
  }
  cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50);
  if (cVar3 != '\0') {
    local_78 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          param_1);
    local_70 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_70),
          bVar2) {
      puVar8 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78)
      ;
      uVar17 = *puVar8;
      if (0 < (int)puVar8[1]) {
        pPVar9 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        auVar18 = ProfileMgr::GetCurrentProfile(pPVar9);
        NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)uVar17,auVar18._8_4_);
        uVar5 = PlayerInfo::GetIsPlantUnlocked(auVar18._0_8_,asStack_68);
        if ((uVar5 & 0xff) == 0) {
          local_60 = CONCAT44(uVar5,uVar17) & 0xffffffffff;
          psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          local_60 = CONCAT44(*(undefined4 *)(lVar6 + 0xd0),(undefined4)local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50,
                     (pair *)&local_60);
        }
        std::string::~string(asStack_68);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
    }
  }
  cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50);
  if (cVar3 != '\0') {
    uVar17 = 0x7fffffff;
    local_60 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          param_1);
    local_58 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_60,(rbtree_iterator *)&local_58),
          bVar2) {
      lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60);
      uVar5 = *(uint *)(lVar6 + 4);
      if ((0 < (int)uVar5) && ((int)uVar5 < (int)uVar17)) {
        uVar17 = uVar5;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_60);
    }
    local_78 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          param_1);
    local_70 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_70),
          bVar2) {
      auVar18 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
      uVar5 = auVar18._0_8_[1];
      uVar1 = *auVar18._0_8_;
      if ((0 < (int)uVar5) && (uVar5 == uVar17)) {
        NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)uVar1,auVar18._8_4_);
        local_60 = (ulong)uVar1;
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58)
        ;
        local_60 = CONCAT44(*(undefined4 *)(lVar6 + 0xd0),(undefined4)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50,
                   (pair *)&local_60);
        std::string::~string(asStack_68);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
    }
  }
  cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50);
  if (cVar3 != '\0') {
    local_78 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          param_1);
    local_70 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_1);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_78,(rbtree_iterator *)&local_70),
          bVar2) {
      auVar18 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
      uVar17 = *auVar18._0_8_;
      if (0 < (int)auVar18._0_8_[1]) {
        NewAvatar::Common_GetPlantNameByAvatarPieceID((NewAvatar *)(ulong)uVar17,auVar18._8_4_);
        local_60 = (ulong)uVar17;
        psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58)
        ;
        local_60 = CONCAT44(*(undefined4 *)(lVar6 + 0xd0),(undefined4)local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50,
                   (pair *)&local_60);
        std::string::~string(asStack_68);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_78);
    }
  }
  cVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50);
  if (cVar3 == '\0') {
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    uVar12 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
    FUN_04bd214c(uVar11,uVar12);
    uVar11 = local_50;
    lVar6 = FUN_04bc49f0(local_50,0);
    iVar15 = *(int *)(lVar6 + 4);
    uVar16 = 0;
    while (uVar13 = FUN_04bc49f8(uVar11,local_48), uVar16 < uVar13) {
      piVar14 = (int *)FUN_04bc49f0(uVar11,uVar16);
      if (iVar15 != piVar14[1]) break;
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,*piVar14,1);
      uVar16 = uVar16 + 1;
      uVar11 = local_50;
    }
    uVar4 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
    local_58 = CONCAT44(local_58._4_4_,uVar4);
    piVar14 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                     operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                 *)param_1,(int *)&local_58);
    if (*piVar14 < 1) {
      local_58 = local_58 & 0xffffffff00000000;
      uVar16 = 0;
    }
    else {
      piVar14 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)param_1,(int *)&local_58);
      *piVar14 = *piVar14 + -1;
      uVar16 = local_58 & 0xffffffff;
    }
  }
  else {
    *param_3 = true;
    pHVar7 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (pHVar7 == (HintUI *)0x0) {
      uVar16 = 0;
    }
    else {
      HintUI::Default1Init(pHVar7);
      uVar16 = 0;
      FUN_05478178((wstring *)&local_58,L"[HINT_DEFAULT_TITLE]",&local_60);
      HintUI::SetTitleString(pHVar7,(wstring *)&local_58);
      FUN_05476c50((wstring *)&local_58);
      nop();
      FUN_05478178((wstring *)&local_58,L"[TRANS_GENOSIS_NOTENOUGH]",&local_60);
      HintUI::SetContentString(pHVar7,(wstring *)&local_58);
      FUN_05476c50((wstring *)&local_58);
      nop();
      HintUI::ShowHintUI(pHVar7);
    }
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_50);
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
  goto LAB_04bdbaa8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::AvatarAutoSelecting() */

void __thiscall TransGenosisUI::AvatarAutoSelecting(TransGenosisUI *this)

{
  bool bVar1;
  int iVar2;
  bool local_69;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  int local_50 [6];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  bVar1 = false;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  CalcAvatarChipsForAS(this,(map *)amStack_38);
  local_69 = false;
  do {
    if (bVar1) {
      local_50[0] = 0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_68,local_50);
    }
    else {
      local_50[0] = DoAvatarAutoSelect(this,(map *)amStack_38,iVar2,&local_69);
      bVar1 = local_50[0] == 0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_68,local_50);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 3);
  if (local_69 == false) {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)local_50,(vector *)avStack_68);
    SetAvatarSelectBoxs(this,(vector<int,std::allocator<int>> *)local_50,0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_50);
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::ButtonDepress(int) */

void __thiscall TransGenosisUI::ButtonDepress(TransGenosisUI *this,int param_1)

{
  UIFastTransGenosis *this_00;
  UIMessageBox *this_01;
  Image *pIVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  PVZ2UIButton *pPVar5;
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x65:
    if (this[0x12a] != (TransGenosisUI)0x0) {
      ShowPiecesTable(this);
    }
    break;
  case 0x66:
    AutoSelecting(this);
    break;
  case 0x67:
    SimpleTrans(this);
    break;
  case 0x68:
    SeniorTrans(this);
    break;
  case 0x69:
    ADTrans(this);
    break;
  case 0x6a:
    LawnApp::KillTransGenosisUI(gLawnApp);
    break;
  case 0x6c:
    pPVar5 = *(PVZ2UIButton **)(this + 0x478);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8b388,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8b388,3);
    PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,aPStack_40);
    pPVar5 = *(PVZ2UIButton **)(this + 0x480);
    if (pPVar5 != (PVZ2UIButton *)0x0) {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8ae50,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8ae50,3);
      PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,aPStack_40);
    }
    plVar4 = *(long **)(this + 0x488);
    uVar3 = 0;
    this[0x12a] = (TransGenosisUI)0x1;
    goto LAB_04bdc068;
  case 0x6d:
    pPVar5 = *(PVZ2UIButton **)(this + 0x478);
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8ae50,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8ae50,3);
    PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,aPStack_40);
    pPVar5 = *(PVZ2UIButton **)(this + 0x480);
    if (pPVar5 != (PVZ2UIButton *)0x0) {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b8b388,3);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8b388,3);
      PVZ2UIButton::SetDialogStates(pPVar5,aPStack_78,aPStack_40);
    }
    plVar4 = *(long **)(this + 0x488);
    uVar3 = 1;
    this[0x12a] = (TransGenosisUI)0x0;
LAB_04bdc068:
    (**(code **)(*plVar4 + 0x158))(plVar4,uVar3);
    SwitchHiden(this,(bool)this[0x12a]);
    break;
  case 0x6e:
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_01,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[TRANS_GENOSIS_TIPS]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_01,awStack_80,awStack_88);
      std::string::string((string *)aPStack_40,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage((string *)aPStack_40,false);
      UIMessageBox::SetBackground(this_01,pIVar1);
      std::string::~string((string *)aPStack_40);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_01);
      thunk_FUN_05477b9c(lVar2 + 0xd8,aPStack_78);
      FUN_05476c50(aPStack_78);
      FUN_05476c50(awStack_80);
      FUN_05476c50(awStack_88);
    }
    break;
  case 0x6f:
    AvatarSimpleTrans(this);
    break;
  case 0x70:
    AvatarSeniorTrans(this);
    break;
  case 0x71:
    if (this[0x12a] == (TransGenosisUI)0x0) {
      ShowAvatarPiecesTable();
    }
    break;
  case 0x72:
    AvatarAutoSelecting(this);
    break;
  case 0x73:
    ADAvatarTrans(this);
    break;
  case 0x74:
    this_00 = (UIFastTransGenosis *)UISingletonDialog<UIFastTransGenosis>::ShowDialog();
    UIFastTransGenosis::InitView(this_00,*(int *)(this + 0x188));
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)aPStack_40,&DAT_057553d0,5,aPStack_78);
    SetSelectBoxs(this,(vector<int,std::allocator<int>> *)aPStack_40,0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to TransGenosisUI::ButtonDepress(int) */

void __thiscall TransGenosisUI::ButtonDepress(TransGenosisUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoAutoSelect(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > >&, int, bool&) */

void __thiscall
TransGenosisUI::DoAutoSelect(TransGenosisUI *this,map *param_1,int param_2,bool *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  string *psVar8;
  HintUI *this_00;
  int iVar9;
  ulong uVar10;
  undefined8 local_98;
  undefined8 local_90;
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  ulong local_78 [2];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  local_78[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x170));
  local_38[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x170));
  iVar4 = 0;
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_78,(__normal_iterator *)local_38),
        bVar2) {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
    iVar9 = iVar4;
    if (0 < *piVar7) {
      iVar9 = iVar4 + 1;
      ProbabilitySet<RareTypes>::AddItem((ProbabilitySet<RareTypes> *)aPStack_68,iVar4);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)local_78);
    iVar4 = iVar9;
  }
  lVar6 = ProbabilitySet<RareTypes>::GetSize((ProbabilitySet<RareTypes> *)aPStack_68);
  while (lVar6 != 0) {
    iVar4 = ProbabilitySet<RareTypes>::PickItem((ProbabilitySet<RareTypes> *)aPStack_68);
    cVar3 = HasRareOf(this,param_1,iVar4);
    if (cVar3 != '\0') {
      ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
                ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
      local_98 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            param_1);
      local_90 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_1);
      while( true ) {
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
        uVar10 = (ulong)bVar2;
        if (!bVar2) break;
        piVar7 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98
                                  );
        iVar9 = *piVar7;
        iVar1 = piVar7[1];
        cVar3 = LawnApp::IsNameMapperContainsId(gLawnApp,iVar9);
        if (cVar3 != '\0') {
          LawnApp::GetNameMapperInfo((int)gLawnApp);
          FUN_05475d88(asStack_88,(exception_ptr *)local_78);
          psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
          if ((iVar1 < 1) || (*(int *)(lVar6 + 0xd0) != iVar4)) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
          }
          else {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
            ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,iVar9,1);
          }
          std::string::~string(asStack_88);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)local_78);
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
      }
      uVar5 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
      local_78[0] = CONCAT44(local_78[0]._4_4_,uVar5);
      piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)param_1,(int *)local_78);
      if (*piVar7 < 1) {
        local_78[0] = local_78[0] & 0xffffffff00000000;
      }
      else {
        piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)param_1,(int *)local_78);
        *piVar7 = *piVar7 + -1;
        uVar10 = local_78[0] & 0xffffffff;
      }
      ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
      goto LAB_04bdc844;
    }
    ProbabilitySet<RareTypes>::RemoveItem((ProbabilitySet<RareTypes> *)aPStack_68,iVar4);
    lVar6 = ProbabilitySet<RareTypes>::GetSize((ProbabilitySet<RareTypes> *)aPStack_68);
  }
  if (param_2 < *(int *)(this + 0x138)) {
    *param_3 = true;
    this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (this_00 != (HintUI *)0x0) {
      HintUI::Default1Init(this_00);
      FUN_05478178((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38,L"[HINT_DEFAULT_TITLE]"
                   ,(exception_ptr *)local_78);
      HintUI::SetTitleString(this_00,(wstring *)local_38);
      FUN_05476c50((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
      nop();
      FUN_05478178((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38,
                   L"[TRANS_GENOSIS_NOTENOUGH]",(exception_ptr *)local_78);
      HintUI::SetContentString(this_00,(wstring *)local_38);
      FUN_05476c50((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
      nop();
      HintUI::ShowHintUI(this_00);
      uVar10 = 0;
      goto LAB_04bdc844;
    }
  }
  uVar10 = 0;
LAB_04bdc844:
  ProbabilitySet<RareTypes>::~ProbabilitySet((ProbabilitySet<RareTypes> *)aPStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::DoAvatarTrans(int) */

void TransGenosisUI::DoAvatarTrans(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  TransGenosisUI *this;
  PlayerInfo *this_00;
  long lVar4;
  NameMapperBase *pNVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  uint local_20 [6];
  long local_8;
  
  this = (TransGenosisUI *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 400) == 2) {
    iVar3 = 3;
    fVar9 = (float)Sexy::Rand(1.0);
    if (fVar9 < 0.3) goto LAB_04bdceec;
    if (fVar9 < 0.6) {
      iVar3 = 2;
      goto LAB_04bdceec;
    }
  }
  iVar3 = 1;
LAB_04bdceec:
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  uVar8 = 0;
  FUN_04bc4848(this_00 + 0x350,0);
  GetAvatarSelectedBoxIDs();
  lVar4 = FUN_04bc4860(local_50,local_48);
  if (lVar4 != 0) {
    do {
      pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      piVar6 = (int *)FUN_04bc486c(local_50,uVar8);
      cVar1 = NameMapperBase::ContainsId(pNVar5,*piVar6);
      if (cVar1 == '\0') {
        pNVar5 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        piVar6 = (int *)FUN_04bc486c(local_50,uVar8);
        cVar1 = NameMapperBase::ContainsId(pNVar5,*piVar6);
        if (cVar1 != '\0') {
          piVar6 = (int *)FUN_04bc486c(local_50,uVar8);
          iVar2 = PlayerInfo::GetNewAvatarPiecesCount(this_00,*piVar6);
          if (-1 < iVar2 + -1) {
            piVar6 = (int *)FUN_04bc486c(local_50,uVar8);
            PlayerInfo::SetNewAvatarPiecesCount(this_00,*piVar6,iVar2 + -1);
          }
        }
      }
      else {
        iVar2 = AvatarChipNameMapperServerID::GetInstance();
        FUN_04bc486c(local_50,uVar8);
        NameMapperBase::GetNameForId(iVar2);
        iVar2 = PlayerInfo::GetAvatarPiecesCount(this_00,(string *)local_20,0,0);
        if (-1 < iVar2 + -1) {
          PlayerInfo::SetAvatarPieces(this_00,(string *)local_20,0,iVar2 + -1,1,1);
        }
        std::string::~string((string *)local_20);
      }
      uVar8 = uVar8 + 1;
      uVar7 = FUN_04bc4860(local_50,local_48);
    } while (uVar8 < uVar7);
  }
  iVar2 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  do {
    iVar2 = iVar2 + 1;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)local_20);
    local_20[0] = FUN_04bdca78();
    Sexy::OutputDebugStrF((wchar_t *)"TGPiece: %d",(ulong)local_20[0]);
    local_20[1] = 1;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_38,
               (S2C_BonusInfo *)local_20);
  } while (iVar2 != iVar3);
  CreateTGProducts(this);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_20,(vector *)avStack_38);
  AddTGProducts(this,(string *)local_20);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_20);
  if (*(int *)(this + 400) == 2) {
    iVar3 = PlayerInfo::GetNumGems(this_00,false);
    PlayerInfo::SetGems(this_00,iVar3 + -10);
  }
  else if (*(int *)(this + 400) == 1) {
    PlayerInfo::SubtractCoins(this_00,1000);
  }
  FUN_04bc4848(this_00 + 0x350,1);
  PlayerInfo::SAVE_PROFILE(this_00);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::TGResultGot,true);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisUI::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> > const&)
    */

void __thiscall TransGenosisUI::OnNotifyRefresh(TransGenosisUI *this,bool param_1,set *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_c4 = 0x2a1d;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (bVar2) {
      TransGenosisBlackList::TransGenosisBlackList((TransGenosisBlackList *)local_b8);
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar1 = FUN_04bc4854(local_80);
      if ((cVar1 == '\0') || (local_70 == '\0')) {
        LawnApp::ShowNetworkError(gLawnApp);
      }
      else {
        DoAvatarTrans((int)this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
      TransGenosisBlackList::~TransGenosisBlackList((TransGenosisBlackList *)local_b8);
    }
    else {
      local_c4 = 0x2980;
      local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
      local_b8[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
      cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_c0,(exception_ptr *)local_b8)
      ;
      if (cVar1 == '\0') {
        ShowWindow(this);
      }
    }
  }
  else {
    local_c4 = 0x2980;
    local_c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_c4);
    local_b8[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_c0,(exception_ptr *)local_b8);
    if (cVar1 == '\0') {
      LawnApp::ShowNetworkError(gLawnApp);
      LawnApp::KillTransGenosisUI(gLawnApp);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransGenosisUI::Update() */

void __thiscall TransGenosisUI::Update(TransGenosisUI *this)

{
  char cVar1;
  
  if (this[0x128] != (TransGenosisUI)0x0) {
    PopingWidget::Update((PopingWidget *)this);
    cVar1 = FUN_04bc47f4(this[0x115]);
    if (cVar1 == '\0') {
      cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x448));
      if (cVar1 != '\0') {
        EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x448));
      }
      UpdateSelectedValues(this);
      UpdateSimpleRates(this);
      UpdateSeniorRates(this);
      UpdateButtons(this);
    }
    if (*(TGButton **)(this + 0x4b8) != (TGButton *)0x0) {
      TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4b8),(bool)this[0x129]);
    }
    if (*(TGButton **)(this + 0x4c0) != (TGButton *)0x0) {
      TGButton::SetIsInTutorial(*(TGButton **)(this + 0x4c0),(bool)this[0x129]);
      return;
    }
  }
  return;
}

