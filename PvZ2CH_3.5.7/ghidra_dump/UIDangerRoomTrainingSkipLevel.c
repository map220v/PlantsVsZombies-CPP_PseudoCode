// Class: UIDangerRoomTrainingSkipLevel


/* UIDangerRoomTrainingSkipLevel::OnNotifyLevelSelected(int) */

void __thiscall
UIDangerRoomTrainingSkipLevel::OnNotifyLevelSelected
          (UIDangerRoomTrainingSkipLevel *this,int param_1)

{
  *(int *)(this + 0x134) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::GetLayoutName() */

void __thiscall UIDangerRoomTrainingSkipLevel::GetLayoutName(UIDangerRoomTrainingSkipLevel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DangerRoomTrainingSkipLevel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::Draw(Sexy::Graphics*) */

void __thiscall
UIDangerRoomTrainingSkipLevel::Draw(UIDangerRoomTrainingSkipLevel *this,Graphics *param_1)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomTrainingSkipLevel::~UIDangerRoomTrainingSkipLevel() */

void __thiscall
UIDangerRoomTrainingSkipLevel::~UIDangerRoomTrainingSkipLevel(UIDangerRoomTrainingSkipLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_06940570;
  *(undefined **)(this + 0xd8) = &DAT_069408c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x140));
  UISingletonDialog<UIDangerRoomTrainingSkipLevel>::~UISingletonDialog
            ((UISingletonDialog<UIDangerRoomTrainingSkipLevel> *)this);
  return;
}


/* UIDangerRoomTrainingSkipLevel::~UIDangerRoomTrainingSkipLevel() */

void __thiscall
UIDangerRoomTrainingSkipLevel::~UIDangerRoomTrainingSkipLevel(UIDangerRoomTrainingSkipLevel *this)

{
  ~UIDangerRoomTrainingSkipLevel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::GetWorldImage(std::string const&) */

void __thiscall
UIDangerRoomTrainingSkipLevel::GetWorldImage(UIDangerRoomTrainingSkipLevel *this,string *param_1)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToUpper((Sexy *)param_1,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_18);
  Sexy::StrFormat("IMAGE_UI_DANGERROOM_DIALOG_%s_BG",asStack_10,uVar1);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* UIDangerRoomTrainingSkipLevel::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void UIDangerRoomTrainingSkipLevel::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"change_level");
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x138);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::UpdateTrainingUI() */

void __thiscall UIDangerRoomTrainingSkipLevel::UpdateTrainingUI(UIDangerRoomTrainingSkipLevel *this)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  UIWidgetText *pUVar4;
  PVZ2UIButton *this_00;
  DangerRoomManager *this_01;
  long lVar5;
  UIWidgetImage *this_02;
  Image *pIVar6;
  int iVar7;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_2");
  iVar7 = (int)lVar5;
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_TrainingCount");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Btn_Start");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = DangerRoomManager::HasTrainingInfo(this_01);
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x158))();
    lVar5 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = FUN_04a89b38(*(undefined4 *)(lVar5 + 700));
    std::string::string(asStack_10,"[TRAINING_COUNT]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_10,(string *)L"{NUMBER}",(wchar_t *)(ulong)uVar2,iVar7);
    std::string::~string(asStack_10);
    nop();
    PuzzleTip::SetTip(pUVar4,auStack_18);
    if ((int)uVar2 < 1) {
      (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
    }
    FUN_05476c50(auStack_18);
  }
  else {
    (**(code **)(*plVar3 + 0x158))(plVar3,1);
    TodStringTranslate(L"[DANGERROOM_CONTINUE_TRAINING_LEVEL]");
    PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  }
  std::string::string(asStack_10,"UIImage3");
  this_02 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pIVar6 = (Image *)GetWorldImage(this,(string *)(this + 0x140));
  UIWidgetImage::SetImage(this_02,pIVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomTrainingSkipLevel::OnConfirmBack() */

void UIDangerRoomTrainingSkipLevel::OnConfirmBack(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  FUN_04a89b70(lVar1 + 0x100);
  UISingletonDialog<UIDangerRoomTrainingSkipLevel>::CloseDialog();
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::OnCreate() */

void __thiscall UIDangerRoomTrainingSkipLevel::OnCreate(UIDangerRoomTrainingSkipLevel *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  Widget *pWVar5;
  undefined8 uVar6;
  DangerRoomManager *pDVar7;
  long *plVar8;
  long *plVar9;
  UIWidgetText *pUVar10;
  UIScrollControl *pUVar11;
  LotteryResultProgressBar *this_00;
  long lVar12;
  TrainingLevelItemWidget *this_01;
  string *extraout_x1;
  string *extraout_x1_00;
  AccessoryContent *this_02;
  uint uVar13;
  ScrollWidget *this_03;
  int iVar14;
  TrainingLevelItemWidget *pTVar15;
  wstring awStack_28 [8];
  int local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this[0x59] = (UIDangerRoomTrainingSkipLevel)0x0;
  std::string::string((string *)&local_10,"UIImage_Background");
  pWVar5 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar5,true);
  UI::Dialog::SetDarkBgAlpha((Dialog *)this,0.7);
  uVar6 = DangerRoomModule::GetDangerRoomPropertySheet();
  *(undefined8 *)(this + 0x148) = uVar6;
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::GetCurrentTrainingWorld(pDVar7);
  FUN_05474278((Sexy *)(this + 0x140),(string *)&local_10);
  std::string::~string((string *)&local_10);
  pDVar7 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  uVar2 = DangerRoomManager::GetNextTrainingLevel(pDVar7);
  *(undefined4 *)(this + 0x138) = uVar2;
  *(undefined4 *)(this + 0x134) = uVar2;
  std::string::string((string *)&local_10,"Btn_Skip");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = FUN_04a8b7e0((TaskResource *)plVar8[1]);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(plVar8 + 1));
  while( true ) {
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar13 = (uint)bVar1;
    if (!bVar1) break;
    plVar9 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar9 = (long *)*plVar9;
    if (plVar9 != plVar8) {
      *(uint *)(plVar9 + 0xc) = *(uint *)(plVar9 + 0xc) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  pTVar15 = (TrainingLevelItemWidget *)0x0;
  iVar14 = 0;
  (**(code **)(*plVar8 + 0x158))(plVar8,0);
  Sexy::StringToUpper((Sexy *)(this + 0x140),extraout_x1);
  Sexy::UTF8StringToWString((Sexy *)&local_20,extraout_x1_00);
  uVar6 = FUN_054766ec((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
  Sexy::StrFormat(L"[WORLD_NAME_%ls]",(string *)&local_10,uVar6);
  TodStringTranslate((wstring *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
  std::string::~string((string *)&local_20);
  std::string::string((string *)&local_20,"UIText_3");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_20);
  TodStringTranslate(L"[DANGERROOM_TRAINING_CHOOSE_WORLD_HINT]");
  TodReplaceString((wstring *)&local_18,L"{NAME}",awStack_28);
  PuzzleTip::SetTip(pUVar10,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  FUN_05476c50((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
  std::string::~string((string *)&local_20);
  nop();
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x150) = uVar2;
  std::string::string((string *)&local_10,"UIScroll_Levels");
  pUVar11 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_10);
  *(UIScrollControl **)(this + 0x158) = pUVar11;
  std::string::~string((string *)&local_10);
  nop();
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x158),bVar1);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7ec98);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Point::Point((Point *)&local_20,(int)((float)iVar3 * 0.9),(int)((float)iVar4 * 0.9));
  this_02 = *(AccessoryContent **)(this + 0x158);
  *(undefined4 *)(this_02 + 0x54) = local_1c;
  lVar12 = AccessoryContent::GetDisplayImage(this_02);
  *(int *)(lVar12 + 0x50) = local_20 * 0x96;
  lVar12 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x158));
  *(undefined4 *)(lVar12 + 0x54) = *(undefined4 *)(*(long *)(this + 0x158) + 0x54);
  do {
    uVar13 = uVar13 + 1;
    this_01 = ::operator_new(0x128);
    TrainingLevelItemWidget::TrainingLevelItemWidget(this_01,uVar13);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,iVar14,0,local_20,local_1c);
    TrainingLevelItemWidget::InitLevel
              (this_01,*(DangerRoomPropertySheet **)(this + 0x148),*(int *)(this + 0x134));
    if (uVar13 == *(uint *)(this + 0x134)) {
      TrainingLevelItemWidget::Select(this_01);
      pTVar15 = this_01;
    }
    (**(code **)(**(long **)(this + 0x158) + 0x60))(*(long **)(this + 0x158),this_01);
    iVar14 = iVar14 + local_20;
  } while (uVar13 != 0x96);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x158),1);
  iVar14 = 0;
  if (pTVar15 != (TrainingLevelItemWidget *)0x0) {
    iVar14 = *(int *)(pTVar15 + 0x48) + *(int *)(pTVar15 + 0x50) / 2;
  }
  this_03 = *(ScrollWidget **)(this + 0x158);
  iVar3 = *(int *)(this_03 + 0x50);
  Sexy::ScrollWidget::GetScrollMin();
  Sexy::Point::Point((Point *)&local_10,iVar14 - iVar3 / 2,(int)local_18._4_4_);
  Sexy::ScrollWidget::ScrollToPoint(this_03,(Point *)&local_10,false);
  UpdateTrainingUI(this);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIDangerRoomTrainingSkipLevel::UIDangerRoomTrainingSkipLevel() */

void __thiscall
UIDangerRoomTrainingSkipLevel::UIDangerRoomTrainingSkipLevel(UIDangerRoomTrainingSkipLevel *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIDangerRoomTrainingSkipLevel>::UISingletonDialog
            ((UISingletonDialog<UIDangerRoomTrainingSkipLevel> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06940570;
  *(undefined **)(this + 0xd8) = &DAT_069408c0;
  *(undefined4 *)(this + 0x13c) = 0;
  Set8BytesTo0(this + 0x140);
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyLevelSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIDangerRoomTrainingSkipLevel,void(UIDangerRoomTrainingSkipLevel::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyLevelSelected,&local_40);
  return;
}


/* UIDangerRoomTrainingSkipLevel::ButtonPress(int) */

void UIDangerRoomTrainingSkipLevel::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to UIDangerRoomTrainingSkipLevel::ButtonPress(int) */

void __thiscall
UIDangerRoomTrainingSkipLevel::ButtonPress(UIDangerRoomTrainingSkipLevel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::RequestStartTraining() */

void __thiscall
UIDangerRoomTrainingSkipLevel::RequestStartTraining(UIDangerRoomTrainingSkipLevel *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2056];
  string asStack_4e0 [1240];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04a8a204(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_4e0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::OnSelectClearTraining() */

void UIDangerRoomTrainingSkipLevel::OnSelectClearTraining(void)

{
  DangerRoomManager *pDVar1;
  DangerRoomInfo *pDVar2;
  DangerRoomInfo aDStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar2 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar1,true);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar2);
  DangerRoomInfo::RestartRoom();
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetDangerRoomInfo(pDVar1,aDStack_b0,true);
  OnConfirmBack();
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::OnStartTraining() */

void UIDangerRoomTrainingSkipLevel::OnStartTraining(void)

{
  long in_x0;
  DangerRoomManager *this;
  TGALogMgr *pTVar1;
  undefined1 in_w2;
  undefined7 in_register_00004011;
  TGALogEndlessData aTStack_d8 [104];
  TGALogEndlessData aTStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIDangerRoomTrainingSkipLevel>::CloseDialog();
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetCurrentTrainingLevel(this,*(int *)(in_x0 + 0x134) + -1);
  DangerRoomModule::StartDangerRoomLevel
            ((DangerRoomModule *)(in_x0 + 0x140),(string *)0x1,(bool)in_w2);
  TGALogEndlessData::TGALogEndlessData(aTStack_d8);
  std::string::append((string *)aTStack_d8,"11",CONCAT71(in_register_00004011,in_w2));
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogEndlessData::TGALogEndlessData(aTStack_70,aTStack_d8);
  TGALogMgr::LogEndless(pTVar1,aTStack_70);
  TGALogEndlessData::~TGALogEndlessData(aTStack_70);
  TGALogEndlessData::~TGALogEndlessData(aTStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::OnSelectScreenClosed() */

void __thiscall
UIDangerRoomTrainingSkipLevel::OnSelectScreenClosed(UIDangerRoomTrainingSkipLevel *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  DangerRoomManager *pDVar4;
  DangerRoomInfo *pDVar5;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  DangerRoomInfo aDStack_b0 [8];
  undefined4 local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x154) == 0) {
    pDVar4 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar3 = DangerRoomManager::HasTrainingInfo(pDVar4);
    if (cVar3 == '\0') {
      RequestStartTraining(this);
    }
    else {
      OnStartTraining();
    }
  }
  else {
    iVar1 = *(int *)(this + 0x13c);
    iVar2 = *(int *)(this + 0x134);
    pDVar4 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    pDVar5 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar4,false);
    DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar5);
    local_a8 = 0xffffffff;
    pDVar4 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetDangerRoomInfo(pDVar4,aDStack_b0,false);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestSkipDangerRoom(this_01,iVar2 + iVar1 + -1,0);
    DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomTrainingSkipLevel::ButtonDepress(int) */

void __thiscall
UIDangerRoomTrainingSkipLevel::ButtonDepress(UIDangerRoomTrainingSkipLevel *this,int param_1)

{
  int iVar1;
  LawnApp *this_00;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  UIMessageBox *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string *psVar7;
  UniverseMap *pUVar8;
  DangerRoomManager *pDVar9;
  undefined8 uVar10;
  PVZ2UIDialog *pPVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Button_Click_Release");
  switch(param_1) {
  case 0:
    UISingletonDialog<UIDangerRoomTrainingSkipLevel>::CloseDialog();
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    psVar7 = (string *)PlayerInfo::GetLastWorldName(this_03);
    bVar2 = std::operator==(psVar7,"");
    if (bVar2) {
      std::string::string(asStack_58,"egypt");
      nop();
    }
    else {
      uVar10 = PlayerInfo::GetLastWorldName(this_03);
      FUN_05475d88(asStack_58,uVar10);
    }
    lVar6 = LawnApp::GetWorldMap(gLawnApp);
    pUVar8 = (UniverseMap *)FUN_04a89b5c(*(undefined8 *)(lVar6 + 0x2b0));
    FUN_05475d88(asStack_50,asStack_58);
    UniverseMap::TransToWorldByName(pUVar8,asStack_50);
    std::string::~string(asStack_50);
    pDVar9 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetMainDialogVisible(pDVar9,true);
    std::string::~string(asStack_58);
    break;
  case 1:
    *(undefined4 *)(this + 0x154) = 1;
    OnSelectScreenClosed(this);
    break;
  case 2:
    iVar1 = *(int *)(this + 0x134);
    lVar6 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar4 = FUN_04a89b34(*(undefined4 *)(lVar6 + 0xe0));
    if (iVar1 < iVar4) {
      *(undefined4 *)(this + 0x154) = 0;
      OnSelectScreenClosed(this);
    }
    else {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_01 != (UIMessageBox *)0x0) {
        std::string::string(asStack_58,"[REACH_DANGER_ROOM_LIMIT]");
        std::string::string(asStack_50,"[REVIVE_TIP]");
        UIMessageBox::SetMessage(this_01,asStack_58,asStack_50);
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        UIMessageBox::SetShowType(this_01,2);
        UIMessageBox::SetBackgroundDarken(this_01,true,0.5);
      }
    }
    break;
  case 3:
    pDVar9 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar3 = DangerRoomManager::HasTrainingInfo(pDVar9);
    this_00 = gLawnApp;
    if (cVar3 == '\0') {
      OnConfirmBack();
    }
    else {
      FUN_05478178((wstring *)asStack_58,L"[DANGERROOM_TRAINING_QUIT_HINT_TITLE]",auStack_68);
      FUN_05478178((wstring *)asStack_50,L"[DANGERROOM_TRAINING_QUIT_HINT_TEXT]",auStack_60);
      pPVar11 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(wstring *)asStack_58,(wstring *)asStack_50);
      FUN_05476c50((wstring *)asStack_50);
      nop();
      FUN_05476c50((wstring *)asStack_58);
      nop();
      FUN_05478178((wstring *)asStack_58,L"[DANGERROOM_NOT_BUY_BUTTON]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(pPVar11,(wstring *)asStack_58,aDStack_38,1);
      FUN_05476c50((wstring *)asStack_58);
      nop();
      FUN_05478178((wstring *)asStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnSelectClearTraining);
      Sexy::Delegate0::
      Delegate0<UIDangerRoomTrainingSkipLevel,void(UIDangerRoomTrainingSkipLevel::*)()>
                (aDStack_38,(wstring *)asStack_50);
      PVZ2UIDialog::AddButton(pPVar11,(wstring *)asStack_58,aDStack_38,0);
      FUN_05476c50((wstring *)asStack_58);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UIDangerRoomTrainingSkipLevel::ButtonDepress(int) */

void __thiscall
UIDangerRoomTrainingSkipLevel::ButtonDepress(UIDangerRoomTrainingSkipLevel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

