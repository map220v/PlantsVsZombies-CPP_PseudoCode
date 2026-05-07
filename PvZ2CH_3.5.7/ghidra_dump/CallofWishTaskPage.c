// Class: CallofWishTaskPage


/* CallofWishTaskPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void CallofWishTaskPage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishTaskPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CallofWishTaskPage::ScrollTargetReached(CallofWishTaskPage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* CallofWishTaskPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CallofWishTaskPage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishTaskPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CallofWishTaskPage::ScrollTargetInterrupted(CallofWishTaskPage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* CallofWishTaskPage::~CallofWishTaskPage() */

void __thiscall CallofWishTaskPage::~CallofWishTaskPage(CallofWishTaskPage *this)

{
  *(undefined ***)this = &PTR_GetClass_066f1f90;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishTaskPage_066f22c0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CallofWishTaskPage::~CallofWishTaskPage() */

void __thiscall CallofWishTaskPage::~CallofWishTaskPage(CallofWishTaskPage *this)

{
  ~CallofWishTaskPage(this + -0xd8);
  return;
}


/* CallofWishTaskPage::~CallofWishTaskPage() */

void __thiscall CallofWishTaskPage::~CallofWishTaskPage(CallofWishTaskPage *this)

{
  ~CallofWishTaskPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CallofWishTaskPage::~CallofWishTaskPage() */

void __thiscall CallofWishTaskPage::~CallofWishTaskPage(CallofWishTaskPage *this)

{
  ~CallofWishTaskPage(this + -0xd8);
  return;
}


/* CallofWishTaskPage::CallofWishTaskPage() */

void __thiscall CallofWishTaskPage::CallofWishTaskPage(CallofWishTaskPage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066f1f90;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishTaskPage_066f22c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskPage::InitView(int, int) */

void __thiscall CallofWishTaskPage::InitView(CallofWishTaskPage *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar9;
  CallofWishTaskWidget *this_02;
  undefined8 *puVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = Sexy::LazySingleton<CallofWishTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar8 + 8));
  (**(code **)(*(long *)this + 0x198))(this,0,0,param_1,param_2);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  iVar2 = FUN_039d34f4(5);
  iVar3 = FUN_039d34f4(0xf);
  iVar4 = FUN_039d34f4(10);
  iVar7 = *(int *)(this + 0x50);
  iVar5 = FUN_039d34f4(0x1e);
  Sexy::Insets::Insets(aIStack_40,iVar2,iVar3,iVar7 - iVar4,*(int *)(this + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar6 = FUN_039d34f4(10);
  iVar7 = *(int *)(this_01 + 0x50);
  iVar3 = (int)((float)*(int *)(this_01 + 0x54) * 0.2857143);
  iVar2 = Sexy::LazySingleton<CallofWishTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar2 + 8,true);
  uVar13 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar11 = FUN_039d27c8(local_20,local_18);
    if (uVar11 <= uVar13) break;
    plVar9 = (long *)FUN_039d27d4(uVar1,uVar13);
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar9 + 0x20));
    lVar8 = (**(code **)(*plVar9 + 0x58))();
    FUN_039d26c4(*(undefined8 *)(lVar8 + 0x18));
    nop();
    iVar2 = FUN_039d34f4(uVar6);
    Sexy::Insets::Insets(aIStack_30,0,(iVar2 + iVar3) * (int)uVar13,iVar7,iVar3);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_30);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    puVar10 = (undefined8 *)FUN_039d27d4(local_20,uVar13);
    CallofWishTaskWidget::SetTask(this_02,(GeneralTask *)*puVar10);
    uVar13 = uVar13 + 1;
  }
  iVar7 = FUN_039d34f4(uVar6);
  pcVar12 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar7 + iVar3) * (int)uVar11;
  (*pcVar12)(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTaskPage::Draw(Sexy::Graphics*) */

void __thiscall CallofWishTaskPage::Draw(CallofWishTaskPage *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1650);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

