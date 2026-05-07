// Class: PVZ2UnchartedModeSelectLevelAnniversary


/* PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetReached
          (PVZ2UnchartedModeSelectLevelAnniversary *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::ScrollTargetInterrupted
          (PVZ2UnchartedModeSelectLevelAnniversary *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::GetLayoutName() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::GetLayoutName
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ2UnchartedModeSelectLevelAnniversary");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ2UnchartedModeSelectLevelAnniversary::SetEventNode(MapEventItem*) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::SetEventNode
          (PVZ2UnchartedModeSelectLevelAnniversary *this,MapEventItem *param_1)

{
  *(MapEventItem **)(this + 0x1a0) = param_1;
  return;
}


/* PVZ2UnchartedModeSelectLevelAnniversary::CalcChallengeButtonID(int, int) */

int __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::CalcChallengeButtonID
          (PVZ2UnchartedModeSelectLevelAnniversary *this,int param_1,int param_2)

{
  return param_1 + param_2 * 100;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::isSpecialLevel() */

void PVZ2UnchartedModeSelectLevelAnniversary::isSpecialLevel(void)

{
  bool bVar1;
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetCurrentLevel(___stack_chk_guard);
  bVar1 = std::operator==(asStack_10,"uncharted_special_n_4");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"uncharted_special_h_4");
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::ShowChallgenDefaultDesc(bool) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::ShowChallgenDefaultDesc
          (PVZ2UnchartedModeSelectLevelAnniversary *this,bool param_1)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ChallengeDefault");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevelAnniversary::ShowTaskPanel() */

PVZ2UnchartedModeSelectLevelTaskPanel * PVZ2UnchartedModeSelectLevelAnniversary::ShowTaskPanel(void)

{
  PVZ2UnchartedModeSelectLevelTaskPanel *pPVar1;
  char cVar2;
  PVZ2UnchartedModeSelectLevelTaskPanel *pPVar3;
  
  pPVar1 = UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance;
  pPVar3 = pPVar1;
  if (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance ==
      (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0) {
    pPVar3 = ::operator_new(0x140);
    PVZ2UnchartedModeSelectLevelTaskPanel::PVZ2UnchartedModeSelectLevelTaskPanel(pPVar3);
    UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance !=
          (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance
                    + 0x18))();
      }
      UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::m_pInstance =
           (PVZ2UnchartedModeSelectLevelTaskPanel *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::onSuccessRespond() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::onSuccessRespond
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04df91a4(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1c0));
  if (iVar1 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1a0) == (FilesystemSaveGameContext *)0x0) {
      std::string::string(asStack_10,"pvz1_001_n");
      nop();
    }
    else {
      uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1a0));
      FUN_05475d88(asStack_10,uVar2);
    }
    UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::CloseDialog();
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1a8),(SexyURL *)asStack_10);
    lVar3 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    PVZ_T();
    FUN_04df91f0(lVar3 + 0x19c);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevelAnniversary::onNetworkResponse(int, int) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::onNetworkResponse
          (PVZ2UnchartedModeSelectLevelAnniversary *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeSelectLevel::onNetworkResponse context=%d status=%d");
  if ((param_1 == 2) && (param_2 == 2)) {
    onSuccessRespond(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::showDescriptionWidget() */

void PVZ2UnchartedModeSelectLevelAnniversary::showDescriptionWidget(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_04df99bc(0x28a);
    iVar3 = FUN_04df99bc(0x168);
  }
  else {
    iVar2 = FUN_04df99bc(600);
    iVar3 = FUN_04df99bc(0x19a);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[UNCHARTED_ANNIVERSARY_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[UNCHARTED_ANNIVERSARY_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04df99bc(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevelAnniversary::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::ButtonDepress
          (PVZ2UnchartedModeSelectLevelAnniversary *this,int param_1)

{
  if (param_1 == 0x3eb) {
    showDescriptionWidget();
    return;
  }
  if (param_1 != 0x3ec) {
    if (param_1 != 1000) {
      return;
    }
    UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::CloseDialog();
    return;
  }
  ShowTaskPanel();
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevelAnniversary::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::ButtonDepress
          (PVZ2UnchartedModeSelectLevelAnniversary *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::InitTaskButton() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::InitTaskButton
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  UIWidgetText *pUVar1;
  UIWidgetImage *pUVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_3");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar1 + 0x90))(pUVar1,1);
  std::string::string(asStack_10,"UIImage_12");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar2 + 0x90))(pUVar2,1);
  lVar3 = Sexy::LazySingleton<UnchartedBirthdayTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar3 + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevelAnniversary::PVZ2UnchartedModeSelectLevelAnniversary() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::PVZ2UnchartedModeSelectLevelAnniversary
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069d2330;
  *(undefined **)(this + 0xd8) = &DAT_069d2690;
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevelAnniversary_069d26d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  Sexy::Insets::Insets((Insets *)(this + 400));
  Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1d8));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x148));
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x160));
  *(undefined8 *)(this + 0x178) = 0;
  this[0x1f0] = (PVZ2UnchartedModeSelectLevelAnniversary)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  std::
  vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
  ::clear((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
           *)(this + 0x1f8));
  std::
  vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
  ::clear((vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
           *)(this + 0x210));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SelectChallenge);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::SelectChallenge,&local_40);
  return;
}


/* PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevelAnniversary_069d26d8;
  *(undefined ***)this = &PTR_GetClass_069d2330;
  *(undefined **)(this + 0xd8) = &DAT_069d2690;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
  ::~vector((vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
             *)(this + 0x210));
  std::
  vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
  ::~vector((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
             *)(this + 0x1f8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1d8));
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::~vector
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x160));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x148));
  UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::~UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary> *)this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  ~PVZ2UnchartedModeSelectLevelAnniversary(this + -0x138);
  return;
}


/* PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  ~PVZ2UnchartedModeSelectLevelAnniversary(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::~PVZ2UnchartedModeSelectLevelAnniversary
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  ~PVZ2UnchartedModeSelectLevelAnniversary(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::InitBonusWidgets() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::InitBonusWidgets
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UIScrollControl *pUVar11;
  long lVar12;
  Widget *this_00;
  uint *puVar13;
  PVZ2UnchartedModeBonusWidget *this_01;
  ulong uVar14;
  bool extraout_w1;
  bool extraout_w1_00;
  ScrollWidget *pSVar15;
  ulong uVar16;
  int iVar17;
  undefined8 local_60;
  PVZ2UnchartedModeBonusWidget *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetCurrentLevelPreviewBonus((PVZ2UnchartedModeUtils *)0x1,extraout_w1);
  PVZ2UnchartedModeUtils::GetCurrentLevelFirstRewardBonus
            ((PVZ2UnchartedModeUtils *)0x1,extraout_w1_00);
  cVar4 = PVZ2UnchartedModeUtils::IsCurrentLevelFirstReward();
  iVar5 = FUN_04df9218(local_50,local_48);
  iVar6 = FUN_04df9218(local_38,local_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (cVar4 == '\0') {
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::reserve
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,(long)iVar5);
  }
  else {
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::reserve
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,(long)(iVar5 + iVar6));
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_58,(__normal_iterator *)&local_60);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
    std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::
    insert<__gnu_cxx::__normal_iterator<UnchartedModeLevelBonusData*,std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>>,void>
              ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
               &local_20,local_58,uVar9,uVar10);
  }
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_58,(__normal_iterator *)&local_60);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_50);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_50);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::
  insert<__gnu_cxx::__normal_iterator<UnchartedModeLevelBonusData*,std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>>,void>
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_20,local_58,uVar9,uVar10);
  std::string::string((string *)&local_58,"UIScroll_0");
  pUVar11 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_58);
  *(UIScrollControl **)(this + 0x140) = pUVar11;
  std::string::~string((string *)&local_58);
  nop();
  lVar12 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x140));
  pSVar15 = *(ScrollWidget **)(this + 0x140);
  *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(pSVar15 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar15,1);
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  iVar7 = FUN_04df99bc(5);
  iVar8 = FUN_04df99bc(2);
  iVar6 = *(int *)(*(long *)(this + 0x140) + 0x54) + iVar8 * -2;
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x148));
  iVar5 = iVar7 + iVar6;
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::operator=
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x148),(vector *)&local_20);
  std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::clear
            ((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *)
             (this + 0x160));
  uVar16 = 0;
  iVar17 = iVar7;
  while( true ) {
    uVar9 = local_20;
    uVar14 = FUN_04df9218(local_20,local_18);
    if (uVar14 <= uVar16) break;
    puVar13 = (uint *)FUN_04df922c(uVar9,uVar16);
    uVar1 = *puVar13;
    uVar2 = puVar13[1];
    uVar3 = puVar13[2];
    Sexy::OutputDebugStrF
              ((wchar_t *)"anniversary finalBonusDataList : %d, id = %d ",uVar16 & 0xffffffff,
               (ulong)uVar1);
    this_01 = ::operator_new(0x108);
    PVZ2UnchartedModeBonusWidget::PVZ2UnchartedModeBonusWidget(this_01,uVar1,uVar2,SUB41(uVar3,0));
    local_58 = this_01;
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar17,iVar8,iVar6,iVar6);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,local_58);
    std::vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>>::
    push_back((vector<PVZ2UnchartedModeBonusWidget*,std::allocator<PVZ2UnchartedModeBonusWidget*>> *
              )(this + 0x160),&local_58);
    uVar16 = uVar16 + 1;
    iVar17 = iVar17 + iVar5;
  }
  if (uVar14 < 4) {
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,iVar5 * 3 + iVar7,*(undefined4 *)(this + 0x54));
  }
  else {
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,iVar7 + iVar5 * (int)uVar14,*(undefined4 *)(this + 0x54));
  }
  *(Widget **)(this + 0x178) = this_00;
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_00);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_20);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_38);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             &local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::RefreshUI() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::RefreshUI(PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  PVZ2UnchartedModeAnniversaryChallengeWidget **ppPVar10;
  UIWidgetText *pUVar11;
  UIScrollControl *this_00;
  Image *pIVar12;
  Image *pIVar13;
  long *plVar14;
  PVZ2UnchartedModeAnniversaryChallengeDesc *pPVar15;
  Widget *this_01;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar19 = 0;
  bVar23 = false;
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  iVar21 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar20 = *(undefined8 *)(this + 0x210);
  lVar7 = FUN_04df9280(uVar20,*(undefined8 *)(this + 0x218));
  uVar22 = uVar6;
  iVar16 = 0;
  bVar2 = bVar23;
  if (lVar7 != 0) {
    do {
      iVar21 = iVar16;
      uVar17 = 0;
      puVar8 = (undefined8 *)FUN_04df9294(uVar20,uVar19);
      uVar18 = *puVar8;
      uVar9 = FUN_04df92a0(uVar18,puVar8[1]);
      if (uVar9 != 0) {
        do {
          ppPVar10 = (PVZ2UnchartedModeAnniversaryChallengeWidget **)FUN_04df92ac(uVar18,uVar17);
          cVar3 = FUN_04df9200((*ppPVar10)[0x318]);
          if (cVar3 != '\0') {
            iVar21 = iVar21 + 1;
            std::
            vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
            ::push_back((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
                         *)&local_20,ppPVar10);
            uVar20 = *(undefined8 *)(this + 0x210);
            if (uVar19 == 0) {
              uVar22 = uVar22 + 1;
              uVar6 = 1;
            }
            else if ((int)uVar19 == 1) {
              uVar22 = uVar22 + 2;
              bVar2 = true;
            }
            else if ((int)uVar19 == 2) {
              uVar22 = uVar22 + 3;
              bVar23 = true;
            }
            puVar8 = (undefined8 *)FUN_04df9294(uVar20,uVar19);
            uVar18 = *puVar8;
            uVar9 = FUN_04df92a0(uVar18,puVar8[1]);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar9);
      }
      uVar19 = uVar19 + 1;
      uVar9 = FUN_04df9280(uVar20,*(undefined8 *)(this + 0x218));
      iVar16 = iVar21;
    } while (uVar19 < uVar9);
  }
  uVar19 = 0;
  while( true ) {
    uVar20 = *(undefined8 *)(this + 0x1f8);
    uVar9 = FUN_04df92a0(uVar20,*(undefined8 *)(this + 0x200));
    if (uVar9 <= uVar19) break;
    plVar14 = (long *)FUN_04df92ac(uVar20,uVar19);
    FUN_04df91f8(*plVar14 + 0x318,0);
    uVar19 = uVar19 + 1;
  }
  if (bVar23) {
    uVar18 = 2;
LAB_04dffb1c:
    plVar14 = (long *)FUN_04df92ac(uVar20,uVar18);
    FUN_04df91f8(*plVar14 + 0x318,1);
  }
  else {
    if (bVar2) {
      uVar18 = 1;
      goto LAB_04dffb1c;
    }
    if (uVar6 != 0) {
      uVar18 = 0;
      goto LAB_04dffb1c;
    }
  }
  std::string::string(asStack_28,"UIText_ChallengeTotalStar");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  if (pUVar11 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d",asStack_28,(ulong)uVar22);
    PuzzleTip::SetTip(pUVar11,asStack_28);
    FUN_05476c50(asStack_28);
  }
  ShowChallgenDefaultDesc(this,iVar21 == 0);
  std::string::string(asStack_28,"UIScroll_1");
  this_00 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  lVar7 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_00);
  *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(this_00 + 0x50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d398);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9d340);
  Sexy::ScrollWidget::EnableIndicators((ScrollWidget *)this_00,pIVar12,pIVar13);
  Sexy::ScrollWidget::SetPermanentIndicators((ScrollWidget *)this_00,true);
  plVar14 = *(long **)(this + 0x228);
  if (plVar14 == (long *)0x0) {
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    *(Widget **)(this + 0x228) = this_01;
  }
  else {
    (**(code **)(*plVar14 + 0x80))(plVar14,1,1);
  }
  uVar1 = *(undefined4 *)(this_00 + 0x50);
  iVar21 = *(int *)(this_00 + 0x54) / 5;
  if (bVar23) {
    pPVar15 = ::operator_new(0xf8);
    PVZ2UnchartedModeAnniversaryChallengeDesc::PVZ2UnchartedModeAnniversaryChallengeDesc
              (pPVar15,0,3,true);
    lVar7 = *(long *)pPVar15;
  }
  else {
    if (bVar2) {
      pPVar15 = ::operator_new(0xf8);
      iVar16 = 2;
    }
    else {
      if (uVar6 == 0) goto LAB_04dff900;
      pPVar15 = ::operator_new(0xf8);
      iVar16 = 1;
    }
    PVZ2UnchartedModeAnniversaryChallengeDesc::PVZ2UnchartedModeAnniversaryChallengeDesc
              (pPVar15,0,iVar16,true);
    lVar7 = *(long *)pPVar15;
  }
  (**(code **)(lVar7 + 0x198))(pPVar15,0,0,uVar1,iVar21);
  PVZ2UnchartedModeAnniversaryChallengeDesc::InitView(pPVar15);
  (**(code **)(**(long **)(this + 0x228) + 0x60))(*(long **)(this + 0x228),pPVar15);
LAB_04dff900:
  uVar19 = 0;
  iVar16 = iVar21;
  while( true ) {
    uVar20 = local_20;
    uVar9 = FUN_04df92a0(local_20,local_18);
    if (uVar9 <= uVar19) break;
    plVar14 = (long *)FUN_04df92ac(uVar20,uVar19);
    lVar7 = *plVar14;
    iVar4 = FUN_04df9204(*(undefined4 *)(lVar7 + 0x314));
    iVar5 = FUN_04df9208(*(undefined4 *)(lVar7 + 0x31c));
    pPVar15 = ::operator_new(0xf8);
    PVZ2UnchartedModeAnniversaryChallengeDesc::PVZ2UnchartedModeAnniversaryChallengeDesc
              (pPVar15,iVar4,iVar5,false);
    (**(code **)(*(long *)pPVar15 + 0x198))(pPVar15,0,iVar16,uVar1,iVar21);
    PVZ2UnchartedModeAnniversaryChallengeDesc::InitView(pPVar15);
    (**(code **)(**(long **)(this + 0x228) + 0x60))(*(long **)(this + 0x228),pPVar15);
    uVar19 = uVar19 + 1;
    iVar16 = iVar16 + iVar21;
  }
  if (uVar9 != 0) {
    (**(code **)(**(long **)(this + 0x228) + 0x198))
              (*(long **)(this + 0x228),0,0,*(undefined4 *)(this_00 + 0x50),
               iVar21 + iVar21 * (int)uVar9);
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,*(undefined8 *)(this + 0x228));
  std::
  vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
  ::~vector((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
             *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UnchartedModeSelectLevelAnniversary::SelectChallenge(int, int, bool) */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::SelectChallenge
          (PVZ2UnchartedModeSelectLevelAnniversary *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  
  if (!param_3) {
    iVar1 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
    LevelBasedModifierModuleMgr::RemoveLevelModifierModuleCollections(iVar1,param_2 + -1);
    RefreshUI(this);
    return;
  }
  iVar1 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
  LevelBasedModifierModuleMgr::AddLevelModifierModuleCollections(iVar1,param_2 + -1);
  RefreshUI(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::InitChallengeWidgets() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::InitChallengeWidgets
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UnchartedModeUtils *this_00;
  PVZ2UnchartedModeAnniversaryChallengeWidget *pPVar8;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  LevelBasedModifierModuleMgr *this_03;
  vector *pvVar9;
  RtWeakPtrBase *pRVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  string asStack_68 [8];
  PVZ2UnchartedModeAnniversaryChallengeWidget *local_60;
  PVZ2UnchartedModeAnniversaryChallengeWidget *local_58;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"Widget_ChallengeSelectContainer");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  lVar3 = plVar7[10];
  iVar2 = *(int *)((long)plVar7 + 0x54) / 3;
  iVar12 = (int)((float)iVar2 * 1.1);
  iVar4 = (int)((float)iVar12 * 1.6);
  this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
  FUN_05475d88(asStack_20,asStack_68);
  PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(asStack_20);
  std::string::~string(asStack_20);
  iVar14 = 0;
  iVar6 = 0;
  do {
    iVar1 = iVar6 + 1;
    iVar5 = CalcChallengeButtonID(this,0,iVar1);
    pPVar8 = ::operator_new(0x350);
    PVZ2UnchartedModeAnniversaryChallengeWidget::PVZ2UnchartedModeAnniversaryChallengeWidget
              (pPVar8,iVar5,true);
    local_60 = pPVar8;
    (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,0,iVar14,iVar4,iVar2);
    PVZ2UnchartedModeAnniversaryChallengeWidget::InitView(local_60);
    (**(code **)(*plVar7 + 0x60))(plVar7,local_60);
    std::
    vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
    ::push_back((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
                 *)(this + 0x1f8),&local_60);
    this_01 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
    (**(code **)(*plVar7 + 0x60))(plVar7,this_01);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar4,iVar14,(int)lVar3 - iVar4,iVar2);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
    this_02 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_02);
    this_03 = (LevelBasedModifierModuleMgr *)
              Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
    pvVar9 = (vector *)LevelBasedModifierModuleMgr::GetLevelModifierModuleCollections(this_03,iVar6)
    ;
    std::
    vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
    ::vector((vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
              *)&local_38,pvVar9);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    uVar13 = 0;
    iVar6 = 0;
    while( true ) {
      uVar11 = FUN_04df926c(local_38,local_30);
      if (uVar11 <= uVar13) break;
      Sexy::Insets::Insets(aIStack_48,iVar6,0,iVar12,iVar2);
      iVar5 = CalcChallengeButtonID(this,(int)uVar13,iVar1);
      pPVar8 = ::operator_new(0x350);
      PVZ2UnchartedModeAnniversaryChallengeWidget::PVZ2UnchartedModeAnniversaryChallengeWidget
                (pPVar8,iVar5,false);
      local_58 = pPVar8;
      (**(code **)(*(long *)pPVar8 + 0x1a0))(pPVar8,aIStack_48);
      pPVar8 = local_58;
      pRVar10 = (RtWeakPtrBase *)FUN_04df92b4(local_38,uVar13);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar10);
      PVZ2UnchartedModeAnniversaryChallengeWidget::SetProps(pPVar8,aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      PVZ2UnchartedModeAnniversaryChallengeWidget::InitView(local_58);
      std::
      vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
      ::push_back((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
                   *)asStack_20,&local_58);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,local_58);
      uVar13 = uVar13 + 1;
      iVar6 = iVar6 + iVar12;
    }
    std::
    vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
    ::push_back((vector<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>,std::allocator<std::vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>>>
                 *)(this + 0x210),(vector *)asStack_20);
    iVar6 = FUN_04df926c(local_38,local_30);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar4,iVar14,iVar12 * iVar6,iVar2);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    std::
    vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
    ::~vector((vector<PVZ2UnchartedModeAnniversaryChallengeWidget*,std::allocator<PVZ2UnchartedModeAnniversaryChallengeWidget*>>
               *)asStack_20);
    std::
    vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
    ::~vector((vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
               *)&local_38);
    iVar14 = iVar14 + iVar2;
    iVar6 = iVar1;
  } while (iVar1 != 3);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::InitView() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::InitView(PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  PVZ2UnchartedModeSelectLevelAnniversary PVar1;
  UIWidgetText *pUVar2;
  LevelUtils *this_00;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  PVZ2UIImageButton *this_01;
  long *plVar6;
  string asStack_b8 [8];
  undefined1 auStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  string asStack_78 [56];
  string asStack_40 [56];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeUtils::GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_40,asStack_b8);
  PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(asStack_40);
  std::string::~string(asStack_40);
  std::string::string(asStack_40,"Title");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar3 = LevelUtils::GetLevelInfo(this_00,asStack_b8);
  if (lVar3 != -0x10) {
    StringHelper::ToStringValue((string *)(lVar3 + 0x20));
    PuzzleTip::SetTip(pUVar2,asStack_40);
    FUN_05476c50(asStack_40);
  }
  PVZ2UnchartedModeUtils::IsHardMode();
  std::string::string(asStack_40,"UIText_2");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  uVar4 = PVZ2UnchartedModeUtils::GetCurrentLevelStarNumber();
  uVar5 = PVZ2UnchartedModeUtils::GetCurrentLevelMaxStarNumber();
  Sexy::StrFormat(L"%d/%d",auStack_b0,uVar4 & 0xffffffff,uVar5 & 0xffffffff);
  PuzzleTip::SetTip(pUVar2,auStack_b0);
  PVar1 = (PVZ2UnchartedModeSelectLevelAnniversary)PVZ2UnchartedModeUtils::IsTimeLimitWorld();
  this[0x1f0] = PVar1;
  this_01 = ::operator_new(0x368);
  PVZ2UIImageButton::PVZ2UIImageButton(this_01,0x3ed);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b9d368,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b9d220,3);
  PVZ2UIButton::SetDialogStates
            ((PVZ2UIButton *)this_01,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  std::string::string(asStack_40,"StartButton");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,*(undefined4 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x4c),
             *(undefined4 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x54));
  std::string::string(asStack_78,"[MAINMENU_PLAY]");
  StringHelper::ToStringValue(asStack_78);
  PVZ2UIImageButton::SetTitle(this_01,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string(asStack_78);
  nop();
  PVZ2UIImageButton::UpdateParams(this_01);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PressStartButton);
  Sexy::Delegate0::
  Delegate0<PVZ2UnchartedModeSelectLevelAnniversary,void(PVZ2UnchartedModeSelectLevelAnniversary::*)()>
            (aDStack_a8,asStack_40);
  CornucopiaShopButton::SetClickCallback((CornucopiaShopButton *)this_01,aDStack_a8);
  std::string::string(asStack_40,"Background_0");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*plVar6 + 0x60))(plVar6,this_01);
  InitBonusWidgets(this);
  InitChallengeWidgets(this);
  InitTaskButton(this);
  FUN_05476c50(auStack_b0);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::OnCreate() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::OnCreate(PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  long lVar1;
  LevelBasedModifierModuleMgr *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar1 + 0x48) = (*(int *)(gLawnApp + 0x724) - *(int *)(lVar1 + 0x50)) / 2;
  InitView(this);
  this_00 = (LevelBasedModifierModuleMgr *)
            Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
  LevelBasedModifierModuleMgr::ClearSelectedCollections(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelAnniversary::PressStartButton() */

void __thiscall
PVZ2UnchartedModeSelectLevelAnniversary::PressStartButton
          (PVZ2UnchartedModeSelectLevelAnniversary *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  PVZ2UnchartedModeUtils *this_00;
  size_t *psVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  TGALogMgr *pTVar12;
  long *plVar13;
  DString *__n;
  size_t __n_00;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  string asStack_2c0 [8];
  string asStack_2b8 [8];
  undefined8 local_2b0;
  undefined8 local_2a8;
  TGAUnchartedData aTStack_298 [64];
  undefined1 auStack_258 [8];
  string asStack_250 [72];
  DString aDStack_208 [144];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  DString *local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  iVar3 = FUN_04df91a4(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1c0));
  if (iVar3 != 0) {
    if (*(FilesystemSaveGameContext **)(this + 0x1a0) == (FilesystemSaveGameContext *)0x0) {
      __n = aDStack_208;
      std::string::string(asStack_2c0,"pvz1_001_n");
      nop();
    }
    else {
      uVar5 = Sexy::FilesystemSaveGameContext::GetBuffer
                        (*(FilesystemSaveGameContext **)(this + 0x1a0));
      FUN_05475d88(asStack_2c0,uVar5);
    }
    UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::CloseDialog();
    uVar14 = 0;
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1a8),(SexyURL *)asStack_2c0);
    lVar6 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    FUN_04df955c(lVar6 + 0x194);
    TGAUnchartedData::TGAUnchartedData(aTStack_298);
    DString::DString(aDStack_208,9);
    pcVar7 = (char *)DString::c_str(aDStack_208);
    std::string::append((string *)aTStack_298,pcVar7,(size_t)__n);
    DString::~DString(aDStack_208);
    uVar4 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar4);
    std::string::string((string *)aDStack_208,"");
    FUN_05462980(auStack_178,aDStack_208);
    std::string::~string((string *)aDStack_208);
    nop();
    PVZ2UnchartedModeUtils::GetCurrentLevel(this_00);
    FUN_05475d88(aDStack_208,asStack_2b8);
    cVar2 = PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(aDStack_208);
    std::string::~string((string *)aDStack_208);
    iVar3 = Sexy::LazySingleton<UnchartedBirthdayTaskManager>::GetInstancePtr();
    __n_00 = 1;
    HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar3 + 8,(bool)(cVar2 + '\x01'));
    uVar5 = local_2b0;
    lVar6 = FUN_04df92bc(local_2b0,local_2a8);
    if (lVar6 != 0) {
      do {
        psVar8 = (size_t *)FUN_04df92c8(uVar5,uVar14);
        __n_00 = *psVar8;
        uVar4 = *(undefined4 *)(__n_00 + 8);
        if (*(int *)(__n_00 + 0x14) == 3) {
          uVar5 = FUN_0546065c(auStack_168,uVar4);
          uVar5 = FUN_054603b8(uVar5,&DAT_055933a0);
          uVar5 = FUN_054603b8(uVar5,&DAT_05594c88);
          FUN_054603b8(uVar5,&DAT_05594620);
        }
        else if (*(int *)(__n_00 + 0x14) == 2) {
          uVar5 = FUN_0546065c(auStack_168,uVar4);
          uVar5 = FUN_054603b8(uVar5,&DAT_055933a0);
          uVar5 = FUN_054603b8(uVar5,&DAT_05594210);
          FUN_054603b8(uVar5,&DAT_05594620);
        }
        else {
          uVar5 = FUN_0546065c(auStack_168,uVar4);
          uVar5 = FUN_054603b8(uVar5,&DAT_055933a0);
          uVar5 = FUN_054603b8(uVar5,&DAT_055941c8);
          FUN_054603b8(uVar5,&DAT_05594620);
        }
        uVar5 = local_2b0;
        uVar14 = uVar14 + 1;
        uVar9 = FUN_04df92bc(local_2b0,local_2a8);
      } while (uVar14 < uVar9);
    }
    lVar18 = 0;
    FUN_05462824(aDStack_208,auStack_178);
    iVar3 = 0;
    FUN_05474278(auStack_258,aDStack_208);
    std::string::~string((string *)aDStack_208);
    uVar5 = *(undefined8 *)(this + 0x210);
    lVar6 = FUN_04df9280(uVar5,*(undefined8 *)(this + 0x218));
    if (lVar6 != 0) {
      do {
        puVar10 = (undefined8 *)FUN_04df9294(uVar5,lVar18);
        uVar16 = *puVar10;
        lVar11 = FUN_04df92a0(uVar16,puVar10[1]);
        iVar17 = (int)lVar18;
        if (iVar17 == 2) {
          lVar15 = 0;
          iVar17 = iVar3;
          while (iVar3 = iVar17, lVar15 != lVar11) {
            lVar1 = lVar15 + 1;
            plVar13 = (long *)FUN_04df92ac(uVar16,lVar15);
            cVar2 = FUN_04df9200(*(undefined1 *)(*plVar13 + 0x318));
            lVar15 = lVar1;
            iVar17 = iVar3 + 3;
            if (cVar2 == '\0') {
              iVar17 = iVar3;
            }
          }
        }
        else {
          lVar15 = 0;
          if (iVar17 == 0) {
            while (lVar15 != lVar11) {
              lVar1 = lVar15 + 1;
              plVar13 = (long *)FUN_04df92ac(uVar16,lVar15);
              cVar2 = FUN_04df9200(*(undefined1 *)(*plVar13 + 0x318));
              lVar15 = lVar1;
              if (cVar2 != '\0') {
                iVar3 = iVar3 + 1;
              }
            }
          }
          else if (iVar17 == 1) {
            lVar15 = 0;
            iVar17 = iVar3;
            while (iVar3 = iVar17, lVar15 != lVar11) {
              lVar1 = lVar15 + 1;
              plVar13 = (long *)FUN_04df92ac(uVar16,lVar15);
              cVar2 = FUN_04df9200(*(undefined1 *)(*plVar13 + 0x318));
              lVar15 = lVar1;
              iVar17 = iVar3 + 2;
              if (cVar2 == '\0') {
                iVar17 = iVar3;
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar6);
    }
    DString::DString(aDStack_208,iVar3);
    pcVar7 = (char *)DString::c_str(aDStack_208);
    std::string::append(asStack_250,pcVar7,__n_00);
    DString::~DString(aDStack_208);
    pTVar12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)aDStack_208,aTStack_298);
    TGALogMgr::LogUncharted(pTVar12,aDStack_208);
    TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)aDStack_208);
    lVar6 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    FUN_04df91e8(lVar6 + 0x198,iVar3);
    std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
              ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_2b0);
    std::string::~string(asStack_2b8);
    FUN_054617bc(auStack_178);
    TGAUnchartedData::~TGAUnchartedData(aTStack_298);
    std::string::~string(asStack_2c0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

