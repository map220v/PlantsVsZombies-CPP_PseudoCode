// Class: PVPEntryDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::GetLayoutName() */

void __thiscall PVPEntryDlg::GetLayoutName(PVPEntryDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PVPEntry");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVPEntryDlg::~PVPEntryDlg() */

void __thiscall PVPEntryDlg::~PVPEntryDlg(PVPEntryDlg *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  bool bVar1;
  PrimeText *this_01;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetClass_069510d0;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158);
  *(undefined **)(this + 0xd8) = &DAT_06951420;
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  if (this[0x171] == (PVPEntryDlg)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
    if (bVar1) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      (**(code **)(*plVar2 + 0x48))();
    }
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
    if (bVar1) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
      (**(code **)(*plVar2 + 0x48))();
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(this_00);
  UISingletonDialog<PVPEntryDlg>::~UISingletonDialog((UISingletonDialog<PVPEntryDlg> *)this);
  return;
}


/* PVPEntryDlg::~PVPEntryDlg() */

void __thiscall PVPEntryDlg::~PVPEntryDlg(PVPEntryDlg *this)

{
  ~PVPEntryDlg(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::setTimer(std::string const&, float) */

void __thiscall PVPEntryDlg::setTimer(PVPEntryDlg *this,string *param_1,float param_2)

{
  long *plVar1;
  UIWidgetAnim *pUVar2;
  PopAnimRig *pPVar3;
  UIWidgetText *pUVar4;
  int extraout_w1;
  char *__s;
  char cVar5;
  char cVar6;
  float fVar7;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_2 < 0.0) || (fVar7 = (float)PVZ_EOT(), fVar7 == param_2)) ||
     (fVar7 = (float)PVZ_T(), param_2 < fVar7)) {
    cVar6 = '\0';
    std::operator+(param_1,"_Timer");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    cVar5 = *(char *)((long)plVar1 + 0x6c);
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  else {
    cVar6 = '\x01';
    std::operator+(param_1,"_Timer");
    plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    cVar5 = *(char *)((long)plVar1 + 0x6c);
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    std::operator+(param_1,"_TimeText");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    if (pUVar4 != (UIWidgetText *)0x0) {
      fVar7 = (float)PVZ_T();
      cVar6 = '\x01';
      StringHelper::ToTimeString((StringHelper *)0x0,param_2 - fVar7,extraout_w1);
      PuzzleTip::SetTip(pUVar4,asStack_40);
      FUN_05476c50(asStack_40);
    }
  }
  if (cVar6 != cVar5) {
    pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,param_1);
    pPVar3 = (PopAnimRig *)FUN_04af989c(*(undefined8 *)(pUVar2 + 0xd8));
    if (pPVar3 != (PopAnimRig *)0x0) {
      if (cVar6 == '\0') {
        __s = "idle";
      }
      else {
        __s = "work";
      }
      std::string::string(asStack_40,__s);
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar3,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::onPVPNarrationFinished() */

void __thiscall PVPEntryDlg::onPVPNarrationFinished(PVPEntryDlg *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ProfileMgr *this_00;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  int local_28 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x172] = (PVPEntryDlg)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04af9840(*(undefined4 *)(lVar7 + 0x1100));
  if ((iVar2 == 1) || (iVar2 == 7)) {
    std::string::string(asStack_10,"Main_Btn0");
    plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    (**(code **)(*plVar9 + 0xd0))(local_28,plVar9);
    lVar8 = plVar9[10];
    fVar10 = (float)local_28[0];
    iVar3 = FUN_04af9bf0(5);
    (**(code **)(*plVar9 + 0xd0))(auStack_20,plVar9);
    iVar2 = *(int *)((long)plVar9 + 0x54);
    fVar11 = (float)local_1c;
    iVar4 = FUN_04af9bf0(0x8c);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,fVar10 + (float)(int)lVar8 * 0.5 + (float)iVar3,
               (fVar11 - (float)iVar2 * 0.5) + (float)iVar4);
    fVar10 = (float)FUN_04af9c04();
    std::string::string(asStack_10,"[PVP_TUTORIAL_ENTERGARDENWAR]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar10,plVar9,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar8 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar5 = FUN_04af9bf0(0xffffffce);
    uVar6 = FUN_04af9bf0(0x14a);
    FUN_04af99c8(lVar8 + 0x114,uVar5,uVar6);
    lVar8 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar5 = FUN_04af9bf0(0x1e);
    uVar6 = FUN_04af9bf0(300);
    FUN_04af9958(0x43870000,lVar8 + 0xf8,lVar8 + 0x100,uVar5,uVar6);
    iVar2 = FUN_04af9840(*(undefined4 *)(lVar7 + 0x1100));
  }
  if (iVar2 == 4) {
    FUN_04af9844(lVar7 + 0x1100,5);
    std::string::string(asStack_10,"Training_Btn0");
    plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    (**(code **)(*plVar9 + 0xd0))(local_28,plVar9);
    lVar7 = plVar9[10];
    iVar3 = FUN_04af9bf0(5);
    (**(code **)(*plVar9 + 0xd0))(auStack_20,plVar9);
    iVar2 = *(int *)((long)plVar9 + 0x54);
    iVar4 = FUN_04af9bf0(100);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,(float)local_28[0] + (float)(int)lVar7 * 0.5 + (float)iVar3,
               ((float)local_1c - (float)iVar2 * 0.5) + (float)iVar4);
    fVar10 = (float)FUN_04af9c04();
    std::string::string(asStack_10,"[PVP_TUTORIAL_ENTERTRAINING]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,(int)fVar10,plVar9,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar5 = FUN_04af9bf0(0xffffff9c);
    uVar6 = FUN_04af9bf0(0xffffffce);
    FUN_04af99c8(lVar7 + 0x114,uVar5,uVar6);
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    uVar5 = FUN_04af9bf0(0xffffff56);
    uVar6 = FUN_04af9bf0(0xa0);
    FUN_04af9958(0x42b40000,lVar7 + 0xf8,lVar7 + 0x100,uVar5,uVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::ButtonDepress(int) */

void __thiscall PVPEntryDlg::ButtonDepress(PVPEntryDlg *this,int param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  long lVar4;
  UIWidgetAnim *pUVar5;
  PopAnimRig *pPVar6;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  MetricsCollector *pMVar7;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x172] == (PVPEntryDlg)0x0) &&
      ((bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x158)), !bVar1 ||
       (this[0x160] != (PVPEntryDlg)0x0)))) &&
     ((bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168)), !bVar1 ||
      (this[0x170] != (PVPEntryDlg)0x0)))) {
    *(int *)(this + 0x154) = param_1;
    switch(param_1) {
    case 0:
      this[0x150] = (PVPEntryDlg)0x0;
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      break;
    case 1:
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
      iVar2 = FUN_04af9840(*(undefined4 *)(lVar4 + 0x1100));
      if (iVar2 == 1) {
        this[0x150] = (PVPEntryDlg)0x0;
        pMVar7 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
        MetricsCollector::LogPvpGuideComplete(pMVar7,2);
        iVar2 = FUN_04af9840(*(undefined4 *)(lVar4 + 0x1100));
      }
      if (iVar2 == 7) {
        this[0x150] = (PVPEntryDlg)0x0;
      }
      LawnApp::KillGameMaskUI(gLawnApp);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestPVPMapInfo(this_01);
      lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      FUN_04af98f0(lVar4 + 0x1fc);
      break;
    case 2:
      UISingletonDialog<PvpExchangeDlg>::ShowDialog();
      break;
    case 3:
      this[0x150] = (PVPEntryDlg)0x0;
      GameStateMgr::TranslateTo(gGameStateMgr,0x17,5,5);
      break;
    case 4:
      UISingletonDialog<PlaybackDlg>::ShowDialog();
      pUVar5 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&DAT_06b828c8);
      if ((pUVar5 != (UIWidgetAnim *)0x0) &&
         (pPVar6 = (PopAnimRig *)FUN_04af989c(*(undefined8 *)(pUVar5 + 0xd8)),
         pPVar6 != (PopAnimRig *)0x0)) {
        std::string::string(asStack_40,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar6,asStack_40,0,aDStack_38);
        std::string::~string(asStack_40);
        nop();
      }
      break;
    case 5:
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
      iVar2 = FUN_04af9840(*(undefined4 *)(lVar4 + 0x1100));
      if (iVar2 == 5) {
        *(undefined4 *)(this + 0x154) = 0;
        pMVar7 = (MetricsCollector *)LawnApp::GetMetricsCollector(gLawnApp);
        MetricsCollector::LogPvpGuideComplete(pMVar7,8);
        LawnApp::KillGameMaskUI(gLawnApp);
        UISingletonDialog<TrainingCampZombieDlg>::ShowDialog();
      }
      else {
        UISingletonDialog<TrainingCampZombieDlg>::ShowDialog();
      }
      break;
    case 6:
      UISingletonDialog<PvpRankDlg>::ShowDialog();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PVPEntryDlg::ButtonDepress(int) */

void __thiscall PVPEntryDlg::ButtonDepress(PVPEntryDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::onTutorialAnim1Done(std::string const&) */

void PVPEntryDlg::onTutorialAnim1Done(string *param_1)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  param_1[0x170] = (string)0x1;
  param_1[0x172] = (string)0x1;
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"MAP_PVPMAINMENU_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onPVPNarrationFinished);
  Sexy::Delegate0::Delegate0<PVPEntryDlg,void(PVPEntryDlg::*)()>(aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPEntryDlg::onTutorialAnimDone(std::string const&) */

void PVPEntryDlg::onTutorialAnimDone(string *param_1)

{
  param_1[0x160] = (string)0x1;
  onTutorialAnim1Done(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::Update() */

void __thiscall PVPEntryDlg::Update(PVPEntryDlg *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_02;
  long lVar4;
  PopAnimRig *pPVar5;
  INetworkMsgProcess *this_03;
  CrazyNPCManager *pCVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_60 [8];
  string asStack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (this[0x160] == (PVPEntryDlg)0x0)) {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar5,fVar8,fVar9);
  }
  this_01 = (RtWeakPtr *)(this + 0x168);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if ((bVar1) && (this[0x170] == (PVPEntryDlg)0x0)) {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    fVar8 = (float)PVZ_T();
    fVar9 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(pPVar5,fVar8,fVar9);
  }
  if (((this[0x171] == (PVPEntryDlg)0x0) && (this[0x160] != (PVPEntryDlg)0x0)) &&
     (this[0x170] != (PVPEntryDlg)0x0)) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    if (cVar2 != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar7 + 0x48))();
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_50);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_01);
    if (cVar2 != '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      (**(code **)(*plVar7 + 0x48))();
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_50);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)a_Stack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
    }
    this[0x171] = (PVPEntryDlg)0x1;
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_02);
  iVar3 = FUN_04af9840(*(undefined4 *)(lVar4 + 0x1100));
  if (iVar3 == 6) {
    FUN_04af9844(lVar4 + 0x1100,7);
    pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"PVP_ATTACK_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPNarrationFinished);
    Sexy::Delegate0::Delegate0<PVPEntryDlg,void(PVPEntryDlg::*)()>(aDStack_38,a_Stack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (this[0x150] == (PVPEntryDlg)0x0) goto LAB_04afaa18;
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  fVar8 = (float)FUN_04af9888(*(undefined4 *)(lVar4 + 0xd0));
  setTimer(this,(string *)&DAT_06b828b8,fVar8);
  if (((fVar8 <= 0.0) || (fVar9 = (float)PVZ_EOT(), fVar9 == fVar8)) ||
     (fVar10 = (float)PVZ_T(), fVar10 <= fVar8)) {
    bVar1 = false;
  }
  else {
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    bVar1 = true;
    FUN_04af9880(fVar9,lVar4 + 0xd0);
  }
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  fVar8 = (float)FUN_04af9894(*(undefined4 *)(lVar4 + 0xd4));
  setTimer(this,(string *)&DAT_06b828c0,fVar8);
  if (((fVar8 <= 0.0) || (fVar9 = (float)PVZ_EOT(), fVar9 == fVar8)) ||
     (fVar10 = (float)PVZ_T(), fVar10 <= fVar8)) {
    if ((*(int *)(this + 0x154) == 5) &&
       (lVar4 = UISingletonDialog<TrainingCampZombieDlg>::GetSingletonPtr(), lVar4 == 0))
    goto LAB_04afac90;
    if (!bVar1) goto LAB_04afaa18;
  }
  else {
    lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_04af988c(fVar9,lVar4 + 0xd4);
    if ((*(int *)(this + 0x154) == 5) &&
       (lVar4 = UISingletonDialog<TrainingCampZombieDlg>::GetSingletonPtr(), lVar4 == 0)) {
LAB_04afac90:
      *(undefined4 *)(this + 0x154) = 0;
    }
  }
  this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPLogin(this_03);
LAB_04afaa18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPEntryDlg::PVPEntryDlg() */

void __thiscall PVPEntryDlg::PVPEntryDlg(PVPEntryDlg *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<PVPEntryDlg>::UISingletonDialog((UISingletonDialog<PVPEntryDlg> *)this);
  this[0x150] = (PVPEntryDlg)0x1;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined ***)this = &PTR_GetClass_069510d0;
  *(undefined **)(this + 0xd8) = &DAT_06951420;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  this[0x172] = (PVPEntryDlg)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLogin);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<PVPEntryDlg,void(PVPEntryDlg::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVPLogin,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::RefreshData() */

void __thiscall PVPEntryDlg::RefreshData(PVPEntryDlg *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  UIWidgetAnim *pUVar6;
  PopAnimRig *pPVar7;
  AssetsManagerManifest *this_00;
  PVPLabData *pPVar8;
  PlaybackManager *this_01;
  char *__s;
  undefined8 uVar9;
  PVZ2UIButton *this_02;
  string asStack_b0 [8];
  DummyInit aDStack_a8 [48];
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar5 = FUN_04af9878(*(undefined4 *)(lVar4 + 0x10));
  Sexy::StrFormat(L"%d",asStack_40,uVar5 & 0xffffffff);
  PuzzleTip::SetTip(uVar9,asStack_40);
  FUN_05476c50(asStack_40);
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_04af987c(*(undefined4 *)(lVar4 + 0x18));
  uVar5 = FUN_04af984c();
  Sexy::StrFormat("IMAGE_UI_PVP_UI_DIALOG_RANKICON_%d",asStack_b0,uVar5 & 0xffffffff);
  lVar4 = StringHelper::ToImage(asStack_b0,false);
  if (lVar4 == 0) {
    lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b828f8);
  }
  this_02 = *(PVZ2UIButton **)(this + 0x148);
  PVZ2UIImage::PVZ2UIImage(aPStack_78,lVar4,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar4,1);
  PVZ2UIButton::SetDialogStates(this_02,aPStack_78,(PVZ2UIImage *)asStack_40);
  std::string::string(asStack_40,"Main_Build");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pPVar7 = (PopAnimRig *)FUN_04af989c(*(undefined8 *)(pUVar6 + 0xd8));
  if (pPVar7 != (PopAnimRig *)0x0) {
    this_00 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pPVar8 = (PVPLabData *)AssetsManagerManifest::getAssets(this_00);
    iVar3 = PVPLabData::GetLabItemLevel(pPVar8,1);
    uVar1 = (iVar3 + -1) / 5 + 1;
    if ((int)uVar1 < 1) {
      uVar5 = 1;
    }
    else {
      if (4 < (int)uVar1) {
        uVar1 = 4;
      }
      uVar5 = (ulong)uVar1;
    }
    Sexy::StrFormat("z%d",asStack_40,uVar5);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_a8);
    PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_a8);
    std::string::~string(asStack_40);
  }
  pUVar6 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,(string *)&DAT_06b828c8);
  pPVar7 = (PopAnimRig *)FUN_04af989c(*(undefined8 *)(pUVar6 + 0xd8));
  if (pPVar7 != (PopAnimRig *)0x0) {
    this_01 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    cVar2 = PlaybackManager::IsHaveNewPlayback(this_01);
    if (cVar2 == '\0') {
      __s = "idle";
    }
    else {
      __s = "work";
    }
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_a8);
    PopAnimRig::PlayAndContinue(pPVar7,asStack_40,0,aDStack_a8);
    std::string::~string(asStack_40);
    nop();
  }
  std::string::~string(asStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPEntryDlg::onPVPLogin(bool) */

void __thiscall PVPEntryDlg::onPVPLogin(PVPEntryDlg *this,bool param_1)

{
  PVPManager *this_00;
  
  if (!param_1) {
    return;
  }
  RefreshData(this);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::Login(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::OnRankMonthRewardCallback(UIMessageBox*, int) */

void PVPEntryDlg::OnRankMonthRewardCallback(UIMessageBox *param_1,int param_2)

{
  PVPManager *pPVar1;
  int *piVar2;
  UIMessageBox *this;
  map *pmVar3;
  map amStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  piVar2 = (int *)PVPManager::GetRankMonthReward(pPVar1);
  if ((0 < piVar2[2]) &&
     (this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this,2);
    pmVar3 = amStack_98;
    TodStringTranslate(L"[PVP_RANK_MONTHREWARD_TITLE2]");
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    std::pair<std::wstring_const,int>::pair<wchar_t_const(&)[7],void>
              ((pair<std::wstring_const,int> *)&local_80,L"{OLDCUP}",piVar2);
    std::
    map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
    ::insert((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
              *)amStack_68,(pair *)&local_80);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_80);
    std::pair<std::wstring_const,int>::pair<wchar_t_const(&)[7],void>
              ((pair<std::wstring_const,int> *)&local_80,L"{COIN}",piVar2 + 2);
    std::
    map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
    ::insert((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
              *)amStack_68,(pair *)&local_80);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_80);
    std::pair<std::wstring_const,int>::pair<wchar_t_const(&)[7],void>
              ((pair<std::wstring_const,int> *)&local_80,L"{NEWCUP}",piVar2 + 1);
    std::
    map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
    ::insert((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
              *)amStack_68,(pair *)&local_80);
    std::pair<std::wstring_const,Sexy::DataElement*>::~pair
              ((pair<std::wstring_const,Sexy::DataElement*> *)&local_80);
    std::string::string((string *)&local_80,"[PVP_RANK_MONTHREWARD_CONTENT2]");
    StringHelper::ReplaceNumberString((StringHelper *)&local_80,(string *)amStack_68,pmVar3);
    std::string::~string((string *)&local_80);
    nop();
    UIMessageBox::SetMessage(this,awStack_88,awStack_90);
    Sexy::Delegate2<UIMessageBox*,int>::Delegate2(aDStack_38);
    UIMessageBox::SetCallback(this,aDStack_38);
    pPVar1 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    PvPRankMonthReward::PvPRankMonthReward((PvPRankMonthReward *)&local_80);
    PVPManager::SetRankMonthReward(pPVar1,(PvPRankMonthReward *)&local_80);
    FUN_05476c50(awStack_88);
    std::
    map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
    ::~map((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
            *)amStack_68);
    FUN_05476c50(awStack_90);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::ShowRankMonthRewardMessage() */

void __thiscall PVPEntryDlg::ShowRankMonthRewardMessage(PVPEntryDlg *this)

{
  PVPManager *this_00;
  long lVar1;
  UIMessageBox *this_01;
  map *pmVar2;
  map amStack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  pair<std::wstring_const,int> apStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar1 = PVPManager::GetRankMonthReward(this_00);
  if (*(int *)(lVar1 + 0x10) < 1) {
    OnRankMonthRewardCallback((UIMessageBox *)this,0);
  }
  else {
    this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_01 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_01,2);
      pmVar2 = amStack_98;
      TodStringTranslate(L"[PVP_RANK_MONTHREWARD_TITLE1]");
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_68);
      std::pair<std::wstring_const,int>::pair<wchar_t_const(&)[7],void>
                (apStack_80,L"{NUM}",(int *)(lVar1 + 0xc));
      std::
      map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
      ::insert((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
                *)amStack_68,(pair *)apStack_80);
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)apStack_80);
      std::pair<std::wstring_const,int>::pair<wchar_t_const(&)[7],void>
                (apStack_80,L"{MEDAL}",(int *)(lVar1 + 0x10));
      std::
      map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
      ::insert((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
                *)amStack_68,(pair *)apStack_80);
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)apStack_80);
      std::string::string((string *)apStack_80,"[PVP_RANK_MONTHREWARD_CONTENT1]");
      StringHelper::ReplaceNumberString((StringHelper *)apStack_80,(string *)amStack_68,pmVar2);
      std::string::~string((string *)apStack_80);
      nop();
      UIMessageBox::SetMessage(this_01,awStack_88,awStack_90);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnRankMonthRewardCallback);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<PVPEntryDlg,void(PVPEntryDlg::*)(UIMessageBox*,int)>(aDStack_38,apStack_80);
      UIMessageBox::SetCallback(this_01,aDStack_38);
      FUN_05476c50(awStack_88);
      std::
      map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
      ::~map((map<std::wstring,int,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,int>>>
              *)amStack_68);
      FUN_05476c50(awStack_90);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::OnCreate() */

void __thiscall PVPEntryDlg::OnCreate(PVPEntryDlg *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  long lVar5;
  UIWidgetImage *pUVar6;
  UIWidgetText *pUVar7;
  PVZ2UIButton *pPVar8;
  PVPCurrencyBar *this_02;
  long *plVar9;
  PVPCompensationNoticeDlgCaller *this_03;
  ResourceInfo *pRVar10;
  RtClass *pRVar11;
  PopAnimRig *pPVar12;
  CrazyNPCManager *pCVar13;
  long lVar14;
  long lVar15;
  string asStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar5 = ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_50,"Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  iVar4 = *(int *)(this + 0x54);
  *(int *)(pUVar6 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar6 + 0x50)) / 2;
  *(int *)(pUVar6 + 0x4c) = (iVar4 - *(int *)(pUVar6 + 0x54)) / 2;
  std::string::string(asStack_50,"Cup_Text");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_50);
  *(UIWidgetText **)(this + 0x140) = pUVar7;
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"RankIcon");
  pPVar8 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_50);
  *(PVZ2UIButton **)(this + 0x148) = pPVar8;
  std::string::~string(asStack_50);
  nop();
  this_02 = ::operator_new(0x150);
  PVPCurrencyBar::PVPCurrencyBar(this_02);
  lVar14 = *(long *)pUVar6;
  *(PVPCurrencyBar **)(this + 0x138) = this_02;
  (**(code **)(lVar14 + 0x60))(pUVar6);
  std::string::string(asStack_50,"TopBar");
  lVar14 = UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  iVar4 = *(int *)(lVar14 + 0x48);
  iVar1 = *(int *)(lVar14 + 0x50);
  lVar15 = *(long *)(this + 0x138);
  iVar3 = FUN_04af9bf0(10);
  *(undefined4 *)(lVar15 + 0x4c) = *(undefined4 *)(lVar14 + 0x4c);
  *(int *)(lVar15 + 0x48) = iVar4 + iVar1 + iVar3;
  std::operator+((string *)&DAT_06b828b8,"_Timer");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  (**(code **)(*plVar9 + 0x158))(plVar9,0);
  std::operator+((string *)&DAT_06b828c0,"_Timer");
  plVar9 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  (**(code **)(*plVar9 + 0x158))(plVar9,0);
  onPVPLogin(this,true);
  iVar4 = FUN_04af9840(*(undefined4 *)(lVar5 + 0x1100));
  if (iVar4 == 0xb) {
    this_03 = (PVPCompensationNoticeDlgCaller *)PVPCompensationNoticeDlgCaller::getInstance();
    PVPCompensationNoticeDlgCaller::requestService(this_03,1);
  }
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x158);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)asStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  uVar2 = *(undefined4 *)(lVar5 + 0x1100);
  this[0x160] = (PVPEntryDlg)0x0;
  this[0x171] = (PVPEntryDlg)0x1;
  this[0x170] = (PVPEntryDlg)0x0;
  iVar4 = FUN_04af9840(uVar2);
  if (iVar4 == 1) {
    std::string::string(asStack_50,"TimeTunnel");
    UI::Dialog::AddResGroup((Dialog *)this,asStack_50);
    std::string::~string(asStack_50);
    nop();
    std::string::string(asStack_60,"POPANIM_EFFECTS_TIME_TUNNEL");
    GetPAMByName(asStack_60);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
    pRVar11 = (RtClass *)PopAnimRig::StaticGetClass();
    PopAnimRig::CreateRig((PopAnim *)pRVar10,pRVar11);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    std::string::~string(asStack_60);
    nop();
    pPVar12 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    std::string::string((string *)aRStack_58,"animation");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTutorialAnimDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PVPEntryDlg,void(PVPEntryDlg::*)(std::string_const&)>(aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar12,aRStack_58,0,aDStack_38);
    std::string::~string((string *)aRStack_58);
    nop();
    this[0x160] = (PVPEntryDlg)0x0;
    uVar2 = *(undefined4 *)(lVar5 + 0x1100);
    this[0x170] = (PVPEntryDlg)0x0;
    this[0x171] = (PVPEntryDlg)0x0;
    iVar4 = FUN_04af9840(uVar2);
  }
  if (iVar4 == 4) {
    pCVar13 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"PVP_TRAINZB_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPVPNarrationFinished);
    Sexy::Delegate0::Delegate0<PVPEntryDlg,void(PVPEntryDlg::*)()>
              ((Delegate0 *)aDStack_38,asStack_50);
    std::string::string((string *)aRStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar13,asStack_60,(Delegate0 *)aDStack_38,aRStack_58);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    iVar4 = FUN_04af9840(*(undefined4 *)(lVar5 + 0x1100));
  }
  if (iVar4 == 0xb) {
    ShowRankMonthRewardMessage(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPEntryDlg::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PVPEntryDlg::DrawAll(PVPEntryDlg *this,ModalFlags *param_1,Graphics *param_2)

{
  RtWeakPtr *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  PopAnimRig *pPVar8;
  float fVar9;
  float fVar10;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  pRVar1 = (RtWeakPtr *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar6) && (this[0x160] == (PVPEntryDlg)0x0)) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_2);
    iVar2 = *(int *)(gLawnApp + 0xd4);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    iVar3 = *(int *)(lVar7 + 0x3c);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    fVar9 = *(float *)(lVar7 + 0x28);
    iVar4 = *(int *)(gLawnApp + 0xd8);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    iVar5 = *(int *)(lVar7 + 0x40);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    fVar10 = *(float *)(lVar7 + 0x28);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale
              (aSStack_30,(float)iVar2 / ((float)iVar3 * fVar9),
               (float)iVar4 / ((float)iVar5 * fVar10));
    pPVar8 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    PopAnimRig::SetRenderTransform(pPVar8,aSStack_30);
    pPVar8 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    PopAnimRig::Draw(pPVar8,param_2);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x168);
  bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar6) && (this[0x170] == (PVPEntryDlg)0x0)) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_2);
    iVar2 = *(int *)(gLawnApp + 0xd4);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    iVar3 = *(int *)(lVar7 + 0x3c);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    fVar9 = *(float *)(lVar7 + 0x28);
    iVar4 = *(int *)(gLawnApp + 0xd8);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    iVar5 = *(int *)(lVar7 + 0x40);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar7 = FUN_04af9898(*(undefined8 *)(lVar7 + 0x20));
    fVar10 = *(float *)(lVar7 + 0x28);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale
              (aSStack_30,(float)iVar2 / ((float)iVar3 * fVar9),
               (float)iVar4 / ((float)iVar5 * fVar10));
    pPVar8 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    PopAnimRig::SetRenderTransform(pPVar8,aSStack_30);
    pPVar8 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    PopAnimRig::Draw(pPVar8,param_2);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

