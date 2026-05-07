// Class: WorldMap_MarqueeView


/* WorldMap_MarqueeView::ScrollTargetReached(Sexy::ScrollWidget*) */

void WorldMap_MarqueeView::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to WorldMap_MarqueeView::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
WorldMap_MarqueeView::ScrollTargetReached(WorldMap_MarqueeView *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* WorldMap_MarqueeView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void WorldMap_MarqueeView::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to WorldMap_MarqueeView::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
WorldMap_MarqueeView::ScrollTargetInterrupted(WorldMap_MarqueeView *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MarqueeView::StaticClassInit() */

void WorldMap_MarqueeView::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_MarqueeView");
    (*pcVar2)(plVar1,asStack_10,FUN_04bfb378,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MarqueeView::StaticGetClass() */

long * WorldMap_MarqueeView::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_MarqueeView",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_MarqueeView::GetClass() const */

long * WorldMap_MarqueeView::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_MarqueeView",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_MarqueeView::WorldMap_MarqueeView() */

void __thiscall WorldMap_MarqueeView::WorldMap_MarqueeView(WorldMap_MarqueeView *this)

{
  undefined4 uVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0697ee60;
  *(undefined ***)(this + 0xd8) = &PTR__WorldMap_MarqueeView_0697f190;
  std::deque<int,std::allocator<int>>::deque();
  FUN_05476574(this + 0x148);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x158) = 0x42480000;
  uVar1 = PVZ_T();
  this[0x6d] = (WorldMap_MarqueeView)0x0;
  *(undefined4 *)(this + 0xf4) = uVar1;
  return;
}


/* WorldMap_MarqueeView::StaticNew() */

WorldMap_MarqueeView * WorldMap_MarqueeView::StaticNew(void)

{
  WorldMap_MarqueeView *this;
  
  this = ::operator_new(0x160);
  WorldMap_MarqueeView(this);
  return this;
}


/* WorldMap_MarqueeView::~WorldMap_MarqueeView() */

void __thiscall WorldMap_MarqueeView::~WorldMap_MarqueeView(WorldMap_MarqueeView *this)

{
  *(undefined ***)this = &PTR_GetClass_0697ee60;
  *(undefined ***)(this + 0xd8) = &PTR__WorldMap_MarqueeView_0697f190;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x148);
  std::deque<int,std::allocator<int>>::~deque((deque<int,std::allocator<int>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to WorldMap_MarqueeView::~WorldMap_MarqueeView() */

void __thiscall WorldMap_MarqueeView::~WorldMap_MarqueeView(WorldMap_MarqueeView *this)

{
  ~WorldMap_MarqueeView(this + -0xd8);
  return;
}


/* WorldMap_MarqueeView::~WorldMap_MarqueeView() */

void __thiscall WorldMap_MarqueeView::~WorldMap_MarqueeView(WorldMap_MarqueeView *this)

{
  ~WorldMap_MarqueeView(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_MarqueeView::~WorldMap_MarqueeView() */

void __thiscall WorldMap_MarqueeView::~WorldMap_MarqueeView(WorldMap_MarqueeView *this)

{
  ~WorldMap_MarqueeView(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MarqueeView::InitView() */

void __thiscall WorldMap_MarqueeView::InitView(WorldMap_MarqueeView *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  MarqueeViewManager *this_00;
  Widget *this_01;
  Widget *this_02;
  wstring *pwVar7;
  UIWidgetText *this_03;
  PrimeTypeface *pPVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  int iVar12;
  ulong uVar13;
  int local_34;
  Color aCStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar3 = gLawnApp;
  iVar6 = *(int *)(gLawnApp + 0x724);
  local_8 = ___stack_chk_guard;
  iVar12 = (int)((double)iVar6 * 0.6);
  iVar4 = FUN_04bfb098(0x3c);
  iVar5 = FUN_04bfb098(0x96);
  (**(code **)(*(long *)this + 0x198))
            (this,iVar6 / 2 - iVar12 / 2,*(int *)(lVar3 + 0x728) / 2 - iVar5,iVar12,iVar4);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = (MarqueeViewManager *)Sexy::LazySingleton<MarqueeViewManager>::GetInstance();
  MarqueeViewManager::ConstructDataInfo(this_00,(vector *)&local_20);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  this_01[0x6d] = (Widget)0x0;
  iVar6 = FUN_04bfb098(0x14);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,iVar6 + iVar4,0,(*(int *)(this + 0x50) - iVar4) - iVar6,iVar4);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  *(Widget **)(this + 0xe8) = this_02;
  uVar1 = *(undefined4 *)(this_01 + 0x50);
  uVar2 = *(undefined4 *)(this_01 + 0x54);
  this_02[0x6d] = (Widget)0x0;
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,uVar1,uVar2);
  local_34 = *(int *)(this_01 + 0x50);
  uVar13 = 0;
  while( true ) {
    uVar9 = local_20;
    uVar10 = FUN_04bfabbc(local_20,local_18);
    if (uVar10 <= uVar13) break;
    pwVar7 = (wstring *)FUN_04bfabc8(uVar9,uVar13);
    this_03 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_03,pwVar7);
    this_03[0x6d] = (UIWidgetText)0x0;
    FUN_04bfae40(this_03 + 0xe0);
    UIWidgetText::SetFontIndex(this_03,5);
    pcVar11 = *(code **)(*(long *)this_03 + 0x170);
    Sexy::Color::Color(aCStack_30,1);
    (*pcVar11)(this_03,0,aCStack_30);
    pPVar8 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    uVar9 = FUN_04bfabc8(local_20,uVar13);
    FUN_05477b24(aCStack_30,uVar9);
    iVar6 = Sexy::PrimeTypeface::SizeString_Line(pPVar8,aCStack_30);
    iVar4 = FUN_04bfb098(0x32);
    FUN_05476c50(aCStack_30);
    (**(code **)(*(long *)this_03 + 0x198))
              (this_03,local_34,0,iVar6 + iVar4,*(undefined4 *)(this_01 + 0x54));
    local_34 = local_34 + iVar6 + iVar4;
    std::deque<int,std::allocator<int>>::push_back
              ((deque<int,std::allocator<int>> *)(this + 0xf8),&local_34);
    (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_03);
    uVar13 = uVar13 + 1;
  }
  pcVar11 = *(code **)(*(long *)this + 0x60);
  *(int *)(*(long *)(this + 0xe8) + 0x50) = local_34;
  (*pcVar11)(this,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,*(undefined8 *)(this + 0xe8));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MarqueeView::RequestNetwork() */

void __thiscall WorldMap_MarqueeView::RequestNetwork(WorldMap_MarqueeView *this)

{
  MarqueeViewManager *this_00;
  
  this_00 = (MarqueeViewManager *)Sexy::LazySingleton<MarqueeViewManager>::GetInstance();
  MarqueeViewManager::RequestMarqueeData(this_00);
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_MarqueeView::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_MarqueeView::Draw(WorldMap_MarqueeView *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8cfe8);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8d058);
  iVar1 = *(int *)(this + 0x54);
  iVar2 = FUN_04bfb098(5);
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0,iVar1 + iVar2,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_MarqueeView::Update() */

void __thiscall WorldMap_MarqueeView::Update(WorldMap_MarqueeView *this)

{
  deque<int,std::allocator<int>> *this_00;
  char cVar1;
  int *piVar2;
  MarqueeViewManager *this_01;
  int iVar3;
  code *pcVar4;
  float fVar5;
  
  this_00 = (deque<int,std::allocator<int>> *)(this + 0xf8);
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar1 = std::deque<int,std::allocator<int>>::empty(this_00);
  if (cVar1 == '\0') {
    fVar5 = (float)PVZ_T();
    pcVar4 = *(code **)(**(long **)(this + 0xe8) + 0x1a8);
    iVar3 = (int)((fVar5 - *(float *)(this + 0xf4)) * *(float *)(this + 0x158));
    *(int *)(this + 0xf0) = iVar3;
    (*pcVar4)(*(long **)(this + 0xe8),-iVar3,0);
    iVar3 = *(int *)(this + 0xf0);
    piVar2 = (int *)std::deque<int,std::allocator<int>>::front();
    if (*piVar2 <= iVar3) {
      std::deque<int,std::allocator<int>>::pop_front(this_00);
      this_01 = (MarqueeViewManager *)Sexy::LazySingleton<MarqueeViewManager>::GetInstance();
      MarqueeViewManager::PopFront(this_01);
    }
    cVar1 = std::deque<int,std::allocator<int>>::empty(this_00);
    if (cVar1 == '\0') {
      return;
    }
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}

