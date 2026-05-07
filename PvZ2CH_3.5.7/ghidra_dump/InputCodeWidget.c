// Class: InputCodeWidget


/* InputCodeWidget::EditWidgetText(int, std::wstring const&) */

void InputCodeWidget::EditWidgetText(int param_1,wstring *param_2)

{
  *(undefined1 *)(*(long *)((ulong)(uint)param_1 + 0xf0) + 0x16c) = 0;
  return;
}


/* non-virtual thunk to InputCodeWidget::EditWidgetText(int, std::wstring const&) */

void __thiscall InputCodeWidget::EditWidgetText(InputCodeWidget *this,int param_1,wstring *param_2)

{
  EditWidgetText((int)this + -0xd8,(wstring *)(ulong)(uint)param_1);
  return;
}


/* InputCodeWidget::~InputCodeWidget() */

void __thiscall InputCodeWidget::~InputCodeWidget(InputCodeWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06934200;
  *(undefined **)(this + 0xd8) = &DAT_06934538;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06934568;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* InputCodeWidget::~InputCodeWidget() */

void __thiscall InputCodeWidget::~InputCodeWidget(InputCodeWidget *this)

{
  ~InputCodeWidget(this);
  AK::FreeHook(this);
  return;
}


/* InputCodeWidget::Update() */

void __thiscall InputCodeWidget::Update(InputCodeWidget *this)

{
  char cVar1;
  long *plVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  cVar1 = FUN_054765e8(*(long *)(this + 0xf0) + 0xe8);
  plVar2 = *(long **)(this + 0xf8);
  if (cVar1 == '\0') {
    (**(code **)(*plVar2 + 0x188))(plVar2);
    return;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InputCodeWidget::ButtonDepress(int) */

void __thiscall InputCodeWidget::ButtonDepress(InputCodeWidget *this,int param_1)

{
  LawnApp *this_00;
  NetworkMgr *this_01;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    (**(code **)(*(long *)this + 0x158))();
    (**(code **)(*(long *)gLawnApp + 0x340))(gLawnApp);
    plVar1 = *(long **)(this + 0xf0);
    pcVar2 = *(code **)(*plVar1 + 0x318);
    std::string::string(asStack_10,"");
    (*pcVar2)(plVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else if (param_1 == 2) {
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
    pcVar2 = *(code **)(*plVar1 + 0x348);
    Sexy::ToString((wstring *)(*(long *)(this + 0xf0) + 0xe8));
    (*pcVar2)(plVar1,asStack_10);
    std::string::~string(asStack_10);
    this_00 = gLawnApp;
    std::string::string(asStack_10,"[NET_CONNECTING]");
    LawnApp::ShowNetConnectingUI(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)this + 0x158))(this,0);
    plVar1 = *(long **)(this + 0xf0);
    pcVar2 = *(code **)(*plVar1 + 0x318);
    std::string::string(asStack_10,"");
    (*pcVar2)(plVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to InputCodeWidget::ButtonDepress(int) */

void __thiscall InputCodeWidget::ButtonDepress(InputCodeWidget *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* InputCodeWidget::AllowChar(int, wchar_t) */

undefined8 __thiscall InputCodeWidget::AllowChar(InputCodeWidget *this,int param_1,wchar_t param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = iswalnum(param_2);
  if ((iVar1 == 0) &&
     ((param_2 != L' ' || (lVar3 = FUN_054765c4(*(long *)(this + 0xf0) + 0xe8), lVar3 == 0)))) {
    uVar2 = EA::Text::IsCharAlphabetic((wchar16)param_2);
    return uVar2;
  }
  return 1;
}


/* non-virtual thunk to InputCodeWidget::AllowChar(int, wchar_t) */

void __thiscall InputCodeWidget::AllowChar(InputCodeWidget *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xd8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InputCodeWidget::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
InputCodeWidget::DrawAll(InputCodeWidget *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar1 = FUN_04a45288(600);
  iVar2 = FUN_04a45288(300);
  iVar3 = FUN_04a45288(0x32);
  iVar5 = *(int *)(this + 0x54);
  iVar4 = FUN_04a45288(200);
  Sexy::Insets::Insets
            (aIStack_48,(*(int *)(this + 0x50) - iVar1) / 2,iVar3 + (iVar5 - iVar2) / 2,iVar1,iVar4)
  ;
  Sexy::Insets::Insets(aIStack_18,aIStack_48);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b6f0);
  Draw9SliceImage(param_2,aIStack_18,uVar6);
  iVar5 = FUN_04a45288(100);
  iVar1 = FUN_04a45288(0x82);
  iVar2 = FUN_04a45288(500);
  iVar3 = FUN_04a45288(0x50);
  Sexy::Insets::Insets(aIStack_38,iVar5 / 2,iVar1,iVar2,iVar3);
  Sexy::Insets::Insets(aIStack_18,aIStack_38);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b628);
  Draw9SliceImage(param_2,aIStack_18,uVar6);
  iVar5 = FUN_04a45288(0);
  iVar1 = FUN_04a45288(0x37);
  iVar2 = FUN_04a45288(100);
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar1,*(int *)(this + 0x50),iVar2);
  TodStringTranslate(L"[DAILYSIGN_TW4399_REQUEST_TITLE]");
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_2,auStack_50,aIStack_28,uVar6,aIStack_18,2,1);
  FUN_05476c50(auStack_50);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InputCodeWidget::InputCodeWidget(DailySignRewardWithTW*) */

void __thiscall
InputCodeWidget::InputCodeWidget(InputCodeWidget *this,DailySignRewardWithTW *param_1)

{
  ButtonListener *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PVZ2UIEditWidget *this_01;
  PVZ2UIButton *pPVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  Color aCStack_88 [12];
  undefined4 local_7c;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this_00 = (ButtonListener *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener(this_00);
  *(DailySignRewardWithTW **)(this + 0xe8) = param_1;
  *(undefined ***)this = &PTR_GetClass_06934200;
  *(undefined **)(this + 0xd8) = &DAT_06934538;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06934568;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  FUN_05478178(awStack_90,&DAT_056f11a8,aIStack_40);
  nop();
  iVar1 = FUN_04a45288(100);
  iVar2 = FUN_04a45288(0x82);
  iVar3 = FUN_04a45288(500);
  iVar4 = FUN_04a45288(0x50);
  Sexy::Insets::Insets(aIStack_40,iVar1 / 2,iVar2,iVar3,iVar4);
  this_01 = ::operator_new(0x1b8);
  PVZ2UIEditWidget::PVZ2UIEditWidget
            (this_01,(TRect *)aIStack_40,0,(EditListener *)(this + 0xd8),awStack_90,true);
  lVar11 = *(long *)this_01;
  *(PVZ2UIEditWidget **)(this + 0xf0) = this_01;
  (**(code **)(lVar11 + 0x170))(this_01,2,&PrimeText_Game::Color_Description_Brown);
  Sexy::Color::Color(aCStack_88,1);
  local_7c = 0;
  (**(code **)(**(long **)(this + 0xf0) + 0x170))(*(long **)(this + 0xf0),0,aCStack_88);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_98);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar8,0,this_00,awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar12 = *(code **)(*(long *)pPVar8 + 0x198);
  iVar1 = FUN_04a45288(600);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar3 = FUN_04a45288(0x1e);
  uVar5 = FUN_04a45288(5);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b978);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar12)(pPVar8,(iVar1 - iVar2) - iVar3,uVar5,uVar6,uVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b978,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b7b678,1);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar8);
  FUN_05478178(awStack_78,L"[BUTTON_OK]",auStack_98);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar8,2,this_00,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar8;
  FUN_05476c50(awStack_78);
  nop();
  plVar13 = *(long **)(this + 0xf8);
  pcVar12 = *(code **)(*plVar13 + 0x198);
  iVar1 = FUN_04a45288(0x1c2);
  iVar2 = FUN_04a45288(300);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b650);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar10);
  uVar5 = FUN_04a45288(0x96);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b650);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  (*pcVar12)(plVar13,iVar1 / 2,iVar2 - iVar3,uVar5,uVar6);
  pPVar8 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b7b650,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b7b820,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  FUN_05476c50(awStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

