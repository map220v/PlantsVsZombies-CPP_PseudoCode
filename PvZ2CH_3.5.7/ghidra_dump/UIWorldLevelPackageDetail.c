// Class: UIWorldLevelPackageDetail


/* UIWorldLevelPackageDetail::SetPlantDisplayFrame(PlantDisplayFrame*) */

void __thiscall
UIWorldLevelPackageDetail::SetPlantDisplayFrame
          (UIWorldLevelPackageDetail *this,PlantDisplayFrame *param_1)

{
  *(PlantDisplayFrame **)(this + 0x168) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::GetLayoutName() */

void __thiscall UIWorldLevelPackageDetail::GetLayoutName(UIWorldLevelPackageDetail *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIWorldLevelPackageDetail");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIWorldLevelPackageDetail::GetPlantDisplayFrame() */

undefined8 __thiscall
UIWorldLevelPackageDetail::GetPlantDisplayFrame(UIWorldLevelPackageDetail *this)

{
  return *(undefined8 *)(this + 0x168);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::SelectRewardItem(int) */

void __thiscall
UIWorldLevelPackageDetail::SelectRewardItem(UIWorldLevelPackageDetail *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  string asStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [16];
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0x150);
    uVar4 = FUN_045aa6a0(uVar8,*(undefined8 *)(this + 0x158));
    if (uVar4 <= uVar7) break;
    plVar6 = (long *)FUN_045aa6ac(uVar8,uVar7);
    bVar2 = param_1 == (int)uVar7;
    FUN_045aa610(*plVar6 + 0x30c,bVar2);
    puVar3 = (undefined8 *)FUN_045aa6b4(*(undefined8 *)(this + 0x170),uVar7);
    (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,bVar2);
    uVar7 = uVar7 + 1;
  }
  piVar5 = (int *)FUN_045aa6bc(*(undefined8 *)(this + 0x1a0),(long)param_1);
  iVar1 = *piVar5;
  plVar6 = *(long **)(this + 0x1c0);
  if (iVar1 == 0x5a64) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,1);
      plVar6 = *(long **)(this + 0x1c0);
      pcVar9 = *(code **)(*plVar6 + 0x318);
      std::string::string((string *)aGStack_38,"IMAGE_UI_WORLD_LEVEL_PACKAGE_BANNER_GENE");
      (*pcVar9)(plVar6,(string *)aGStack_38);
      std::string::~string((string *)aGStack_38);
      nop();
    }
    plVar6 = *(long **)(this + 0x1b8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,0);
    }
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,0);
    }
    plVar6 = *(long **)(this + 0x1b8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x158))(plVar6,1);
      GetGameItemInfo(iVar1,0x7fffffff,0);
      uVar8 = *(undefined8 *)(this + 0x1b8);
      FUN_05475d88(asStack_40,auStack_28);
      WorldLevelPackageRewardBannerPlant::SetPlant(uVar8,asStack_40);
      std::string::~string(asStack_40);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::Close() */

void __thiscall UIWorldLevelPackageDetail::Close(UIWorldLevelPackageDetail *this)

{
  long *plVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"RewardItemContainer");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x80))(plVar1,1,0);
  std::string::string(asStack_10,"ItemDetailContainer");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x80))(plVar1,1,0);
  std::string::string(asStack_10,"ItemBannerContainer");
  plVar1 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar1 + 0x80))(plVar1,1,0);
  UISingletonDialog<UIWorldLevelPackageDetail>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::GetLevelPackageCountdownStr(std::string, int, int) */

void UIWorldLevelPackageDetail::GetLevelPackageCountdownStr
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  long lVar2;
  long lVar3;
  int extraout_w1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  FUN_05475d88(asStack_10,param_3);
  lVar3 = PlayerInfo::GetWorldLevelPackageExpireTime(pPVar1,asStack_10,param_4,param_5);
  std::string::~string(asStack_10);
  FUN_05478178(param_1,&DAT_056f11a8,asStack_10);
  nop();
  if ((lVar3 != 0) && (0 < lVar3 - lVar2)) {
    StringHelper::ToTimeString((StringHelper *)0x3,(float)(lVar3 - lVar2),extraout_w1);
    FUN_054766c8(param_1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::Update() */

void __thiscall UIWorldLevelPackageDetail::Update(UIWorldLevelPackageDetail *this)

{
  long lVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar1 = *(long *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  if (lVar1 != 0) {
    FUN_05475d88(asStack_18,this + 0x138);
    GetLevelPackageCountdownStr(auStack_10,this,asStack_18,*(undefined4 *)(this + 0x134),3);
    PuzzleTip::SetTip(lVar1,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::ButtonDepress(int) */

void __thiscall
UIWorldLevelPackageDetail::ButtonDepress(UIWorldLevelPackageDetail *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    Close(this);
  }
  else if ((param_1 == 0x3e9) &&
          (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
          this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[WORLD_LEVEL_PACKAGE_BUY_CONFIRM]");
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,BuyConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<UIWorldLevelPackageDetail,void(UIWorldLevelPackageDetail::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIWorldLevelPackageDetail::ButtonDepress(int) */

void __thiscall
UIWorldLevelPackageDetail::ButtonDepress(UIWorldLevelPackageDetail *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIWorldLevelPackageDetail::UIWorldLevelPackageDetail() */

void __thiscall
UIWorldLevelPackageDetail::UIWorldLevelPackageDetail(UIWorldLevelPackageDetail *this)

{
  undefined *puVar1;
  undefined **__n;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIWorldLevelPackageDetail>::UISingletonDialog
            ((UISingletonDialog<UIWorldLevelPackageDetail> *)this);
  __n = &PTR_GetClass_068692a0;
  *(undefined ***)this = &PTR_GetClass_068692a0;
  *(undefined **)(this + 0xd8) = &DAT_068695f0;
  Set8BytesTo0((string *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  *(undefined4 *)(this + 0x134) = 0;
  std::string::append((string *)(this + 0x138),"",(size_t)__n);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SelectRewardItem);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIWorldLevelPackageDetail,void(UIWorldLevelPackageDetail::*)(int)>>
            ((MessageRouter *)puVar1,Message::LevelPackageSelectRewardItem,&local_40);
  return;
}


/* UIWorldLevelPackageDetail::~UIWorldLevelPackageDetail() */

void __thiscall
UIWorldLevelPackageDetail::~UIWorldLevelPackageDetail(UIWorldLevelPackageDetail *this)

{
  *(undefined **)(this + 0xd8) = &DAT_068695f0;
  *(undefined ***)this = &PTR_GetClass_068692a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1a0));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x188));
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x170));
  std::vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>>::
  ~vector((vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>> *)
          (this + 0x150));
  std::string::~string((string *)(this + 0x138));
  UISingletonDialog<UIWorldLevelPackageDetail>::~UISingletonDialog
            ((UISingletonDialog<UIWorldLevelPackageDetail> *)this);
  return;
}


/* UIWorldLevelPackageDetail::~UIWorldLevelPackageDetail() */

void __thiscall
UIWorldLevelPackageDetail::~UIWorldLevelPackageDetail(UIWorldLevelPackageDetail *this)

{
  ~UIWorldLevelPackageDetail(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::InitView(int) */

void __thiscall UIWorldLevelPackageDetail::InitView(UIWorldLevelPackageDetail *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  UIWidgetImage *this_00;
  UIWidgetText *pUVar9;
  WorldLevelPackageItem *pWVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  WorldLevelPackageRewardWidget *this_01;
  UIBossMedalLottery *pUVar15;
  RtObject *this_02;
  long lVar16;
  int iVar17;
  string asStack_b8 [8];
  WorldLevelPackageRewardWidget *local_b0;
  UIBossMedalLottery *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90 [3];
  WorldLevelPackageData aWStack_78 [8];
  undefined8 local_70;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  *(int *)(this + 0x134) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  RechargeDailySignActivityManager::GetBannerImageName();
  FUN_05474278(this + 0x138,(string *)&local_40);
  std::string::~string((string *)&local_40);
  std::string::string((string *)&local_40,"UIButton_2");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_40);
  *(PVZ2UIButton **)(this + 0x148) = pPVar7;
  std::string::~string((string *)&local_40);
  nop();
  Sexy::StrFormat("[WORLD_LEVEL_PACKAGE_PRICE_%d]",asStack_b8,(ulong)*(uint *)(this + 0x134));
  if (*(long *)(this + 0x148) != 0) {
    Sexy::StrFormat("IMAGE_UI_WORLD_LEVEL_PACKAGE_BUTTON_%d",(string *)&local_40,
                    (ulong)*(uint *)(this + 0x134));
    uVar8 = StringHelper::ToImage((string *)&local_40,false);
    std::string::~string((string *)&local_40);
    pPVar7 = *(PVZ2UIButton **)(this + 0x148);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aWStack_78,uVar8,1);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,uVar8,1);
    PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)aWStack_78,(PVZ2UIImage *)&local_40);
  }
  std::string::string((string *)&local_40,"UIImage_3");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (this_00 != (UIWidgetImage *)0x0) {
    Sexy::StrFormat("IMAGE_UI_WORLD_LEVEL_PACKAGE_GEM_%d",(string *)&local_40,
                    (ulong)*(uint *)(this + 0x134));
    UIWidgetImage::SetImage(this_00,(string *)&local_40);
    std::string::~string((string *)&local_40);
  }
  std::string::string((string *)&local_40,"CountDown");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_40);
  *(UIWidgetText **)(this + 0x140) = pUVar9;
  std::string::~string((string *)&local_40);
  nop();
  uVar8 = Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
  FUN_05475d88((string *)&local_40,this + 0x138);
  WorldLevelPackageManager::GetWorldLevelPackageData(aWStack_78,uVar8,(string *)&local_40);
  std::string::~string((string *)&local_40);
  pWVar10 = (WorldLevelPackageItem *)FUN_045aa678(local_70,(long)*(int *)(this + 0x134));
  WorldLevelPackageItem::WorldLevelPackageItem((WorldLevelPackageItem *)&local_40,pWVar10);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_90,(vector *)&local_40);
  iVar4 = FUN_045aa680(local_40,local_38);
  if (0 < iVar4) {
    lVar16 = 0;
    std::string::string((string *)&local_a0,"RewardItemContainer");
    iVar17 = 0;
    plVar11 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_a0);
    std::string::~string((string *)&local_a0);
    nop();
    *(undefined1 *)((long)plVar11 + 0x59) = 0;
    (**(code **)(*plVar11 + 0x80))(plVar11,1,1);
    std::string::string((string *)&local_a0,"ItemDetailContainer");
    plVar12 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_a0);
    std::string::~string((string *)&local_a0);
    nop();
    (**(code **)(*plVar12 + 0x80))(plVar12,1,1);
    std::string::string((string *)&local_a0,"ItemBannerContainer");
    plVar13 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_a0);
    std::string::~string((string *)&local_a0);
    nop();
    (**(code **)(*plVar13 + 0x80))(plVar13,1,1);
    std::vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>>::
    clear((vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>> *)
          (this + 0x150));
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x170));
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::clear
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x188));
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1a0));
    iVar5 = FUN_045aaddc(0xf);
    iVar6 = FUN_045aaddc(5);
    iVar3 = ((int)plVar11[10] + iVar5 * -2) / 3;
    do {
      piVar14 = (int *)FUN_045aa694(local_90[0],lVar16);
      if (*piVar14 != 0xbc0) {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + 0x1a0),piVar14);
        piVar14 = (int *)FUN_045aa694(local_90[0],lVar16);
        iVar1 = *piVar14;
        iVar2 = piVar14[1];
        this_01 = ::operator_new(0x318);
        WorldLevelPackageRewardWidget::WorldLevelPackageRewardWidget
                  (this_01,iVar17 + 2000,iVar1,iVar2);
        local_b0 = this_01;
        Sexy::Insets::Insets
                  ((Insets *)&local_a0,(iVar17 % 3) * (iVar3 + iVar5),(iVar17 / 3) * (iVar6 + iVar3)
                   ,iVar3,iVar3);
        (**(code **)(*(long *)local_b0 + 0x198))(local_b0,local_a0,local_9c,local_98,local_94);
        WorldLevelPackageRewardWidget::InitView(local_b0);
        (**(code **)(*plVar11 + 0x60))(plVar11,local_b0);
        std::vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>>::
        push_back((vector<WorldLevelPackageRewardWidget*,std::allocator<WorldLevelPackageRewardWidget*>>
                   *)(this + 0x150),&local_b0);
        piVar14 = (int *)FUN_045aa694(local_90[0],lVar16);
        pUVar15 = (UIBossMedalLottery *)
                  WorldLevelPackageRewardDetailWidgetFactory::CreateWidget(*piVar14);
        (**(code **)(*(long *)pUVar15 + 0x198))
                  (pUVar15,0,0,(int)plVar12[10],*(undefined4 *)((long)plVar12 + 0x54));
        (**(code **)(*(long *)pUVar15 + 0x310))(pUVar15);
        (**(code **)(*plVar12 + 0x60))(plVar12,pUVar15);
        local_a8 = pUVar15;
        std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                  ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x170),
                   (Widget **)&local_a8);
        piVar14 = (int *)FUN_045aa694(local_90[0],lVar16);
        if (*piVar14 == 0x5a64) {
          if (*(long *)(this + 0x1c0) == 0) {
            pUVar15 = (UIBossMedalLottery *)
                      WorldLevelPackageRewardBannerWidgetFactory::CreateWidget(0x5a64);
            *(UIBossMedalLottery **)(this + 0x1c0) = pUVar15;
            goto LAB_045afcd4;
          }
        }
        else if (*(long *)(this + 0x1b8) == 0) {
          this_02 = (RtObject *)WorldLevelPackageRewardBannerWidgetFactory::CreateWidget(*piVar14);
          pUVar15 = Sexy::RtObject::Cast<UIBossMedalLottery>(this_02);
          *(UIBossMedalLottery **)(this + 0x1b8) = pUVar15;
LAB_045afcd4:
          if (pUVar15 != (UIBossMedalLottery *)0x0) {
            (**(code **)(*(long *)pUVar15 + 0x198))
                      (pUVar15,0,0,(int)plVar13[10],*(undefined4 *)((long)plVar13 + 0x54));
            (**(code **)(*(long *)pUVar15 + 0x310))(pUVar15);
            (**(code **)(*plVar13 + 0x60))(plVar13,pUVar15);
            local_a8 = pUVar15;
            std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                      ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0x188),
                       (Widget **)&local_a8);
          }
        }
        iVar17 = iVar17 + 1;
      }
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < iVar4);
    lVar16 = FUN_045aa6a0(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
    if (lVar16 != 0) {
      SelectRewardItem(this,0);
    }
  }
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)local_90);
  WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)&local_40);
  WorldLevelPackageData::~WorldLevelPackageData(aWStack_78);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWorldLevelPackageDetail::BuyConfirm(UIMessageBox*, int) */

void __thiscall
UIWorldLevelPackageDetail::BuyConfirm
          (UIWorldLevelPackageDetail *this,UIMessageBox *param_1,int param_2)

{
  string *psVar1;
  int iVar2;
  ProfileMgr *this_00;
  string *psVar3;
  TGALogMgr *pTVar4;
  char *pcVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  DString *__n;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    __n = aDStack_18;
    std::string::string(asStack_30,"");
    nop();
    iVar2 = *(int *)(this + 0x134);
    if (iVar2 == 0) {
      std::string::append(asStack_30,"6",(size_t)__n);
    }
    else if (iVar2 == 1) {
      std::string::append(asStack_30,"30",(size_t)__n);
    }
    else if (iVar2 == 2) {
      std::string::append(asStack_30,"60",(size_t)__n);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    psVar1 = (string *)(this + 0x138);
    psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = PlayerInfo::GetStarsCompletedInWorld(psVar3,SUB81(psVar1,0));
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DString::DString(aDStack_18,*(int *)(this + 0x134));
    pcVar5 = (char *)DString::c_str(aDStack_18);
    std::string::string(asStack_20,pcVar5);
    TGALogMgr::LogSegments(pTVar4,0x2786,0,asStack_20);
    std::string::~string(asStack_20);
    nop();
    DString::~DString(aDStack_18);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogSegments(pTVar4,0x2786,1,asStack_30);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogSegments(pTVar4,0x2786,2,psVar1);
    pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    DString::DString(aDStack_18,iVar2);
    pcVar5 = (char *)DString::c_str(aDStack_18);
    std::string::string(asStack_20,pcVar5);
    TGALogMgr::LogSegments(pTVar4,0x2786,3,asStack_20);
    std::string::~string(asStack_20);
    nop();
    DString::~DString(aDStack_18);
    FUN_031dcc6c(asStack_20,&DAT_06b15700,psVar1);
    DString::DString(aDStack_18,*(int *)(this + 0x134));
    pcVar5 = (char *)DString::c_str(aDStack_18);
    std::operator+(asStack_20,pcVar5);
    DString::~DString(aDStack_18);
    std::string::~string(asStack_20);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_01);
    PurchaseBroker::RequestPayment(this_02,asStack_28,0);
    Close(this);
    UISingletonDialog<UIWorldLevelPackage>::CloseDialog();
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

