// Class: TinyRewardDisplayUI


/* TinyRewardDisplayUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
TinyRewardDisplayUI::DrawAll(TinyRewardDisplayUI *this,ModalFlags *param_1,Graphics *param_2)

{
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  return;
}


void TinyRewardDisplayUI::CloseDialog(void)

{
  if (s_ptr != (Widget *)0x0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],s_ptr);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,s_ptr);
    s_ptr = (Widget *)0x0;
  }
  return;
}


void TinyRewardDisplayUI::CloseDialog(void)

{
  if (s_ptr != (Widget *)0x0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],s_ptr);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,s_ptr);
    s_ptr = (Widget *)0x0;
  }
  return;
}


/* TinyRewardDisplayUI::~TinyRewardDisplayUI() */

void __thiscall TinyRewardDisplayUI::~TinyRewardDisplayUI(TinyRewardDisplayUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06a280b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06a283d8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x100));
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TinyRewardDisplayUI::~TinyRewardDisplayUI() */

void __thiscall TinyRewardDisplayUI::~TinyRewardDisplayUI(TinyRewardDisplayUI *this)

{
  ~TinyRewardDisplayUI(this);
  AK::FreeHook(this);
  return;
}


/* TinyRewardDisplayUI::CloseDialog() */

void TinyRewardDisplayUI::CloseDialog(void)

{
  if (s_ptr != (Widget *)0x0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],s_ptr);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,s_ptr);
    s_ptr = (Widget *)0x0;
  }
  return;
}


/* TinyRewardDisplayUI::SetTextLabel(std::wstring const&, std::wstring const&) */

void __thiscall
TinyRewardDisplayUI::SetTextLabel(TinyRewardDisplayUI *this,wstring *param_1,wstring *param_2)

{
  thunk_FUN_05477b9c(this + 0xe8);
  thunk_FUN_05477b9c(this + 0xf0,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TinyRewardDisplayUI::InitView(int, int, std::wstring const&, std::wstring const&) */

void __thiscall
TinyRewardDisplayUI::InitView
          (TinyRewardDisplayUI *this,int param_1,int param_2,wstring *param_3,wstring *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PuzzleTip *pPVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_b0 [8];
  int local_a8 [10];
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (TinyRewardDisplayUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pPVar8 = (PuzzleTip *)UIRewardFrame::CreateUIRewardFrame(param_1,param_2,true);
  PuzzleTip::SetDrawJustification(pPVar8,1);
  pcVar11 = *(code **)(*(long *)pPVar8 + 0x1a0);
  iVar1 = FUN_04fada68(0x78);
  Sexy::Insets::Insets
            (aIStack_40,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar1) / 2,
             iVar1,iVar1);
  (*pcVar11)(pPVar8,aIStack_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  thunk_FUN_05477b9c(this + 0xe8,param_3);
  thunk_FUN_05477b9c(this + 0xf0,param_4);
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_a8[0] != 0) {
    thunk_FUN_05477b9c(this + 0xf8,auStack_80);
    if (1 < param_2) {
      Sexy::StrFormat(L"x%d",aIStack_40,(ulong)(uint)param_2);
      thunk_FUN_05477668(this + 0xf8,aIStack_40);
      FUN_05476c50(aIStack_40);
    }
  }
  TodStringTranslate(L"[DIALOG_STRING_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x2c,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba7b08,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba7c10,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar2 = FUN_04fada68(0x78);
  iVar3 = FUN_04fada68(100);
  iVar4 = FUN_04fada68(0x46);
  iVar1 = *(int *)(this + 0x54);
  iVar5 = FUN_04fada68(0x3c);
  Sexy::Insets::Insets
            (aIStack_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 + (iVar3 + iVar1) / 2,iVar2,iVar5)
  ;
  (*pcVar11)(pPVar9,aIStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(pPVar9,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_b0);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar9,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba7978,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba7d10,2);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar11 = *(code **)(*(long *)pPVar9 + 0x1a0);
  iVar3 = FUN_04fada68(0x1bc);
  iVar4 = FUN_04fada68(0x1e);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04fada68(400);
  iVar6 = FUN_04fada68(10);
  iVar2 = *(int *)(this + 0x54);
  iVar7 = FUN_04fada68(0x36);
  Sexy::Insets::Insets
            (aIStack_40,(iVar3 + iVar1) / 2 - iVar4,(iVar2 - iVar5) / 2 - iVar6,iVar7,iVar7);
  (*pcVar11)(pPVar9,aIStack_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar9);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TinyRewardDisplayUI::TinyRewardDisplayUI() */

void __thiscall TinyRewardDisplayUI::TinyRewardDisplayUI(TinyRewardDisplayUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a280b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06a283d8;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x100));
  FUN_04fad014((function<void(Sexy::Graphics*)> *)(this + 0x100));
  return;
}


/* TinyRewardDisplayUI::ShowDialog(int, int, std::wstring const&, std::wstring const&) */

Widget * TinyRewardDisplayUI::ShowDialog(int param_1,int param_2,wstring *param_3,wstring *param_4)

{
  TinyRewardDisplayUI *this;
  
  if (s_ptr != (TinyRewardDisplayUI *)0x0) {
    return (Widget *)s_ptr;
  }
  this = ::operator_new(0x120);
  TinyRewardDisplayUI(this);
  s_ptr = this;
  InitView(this,param_1,param_2,param_3,param_4);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),s_ptr);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),s_ptr);
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),(Widget *)s_ptr);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),s_ptr);
  return (Widget *)s_ptr;
}


/* TinyRewardDisplayUI::ButtonDepress(int) */

void __thiscall TinyRewardDisplayUI::ButtonDepress(TinyRewardDisplayUI *this,int param_1)

{
  if (param_1 == 0x2c) {
    std::function<void()>::operator()((function<void()> *)(this + 0x100));
    return;
  }
  if (param_1 == 0x58) {
    CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to TinyRewardDisplayUI::ButtonDepress(int) */

void __thiscall TinyRewardDisplayUI::ButtonDepress(TinyRewardDisplayUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* TinyRewardDisplayUI::SetCallBack(std::function<void ()>) */

void __thiscall TinyRewardDisplayUI::SetCallBack(TinyRewardDisplayUI *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x100),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TinyRewardDisplayUI::Draw(Sexy::Graphics*) */

void __thiscall TinyRewardDisplayUI::Draw(TinyRewardDisplayUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar1 = FUN_04fada68(0x1bc);
  iVar2 = FUN_04fada68(400);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar2);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba7ae0);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04fada68(0x1bc);
  iVar2 = FUN_04fada68(400);
  iVar3 = FUN_04fada68(0x46);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04fada68(0x1bc);
  iVar3 = FUN_04fada68(400);
  iVar4 = FUN_04fada68(0x50);
  iVar1 = *(int *)(this + 0x54);
  iVar5 = FUN_04fada68(0x28);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 + (iVar1 - iVar3) / 2,iVar2,iVar5)
  ;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x42,0x25,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_18,uVar6,aIStack_28,5,1);
  iVar1 = FUN_04fada68(0x1bc);
  iVar2 = FUN_04fada68(0x8c);
  iVar3 = FUN_04fada68(0x32);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(iVar2 + *(int *)(this + 0x54)) / 2,
             iVar1,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x42,0x25,0);
  WriteWordInRect(param_1,this + 0xf8,aIStack_18,uVar6,aIStack_28,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

