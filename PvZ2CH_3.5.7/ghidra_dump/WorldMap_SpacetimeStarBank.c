// Class: WorldMap_SpacetimeStarBank


/* WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank() */

void __thiscall
WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank(WorldMap_SpacetimeStarBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0685cc60;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SpacetimeStarBank_0685ce00;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank() */

void __thiscall
WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank(WorldMap_SpacetimeStarBank *this)

{
  ~WorldMap_SpacetimeStarBank(this + -0x10);
  return;
}


/* WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank() */

void __thiscall
WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank(WorldMap_SpacetimeStarBank *this)

{
  ~WorldMap_SpacetimeStarBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank() */

void __thiscall
WorldMap_SpacetimeStarBank::~WorldMap_SpacetimeStarBank(WorldMap_SpacetimeStarBank *this)

{
  ~WorldMap_SpacetimeStarBank(this + -0x10);
  return;
}


/* WorldMap_SpacetimeStarBank::WorldMap_SpacetimeStarBank() */

void __thiscall
WorldMap_SpacetimeStarBank::WorldMap_SpacetimeStarBank(WorldMap_SpacetimeStarBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x164) = 0x15;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined ***)this = &PTR_GetClass_0685cc60;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_SpacetimeStarBank_0685ce00;
  this[0x16c] = (WorldMap_SpacetimeStarBank)0x0;
  return;
}


/* WorldMap_SpacetimeStarBank::StaticNew() */

WorldMap_SpacetimeStarBank * WorldMap_SpacetimeStarBank::StaticNew(void)

{
  WorldMap_SpacetimeStarBank *this;
  
  this = ::operator_new(0x178);
  WorldMap_SpacetimeStarBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeStarBank::StaticClassInit() */

void WorldMap_SpacetimeStarBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_SpacetimeStarBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0456e120,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SpacetimeStarBank::StaticGetClass() */

long * WorldMap_SpacetimeStarBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SpacetimeStarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_SpacetimeStarBank::GetClass() const */

long * WorldMap_SpacetimeStarBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_SpacetimeStarBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeStarBank::onLoadComplete() */

void __thiscall WorldMap_SpacetimeStarBank::onLoadComplete(WorldMap_SpacetimeStarBank *this)

{
  undefined8 extraout_x0;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UISpacetimeStarRewardButton");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeStarBank::checkHasAvailableRewards() */

void __thiscall
WorldMap_SpacetimeStarBank::checkHasAvailableRewards(WorldMap_SpacetimeStarBank *this)

{
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  UnchartedModeWorldData aUStack_120 [24];
  int local_108;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  lVar4 = 0;
  this[0x16c] = (WorldMap_SpacetimeStarBank)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar1 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_00);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar1);
  lVar2 = FUN_0456c1d8(local_88,local_80);
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_0456c1e4(local_88,lVar4);
      if ((*(int *)(lVar3 + 8) != 1) && (*(int *)(lVar3 + 0xc) <= local_108)) {
        this[0x16c] = (WorldMap_SpacetimeStarBank)0x1;
        UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
        goto LAB_0456f1f0;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
LAB_0456f1f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_SpacetimeStarBank::onUpdate() */

void __thiscall WorldMap_SpacetimeStarBank::onUpdate(WorldMap_SpacetimeStarBank *this)

{
  undefined4 uVar1;
  UnchartedModeNetworkMgr *pUVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var3;
  string *psVar4;
  
  pUVar2 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  psVar4 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var3);
  uVar1 = UnchartedModeNetworkMgr::GetMaxStarNumber(pUVar2,psVar4);
  *(undefined4 *)(this + 0x164) = uVar1;
  pUVar2 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  psVar4 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var3);
  uVar1 = UnchartedModeNetworkMgr::GetCurrentStarNumber(pUVar2,psVar4);
  *(undefined4 *)(this + 0x168) = uVar1;
  checkHasAvailableRewards(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_SpacetimeStarBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_SpacetimeStarBank::Draw(WorldMap_SpacetimeStarBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SalesProgressBar *this_00;
  undefined8 uVar5;
  long *plVar6;
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
  std::string::string(asStack_20,"_HUD_WORLDMAP_STAR_BANK");
  std::operator+(asStack_28,asStack_20);
  this_00 = (SalesProgressBar *)StringHelper::ToImage(asStack_18,true);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  iVar1 = FUN_0456c8a8(0);
  iVar2 = FUN_0456c170(*(undefined4 *)(this + 0x3c));
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_0456c8a8(5);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar1,(iVar2 - iVar3) / 2 - iVar4);
  Sexy::StrFormat("%d/%d",asStack_18,(ulong)*(uint *)(this + 0x168),(ulong)*(uint *)(this + 0x164));
  Sexy::ToWString(asStack_18);
  std::string::~string(asStack_18);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = FUN_0456c8a8(0x23);
  iVar2 = FUN_0456c8a8(0);
  iVar3 = FUN_0456c16c(*(undefined4 *)(this + 0x38));
  iVar4 = FUN_0456c170(*(undefined4 *)(this + 0x3c));
  FUN_05477b24(asStack_20,asStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)(iVar3 / 3),(float)iVar4,uVar5,
             param_1,asStack_20,1,1,asStack_18,0);
  FUN_05476c50(asStack_20);
  plVar6 = *(long **)(this + 0x170);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x78))(plVar6,param_1);
  }
  FUN_05476c50(asStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_SpacetimeStarBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_SpacetimeStarBank::Draw(WorldMap_SpacetimeStarBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

