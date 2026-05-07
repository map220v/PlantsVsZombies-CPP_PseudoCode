// Class: WorldMap_SpacetimeKeyBank


/* WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank() */

void __thiscall
WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank(WorldMap_SpacetimeKeyBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0685bd90;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SpacetimeKeyBank_0685bf30;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank() */

void __thiscall
WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank(WorldMap_SpacetimeKeyBank *this)

{
  ~WorldMap_SpacetimeKeyBank(this + -0x10);
  return;
}


/* WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank() */

void __thiscall
WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank(WorldMap_SpacetimeKeyBank *this)

{
  ~WorldMap_SpacetimeKeyBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank() */

void __thiscall
WorldMap_SpacetimeKeyBank::~WorldMap_SpacetimeKeyBank(WorldMap_SpacetimeKeyBank *this)

{
  ~WorldMap_SpacetimeKeyBank(this + -0x10);
  return;
}


/* WorldMap_SpacetimeKeyBank::WorldMap_SpacetimeKeyBank() */

void __thiscall
WorldMap_SpacetimeKeyBank::WorldMap_SpacetimeKeyBank(WorldMap_SpacetimeKeyBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 3;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_0685bd90;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SpacetimeKeyBank_0685bf30;
  return;
}


/* WorldMap_SpacetimeKeyBank::StaticNew() */

WorldMap_SpacetimeKeyBank * WorldMap_SpacetimeKeyBank::StaticNew(void)

{
  WorldMap_SpacetimeKeyBank *this;
  
  this = ::operator_new(0x178);
  WorldMap_SpacetimeKeyBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeKeyBank::StaticClassInit() */

void WorldMap_SpacetimeKeyBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_SpacetimeKeyBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0456b930,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SpacetimeKeyBank::StaticGetClass() */

long * WorldMap_SpacetimeKeyBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SpacetimeKeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_SpacetimeKeyBank::GetClass() const */

long * WorldMap_SpacetimeKeyBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SpacetimeKeyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeKeyBank::onLoadComplete() */

void __thiscall WorldMap_SpacetimeKeyBank::onLoadComplete(WorldMap_SpacetimeKeyBank *this)

{
  undefined8 extraout_x0;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UISpacetimeKeyInfoButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x170) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SpacetimeKeyBank::onUpdate() */

void __thiscall WorldMap_SpacetimeKeyBank::onUpdate(WorldMap_SpacetimeKeyBank *this)

{
  RiverCrossingProperties *pRVar1;
  undefined4 uVar2;
  
  pRVar1 = (RiverCrossingProperties *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  uVar2 = RiverCrossingProperties::GetCrossTarget(pRVar1);
  *(undefined4 *)(this + 0x164) = uVar2;
  pRVar1 = (RiverCrossingProperties *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  uVar2 = RiverCrossingProperties::GetRetryTimes(pRVar1);
  *(undefined4 *)(this + 0x168) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeKeyBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_SpacetimeKeyBank::Draw(WorldMap_SpacetimeKeyBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SalesProgressBar *this_00;
  undefined8 uVar4;
  long *plVar5;
  GraphicsAutoState aGStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetWorldResourcePrefix();
  std::string::string(asStack_20,"_HUD_WORLDMAP_KEY_BANK");
  std::operator+(asStack_28,asStack_20);
  this_00 = (SalesProgressBar *)StringHelper::ToImage(asStack_18,true);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  iVar1 = FUN_04568584(*(undefined4 *)(this + 0x3c));
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,0,(iVar1 - iVar2) / 2);
  Sexy::StrFormat("%d/%d",asStack_18,(ulong)*(uint *)(this + 0x168),(ulong)*(uint *)(this + 0x164));
  Sexy::ToWString(asStack_18);
  std::string::~string(asStack_18);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = FUN_045691ec(0);
  iVar2 = FUN_04568580(*(undefined4 *)(this + 0x38));
  iVar3 = FUN_04568584(*(undefined4 *)(this + 0x3c));
  FUN_05477b24(asStack_20,asStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(undefined4)(float)iVar1,(float)iVar2,(float)iVar3,uVar4,
             param_1,asStack_20,1,1,asStack_18,0);
  FUN_05476c50(asStack_20);
  plVar5 = *(long **)(this + 0x170);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1);
  }
  FUN_05476c50(asStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_SpacetimeKeyBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_SpacetimeKeyBank::Draw(WorldMap_SpacetimeKeyBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

