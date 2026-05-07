// Class: UILimitGroupShowReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupShowReward::GetLayoutName() */

void __thiscall UILimitGroupShowReward::GetLayoutName(UILimitGroupShowReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitGroupBuyReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupShowReward::~UILimitGroupShowReward() */

void __thiscall UILimitGroupShowReward::~UILimitGroupShowReward(UILimitGroupShowReward *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066eed70;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066eea20;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Joust_Reward");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UISingletonDialog<UILimitGroupShowReward>::~UISingletonDialog
            ((UISingletonDialog<UILimitGroupShowReward> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitGroupShowReward::~UILimitGroupShowReward() */

void __thiscall UILimitGroupShowReward::~UILimitGroupShowReward(UILimitGroupShowReward *this)

{
  ~UILimitGroupShowReward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupShowReward::SetTitle(std::wstring) */

void __thiscall UILimitGroupShowReward::SetTitle(UILimitGroupShowReward *this,undefined8 param_2)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Head");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupShowReward::UILimitGroupShowReward() */

void __thiscall UILimitGroupShowReward::UILimitGroupShowReward(UILimitGroupShowReward *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UILimitGroupShowReward>::UISingletonDialog
            ((UISingletonDialog<UILimitGroupShowReward> *)this);
  *(undefined **)(this + 0xd8) = &DAT_066eed70;
  *(undefined ***)this = &PTR_GetClass_066eea20;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Joust_Reward");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UILimitGroupShowReward::ButtonDepress(int) */

void __thiscall UILimitGroupShowReward::ButtonDepress(UILimitGroupShowReward *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UILimitGroupShowReward>::CloseDialog();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to UILimitGroupShowReward::ButtonDepress(int) */

void __thiscall UILimitGroupShowReward::ButtonDepress(UILimitGroupShowReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILimitGroupShowReward::LoadData(int, int) */

void __thiscall
UILimitGroupShowReward::LoadData(UILimitGroupShowReward *this,int param_1,int param_2)

{
  undefined *puVar1;
  UIWidgetText *pUVar2;
  UIWidgetImage *this_00;
  char *__s;
  TGALogMgr *pTVar3;
  UIWidgetText *pUVar4;
  UIWidgetImage *this_01;
  wstring *__n;
  size_t __n_00;
  uint local_d4;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  wstring awStack_c0 [8];
  DropGroupNode aDStack_b8 [8];
  string asStack_b0 [8];
  undefined1 auStack_a8 [32];
  wstring awStack_88 [56];
  string asStack_50 [8];
  int local_48;
  int local_44;
  string asStack_28 [8];
  wstring awStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d4 = param_2;
  std::string::string((string *)&local_48,"UIText_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_48);
  std::string::~string((string *)&local_48);
  nop();
  __n = awStack_88;
  std::string::string((string *)&local_48,"UIImage_Center");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_48);
  std::string::~string((string *)&local_48);
  nop();
  if (param_1 == 0xbc0) {
    DropGroupNode::DropGroupNode(aDStack_b8);
    std::string::append((string *)aDStack_b8,"2019_ARBOR_DAY",(size_t)__n);
    std::string::append(asStack_b0,"GROUP_BUYING_RETURN",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4);
    FUN_05474278(auStack_a8,(string *)&local_48);
    std::string::~string((string *)&local_48);
    puVar1 = gMessageRouter;
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_48,(TGASecretStore *)aDStack_b8);
    __n_00 = 0x93e;
    MessageRouter::Post<int,TrackInfo_const&,bool,int,TrackInfo,bool>
              ((MessageRouter *)puVar1,Message::CommonBuryInterface,0x93e,(string *)&local_48,0);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_48);
    TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)awStack_88);
    std::string::append((string *)awStack_88,"4",__n_00);
    DString::DString((DString *)&local_48,local_d4);
    __s = (char *)DString::c_str((DString *)&local_48);
    std::string::append(asStack_50,__s,__n_00);
    DString::~DString((DString *)&local_48);
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogPurchaseData::TGALogPurchaseData
              ((TGALogPurchaseData *)&local_48,(TGALogPurchaseData *)awStack_88);
    TGALogMgr::LogGroupBuy(pTVar3,(string *)&local_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_48);
    std::string::string((string *)&local_48,"UIText_Head");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_48);
    std::string::~string((string *)&local_48);
    nop();
    TodStringTranslate(L"[GROUP_BUY_RETURN]");
    if (pUVar4 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar4,auStack_d0);
    }
    TodStringTranslate(L"[GEM_BUY_GEM]");
    Sexy::StrFormat(L"x%d",(string *)&local_48,(ulong)local_d4);
    std::operator+(awStack_c0,(wstring *)&local_48);
    FUN_05476c50((string *)&local_48);
    FUN_05476c50(awStack_c0);
    if (pUVar2 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar2,auStack_c8);
    }
    if (this_00 != (UIWidgetImage *)0x0) {
      std::string::string((string *)&local_48,"IMAGE_UI_GEMS_STACK_2");
      UIWidgetImage::SetImage(this_00,(string *)&local_48);
      std::string::~string((string *)&local_48);
      nop();
    }
    FUN_05476c50(auStack_c8);
    FUN_05476c50(auStack_d0);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)awStack_88);
    DropGroupNode::~DropGroupNode(aDStack_b8);
    goto LAB_039c9a88;
  }
  if (param_1 == 0xfad) {
    TodStringTranslate(L"[LOTTERY_GOLD]");
    Sexy::StrFormat(L"x%d",(string *)&local_48,(ulong)local_d4);
    std::operator+(awStack_88,(wstring *)&local_48);
    FUN_05476c50((string *)&local_48);
    FUN_05476c50(awStack_88);
    if (pUVar2 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar2,aDStack_b8);
    }
    if (this_00 != (UIWidgetImage *)0x0) {
      std::string::string((string *)&local_48,"IMAGE_UI_LIMITGROUPBUY_COINS");
      UIWidgetImage::SetImage(this_00,(string *)&local_48);
      std::string::~string((string *)&local_48);
      nop();
    }
    FUN_05476c50(aDStack_b8);
    goto LAB_039c9a88;
  }
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_48 != 0) {
    FUN_05476574(auStack_c8);
    if (local_44 == 4) {
LAB_039c9ef4:
      thunk_FUN_05477b9c(auStack_c8,awStack_20);
    }
    else if (local_44 < 5) {
      if (local_44 == 1) {
        FUN_05478178(awStack_c0,L"[GROUP_BUY_PLANT_LEVEL]",auStack_d0);
        TodReplaceNumberString(awStack_c0,L"{NUMBER}",local_d4);
        std::operator+((wstring *)aDStack_b8,awStack_20);
        FUN_054766c8(auStack_c8,awStack_88);
        FUN_05476c50(awStack_88);
        FUN_05476c50((wstring *)aDStack_b8);
        FUN_05476c50(awStack_c0);
        nop();
      }
      else if (local_44 == 2) {
        std::string::string((string *)awStack_88,"UIImage_Outer");
        this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_88);
        std::string::~string((string *)awStack_88);
        nop();
        if (this_01 != (UIWidgetImage *)0x0) {
          std::string::string((string *)awStack_88,"IMAGE_UI_FRAGMENT_PIECES_PACKETS_RARE_0");
          UIWidgetImage::SetImage(this_01,(string *)awStack_88);
          std::string::~string((string *)awStack_88);
          nop();
        }
LAB_039c9df4:
        Sexy::StrFormat(L"x%d",aDStack_b8,(ulong)local_d4);
        std::operator+(awStack_20,(wstring *)aDStack_b8);
        FUN_054766c8(auStack_c8,awStack_88);
        FUN_05476c50(awStack_88);
        FUN_05476c50((wstring *)aDStack_b8);
      }
    }
    else {
      if (local_44 == 0x1000) goto LAB_039c9ef4;
      if ((local_44 == 0x2000) || (local_44 == 8)) goto LAB_039c9df4;
    }
    if (pUVar2 != (UIWidgetText *)0x0) {
      PuzzleTip::SetTip(pUVar2,auStack_c8);
    }
    UIWidgetImage::SetImage(this_00,asStack_28);
    FUN_05476c50(auStack_c8);
  }
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_48);
LAB_039c9a88:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

