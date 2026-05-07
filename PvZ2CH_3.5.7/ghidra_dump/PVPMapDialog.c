// Class: PVPMapDialog


/* PVPMapDialog::SetCoolDown(int) */

void __thiscall PVPMapDialog::SetCoolDown(PVPMapDialog *this,int param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  if (((lVar1 != 0) && (lVar1 < param_1)) && (fVar4 = (float)(param_1 - lVar1), 0.0 < fVar4)) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0xf8) = fVar2 + fVar4;
    return;
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::Update() */

void __thiscall PVPMapDialog::Update(PVPMapDialog *this)

{
  PopAnimRig *this_00;
  undefined8 uVar1;
  int extraout_w1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 5) {
    uVar2 = 0;
    std::string::string(asStack_10,"[PVP_MAP_BTN_CHANGE_ENEMY]");
    StringHelper::ToStringValue(asStack_10);
    std::string::~string(asStack_10);
    nop();
    fVar3 = (float)PVZ_EOT();
    fVar5 = *(float *)(this + 0xf8);
    if (fVar5 != fVar3) {
      fVar4 = (float)PVZ_T();
      if (fVar4 <= fVar5) {
        fVar5 = *(float *)(this + 0xf8);
        fVar3 = (float)PVZ_T();
        uVar2 = 1;
        StringHelper::ToTimeString((StringHelper *)0x0,fVar5 - fVar3,extraout_w1);
        FUN_05477888(auStack_18,&DAT_0573d6d0);
        uVar1 = FUN_054766ec(asStack_10);
        FUN_05477888(auStack_18,uVar1);
        FUN_05477888(auStack_18,&DAT_0573d6e0);
        FUN_05476c50(asStack_10);
      }
      else {
        *(float *)(this + 0xf8) = fVar3;
      }
    }
    (**(code **)(**(long **)(this + 0x128) + 0x188))(*(long **)(this + 0x128),uVar2);
    thunk_FUN_05477b9c(*(long *)(this + 0x128) + 0xd8,auStack_18);
    this_00 = *(PopAnimRig **)(this + 0x158);
    if (this_00 != (PopAnimRig *)0x0) {
      fVar3 = (float)PVZ_T();
      fVar5 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar3,fVar5);
    }
    FUN_05476c50(auStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::Draw(Sexy::Graphics*) */

void __thiscall PVPMapDialog::Draw(PVPMapDialog *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ResourceInfo *pRVar7;
  Image *pIVar8;
  long lVar9;
  float fVar10;
  GraphicsAutoState aGStack_38 [8];
  undefined8 local_30;
  Insets aIStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  iVar3 = FUN_04a9a734(0x32);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar3);
  if (*(int *)(this + 0xe0) == 4) {
    Sexy::Insets::Insets((Insets *)local_18,aIStack_28);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f4f0;
  }
  else {
    if (this[0x1e0] != (PVPMapDialog)0x0) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f750);
      Sexy::Graphics::DrawImage(param_1,pIVar8,0,0);
      goto LAB_04a9d8b8;
    }
    Sexy::Insets::Insets((Insets *)local_18,aIStack_28);
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f950;
  }
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  Draw9SliceImage(param_1,local_18,uVar4);
LAB_04a9d8b8:
  local_30 = std::
             map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
             ::begin((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                      *)(this + 0x160));
  while( true ) {
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x160));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
    if (!bVar1) break;
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(lVar5 + 8));
    if (cVar2 == '\0') {
      piVar6 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
      iVar3 = *piVar6;
      if (iVar3 == 400) {
        if (*(int *)(this + 0x1d0) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (float)*(int *)(this + 0x1cc) / (float)*(int *)(this + 0x1d0);
        }
        if (*(int *)(this + 0xe0) == 5) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = (float)NEON_fminnm(fVar10,0x3f800000);
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
        }
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(piVar6 + 2));
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar7,*(int *)(lVar5 + 0x10),*(int *)(lVar5 + 0x14),
                   (int)(fVar10 * (float)*(int *)(lVar5 + 0x18)),*(int *)(lVar5 + 0x1c));
      }
      else if (iVar3 == 600) {
        if (*(int *)(this + 0x1c4) < 1) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (float)*(int *)(this + 0x1c0) / (float)*(int *)(this + 0x1c4);
        }
        if (*(int *)(this + 0xe0) == 5) {
          fVar10 = 1.0;
        }
        else {
          fVar10 = (float)NEON_fminnm(fVar10,0x3f800000);
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
        }
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(piVar6 + 2));
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar7,*(int *)(lVar5 + 0x10),*(int *)(lVar5 + 0x14),
                   (int)(fVar10 * (float)*(int *)(lVar5 + 0x18)),*(int *)(lVar5 + 0x1c));
      }
      else if ((*(int *)(this + 0xe0) == 4) && (iVar3 == 0x5a)) {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(piVar6 + 2));
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar7,*(int *)(lVar5 + 0x10),*(int *)(lVar5 + 0x14),
                   *(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x1c));
      }
      else {
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(piVar6 + 2));
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar7,*(int *)(lVar5 + 0x10),*(int *)(lVar5 + 0x14));
      }
    }
    FUN_04a9a310((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  local_30 = std::
             map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
             ::begin((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                      *)(this + 400));
  while( true ) {
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 400));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
    if (!bVar1) break;
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)(lVar5 + 0x18));
    lVar9 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    WriteWordInRect(param_1,lVar5 + 8,lVar5 + 0x28,uVar4,(Insets *)local_18,
                    *(undefined4 *)(lVar9 + 0x38),1);
    FUN_04a9a340((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  if (*(PopAnimRig **)(this + 0x158) != (PopAnimRig *)0x0) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x158),param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapDialog::ButtonPress(int) */

void PVPMapDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to PVPMapDialog::ButtonPress(int) */

void __thiscall PVPMapDialog::ButtonPress(PVPMapDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::ButtonDepress(int) */

void __thiscall PVPMapDialog::ButtonDepress(PVPMapDialog *this,int param_1)

{
  LawnApp *this_00;
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ProfileMgr *pPVar5;
  PVPManager *pPVar6;
  long lVar7;
  NetworkMgr *pNVar8;
  INetworkMsgProcess *pIVar9;
  long *plVar10;
  CrazyNPCManager *pCVar11;
  SysFont *this_01;
  TrainingCamp *this_02;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar12;
  undefined8 *puVar13;
  OutlineFont *pOVar14;
  DTextField *this_03;
  ulong uVar15;
  MetricsCollector *pMVar16;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 200:
    pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PVPManager::GetPVPMapDataList(pPVar6);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x34)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x38))) {
        pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
        pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        INetworkMsgProcess::RequestPVPAchieve(pIVar9,*plVar10);
      }
      FUN_04a9c460((__normal_iterator *)&local_58);
    }
    goto switchD_04a9e340_caseD_cb;
  case 0xc9:
    PVPMapUI::KillDialog(*(PVPMapUI **)(this + 0x100));
    pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PVPManager::GetPVPMapDataList(pPVar6);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x34)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x38))) {
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a238(lVar4 + 0x128,2);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        FUN_04a9a240(lVar4 + 0x168,*puVar13);
        pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        PVPManager::RequestGetEditPlant(pPVar6,0,(int)*puVar13,2);
        break;
      }
      FUN_04a9c460((__normal_iterator *)&local_58);
    }
    break;
  case 0xca:
    pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
    INetworkMsgProcess::RequestPVPUnlock(pIVar9,*(int *)(this + 0xe8));
    PVPMapUI::KillDialog(*(PVPMapUI **)(this + 0x100));
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(pPVar5);
    iVar2 = FUN_04a9a214(*(undefined4 *)(lVar4 + 0x1100));
    if (iVar2 == 9) {
      pMVar16 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(pMVar16,0x11);
      pCVar11 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"PVP_OCCUPYMAP_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (*(ReceivedDataCallback **)(this + 0x100),PVPMapUI::onPVPNarrationFinished);
      Sexy::Delegate0::Delegate0<PVPMapUI,void(PVPMapUI::*)()>
                (aDStack_38,(CBMemberTranslatorX *)local_50);
      std::string::string((string *)&local_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar11,asStack_60,aDStack_38,(string *)&local_58);
      std::string::~string((string *)&local_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    break;
  case 0xcb:
    goto switchD_04a9e340_caseD_cb;
  case 0xcc:
    pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PVPManager::GetPVPMapDataList(pPVar6);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x34)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x38))) {
        pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
        pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        INetworkMsgProcess::RequestPVPChangeEnemy(pIVar9,*plVar10,2);
        break;
      }
      FUN_04a9c460((__normal_iterator *)&local_58);
    }
    pOVar14 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)EA::Text::OutlineFont::GetOTF(pOVar14);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x20)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x24))) {
        pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
        pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
        plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        INetworkMsgProcess::RequestPVPChangeEnemy(pIVar9,*plVar10,1);
        break;
      }
      FUN_04a9c4c0((__normal_iterator *)&local_58);
    }
    goto switchD_04a9e340_caseD_cb;
  case 0xcd:
    this_01 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    this_02 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(this_01);
    iVar2 = TrainingCamp::GetSpaceUsed(this_02);
    this_00 = gLawnApp;
    if (iVar2 < 1) {
      std::string::string((string *)&local_58,"[REVIVE_TIP]");
      std::string::string((string *)local_50,"[PVP_ERROR_BATTLE_NO_ZOMBIE]");
      LawnApp::ShowMessageDialogNoCallback(this_00,(string *)&local_58,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      std::string::~string((string *)&local_58);
      nop();
      break;
    }
    pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PVPManager::GetPVPMapDataList(pPVar6);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x34)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x38))) {
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a238(lVar4 + 0x128,2);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        FUN_04a9a240(lVar4 + 0x168,*puVar13);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a248(lVar4 + 0x16c,*(undefined4 *)(this + 0xe4));
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a250(lVar4 + 0x170,*(undefined4 *)(this + 0xe8));
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a258(lVar4 + 0x174,1);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a260(lVar4 + 0x176,0);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a580(lVar4 + 0x175);
        iVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        PVPManager::RequestGetPlayerProfile(iVar2,(int)*puVar13,3);
        break;
      }
      FUN_04a9c460((__normal_iterator *)&local_58);
    }
    pOVar14 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar12 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)EA::Text::OutlineFont::GetOTF(pOVar14);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar12);
    while( true ) {
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar12);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
      if (!bVar1) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar4 + 0x20)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar4 + 0x24))) {
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a238(lVar4 + 0x128,1);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a248(lVar4 + 0x16c,*(undefined4 *)(this + 0xe4));
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a250(lVar4 + 0x170,*(undefined4 *)(this + 0xe8));
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a258(lVar4 + 0x174,0);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a260(lVar4 + 0x176,1);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_04a9a578(lVar4 + 0x177);
        lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        FUN_04a9a268(lVar4 + 0x178,*puVar13);
        iVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestGetPlayerProfile(iVar2,0,4);
        this_03 = (DTextField *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        uVar15 = LawnApp::GetRealServerTime(gLawnApp);
        DTextField::setCharNum(this_03,uVar15);
        break;
      }
      FUN_04a9c4c0((__normal_iterator *)&local_58);
    }
switchD_04a9e340_caseD_cb:
    PVPMapUI::KillDialog(*(PVPMapUI **)(this + 0x100));
    break;
  case 0xce:
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04a9a238(lVar4 + 0x128,1);
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(pPVar5);
    iVar2 = FUN_04a9a214(*(undefined4 *)(lVar4 + 0x1100));
    if (iVar2 - 1U < 2) {
      pMVar16 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
      MetricsCollector::LogPvpGuideComplete(pMVar16,4);
      FUN_04a9a218(lVar4 + 0x1100,2);
      LawnApp::KillGameMaskUI(gLawnApp);
      *(undefined4 *)(gLawnApp + 0x2a0c) = 3;
      std::string::string((string *)local_50,"arena_plant_tutorial");
      nop();
      GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b7f948,(string *)local_50,0xffffffff,1,1,0);
      std::string::~string((string *)local_50);
    }
    else {
      lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04a9a238(lVar4 + 0x128,1);
      pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      lVar4 = PVPManager::GetPVPMapMainData(pPVar6);
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04a9a248(lVar7 + 0x16c,*(undefined4 *)(lVar4 + 0x20));
      lVar7 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04a9a250(lVar7 + 0x170,*(undefined4 *)(lVar4 + 0x1c));
      pPVar6 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      PVPManager::RequestGetEditPlant(pPVar6,0,0,1);
    }
    break;
  case 0xcf:
    GameStateMgr::TranslateTo(gGameStateMgr,0x17,5,5);
    PVPLabDlg::s_AutoOpenType = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PVPMapDialog::ButtonDepress(int) */

void __thiscall PVPMapDialog::ButtonDepress(PVPMapDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::~PVPMapDialog() */

void __thiscall PVPMapDialog::~PVPMapDialog(PVPMapDialog *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06947730;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06947400;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
  ::clear((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
           *)(this + 0x160));
  std::map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
  ::clear((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
           *)(this + 400));
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x18))();
    *(undefined8 *)(this + 0x158) = 0;
  }
  this_00 = gLawnApp;
  std::string::string(asStack_10,"PVPGlobalAudio");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
  ::~map((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
          *)(this + 400));
  std::map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
  ::~map((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
          *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPMapDialog::~PVPMapDialog() */

void __thiscall PVPMapDialog::~PVPMapDialog(PVPMapDialog *this)

{
  ~PVPMapDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::PVPMapDialog(PVPMapUI*, DialogType, int, int) */

void __thiscall
PVPMapDialog::PVPMapDialog
          (PVPMapDialog *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_01;
  ButtonListener *this_02;
  undefined4 uVar1;
  LawnApp *pLVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  WidgetComponent *pWVar15;
  LotteryResultProgressBar *pLVar16;
  SalesProgressBar *pSVar17;
  wchar_t *pwVar18;
  StringComponent *pSVar19;
  PVZ2UIButton *pPVar20;
  ProfileMgr *pPVar21;
  GridItemProtectorShieldSegment *this_03;
  int *piVar22;
  OutlineFont *this_04;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar23;
  long lVar24;
  PVPManager *pPVar25;
  ResourceInfo *pRVar26;
  RtClass *pRVar27;
  PopAnimRig *pPVar28;
  Widget *pWVar29;
  long *plVar30;
  code *pcVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  Color *local_100;
  undefined1 *local_f0;
  int local_d8 [2];
  int local_d0 [2];
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8 [4];
  DummyInit aDStack_a8 [8];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [28];
  undefined8 local_78;
  undefined8 local_40;
  Insets aIStack_38 [48];
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x160);
  local_8 = ___stack_chk_guard;
  this_01 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 400);
  this_02 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_02);
  *(undefined4 *)(this + 0xe4) = param_5;
  *(undefined4 *)(this + 0xe8) = param_4;
  *(undefined ***)this = &PTR_GetClass_06947400;
  *(undefined4 *)(this + 0xe0) = param_3;
  *(undefined **)(this + 0xd8) = &DAT_06947730;
  uVar32 = PVZ_EOT();
  *(undefined8 *)(this + 0x100) = param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0xf8) = uVar32;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  *(undefined8 *)(this + 0x158) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_01);
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_40,"PVPGlobalAudio");
  LawnApp::LoadGroup(pLVar2,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pcVar13 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar13,"Play_PVP_Map_Open_Window");
  switch(param_3) {
  case 0:
    local_f0._0_4_ = FUN_04a9a734(0);
    iVar4 = FUN_04a9a734(400);
    uVar14 = 0x104;
    break;
  case 1:
    local_f0._0_4_ = FUN_04a9a734(0);
    iVar4 = FUN_04a9a734(400);
    uVar14 = 0x78;
    break;
  case 2:
    local_f0._0_4_ = FUN_04a9a734(0);
    iVar4 = FUN_04a9a734(400);
    uVar14 = 0x118;
    break;
  case 3:
  case 5:
    local_f0._0_4_ = FUN_04a9a734(0);
    iVar4 = FUN_04a9a734(400);
    uVar14 = 0x140;
    break;
  case 4:
    local_f0._0_4_ = FUN_04a9a734(0);
    iVar4 = FUN_04a9a734(600);
    uVar14 = 0x168;
    break;
  default:
    goto switchD_04aa40d0_default;
  }
  iVar5 = FUN_04a9a734(uVar14);
  Sexy::Widget::Resize((Widget *)this,(int)local_f0,(int)local_f0,iVar4,iVar5);
switchD_04aa40d0_default:
  Sexy::Widget::Resize
            ((Widget *)this,(int)((float)(*(int *)(gLawnApp + 0x724) - *(int *)(this + 0x50)) * 0.5)
             ,(int)((float)(*(int *)(gLawnApp + 0x728) - *(int *)(this + 0x54)) * 0.5),
             *(int *)(this + 0x50),*(int *)(this + 0x54));
  this[0x1e0] = (PVPMapDialog)0x0;
  iVar4 = *(int *)(this + 0xe0);
  if (iVar4 - 2U < 2) {
    pPVar25 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar23 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)PVPManager::GetPVPMapDataList(pPVar25);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar23);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar23);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar24 + 0x34)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar24 + 0x38))) {
        *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(lVar24 + 0x24);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(lVar24 + 0x30);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(lVar24 + 0x28);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(lVar24 + 0x1c);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(lVar24 + 0x2c);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(lVar24 + 0x20);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(lVar24 + 0x3c);
        break;
      }
      FUN_04a9c460((Insets *)&local_78);
    }
  }
  else if (iVar4 == 0) {
    this_03 = (GridItemProtectorShieldSegment *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar23 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)GridItemProtectorShieldSegment::GetGridOffset(this_03);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar23);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar23);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      piVar22 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      if (*piVar22 == *(int *)(this + 0xe8)) {
        *(int *)(this + 0x1d8) = piVar22[1];
        break;
      }
      FUN_04a9c400((Insets *)&local_78);
    }
  }
  else if (iVar4 == 4) {
    pPVar25 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
    lVar24 = PVPManager::GetPVPMapMainData(pPVar25);
    uVar32 = *(undefined4 *)(lVar24 + 0xc);
    uVar12 = *(undefined4 *)(lVar24 + 0x18);
    uVar11 = *(undefined4 *)(lVar24 + 0x10);
    uVar10 = *(undefined4 *)(lVar24 + 4);
    uVar1 = *(undefined4 *)(lVar24 + 0x14);
    *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(lVar24 + 8);
    *(undefined4 *)(this + 0x1c0) = uVar32;
    *(undefined4 *)(this + 0x1c8) = uVar12;
    *(undefined4 *)(this + 0x1c4) = uVar11;
    *(undefined4 *)(this + 0x1cc) = uVar10;
    *(undefined4 *)(this + 0x1d4) = uVar1;
  }
  else if (iVar4 == 5) {
    this_04 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
    pvVar23 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)EA::Text::OutlineFont::GetOTF(this_04);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar23);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar23);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      if ((*(int *)(this + 0xe8) == *(int *)(lVar24 + 0x20)) &&
         (*(int *)(this + 0xe4) == *(int *)(lVar24 + 0x24))) {
        *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(lVar24 + 0x1c);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(lVar24 + 0x18);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(lVar24 + 0x3c);
        lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        if (*(int *)(lVar24 + 0x28) == 4) {
          this[0x1e0] = (PVPMapDialog)0x1;
          lVar24 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
          *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(lVar24 + 0x38);
        }
        break;
      }
      FUN_04a9c4c0((Insets *)&local_78);
    }
  }
  switch(param_3) {
  case 0:
    TodStringTranslate(L"[PVP_MAP_UNLOCK_DETAIL]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1d8));
    FUN_05476c50((string *)&local_40);
    local_d0[0] = 100;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d0);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x2b);
    iVar5 = FUN_04a9a734(0x25);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x78);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    FUN_05478178((Insets *)&local_78,L"[BUTTON_OK]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xca,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x108) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x108);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7f898,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f468,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x108);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    uVar32 = FUN_04a9a734(0x3c);
    uVar12 = FUN_04a9a734(0xb4);
    uVar11 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f898);
    uVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,uVar32,uVar12,uVar11,uVar10);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x108));
    FUN_05478178((Insets *)&local_78,L"[BUTTON_CANCEL]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcb,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x110) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x110);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7f898,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f468,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x110);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar5 = FUN_04a9a734(0xa0);
    iVar4 = *(int *)(this + 0x50);
    uVar32 = FUN_04a9a734(0xb4);
    uVar12 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f898);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,iVar4 - iVar5,uVar32,uVar12,uVar11);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
    FUN_05476c50(auStack_c8);
    break;
  case 1:
    TodStringTranslate(L"[PVP_MAP_UNENABLE_ATTACK_DETAIL]");
    local_d0[0] = 100;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d0);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_Outline);
    Sexy::Color::Color((Color *)local_b8,2);
    iVar4 = FUN_04a9a734(0);
    iVar5 = FUN_04a9a734(0x17c);
    iVar6 = FUN_04a9a734(0x3c);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar4,iVar5,iVar6);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    FUN_05476c50(auStack_c8);
    break;
  case 2:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 100;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x29);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fbc8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 200;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x75);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 300;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x2a);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x15e;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x77);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 400;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x79);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78 = CONCAT44(local_78._4_4_,600);
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x2c);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,auStack_c8,(ulong)*(uint *)(this + 0x1c0),(ulong)*(uint *)(this + 0x1c4)
                   );
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 700;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x1f);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1c8));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 800;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5f);
    iVar5 = FUN_04a9a734(0x48);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,3
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1cc),
                    (ulong)*(uint *)(this + 0x1d0));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 900;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x62);
    iVar5 = FUN_04a9a734(0x70);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1d4));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 1000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x60);
    iVar5 = FUN_04a9a734(0x91);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,3
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_ACHIEVE]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,200,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x118) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7f6a8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f920,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x118);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    uVar32 = FUN_04a9a734(0x28);
    uVar12 = FUN_04a9a734(0xbe);
    uVar11 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f6a8);
    uVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,uVar32,uVar12,uVar11,uVar10);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_DEFEND]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xc9,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x120) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fc70,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f4a0,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x120);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar5 = FUN_04a9a734(0x8c);
    iVar4 = *(int *)(this + 0x50);
    uVar32 = FUN_04a9a734(0xbe);
    uVar12 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc70);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,iVar4 - iVar5,uVar32,uVar12,uVar11);
    pWVar29 = *(Widget **)(this + 0x120);
    goto LAB_04aa613c;
  case 3:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fb98);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 100;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x6b);
    iVar5 = FUN_04a9a734(0xef);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f848);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x78;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0xd9);
    iVar5 = FUN_04a9a734(0xfe);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x82;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x74);
    iVar5 = FUN_04a9a734(0xff);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f670);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x8c;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0xc6);
    iVar5 = FUN_04a9a734(0xf6);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x96;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x29);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fbc8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0xa0;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x75);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 300;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x77);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x15e;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x2a);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 400;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x79);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78 = CONCAT44(local_78._4_4_,600);
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x2c);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,auStack_c8,(ulong)*(uint *)(this + 0x1c0),(ulong)*(uint *)(this + 0x1c4)
                   );
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 11000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x1f);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1c8));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 12000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5f);
    iVar5 = FUN_04a9a734(0x48);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,3
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1cc),
                    (ulong)*(uint *)(this + 0x1d0));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 13000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x62);
    iVar5 = FUN_04a9a734(0x70);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1d4));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 14000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x60);
    iVar5 = FUN_04a9a734(0x91);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,3
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    TodStringTranslate(L"%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1dc));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 15000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24(&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x7c);
    iVar5 = FUN_04a9a734(0xf9);
    iVar6 = FUN_04a9a734(100);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets((Insets *)&local_78,iVar4,iVar5,iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,&local_c0,uVar14,(Color *)local_b8,(Insets *)&local_78,5
              );
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50(&local_c0);
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_CHANGE_ENEMY]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcc,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x128) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x128);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fc70,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f4a0,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x128);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    uVar32 = FUN_04a9a734(0x28);
    uVar12 = FUN_04a9a734(0xbe);
    uVar11 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc70);
    uVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,uVar32,uVar12,uVar11,uVar10);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x128));
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_SCOUT]",(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcd,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x130) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fc70,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f4a0,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x130);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar5 = FUN_04a9a734(0x8c);
    iVar4 = *(int *)(this + 0x50);
    uVar32 = FUN_04a9a734(0xbe);
    uVar12 = FUN_04a9a734(100);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc70);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,iVar4 - iVar5,uVar32,uVar12,uVar11);
    pWVar29 = *(Widget **)(this + 0x130);
LAB_04aa613c:
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar29);
    FUN_05476c50(auStack_c8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    break;
  case 4:
    iVar4 = FUN_04a9a734(100);
    fVar34 = (float)iVar4;
    iVar4 = FUN_04a9a734(0x3c);
    fVar33 = (float)iVar4;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fbf0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x50;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x82);
    iVar5 = FUN_04a9a734(0x15);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,(int)((float)iVar4 + fVar34),iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7d0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x5a;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0xf);
    iVar5 = FUN_04a9a734(0x46);
    iVar6 = FUN_04a9a734(0x23a);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets(aIStack_38,iVar4,iVar5,iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 100;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x28);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fbc8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 200;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar5 = FUN_04a9a734(0x75);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 300;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x2a);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x15e;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x77);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 400;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x79);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78 = CONCAT44(local_78._4_4_,600);
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x2c);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,auStack_c8,(ulong)*(uint *)(this + 0x1c0),(ulong)*(uint *)(this + 0x1c4)
                   );
    FUN_05476c50((string *)&local_40);
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x1f);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,(Color *)local_b8,
               (Insets *)&local_78,5);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1c8));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 800;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x5f);
    iVar5 = FUN_04a9a734(0x48);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,(Color *)local_b8,
               (Insets *)&local_78,3);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    TodStringTranslate(L"%d/%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1cc),
                    (ulong)*(uint *)(this + 0x1d0));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 900;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x62);
    iVar5 = FUN_04a9a734(0x70);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,(Color *)local_b8,
               (Insets *)&local_78,5);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    TodStringTranslate(L"[PVP_MAP_PRODUCT_SPEED]");
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x1d4));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 1000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)local_b8,1);
    iVar4 = FUN_04a9a734(0x60);
    iVar5 = FUN_04a9a734(0x91);
    iVar6 = FUN_04a9a734(300);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar34),(int)((float)iVar5 + fVar33),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,(Color *)local_b8,
               (Insets *)&local_78,3);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    FUN_05478178((Insets *)&local_78,&DAT_056f11a8,(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcf,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x118) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x118);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7f978,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f978,2);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x118);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    uVar32 = FUN_04a9a734(0x28);
    iVar4 = FUN_04a9a734(0xbe);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f978);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f978);
    uVar11 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,uVar32,(int)((float)iVar4 + fVar33),uVar12,uVar11);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x118));
    FUN_05478178((Insets *)&local_78,&DAT_056f11a8,(Color *)local_b8);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xce,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x120) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fa20,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7fa20,2);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x120);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar5 = FUN_04a9a734(0x28);
    iVar4 = *(int *)(this + 0x50);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa20);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    iVar7 = FUN_04a9a734(0xbe);
    pLVar16 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa20);
    uVar32 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fa20);
    uVar12 = SalesProgressBar::GetCurrentLevel(pSVar17);
    (*pcVar31)(plVar30,(iVar4 - iVar5) - iVar6,(int)((float)iVar7 + fVar33),uVar32,uVar12);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x120));
    pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar24 = ProfileMgr::GetCurrentProfile(pPVar21);
    iVar4 = FUN_04a9a214(*(undefined4 *)(lVar24 + 0x1100));
    pLVar2 = gLawnApp;
    if (iVar4 == 1) {
      (**(code **)(**(long **)(this + 0x120) + 0xd0))((Color *)local_b8,*(long **)(this + 0x120));
      plVar30 = *(long **)(this + 0x120);
      lVar24 = plVar30[10];
      (**(code **)(*plVar30 + 0xd0))((Insets *)&local_78,plVar30);
      iVar4 = FUN_04a9a734(0x28);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_c0,(float)((int)lVar24 / 2) + (float)local_b8[0],
                 (float)iVar4 + (float)local_78._4_4_);
      fVar33 = (float)FUN_04a9a748(0x43160000);
      uVar14 = *(undefined8 *)(this + 0x120);
      std::string::string((string *)&local_40,"[PVP_TUTORIAL_CLICKDEFEND]");
      LawnApp::ShowGameMaskUI(local_c0,local_bc,pLVar2,(int)fVar33,uVar14,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      lVar24 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar32 = FUN_04a9a734(0xfffffed4);
      uVar12 = FUN_04a9a734(0xffffffce);
      FUN_04a9a588(lVar24 + 0x114,uVar32,uVar12);
      lVar24 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar14 = 0x5f;
LAB_04aa7f30:
      uVar32 = FUN_04a9a734(uVar14);
      uVar12 = FUN_04a9a734(0x96);
      FUN_04a9a5e0(lVar24 + 0xf8,lVar24 + 0x100,uVar32,uVar12);
    }
    goto LAB_04aa5150;
  case 5:
    iVar4 = FUN_04a9a734(0x28);
    iVar5 = FUN_04a9a734(0x14);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar34 = 0.0;
      fVar33 = fVar34;
    }
    else {
      iVar6 = FUN_04a9a734(0xffffffd3);
      fVar33 = (float)iVar6;
      iVar6 = FUN_04a9a734(0x50);
      fVar34 = (float)iVar6;
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b7fa98);
      pRVar26 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_78);
      pRVar27 = (RtClass *)PopAnimRig::StaticGetClass();
      pPVar28 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar26,pRVar27);
      *(PopAnimRig **)(this + 0x158) = pPVar28;
      std::string::string((string *)&local_40,"idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_a8);
      PopAnimRig::PlayAndContinue(pPVar28,(string *)&local_40,0,aDStack_a8);
      std::string::~string((string *)&local_40);
      nop();
      Sexy::SexyTransform2D::SexyTransform2D((SexyTransform2D *)aDStack_a8);
      iVar6 = FUN_04a9a734(0x4b);
      iVar7 = FUN_04a9a734(0xffffffec);
      FUN_04a9a1e8((float)iVar6,(float)iVar7,auStack_a0,auStack_94);
      PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x158),(SexyTransform2D *)aDStack_a8);
      PopAnimRig::SetDrawScale(*(PopAnimRig **)(this + 0x158),0.4);
      iVar6 = FUN_04a9a734(0);
      pLVar16 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f750);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
      pSVar17 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7f750);
      iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
      Sexy::Widget::Resize((Widget *)this,iVar6,iVar6,iVar7,iVar8);
      Sexy::Widget::Resize
                ((Widget *)this,
                 (int)((float)(*(int *)(gLawnApp + 0x724) - *(int *)(this + 0x50)) * 0.5),
                 (int)((float)(*(int *)(gLawnApp + 0x728) - *(int *)(this + 0x54)) * 0.5),
                 *(int *)(this + 0x50),*(int *)(this + 0x54));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
    }
    local_100 = (Color *)local_b8;
    fVar36 = 15.0;
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8c8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x5a;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar6 = FUN_04a9a734(0x41);
    iVar7 = FUN_04a9a734(0x1e);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar6 + fVar33),(int)((float)iVar7 + fVar34),iVar8,iVar9);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fb98);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 100;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar6 = FUN_04a9a734(0x6b);
    iVar7 = FUN_04a9a734(0xef);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar36 = 0.0;
    }
    fVar35 = 15.0;
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar6 + fVar33),(int)((float)iVar7 + fVar34 + fVar36),iVar8,
               iVar9);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fb48);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x78;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar6 = FUN_04a9a734(0xd9);
    iVar7 = FUN_04a9a734(0xfe);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar35 = 0.0;
    }
    fVar36 = 15.0;
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar6 + fVar33),(int)((float)iVar7 + fVar34 + fVar35),iVar8,
               iVar9);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x82;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar6 = FUN_04a9a734(0x74);
    iVar7 = FUN_04a9a734(0xff);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar36 = 0.0;
    }
    fVar35 = 15.0;
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar6 + fVar33),(int)((float)iVar7 + fVar34 + fVar36),iVar8,
               iVar9);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f670);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x8c;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar6 = FUN_04a9a734(0xc6);
    iVar7 = FUN_04a9a734(0xf6);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar35 = 0.0;
    }
    fVar36 = fVar34 + (float)iVar4;
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar6 + fVar33),(int)((float)iVar7 + fVar34 + fVar35),iVar4,
               iVar8);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f8f0);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78 = CONCAT44(local_78._4_4_,0x96);
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    iVar6 = FUN_04a9a734(0x29);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar6 + fVar36),iVar7,iVar8);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f820);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (this[0x1e0] != (PVPMapDialog)0x0) {
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7fbc8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    }
    local_78._0_4_ = 0xa0;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    fVar37 = fVar34 + (float)iVar5;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x3c);
    fVar35 = 15.0;
    iVar5 = FUN_04a9a734(0x75);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar37),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 300;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x77);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar37),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f7a8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 0x15e;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x2a);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar36),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78._0_4_ = 400;
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x79);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar37),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7f558);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)local_d0,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    local_78 = CONCAT44(local_78._4_4_,600);
    pWVar15 = (WidgetComponent *)
              std::
              map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
              ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                            *)this_00,(int *)&local_78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)local_d0);
    iVar4 = FUN_04a9a734(0x61);
    iVar5 = FUN_04a9a734(0x2c);
    pLVar16 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar16);
    pSVar17 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar36),iVar6,iVar7);
    WidgetComponent::operator=(pWVar15,(WidgetComponent *)&local_40);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_40);
    TodStringTranslate(L"%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,auStack_c8,(ulong)*(uint *)(this + 0x1c0));
    FUN_05476c50((string *)&local_40);
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(local_100,1);
    iVar4 = FUN_04a9a734(0x5e);
    iVar5 = FUN_04a9a734(0x1f);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar36),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,local_100,
               (Insets *)&local_78,5);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    TodStringTranslate(L"%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1cc));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 13000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(local_100,1);
    iVar4 = FUN_04a9a734(0x62);
    iVar5 = FUN_04a9a734(0x70);
    iVar6 = FUN_04a9a734(200);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar33),(int)((float)iVar5 + fVar37),iVar6,
               iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,local_100,
               (Insets *)&local_78,5);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    TodStringTranslate(L"%d");
    pwVar18 = (wchar_t *)FUN_054766ec((string *)&local_40);
    Sexy::StrFormat(pwVar18,(Insets *)&local_78,(ulong)*(uint *)(this + 0x1dc));
    FUN_054766c8(auStack_c8,(Insets *)&local_78);
    FUN_05476c50((Insets *)&local_78);
    FUN_05476c50((string *)&local_40);
    local_d8[0] = 15000;
    pSVar19 = (StringComponent *)
              std::
              map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
              ::operator[]((map<int,StringComponent,std::less<int>,std::allocator<std::pair<int_const,StringComponent>>>
                            *)this_01,local_d8);
    FUN_05477b24((FastCurve *)&local_c0,auStack_c8);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(local_100,1);
    iVar4 = FUN_04a9a734(0x7c);
    iVar5 = FUN_04a9a734(0xf9);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      fVar35 = 0.0;
    }
    iVar6 = FUN_04a9a734(100);
    iVar7 = FUN_04a9a734(0x32);
    Sexy::Insets::Insets
              ((Insets *)&local_78,(int)((float)iVar4 + fVar33),
               (int)((float)iVar5 + fVar34 + fVar35),iVar6,iVar7);
    StringComponent::StringComponent
              ((StringComponent *)&local_40,(FastCurve *)&local_c0,uVar14,local_100,
               (Insets *)&local_78,5);
    StringComponent::operator=(pSVar19,(StringComponent *)&local_40);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_40);
    FUN_05476c50((FastCurve *)&local_c0);
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_CHANGE_ENEMY]",local_100);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcc,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x128) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x128);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fc70,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f4a0,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x128);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar5 = FUN_04a9a734(0xbe);
    iVar4 = *(int *)(this + 0x50);
    iVar6 = FUN_04a9a734(0xb4);
    uVar32 = FUN_04a9a734(0x96);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc70);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar8 = FUN_04a9a734(10);
    (*pcVar31)(plVar30,(int)((float)(iVar4 - iVar5) + fVar33),(int)((float)iVar6 + fVar34),uVar32,
               iVar7 + iVar8);
    if (this[0x1e0] == (PVPMapDialog)0x0) {
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x128));
    }
    FUN_05478178((Insets *)&local_78,L"[PVP_MAP_BTN_SCOUT]",local_100);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar20 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar20,0xcd,this_02,(wstring *)&local_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x130) = pPVar20;
    FUN_05476c50((Insets *)&local_78);
    nop();
    pPVar20 = *(PVZ2UIButton **)(this + 0x130);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7fc70,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7f4a0,3);
    PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    plVar30 = *(long **)(this + 0x130);
    pcVar31 = *(code **)(*plVar30 + 0x198);
    iVar4 = FUN_04a9a734(0x28);
    fVar36 = 0.0;
    if (this[0x1e0] != (PVPMapDialog)0x0) {
      fVar36 = 85.0;
    }
    iVar5 = FUN_04a9a734(0xb4);
    uVar32 = FUN_04a9a734(0x96);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7fc70);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar17);
    iVar7 = FUN_04a9a734(10);
    (*pcVar31)(plVar30,(int)((float)iVar4 + fVar33 + fVar36),(int)((float)iVar5 + fVar34),uVar32,
               iVar6 + iVar7);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x130));
    pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar24 = ProfileMgr::GetCurrentProfile(pPVar21);
    iVar4 = FUN_04a9a214(*(undefined4 *)(lVar24 + 0x1100));
    pLVar2 = gLawnApp;
    if (iVar4 == 7) {
      (**(code **)(**(long **)(this + 0x130) + 0xd0))(local_100,*(long **)(this + 0x130));
      plVar30 = *(long **)(this + 0x130);
      lVar24 = plVar30[10];
      iVar4 = FUN_04a9a734(0x50);
      (**(code **)(*plVar30 + 0xd0))((Insets *)&local_78,plVar30);
      iVar5 = FUN_04a9a734(0x50);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_c0,(float)((int)lVar24 / 2) + (float)local_b8[0] + (float)iVar4
                 ,(float)iVar5 + (float)local_78._4_4_);
      fVar33 = (float)FUN_04a9a748(0x43160000);
      std::string::string((string *)&local_40,"[PVP_TUTORIAL_ATTACKSTART]");
      LawnApp::ShowGameMaskUI(local_c0,local_bc,pLVar2,(int)fVar33,this,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      lVar24 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar32 = FUN_04a9a734(0xffffffce);
      uVar12 = FUN_04a9a734(0xb4);
      FUN_04a9a588(lVar24 + 0x114,uVar32,uVar12);
      lVar24 = LawnApp::GetGameMaskUI(gLawnApp);
      uVar14 = 0x55;
      goto LAB_04aa7f30;
    }
LAB_04aa5150:
    local_f0 = auStack_c8;
    FUN_05476c50(local_f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPMapDialog::TouchEnded(Sexy::Touch const&) */

void __thiscall PVPMapDialog::TouchEnded(PVPMapDialog *this,Touch *param_1)

{
  LawnApp *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  long lVar5;
  SysFont *pSVar6;
  TrainingCamp *pTVar7;
  PVPManager *pPVar8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar9;
  undefined8 *puVar10;
  OutlineFont *this_02;
  DTextField *this_03;
  ulong uVar11;
  MetricsCollector *this_04;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar5 = ProfileMgr::GetCurrentProfile(this_01);
  iVar3 = FUN_04a9a214(*(undefined4 *)(lVar5 + 0x1100));
  if (iVar3 == 7) {
    this_04 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
    MetricsCollector::LogPvpGuideComplete(this_04,0xe);
    LawnApp::KillGameMaskUI(gLawnApp);
    *(undefined4 *)(gLawnApp + 0x2a0c) = 4;
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04a9a238(lVar5 + 0x128,1);
    lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04a9a258(lVar5 + 0x174,0);
    std::string::string((string *)local_20,"arena_battle_attack_tutorial");
    nop();
    GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b7f948,(string *)local_20,0xffffffff,1,1,0);
    std::string::~string((string *)local_20);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x10);
    local_20[0] = CONCAT44(local_20[0]._4_4_,100);
    lVar5 = std::
            map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
            ::operator[]((map<int,WidgetComponent,std::less<int>,std::allocator<std::pair<int_const,WidgetComponent>>>
                          *)(this + 0x160),(int *)local_20);
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(lVar5 + 8),iVar4,iVar3);
    if (cVar1 != '\0') {
      pSVar6 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      pTVar7 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar6);
      iVar3 = TrainingCamp::GetSpaceUsed(pTVar7);
      if (iVar3 < 1) {
LAB_04aa9620:
        this_00 = gLawnApp;
        std::string::string((string *)&local_38,"[REVIVE_TIP]");
        std::string::string((string *)local_20,"[PVP_ERROR_BATTLE_NO_ZOMBIE]");
        LawnApp::ShowMessageDialogNoCallback(this_00,(string *)&local_38,(string *)local_20);
        std::string::~string((string *)local_20);
        nop();
        std::string::~string((string *)&local_38);
        nop();
      }
      else {
        pPVar8 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstance();
        pvVar9 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)PVPManager::GetPVPMapDataList(pPVar8);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar9);
        while( true ) {
          local_20[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(pvVar9);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
          if (!bVar2) break;
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          if ((*(int *)(this + 0xe8) == *(int *)(lVar5 + 0x34)) &&
             (*(int *)(this + 0xe4) == *(int *)(lVar5 + 0x38))) {
            NameEffectStruct::NameEffectStruct((NameEffectStruct *)&local_38);
            local_34 = *(undefined4 *)(this + 0xe8);
            local_30 = *(undefined4 *)(this + 0xe4);
            lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            local_38 = (undefined4)*(undefined8 *)(lVar5 + 8);
            lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            thunk_FUN_05477b9c(auStack_28,lVar5 + 0x10);
            pPVar8 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            NameEffectStruct::NameEffectStruct
                      ((NameEffectStruct *)local_20,(NameEffectStruct *)&local_38);
            PVPManager::SetOldNameStatus(pPVar8,(NameEffectStruct *)local_20);
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)local_20);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a238(lVar5 + 0x128,2);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            puVar10 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            FUN_04a9a240(lVar5 + 0x168,*puVar10);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a248(lVar5 + 0x16c,*(undefined4 *)(this + 0xe4));
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a250(lVar5 + 0x170,*(undefined4 *)(this + 0xe8));
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a258(lVar5 + 0x174,0);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a260(lVar5 + 0x176,0);
            iVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            puVar10 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            PVPManager::RequestGetPlayerProfile(iVar3,(int)*puVar10,2);
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_38);
            break;
          }
          FUN_04a9c460((__normal_iterator *)&local_40);
        }
        this_02 = (OutlineFont *)Sexy::LazySingleton<PVPManager>::GetInstance();
        pvVar9 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)EA::Text::OutlineFont::GetOTF(this_02);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(pvVar9);
        while( true ) {
          local_20[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(pvVar9);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
          if (!bVar2) break;
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          if ((*(int *)(this + 0xe8) == *(int *)(lVar5 + 0x20)) &&
             (*(int *)(this + 0xe4) == *(int *)(lVar5 + 0x24))) {
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            iVar3 = FUN_04a9a234(*(undefined4 *)(lVar5 + 0x200));
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            iVar4 = FUN_04a9a220(*(undefined4 *)(lVar5 + 8));
            if (iVar4 < iVar3) {
              LawnApp::ShowPvpCoinBuyConfirm(gLawnApp);
              goto LAB_04aa91dc;
            }
            pSVar6 = (SysFont *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            pTVar7 = (TrainingCamp *)Sexy::SysFont::CreateImageFont(pSVar6);
            iVar3 = TrainingCamp::GetSpaceUsed(pTVar7);
            if (iVar3 < 1) goto LAB_04aa9620;
            NameEffectStruct::NameEffectStruct((NameEffectStruct *)&local_38);
            local_34 = *(undefined4 *)(this + 0xe8);
            local_30 = *(undefined4 *)(this + 0xe4);
            lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            thunk_FUN_05477b9c(auStack_28,lVar5 + 8);
            pPVar8 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            NameEffectStruct::NameEffectStruct
                      ((NameEffectStruct *)local_20,(NameEffectStruct *)&local_38);
            PVPManager::SetOldNameStatus(pPVar8,(NameEffectStruct *)local_20);
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)local_20);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a238(lVar5 + 0x128,1);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a248(lVar5 + 0x16c,*(undefined4 *)(this + 0xe4));
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a250(lVar5 + 0x170,*(undefined4 *)(this + 0xe8));
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a258(lVar5 + 0x174,0);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a260(lVar5 + 0x176,0);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            FUN_04a9a578(lVar5 + 0x177);
            lVar5 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            puVar10 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            FUN_04a9a268(lVar5 + 0x178,*puVar10);
            iVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            PVPManager::RequestGetPlayerProfile(iVar3,0,1);
            this_03 = (DTextField *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
            uVar11 = LawnApp::GetRealServerTime(gLawnApp);
            DTextField::setCharNum(this_03,uVar11);
            NameEffectStruct::~NameEffectStruct((NameEffectStruct *)&local_38);
            break;
          }
          FUN_04a9c4c0((__normal_iterator *)&local_40);
        }
        PVPMapUI::KillDialog(*(PVPMapUI **)(this + 0x100));
      }
    }
  }
LAB_04aa91dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

