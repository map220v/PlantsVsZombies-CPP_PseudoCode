// Class: WorldMap_CardPickBank


/* WorldMap_CardPickBank::~WorldMap_CardPickBank() */

void __thiscall WorldMap_CardPickBank::~WorldMap_CardPickBank(WorldMap_CardPickBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0665a6f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardPickBank_0665a890;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_CardPickBank::~WorldMap_CardPickBank() */

void __thiscall WorldMap_CardPickBank::~WorldMap_CardPickBank(WorldMap_CardPickBank *this)

{
  ~WorldMap_CardPickBank(this + -0x10);
  return;
}


/* WorldMap_CardPickBank::~WorldMap_CardPickBank() */

void __thiscall WorldMap_CardPickBank::~WorldMap_CardPickBank(WorldMap_CardPickBank *this)

{
  ~WorldMap_CardPickBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CardPickBank::~WorldMap_CardPickBank() */

void __thiscall WorldMap_CardPickBank::~WorldMap_CardPickBank(WorldMap_CardPickBank *this)

{
  ~WorldMap_CardPickBank(this + -0x10);
  return;
}


/* WorldMap_CardPickBank::WorldMap_CardPickBank() */

void __thiscall WorldMap_CardPickBank::WorldMap_CardPickBank(WorldMap_CardPickBank *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined4 *)(this + 0x170) = 0x15;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined ***)this = &PTR_GetClass_0665a6f0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CardPickBank_0665a890;
  this[0x178] = (WorldMap_CardPickBank)0x0;
  return;
}


/* WorldMap_CardPickBank::StaticNew() */

WorldMap_CardPickBank * WorldMap_CardPickBank::StaticNew(void)

{
  WorldMap_CardPickBank *this;
  
  this = ::operator_new(0x180);
  WorldMap_CardPickBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardPickBank::StaticClassInit() */

void WorldMap_CardPickBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CardPickBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0356481c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CardPickBank::StaticGetClass() */

long * WorldMap_CardPickBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CardPickBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CardPickBank::GetClass() const */

long * WorldMap_CardPickBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_CardPickBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardPickBank::onLoadComplete() */

void __thiscall WorldMap_CardPickBank::onLoadComplete(WorldMap_CardPickBank *this)

{
  undefined8 extraout_x0;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,L"UICardPickButton");
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  *(undefined8 *)(this + 0x168) = extraout_x0;
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardPickBank::checkHasAvailableRewards() */

void __thiscall WorldMap_CardPickBank::checkHasAvailableRewards(WorldMap_CardPickBank *this)

{
  CardGameNetworkMgr *this_00;
  CardGameWorldData *pCVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  CardGameWorldData aCStack_88 [24];
  int local_70;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  lVar4 = 0;
  this[0x178] = (WorldMap_CardPickBank)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  pCVar1 = (CardGameWorldData *)CardGameNetworkMgr::GetCurrentWorldData(this_00);
  CardGameWorldData::CardGameWorldData(aCStack_88,pCVar1);
  lVar2 = FUN_035639b0(local_20,local_18);
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_035639bc(local_20,lVar4);
      if ((*(int *)(lVar3 + 8) != 1) && (*(int *)(lVar3 + 0xc) <= local_70)) {
        this[0x178] = (WorldMap_CardPickBank)0x1;
        CardGameWorldData::~CardGameWorldData(aCStack_88);
        goto LAB_03568568;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
  }
  CardGameWorldData::~CardGameWorldData(aCStack_88);
LAB_03568568:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CardPickBank::onUpdate() */

void __thiscall WorldMap_CardPickBank::onUpdate(WorldMap_CardPickBank *this)

{
  undefined4 uVar1;
  CardGameNetworkMgr *pCVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *p_Var3;
  string *psVar4;
  
  pCVar2 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  psVar4 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var3);
  uVar1 = CardGameNetworkMgr::GetMaxStarNumber(pCVar2,psVar4);
  *(undefined4 *)(this + 0x170) = uVar1;
  pCVar2 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstancePtr();
  psVar4 = (string *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root(p_Var3);
  uVar1 = CardGameNetworkMgr::GetCurrentStarNumber(pCVar2,psVar4);
  *(undefined4 *)(this + 0x174) = uVar1;
  checkHasAvailableRewards(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CardPickBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CardPickBank::Draw(WorldMap_CardPickBank *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SalesProgressBar *this_00;
  undefined8 uVar5;
  long *plVar6;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa67d0);
  iVar1 = FUN_03564578(0);
  iVar2 = FUN_0356394c(*(undefined4 *)(this + 0x3c));
  iVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_03564578(5);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar1,(iVar2 - iVar3) / 2 - iVar4);
  Sexy::StrFormat("%d/%d",asStack_18,(ulong)*(uint *)(this + 0x174),(ulong)*(uint *)(this + 0x170));
  Sexy::ToWString(asStack_18);
  std::string::~string(asStack_18);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar1 = FUN_03564578(0x23);
  iVar2 = FUN_03564578(0);
  iVar3 = FUN_03563940(*(undefined4 *)(this + 0x38));
  iVar4 = FUN_0356394c(*(undefined4 *)(this + 0x3c));
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)(iVar3 / 3),(float)iVar4,uVar5,
             param_1,auStack_20,1,1,asStack_18,0);
  FUN_05476c50(auStack_20);
  plVar6 = *(long **)(this + 0x168);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x78))(plVar6,param_1);
  }
  FUN_05476c50(auStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_CardPickBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CardPickBank::Draw(WorldMap_CardPickBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

