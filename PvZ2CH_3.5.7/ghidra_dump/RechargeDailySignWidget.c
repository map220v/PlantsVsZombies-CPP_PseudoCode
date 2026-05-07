// Class: RechargeDailySignWidget


/* RechargeDailySignWidget::RechargeDailySignWidget(RechargeDailySignActivityUI*) */

void __thiscall
RechargeDailySignWidget::RechargeDailySignWidget
          (RechargeDailySignWidget *this,RechargeDailySignActivityUI *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06989d40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698a078;
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0xe4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  FUN_05476574(this + 0x178);
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  *(undefined4 *)(this + 0xe0) = 0;
  *(RechargeDailySignActivityUI **)(this + 0x1c8) = param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf8));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::clear
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (this + 0x128));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  FUN_054772c4(this + 0x178,&DAT_056f11a8);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  this[0x158] = (RechargeDailySignWidget)0x0;
  return;
}


/* RechargeDailySignWidget::~RechargeDailySignWidget() */

void __thiscall RechargeDailySignWidget::~RechargeDailySignWidget(RechargeDailySignWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06989d40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698a078;
  FUN_05476c50(this + 0x178);
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (this + 0x128));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeDailySignWidget::~RechargeDailySignWidget() */

void __thiscall RechargeDailySignWidget::~RechargeDailySignWidget(RechargeDailySignWidget *this)

{
  ~RechargeDailySignWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidget::InitView(int, std::vector<RechargeDailySignDayReward,
   std::allocator<RechargeDailySignDayReward> >) */

void RechargeDailySignWidget::InitView
               (long *param_1,int param_2,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  UIWidgetText *pUVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  RechargeDailySignActivityManager *pRVar19;
  UIRewardFrame *pUVar20;
  PVZ2UIButton *pPVar21;
  char *__s;
  Dialog *pDVar22;
  long *plVar23;
  undefined1 auStack_80 [8];
  string asStack_78 [56];
  long local_40;
  long lStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(param_1 + 0x1c) = param_2;
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::clear
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (param_1 + 0x25));
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(param_3);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(param_3);
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::
  assign<__gnu_cxx::__normal_iterator<RechargeDailySignDayReward*,std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>,void>
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (param_1 + 0x25),uVar12,uVar13);
  std::string::string(asStack_78,"[RECHARGE_DAILYSIGN_ACTIVITY_DAY_DESC]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_78,(string *)&DAT_056fda40,(wchar_t *)(ulong)(param_2 + 1U),
             param_4);
  FUN_054766c8(param_1 + 0x2f,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  std::string::~string(asStack_78);
  nop();
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"DayIcon");
  lVar14 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  param_1[0x36] = lVar14;
  std::string::~string((string *)&local_40);
  nop();
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"TriangleIcon");
  lVar14 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  param_1[0x37] = lVar14;
  std::string::~string((string *)&local_40);
  nop();
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"DayText");
  pUVar15 = UI::Dialog::GetWidget<UIWidgetText>(pDVar22,(string *)&local_40);
  param_1[0x38] = (long)pUVar15;
  std::string::~string((string *)&local_40);
  nop();
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91828);
  param_1[0x33] = lVar14;
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"Widget_0");
  lVar14 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar14 + 0x48));
  iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar14 + 0x4c));
  iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar14 + 0x50));
  iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar14 + 0x54));
  Sexy::Insets::Insets((Insets *)&local_40,iVar1,iVar2,iVar3,iVar4);
  param_1[0x34] = local_40;
  param_1[0x35] = lStack_38;
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91a28);
  param_1[0x30] = lVar14;
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"DailySignItem");
  lVar14 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"Widget_3");
  lVar16 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"Widget_4");
  lVar17 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar16 + 0x48));
  iVar2 = FUN_04c4e3e8(0xf);
  iVar3 = FUN_04c4e3e8(7);
  iVar4 = FUN_04c4dc2c(*(undefined4 *)(lVar14 + 0x50));
  iVar5 = FUN_04c4dc30(*(undefined4 *)(lVar14 + 0x54));
  iVar6 = FUN_04c4e3e8(0xe);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - iVar2,iVar3,iVar2 + (iVar4 - iVar1),iVar5 - iVar6);
  lVar14 = param_1[0x25];
  param_1[0x31] = local_40;
  param_1[0x32] = lStack_38;
  piVar18 = (int *)FUN_04c4dcf4(lVar14,0);
  iVar1 = *piVar18;
  iVar2 = piVar18[1];
  piVar18 = (int *)FUN_04c4dcf4(lVar14,1);
  iVar3 = piVar18[2];
  iVar4 = piVar18[1];
  iVar5 = *piVar18;
  pRVar19 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar6 = RechargeDailySignActivityManager::GetBtnStatus(pRVar19,param_2,0);
  pRVar19 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar7 = RechargeDailySignActivityManager::GetBtnStatus(pRVar19,param_2,1);
  lVar14 = UIRewardFrame::CreateUIRewardFrame(iVar1,iVar2,true);
  param_1[0x2d] = lVar14;
  pUVar20 = (UIRewardFrame *)UIRewardFrame::CreateUIRewardFrame(iVar5,iVar4,true);
  param_1[0x2e] = (long)pUVar20;
  std::string::string((string *)&local_40,"IMAGE_UI_FESTIVALCENTER_ADVANCE_ICON");
  UIRewardFrame::SetDecoratorString(pUVar20,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if ((iVar3 == 0) && (iVar7 != 0)) {
    pUVar20 = (UIRewardFrame *)param_1[0x2e];
    __s = "IMAGE_UI_GENERIC_LOCKED_FOR_FRAME";
  }
  else {
    pUVar20 = (UIRewardFrame *)param_1[0x2e];
    __s = "";
  }
  std::string::string((string *)&local_40,__s);
  iVar1 = (param_2 + 1U) * 10;
  UIRewardFrame::SetLockString(pUVar20,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x2d]);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x2e]);
  plVar23 = (long *)param_1[0x2d];
  uVar8 = FUN_04c4dc24(*(undefined4 *)(lVar16 + 0x48));
  uVar9 = FUN_04c4dc28(*(undefined4 *)(lVar16 + 0x4c));
  uVar10 = FUN_04c4dc2c(*(undefined4 *)(lVar16 + 0x50));
  uVar11 = FUN_04c4dc30(*(undefined4 *)(lVar16 + 0x54));
  (**(code **)(*plVar23 + 0x198))(plVar23,uVar8,uVar9,uVar10,uVar11);
  plVar23 = (long *)param_1[0x2e];
  uVar8 = FUN_04c4dc24(*(undefined4 *)(lVar17 + 0x48));
  uVar9 = FUN_04c4dc28(*(undefined4 *)(lVar17 + 0x4c));
  uVar10 = FUN_04c4dc2c(*(undefined4 *)(lVar17 + 0x50));
  uVar11 = FUN_04c4dc30(*(undefined4 *)(lVar17 + 0x54));
  (**(code **)(*plVar23 + 0x198))(plVar23,uVar8,uVar9,uVar10,uVar11);
  *(int *)((long)param_1 + 0x15c) = iVar1 + 1;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar21 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar21,*(int *)((long)param_1 + 0x15c),(ButtonListener *)(param_1 + 0x1b),
             (wstring *)asStack_78,(Color *)&local_40);
  param_1[0x28] = (long)pPVar21;
  FUN_05476c50(asStack_78);
  nop();
  pPVar21 = (PVZ2UIButton *)param_1[0x28];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b918f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b91c48,2);
  PVZ2UIButton::SetDialogStates(pPVar21,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = (long *)param_1[0x28];
  *(undefined1 *)((long)plVar23 + 0x59) = 0;
  (**(code **)(*plVar23 + 0x158))(plVar23,iVar6 != 2);
  (**(code **)(*(long *)param_1[0x28] + 0x188))((long *)param_1[0x28],iVar6 == 1);
  pDVar22 = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"Widget_1");
  lVar14 = UI::Dialog::GetWidget(pDVar22,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  plVar23 = (long *)param_1[0x28];
  uVar8 = FUN_04c4dc24(*(undefined4 *)(lVar14 + 0x48));
  uVar9 = FUN_04c4dc28(*(undefined4 *)(lVar14 + 0x4c));
  uVar10 = FUN_04c4dc2c(*(undefined4 *)(lVar14 + 0x50));
  uVar11 = FUN_04c4dc30(*(undefined4 *)(lVar14 + 0x54));
  (**(code **)(*plVar23 + 0x198))(plVar23,uVar8,uVar9,uVar10,uVar11);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x28]);
  *(int *)(param_1 + 0x2c) = iVar1 + 2;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar21 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar21,(int)param_1[0x2c],(ButtonListener *)(param_1 + 0x1b),(wstring *)asStack_78,
             (Color *)&local_40);
  param_1[0x29] = (long)pPVar21;
  FUN_05476c50(asStack_78);
  nop();
  pPVar21 = (PVZ2UIButton *)param_1[0x29];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b91ba8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b91ac0,2);
  PVZ2UIButton::SetDialogStates(pPVar21,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar23 = (long *)param_1[0x29];
  *(undefined1 *)((long)plVar23 + 0x59) = 0;
  (**(code **)(*plVar23 + 0x158))(plVar23,iVar7 != 2);
  (**(code **)(*(long *)param_1[0x29] + 0x188))((long *)param_1[0x29],iVar7 == 1);
  plVar23 = (long *)param_1[0x29];
  uVar8 = FUN_04c4dc24(*(undefined4 *)(lVar14 + 0x48));
  uVar9 = FUN_04c4dc28(*(undefined4 *)(lVar14 + 0x4c));
  uVar10 = FUN_04c4dc2c(*(undefined4 *)(lVar14 + 0x50));
  uVar11 = FUN_04c4dc30(*(undefined4 *)(lVar14 + 0x54));
  (**(code **)(*plVar23 + 0x198))(plVar23,uVar8,uVar9,uVar10,uVar11);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x29]);
  lVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b918a0);
  param_1[0x2a] = lVar14;
  *(bool *)(param_1 + 0x2b) = iVar7 == 2 && iVar6 == 2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidget::UpdateUI(std::vector<RechargeDailySignDayReward,
   std::allocator<RechargeDailySignDayReward> >) */

void __thiscall
RechargeDailySignWidget::UpdateUI
          (RechargeDailySignWidget *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  RechargeDailySignActivityManager *pRVar7;
  long *plVar8;
  char *__s;
  UIRewardFrame *pUVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::clear
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (this + 0x128));
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::
  assign<__gnu_cxx::__normal_iterator<RechargeDailySignDayReward*,std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>,void>
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (this + 0x128),uVar4,uVar5);
  lVar6 = FUN_04c4dcf4(*(undefined8 *)(this + 0x128),1);
  iVar1 = *(int *)(lVar6 + 8);
  pRVar7 = (RechargeDailySignActivityManager *)
           Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar2 = RechargeDailySignActivityManager::GetBtnStatus(pRVar7,*(undefined4 *)(this + 0xe0),0);
  pRVar7 = (RechargeDailySignActivityManager *)
           Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar3 = RechargeDailySignActivityManager::GetBtnStatus(pRVar7,*(undefined4 *)(this + 0xe0),1);
  if ((iVar1 == 0) && (iVar3 != 0)) {
    pUVar9 = *(UIRewardFrame **)(this + 0x170);
    if (pUVar9 == (UIRewardFrame *)0x0) goto LAB_04c50b08;
    __s = "IMAGE_UI_GENERIC_LOCKED_FOR_FRAME";
  }
  else {
    pUVar9 = *(UIRewardFrame **)(this + 0x170);
    if (pUVar9 == (UIRewardFrame *)0x0) goto LAB_04c50b08;
    __s = "";
  }
  std::string::string(asStack_10,__s);
  UIRewardFrame::SetLockString(pUVar9,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04c50b08:
  plVar8 = *(long **)(this + 0x140);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,iVar2 != 2);
    (**(code **)(**(long **)(this + 0x140) + 0x188))(*(long **)(this + 0x140),iVar2 == 1);
  }
  plVar8 = *(long **)(this + 0x148);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x158))(plVar8,iVar3 != 2);
    (**(code **)(**(long **)(this + 0x148) + 0x188))(*(long **)(this + 0x148),iVar3 == 1);
  }
  this[0x158] = (RechargeDailySignWidget)(iVar3 == 2 && iVar2 == 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidget::RequestGetReward(RechargeDailySignBonusType) */

void __thiscall RechargeDailySignWidget::RequestGetReward(RechargeDailySignWidget *this,int param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined8 *puVar2;
  string *psVar3;
  undefined8 uVar4;
  string *psVar5;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2000];
  string asStack_518 [1296];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  if (param_2 == 0) {
    psVar5 = asStack_d40;
    std::string::string(asStack_ce8,"t");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_ce8);
    std::string::append(psVar3,"1",(size_t)psVar5);
    std::string::~string(asStack_ce8);
    nop();
    uVar1 = *(undefined8 *)(this + 0x128);
    uVar4 = 0;
  }
  else {
    if (param_2 != 1) goto LAB_04c50cb8;
    psVar5 = asStack_d40;
    std::string::string(asStack_ce8,"t");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_ce8);
    std::string::append(psVar3,"2",(size_t)psVar5);
    std::string::~string(asStack_ce8);
    nop();
    uVar1 = *(undefined8 *)(this + 0x128);
    uVar4 = 1;
  }
  puVar2 = (undefined8 *)FUN_04c4dcf4(uVar1,uVar4);
  *(undefined8 *)(this + 0xe4) = *puVar2;
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(puVar2 + 1);
LAB_04c50cb8:
  *(int *)(this + 0xf0) = param_2;
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c4e38c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_518,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* RechargeDailySignWidget::ButtonDepress(int) */

void __thiscall RechargeDailySignWidget::ButtonDepress(RechargeDailySignWidget *this,int param_1)

{
  if (*(int *)(this + 0x15c) == param_1) {
    RequestGetReward(this,0);
    return;
  }
  if (*(int *)(this + 0x160) != param_1) {
    return;
  }
  RequestGetReward(this,1);
  return;
}


/* non-virtual thunk to RechargeDailySignWidget::ButtonDepress(int) */

void __thiscall RechargeDailySignWidget::ButtonDepress(RechargeDailySignWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidget::Draw(Sexy::Graphics*) */

void __thiscall RechargeDailySignWidget::Draw(RechargeDailySignWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  long lVar7;
  Insets aIStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(long *)(this + 0x180) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x188));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x180));
  }
  if (*(long *)(this + 0x1b0) != 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91b50);
    lVar7 = *(long *)(this + 0x1b0);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar7 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar7 + 0x4c));
    iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar7 + 0x50));
    iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar7 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  if (*(long *)(this + 0x1b8) != 0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91c20);
    lVar7 = *(long *)(this + 0x1b8);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar7 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar7 + 0x4c));
    iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar7 + 0x50));
    iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar7 + 0x54));
    Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar4);
  }
  lVar7 = *(long *)(this + 0x1c0);
  if (lVar7 != 0) {
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar7 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar7 + 0x4c));
    iVar3 = FUN_04c4dc2c(*(undefined4 *)(lVar7 + 0x50));
    iVar4 = FUN_04c4dc30(*(undefined4 *)(lVar7 + 0x54));
    Sexy::Insets::Insets(aIStack_38,iVar1,iVar2,iVar3,iVar4);
    Sexy::Color::Color((Color *)&local_28);
    local_28 = 0xff;
    local_24 = 0xfa;
    local_20 = 0xbe;
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
    WriteWordInRect(param_1,this + 0x178,aIStack_38,uVar6,aIStack_18,5,1);
  }
  pIVar5 = *(Image **)(this + 0x150);
  if ((pIVar5 != (Image *)0x0) && (this[0x158] != (RechargeDailySignWidget)0x0)) {
    lVar7 = *(long *)(this + 0x140);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar7 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar7 + 0x4c));
    iVar3 = FUN_04c4e3e8(10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar2 + iVar3,*(int *)(pIVar5 + 0x38),*(int *)(pIVar5 + 0x3c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

