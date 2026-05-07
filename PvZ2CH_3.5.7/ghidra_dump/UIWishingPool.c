// Class: UIWishingPool


/* UIWishingPool::UIWishingPool() */

void __thiscall UIWishingPool::UIWishingPool(UIWishingPool *this)

{
  UISingletonDialog<UIWishingPool>::UISingletonDialog((UISingletonDialog<UIWishingPool> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066356b0;
  *(undefined **)(this + 0xd8) = &DAT_06635a10;
  *(undefined ***)(this + 0x138) = &PTR__UIWishingPool_06635a58;
  WishingPoolData::WishingPoolData((WishingPoolData *)(this + 0x140));
  return;
}


/* UIWishingPool::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIWishingPool::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIWishingPool::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIWishingPool::ScrollTargetReached(UIWishingPool *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIWishingPool::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIWishingPool::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIWishingPool::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIWishingPool::ScrollTargetInterrupted(UIWishingPool *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::GetLayoutName() */

void __thiscall UIWishingPool::GetLayoutName(UIWishingPool *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWishingPool");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::InitTab3() */

void __thiscall UIWishingPool::InitTab3(UIWishingPool *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  WishingPoolGrandWidget *this_02;
  ArborPresentData *pAVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  Insets aIStack_40 [16];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIImage_Tab3_BG");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_03451b10(0x14);
  iVar3 = FUN_03451b10(0x28);
  Sexy::Insets::Insets
            (aIStack_40,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_03451b10(10);
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  iVar4 = FUN_03451b10(100);
  uVar9 = 0;
  iVar2 = 0;
  while( true ) {
    uVar7 = FUN_03451040(*(undefined8 *)(this + 0x1b8),*(undefined8 *)(this + 0x1c0));
    if (uVar7 <= uVar9) break;
    this_02 = ::operator_new(0x108);
    WishingPoolGrandWidget::WishingPoolGrandWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,0,iVar2,uVar1,iVar4);
    pAVar6 = (ArborPresentData *)FUN_03451070(*(undefined8 *)(this + 0x1b8),uVar9);
    ArborPresentData::ArborPresentData((ArborPresentData *)asStack_30,pAVar6);
    WishingPoolGrandWidget::InitView(this_02,uVar9 & 0xffffffff,asStack_30);
    PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)asStack_30);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar9 = uVar9 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
  }
  pcVar8 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (int)uVar7 * (iVar3 + iVar4) - iVar3;
  (*pcVar8)(this_00,this_01);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::InitTab2() */

void __thiscall UIWishingPool::InitTab2(UIWishingPool *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  UIWidgetImage *pUVar4;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar5;
  WishingPoolBundle *this_02;
  int *piVar6;
  vector *pvVar7;
  code *pcVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar10 = 0;
  std::string::string(asStack_18,"UIImage_Tab2_BG");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar4 + 0x80))(pUVar4,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_03451b10(0xf);
  iVar3 = FUN_03451b10(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar4 + 0x50) - iVar3,
             *(int *)(pUVar4 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = FUN_03451b10(10);
  iVar3 = FUN_03451b10(200);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  for (uVar9 = 0; uVar5 = FUN_03450f78(*(undefined8 *)(this + 0x188),*(undefined8 *)(this + 400)),
      uVar9 < uVar5; uVar9 = uVar9 + 1) {
    this_02 = ::operator_new(0x130);
    WishingPoolBundle::WishingPoolBundle(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar10,0,iVar3,uVar1);
    (**(code **)(*(long *)this_02 + 0x318))(this_02,uVar9 & 0xffffffff);
    uVar11 = *(undefined8 *)(this + 0x1a0);
    uVar5 = FUN_03450d38(uVar11,*(undefined8 *)(this + 0x1a8));
    if (uVar9 < uVar5) {
      piVar6 = (int *)FUN_03450fac(uVar11,uVar9);
      pvVar7 = (vector *)FUN_03450f8c(*(undefined8 *)(this + 0x188),uVar9);
      WishingPoolBundle::SetData(this_02,*piVar6,pvVar7);
    }
    iVar10 = iVar10 + iVar2 + iVar3;
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  }
  pcVar8 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (int)uVar5 * (iVar2 + iVar3) - iVar2;
  (*pcVar8)(this_00,this_01);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWishingPool::CheckBubbles() */

void __thiscall UIWishingPool::CheckBubbles(UIWishingPool *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(this + 0x170);
  lVar9 = 0;
  lVar3 = FUN_03450fb4(uVar10,*(undefined8 *)(this + 0x178));
  bVar2 = true;
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_03450fe4(uVar10,lVar9);
      uVar8 = *puVar4;
      lVar5 = FUN_03450ff0(uVar8,puVar4[1]);
      lVar7 = 0;
      while (lVar1 = lVar7 + 1, lVar7 != lVar5) {
        lVar6 = FUN_03451020(uVar8,lVar7);
        lVar7 = lVar1;
        if (*(int *)(lVar6 + 8) == 0) {
          bVar2 = false;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar3);
  }
  if (bVar2) {
    std::
    vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
    ::clear((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
             *)(this + 0x170));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::InitBubbles() */

void __thiscall UIWishingPool::InitBubbles(UIWishingPool *this)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  UIWidgetImage *this_00;
  PVZ2UIButton *this_01;
  char *__s;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheckBubbles(this);
  cVar2 = std::
          vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
          ::empty((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
                   *)(this + 0x170));
  if (cVar2 != '\0') {
    lVar9 = 0;
    do {
      lVar9 = lVar9 + 1;
      Sexy::StrFormat("Widget_Plant%d",asStack_18,lVar9);
      plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x80))(plVar3,1,1);
      }
    } while (lVar9 != 9);
  }
  uVar8 = *(undefined8 *)(this + 0x170);
  uVar13 = 0;
  uVar12 = 0;
  lVar9 = FUN_03450fb4(uVar8,*(undefined8 *)(this + 0x178));
  if (lVar9 != 0) {
    do {
      uVar10 = 0;
      uVar1 = uVar13;
      while( true ) {
        uVar11 = uVar1 + 1;
        puVar4 = (undefined8 *)FUN_03450fe4(uVar8,uVar12);
        uVar5 = FUN_03450ff0(*puVar4,puVar4[1]);
        if (uVar5 <= uVar10) break;
        Sexy::StrFormat("Widget_Plant%d",asStack_18,(ulong)uVar11);
        plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
        std::string::~string(asStack_18);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x80))(plVar3,1,1);
          puVar4 = (undefined8 *)FUN_03450fe4(*(undefined8 *)(this + 0x170),uVar12);
          piVar6 = (int *)FUN_03451020(*puVar4,uVar10);
          plVar7 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar6,0,false);
          (**(code **)(*plVar7 + 0x198))
                    (plVar7,0,0,(int)plVar3[10],*(undefined4 *)((long)plVar3 + 0x54));
          (**(code **)(*plVar3 + 0x60))(plVar3,plVar7);
        }
        Sexy::StrFormat("UIImage_Bubble%d",asStack_18,(ulong)uVar11);
        this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
        std::string::~string(asStack_18);
        if (this_00 != (UIWidgetImage *)0x0) {
          (**(code **)(*(long *)this_00 + 0x80))(this_00,1,1);
          FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
          Sexy::Color::Color((Color *)asStack_18,1);
          this_01 = ::operator_new(0x300);
          PVZ2UIButton::PVZ2UIButton
                    (this_01,0xde,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)asStack_18);
          FUN_05476c50(awStack_20);
          nop();
          (**(code **)(*(long *)this_01 + 0x198))
                    (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
          (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
          if (uVar13 + (int)uVar10 < 3) {
            puVar4 = (undefined8 *)FUN_03450fe4(*(undefined8 *)(this + 0x170),uVar12);
            lVar9 = FUN_03451020(*puVar4,uVar10);
            if (*(int *)(lVar9 + 8) == 0) {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE1";
            }
            else {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE1_DOWN";
            }
          }
          else if (uVar1 - 3 < 3) {
            puVar4 = (undefined8 *)FUN_03450fe4(*(undefined8 *)(this + 0x170),uVar12);
            lVar9 = FUN_03451020(*puVar4,uVar10);
            if (*(int *)(lVar9 + 8) == 0) {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE2";
            }
            else {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE2_DOWN";
            }
          }
          else {
            puVar4 = (undefined8 *)FUN_03450fe4(*(undefined8 *)(this + 0x170),uVar12);
            lVar9 = FUN_03451020(*puVar4,uVar10);
            if (*(int *)(lVar9 + 8) == 0) {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE3";
            }
            else {
              __s = "IMAGE_UI_WISHINGPOOL_BUBBLE3_DOWN";
            }
          }
          std::string::string(asStack_18,__s);
          UIWidgetImage::SetImage(this_00,asStack_18);
          std::string::~string(asStack_18);
          nop();
        }
        uVar8 = *(undefined8 *)(this + 0x170);
        uVar10 = uVar10 + 1;
        uVar1 = uVar11;
      }
      uVar12 = uVar12 + 1;
      uVar13 = uVar13 + 3;
      uVar10 = FUN_03450fb4(uVar8,*(undefined8 *)(this + 0x178));
    } while (uVar12 < uVar10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::InitTab1() */

void __thiscall UIWishingPool::InitTab1(UIWishingPool *this)

{
  UIWidgetImage *pUVar1;
  UIWidgetText *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_MatOne");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar1[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_One");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_DrawOne");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_MatTen");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar1[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Ten");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_DrawTen");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar2[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  InitBubbles(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::Refresh() */

void __thiscall UIWishingPool::Refresh(UIWishingPool *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_wishing_coin");
  local_14 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_MatNumber");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  UIWidgetText::SetString(this_02,asStack_10);
  std::string::~string(asStack_10);
  InitBubbles(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIWishingPool::~UIWishingPool() */

void __thiscall UIWishingPool::~UIWishingPool(UIWishingPool *this)

{
  *(undefined ***)this = &PTR_GetClass_066356b0;
  *(undefined **)(this + 0xd8) = &DAT_06635a10;
  *(undefined ***)(this + 0x138) = &PTR__UIWishingPool_06635a58;
  WishingPoolData::~WishingPoolData((WishingPoolData *)(this + 0x140));
  UISingletonDialog<UIWishingPool>::~UISingletonDialog((UISingletonDialog<UIWishingPool> *)this);
  return;
}


/* non-virtual thunk to UIWishingPool::~UIWishingPool() */

void __thiscall UIWishingPool::~UIWishingPool(UIWishingPool *this)

{
  ~UIWishingPool(this + -0x138);
  return;
}


/* UIWishingPool::~UIWishingPool() */

void __thiscall UIWishingPool::~UIWishingPool(UIWishingPool *this)

{
  ~UIWishingPool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIWishingPool::~UIWishingPool() */

void __thiscall UIWishingPool::~UIWishingPool(UIWishingPool *this)

{
  ~UIWishingPool(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::StartLottery(int) */

void __thiscall UIWishingPool::StartLottery(UIWishingPool *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2856];
  string asStack_1c0 [440];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03451ab4(afStack_d38,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_1c0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::ButtonDepress(int) */

void __thiscall UIWishingPool::ButtonDepress(UIWishingPool *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  long lVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xde) {
    UISingletonDialog<UIWishingPoolSelect>::ShowDialog();
    goto LAB_03455e8c;
  }
  if (param_1 < 0xdf) {
    if (param_1 == 0x58) {
      UISingletonDialog<UIWishingPool>::CloseDialog();
    }
    else if (param_1 == 0x6f) {
      Sexy::StringToLower((Sexy *)(this + 0x1d8),(string *)&gLawnApp);
      std::operator+("WishingPool_",asStack_20);
      Sexy::ToWString(asStack_18);
      LawnApp::ShowProbabilityDialog(this_00,awStack_10);
      FUN_05476c50(awStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
    goto LAB_03455e8c;
  }
  if (param_1 == 0x14d) {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = std::
            vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
            ::empty((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
                     *)(this + 0x170));
    if (cVar1 != '\0') {
LAB_034560d0:
      pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar5 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar5,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        TodStringTranslate(L"[PLEASE_SET_WISH_FIRST]");
        UIMessageBox::SetMessage(pUVar5,(wstring *)asStack_18,awStack_28);
        std::string::string((string *)awStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar6 = (Image *)StringHelper::ToImage((string *)awStack_10,false);
        UIMessageBox::SetBackground(pUVar5,pIVar6);
        std::string::~string((string *)awStack_10);
        nop();
        lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
        thunk_FUN_05477b9c(lVar7 + 0xd8,asStack_20);
        FUN_05476c50((wstring *)asStack_18);
        FUN_05476c50(asStack_20);
        FUN_05476c50(awStack_28);
      }
      goto LAB_03455e8c;
    }
    std::string::string((string *)awStack_10,"mat_wishing_coin");
    iVar2 = PlayerInfo::GetMaterialNum(pPVar4,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    if (0 < iVar2) {
      StartLottery(this,0);
      goto LAB_03455e8c;
    }
    pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar5 == (UIMessageBox *)0x0) goto LAB_03455e8c;
    UIMessageBox::SetShowType(pUVar5,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    FUN_05478178((wstring *)asStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
    FUN_05478178((string *)awStack_10,L"[MAT_WISHING_COIN]",auStack_38);
    TodReplaceString((wstring *)asStack_18,L"{NAME}",awStack_10);
    FUN_05476c50((string *)awStack_10);
    nop();
    FUN_05476c50((wstring *)asStack_18);
    nop();
    UIMessageBox::SetMessage(pUVar5,(wstring *)asStack_20,awStack_30);
    std::string::string((string *)awStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar6 = (Image *)StringHelper::ToImage((string *)awStack_10,false);
    UIMessageBox::SetBackground(pUVar5,pIVar6);
    std::string::~string((string *)awStack_10);
  }
  else {
    if (param_1 != 0x1bc) goto LAB_03455e8c;
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = std::
            vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
            ::empty((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
                     *)(this + 0x170));
    if (cVar1 != '\0') goto LAB_034560d0;
    std::string::string((string *)awStack_10,"mat_wishing_coin");
    iVar2 = PlayerInfo::GetMaterialNum(pPVar4,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    if (9 < iVar2) {
      StartLottery(this,1);
      goto LAB_03455e8c;
    }
    pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar5 == (UIMessageBox *)0x0) goto LAB_03455e8c;
    UIMessageBox::SetShowType(pUVar5,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BUTTON_OK]");
    FUN_05478178((wstring *)asStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
    FUN_05478178((string *)awStack_10,L"[MAT_WISHING_COIN]",auStack_38);
    TodReplaceString((wstring *)asStack_18,L"{NAME}",awStack_10);
    FUN_05476c50((string *)awStack_10);
    nop();
    FUN_05476c50((wstring *)asStack_18);
    nop();
    UIMessageBox::SetMessage(pUVar5,(wstring *)asStack_20,awStack_30);
    std::string::string((string *)awStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar6 = (Image *)StringHelper::ToImage((string *)awStack_10,false);
    UIMessageBox::SetBackground(pUVar5,pIVar6);
    std::string::~string((string *)awStack_10);
  }
  nop();
  lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
  thunk_FUN_05477b9c(lVar7 + 0xd8,awStack_28);
  FUN_05476c50(asStack_20);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_30);
LAB_03455e8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIWishingPool::ButtonDepress(int) */

void __thiscall UIWishingPool::ButtonDepress(UIWishingPool *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::InitView() */

void __thiscall UIWishingPool::InitView(UIWishingPool *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  size_t __n;
  string asStack_a8 [32];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03450d28(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x140)), cVar1 != '\0'))
  {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_a8,"mat_wishing_coin");
    __n = (size_t)*(uint *)(this + 0x1d0);
    PlayerInfo::SetMaterialNum(this_01,asStack_a8,*(uint *)(this + 0x1d0));
    std::string::~string(asStack_a8);
    nop();
    InitTab1(this);
    InitTab2(this);
    InitTab3(this);
    Refresh(this);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_a8);
    std::string::append(asStack_a8,"1",__n);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogWishingPoolData(this_02,(TGAWishingPoolData *)asStack_a8);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_a8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWishingPool::OnCreate() */

void __thiscall UIWishingPool::OnCreate(UIWishingPool *this)

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
/* UIWishingPool::SynchronizeResVersion() */

void UIWishingPool::SynchronizeResVersion(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  NameMapperBase *this;
  string asStack_148 [8];
  ActiveItem aAStack_140 [8];
  undefined4 local_138;
  char local_128;
  WishingPoolData aWStack_c0 [152];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03450d28(local_138);
  if ((cVar1 == '\0') || (local_128 == '\0')) goto LAB_03458594;
  WishingPoolData::WishingPoolData(aWStack_c0);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_140,(RtObject *)aWStack_c0);
  if (cVar1 != '\0') {
    bVar2 = std::operator==(asStack_28,"version1");
    if (bVar2) {
      this = (NameMapperBase *)MaterialItemMapper::GetInstance();
      std::string::string(asStack_148,"mat_wishing_coin");
      iVar3 = 0x5b39;
    }
    else {
      bVar2 = std::operator==(asStack_28,"version2");
      if (!bVar2) goto LAB_0345858c;
      this = (NameMapperBase *)MaterialItemMapper::GetInstance();
      std::string::string(asStack_148,"mat_wishing_coin");
      iVar3 = 0x5af7;
    }
    NameMapperBase::Mondify(this,asStack_148,iVar3);
    std::string::~string(asStack_148);
    nop();
  }
LAB_0345858c:
  WishingPoolData::~WishingPoolData(aWStack_c0);
LAB_03458594:
  ActiveItem::~ActiveItem(aAStack_140);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

