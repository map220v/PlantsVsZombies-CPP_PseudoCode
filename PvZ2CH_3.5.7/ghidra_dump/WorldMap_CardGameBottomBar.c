// Class: WorldMap_CardGameBottomBar


/* WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar() */

void __thiscall
WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar(WorldMap_CardGameBottomBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b030;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardGameBottomBar_0665b1d0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar() */

void __thiscall
WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar(WorldMap_CardGameBottomBar *this)

{
  ~WorldMap_CardGameBottomBar(this + -0x10);
  return;
}


/* WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar() */

void __thiscall
WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar(WorldMap_CardGameBottomBar *this)

{
  ~WorldMap_CardGameBottomBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar() */

void __thiscall
WorldMap_CardGameBottomBar::~WorldMap_CardGameBottomBar(WorldMap_CardGameBottomBar *this)

{
  ~WorldMap_CardGameBottomBar(this + -0x10);
  return;
}


/* WorldMap_CardGameBottomBar::WorldMap_CardGameBottomBar() */

void __thiscall
WorldMap_CardGameBottomBar::WorldMap_CardGameBottomBar(WorldMap_CardGameBottomBar *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_0665b030;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardGameBottomBar_0665b1d0;
  return;
}


/* WorldMap_CardGameBottomBar::StaticNew() */

WorldMap_CardGameBottomBar * WorldMap_CardGameBottomBar::StaticNew(void)

{
  WorldMap_CardGameBottomBar *this;
  
  this = ::operator_new(0x178);
  WorldMap_CardGameBottomBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameBottomBar::StaticClassInit() */

void WorldMap_CardGameBottomBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CardGameBottomBar");
    (*pcVar2)(plVar1,asStack_10,FUN_03565470,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CardGameBottomBar::StaticGetClass() */

long * WorldMap_CardGameBottomBar::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_CardGameBottomBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CardGameBottomBar::GetClass() const */

long * WorldMap_CardGameBottomBar::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_CardGameBottomBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameBottomBar::onLoadComplete() */

void __thiscall WorldMap_CardGameBottomBar::onLoadComplete(WorldMap_CardGameBottomBar *this)

{
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UICardPickBank");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x168) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::RtName(aRStack_18,L"UICardGameSwitchWidget");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x170) = extraout_x0_00;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardGameBottomBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CardGameBottomBar::Draw(WorldMap_CardGameBottomBar *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  SalesProgressBar *pSVar3;
  LotteryResultProgressBar *this_00;
  Image *pIVar4;
  long *plVar5;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  UIWidget::GetDrawRect();
  pSVar3 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa6798);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar3);
  Sexy::Insets::Insets(aIStack_28,0,0,local_10,iVar1);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa6798);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  pSVar3 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa6798);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar3);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa6798);
  Sexy::Graphics::DrawImage(param_1,pIVar4,(TRect *)aIStack_28,(TRect *)aIStack_18);
  plVar5 = *(long **)(this + 0x168);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  plVar5 = *(long **)(this + 0x170);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_CardGameBottomBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CardGameBottomBar::Draw(WorldMap_CardGameBottomBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

