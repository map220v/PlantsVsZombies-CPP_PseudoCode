// Class: GachaDisplayerDialog


/* GachaDisplayerDialog::~GachaDisplayerDialog() */

void __thiscall GachaDisplayerDialog::~GachaDisplayerDialog(GachaDisplayerDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_0677f800;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677fb28;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GachaDisplayerDialog::~GachaDisplayerDialog() */

void __thiscall GachaDisplayerDialog::~GachaDisplayerDialog(GachaDisplayerDialog *this)

{
  ~GachaDisplayerDialog(this);
  AK::FreeHook(this);
  return;
}


/* GachaDisplayerDialog::ButtonDepress(int) */

void __thiscall GachaDisplayerDialog::ButtonDepress(GachaDisplayerDialog *this,int param_1)

{
  if (param_1 != 100) {
    return;
  }
  LawnApp::KillGachaDisplayerDialog(gLawnApp);
  return;
}


/* non-virtual thunk to GachaDisplayerDialog::ButtonDepress(int) */

void __thiscall GachaDisplayerDialog::ButtonDepress(GachaDisplayerDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* GachaDisplayerDialog::ShowMask() */

void __thiscall GachaDisplayerDialog::ShowMask(GachaDisplayerDialog *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  GachaMgr *this_00;
  GachaItem *this_01;
  
  lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
  if (iVar2 == 1) {
LAB_03deff30:
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    cVar1 = FUN_03def10c(*(undefined1 *)(lVar3 + 0x61));
  }
  else {
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
    if (iVar2 == 2) goto LAB_03deff30;
    lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
    if (iVar2 != 3) {
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      iVar2 = FUN_03def108(*(undefined4 *)(lVar3 + 0x44));
      if (iVar2 != 4) {
        return;
      }
      lVar3 = Sexy::LazySingleton<GachaMgr>::GetInstance();
      cVar1 = FUN_03def110(*(undefined1 *)(lVar3 + 0x62));
      if (cVar1 != '\0') {
        return;
      }
      this_01 = *(GachaItem **)(this + 0x108);
      if (this_01 == (GachaItem *)0x0) {
        return;
      }
      goto LAB_03deff4c;
    }
    this_00 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
    cVar1 = GachaMgr::GetObtainTutorialAvatar(this_00);
  }
  if ((cVar1 != '\0') || (this_01 = *(GachaItem **)(this + 0x100), this_01 == (GachaItem *)0x0)) {
    return;
  }
LAB_03deff4c:
  GachaItem::ShowMask(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDisplayerDialog::GachaDisplayerDialog(GachaType) */

void __thiscall
GachaDisplayerDialog::GachaDisplayerDialog(GachaDisplayerDialog *this,undefined4 param_2)

{
  GachaDisplayerDialog *pGVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  PVZ2UIButton *this_00;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  GachaMgr *pGVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = this + 0xf8;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0677f800;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677fb28;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  FUN_05476574(pGVar1);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  Sexy::Widget::Resize
            ((Widget *)this,*(int *)(gLawnApp + 0x71c),*(int *)(gLawnApp + 0x720),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  iVar3 = FUN_03def260(0x208);
  iVar4 = FUN_03def260(0x1c2);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(*(int *)(this + 0x50) - iVar3) / 2,
             (*(int *)(this + 0x54) - iVar4) / 2,iVar3,iVar4);
  *(ulong *)(this + 0xe0) = CONCAT44(uStack_3c,local_40);
  *(undefined8 *)(this + 0xe8) = uStack_38;
  switch(param_2) {
  case 0:
    TodStringTranslate(L"[GACHA_ITEM_NORMAL_HEADER]");
    FUN_054766c8(pGVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_BLUE);
    *(undefined8 *)(this + 0xf0) = uVar14;
    break;
  case 1:
    TodStringTranslate(L"[GACHA_ITEM_RARE_HEADER]");
    FUN_054766c8(pGVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        GachaItemConfig::IMAGE_UI_DIALOG_ASSET_BG_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar14;
    break;
  case 2:
    TodStringTranslate(L"[GACHA_ITEM_LEGEND_HEADER]");
    FUN_054766c8(pGVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        GachaItemConfig::IMAGE_UI_CARDS_STORE_STORE_COIN_CARD);
    *(undefined8 *)(this + 0xf0) = uVar14;
    break;
  case 3:
    TodStringTranslate(L"[GACHA_ITEM_AVATAR_HEADER]");
    FUN_054766c8(pGVar1,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)
                        GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CARD_PURPLE);
    *(undefined8 *)(this + 0xf0) = uVar14;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar3 = *(int *)(this + 0xe0);
  iVar4 = *(int *)(this + 0xe8);
  pcVar15 = *(code **)(*(long *)this_00 + 0x198);
  iVar5 = FUN_03def260(0x23);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_BTN);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar2 = *(int *)(this + 0xe4);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_BTN);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_BTN);
  uVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)
                       GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_BTN);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar12);
  (*pcVar15)(this_00,((iVar3 + iVar4) - iVar5) - iVar6,iVar2 - iVar7,uVar8,uVar9);
  PVZ2UIImage::PVZ2UIImage
            ((PVZ2UIImage *)awStack_78,GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_BTN,1);
  PVZ2UIImage::PVZ2UIImage
            ((PVZ2UIImage *)&local_40,GachaItemConfig::IMAGE_UI_DIALOG_ASSET_CLOSE_DOWN,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  iVar5 = FUN_03def260(0xe6);
  iVar3 = *(int *)(this + 0xe8);
  iVar6 = FUN_03def260(5);
  iVar4 = *(int *)(this + 0xe0);
  iVar7 = FUN_03def260(0x43);
  iVar2 = *(int *)(this + 0xe4);
  iVar10 = FUN_03def260(0x177);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + ((iVar3 + iVar5 * -2) - iVar6) / 2,iVar7 + iVar2,iVar5,
             iVar10);
  pGVar13 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar14 = GachaMgr::CreateTargetGachaItemDraw(pGVar13,param_2,0,(Insets *)&local_40,this);
  *(undefined8 *)(this + 0x100) = uVar14;
  iVar3 = FUN_03def260(5);
  local_40 = local_40 + iVar5 + iVar3;
  pGVar13 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  uVar14 = GachaMgr::CreateTargetGachaItemDraw(pGVar13,param_2,1,(Insets *)&local_40,this);
  *(undefined8 *)(this + 0x108) = uVar14;
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaDisplayerDialog::Draw(Sexy::Graphics*) */

void __thiscall GachaDisplayerDialog::Draw(GachaDisplayerDialog *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  if (*(long *)(this + 0xf0) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
  }
  pcVar3 = *(code **)(*(long *)this + 0x290);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  iVar1 = FUN_03def260(0xd);
  (*pcVar3)(this,param_1,uVar2,aIStack_18,iVar1 + *(int *)(this + 0xe4),this + 0xf8);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

