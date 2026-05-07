// Class: GachaItemDisplayer


/* GachaItemDisplayer::~GachaItemDisplayer() */

void __thiscall GachaItemDisplayer::~GachaItemDisplayer(GachaItemDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_0677f490;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677f7b8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GachaItemDisplayer::~GachaItemDisplayer() */

void __thiscall GachaItemDisplayer::~GachaItemDisplayer(GachaItemDisplayer *this)

{
  ~GachaItemDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItemDisplayer::Draw(Sexy::Graphics*) */

void __thiscall GachaItemDisplayer::Draw(GachaItemDisplayer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PrimeTypeface *this_00;
  float fVar7;
  int local_48 [2];
  int local_40;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03def260(4);
  iVar2 = FUN_03def260(8);
  Sexy::Insets::Insets
            ((Insets *)local_48,iVar1,0,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,(Insets *)local_48);
  Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  iVar1 = local_48[0];
  iVar3 = FUN_03def260(10);
  fVar7 = (float)FUN_03def274(0x41700000);
  iVar2 = local_40;
  iVar4 = FUN_03def260(0x14);
  Sexy::Insets::Insets(aIStack_38,iVar1 + iVar3,(int)fVar7,iVar2 - iVar4,*(int *)(this + 0x128));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x118,aIStack_38,uVar6,aIStack_18,5,1);
  iVar2 = FUN_03def260(0xc2);
  iVar1 = *(int *)(this + 0x128);
  iVar3 = FUN_03def260(0x23);
  iVar4 = FUN_03def260(10);
  iVar5 = FUN_03def260(0x14);
  this_00 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  fVar7 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
  Sexy::Insets::Insets
            (aIStack_28,local_48[0] + iVar4,iVar2 + iVar1 + iVar3,local_40 - iVar5,
             (int)(fVar7 * 4.0));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,this + 0x120,aIStack_28,uVar6,aIStack_18,*(undefined4 *)(this + 0x134),1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItemDisplayer::Resize(int, int, int, int) */

void __thiscall
GachaItemDisplayer::Resize(GachaItemDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ProfileMgr *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar3 = FUN_03def260(0xe);
  iVar4 = FUN_03def260(0x1e);
  iVar1 = *(int *)(this + 0x128);
  iVar5 = FUN_03def260(0x1c);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_03def260(0xbe);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4 + iVar1,iVar2 - iVar5,iVar6);
  plVar7 = *(long **)(this + 0x140);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1a0))(plVar7,aIStack_18);
  }
  plVar7 = *(long **)(this + 0xe0);
  if (plVar7 != (long *)0x0) {
    iVar1 = *(int *)(this + 0x138);
    iVar3 = FUN_03def260(0xf);
    iVar2 = *(int *)(this + 0x54);
    iVar4 = FUN_03def260(0x28);
    iVar5 = FUN_03def260(5);
    (**(code **)(*plVar7 + 0x198))
              (plVar7,(*(int *)(this + 0x50) - iVar1) / 2,(iVar2 - iVar3) - iVar4,iVar1,
               iVar4 + iVar5);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaItemDisplayer::OnNotifyTutorialResponse() */

void __thiscall GachaItemDisplayer::OnNotifyTutorialResponse(GachaItemDisplayer *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar1 = FUN_03def108(*(undefined4 *)(lVar2 + 0x44));
  if (iVar1 == 1) {
    if (*(int *)(this + 0x13c) != 0) {
      return;
    }
  }
  else {
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_03def108(*(undefined4 *)(lVar2 + 0x44));
    if (iVar1 == 2) {
      if (*(int *)(this + 0x13c) != 1) {
        return;
      }
    }
    else {
      lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar1 = FUN_03def108(*(undefined4 *)(lVar2 + 0x44));
      if (iVar1 == 3) {
        if (*(int *)(this + 0x13c) != 3) {
          return;
        }
      }
      else {
        lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar1 = FUN_03def108(*(undefined4 *)(lVar2 + 0x44));
        if (iVar1 != 4) {
          return;
        }
        if (*(int *)(this + 0x13c) != 2) {
          return;
        }
      }
    }
  }
  lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  FUN_03def100(lVar2 + 0x40,
               *(int *)(this + 0x48) + *(int *)(*(long *)(this + 0xe0) + 0x48) +
               *(int *)(*(long *)(this + 0xe0) + 0x50) / 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItemDisplayer::ButtonDepress(int) */

void __thiscall GachaItemDisplayer::ButtonDepress(GachaItemDisplayer *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  long lVar3;
  PVZ2UIDialog *pPVar4;
  GachaDisplayerDialog *this_02;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  if (param_1 == 0x65) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if ((cVar1 == '\0') &&
       (iVar2 = FUN_03def0fc(*(undefined4 *)(lVar3 + 0x40)), this_00 = gLawnApp, iVar2 != 0x17)) {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      LawnApp::ShowGachaDisplayerDialog(gLawnApp,*(undefined4 *)(this + 0x13c));
      this_02 = (GachaDisplayerDialog *)LawnApp::GetGachaDisplayerDialog(gLawnApp);
      if (this_02 != (GachaDisplayerDialog *)0x0) {
        GachaDisplayerDialog::ShowMask(this_02);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GachaItemDisplayer::ButtonDepress(int) */

void __thiscall GachaItemDisplayer::ButtonDepress(GachaItemDisplayer *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GachaItemDisplayer::getGachaImage(GachaType) */

undefined8 __thiscall GachaItemDisplayer::getGachaImage(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_NORMAL);
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_RARE);
    return uVar1;
  }
  if (param_2 == 2) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_LEGEND);
    return uVar1;
  }
  if (param_2 == 3) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_STORE_GACHA_EVENT_AVATAR);
    return uVar1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaItemDisplayer::GachaItemDisplayer(GachaType, Sexy::TRect<int> const&) */

void __thiscall
GachaItemDisplayer::GachaItemDisplayer(GachaItemDisplayer *this,int param_2,int *param_3)

{
  GachaItemDisplayer *pGVar1;
  GachaItemDisplayer *pGVar2;
  undefined *this_00;
  uint uVar3;
  undefined4 uVar4;
  GachaMgr *pGVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  PVZ2UIGameObjectCard *pPVar8;
  undefined8 uVar9;
  Widget *pWVar10;
  PVZ2UIButton *pPVar11;
  wchar_t *pwVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [8];
  string asStack_b0 [8];
  Delegate0 aDStack_a8 [48];
  wstring awStack_78 [56];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [56];
  long local_8;
  
  pGVar1 = this + 0x118;
  local_8 = ___stack_chk_guard;
  pGVar2 = this + 0x120;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_0677f490;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677f7b8;
  FUN_05476574(pGVar1);
  FUN_05476574(pGVar2);
  Sexy::Point::Point((Point *)(this + 300));
  *(int *)(this + 0x13c) = param_2;
  *(undefined4 *)(this + 0x134) = 2;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  std::string::string(asStack_b0,"");
  nop();
  *(undefined8 *)(this + 0x110) = 0;
  pGVar5 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar3 = GachaMgr::GetTargetGachaRewardCoin(pGVar5,param_2,0);
  pwVar12 = (wchar_t *)(ulong)uVar3;
  switch(param_2) {
  case 0:
    TodStringTranslate(L"[GACHA_ITEM_NORMAL_HEADER]");
    FUN_054766c8(pGVar1,a_Stack_40);
    FUN_05476c50(a_Stack_40);
    std::string::string((string *)a_Stack_40,"[GACHA_ITEM_NORMAL_DES]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)a_Stack_40,(string *)L"{NUMBER}",pwVar12,uVar3);
    FUN_054766c8(pGVar2,awStack_78);
    FUN_05476c50(awStack_78);
    std::string::~string((string *)a_Stack_40);
    nop();
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_BLUE);
    *(undefined8 *)(this + 0xf0) = uVar6;
    break;
  case 1:
    TodStringTranslate(L"[GACHA_ITEM_RARE_HEADER]");
    FUN_054766c8(pGVar1,a_Stack_40);
    FUN_05476c50(a_Stack_40);
    std::string::string((string *)a_Stack_40,"[GACHA_ITEM_RARE_DES]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)a_Stack_40,(string *)L"{NUMBER}",pwVar12,uVar3);
    FUN_054766c8(pGVar2,awStack_78);
    FUN_05476c50(awStack_78);
    std::string::~string((string *)a_Stack_40);
    nop();
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar6;
    break;
  case 2:
    TodStringTranslate(L"[GACHA_ITEM_LEGEND_HEADER]");
    FUN_054766c8(pGVar1,a_Stack_40);
    FUN_05476c50(a_Stack_40);
    std::string::string((string *)a_Stack_40,"[GACHA_ITEM_LEGEND_DES]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)a_Stack_40,(string *)L"{NUMBER}",pwVar12,uVar3);
    FUN_054766c8(pGVar2,awStack_78);
    FUN_05476c50(awStack_78);
    std::string::~string((string *)a_Stack_40);
    nop();
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_CARDS_STORE_STORE_COIN_CARD);
    *(undefined8 *)(this + 0xf0) = uVar6;
    break;
  case 3:
    TodStringTranslate(L"[GACHA_ITEM_AVATAR_HEADER]");
    FUN_054766c8(pGVar1,a_Stack_40);
    FUN_05476c50(a_Stack_40);
    std::string::string((string *)a_Stack_40,"[GACHA_ITEM_AVATAR_DES]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)a_Stack_40,(string *)L"{NUMBER}",pwVar12,uVar3);
    FUN_054766c8(pGVar2,awStack_78);
    FUN_05476c50(awStack_78);
    std::string::~string((string *)a_Stack_40);
    nop();
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar6;
  }
  uVar4 = FUN_03def260(0x46);
  *(undefined4 *)(this + 0x128) = uVar4;
  uVar4 = FUN_03def260(0x2c);
  *(undefined4 *)(this + 0x128) = uVar4;
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     GachaItemConfig::IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     GachaItemConfig::IMAGE_UI_GENERIC_LIGHT_BUTTON_GREEN_DOWN);
  uVar4 = FUN_03def260(0x78);
  *(undefined4 *)(this + 0x138) = uVar4;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  pPVar8 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar8,a_Stack_40,0,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0x140) = pPVar8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  pPVar8 = *(PVZ2UIGameObjectCard **)(this + 0x140);
  uVar9 = getGachaImage(this,param_2);
  Sexy::Insets::Insets((Insets *)a_Stack_40,0,0x2c,0x4d,0);
  PVZ2UIGameObjectCard::SetSpecificBackground(pPVar8,uVar9,a_Stack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x140));
  fVar13 = (float)FUN_03def284((float)param_3[2]);
  fVar14 = (float)FUN_03def284((float)param_3[3]);
  Sexy::Insets::Insets((Insets *)a_Stack_40,0,0,(int)fVar13,(int)fVar14);
  pWVar10 = (Widget *)UIGachaChest::create(param_2,(TRect *)a_Stack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar10);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_b8);
  Sexy::Color::Color((Color *)a_Stack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0x65,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)a_Stack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xe0);
  TodStringTranslate(L"[GACHA_ITEM_PREVIEW]");
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  PVZ2UIButton::AddText(pPVar11,a_Stack_40,uVar9,0);
  FUN_05476c50(a_Stack_40);
  pPVar11 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,uVar6,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)a_Stack_40,uVar7,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)a_Stack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  Resize(this,*param_3,param_3[1],param_3[2],param_3[3]);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyTutorialResponse);
  Sexy::Delegate0::Delegate0<GachaItemDisplayer,void(GachaItemDisplayer::*)()>
            (aDStack_a8,a_Stack_40);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyTutorialResponse,aDStack_a8);
  std::string::~string(asStack_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GachaItemDisplayer::Create(GachaType, Sexy::TRect<int> const&) */

GachaItemDisplayer * GachaItemDisplayer::Create(undefined4 param_1,undefined8 param_2)

{
  GachaItemDisplayer *pGVar1;
  
  pGVar1 = ::operator_new(0x148);
  GachaItemDisplayer(pGVar1,param_1,param_2);
  return pGVar1;
}

