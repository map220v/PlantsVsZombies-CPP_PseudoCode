// Class: RechargeDailySignWidgetNew


/* RechargeDailySignWidgetNew::RechargeDailySignWidgetNew(RechargeDailySignActivityUI*) */

void __thiscall
RechargeDailySignWidgetNew::RechargeDailySignWidgetNew
          (RechargeDailySignWidgetNew *this,RechargeDailySignActivityUI *param_1)

{
  RechargeDailySignWidget::RechargeDailySignWidget((RechargeDailySignWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_069899c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06989cf8;
  Sexy::Insets::Insets((Insets *)(this + 0x1d0));
  return;
}


/* RechargeDailySignWidgetNew::~RechargeDailySignWidgetNew() */

void __thiscall
RechargeDailySignWidgetNew::~RechargeDailySignWidgetNew(RechargeDailySignWidgetNew *this)

{
  *(undefined ***)this = &PTR_GetClass_069899c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06989cf8;
  RechargeDailySignWidget::~RechargeDailySignWidget((RechargeDailySignWidget *)this);
  return;
}


/* RechargeDailySignWidgetNew::~RechargeDailySignWidgetNew() */

void __thiscall
RechargeDailySignWidgetNew::~RechargeDailySignWidgetNew(RechargeDailySignWidgetNew *this)

{
  ~RechargeDailySignWidgetNew(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidgetNew::InitView(int, std::vector<RechargeDailySignDayReward,
   std::allocator<RechargeDailySignDayReward> >) */

void RechargeDailySignWidgetNew::InitView
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
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  RechargeDailySignActivityManager *pRVar17;
  UIRewardFrame *pUVar18;
  PVZ2UIButton *pPVar19;
  char *__s;
  long *plVar20;
  long lVar21;
  Dialog *this;
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
  uVar14 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(param_3);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(param_3);
  std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::
  assign<__gnu_cxx::__normal_iterator<RechargeDailySignDayReward*,std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>,void>
            ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
             (param_1 + 0x25),uVar14,uVar15);
  iVar6 = FUN_04c4e3e8(3);
  iVar5 = iVar6 * -2;
  iVar7 = FUN_04c4e3e8(0xf);
  lVar21 = param_1[10];
  std::string::string(asStack_78,"[RECHARGE_DAILYSIGN_ACTIVITY_DAY_DESC]");
  iVar1 = iVar5 + (int)lVar21;
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_78,(string *)&DAT_056fda40,(wchar_t *)(ulong)(param_2 + 1U),
             param_4);
  FUN_054766c8(param_1 + 0x2f,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  std::string::~string(asStack_78);
  nop();
  lVar21 = param_1[10];
  iVar8 = FUN_04c4e3e8(0x14);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar7,iVar5 + (int)lVar21,iVar8);
  param_1[0x3a] = local_40;
  param_1[0x3b] = lStack_38;
  iVar9 = FUN_04c4e3e8(0x1e);
  lVar21 = param_1[0x25];
  piVar16 = (int *)FUN_04c4dcf4(lVar21,0);
  iVar8 = *piVar16;
  iVar2 = piVar16[1];
  piVar16 = (int *)FUN_04c4dcf4(lVar21,1);
  iVar12 = piVar16[2];
  iVar3 = *piVar16;
  iVar4 = piVar16[1];
  pRVar17 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar10 = RechargeDailySignActivityManager::GetBtnStatus(pRVar17,param_2,0);
  pRVar17 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar11 = RechargeDailySignActivityManager::GetBtnStatus(pRVar17,param_2,1);
  lVar21 = UIRewardFrame::CreateUIRewardFrame(iVar8,iVar2,true);
  param_1[0x2d] = lVar21;
  pUVar18 = (UIRewardFrame *)UIRewardFrame::CreateUIRewardFrame(iVar3,iVar4,true);
  param_1[0x2e] = (long)pUVar18;
  std::string::string((string *)&local_40,"IMAGE_UI_FESTIVALCENTER_ADVANCE_ICON");
  UIRewardFrame::SetDecoratorString(pUVar18,(Insets *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if ((iVar12 == 0) && (iVar11 != 0)) {
    pUVar18 = (UIRewardFrame *)param_1[0x2e];
    __s = "IMAGE_UI_GENERIC_LOCKED_FOR_FRAME";
  }
  else {
    pUVar18 = (UIRewardFrame *)param_1[0x2e];
    __s = "";
  }
  std::string::string((string *)&local_40,__s);
  iVar2 = (param_2 + 1U) * 10;
  UIRewardFrame::SetLockString(pUVar18,(Insets *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x2d]);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x2e]);
  (**(code **)(*(long *)param_1[0x2d] + 0x198))
            ((long *)param_1[0x2d],iVar6,iVar7 + iVar9,iVar1,iVar1);
  iVar8 = FUN_04c4e3e8(5);
  iVar8 = iVar7 + iVar9 + iVar1 + iVar8;
  (**(code **)(*(long *)param_1[0x2e] + 0x198))((long *)param_1[0x2e],iVar6,iVar8,iVar1,iVar1);
  iVar12 = FUN_04c4e3e8(0x14);
  *(int *)((long)param_1 + 0x15c) = iVar2 + 1;
  iVar8 = iVar8 + iVar1 + iVar12;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar19,*(int *)((long)param_1 + 0x15c),(ButtonListener *)(param_1 + 0x1b),
             (wstring *)asStack_78,(Color *)&local_40);
  param_1[0x28] = (long)pPVar19;
  FUN_05476c50(asStack_78);
  nop();
  pPVar19 = (PVZ2UIButton *)param_1[0x28];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b918f8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b91c48,2);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = (long *)param_1[0x28];
  *(undefined1 *)((long)plVar20 + 0x59) = 0;
  (**(code **)(*plVar20 + 0x158))(plVar20,iVar10 != 2);
  (**(code **)(*(long *)param_1[0x28] + 0x188))((long *)param_1[0x28],iVar10 == 1);
  this = (Dialog *)param_1[0x39];
  std::string::string((string *)&local_40,"Widget_1");
  UI::Dialog::GetWidget(this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  lVar21 = param_1[10];
  plVar20 = (long *)param_1[0x28];
  uVar13 = FUN_04c4e3e8(0x1e);
  (**(code **)(*plVar20 + 0x198))(plVar20,iVar6,iVar8,iVar5 + (int)lVar21,uVar13);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x28]);
  *(int *)(param_1 + 0x2c) = iVar2 + 2;
  FUN_05478178(asStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar19 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar19,(int)param_1[0x2c],(ButtonListener *)(param_1 + 0x1b),(wstring *)asStack_78,
             (Color *)&local_40);
  param_1[0x29] = (long)pPVar19;
  FUN_05476c50(asStack_78);
  nop();
  pPVar19 = (PVZ2UIButton *)param_1[0x29];
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b91ba8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b91ac0,2);
  PVZ2UIButton::SetDialogStates(pPVar19,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  plVar20 = (long *)param_1[0x29];
  *(undefined1 *)((long)plVar20 + 0x59) = 0;
  (**(code **)(*plVar20 + 0x158))(plVar20,iVar11 != 2);
  (**(code **)(*(long *)param_1[0x29] + 0x188))((long *)param_1[0x29],iVar11 == 1);
  plVar20 = (long *)param_1[0x29];
  lVar21 = param_1[10];
  uVar13 = FUN_04c4e3e8(0x1e);
  (**(code **)(*plVar20 + 0x198))(plVar20,iVar6,iVar8,iVar5 + (int)lVar21,uVar13);
  (**(code **)(*param_1 + 0x60))(param_1,param_1[0x29]);
  lVar21 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b918a0);
  param_1[0x2a] = lVar21;
  *(bool *)(param_1 + 0x2b) = iVar11 == 2 && iVar10 == 2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignWidgetNew::Draw(Sexy::Graphics*) */

void __thiscall RechargeDailySignWidgetNew::Draw(RechargeDailySignWidgetNew *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Image *pIVar5;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x150) != 0) && (this[0x158] != (RechargeDailySignWidgetNew)0x0)) {
    lVar4 = *(long *)(this + 0x140);
    iVar1 = FUN_04c4dc24(*(undefined4 *)(lVar4 + 0x48));
    iVar2 = FUN_04c4dc28(*(undefined4 *)(lVar4 + 0x4c));
    iVar3 = FUN_04c4e3e8(10);
    Sexy::Insets::Insets
              (aIStack_28,iVar1,iVar2 + iVar3,*(int *)(lVar4 + 0x50),*(int *)(lVar4 + 0x54));
    pIVar5 = *(Image **)(this + 0x150);
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(pIVar5 + 0x38),*(int *)(pIVar5 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

