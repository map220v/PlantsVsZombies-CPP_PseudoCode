// Class: WorldMap_CoinBank


/* WorldMap_CoinBank::~WorldMap_CoinBank() */

void __thiscall WorldMap_CoinBank::~WorldMap_CoinBank(WorldMap_CoinBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ea50;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CoinBank_0685ec08;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
    *(undefined8 *)(this + 0x1a0) = 0;
  }
  CoinBank::~CoinBank((CoinBank *)this);
  return;
}


/* non-virtual thunk to WorldMap_CoinBank::~WorldMap_CoinBank() */

void __thiscall WorldMap_CoinBank::~WorldMap_CoinBank(WorldMap_CoinBank *this)

{
  ~WorldMap_CoinBank(this + -0x10);
  return;
}


/* WorldMap_CoinBank::~WorldMap_CoinBank() */

void __thiscall WorldMap_CoinBank::~WorldMap_CoinBank(WorldMap_CoinBank *this)

{
  ~WorldMap_CoinBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_CoinBank::~WorldMap_CoinBank() */

void __thiscall WorldMap_CoinBank::~WorldMap_CoinBank(WorldMap_CoinBank *this)

{
  ~WorldMap_CoinBank(this + -0x10);
  return;
}


/* WorldMap_CoinBank::onUpdate() */

void __thiscall WorldMap_CoinBank::onUpdate(WorldMap_CoinBank *this)

{
  StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x1a0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CoinBank::StaticClassInit() */

void WorldMap_CoinBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_CoinBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04573894,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CoinBank::StaticGetClass() */

long * WorldMap_CoinBank::StaticGetClass(void)

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
  uVar2 = CoinBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_CoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_CoinBank::GetClass() const */

long * WorldMap_CoinBank::GetClass(void)

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
  uVar2 = CoinBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_CoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CoinBank::WorldMap_CoinBank() */

void __thiscall WorldMap_CoinBank::WorldMap_CoinBank(WorldMap_CoinBank *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Effect_PopAnim *pEVar6;
  ResourceInfo *pRVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *this_00;
  StandaloneEffect *this_01;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CoinBank::CoinBank((CoinBank *)this);
  this[0x198] = (WorldMap_CoinBank)0x0;
  this[0x171] = (WorldMap_CoinBank)0x0;
  *(undefined ***)this = &PTR_GetClass_0685ea50;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_CoinBank_0685ec08;
  this[0x170] = (WorldMap_CoinBank)0x1;
  pEVar6 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x1a0) = pEVar6;
  std::string::string(asStack_10,"POPANIM_EFFECTS_PRIZE_TWINKLE");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldMap");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    std::string::string(asStack_10,"UI_WorldMap");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  Effect_PopAnim::CreatePopAnimRig
            (*(Effect_PopAnim **)(this + 0x1a0),(PopAnim *)pRVar7,(RtClass *)0x0);
  this_01 = *(StandaloneEffect **)(this + 0x1a0);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b114e0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11508);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11508);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)(iVar3 - iVar4 / 2),(float)(iVar5 / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)asStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x1a0),true);
  pEVar6 = *(Effect_PopAnim **)(this + 0x1a0);
  std::string::string(asStack_10,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar6,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_CoinBank::StaticNew() */

WorldMap_CoinBank * WorldMap_CoinBank::StaticNew(void)

{
  WorldMap_CoinBank *this;
  
  this = ::operator_new(0x1a8);
  WorldMap_CoinBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CoinBank::CalcPlusButtonRect() */

void WorldMap_CoinBank::CalcPlusButtonRect(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  Insets *in_x8;
  int local_18;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11508);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11508);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(in_x8,0,0,iVar3,iVar4);
  iVar3 = FUN_04573730(*(undefined4 *)(in_x0 + 0x38));
  iVar4 = FUN_0457374c(0xfffffff3);
  *(int *)in_x8 = *(int *)in_x8 + local_18 + iVar3 + iVar4;
  iVar3 = FUN_0457374c(2);
  lVar2 = ___stack_chk_guard;
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar3;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CoinBank::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_CoinBank::updateButtonStates(WorldMap_CoinBank *this,int param_1,int param_2,bool param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  char *pcVar3;
  WorldMap *pWVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar2 == '\0') {
    FUN_04573738(this + 0x160);
  }
  else {
    FUN_04573738(this + 0x160,param_3);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Pressed");
  }
  if ((!param_3) &&
     (cVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar2 != '\0')) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    this[0x198] = (WorldMap_CoinBank)0x1;
    pLVar1 = gLawnApp;
    pWVar4 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    if (pWVar4 == (WorldMap *)0x0) {
      LawnApp::ShowCoinStore(pLVar1,0);
    }
    else {
      std::string::string(asStack_10,"");
      WorldMap::SwitchToStore(pWVar4,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_CoinBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CoinBank::Draw(WorldMap_CoinBank *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  SalesProgressBar *pSVar8;
  LotteryResultProgressBar *pLVar9;
  int *piVar10;
  undefined8 uVar11;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b114e0);
  Sexy::Graphics::DrawImage(param_1,pIVar7,0,0);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b114b8);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b114b8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar3 = FUN_04573734(*(undefined4 *)(this + 0x3c));
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  Sexy::Graphics::DrawImage(param_1,(Image *)pSVar8,(int)((float)iVar2 * -0.5),(iVar3 - iVar4) / 2);
  cVar1 = FUN_04573740(this[0x160]);
  if (cVar1 == '\0') {
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11508);
  }
  else {
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11578);
  }
  iVar2 = FUN_04573730(*(undefined4 *)(this + 0x38));
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = FUN_04573734(*(undefined4 *)(this + 0x3c));
  iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar9);
  Sexy::Graphics::DrawImage(param_1,(Image *)pLVar9,iVar2 - iVar3,(iVar4 - iVar5) / 2);
  local_18[0] = 0;
  piVar10 = eastl::max_alt<int>((int *)(this + 0x16c),(int *)local_18);
  Sexy::CommaSeparate(*piVar10);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar8);
  iVar3 = FUN_04573730(*(undefined4 *)(this + 0x38));
  iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)pSVar8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b114e0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar8);
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(iVar2 / 2),0,(float)((iVar3 - iVar4 / 2) - iVar5),(float)iVar6
             ,uVar11,param_1,auStack_20,1,1,(Color *)local_18,0);
  FUN_05476c50(auStack_20);
  StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x1a0),param_1);
  FUN_05476c50(auStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_CoinBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_CoinBank::Draw(WorldMap_CoinBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

