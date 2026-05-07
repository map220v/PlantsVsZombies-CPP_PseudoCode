// Class: PVZ2UIUnlockPreview


/* PVZ2UIUnlockPreview::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIUnlockPreview::Draw(PVZ2UIUnlockPreview *this,Graphics *param_1)

{
  long lVar1;
  
  lVar1 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0x1c0))(this,param_1);
    return;
  }
  Sexy::Widget::DeferOverlay((Widget *)this,3);
  (**(code **)(*(long *)this + 0x1c0))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::~PVZ2UIUnlockPreview() */

void __thiscall PVZ2UIUnlockPreview::~PVZ2UIUnlockPreview(PVZ2UIUnlockPreview *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_0690e960;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0690e630;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_WorldPreview");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  FUN_05476c50(this + 0x128);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  std::string::~string((string *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIUnlockPreview::~PVZ2UIUnlockPreview() */

void __thiscall PVZ2UIUnlockPreview::~PVZ2UIUnlockPreview(PVZ2UIUnlockPreview *this)

{
  ~PVZ2UIUnlockPreview(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::BypassStarGateButtonPressed() */

void __thiscall PVZ2UIUnlockPreview::BypassStarGateButtonPressed(PVZ2UIUnlockPreview *this)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIUnlockPreview *pPVar4;
  size_t in_x2;
  char *__s;
  char *__s_00;
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0xe0);
  __s = "pirate";
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  Set8BytesTo0(asStack_10);
  bVar2 = std::operator==(psVar1,"pirate");
  if (bVar2) {
    std::string::append(asStack_10,"egypt",in_x2);
  }
  else {
    bVar2 = std::operator==(psVar1,"cowboy");
    if (bVar2) {
LAB_04911708:
      std::string::append(asStack_10,__s,in_x2);
      iVar3 = PlayerInfo::GetNumGems(this_01,true);
      goto joined_r0x04911724;
    }
    __s = "kongfu";
    bVar2 = std::operator==(psVar1,"kongfu");
    if (bVar2) {
LAB_0491181c:
      std::string::append(asStack_10,"cowboy",in_x2);
    }
    else {
      __s_00 = "future";
      bVar2 = std::operator==(psVar1,"future");
      if (bVar2) goto LAB_04911708;
      __s = "dark";
      bVar2 = std::operator==(psVar1,"dark");
      if (!bVar2) {
        __s_00 = "beach";
        bVar2 = std::operator==(psVar1,"beach");
        if (bVar2) goto LAB_04911708;
        __s = "iceage";
        bVar2 = std::operator==(psVar1,"iceage");
        if (!bVar2) {
          __s_00 = "skycity";
          bVar2 = std::operator==(psVar1,"skycity");
          if (bVar2) goto LAB_04911708;
          bVar2 = std::operator==(psVar1,"lostcity");
          if (!bVar2) goto LAB_0491181c;
        }
      }
      std::string::append(asStack_10,__s_00,in_x2);
    }
  }
  iVar3 = PlayerInfo::GetNumGems(this_01,true);
joined_r0x04911724:
  if (iVar3 < 0x3a) {
    LawnApp::KillWorldUnlock(gLawnApp);
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    bVar2 = std::operator==(psVar1,"kongfu_last");
    iVar3 = 0;
    if (bVar2) {
      iVar3 = 0x9c8;
    }
    pPVar4 = ::operator_new(0x28);
    ICloudRequestCallbackFunction<PVZ2UIUnlockPreview,bool>::ICloudRequestCallbackFunction
              (pPVar4,(_func_void_bool_ptr *)this);
    PlayerInfo::SubtractGems(this_01,1,iVar3,(ICloudRequestCallbackFunctionBase *)pPVar4,1,false);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::PVZ2UIUnlockPreview() */

void __thiscall PVZ2UIUnlockPreview::PVZ2UIUnlockPreview(PVZ2UIUnlockPreview *this)

{
  int iVar1;
  LawnApp *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PrimeText *this_01;
  PVZ2UIButton *this_02;
  SalesProgressBar *pSVar8;
  LotteryResultProgressBar *this_03;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0690e630;
  *(undefined **)(this + 0xd8) = &DAT_0690e960;
  Set8BytesTo0(this + 0xe0);
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  FUN_05476574(this + 0x128);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  Set8BytesTo0(this + 0x160);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  *(undefined8 *)(this + 0x150) = 0;
  this[0x131] = (PVZ2UIUnlockPreview)0x0;
  this[0x132] = (PVZ2UIUnlockPreview)0x0;
  *(undefined4 *)(this + 0x134) = 0x3a;
  this_00 = gLawnApp;
  std::string::string(asStack_18,"UI_WorldPreview");
  LawnApp::LoadGroup(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
  iVar2 = FUN_049113a4(800);
  iVar1 = *(int *)(this + 0x50);
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)asStack_18,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,-1,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)asStack_18);
  *(PVZ2UIButton **)(this + 0x148) = this_02;
  FUN_05476c50(awStack_20);
  nop();
  plVar9 = *(long **)(this + 0x148);
  pcVar10 = *(code **)(*plVar9 + 0x198);
  iVar3 = FUN_049113a4(0x2c6);
  iVar4 = FUN_049113a4(0x36);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2b0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  this_03 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2b0);
  uVar6 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2b0);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar10)(plVar9,iVar3 + (int)((float)(iVar1 - iVar2) * 0.5),iVar4 - iVar5,uVar6,uVar7);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x148));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::SetupForWorldNamed(std::string const&) */

void __thiscall PVZ2UIUnlockPreview::SetupForWorldNamed(PVZ2UIUnlockPreview *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  SalesProgressBar *pSVar8;
  undefined8 uVar9;
  ProfileMgr *this_00;
  string *psVar10;
  long lVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  uint uVar12;
  string *extraout_x1;
  string *extraout_x1_00;
  size_t __n;
  long *plVar13;
  code *pcVar14;
  int iVar15;
  string asStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00();
  Set8BytesTo0(asStack_30);
  bVar1 = std::operator==(param_1,"pirate");
  uVar12 = 0x26;
  if (!bVar1) {
    uVar12 = 0x3a;
  }
  __n = (size_t)uVar12;
  *(uint *)(this + 0x134) = uVar12;
  bVar1 = std::operator==(param_1,"pirate");
  if (bVar1) {
    this[0x132] = (PVZ2UIUnlockPreview)0x1;
    *(undefined **)(this + 0x150) = &DAT_06b6f350;
    std::string::append(asStack_30,"egypt",__n);
  }
  else {
    bVar1 = std::operator==(param_1,"cowboy");
    if (bVar1) {
      *(undefined **)(this + 0x150) = &DAT_06b6f260;
      std::string::append(asStack_30,"pirate",0x6b6f260);
    }
    else {
      bVar1 = std::operator==(param_1,"kongfu");
      if (bVar1) {
        *(undefined **)(this + 0x150) = &DAT_06b6f558;
        std::string::append(asStack_30,"cowboy",0x6b6f558);
      }
      else {
        bVar1 = std::operator==(param_1,"kongfu_last");
        if (bVar1) {
          *(undefined **)(this + 0x150) = &DAT_06b6f530;
          std::string::append(asStack_30,"cowboy",0x6b6f530);
        }
        else {
          bVar1 = std::operator==(param_1,"future");
          if (!bVar1) {
            bVar1 = std::operator==(param_1,"dark");
            if (bVar1) {
              *(undefined **)(this + 0x150) = &DAT_06b6f488;
              std::string::append(asStack_30,"future",0x6b6f488);
              goto LAB_04911b44;
            }
            bVar1 = std::operator==(param_1,"beach");
            if (bVar1) {
              *(undefined **)(this + 0x150) = &DAT_06b6f5b0;
              std::string::append(asStack_30,"dark",0x6b6f5b0);
              goto LAB_04911b44;
            }
            bVar1 = std::operator==(param_1,"iceage");
            if (bVar1) {
              *(undefined **)(this + 0x150) = &DAT_06b6f300;
              std::string::append(asStack_30,"beach",0x6b6f300);
              goto LAB_04911b44;
            }
            bVar1 = std::operator==(param_1,"skycity");
            if (bVar1) {
              *(undefined **)(this + 0x150) = &DAT_06b6f4b0;
              std::string::append(asStack_30,"iceage",0x6b6f4b0);
              goto LAB_04911b44;
            }
            bVar1 = std::operator==(param_1,"lostcity");
            if (bVar1) {
              *(undefined **)(this + 0x150) = &DAT_06b6f238;
              std::string::append(asStack_30,"skycity",0x6b6f238);
              goto LAB_04911b44;
            }
          }
          *(undefined **)(this + 0x150) = &DAT_06b6f288;
          std::string::append(asStack_30,"kongfu",0x6b6f288);
        }
      }
    }
  }
LAB_04911b44:
  iVar2 = FUN_049113a4(800);
  iVar15 = (int)((float)(*(int *)(this + 0x50) - iVar2) * 0.5);
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)aSStack_18,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)aSStack_18);
  *(PVZ2UIButton **)(this + 0x138) = pPVar7;
  FUN_05476c50(awStack_20);
  nop();
  plVar13 = *(long **)(this + 0x138);
  pcVar14 = *(code **)(*plVar13 + 0x198);
  iVar2 = FUN_049113a4(0x29e);
  uVar3 = FUN_049113a4(0x19d);
  uVar4 = FUN_049113a4(100);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f580);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar14)(plVar13,iVar2 + iVar15,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color((Color *)aSStack_18,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,1,(ButtonListener *)(this + 0xd8),awStack_20,(Color *)aSStack_18);
  *(PVZ2UIButton **)(this + 0x140) = pPVar7;
  FUN_05476c50(awStack_20);
  nop();
  plVar13 = *(long **)(this + 0x140);
  pcVar14 = *(code **)(*plVar13 + 0x198);
  iVar2 = FUN_049113a4(0x29e);
  uVar3 = FUN_049113a4(0x1f6);
  uVar4 = FUN_049113a4(100);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f580);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar8);
  (*pcVar14)(plVar13,iVar2 + iVar15,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  this[0x130] = (PVZ2UIUnlockPreview)0x1;
  Sexy::StringToUpper((Sexy *)(this + 0xe0),extraout_x1);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1_00);
  std::string::~string((string *)aSStack_18);
  uVar9 = FUN_054766ec(auStack_28);
  Sexy::StrFormat(L"[%ls]",awStack_20,uVar9);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0xe8,aSStack_18);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(awStack_20);
  uVar9 = FUN_054766ec(auStack_28);
  Sexy::StrFormat(L"[WORLD_PREVIEW_DESCRIPTION_%ls]",awStack_20,uVar9);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0xf0,aSStack_18);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(awStack_20);
  uVar9 = FUN_054766ec(auStack_28);
  Sexy::StrFormat(L"[WORLD_PREVIEW_TEASER_HEADER_%ls]",awStack_20,uVar9);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0xf8,aSStack_18);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(awStack_20);
  uVar9 = FUN_054766ec(auStack_28);
  Sexy::StrFormat(L"[WORLD_PREVIEW_TEASER_%ls]",awStack_20,uVar9);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0x100,aSStack_18);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(awStack_20);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar10 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string((string *)aSStack_18,"kongfu");
  bVar1 = SUB81(aSStack_18,0);
  iVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar10,bVar1);
  std::string::~string((string *)aSStack_18);
  nop();
  std::string::string((string *)aSStack_18,"kongfu");
  iVar6 = PlayerInfo::GetStarsCompletedInWorld(psVar10,bVar1);
  std::string::~string((string *)aSStack_18);
  nop();
  if (iVar6 < 0x29) {
    TodStringTranslate(L"[WORLD_PREVIEW_STAR_UNLOCK_MSG]");
    FUN_054766c8(this + 0x118,aSStack_18);
    FUN_05476c50(aSStack_18);
    TodStringTranslate(L"[WORLD_PREVIEW_BUY_NOW_MSG]");
    FUN_054766c8(this + 0x120,aSStack_18);
    FUN_05476c50(aSStack_18);
    Sexy::StrFormat(L"%d",aSStack_18,0x3a);
    FUN_054766c8(this + 0x108,aSStack_18);
    FUN_05476c50(aSStack_18);
    Sexy::StrFormat(L"%u",aSStack_18,(ulong)(0x29 - iVar2));
    FUN_054766c8(this + 0x110,aSStack_18);
    FUN_05476c50(aSStack_18);
    lVar11 = *(long *)(this + 0x140);
    TodStringTranslate(L"[WORLD_PREVIEW_BUY_NOW]");
    FUN_054766c8(lVar11 + 0xd8,aSStack_18);
    FUN_05476c50(aSStack_18);
    plVar13 = *(long **)(this + 0x140);
    pcVar14 = *(code **)(*plVar13 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    (*pcVar14)(plVar13,uVar9);
    lVar11 = *(long *)(this + 0x138);
    TodStringTranslate(L"[WORLD_PREVIEW_STAR_UNLOCK]");
    FUN_054766c8(lVar11 + 0xd8,aSStack_18);
    FUN_05476c50(aSStack_18);
    plVar13 = *(long **)(this + 0x138);
    pcVar14 = *(code **)(*plVar13 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    (*pcVar14)(plVar13,uVar9);
  }
  else {
    plVar13 = *(long **)(this + 0x140);
    iVar2 = FUN_049113a4(0x236);
    uVar3 = FUN_049113a4(0x1c2);
    uVar4 = FUN_049113a4(0xa0);
    uVar5 = FUN_049113a4(0x50);
    (**(code **)(*plVar13 + 0x198))(plVar13,iVar2 + iVar15,uVar3,uVar4,uVar5);
    lVar11 = *(long *)(this + 0x140);
    TodStringTranslate(L"[WORLD_PREVIEW_BUY_NOW]");
    FUN_054766c8(lVar11 + 0xd8,aSStack_18);
    FUN_05476c50(aSStack_18);
    plVar13 = *(long **)(this + 0x140);
    pcVar14 = *(code **)(*plVar13 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
    (*pcVar14)(plVar13,uVar9);
    (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  }
  uVar9 = FUN_054766ec(auStack_28);
  Sexy::StrFormat(L"[WORLD_PREVIEW_LOCKED_%ls]",awStack_20,uVar9);
  TodStringTranslate(awStack_20);
  FUN_054766c8(this + 0x128,aSStack_18);
  FUN_05476c50(aSStack_18);
  FUN_05476c50(awStack_20);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_01);
  std::string::string((string *)awStack_20,"Main");
  std::string::string((string *)aSStack_18,"WorldPreview");
  PurchaseBroker::StartNewCartInstance(this_02,(string *)awStack_20,(string *)aSStack_18,param_1);
  std::string::~string((string *)aSStack_18);
  nop();
  std::string::~string((string *)awStack_20);
  nop();
  FUN_05476c50(auStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::DrawOverlay(Sexy::Graphics*) */

void __thiscall PVZ2UIUnlockPreview::DrawOverlay(PVZ2UIUnlockPreview *this,Graphics *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  long lVar9;
  undefined8 uVar10;
  SalesProgressBar *pSVar11;
  LotteryResultProgressBar *pLVar12;
  Image *pIVar13;
  CachedUIResourcePtr<Sexy::Image> *pCVar14;
  PrimeTypeface *pPVar15;
  PrimeText_PotentialTypeface *this_01;
  undefined4 uVar16;
  float fVar17;
  GraphicsAutoState aGStack_b8 [8];
  undefined1 auStack_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  Insets aIStack_88 [16];
  Insets aIStack_78 [16];
  int local_68 [2];
  int local_60;
  Insets aIStack_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  Insets aIStack_28 [4];
  int local_24;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar9 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar9 != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_b8,param_1);
    Sexy::Graphics::ClearClipRect(param_1);
    Sexy::Insets::Insets(aIStack_18,0,0,0,0x96);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar3 = FUN_049113a4(800);
    iVar4 = FUN_049113a4(0x640);
    Sexy::Graphics::FillRect(param_1,-iVar3,0,iVar4 + *(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar4 = FUN_049113a4(800);
    iVar5 = FUN_049113a4(4);
    iVar3 = *(int *)(this + 0x50);
    iVar6 = FUN_049113a4(0x36);
    iVar7 = FUN_049113a4(8);
    iVar8 = FUN_049113a4(0x3a);
    Sexy::Insets::Insets
              ((Insets *)&local_a8,iVar5 + (int)((float)(iVar3 - iVar4) * 0.5),iVar6,iVar4 - iVar7,
               *(int *)(this + 0x54) - iVar8);
    iVar3 = local_a8;
    iVar4 = FUN_049113a4(0xc);
    iVar5 = FUN_049113a4(0x18);
    Sexy::Insets::Insets
              ((Insets *)&local_98,iVar3 + iVar4,iVar4 + local_a4,local_a0 - iVar5,local_9c - iVar5)
    ;
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_98);
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f600);
    DrawImageTiled(0x3f800000,param_1,aIStack_18,uVar10);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&local_a8);
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f638);
    Draw9SliceImage(param_1,aIStack_18,uVar10);
    iVar4 = FUN_049113a4(0x1d3);
    pSVar11 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        (*(CachedUIResourcePtr<Sexy::Image> **)(this + 0x150));
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        (*(CachedUIResourcePtr<Sexy::Image> **)(this + 0x150));
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar3 = 0;
    if (iVar6 != 0) {
      iVar3 = (iVar5 * iVar4) / iVar6;
    }
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 (*(CachedUIResourcePtr<Sexy::Image> **)(this + 0x150));
    iVar5 = local_a8;
    iVar6 = FUN_049113a4(0x1a);
    iVar7 = FUN_049113a4(0xaf);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar5 + iVar6,iVar7,iVar4,iVar3);
    iVar4 = local_94;
    iVar3 = local_98;
    iVar6 = FUN_049113a4(4);
    iVar5 = local_90;
    iVar7 = FUN_049113a4(0x31);
    Sexy::Insets::Insets(aIStack_88,iVar3,iVar4 + iVar6,iVar5,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
    WriteWordInRect(param_1,this + 0xe8,aIStack_88,uVar10,aIStack_18,5,0);
    uVar16 = 0x46;
    uVar1 = 0x8c;
    if (this[0x132] != (PVZ2UIUnlockPreview)0x0) {
      uVar16 = 0x23;
      uVar1 = 0x46;
    }
    iVar3 = FUN_049113a4(uVar16);
    iVar4 = FUN_049113a4(0x32);
    iVar5 = FUN_049113a4(uVar1);
    iVar6 = FUN_049113a4(0x56);
    Sexy::Insets::Insets(aIStack_78,local_98 + iVar3,local_94 + iVar4,local_90 - iVar5,iVar6);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xf0,aIStack_78,uVar10,aIStack_18,2,0);
    iVar3 = local_a8;
    iVar4 = FUN_049113a4(0x1f8);
    iVar5 = FUN_049113a4(0xc6);
    iVar6 = FUN_049113a4(0x10e);
    iVar7 = FUN_049113a4(0xb4);
    Sexy::Insets::Insets((Insets *)local_68,iVar3 + iVar4,iVar5,iVar6,iVar7);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f408);
    Sexy::Graphics::DrawImageBox(param_1,(TRect *)local_68,pIVar13);
    iVar3 = FUN_049113a4(0x1e);
    iVar4 = FUN_049113a4(0xf0);
    iVar5 = FUN_049113a4(0xa0);
    Sexy::Insets::Insets(aIStack_58,local_68[0] + iVar3,iVar4,local_60,iVar5);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Teaser_Brown);
    WriteWordInRect(param_1,this + 0x100,aIStack_58,uVar10,aIStack_18,0,0);
    iVar3 = FUN_049113a4(0x1f8);
    iVar4 = FUN_049113a4(0x189);
    iVar5 = FUN_049113a4(0x10e);
    iVar6 = FUN_049113a4(0xb4);
    Sexy::Insets::Insets((Insets *)&local_48,local_a8 + iVar3,iVar4,iVar5,iVar6);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f408);
    Sexy::Graphics::DrawImageBox(param_1,(TRect *)&local_48,pIVar13);
    if (*(char *)(*(long *)(this + 0x138) + 0x6c) == '\0') {
      lVar9 = *(long *)(this + 0x140);
      Sexy::Insets::Insets
                (aIStack_28,*(int *)(lVar9 + 0x48),*(int *)(lVar9 + 0x4c),*(int *)(lVar9 + 0x50),
                 *(int *)(lVar9 + 0x54));
      cVar2 = (**(code **)(**(long **)(this + 0x140) + 0x330))(*(long **)(this + 0x140));
      if (cVar2 == '\0') {
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f670;
      }
      else {
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2d8;
      }
      uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
      Draw3SliceImage(param_1,aIStack_18,uVar10);
      lVar9 = *(long *)(this + 0x140);
      this_01 = PrimeText_Game::Typeface_FZShaoEr_32;
    }
    else {
      Sexy::Insets::Insets(aIStack_18,0,0,0,0x96);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      iVar3 = local_48;
      iVar5 = FUN_049113a4(0x1e2);
      iVar4 = local_40;
      iVar6 = FUN_049113a4(2);
      Sexy::Graphics::FillRect(param_1,iVar3,iVar5,iVar4,iVar6);
      Sexy::Color::Color((Color *)aIStack_18,1);
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      lVar9 = *(long *)(this + 0x138);
      Sexy::Insets::Insets
                (aIStack_38,*(int *)(lVar9 + 0x48),*(int *)(lVar9 + 0x4c),*(int *)(lVar9 + 0x50),
                 *(int *)(lVar9 + 0x54));
      lVar9 = *(long *)(this + 0x140);
      Sexy::Insets::Insets
                (aIStack_28,*(int *)(lVar9 + 0x48),*(int *)(lVar9 + 0x4c),*(int *)(lVar9 + 0x50),
                 *(int *)(lVar9 + 0x54));
      cVar2 = (**(code **)(**(long **)(this + 0x138) + 0x330))(*(long **)(this + 0x138));
      if (cVar2 == '\0') {
        Sexy::Insets::Insets(aIStack_18,aIStack_38);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f580;
      }
      else {
        Sexy::Insets::Insets(aIStack_18,aIStack_38);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f458;
      }
      uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
      Draw3SliceImage(param_1,aIStack_18,uVar10);
      cVar2 = (**(code **)(**(long **)(this + 0x140) + 0x330))(*(long **)(this + 0x140));
      if (cVar2 == '\0') {
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f670;
      }
      else {
        Sexy::Insets::Insets(aIStack_18,aIStack_28);
        pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2d8;
      }
      uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
      Draw3SliceImage(param_1,aIStack_18,uVar10);
      pPVar15 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      FUN_05477b24(aIStack_18,this + 0x118);
      Sexy::PrimeTypeface::SizeString_Line(pPVar15,aIStack_18);
      FUN_05476c50(aIStack_18);
      iVar4 = local_48;
      iVar6 = FUN_049113a4(0x13);
      pSVar11 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
      iVar3 = FUN_049113a4(3);
      iVar3 = local_44 + (local_3c / 2 - iVar5) / 2 + iVar3;
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      pSVar11 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
      Sexy::Graphics::DrawImage(param_1,pIVar13,iVar4 + iVar6,iVar3,iVar5,iVar7);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar8 = FUN_049113a4(0x1d);
      iVar5 = *(int *)(*(long *)(this + 0x138) + 0x48);
      iVar4 = iVar4 + iVar6 + (iVar7 - iVar8);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      pSVar11 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f4e0);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
      iVar7 = FUN_049113a4(2);
      FUN_05477b24(auStack_b0,this + 0x110);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar4,(float)(iVar3 + iVar6 / 2 + iVar7),
                 (float)(iVar5 - iVar4),uVar10,param_1,auStack_b0,0,aIStack_18,0);
      FUN_05476c50(auStack_b0);
      lVar9 = *(long *)(this + 0x138);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,lVar9 + 0xd8,aIStack_38,uVar10,aIStack_18,5,0);
      pPVar15 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      FUN_05477b24(aIStack_18,this + 0x120);
      iVar5 = Sexy::PrimeTypeface::SizeString_Line(pPVar15,aIStack_18);
      FUN_05476c50(aIStack_18);
      iVar3 = local_48;
      iVar4 = FUN_049113a4(0x11);
      iVar3 = iVar3 + iVar4;
      iVar4 = *(int *)(*(long *)(this + 0x140) + 0x48);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      iVar6 = FUN_049113a4(0x200);
      FUN_05477b24(auStack_b0,this + 0x120);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar3,(float)iVar6,(float)(iVar4 - iVar3),uVar10,param_1,
                 auStack_b0,0,aIStack_18,0);
      FUN_05476c50(auStack_b0);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f508);
      pSVar11 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f508);
      iVar4 = SalesProgressBar::GetCurrentLevel(pSVar11);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f508);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      pSVar11 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f508);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
      Sexy::Graphics::DrawImage
                (param_1,pIVar13,iVar3 + iVar5,local_24 + (local_1c - iVar4) / 2,iVar6,iVar7);
      pLVar12 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f508);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
      iVar6 = FUN_049113a4(2);
      iVar3 = iVar3 + iVar5 + iVar4 + iVar6;
      iVar4 = *(int *)(*(long *)(this + 0x140) + 0x48);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
      iVar6 = FUN_049113a4(0xe);
      iVar5 = *(int *)(*(long *)(this + 0x140) + 0x4c);
      FUN_05477b24(auStack_b0,this + 0x108);
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
      Sexy::PrimeTypeface::DrawString_Line
                ((PrimeTypeface *)(float)iVar3,(float)(iVar6 + iVar5),(float)(iVar4 - iVar3),uVar10,
                 param_1,auStack_b0,0,aIStack_18,0);
      FUN_05476c50(auStack_b0);
      lVar9 = *(long *)(this + 0x140);
      this_01 = PrimeText_Game::Typeface_FZCuYuan_20;
    }
    uVar10 = PrimeText_PotentialTypeface::Typeface(this_01);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,lVar9 + 0xd8,aIStack_28,uVar10,aIStack_18,5,0);
    if (this[0x130] == (PVZ2UIUnlockPreview)0x0) {
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f698);
      Sexy::Graphics::DrawImageBox(param_1,(TRect *)&local_48,pIVar13);
      pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f378);
      iVar3 = local_40;
      fVar17 = (float)local_48;
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f378);
      iVar4 = FUN_049113a4(0x193);
      Sexy::Graphics::DrawImage
                (param_1,pIVar13,(int)(fVar17 + (float)(iVar3 - *(int *)(lVar9 + 0x38)) * 0.5),iVar4
                );
      iVar3 = FUN_049113a4(0x215);
      iVar4 = FUN_049113a4(0x23);
      Sexy::Insets::Insets(aIStack_28,local_48,iVar3,local_40,iVar4);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar10,aIStack_18,2,0);
    }
    lVar9 = *(long *)(this + 0x148);
    Sexy::Insets::Insets
              (aIStack_28,*(int *)(lVar9 + 0x48),*(int *)(lVar9 + 0x4c),*(int *)(lVar9 + 0x50),
               *(int *)(lVar9 + 0x54));
    cVar2 = (**(code **)(**(long **)(this + 0x148) + 0x330))(*(long **)(this + 0x148));
    if (cVar2 == '\0') {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f2b0;
    }
    else {
      Sexy::Insets::Insets(aIStack_18,aIStack_28);
      pCVar14 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b6f210;
    }
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->(pCVar14);
    Draw3SliceImage(param_1,aIStack_18,uVar10);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_b8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIUnlockPreview::OnServerGemCallBack(bool const&) */

void __thiscall PVZ2UIUnlockPreview::OnServerGemCallBack(PVZ2UIUnlockPreview *this,bool *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  int *piVar2;
  GroupInfo *this_02;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  local_10[0] = NewPVPMgr::GetSeasonEndTime(this_01);
  piVar2 = eastl::min_alt<int>((int *)&DAT_05754c18,(int *)local_10);
  iVar1 = *piVar2;
  if (*param_1 == false) {
    LawnApp::KillWorldUnlock(gLawnApp);
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    std::string::string((string *)local_10,"kongfu_rest_unlock");
    this_02 = ::operator_new(0x10);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(this_02,(string *)local_10,1,0x3a);
    std::string::~string((string *)local_10);
    nop();
    MessageRouter::Post<EventMetrics*,int,EventMetrics*,int>
              ((MessageRouter *)gMessageRouter,Message::EventPurchase,(EventMetrics *)this_02,iVar1)
    ;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)this_02);
    AK::FreeHook(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIUnlockPreview::ButtonPress(int) */

void __thiscall PVZ2UIUnlockPreview::ButtonPress(PVZ2UIUnlockPreview *this,int param_1)

{
  char *pcVar1;
  
  if (-2 < param_1) {
    if (param_1 < 1) {
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Press");
      return;
    }
    if (param_1 == 1) {
      if (*(char *)(*(long *)(this + 0x138) + 0x6c) == '\0') {
        pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar1,"Play_UI_Map_Stargate_Buy_WithStars_Press");
        return;
      }
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Buy_Gate_Press");
      return;
    }
  }
  return;
}


/* non-virtual thunk to PVZ2UIUnlockPreview::ButtonPress(int) */

void __thiscall PVZ2UIUnlockPreview::ButtonPress(PVZ2UIUnlockPreview *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* PVZ2UIUnlockPreview::ButtonDepress(int) */

void __thiscall PVZ2UIUnlockPreview::ButtonDepress(PVZ2UIUnlockPreview *this,int param_1)

{
  char *pcVar1;
  
  if (-2 < param_1) {
    if (param_1 < 1) {
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Button_X_Close_Release");
      LawnApp::KillWorldUnlock(gLawnApp);
      return;
    }
    if (param_1 == 1) {
      if (*(char *)(*(long *)(this + 0x138) + 0x6c) == '\0') {
        pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar1,"Play_UI_Map_Stargate_Buy_WithStars_Release");
        nop();
        return;
      }
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Buy_Gate_Release");
      BypassStarGateButtonPressed(this);
      return;
    }
  }
  return;
}


/* non-virtual thunk to PVZ2UIUnlockPreview::ButtonDepress(int) */

void __thiscall PVZ2UIUnlockPreview::ButtonDepress(PVZ2UIUnlockPreview *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

