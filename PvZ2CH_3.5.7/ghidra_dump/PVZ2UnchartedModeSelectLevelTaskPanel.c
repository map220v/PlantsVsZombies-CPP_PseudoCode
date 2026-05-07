// Class: PVZ2UnchartedModeSelectLevelTaskPanel


/* PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetReached
          (PVZ2UnchartedModeSelectLevelTaskPanel *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::ScrollTargetInterrupted
          (PVZ2UnchartedModeSelectLevelTaskPanel *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelTaskPanel::GetLayoutName() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::GetLayoutName(PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ2UnchartedModeSelectLevelTask");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel
          (PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069d2720;
  *(undefined **)(this + 0xd8) = &DAT_069d2a80;
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevelTaskPanel_069d2ac8;
  UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::~UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *)this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel
          (PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  ~PVZ2UnchartedModeSelectLevelTaskPanel(this + -0x138);
  return;
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel
          (PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  ~PVZ2UnchartedModeSelectLevelTaskPanel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::~PVZ2UnchartedModeSelectLevelTaskPanel
          (PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  ~PVZ2UnchartedModeSelectLevelTaskPanel(this + -0x138);
  return;
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::PVZ2UnchartedModeSelectLevelTaskPanel() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::PVZ2UnchartedModeSelectLevelTaskPanel
          (PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::UISingletonDialog
            ((UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069d2720;
  *(undefined **)(this + 0xd8) = &DAT_069d2a80;
  *(undefined ***)(this + 0x138) = &PTR__PVZ2UnchartedModeSelectLevelTaskPanel_069d2ac8;
  return;
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::ButtonDepress
          (PVZ2UnchartedModeSelectLevelTaskPanel *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<PVZ2UnchartedModeSelectLevelTaskPanel>::CloseDialog();
  return;
}


/* non-virtual thunk to PVZ2UnchartedModeSelectLevelTaskPanel::ButtonDepress(int) */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::ButtonDepress
          (PVZ2UnchartedModeSelectLevelTaskPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeSelectLevelTaskPanel::InitView() */

void __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::InitView(PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Widget *pWVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  PVZ2UnchartedModeUtils *this_01;
  long *plVar8;
  long lVar9;
  long *extraout_x0;
  undefined8 *puVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  string asStack_48 [8];
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"Background_0");
  pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar6,true);
  std::string::string((string *)&local_20,"UIImage_Background");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_04df99bc(0xf);
  iVar4 = FUN_04df99bc(0x1e);
  Sexy::Insets::Insets
            (aIStack_40,iVar3,iVar3,*(int *)(pUVar7 + 0x50) - iVar4,*(int *)(pUVar7 + 0x54) - iVar4)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  pWVar6 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar6);
  (**(code **)(*(long *)pWVar6 + 0x198))
            (pWVar6,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = *(int *)(pWVar6 + 0x50);
  this_01 = (PVZ2UnchartedModeUtils *)FUN_04df99bc(0x8c);
  iVar4 = (int)this_01;
  PVZ2UnchartedModeUtils::GetCurrentLevel(this_01);
  FUN_05475d88((string *)&local_20,asStack_48);
  cVar2 = PVZ2UnchartedModeUtils::GetWorldIndexOfLevel((string *)&local_20);
  std::string::~string((string *)&local_20);
  iVar5 = Sexy::LazySingleton<UnchartedBirthdayTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar5 + 8,(bool)(cVar2 + '\x01'));
  uVar13 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar11 = FUN_04df92bc(local_20,local_18);
    if (uVar11 <= uVar13) break;
    plVar8 = (long *)FUN_04df92c8(uVar1,uVar13);
    plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar8 + 0x20));
    lVar9 = (**(code **)(*plVar8 + 0x58))();
    FUN_04df9188(*(undefined8 *)(lVar9 + 0x18));
    nop();
    iVar5 = FUN_04df99bc(10);
    Sexy::Insets::Insets(aIStack_30,0,(iVar5 + iVar4) * (int)uVar13,iVar3,iVar4);
    (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,aIStack_30);
    (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,extraout_x0);
    puVar10 = (undefined8 *)FUN_04df92c8(local_20,uVar13);
    (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar10);
    uVar13 = uVar13 + 1;
  }
  iVar3 = FUN_04df99bc(10);
  pcVar12 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(pWVar6 + 0x54) = (iVar3 + iVar4) * (int)uVar11;
  (*pcVar12)(this_00,pWVar6);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeSelectLevelTaskPanel::OnCreate() */

undefined4 __thiscall
PVZ2UnchartedModeSelectLevelTaskPanel::OnCreate(PVZ2UnchartedModeSelectLevelTaskPanel *this)

{
  undefined4 uVar1;
  
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return uVar1;
}

