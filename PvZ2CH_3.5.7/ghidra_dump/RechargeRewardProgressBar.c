// Class: RechargeRewardProgressBar


/* RechargeRewardProgressBar::ScrollTargetReached(Sexy::ScrollWidget*) */

void RechargeRewardProgressBar::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeRewardProgressBar::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
RechargeRewardProgressBar::ScrollTargetReached
          (RechargeRewardProgressBar *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* RechargeRewardProgressBar::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RechargeRewardProgressBar::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeRewardProgressBar::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
RechargeRewardProgressBar::ScrollTargetInterrupted
          (RechargeRewardProgressBar *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* RechargeRewardProgressBar::calcucateProgressBarWidth(int) */

int __thiscall
RechargeRewardProgressBar::calcucateProgressBarWidth(RechargeRewardProgressBar *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  
  uVar10 = *(undefined8 *)(this + 0x108);
  uVar7 = FUN_049e340c(uVar10,*(undefined8 *)(this + 0x110));
  if (uVar7 == 0) {
    iVar6 = 0;
  }
  else {
    iVar5 = (int)((ulong)(long)param_1 / uVar7);
    iVar2 = *(int *)(this + 0xe4);
    iVar6 = 0;
    uVar9 = 0;
    iVar11 = 0;
    do {
      uVar1 = uVar9 + 1;
      lVar8 = FUN_049e3418(uVar10,uVar9);
      iVar3 = *(int *)(lVar8 + 0x34);
      if (iVar2 < iVar3) {
        iVar4 = 0;
        if (iVar3 - iVar11 != 0) {
          iVar4 = ((iVar2 - iVar11) * iVar5) / (iVar3 - iVar11);
        }
        return iVar6 + iVar4;
      }
      iVar6 = iVar6 + iVar5;
      uVar9 = uVar1;
      iVar11 = iVar3;
    } while (uVar1 != uVar7);
  }
  return iVar6;
}


/* RechargeRewardProgressBar::RechargeRewardProgressBar(int, std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
RechargeRewardProgressBar::RechargeRewardProgressBar
          (RechargeRewardProgressBar *this,int param_1,vector *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(int *)(this + 0xe4) = param_1;
  *(undefined ***)this = &PTR_GetClass_0692a810;
  *(undefined ***)(this + 0xd8) = &PTR__RechargeRewardProgressBar_0692ab40;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0xf0),param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  return;
}


/* RechargeRewardProgressBar::~RechargeRewardProgressBar() */

void __thiscall
RechargeRewardProgressBar::~RechargeRewardProgressBar(RechargeRewardProgressBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0692a810;
  *(undefined ***)(this + 0xd8) = &PTR__RechargeRewardProgressBar_0692ab40;
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0x108));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to RechargeRewardProgressBar::~RechargeRewardProgressBar() */

void __thiscall
RechargeRewardProgressBar::~RechargeRewardProgressBar(RechargeRewardProgressBar *this)

{
  ~RechargeRewardProgressBar(this + -0xd8);
  return;
}


/* RechargeRewardProgressBar::~RechargeRewardProgressBar() */

void __thiscall
RechargeRewardProgressBar::~RechargeRewardProgressBar(RechargeRewardProgressBar *this)

{
  ~RechargeRewardProgressBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargeRewardProgressBar::~RechargeRewardProgressBar() */

void __thiscall
RechargeRewardProgressBar::~RechargeRewardProgressBar(RechargeRewardProgressBar *this)

{
  ~RechargeRewardProgressBar(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardProgressBar::Init() */

void __thiscall RechargeRewardProgressBar::Init(RechargeRewardProgressBar *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  vector *pvVar9;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  RechargeRewardContent *this_03;
  RechargeRewardConfig *this_04;
  RechargeRewardContentConfig *pRVar13;
  LotteryResultProgressBar *this_05;
  RechargeRewardProgressBarWidget *this_06;
  SalesProgressBar *this_07;
  ulong uVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_30 [2];
  int local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
  pvVar9 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::operator=
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0x108),pvVar9);
  iVar2 = FUN_049e37f4(10);
  iVar3 = FUN_049e37f4(100);
  iVar4 = FUN_049e37f4(0x6e);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2,iVar2,iVar3,iVar4);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  iVar3 = FUN_049e37f4(0x10);
  iVar4 = FUN_049e37f4(10);
  uVar5 = FUN_049e37f4(0x34);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_049e37f4(0x14);
  uVar7 = FUN_049e37f4(0x84);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,iVar3 + iVar4,uVar5,(iVar2 + iVar3 * -2) - iVar6,uVar7);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar16 = *(undefined8 *)(this + 0x108);
  local_30[0] = 0;
  uVar14 = 0;
  lVar10 = FUN_049e340c(uVar16,*(undefined8 *)(this + 0x110));
  if (lVar10 != 0) {
    do {
      lVar10 = FUN_049e3418(uVar16,uVar14);
      uVar16 = *(undefined8 *)(this + 0xf0);
      iVar2 = *(int *)(lVar10 + 0x34);
      uVar11 = FUN_049e33d0(uVar16,*(undefined8 *)(this + 0xf8));
      if (uVar14 < uVar11) {
        bVar15 = true;
        piVar12 = (int *)FUN_049e3420(uVar16,uVar14);
        bVar1 = *piVar12 == 2;
        if (*(int *)(this + 0xe4) < iVar2) goto LAB_049e5c24;
      }
      else {
        bVar1 = false;
LAB_049e5c24:
        bVar15 = false;
      }
      this_03 = ::operator_new(0x110);
      RechargeRewardContent::RechargeRewardContent(this_03,bVar1,bVar15);
      this_04 = (RechargeRewardConfig *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
      pRVar13 = (RechargeRewardContentConfig *)
                RechargeRewardConfig::getContentByIndex(this_04,local_30);
      RechargeRewardContent::setRechargeContentConfig(this_03,pRVar13,local_30[0]);
      (**(code **)(*(long *)this_03 + 0x1a8))(this_03,local_28,local_24);
      (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
      uVar16 = *(undefined8 *)(this + 0x108);
      iVar2 = FUN_049e340c(uVar16,*(undefined8 *)(this + 0x110));
      if (iVar2 + -1 == local_30[0]) {
        lVar10 = FUN_049e3418(uVar16,(long)(iVar2 + -1));
        *(undefined4 *)(this + 0xe8) = *(undefined4 *)(lVar10 + 0x34);
      }
      GetImageByName((string *)(pRVar13 + 0x28));
      this_05 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_05);
      local_28 = local_28 + iVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      uVar16 = *(undefined8 *)(this + 0x108);
      local_30[0] = local_30[0] + 1;
      uVar14 = (ulong)local_30[0];
      uVar11 = FUN_049e340c(uVar16,*(undefined8 *)(this + 0x110));
    } while (uVar14 < uVar11);
  }
  this_06 = ::operator_new(0xf8);
  RechargeRewardProgressBarWidget::RechargeRewardProgressBarWidget(this_06);
  RechargeRewardProgressBarWidget::setBar(this_06,this);
  iVar2 = local_28;
  iVar3 = FUN_049e37f4(10);
  *(int *)(this_02 + 0x50) = iVar2 + iVar3;
  iVar4 = FUN_049e37f4(10);
  iVar6 = FUN_049e37f4(0x6e);
  this_07 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77018);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_07);
  Sexy::Insets::Insets((Insets *)aRStack_18,iVar4,iVar6,iVar2 + iVar3 + iVar4 * -2,iVar8);
  (**(code **)(*(long *)this_06 + 0x1a0))(this_06,aRStack_18);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_06);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  iVar2 = calcucateProgressBarWidth(this,*(int *)(this_06 + 0x50));
  iVar3 = *(int *)(this_06 + 0x50);
  uVar14 = FUN_049e340c(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x110));
  iVar4 = 0;
  if (uVar14 != 0) {
    iVar4 = (int)((ulong)(long)iVar3 / uVar14);
  }
  iVar2 = iVar2 - iVar4;
  uVar11 = 0;
  if (uVar14 != 0) {
    uVar11 = (ulong)(long)(iVar3 * 5) / uVar14;
  }
  if (uVar11 < (ulong)(long)iVar2) {
    iVar2 = FUN_049e37f4(0x14);
    iVar2 = iVar2 + (int)uVar11;
  }
  Sexy::Point::Point((Point *)local_30,iVar2,0);
  Sexy::ScrollWidget::ScrollToPoint((ScrollWidget *)this_01,(Point *)local_30,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

