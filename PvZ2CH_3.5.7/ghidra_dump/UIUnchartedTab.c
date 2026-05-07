// Class: UIUnchartedTab


/* UIUnchartedTab::SetCallback(Sexy::Delegate1<int>) */

void __thiscall UIUnchartedTab::SetCallback(UIUnchartedTab *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x310),param_2);
  return;
}


/* UIUnchartedTab::~UIUnchartedTab() */

void __thiscall UIUnchartedTab::~UIUnchartedTab(UIUnchartedTab *this)

{
  *(undefined ***)(this + 0x198) = &PTR__UIUnchartedTab_066a5ff8;
  *(undefined ***)this = &PTR_GetClass_066a5c90;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066a6020;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x350));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to UIUnchartedTab::~UIUnchartedTab() */

void __thiscall UIUnchartedTab::~UIUnchartedTab(UIUnchartedTab *this)

{
  ~UIUnchartedTab(this + -0x198);
  return;
}


/* UIUnchartedTab::~UIUnchartedTab() */

void __thiscall UIUnchartedTab::~UIUnchartedTab(UIUnchartedTab *this)

{
  ~UIUnchartedTab(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUnchartedTab::~UIUnchartedTab() */

void __thiscall UIUnchartedTab::~UIUnchartedTab(UIUnchartedTab *this)

{
  ~UIUnchartedTab(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedTab::SelectTab(int) */

void __thiscall UIUnchartedTab::SelectTab(UIUnchartedTab *this,int param_1)

{
  undefined8 uVar1;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x308) == param_1) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x340),2);
    uVar1 = *(undefined8 *)(this + 0x340);
  }
  else {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x348),2);
    uVar1 = *(undefined8 *)(this + 0x348);
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_40,uVar1,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedTab::ButtonDepress(int) */

void __thiscall UIUnchartedTab::ButtonDepress(UIUnchartedTab *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == param_1) &&
     (iVar1 = FUN_0382d480(*(undefined8 *)(this + 0x318),*(undefined8 *)(this + 0x328)), iVar1 != 0)
     ) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x310),
               (SexyURL *)(ulong)*(uint *)(this + 0x308));
    return;
  }
  return;
}


/* non-virtual thunk to UIUnchartedTab::ButtonDepress(int) */

void __thiscall UIUnchartedTab::ButtonDepress(UIUnchartedTab *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedTab::InitView(int, std::string, bool) */

void __thiscall
UIUnchartedTab::InitView(UIUnchartedTab *this,undefined8 param_2,Sexy *param_3,char param_4)

{
  undefined8 uVar1;
  string *extraout_x1;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x350,param_3);
  Sexy::StringToUpper(param_3,extraout_x1);
  std::operator+("IMAGE_UI_UNCHARTED_",asStack_40);
  std::string::~string(asStack_40);
  std::operator+(asStack_90,"_TAB");
  uVar1 = StringHelper::ToImage(asStack_88,true);
  *(undefined8 *)(this + 0x340) = uVar1;
  std::operator+(asStack_90,"_TAB_DOWN");
  uVar1 = StringHelper::ToImage(asStack_80,true);
  *(undefined8 *)(this + 0x348) = uVar1;
  if (param_4 == '\0') {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,uVar1,2);
    uVar1 = *(undefined8 *)(this + 0x348);
  }
  else {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,*(undefined8 *)(this + 0x340),2);
    uVar1 = *(undefined8 *)(this + 0x340);
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar1,2);
  PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,(PVZ2UIImage *)asStack_40);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedTab::UIUnchartedTab(int, std::string, bool) */

void __thiscall
UIUnchartedTab::UIUnchartedTab
          (UIUnchartedTab *this,int param_1,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color((Color *)&local_20,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),(wstring *)asStack_28,
             (Color *)&local_20);
  FUN_05476c50(asStack_28);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_066a5c90;
  *(undefined ***)(this + 0x198) = &PTR__UIUnchartedTab_066a5ff8;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_066a6020;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x310));
  Set8BytesTo0(this + 0x350);
  this[0x59] = (UIUnchartedTab)0x0;
  *(int *)(this + 0x308) = param_1;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SelectTab);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIUnchartedTab,void(UIUnchartedTab::*)(int)>>
            ((MessageRouter *)puVar2,Message::UIUnchartedSelectTab,&local_50);
  uVar1 = *(undefined4 *)(this + 0x308);
  FUN_05475d88(asStack_28,param_3);
  InitView(this,uVar1,asStack_28,param_4);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedTab::Draw(Sexy::Graphics*) */

void __thiscall UIUnchartedTab::Draw(UIUnchartedTab *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UnchartedModeNetworkMgr *pUVar4;
  LotteryResultProgressBar *this_00;
  Insets aIStack_28 [8];
  int local_20;
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  pUVar4 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  FUN_05475d88(asStack_18,this + 0x350);
  cVar1 = UnchartedModeNetworkMgr::CheckHasAvailableRewards(pUVar4,asStack_18);
  std::string::~string(asStack_18);
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"IMAGE_UI_HUD_WORLDMAP_TANHAO");
    this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    Sexy::Color::Color((Color *)asStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)asStack_18);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    Sexy::Insets::Insets(aIStack_28,0,0,iVar2,iVar3);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,(int)((float)*(int *)(this + 0x50) * 0.8),
               (int)((float)*(int *)(this + 0x54) * -0.2),(int)((float)local_20 * 0.8),
               (int)((float)local_1c * 0.8));
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)asStack_18,(TRect *)aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

