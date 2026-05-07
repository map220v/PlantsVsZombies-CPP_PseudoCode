// Class: GLDeliveryInfoWidget


/* GLDeliveryInfoWidget::HideAllButtonAndAnims() */

void __thiscall GLDeliveryInfoWidget::HideAllButtonAndAnims(GLDeliveryInfoWidget *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x220);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x218);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x208);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x210);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* GLDeliveryInfoWidget::RecoverAllButtonAndAnims() */

void __thiscall GLDeliveryInfoWidget::RecoverAllButtonAndAnims(GLDeliveryInfoWidget *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x220);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x218);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x208);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x210);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  return;
}


/* GLDeliveryInfoWidget::SetDeliveryInfo(std::wstring, std::wstring) */

void __thiscall
GLDeliveryInfoWidget::SetDeliveryInfo
          (GLDeliveryInfoWidget *this,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_05477b9c(this + 0x1e8);
  thunk_FUN_05477b9c(this + 0x1f8,param_2);
  thunk_FUN_05477b9c(this + 0x1f0,param_3);
  thunk_FUN_05477b9c(this + 0x200,param_3);
  return;
}


/* GLDeliveryInfoWidget::IsTelEditWidgetFocus() */

bool __thiscall GLDeliveryInfoWidget::IsTelEditWidgetFocus(GLDeliveryInfoWidget *this)

{
  return *(long *)(*(long *)(gLawnApp + 0x360) + 200) == *(long *)(this + 0x208);
}


/* GLDeliveryInfoWidget::IsEmailEditWidgetFocus() */

bool __thiscall GLDeliveryInfoWidget::IsEmailEditWidgetFocus(GLDeliveryInfoWidget *this)

{
  return *(long *)(*(long *)(gLawnApp + 0x360) + 200) == *(long *)(this + 0x210);
}


/* GLDeliveryInfoWidget::ValidTel(std::string&) */

bool __thiscall GLDeliveryInfoWidget::ValidTel(GLDeliveryInfoWidget *this,string *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_05474184(param_1);
  return 6 < uVar1;
}


/* GLDeliveryInfoWidget::ValidEmail(std::string&) */

bool __thiscall GLDeliveryInfoWidget::ValidEmail(GLDeliveryInfoWidget *this,string *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_05474184(param_1);
  if ((8 < uVar1) && (lVar2 = FUN_05474374(param_1,&DAT_055d5cc0,0), lVar2 != -1)) {
    lVar2 = FUN_05474374(param_1,".",0);
    return lVar2 != -1;
  }
  return false;
}


/* GLDeliveryInfoWidget::~GLDeliveryInfoWidget() */

void __thiscall GLDeliveryInfoWidget::~GLDeliveryInfoWidget(GLDeliveryInfoWidget *this)

{
  *(undefined ***)(this + 0x128) = &PTR_EditWidgetText_06979de8;
  *(undefined ***)this = &PTR_GetClass_06979a60;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06979da0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x200);
  FUN_05476c50(this + 0x1f8);
  FUN_05476c50(this + 0x1f0);
  FUN_05476c50(this + 0x1e8);
  FUN_05476c50(this + 0x1e0);
  FUN_05476c50(this + 0x1d8);
  FUN_05476c50(this + 0x1d0);
  FUN_05476c50(this + 0x1c8);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  return;
}


/* GLDeliveryInfoWidget::~GLDeliveryInfoWidget() */

void __thiscall GLDeliveryInfoWidget::~GLDeliveryInfoWidget(GLDeliveryInfoWidget *this)

{
  ~GLDeliveryInfoWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLDeliveryInfoWidget::OnGLDeliverySend(bool) */

void __thiscall GLDeliveryInfoWidget::OnGLDeliverySend(GLDeliveryInfoWidget *this,bool param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  HintUI *this_00;
  StoneLottery *pSVar3;
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    cVar1 = LawnApp::IsGeilivableLotteryValid(gLawnApp);
    if (cVar1 != '\0') {
      Sexy::ToString((wstring *)(this + 0x1e8));
      Sexy::ToString((wstring *)(this + 0x1f0));
      pSVar3 = (StoneLottery *)LawnApp::GetGeilivableLottery(gLawnApp);
      FUN_05475d88((string *)awStack_18,asStack_28);
      FUN_05475d88((string *)awStack_10,asStack_20);
      StoneLottery::SetDeliveryInfo(pSVar3,(string *)awStack_18,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      std::string::~string((string *)awStack_18);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
    }
    FUN_05478178(awStack_18,&DAT_056f11a8,awStack_10);
    nop();
    if (this[0x131] == (GLDeliveryInfoWidget)0x0) {
      pwVar2 = L"[GEILIVABLE_DELIVERY_SUBMIT_SUCCESS_NOWIN]";
    }
    else {
      pwVar2 = L"[GEILIVABLE_DELIVERY_SUBMIT_SUCCESS_WIN]";
    }
    TodStringTranslate(pwVar2);
    FUN_054766c8(awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    this_00 = (HintUI *)LawnApp::CreateHintUI(gLawnApp);
    if (this_00 != (HintUI *)0x0) {
      HintUI::Default1Init(this_00);
      FUN_05478178(awStack_10,L"[GEILIVABLE_DELIVERY_SUBMIT_SUCCESS_TITLE]",asStack_20);
      HintUI::SetTitleString(this_00,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      HintUI::SetContentString(this_00,awStack_18);
      HintUI::ShowHintUI(this_00);
    }
    FUN_05476c50(awStack_18);
  }
  else {
    LawnApp::ShowNetworkError(gLawnApp);
  }
  LawnApp::KillGLDeliveryUI(gLawnApp);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GLDeliveryInfoWidget::GLDeliveryInfoWidget() */

void __thiscall GLDeliveryInfoWidget::GLDeliveryInfoWidget(GLDeliveryInfoWidget *this)

{
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  Sexy::EditListener::EditListener((EditListener *)(this + 0x128));
  this[0x130] = (GLDeliveryInfoWidget)0x0;
  *(undefined ***)this = &PTR_GetClass_06979a60;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_06979da0;
  *(undefined ***)(this + 0x128) = &PTR_EditWidgetText_06979de8;
  this[0x131] = (GLDeliveryInfoWidget)0x0;
  this[0x132] = (GLDeliveryInfoWidget)0x0;
  this[0x133] = (GLDeliveryInfoWidget)0x0;
  this[0x134] = (GLDeliveryInfoWidget)0x0;
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1a8));
  Sexy::Insets::Insets((Insets *)(this + 0x1b8));
  FUN_05476574(this + 0x1c8);
  FUN_05476574(this + 0x1d0);
  FUN_05476574(this + 0x1d8);
  FUN_05476574(this + 0x1e0);
  FUN_05476574(this + 0x1e8);
  FUN_05476574(this + 0x1f0);
  FUN_05476574(this + 0x1f8);
  FUN_05476574(this + 0x200);
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  FUN_054772c4(this + 0x1e8,&DAT_056f11a8);
  FUN_054772c4(this + 0x1f0,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLDeliveryInfoWidget::ButtonDepress(int) */

void __thiscall GLDeliveryInfoWidget::ButtonDepress(GLDeliveryInfoWidget *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  NetworkMgr *this_01;
  long *plVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2711) {
    cVar1 = std::operator==((wstring *)(this + 0x1f8),(wstring *)(this + 0x1e8));
    if ((cVar1 == '\0') ||
       (cVar1 = std::operator==((wstring *)(this + 0x200),(wstring *)(this + 0x1f0)), cVar1 == '\0')
       ) {
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
      pcVar3 = *(code **)(*plVar2 + 0x270);
      Sexy::ToString((wstring *)(this + 0x1f0));
      Sexy::ToString((wstring *)(this + 0x1e8));
      std::string::string(asStack_10,"");
      (*pcVar3)(plVar2,asStack_20,asStack_18,asStack_10,0,0);
      std::string::~string(asStack_10);
      nop();
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
    else {
      OnGLDeliverySend(this,true);
    }
  }
  else if (param_1 == 0x2712) {
    cVar1 = LawnApp::IsGLDeliveryUIValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillGLDeliveryUI(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GLDeliveryInfoWidget::ButtonDepress(int) */

void __thiscall GLDeliveryInfoWidget::ButtonDepress(GLDeliveryInfoWidget *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLDeliveryInfoWidget::Draw(Sexy::Graphics*) */

void __thiscall GLDeliveryInfoWidget::Draw(GLDeliveryInfoWidget *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a168);
  PopingWidget::GetMainRect();
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3e8);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x138));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a238);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1a8));
  PopingWidget::DrawPopingBoxImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a238);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1b8));
  PopingWidget::DrawPopingBoxImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  cVar1 = FUN_04bbb510(this[0x115]);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x1c8,this + 0x148,uVar2,aIStack_40,5,1);
    Sexy::Color::Color((Color *)aIStack_50,0x50,0x23,0);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Insets::Insets(aIStack_40,aIStack_50);
    WriteWordInRect(param_1,this + 0x1d0,this + 0x178,uVar2,aIStack_40,5,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Insets::Insets(aIStack_40,aIStack_50);
    WriteWordInRect(param_1,this + 0x1d8,this + 0x188,uVar2,aIStack_40,5,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Insets::Insets(aIStack_40,aIStack_50);
    WriteWordInRect(param_1,this + 0x1e0,this + 0x198,uVar2,aIStack_40,5,1);
  }
  else {
    PVZ2UIButton::GetImageNormal();
    uVar2 = local_38;
    Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x158));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
    PVZ2UIButton::GetImageNormal();
    Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x168));
    PopingWidget::DrawPoping3SliceImage((PopingWidget *)this,param_1,local_38,aIStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLDeliveryInfoWidget::InitView() */

void __thiscall GLDeliveryInfoWidget::InitView(GLDeliveryInfoWidget *this)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  PVZ2UIButton *pPVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  PVZ2UIEditWidget *pPVar17;
  long lVar18;
  long *plVar19;
  code *pcVar20;
  int iVar21;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  Insets aIStack_b8 [16];
  Insets aIStack_a8 [16];
  int local_98;
  undefined1 auStack_88 [8];
  int local_80;
  wstring awStack_78 [4];
  int local_74;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  this[0x59] = (GLDeliveryInfoWidget)0x0;
  this[0x132] = (GLDeliveryInfoWidget)0x0;
  this[0x133] = (GLDeliveryInfoWidget)0x0;
  this[0x134] = (GLDeliveryInfoWidget)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3e8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar21 = (int)((double)iVar5 * 0.7);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a3e8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar2 = iVar6 / 2;
  iVar7 = FUN_04bbb930(500);
  iVar8 = FUN_04bbb930(0x15e);
  iVar10 = *(int *)(this + 0x54) - iVar8 >> 1;
  iVar11 = *(int *)(this + 0x50) - iVar7 >> 1;
  iVar5 = iVar10 + iVar2;
  iVar1 = iVar11 + iVar7 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar11,iVar5,iVar7,iVar8 - iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  iVar9 = FUN_04bbb930(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar21 / 2) - iVar9,iVar10,iVar21,iVar6);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  iVar10 = FUN_04bbb930(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x138),*(int *)(this + 0x13c) - iVar10,iVar21,iVar6
            );
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = uStack_38;
  iVar10 = FUN_04bbb930(0x14);
  iVar9 = FUN_04bbb930(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 + iVar11,iVar5 + (iVar6 - iVar2),iVar7 + iVar10 * -2,iVar9);
  *(undefined8 *)(this + 0x178) = local_40;
  *(undefined8 *)(this + 0x180) = uStack_38;
  iVar10 = FUN_04bbb930(0x46);
  iVar6 = FUN_04bbb930(0x3c);
  iVar9 = FUN_04bbb930(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar10 + iVar11,
             *(int *)(this + 0x17c) + *(int *)(this + 0x184) + 10,iVar6,iVar9);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  iVar10 = *(int *)(this + 0x194);
  iVar11 = *(int *)(this + 0x18c);
  iVar6 = FUN_04bbb930(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x188),iVar10 + iVar11 + iVar6,*(int *)(this + 400)
             ,iVar10);
  iVar10 = *(int *)(this + 400);
  iVar11 = *(int *)(this + 0x188);
  *(undefined8 *)(this + 0x198) = local_40;
  *(undefined8 *)(this + 0x1a0) = uStack_38;
  iVar6 = FUN_04bbb930(10);
  iVar9 = FUN_04bbb930(0x46);
  iVar21 = FUN_04bbb930(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(iVar10 + iVar11) - iVar6,*(int *)(this + 0x18c),
             ((iVar7 + iVar9 * -2) - iVar10) - iVar21,*(int *)(this + 0x194));
  *(undefined8 *)(this + 0x1a8) = local_40;
  *(undefined8 *)(this + 0x1b0) = uStack_38;
  iVar11 = FUN_04bbb930(10);
  iVar10 = *(int *)(this + 0x1a8);
  iVar6 = FUN_04bbb930(0x14);
  Sexy::Insets::Insets
            (aIStack_b8,iVar11 + iVar10,*(int *)(this + 0x1ac),*(int *)(this + 0x1b0) - iVar6,
             *(int *)(this + 0x1b4));
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x1a8),*(int *)(this + 0x19c),
             *(int *)(this + 0x1b0),*(int *)(this + 0x1b4));
  *(undefined8 *)(this + 0x1b8) = local_40;
  *(undefined8 *)(this + 0x1c0) = uStack_38;
  iVar11 = FUN_04bbb930(10);
  iVar10 = *(int *)(this + 0x1b8);
  iVar6 = FUN_04bbb930(0x14);
  Sexy::Insets::Insets
            (aIStack_a8,iVar11 + iVar10,*(int *)(this + 0x1bc),*(int *)(this + 0x1c0) - iVar6,
             *(int *)(this + 0x1c4));
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a500);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8a500);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar13);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar6 = FUN_04bbb930(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar7 = FUN_04bbb930(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar10 / 2) + iVar6,
             (local_74 - iVar11 / 2) + iVar7,iVar10,iVar11);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0x2712,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x220) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x220);
  if (pPVar14 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8a500,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a538,3);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x220) + 0x1a0))(*(long **)(this + 0x220),this + 0x158);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x220));
  }
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aa50);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pSVar13 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8aa50);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar13);
  iVar6 = FUN_04bbb930(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - (int)((double)iVar10 * 2.5) / 2,
             ((iVar5 + (iVar8 - iVar2)) - (int)((double)iVar11 * 0.8)) - iVar6,
             (int)((double)iVar10 * 2.5),(int)((double)iVar11 * 0.8));
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_DELIVERY_BUTTON_SUBMIT]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0x2711,(ButtonListener *)(this + 0x120),awStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x218) = pPVar14;
  FUN_05476c50(awStack_78);
  pPVar14 = *(PVZ2UIButton **)(this + 0x218);
  if (pPVar14 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8a438,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8a410,3);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    (**(code **)(**(long **)(this + 0x218) + 0x1a0))(*(long **)(this + 0x218),this + 0x168);
    plVar19 = *(long **)(this + 0x218);
    pcVar20 = *(code **)(*plVar19 + 800);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar20)(plVar19,uVar15);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  }
  TodStringTranslate(L"[GEILIVABLE_DELIVERY_TITLE]");
  FUN_054766c8(this + 0x1c8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  if (this[0x131] == (GLDeliveryInfoWidget)0x0) {
    pwVar16 = L"[GEILIVABLE_DELIVERY_HINT_NOWIN]";
  }
  else {
    pwVar16 = L"[GEILIVABLE_DELIVERY_HINT_WIN]";
  }
  TodStringTranslate(pwVar16);
  FUN_054766c8(this + 0x1d0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[GEILIVABLE_DELIVERY_TEL_LABEL]");
  FUN_054766c8(this + 0x1d8,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  TodStringTranslate(L"[GEILIVABLE_DELIVERY_EMAIL_LABEL]");
  FUN_054766c8(this + 0x1e0,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,awStack_78);
  pPVar17 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (pPVar17,(TRect *)aIStack_b8,0x2713,(EditListener *)(this + 0x128),(wstring *)&local_40,
             true);
  *(PVZ2UIEditWidget **)(this + 0x208) = pPVar17;
  FUN_05476c50((Insets *)&local_40);
  nop();
  bVar4 = std::operator==(L"",(wstring *)(this + 0x1e8));
  if (bVar4) {
    lVar18 = *(long *)(this + 0x208);
    TodStringTranslate(L"[GEILIVABLE_DELIVERY_TEL_HINT]");
    FUN_054766c8(lVar18 + 0xe8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    (**(code **)(**(long **)(this + 0x208) + 0x170))
              (*(long **)(this + 0x208),2,&PrimeText_Game::Color_SlateGray);
    (**(code **)(**(long **)(this + 0x218) + 0x188))(*(long **)(this + 0x218),1);
  }
  else {
    thunk_FUN_05477b9c(*(long *)(this + 0x208) + 0xe8,(wstring *)(this + 0x1e8));
    plVar19 = *(long **)(this + 0x208);
    *(bool *)((long)plVar19 + 0x16c) = bVar4;
    (**(code **)(*plVar19 + 0x170))(plVar19,2,&PrimeText_Game::Color_Powerup_Cost);
  }
  plVar19 = *(long **)(this + 0x208);
  pcVar20 = *(code **)(*plVar19 + 0x330);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  (*pcVar20)(plVar19,uVar15,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x208));
  FUN_05478178((Insets *)&local_40,&DAT_056f11a8,awStack_78);
  pPVar17 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (pPVar17,(TRect *)aIStack_a8,0x2714,(EditListener *)(this + 0x128),(wstring *)&local_40,
             true);
  *(PVZ2UIEditWidget **)(this + 0x210) = pPVar17;
  FUN_05476c50((Insets *)&local_40);
  nop();
  bVar4 = std::operator==(L"",(wstring *)(this + 0x1f0));
  if (bVar4) {
    lVar18 = *(long *)(this + 0x210);
    TodStringTranslate(L"[GEILIVABLE_DELIVERY_EMAIL_HINT]");
    FUN_054766c8(lVar18 + 0xe8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    (**(code **)(**(long **)(this + 0x210) + 0x170))
              (*(long **)(this + 0x210),2,&PrimeText_Game::Color_SlateGray);
    (**(code **)(**(long **)(this + 0x218) + 0x188))(*(long **)(this + 0x218),1);
  }
  else {
    thunk_FUN_05477b9c(*(long *)(this + 0x210) + 0xe8,(wstring *)(this + 0x1f0));
    plVar19 = *(long **)(this + 0x210);
    *(undefined1 *)((long)plVar19 + 0x16c) = 0;
    (**(code **)(*plVar19 + 0x170))(plVar19,2,&PrimeText_Game::Color_Powerup_Cost);
  }
  plVar19 = *(long **)(this + 0x210);
  pcVar20 = *(code **)(*plVar19 + 0x330);
  uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  (*pcVar20)(plVar19,uVar15,0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x210));
  (**(code **)(*(long *)this + 0x318))(this);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGLDeliverySend);
  local_e0 = local_40;
  uStack_d8 = uStack_38;
  local_d0 = local_30;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GLDeliveryInfoWidget,void(GLDeliveryInfoWidget::*)(bool)>>
            ((MessageRouter *)puVar3,Message::GLDeliverySend,&local_e0);
  this[0x130] = (GLDeliveryInfoWidget)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GLDeliveryInfoWidget::Update() */

void __thiscall GLDeliveryInfoWidget::Update(GLDeliveryInfoWidget *this)

{
  char cVar1;
  bool bVar2;
  GLDeliveryInfoWidget GVar3;
  int iVar4;
  long *plVar5;
  GLDeliveryInfoWidget GVar6;
  long lVar7;
  bool bVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*gLawnApp + 0x348))(gLawnApp);
  if (cVar1 == '\0') {
    GVar6 = this[0x132];
    if (GVar6 != (GLDeliveryInfoWidget)0x0) {
      this[0x132] = (GLDeliveryInfoWidget)0x0;
      iVar4 = FUN_04bbb930(100);
      (**(code **)(*(long *)this + 0x1a8))
                (this,*(undefined4 *)(this + 0x48),iVar4 + *(int *)(this + 0x4c));
      (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),1);
      if (this[0x133] != (GLDeliveryInfoWidget)0x0) {
        thunk_FUN_05477b9c(this + 0x1e8,*(long *)(this + 0x208) + 0xe8);
      }
      bVar2 = std::operator==(L"",(wstring *)(this + 0x1e8));
      if (bVar2) {
        lVar7 = *(long *)(this + 0x208);
        *(undefined1 *)(lVar7 + 0x16c) = 1;
        bVar8 = false;
        TodStringTranslate(L"[GEILIVABLE_DELIVERY_TEL_HINT]");
        FUN_054766c8(lVar7 + 0xe8,asStack_10);
        FUN_05476c50(asStack_10);
        (**(code **)(**(long **)(this + 0x208) + 0x170))
                  (*(long **)(this + 0x208),2,&PrimeText_Game::Color_SlateGray);
      }
      else {
        Sexy::ToString((wstring *)(this + 0x1e8));
        cVar1 = ValidTel(this,asStack_10);
        bVar8 = cVar1 != '\0';
        if (bVar8) {
          plVar5 = *(long **)(this + 0x208);
          *(bool *)((long)plVar5 + 0x16c) = bVar2;
          (**(code **)(*plVar5 + 0x170))(plVar5,2,&PrimeText_Game::Color_Powerup_Cost);
        }
        else {
          plVar5 = *(long **)(this + 0x208);
          *(undefined1 *)((long)plVar5 + 0x16c) = 1;
          (**(code **)(*plVar5 + 0x170))(plVar5,2,&PrimeText_Game::Color_Tomato);
        }
        std::string::~string(asStack_10);
      }
      if (this[0x134] != (GLDeliveryInfoWidget)0x0) {
        thunk_FUN_05477b9c(this + 0x1f0,*(long *)(this + 0x210) + 0xe8);
      }
      GVar3 = (GLDeliveryInfoWidget)std::operator==(L"",(wstring *)(this + 0x1f0));
      if ((bool)GVar3) {
        lVar7 = *(long *)(this + 0x210);
        *(undefined1 *)(lVar7 + 0x16c) = 1;
        TodStringTranslate(L"[GEILIVABLE_DELIVERY_EMAIL_HINT]");
        FUN_054766c8(lVar7 + 0xe8,asStack_10);
        FUN_05476c50(asStack_10);
        (**(code **)(**(long **)(this + 0x210) + 0x170))
                  (*(long **)(this + 0x210),2,&PrimeText_Game::Color_SlateGray);
        GVar6 = GVar3;
      }
      else {
        Sexy::ToString((wstring *)(this + 0x1f0));
        cVar1 = ValidEmail(this,asStack_10);
        plVar5 = *(long **)(this + 0x210);
        if (cVar1 == '\0') {
          *(undefined1 *)((long)plVar5 + 0x16c) = 1;
          (**(code **)(*plVar5 + 0x170))(plVar5,2,&PrimeText_Game::Color_Tomato);
        }
        else {
          *(GLDeliveryInfoWidget *)((long)plVar5 + 0x16c) = GVar3;
          GVar6 = (GLDeliveryInfoWidget)(bVar8 ^ 1);
          (**(code **)(*plVar5 + 0x170))(plVar5,2,&PrimeText_Game::Color_Powerup_Cost);
        }
        std::string::~string(asStack_10);
      }
      (**(code **)(**(long **)(this + 0x218) + 0x188))(*(long **)(this + 0x218),GVar6);
    }
    goto LAB_04bc3c2c;
  }
  if (this[0x132] == (GLDeliveryInfoWidget)0x0) {
    this[0x133] = (GLDeliveryInfoWidget)0x0;
    this[0x132] = (GLDeliveryInfoWidget)0x1;
    this[0x134] = (GLDeliveryInfoWidget)0x0;
    iVar4 = FUN_04bbb930(100);
    (**(code **)(*(long *)this + 0x1a8))
              (this,*(undefined4 *)(this + 0x48),*(int *)(this + 0x4c) - iVar4);
    (**(code **)(**(long **)(this + 0x218) + 0x158))(*(long **)(this + 0x218),0);
    cVar1 = IsTelEditWidgetFocus(this);
    if (cVar1 != '\0') goto LAB_04bc3e14;
LAB_04bc3c1c:
    cVar1 = IsEmailEditWidgetFocus(this);
  }
  else {
    cVar1 = IsTelEditWidgetFocus(this);
    if (cVar1 == '\0') goto LAB_04bc3c1c;
LAB_04bc3e14:
    this[0x133] = (GLDeliveryInfoWidget)0x1;
    (**(code **)(**(long **)(this + 0x208) + 0x170))
              (*(long **)(this + 0x208),2,&PrimeText_Game::Color_Powerup_Cost);
    cVar1 = IsEmailEditWidgetFocus(this);
  }
  if (cVar1 != '\0') {
    this[0x134] = (GLDeliveryInfoWidget)0x1;
    (**(code **)(**(long **)(this + 0x210) + 0x170))
              (*(long **)(this + 0x210),2,&PrimeText_Game::Color_Powerup_Cost);
  }
LAB_04bc3c2c:
  PopingWidget::Update((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

