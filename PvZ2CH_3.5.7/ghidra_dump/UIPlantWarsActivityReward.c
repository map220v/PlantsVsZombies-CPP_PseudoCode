// Class: UIPlantWarsActivityReward


/* UIPlantWarsActivityReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPlantWarsActivityReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantWarsActivityReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPlantWarsActivityReward::ScrollTargetReached
          (UIPlantWarsActivityReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPlantWarsActivityReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPlantWarsActivityReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantWarsActivityReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPlantWarsActivityReward::ScrollTargetInterrupted
          (UIPlantWarsActivityReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::GetLayoutName() */

void __thiscall UIPlantWarsActivityReward::GetLayoutName(UIPlantWarsActivityReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantWarsActivityReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantWarsActivityReward::OnObtainedPlantWarsStarReward(int, int) */

void __thiscall
UIPlantWarsActivityReward::OnObtainedPlantWarsStarReward
          (UIPlantWarsActivityReward *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x140);
    uVar1 = FUN_04d9e890(uVar5,*(undefined8 *)(this + 0x148));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      puVar2 = (undefined8 *)FUN_04d9e89c(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*(int *)((PlantWarsStarRewardLine *)*puVar2 + 0xe0) != param_2);
    PlantWarsStarRewardLine::Obtained((PlantWarsStarRewardLine *)*puVar2);
  } while( true );
}


/* UIPlantWarsActivityReward::OnObtainedPlantWarsLeaderBoardBonus(int, int) */

void __thiscall
UIPlantWarsActivityReward::OnObtainedPlantWarsLeaderBoardBonus
          (UIPlantWarsActivityReward *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x158);
    uVar1 = FUN_04d9e8a4(uVar5,*(undefined8 *)(this + 0x160));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
      puVar2 = (undefined8 *)FUN_04d9e8b0(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*(int *)((PlantWarsLeaderBoardBonusLine *)*puVar2 + 0xe0) != param_2);
    PlantWarsLeaderBoardBonusLine::Obtained((PlantWarsLeaderBoardBonusLine *)*puVar2);
  } while( true );
}


/* UIPlantWarsActivityReward::ButtonDepress(int) */

void __thiscall
UIPlantWarsActivityReward::ButtonDepress(UIPlantWarsActivityReward *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIPlantWarsActivityReward>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPlantWarsActivityReward::ButtonDepress(int) */

void __thiscall
UIPlantWarsActivityReward::ButtonDepress(UIPlantWarsActivityReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIPlantWarsActivityReward::UIPlantWarsActivityReward() */

void __thiscall
UIPlantWarsActivityReward::UIPlantWarsActivityReward(UIPlantWarsActivityReward *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPlantWarsActivityReward>::UISingletonDialog
            ((UISingletonDialog<UIPlantWarsActivityReward> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069be4b0;
  *(undefined **)(this + 0xd8) = &DAT_069be810;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantWarsActivityReward_069be858;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnObtainedPlantWarsStarReward);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UIPlantWarsActivityReward,void(UIPlantWarsActivityReward::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ObtainedPlantWarsStarReward,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnObtainedPlantWarsLeaderBoardBonus);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<UIPlantWarsActivityReward,void(UIPlantWarsActivityReward::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::ObtainedPlantWarsLeaderBoardBonus,&local_50);
  return;
}


/* UIPlantWarsActivityReward::~UIPlantWarsActivityReward() */

void __thiscall
UIPlantWarsActivityReward::~UIPlantWarsActivityReward(UIPlantWarsActivityReward *this)

{
  *(undefined ***)(this + 0x138) = &PTR__UIPlantWarsActivityReward_069be858;
  *(undefined ***)this = &PTR_GetClass_069be4b0;
  *(undefined **)(this + 0xd8) = &DAT_069be810;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantWarsLeaderBoardBonusLine*,std::allocator<PlantWarsLeaderBoardBonusLine*>>::
  ~vector((vector<PlantWarsLeaderBoardBonusLine*,std::allocator<PlantWarsLeaderBoardBonusLine*>> *)
          (this + 0x158));
  std::vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>>::~vector
            ((vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>> *)
             (this + 0x140));
  UISingletonDialog<UIPlantWarsActivityReward>::~UISingletonDialog
            ((UISingletonDialog<UIPlantWarsActivityReward> *)this);
  return;
}


/* non-virtual thunk to UIPlantWarsActivityReward::~UIPlantWarsActivityReward() */

void __thiscall
UIPlantWarsActivityReward::~UIPlantWarsActivityReward(UIPlantWarsActivityReward *this)

{
  ~UIPlantWarsActivityReward(this + -0x138);
  return;
}


/* UIPlantWarsActivityReward::~UIPlantWarsActivityReward() */

void __thiscall
UIPlantWarsActivityReward::~UIPlantWarsActivityReward(UIPlantWarsActivityReward *this)

{
  ~UIPlantWarsActivityReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPlantWarsActivityReward::~UIPlantWarsActivityReward() */

void __thiscall
UIPlantWarsActivityReward::~UIPlantWarsActivityReward(UIPlantWarsActivityReward *this)

{
  ~UIPlantWarsActivityReward(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::InitTabStarReward() */

void __thiscall UIPlantWarsActivityReward::InitTabStarReward(UIPlantWarsActivityReward *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsNetworkMgr *this_02;
  long lVar8;
  PlantWarsStarRewardLine *pPVar9;
  PlantWarsStarRewardData *pPVar10;
  ulong uVar11;
  ulong uVar12;
  PlantWarsStarRewardLine *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"Widget_TabStar");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar1 = FUN_04d9f494(5);
  uVar2 = FUN_04d9f494(0xf);
  iVar3 = FUN_04d9f494(10);
  lVar8 = plVar7[10];
  iVar4 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,(int)lVar8 - iVar3,*(int *)((long)plVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04d9f494(10);
  iVar4 = FUN_04d9f494(0xf);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_04d9f494(0x5a);
  this_02 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar8 = PlantWarsNetworkMgr::GetCurrentWorldData(this_02);
  uVar12 = 0;
  while( true ) {
    uVar11 = FUN_04d9e850(*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
    if (uVar11 <= uVar12) break;
    pPVar9 = ::operator_new(0x100);
    PlantWarsStarRewardLine::PlantWarsStarRewardLine(pPVar9);
    local_10 = pPVar9;
    (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar5,iVar4,iVar3 + iVar5 * -2,iVar6);
    pPVar9 = local_10;
    pPVar10 = (PlantWarsStarRewardData *)FUN_04d9e864(*(undefined8 *)(lVar8 + 0x28),uVar12);
    PlantWarsStarRewardLine::InitView(pPVar9,*(int *)pPVar10,pPVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_10);
    std::vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>>::push_back
              ((vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>> *)
               (this + 0x140),&local_10);
    uVar12 = uVar12 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar5 + (iVar5 + iVar6) * (int)uVar11;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::InitView() */

void __thiscall UIPlantWarsActivityReward::InitView(UIPlantWarsActivityReward *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsNetworkMgr *this_02;
  long lVar8;
  PlantWarsStarRewardLine *pPVar9;
  PlantWarsStarRewardData *pPVar10;
  ulong uVar11;
  ulong uVar12;
  PlantWarsStarRewardLine *pPStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string((string *)&pPStack_10,"Widget_TabStar");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&pPStack_10);
  std::string::~string((string *)&pPStack_10);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar1 = FUN_04d9f494(5);
  uVar2 = FUN_04d9f494(0xf);
  iVar3 = FUN_04d9f494(10);
  lVar8 = plVar7[10];
  iVar4 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,(int)lVar8 - iVar3,*(int *)((long)plVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04d9f494(10);
  iVar4 = FUN_04d9f494(0xf);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_04d9f494(0x5a);
  this_02 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar8 = PlantWarsNetworkMgr::GetCurrentWorldData(this_02);
  uVar12 = 0;
  while( true ) {
    uVar11 = FUN_04d9e850(*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
    if (uVar11 <= uVar12) break;
    pPVar9 = ::operator_new(0x100);
    PlantWarsStarRewardLine::PlantWarsStarRewardLine(pPVar9);
    pPStack_10 = pPVar9;
    (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar5,iVar4,iVar3 + iVar5 * -2,iVar6);
    pPVar9 = pPStack_10;
    pPVar10 = (PlantWarsStarRewardData *)FUN_04d9e864(*(undefined8 *)(lVar8 + 0x28),uVar12);
    PlantWarsStarRewardLine::InitView(pPVar9,*(int *)pPVar10,pPVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,pPStack_10);
    std::vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>>::push_back
              ((vector<PlantWarsStarRewardLine*,std::allocator<PlantWarsStarRewardLine*>> *)
               (this + 0x140),&pPStack_10);
    uVar12 = uVar12 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar5 + (iVar5 + iVar6) * (int)uVar11;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::OnCreate() */

void __thiscall UIPlantWarsActivityReward::OnCreate(UIPlantWarsActivityReward *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::InitTabLeaderBoardBonus() */

void __thiscall UIPlantWarsActivityReward::InitTabLeaderBoardBonus(UIPlantWarsActivityReward *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsNetworkMgr *this_02;
  long lVar8;
  PlantWarsLeaderBoardBonusLine *pPVar9;
  PlantWarsStarRewardData *pPVar10;
  ulong uVar11;
  ulong uVar12;
  PlantWarsLeaderBoardBonusLine *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"Widget_LeaderBoardBonus");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar1 = FUN_04d9f494(5);
  uVar2 = FUN_04d9f494(0xf);
  iVar3 = FUN_04d9f494(10);
  lVar8 = plVar7[10];
  iVar4 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,(int)lVar8 - iVar3,*(int *)((long)plVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04d9f494(10);
  iVar4 = FUN_04d9f494(0xf);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_04d9f494(0x5a);
  this_02 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar8 = PlantWarsNetworkMgr::GetCurrentWorldData(this_02);
  uVar12 = 0;
  while( true ) {
    uVar11 = FUN_04d9e850(*(undefined8 *)(lVar8 + 0x48),*(undefined8 *)(lVar8 + 0x50));
    if (uVar11 <= uVar12) break;
    pPVar9 = ::operator_new(0x108);
    PlantWarsLeaderBoardBonusLine::PlantWarsLeaderBoardBonusLine(pPVar9);
    local_10 = pPVar9;
    (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,iVar5,iVar4,iVar3 + iVar5 * -2,iVar6);
    pPVar9 = local_10;
    pPVar10 = (PlantWarsStarRewardData *)FUN_04d9e864(*(undefined8 *)(lVar8 + 0x48),uVar12);
    PlantWarsLeaderBoardBonusLine::InitView(pPVar9,*(int *)pPVar10,pPVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_10);
    std::vector<PlantWarsLeaderBoardBonusLine*,std::allocator<PlantWarsLeaderBoardBonusLine*>>::
    push_back((vector<PlantWarsLeaderBoardBonusLine*,std::allocator<PlantWarsLeaderBoardBonusLine*>>
               *)(this + 0x158),&local_10);
    uVar12 = uVar12 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  lVar8 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar5 + (iVar5 + iVar6) * (int)uVar11;
  (**(code **)(lVar8 + 0x60))(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantWarsActivityReward::InitTabLeaderBoard() */

void __thiscall UIPlantWarsActivityReward::InitTabLeaderBoard(UIPlantWarsActivityReward *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  PlantWarsNetworkMgr *this_02;
  long lVar8;
  PlantWarsLeaderBoardLine *this_03;
  PlantWarsLeaderBoardLineData *pPVar9;
  ulong uVar10;
  UIWidgetText *pUVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_LeaderBoard");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  uVar1 = FUN_04d9f494(5);
  uVar2 = FUN_04d9f494(0xf);
  iVar3 = FUN_04d9f494(10);
  lVar8 = plVar7[10];
  iVar4 = FUN_04d9f494(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,(int)lVar8 - iVar3,*(int *)((long)plVar7 + 0x54) - iVar4);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_04d9f494(10);
  iVar4 = FUN_04d9f494(0xf);
  iVar3 = *(int *)(this_01 + 0x50);
  iVar6 = FUN_04d9f494(0x5a);
  this_02 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  lVar8 = PlantWarsNetworkMgr::GetCurrentWorldData(this_02);
  uVar13 = 0;
  while( true ) {
    uVar10 = FUN_04d9e870(*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x70));
    if (uVar10 <= uVar13) break;
    this_03 = ::operator_new(0x118);
    PlantWarsLeaderBoardLine::PlantWarsLeaderBoardLine(this_03);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar5,iVar4,iVar3 + iVar5 * -2,iVar6);
    pPVar9 = (PlantWarsLeaderBoardLineData *)FUN_04d9e884(*(undefined8 *)(lVar8 + 0x68),uVar13);
    PlantWarsLeaderBoardLine::InitView(this_03,*(int *)pPVar9,pPVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
    uVar13 = uVar13 + 1;
    iVar4 = iVar4 + iVar5 + iVar6;
  }
  lVar12 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar5 + (iVar5 + iVar6) * (int)uVar10;
  (**(code **)(lVar12 + 0x60))(this_00,this_01);
  (**(code **)(*plVar7 + 0x60))(plVar7,this_00);
  FUN_05478178(asStack_10,L"[PLANT_WARS_CURRENT_SCORE]",auStack_18);
  TodReplaceNumberString((wstring *)asStack_10,L"{NUMS}",*(int *)(lVar8 + 0x60));
  FUN_05476c50(asStack_10);
  nop();
  FUN_05478178(asStack_10,L"[PLANT_WARS_CURRENT_RANK]",auStack_28);
  TodReplaceNumberString((wstring *)asStack_10,L"{NUMS}",*(int *)(lVar8 + 100));
  FUN_05476c50(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Score");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar11 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar11,auStack_20);
  }
  std::string::string(asStack_10,"UIText_Rank");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar11 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar11,auStack_18);
  }
  FUN_05476c50(auStack_18);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

