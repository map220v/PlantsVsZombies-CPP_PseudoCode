// Class: PVPCurrencyBar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCurrencyBar::GetLayoutName() */

void __thiscall PVPCurrencyBar::GetLayoutName(PVPCurrencyBar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"currencyBar");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVPCurrencyBar::~PVPCurrencyBar() */

void __thiscall PVPCurrencyBar::~PVPCurrencyBar(PVPCurrencyBar *this)

{
  *(undefined ***)this = &PTR_GetClass_0694a280;
  *(undefined **)(this + 0xd8) = &DAT_0694a5d0;
  UI::Dialog::~Dialog((Dialog *)this);
  return;
}


/* PVPCurrencyBar::~PVPCurrencyBar() */

void __thiscall PVPCurrencyBar::~PVPCurrencyBar(PVPCurrencyBar *this)

{
  ~PVPCurrencyBar(this);
  AK::FreeHook(this);
  return;
}


/* PVPCurrencyBar::ButtonDepress(int) */

void __thiscall PVPCurrencyBar::ButtonDepress(PVPCurrencyBar *this,int param_1)

{
  if (param_1 == 1) {
    LawnApp::ShowPvpCoinStore();
    return;
  }
  if (param_1 == 2) {
    LawnApp::ShowCoinStore(gLawnApp);
    return;
  }
  return;
}


/* non-virtual thunk to PVPCurrencyBar::ButtonDepress(int) */

void __thiscall PVPCurrencyBar::ButtonDepress(PVPCurrencyBar *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCurrencyBar::RefreshCurrency() */

void __thiscall PVPCurrencyBar::RefreshCurrency(PVPCurrencyBar *this)

{
  long lVar1;
  ulong uVar2;
  PVPManager *pPVar3;
  ulong uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04add1b8(*(undefined4 *)(lVar1 + 0xc));
  pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = PVPManager::GetPVPMedalMax(pPVar3);
  Sexy::StrFormat(L"%d/%d",auStack_18,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x138),auStack_18);
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04add1b4(*(undefined4 *)(lVar1 + 8));
  pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = PVPManager::GetPVPCoinMax(pPVar3);
  Sexy::StrFormat(L"%d/%d",auStack_10,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  FUN_054766c8(auStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x140),auStack_18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = PlayerInfo::GetNumGems(this_01,false);
  Sexy::StrFormat(L"%d",auStack_10,uVar2 & 0xffffffff);
  FUN_054766c8(auStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(this + 0x148),auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCurrencyBar::onGemCurrencyChanged(int) */

void PVPCurrencyBar::onGemCurrencyChanged(int param_1)

{
  long lVar1;
  ulong uVar2;
  PVPManager *pPVar3;
  ulong uVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ulong uVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long lStack_8;
  
  uVar5 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04add1b8(*(undefined4 *)(lVar1 + 0xc));
  pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = PVPManager::GetPVPMedalMax(pPVar3);
  Sexy::StrFormat(L"%d/%d",auStack_18,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  PuzzleTip::SetTip(*(undefined8 *)(uVar5 + 0x138),auStack_18);
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar2 = FUN_04add1b4(*(undefined4 *)(lVar1 + 8));
  pPVar3 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  uVar4 = PVPManager::GetPVPCoinMax(pPVar3);
  Sexy::StrFormat(L"%d/%d",auStack_10,uVar2 & 0xffffffff,uVar4 & 0xffffffff);
  FUN_054766c8(auStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(uVar5 + 0x140),auStack_18);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar2 = PlayerInfo::GetNumGems(this_00,false);
  Sexy::StrFormat(L"%d",auStack_10,uVar2 & 0xffffffff);
  FUN_054766c8(auStack_18,auStack_10);
  FUN_05476c50(auStack_10);
  PuzzleTip::SetTip(*(undefined8 *)(uVar5 + 0x148),auStack_18);
  FUN_05476c50(auStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPCurrencyBar::InitView() */

void __thiscall PVPCurrencyBar::InitView(PVPCurrencyBar *this)

{
  bool bVar1;
  long lVar2;
  UIWidgetText *pUVar3;
  long *plVar4;
  string *psVar5;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_70 [24];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::CreateFromLayout((Dialog *)this);
  this[0x59] = (PVPCurrencyBar)0x0;
  std::string::string(asStack_70,"CBar_Widget_0");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_70);
  std::string::~string(asStack_70);
  nop();
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
             *(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x54));
  *(undefined4 *)(lVar2 + 0x4c) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0;
  std::string::string(asStack_70,"CBar_Metal_Text");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_70);
  *(UIWidgetText **)(this + 0x138) = pUVar3;
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"CBar_Coin_Text");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_70);
  *(UIWidgetText **)(this + 0x140) = pUVar3;
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"CBar_Gem_Text");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_70);
  *(UIWidgetText **)(this + 0x148) = pUVar3;
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"CBar_Gem_Back");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_70);
  std::string::~string(asStack_70);
  nop();
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x158))(plVar4,0);
  }
  psVar5 = (string *)&local_8;
  RefreshCurrency(this);
  this[0x6d] = (PVPCurrencyBar)0x0;
  std::string::string(asStack_58,"CBar_Widget_0");
  std::string::string(asStack_50,"CBar_Metal_Back");
  std::string::string(asStack_48,"CBar_Metal_Image");
  std::string::string(asStack_40,"CBar_Metal_Text");
  std::string::string(asStack_38,"CBar_Coin_Back");
  std::string::string(asStack_30,"CBar_Coin_Image");
  std::string::string(asStack_28,"CBar_Coin_Text");
  std::string::string(asStack_20,"CBar_Gem_Back");
  std::string::string(asStack_18,"CBar_Gem_Image");
  std::string::string(asStack_10,"CBar_Gem_Text");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_70,asStack_58,10,
             (__normal_iterator *)&local_78);
  do {
    psVar5 = psVar5 + -8;
    std::string::~string(psVar5);
  } while (psVar5 != asStack_58);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_70);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_70);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    lVar2 = UI::Dialog::GetWidget((Dialog *)this,psVar5);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x6d) = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPCurrencyBar::PVPCurrencyBar() */

void __thiscall PVPCurrencyBar::PVPCurrencyBar(PVPCurrencyBar *this)

{
  UI::Dialog::Dialog((Dialog *)this);
  *(undefined ***)this = &PTR_GetClass_0694a280;
  *(undefined **)(this + 0xd8) = &DAT_0694a5d0;
  InitView(this);
  return;
}

