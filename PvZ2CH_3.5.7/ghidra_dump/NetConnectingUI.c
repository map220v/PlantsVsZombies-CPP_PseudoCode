// Class: NetConnectingUI


/* NetConnectingUI::~NetConnectingUI() */

void __thiscall NetConnectingUI::~NetConnectingUI(NetConnectingUI *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06846580;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068468a0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  std::string::~string((string *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NetConnectingUI::~NetConnectingUI() */

void __thiscall NetConnectingUI::~NetConnectingUI(NetConnectingUI *this)

{
  ~NetConnectingUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetConnectingUI::Draw(Sexy::Graphics*) */

void __thiscall NetConnectingUI::Draw(NetConnectingUI *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SalesProgressBar *this_00;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  iVar2 = FUN_043cd7d0(0x15e);
  iVar3 = FUN_043cd7d0(0x3c);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar2) / 2,
             (*(int *)(this + 0x54) - iVar3) / 2 - iVar3,iVar2,iVar3);
  cVar1 = LawnApp::IsPrimeTextReady(gLawnApp);
  if (cVar1 != '\0') {
    Sexy::ToWString((string *)(this + 0xf8));
    TodStringTranslate(awStack_38);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
  }
  if (*(LotteryResultProgressBar **)(this + 0xf0) != (LotteryResultProgressBar *)0x0) {
    iVar2 = *(int *)(this + 0x50);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    this_00 = *(SalesProgressBar **)(this + 0xf0);
    iVar3 = *(int *)(this + 0x54);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImageRotated
              (param_1,(Image *)this_00,(iVar2 - iVar4) / 2,(iVar3 - iVar5) / 2,
               *(double *)(this + 0xe0),(TRect *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetConnectingUI::NetConnectingUI(std::string const&) */

void __thiscall NetConnectingUI::NetConnectingUI(NetConnectingUI *this,string *param_1)

{
  PrimeText *this_00;
  undefined8 uVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06846580;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_068468a0;
  FUN_05475d88(this + 0xf8,param_1);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  *(undefined8 *)(this + 0xe0) = 0;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xe8) = fVar2 + 30.0;
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_NET_LOADING");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xf0) = uVar1;
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetConnectingUI::Update() */

void __thiscall NetConnectingUI::Update(NetConnectingUI *this)

{
  LawnApp *this_00;
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xe8) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0xe8) = uVar2;
    LawnApp::KillNetConnectingUI(gLawnApp);
    this_00 = gLawnApp;
    FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
    LawnApp::CheckNetWork(this_00,awStack_18,awStack_10);
    FUN_05476c50(awStack_10);
    nop();
    FUN_05476c50(awStack_18);
    nop();
  }
  *(double *)(this + 0xe0) = *(double *)(this + 0xe0) - 0.1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

