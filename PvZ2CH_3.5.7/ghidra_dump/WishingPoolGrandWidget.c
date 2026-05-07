// Class: WishingPoolGrandWidget


/* WishingPoolGrandWidget::~WishingPoolGrandWidget() */

void __thiscall WishingPoolGrandWidget::~WishingPoolGrandWidget(WishingPoolGrandWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06635340;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06635668;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WishingPoolGrandWidget::~WishingPoolGrandWidget() */

void __thiscall WishingPoolGrandWidget::~WishingPoolGrandWidget(WishingPoolGrandWidget *this)

{
  ~WishingPoolGrandWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolGrandWidget::Refresh() */

void __thiscall WishingPoolGrandWidget::Refresh(WishingPoolGrandWidget *this)

{
  long lVar1;
  wchar_t *pwVar2;
  PVZ2UIButton *pPVar3;
  wstring awStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xf0) = 0;
  local_8 = ___stack_chk_guard;
  lVar1 = UISingletonDialog<UIWishingPool>::GetSingletonPtr();
  if (lVar1 != 0) {
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(lVar1 + 0x1d4);
  }
  if (this[0xf4] == (WishingPoolGrandWidget)0x0) {
    if (*(int *)(this + 0xf8) <= *(int *)(this + 0xf0)) {
      pPVar3 = *(PVZ2UIButton **)(this + 0x100);
      TodStringTranslate(L"[PLANT_OBTAIN]");
      PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),0);
      goto LAB_0345214c;
    }
    pPVar3 = *(PVZ2UIButton **)(this + 0x100);
    pwVar2 = L"[PLANT_OBTAIN]";
  }
  else {
    pPVar3 = *(PVZ2UIButton **)(this + 0x100);
    pwVar2 = L"[PLANT_OBTAINED]";
  }
  TodStringTranslate(pwVar2);
  PVZ2UIButton::SetLabelText(pPVar3,awStack_10);
  FUN_05476c50(awStack_10);
  (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
LAB_0345214c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolGrandWidget::WishingPoolGrandWidget() */

void __thiscall WishingPoolGrandWidget::WishingPoolGrandWidget(WishingPoolGrandWidget *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06635340;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06635668;
  FUN_05476574(this + 0xe8);
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (WishingPoolGrandWidget)0x0;
  *(undefined8 *)(this + 0x100) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Refresh);
  Sexy::Delegate0::Delegate0<WishingPoolGrandWidget,void(WishingPoolGrandWidget::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WishingPoolLottery,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolGrandWidget::Draw(Sexy::Graphics*) */

void __thiscall WishingPoolGrandWidget::Draw(WishingPoolGrandWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint *puVar7;
  Image *pIVar8;
  float fVar9;
  float local_30 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa0f88);
  Draw9SliceImage(param_1,(Insets *)local_18,uVar5);
  iVar1 = FUN_03451b10(0x14);
  iVar2 = FUN_03451b10(5);
  iVar3 = FUN_03451b10(0x15e);
  iVar4 = FUN_03451b10(0x28);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,(Insets *)&local_28,uVar5,(Insets *)local_18,3,1);
  iVar1 = FUN_03451b10(0x19);
  iVar2 = FUN_03451b10(0x3c);
  iVar3 = FUN_03451b10(200);
  iVar4 = FUN_03451b10(0x14);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1,iVar2,iVar3,iVar4);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_28);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa12c8);
  Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  local_18[0] = 0x3f800000;
  local_30[0] = (float)*(int *)(this + 0xf0) / (float)*(int *)(this + 0xf8);
  pfVar6 = eastl::min_alt<float>(local_30,(float *)local_18);
  fVar9 = *pfVar6;
  if (fVar9 < 0.3) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa11b8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,local_28,local_24,(int)(fVar9 * (float)local_20),local_1c);
  }
  else {
    Sexy::Insets::Insets
              ((Insets *)local_18,local_28,local_24,(int)(fVar9 * (float)local_20),local_1c);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa11b8);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar5);
  }
  puVar7 = (uint *)eastl::min_alt<int>((int *)(this + 0xf0),(int *)(this + 0xf8));
  Sexy::StrFormat("%d / %d",(Insets *)local_18,(ulong)*puVar7,(ulong)*(uint *)(this + 0xf8));
  Sexy::ToWString((string *)local_18);
  std::string::~string((string *)local_18);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)local_18,0x66,0x37,0);
  WriteWordInRect(param_1,local_30,(Insets *)&local_28,uVar5,(Insets *)local_18,5,1);
  FUN_05476c50(local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolGrandWidget::InitView(int, WishingPoolGrandInfo) */

void __thiscall
WishingPoolGrandWidget::InitView(WishingPoolGrandWidget *this,undefined4 param_1,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PVZ2UIButton *pPVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  code *pcVar12;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  iVar1 = param_3[8];
  local_8 = ___stack_chk_guard;
  iVar3 = *param_3;
  *(undefined4 *)(this + 0xe0) = param_1;
  *(int *)(this + 0xf8) = iVar3;
  this[0xf4] = (WishingPoolGrandWidget)(iVar1 != 0);
  FUN_05478178(awStack_78,L"[WISHING_POOL_GRAND]",auStack_80);
  TodReplaceNumberString(awStack_78,L"{NUMBER}",*param_3);
  FUN_054766c8(this + 0xe8,aIStack_40);
  FUN_05476c50(aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,0x29a,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar8;
  FUN_05476c50(awStack_78);
  pPVar8 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa1140,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06aa11f8,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar11 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*plVar11 + 0x1a0);
  iVar3 = FUN_03451b10(0xa0);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03451b10(0x3a);
  iVar5 = FUN_03451b10(0x8c);
  Sexy::Insets::Insets(aIStack_40,iVar1 - iVar3,(*(int *)(this + 0x54) - iVar4) / 2,iVar5,iVar4);
  (*pcVar12)(plVar11,aIStack_40);
  plVar11 = *(long **)(this + 0x100);
  pcVar12 = *(code **)(*plVar11 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
  (*pcVar12)(plVar11,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  cVar2 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(param_3 + 2));
  if (cVar2 == '\0') {
    piVar10 = (int *)FUN_03450f1c(*(undefined8 *)(param_3 + 2),0);
    plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,piVar10[1],true);
    iVar3 = FUN_03451b10(0xfa);
    iVar1 = *(int *)(this + 0x50);
    uVar6 = FUN_03451b10(0x1b);
    uVar7 = FUN_03451b10(0x3c);
    (**(code **)(*plVar11 + 0x198))(plVar11,iVar1 - iVar3,uVar6,uVar7,uVar7);
    (**(code **)(*(long *)this + 0x60))(this,plVar11);
  }
  Refresh(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolGrandWidget::ButtonDepress(int) */

void __thiscall WishingPoolGrandWidget::ButtonDepress(WishingPoolGrandWidget *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2864];
  string asStack_1b8 [432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x29a) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"ti");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03451a58(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_1b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WishingPoolGrandWidget::ButtonDepress(int) */

void __thiscall WishingPoolGrandWidget::ButtonDepress(WishingPoolGrandWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

