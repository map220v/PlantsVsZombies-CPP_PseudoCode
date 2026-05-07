// Class: UIPennyClassroom


/* UIPennyClassroom::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPennyClassroom::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyClassroom::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPennyClassroom::ScrollTargetReached(UIPennyClassroom *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPennyClassroom::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPennyClassroom::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyClassroom::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPennyClassroom::ScrollTargetInterrupted(UIPennyClassroom *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::GetLayoutName() */

void __thiscall UIPennyClassroom::GetLayoutName(UIPennyClassroom *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyClassroom");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPennyClassroom::NotifyCloseDialog() */

void UIPennyClassroom::NotifyCloseDialog(void)

{
  if (UISingletonDialog<UIPennyClassroom>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIPennyClassroom>::m_pInstance + 0x318))();
    UISingletonDialog<UIPennyClassroom>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::InitMaterial() */

void __thiscall UIPennyClassroom::InitMaterial(UIPennyClassroom *this)

{
  UIWidgetText *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayCoinText");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x210) = *(undefined4 *)(this + 0x158);
  Sexy::StrFormat("%d",asStack_10);
  UIWidgetText::SetString(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroom::NotifyUpdateTrainingWidget() */

void UIPennyClassroom::NotifyUpdateTrainingWidget(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this,0x2a5b,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::ShowTips() */

void UIPennyClassroom::ShowTips(void)

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
    iVar2 = FUN_04de8b64(0x28a);
    iVar3 = FUN_04de8b64(0x1a4);
  }
  else {
    iVar2 = FUN_04de8b64(600);
    iVar3 = FUN_04de8b64(0x1cc);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[REVIVE_TIP]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PENNY_CLASSROOM_TIPS]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_04de8b64(2);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::UIPennyClassroom() */

void __thiscall UIPennyClassroom::UIPennyClassroom(UIPennyClassroom *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIPennyClassroom>::UISingletonDialog
            ((UISingletonDialog<UIPennyClassroom> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069cd2c0;
  *(undefined **)(this + 0xd8) = &DAT_069cd620;
  *(undefined ***)(this + 0x138) = &PTR__UIPennyClassroom_069cd668;
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x140));
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyCloseDialog);
  Sexy::Delegate0::Delegate0<UIPennyClassroom,void(UIPennyClassroom::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyCloseDialog,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyUpdateTrainingWidget);
  Sexy::Delegate0::Delegate0<UIPennyClassroom,void(UIPennyClassroom::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyUpdateTrainingWidget,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIPennyClassroom,void(UIPennyClassroom::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroom::~UIPennyClassroom() */

void __thiscall UIPennyClassroom::~UIPennyClassroom(UIPennyClassroom *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069cd620;
  *(undefined ***)this = &PTR_GetClass_069cd2c0;
  *(undefined ***)(this + 0x138) = &PTR__UIPennyClassroom_069cd668;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x140))
  ;
  UISingletonDialog<UIPennyClassroom>::~UISingletonDialog
            ((UISingletonDialog<UIPennyClassroom> *)this);
  return;
}


/* non-virtual thunk to UIPennyClassroom::~UIPennyClassroom() */

void __thiscall UIPennyClassroom::~UIPennyClassroom(UIPennyClassroom *this)

{
  ~UIPennyClassroom(this + -0x138);
  return;
}


/* UIPennyClassroom::~UIPennyClassroom() */

void __thiscall UIPennyClassroom::~UIPennyClassroom(UIPennyClassroom *this)

{
  ~UIPennyClassroom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPennyClassroom::~UIPennyClassroom() */

void __thiscall UIPennyClassroom::~UIPennyClassroom(UIPennyClassroom *this)

{
  ~UIPennyClassroom(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::InitFinalBonus() */

void __thiscall UIPennyClassroom::InitFinalBonus(UIPennyClassroom *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  UIRewardFrame *this_00;
  ulong uVar8;
  int iVar9;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"FinalBonusContainer");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  iVar2 = (int)plVar5[10] / 5;
  iVar3 = FUN_04de8b64(3);
  iVar1 = *(int *)((long)plVar5 + 0x54);
  iVar3 = iVar2 - iVar3;
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)&local_20,
             (vector *)(this + 0x160));
  uVar6 = local_20;
  iVar4 = FUN_04de7f30(local_20,local_18);
  if (0 < iVar4) {
    uVar8 = 0;
    iVar9 = 0;
    while( true ) {
      piVar7 = (int *)FUN_04de7f60(uVar6,uVar8);
      this_00 = (UIRewardFrame *)UIRewardFrame::CreateUIRewardFrame(*piVar7,0,true);
      (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar9,(iVar1 - iVar3) / 2,iVar3,iVar3);
      UIRewardFrame::SetLevel(this_00,4);
      (**(code **)(*plVar5 + 0x60))(plVar5,this_00);
      if (uVar8 == iVar4 - 1) break;
      uVar8 = uVar8 + 1;
      uVar6 = local_20;
      iVar9 = iVar9 + iVar2;
    }
  }
  std::vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>>::~vector
            ((vector<PennyClassroomPlantData,std::allocator<PennyClassroomPlantData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroom::SetData(NetworkPennyClassroomData) */

void __thiscall UIPennyClassroom::SetData(UIPennyClassroom *this,NetworkPennyClassroomData *param_2)

{
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x140),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::ButtonDepress(int) */

void __thiscall UIPennyClassroom::ButtonDepress(UIPennyClassroom *this,int param_1)

{
  UIPennyClassroomShop *pUVar1;
  NetworkPennyClassroomData aNStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    ShowTips();
  }
  else if (param_1 == 0x3ea) {
    pUVar1 = (UIPennyClassroomShop *)UISingletonDialog<UIPennyClassroomShop>::ShowDialog();
    NetworkPennyClassroomData::NetworkPennyClassroomData
              (aNStack_d0,(NetworkPennyClassroomData *)(this + 0x140));
    UIPennyClassroomShop::InitView(pUVar1,aNStack_d0);
    NetworkPennyClassroomData::~NetworkPennyClassroomData(aNStack_d0);
  }
  else if (param_1 == 1000) {
    UISingletonDialog<UIPennyClassroom>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPennyClassroom::ButtonDepress(int) */

void __thiscall UIPennyClassroom::ButtonDepress(UIPennyClassroom *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::UpdateTrainingItemWidget(NetworkPennyClassroomData) */

void UIPennyClassroom::UpdateTrainingItemWidget(Dialog *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  Widget *this;
  PennyClassRoomTrainingItemWidget *this_00;
  PVZ2UIScrollingWidget *this_01;
  long *plVar11;
  Insets aIStack_e0 [16];
  string asStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_d0,"MainContainer");
  plVar9 = (long *)UI::Dialog::GetWidget(param_1,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  std::string::string(asStack_d0,"ItemWidget");
  lVar10 = UI::Dialog::GetWidget(param_1,asStack_d0);
  std::string::~string(asStack_d0);
  nop();
  iVar5 = FUN_04de7880((int)plVar9[10]);
  iVar6 = FUN_04de7884(*(undefined4 *)((long)plVar9 + 0x54));
  iVar1 = *(int *)(lVar10 + 0x48);
  plVar11 = *(long **)(param_1 + 0x208);
  iVar2 = *(int *)(lVar10 + 0x4c);
  iVar3 = *(int *)(lVar10 + 0x50);
  iVar4 = *(int *)(lVar10 + 0x54);
  if (plVar11 == (long *)0x0) {
    this_01 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(param_1 + 0x138));
    *(PVZ2UIScrollingWidget **)(param_1 + 0x208) = this_01;
    iVar7 = FUN_04de8b64(5);
    iVar8 = FUN_04de8b64(10);
    Sexy::Insets::Insets((Insets *)asStack_d0,0,iVar7,iVar5,iVar6 - iVar8);
    (**(code **)(**(long **)(param_1 + 0x208) + 0x1a0))(*(long **)(param_1 + 0x208),asStack_d0);
    Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(param_1 + 0x208),2);
    (**(code **)(*plVar9 + 0x60))(plVar9,*(undefined8 *)(param_1 + 0x208));
  }
  else {
    (**(code **)(*plVar11 + 0x80))(plVar11,1,1);
  }
  iVar6 = iVar2 + iVar4;
  this = ::operator_new(0xd8);
  Sexy::Widget::Widget(this);
  (**(code **)(*(long *)this + 0x198))(this,0,0,iVar5,iVar2 + iVar6 * 4);
  (**(code **)(**(long **)(param_1 + 0x208) + 0x60))(*(long **)(param_1 + 0x208),this);
  iVar5 = 0;
  do {
    Sexy::Insets::Insets(aIStack_e0,iVar1,iVar2,iVar3,iVar4);
    this_00 = ::operator_new(0x1e0);
    PennyClassRoomTrainingItemWidget::PennyClassRoomTrainingItemWidget(this_00);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_e0);
    NetworkPennyClassroomData::NetworkPennyClassroomData
              ((NetworkPennyClassroomData *)asStack_d0,
               (NetworkPennyClassroomData *)(param_1 + 0x140));
    iVar7 = iVar5 + 1;
    PennyClassRoomTrainingItemWidget::InitView(this_00,iVar5,asStack_d0);
    NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)asStack_d0);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar5 = iVar7;
    iVar2 = iVar2 + iVar6;
  } while (iVar7 != 4);
  InitMaterial((UIPennyClassroom *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::InitTrainingItemWidget() */

void __thiscall UIPennyClassroom::InitTrainingItemWidget(UIPennyClassroom *this)

{
  NetworkPennyClassroomData aNStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkPennyClassroomData::NetworkPennyClassroomData
            (aNStack_d0,(NetworkPennyClassroomData *)(this + 0x140));
  UpdateTrainingItemWidget(this,aNStack_d0);
  NetworkPennyClassroomData::~NetworkPennyClassroomData(aNStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIPennyClassroom::NotifyRefreshActivityList(UIPennyClassroom *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_21c;
  ActiveItem aAStack_218 [8];
  undefined4 local_210;
  char local_200;
  undefined8 local_198 [25];
  undefined8 local_d0 [25];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_21c = 0x2a5b;
  local_198[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_21c);
  local_d0[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)local_198,(rbtree_iterator *)local_d0);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_04de78e8(local_210);
    if ((cVar2 != '\0') && (local_200 != '\0')) {
      NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)local_198);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_218,(RtObject *)local_198);
      if (cVar2 != '\0') {
        NetworkPennyClassroomData::NetworkPennyClassroomData
                  ((NetworkPennyClassroomData *)local_d0,(NetworkPennyClassroomData *)local_198);
        SetData(this,(NetworkPennyClassroomData *)local_d0);
        NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)local_d0)
        ;
        NetworkPennyClassroomData::NetworkPennyClassroomData
                  ((NetworkPennyClassroomData *)local_d0,(NetworkPennyClassroomData *)local_198);
        UpdateTrainingItemWidget(this,(NetworkPennyClassroomData *)local_d0);
        NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)local_d0)
        ;
      }
      NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)local_198);
    }
    ActiveItem::~ActiveItem(aAStack_218);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroom::InitView() */

void __thiscall UIPennyClassroom::InitView(UIPennyClassroom *this)

{
  char *pcVar1;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_48 [16];
  TGASecretStore aTStack_38 [8];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitMaterial(this);
  InitFinalBonus(this);
  InitTrainingItemWidget(this);
  TGASecretStore::TGASecretStore(aTStack_38);
  DString::DString(aDStack_48,1);
  pcVar1 = (char *)DString::c_str(aDStack_48);
  std::string::append((string *)aTStack_38,pcVar1,in_x2);
  DString::~DString(aDStack_48);
  DString::DString(aDStack_48,*(int *)(this + 0x210));
  pcVar1 = (char *)DString::c_str(aDStack_48);
  std::string::append(asStack_30,pcVar1,in_x2);
  DString::~DString(aDStack_48);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPennyClassroom(this_00,(TGAPennyClassroomData *)aTStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

