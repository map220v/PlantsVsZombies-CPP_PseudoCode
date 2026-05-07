// Class: UIDaveKitchen


/* UIDaveKitchen::UIDaveKitchen() */

void __thiscall UIDaveKitchen::UIDaveKitchen(UIDaveKitchen *this)

{
  UISingletonDialog<UIDaveKitchen>::UISingletonDialog((UISingletonDialog<UIDaveKitchen> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06642b80;
  *(undefined **)(this + 0xd8) = &DAT_06642ee0;
  *(undefined ***)(this + 0x138) = &PTR__UIDaveKitchen_06642f28;
  DaveKitchenData::DaveKitchenData((DaveKitchenData *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d8));
  return;
}


/* UIDaveKitchen::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIDaveKitchen::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDaveKitchen::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIDaveKitchen::ScrollTargetReached(UIDaveKitchen *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIDaveKitchen::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIDaveKitchen::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDaveKitchen::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIDaveKitchen::ScrollTargetInterrupted(UIDaveKitchen *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::GetLayoutName() */

void __thiscall UIDaveKitchen::GetLayoutName(UIDaveKitchen *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIDaveKitchen");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIDaveKitchen::ButtonDepress(int) */

void __thiscall UIDaveKitchen::ButtonDepress(UIDaveKitchen *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIDaveKitchen>::CloseDialog();
  return;
}


/* non-virtual thunk to UIDaveKitchen::ButtonDepress(int) */

void __thiscall UIDaveKitchen::ButtonDepress(UIDaveKitchen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIDaveKitchen::RefreshInfo() */

void __thiscall UIDaveKitchen::RefreshInfo(UIDaveKitchen *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x1d8);
    uVar2 = FUN_03494390(uVar4,*(undefined8 *)(this + 0x1e0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0349439c(uVar4,uVar3);
    DaveKitchenExchangeLine::RefreshView((DaveKitchenExchangeLine *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::InitBundle() */

void __thiscall UIDaveKitchen::InitBundle(UIDaveKitchen *this)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  UIWidgetImage *pUVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar8;
  DaveKitchenBundleWidget *this_02;
  vector *pvVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  string asStack_18 [16];
  long local_8;
  
  iVar11 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Tab3_BG1");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x80))(pUVar7,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar3 = FUN_03494b84(10);
  iVar4 = FUN_03494b84(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar3,iVar3,*(int *)(pUVar7 + 0x50) - iVar4,
             *(int *)(pUVar7 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar4 = FUN_03494b84(10);
  iVar5 = FUN_03494b84(0xaf);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  uVar8 = FUN_034943a4(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
  iVar3 = *(int *)(this_01 + 0x50);
  lVar12 = uVar8 - 1;
  lVar2 = (long)iVar5 * uVar8;
  uVar6 = FUN_03494b84(0);
  uVar10 = 0;
  while( true ) {
    iVar11 = iVar11 + iVar4 + iVar5;
    if (uVar8 <= uVar10) break;
    this_02 = ::operator_new(0xf0);
    DaveKitchenBundleWidget::DaveKitchenBundleWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,(iVar11 - iVar5) +
                       ((int)((ulong)((iVar3 - lVar2) - iVar4 * lVar12) >> 1) - iVar4),uVar6,iVar5,
               uVar1);
    pvVar9 = (vector *)FUN_034943b8(*(undefined8 *)(this + 0x1a0),uVar10);
    DaveKitchenBundleWidget::InitView(this_02,(int)uVar10,pvVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar8 = FUN_034943a4(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
    uVar10 = uVar10 + 1;
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::InitTask() */

void __thiscall UIDaveKitchen::InitTask(UIDaveKitchen *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar7;
  DaveKitchenTaskWidget *this_02;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  CarnivalRewardData *pCVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  Insets aIStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  string asStack_28 [32];
  long local_8;
  
  uVar16 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"UIImage_Tab2_BG1");
  iVar13 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03494b84(0x14);
  iVar2 = FUN_03494b84(0xf);
  iVar3 = FUN_03494b84(0x28);
  iVar5 = *(int *)(pUVar6 + 0x50);
  iVar4 = FUN_03494b84(0x1e);
  Sexy::Insets::Insets(aIStack_50,iVar1,iVar2,iVar5 - iVar3,*(int *)(pUVar6 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_03494b84(0);
  iVar3 = FUN_03494b84(10);
  iVar1 = *(int *)(this_01 + 0x50);
  iVar4 = FUN_03494b84(0x78);
  iVar5 = Sexy::LazySingleton<DaveKitchenTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar5 + 8,true);
  lVar7 = FUN_034943cc(local_40,local_38);
  iVar5 = iVar2;
  if (lVar7 != 0) {
    do {
      uVar14 = 0;
      this_02 = ::operator_new(400);
      DaveKitchenTaskWidget::DaveKitchenTaskWidget(this_02);
      (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,iVar5,iVar1 + iVar2 * -2,iVar4);
      puVar8 = (undefined8 *)FUN_034943d8(local_40,uVar16);
      (**(code **)(*(long *)this_02 + 0x318))(this_02,*puVar8);
      while( true ) {
        uVar15 = *(undefined8 *)(this + 0x188);
        uVar11 = FUN_034943e0(uVar15,*(undefined8 *)(this + 400));
        if (uVar11 <= uVar14) break;
        piVar9 = (int *)FUN_03494408(uVar15,uVar14);
        iVar13 = *piVar9;
        plVar10 = (long *)FUN_034943d8(local_40,uVar16);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar10 + 0x20));
        if (iVar13 == *(int *)(lVar7 + 8)) {
          pCVar12 = (CarnivalRewardData *)FUN_03494408(*(undefined8 *)(this + 0x188),uVar14);
          CarnivalRewardData::CarnivalRewardData((CarnivalRewardData *)asStack_28,pCVar12);
          DaveKitchenTaskWidget::SetTaskData(this_02,uVar14 & 0xffffffff,asStack_28);
          PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)asStack_28);
          break;
        }
        uVar14 = uVar14 + 1;
      }
      uVar16 = uVar16 + 1;
      iVar5 = iVar5 + iVar3 + iVar4;
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar13 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
      uVar14 = FUN_034943cc(local_40,local_38);
    } while (uVar16 < uVar14);
  }
  lVar7 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar2 + iVar13;
  (**(code **)(lVar7 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::InitExchange() */

void __thiscall UIDaveKitchen::InitExchange(UIDaveKitchen *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DaveKitchenExchangeLine *pDVar7;
  vector *pvVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  DaveKitchenExchangeLine *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>>::clear
            ((vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>> *)
             (this + 0x1d8));
  iVar13 = 0;
  std::string::string(asStack_18,"UIImage_Tab1_BG1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_03494b84(0xf);
  iVar2 = FUN_03494b84(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar1,*(int *)(pUVar6 + 0x50) - iVar2,
             *(int *)(pUVar6 + 0x54) - iVar2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_03494b84(0);
  iVar4 = FUN_03494b84(10);
  iVar1 = *(int *)(this_01 + 0x50);
  iVar5 = FUN_03494b84(0x5a);
  uVar12 = 0;
  iVar2 = iVar3;
  while( true ) {
    uVar10 = FUN_034943a4(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
    if (uVar10 <= uVar12) break;
    pDVar7 = ::operator_new(0x128);
    DaveKitchenExchangeLine::DaveKitchenExchangeLine(pDVar7);
    local_20 = pDVar7;
    (**(code **)(*(long *)pDVar7 + 0x198))(pDVar7,iVar3,iVar2,iVar1 + iVar3 * -2,iVar5);
    pDVar7 = local_20;
    pvVar8 = (vector *)FUN_034943b8(*(undefined8 *)(this + 0x158),uVar12);
    piVar9 = (int *)FUN_034943c4(*(undefined8 *)(this + 0x170),uVar12);
    DaveKitchenExchangeLine::InitView(pDVar7,(int)uVar12,pvVar8,*piVar9);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_20);
    iVar13 = *(int *)(local_20 + 0x4c) + *(int *)(local_20 + 0x54);
    std::vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>>::push_back
              ((vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>> *)
               (this + 0x1d8),&local_20);
    uVar12 = uVar12 + 1;
    iVar2 = iVar2 + iVar4 + iVar5;
  }
  lVar11 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar3 + iVar13;
  (**(code **)(lVar11 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::InitView() */

void __thiscall UIDaveKitchen::InitView(UIDaveKitchen *this)

{
  char cVar1;
  int iVar2;
  TGALogMgr *this_00;
  size_t in_x2;
  TGASecretStore aTStack_b8 [48];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_0349434c(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x140)), cVar1 != '\0'))
  {
    InitExchange(this);
    InitTask(this);
    InitBundle(this);
    TGASecretStore::TGASecretStore(aTStack_b8);
    std::string::append((string *)aTStack_b8,"1",in_x2);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogDaveKitchenData(this_00,(TGADaveKitchenData *)aTStack_b8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_b8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDaveKitchen::OnCreate() */

void __thiscall UIDaveKitchen::OnCreate(UIDaveKitchen *this)

{
  UIWidgetBackground *pUVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  lVar2 = Sexy::LazySingleton<DaveKitchenTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar2 + 8));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIDaveKitchen::~UIDaveKitchen() */

void __thiscall UIDaveKitchen::~UIDaveKitchen(UIDaveKitchen *this)

{
  *(undefined ***)this = &PTR_GetClass_06642b80;
  *(undefined **)(this + 0xd8) = &DAT_06642ee0;
  *(undefined ***)(this + 0x138) = &PTR__UIDaveKitchen_06642f28;
  std::vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>>::~vector
            ((vector<DaveKitchenExchangeLine*,std::allocator<DaveKitchenExchangeLine*>> *)
             (this + 0x1d8));
  DaveKitchenData::~DaveKitchenData((DaveKitchenData *)(this + 0x140));
  UISingletonDialog<UIDaveKitchen>::~UISingletonDialog((UISingletonDialog<UIDaveKitchen> *)this);
  return;
}


/* non-virtual thunk to UIDaveKitchen::~UIDaveKitchen() */

void __thiscall UIDaveKitchen::~UIDaveKitchen(UIDaveKitchen *this)

{
  ~UIDaveKitchen(this + -0x138);
  return;
}


/* UIDaveKitchen::~UIDaveKitchen() */

void __thiscall UIDaveKitchen::~UIDaveKitchen(UIDaveKitchen *this)

{
  ~UIDaveKitchen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIDaveKitchen::~UIDaveKitchen() */

void __thiscall UIDaveKitchen::~UIDaveKitchen(UIDaveKitchen *this)

{
  ~UIDaveKitchen(this + -0x138);
  return;
}

