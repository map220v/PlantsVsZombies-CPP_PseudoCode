// Class: WorldMap_GemBank


/* WorldMap_GemBank::OnMouseMove(int, int) */

void WorldMap_GemBank::OnMouseMove(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x198))((long *)(ulong)(uint)param_1,param_2,in_x2,1)
  ;
  return;
}


/* WorldMap_GemBank::OnMouseUp(int, int) */

void WorldMap_GemBank::OnMouseUp(int param_1,int param_2)

{
  undefined8 in_x2;
  
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x198))((long *)(ulong)(uint)param_1,param_2,in_x2,0)
  ;
  return;
}


/* WorldMap_GemBank::~WorldMap_GemBank() */

void __thiscall WorldMap_GemBank::~WorldMap_GemBank(WorldMap_GemBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ec40;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_GemBank_0685edf0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  GemBank::~GemBank((GemBank *)this);
  return;
}


/* non-virtual thunk to WorldMap_GemBank::~WorldMap_GemBank() */

void __thiscall WorldMap_GemBank::~WorldMap_GemBank(WorldMap_GemBank *this)

{
  ~WorldMap_GemBank(this + -0x10);
  return;
}


/* WorldMap_GemBank::~WorldMap_GemBank() */

void __thiscall WorldMap_GemBank::~WorldMap_GemBank(WorldMap_GemBank *this)

{
  ~WorldMap_GemBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_GemBank::~WorldMap_GemBank() */

void __thiscall WorldMap_GemBank::~WorldMap_GemBank(WorldMap_GemBank *this)

{
  ~WorldMap_GemBank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GemBank::StaticClassInit() */

void WorldMap_GemBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_GemBank");
    (*pcVar2)(plVar1,asStack_10,FUN_04574280,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_GemBank::StaticGetClass() */

long * WorldMap_GemBank::StaticGetClass(void)

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
  uVar2 = GemBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_GemBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_GemBank::GetClass() const */

long * WorldMap_GemBank::GetClass(void)

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
  uVar2 = GemBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_GemBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_GemBank::WorldMap_GemBank() */

void __thiscall WorldMap_GemBank::WorldMap_GemBank(WorldMap_GemBank *this)

{
  GemBank::GemBank((GemBank *)this);
  this[400] = (WorldMap_GemBank)0x0;
  *(undefined ***)this = &PTR_GetClass_0685ec40;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_GemBank_0685edf0;
  this[0x163] = (WorldMap_GemBank)0x1;
  return;
}


/* WorldMap_GemBank::StaticNew() */

WorldMap_GemBank * WorldMap_GemBank::StaticNew(void)

{
  WorldMap_GemBank *this;
  
  this = ::operator_new(0x198);
  WorldMap_GemBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GemBank::CalcPlusButtonRect() */

void WorldMap_GemBank::CalcPlusButtonRect(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this;
  Insets *in_x8;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11648);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  this = (SalesProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11648);
  iVar4 = SalesProgressBar::GetCurrentLevel(this);
  Sexy::Insets::Insets(in_x8,0,0,iVar3,iVar4);
  iVar3 = FUN_04574118(*(undefined4 *)(in_x0 + 0x38));
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11648);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  lVar2 = ___stack_chk_guard;
  *(int *)in_x8 = *(int *)in_x8 + ((local_18 + iVar3) - iVar4);
  *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + local_14;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_GemBank::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_GemBank::updateButtonStates(WorldMap_GemBank *this,int param_1,int param_2,bool param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  char *pcVar3;
  WorldMap *this_00;
  
  cVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar2 == '\0') {
    FUN_04574120(this + 0x160);
  }
  else {
    FUN_04574120(this + 0x160,param_3);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Pressed");
  }
  if ((!param_3) &&
     (cVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar2 != '\0')) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    pLVar1 = gLawnApp;
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    if (this_00 == (WorldMap *)0x0) {
      this[400] = (WorldMap_GemBank)0x1;
      LawnApp::ShowCoinStore(pLVar1,2);
      return;
    }
    cVar2 = WorldMap::CanBeClosed(this_00);
    if (cVar2 != '\0') {
      this[400] = (WorldMap_GemBank)0x1;
      LawnApp::ShowCoinStore(gLawnApp,2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_GemBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_GemBank::Draw(WorldMap_GemBank *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  LotteryResultProgressBar *this_00;
  LotteryResultProgressBar *this_01;
  int *piVar11;
  undefined8 uVar12;
  SalesProgressBar *this_02;
  long lVar13;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b116a8);
  Sexy::Graphics::DrawImage(param_1,pIVar10,0,0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b115d0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_0457411c(*(undefined4 *)(this + 0x3c));
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(int)((float)iVar2 * -0.5),(iVar3 - iVar4) / 2)
  ;
  cVar1 = FUN_04574128(this[0x160]);
  if (cVar1 == '\0') {
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11648);
  }
  else {
    this_01 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b115a8);
  }
  iVar2 = FUN_04574118(*(undefined4 *)(this + 0x38));
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_04574138(1);
  iVar5 = FUN_0457411c(*(undefined4 *)(this + 0x3c));
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_01,(iVar2 - iVar3) - iVar4,(iVar5 - iVar6) / 2);
  local_18[0] = 0;
  piVar11 = eastl::max_alt<int>((int *)(this + 0x16c),(int *)local_18);
  Sexy::CommaSeparate(*piVar11);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26_Shaded);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = FUN_04574118(*(undefined4 *)(this + 0x38));
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b116a8);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_02);
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)(iVar2 / 2),0,(float)((iVar3 - iVar4 / 2) - iVar5),(float)iVar6
             ,uVar12,param_1,auStack_20,1,1,(Color *)local_18,0);
  FUN_05476c50(auStack_20);
  lVar13 = Sexy::LazySingleton<GemOfferMgr>::GetInstance();
  cVar1 = FUN_04574134(*(undefined1 *)(lVar13 + 0x3c));
  if (cVar1 != '\0') {
    iVar2 = FUN_04574118(*(undefined4 *)(this + 0x38));
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar4 = FUN_04574138(1);
    iVar5 = FUN_04574138(5);
    iVar6 = FUN_0457411c(*(undefined4 *)(this + 0x3c));
    iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    iVar9 = FUN_04574138(0x14);
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11610);
    Sexy::Graphics::DrawImage
              (param_1,pIVar10,((iVar2 - iVar3) - iVar4) + iVar5,
               (iVar8 + (iVar6 - iVar7) / 2) - iVar9);
  }
  FUN_05476c50(auStack_28);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_GemBank::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_GemBank::Draw(WorldMap_GemBank *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

