// Class: LimitLotteryCupShop


/* LimitLotteryCupShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void LimitLotteryCupShop::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitLotteryCupShop::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LimitLotteryCupShop::ScrollTargetReached(LimitLotteryCupShop *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* LimitLotteryCupShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LimitLotteryCupShop::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitLotteryCupShop::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LimitLotteryCupShop::ScrollTargetInterrupted(LimitLotteryCupShop *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::GetLayoutName() */

void __thiscall LimitLotteryCupShop::GetLayoutName(LimitLotteryCupShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILimitLottryCupShop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::OnCreate() */

void __thiscall LimitLotteryCupShop::OnCreate(LimitLotteryCupShop *this)

{
  int iVar1;
  bool bVar2;
  ActivityManager *this_00;
  UIWidgetBackground *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a31,true,0);
  std::string::string(asStack_10,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar2 = local_8 == ___stack_chk_guard;
  iVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  *(int *)(this + 0x168) = *(int *)(pUVar3 + 0x48) - iVar1;
  *(int *)(pUVar3 + 0x48) = iVar1;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitLotteryCupShop::ButtonDepress(int) */

void __thiscall LimitLotteryCupShop::ButtonDepress(LimitLotteryCupShop *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<LimitLotteryCupShop>::CloseDialog();
  return;
}


/* non-virtual thunk to LimitLotteryCupShop::ButtonDepress(int) */

void __thiscall LimitLotteryCupShop::ButtonDepress(LimitLotteryCupShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::UpdateCupNum(bool, S2C_S2C_LimitLotteryCupShop const*) */

void __thiscall
LimitLotteryCupShop::UpdateCupNum
          (LimitLotteryCupShop *this,bool param_1,S2C_S2C_LimitLotteryCupShop *param_2)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  UIWidgetText *this_02;
  undefined4 local_84;
  wstring awStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  int local_68;
  int local_64;
  undefined1 auStack_58 [32];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_84 = PlayerInfo::GetMaterialNum(this_01,0x59fd);
    if (param_2 != (S2C_S2C_LimitLotteryCupShop *)0x0) {
      PlayerInfo::SetMaterialNum(this_01,0x59fd,*(int *)(param_2 + 0x14));
      local_84 = *(undefined4 *)(param_2 + 0x14);
      GetGameItemInfo(*(int *)(param_2 + 0x18),0x7fffffff,0);
      if (local_68 != 0) {
        if (local_64 == 2) {
          PlayerInfo::AddCommonGachaReward
                    ((int)this_01,*(int *)(param_2 + 0x18),SUB41(*(undefined4 *)(param_2 + 0x1c),0),
                     false);
        }
        else if (local_64 == 4) {
          cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this_01,auStack_58,0,0);
          if (cVar1 == '\0') {
            PlayerInfo::UnlockPlantAvatar(this_01,auStack_58,0);
            PlayerInfo::SetPlantAvatar(this_01,auStack_58,0);
          }
          else {
            PlayerInfo::AddPlantPieceCount((string *)this_01,(int)auStack_58,true);
          }
        }
        else if (local_64 == 1) {
          ProfileChangeItemAmount(*(int *)(param_2 + 0x18),*(int *)(param_2 + 0x1c),false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
        }
      }
      pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar2 == (UIMessageBox *)0x0) {
        Sexy::OutputDebugStrF((wchar_t *)"limitlotteryError: has buy");
      }
      else {
        UIMessageBox::SetShowType(pUVar2,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[NATIONAL_SHOP_BUY_SUCCESS_TEXT]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(pUVar2,awStack_78,awStack_80);
        std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_38,false);
        UIMessageBox::SetBackground(pUVar2,pIVar3);
        std::string::~string(asStack_38);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
        thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_70);
        FUN_05476c50(awStack_70);
        FUN_05476c50(awStack_78);
        FUN_05476c50(awStack_80);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_68);
    }
    std::string::string(asStack_38,"UIText_CupNum");
    this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_84);
    UIWidgetText::SetString(this_02,asStack_38);
    std::string::~string(asStack_38);
  }
  else {
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 == (UIMessageBox *)0x0) {
      Sexy::OutputDebugStrF((wchar_t *)"limitlotteryError: has buy");
    }
    else {
      UIMessageBox::SetShowType(pUVar2,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[NATIONAL_SHOP_BUY_FAILED_TITLE]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar2,awStack_70,awStack_78);
      std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_38,param_1);
      UIMessageBox::SetBackground(pUVar2,pIVar3);
      std::string::~string(asStack_38);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
      thunk_FUN_05477b9c(lVar4 + 0xd8,&local_68);
      FUN_05476c50(&local_68);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::LimitLotteryCupShop() */

void __thiscall LimitLotteryCupShop::LimitLotteryCupShop(LimitLotteryCupShop *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<LimitLotteryCupShop>::UISingletonDialog
            ((UISingletonDialog<LimitLotteryCupShop> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066df830;
  *(undefined **)(this + 0xd8) = &DAT_066dfb90;
  *(undefined ***)(this + 0x138) = &PTR__LimitLotteryCupShop_066dfbd8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateCupNum);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_S2C_LimitLotteryCupShop_const*,Sexy::CBMemberTranslatorX<LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyLimitLotteryBuyCupShopFinish,&local_90);
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_PVP");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  pLVar2 = gLawnApp;
  std::string::string(asStack_40,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::~LimitLotteryCupShop() */

void __thiscall LimitLotteryCupShop::~LimitLotteryCupShop(LimitLotteryCupShop *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066df830;
  *(undefined **)(this + 0xd8) = &DAT_066dfb90;
  *(undefined ***)(this + 0x138) = &PTR__LimitLotteryCupShop_066dfbd8;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVP");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CupShopItemWidget*,std::allocator<CupShopItemWidget*>>::~vector
            ((vector<CupShopItemWidget*,std::allocator<CupShopItemWidget*>> *)(this + 0x140));
  UISingletonDialog<LimitLotteryCupShop>::~UISingletonDialog
            ((UISingletonDialog<LimitLotteryCupShop> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LimitLotteryCupShop::~LimitLotteryCupShop() */

void __thiscall LimitLotteryCupShop::~LimitLotteryCupShop(LimitLotteryCupShop *this)

{
  ~LimitLotteryCupShop(this + -0x138);
  return;
}


/* LimitLotteryCupShop::~LimitLotteryCupShop() */

void __thiscall LimitLotteryCupShop::~LimitLotteryCupShop(LimitLotteryCupShop *this)

{
  ~LimitLotteryCupShop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitLotteryCupShop::~LimitLotteryCupShop() */

void __thiscall LimitLotteryCupShop::~LimitLotteryCupShop(LimitLotteryCupShop *this)

{
  ~LimitLotteryCupShop(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::InitView() */

void __thiscall LimitLotteryCupShop::InitView(LimitLotteryCupShop *this)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar11;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  int *piVar12;
  CupShopItemWidget *this_04;
  int *piVar13;
  NameMapperBase *this_05;
  ulong uVar14;
  UIScrollControl *this_06;
  ulong uVar15;
  undefined8 local_148;
  undefined8 local_140;
  string asStack_138 [8];
  int local_130;
  int local_12c;
  undefined4 local_128;
  Insets aIStack_120 [12];
  int local_114;
  Insets aIStack_110 [16];
  LimitLotteryConfig aLStack_100 [32];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_94;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x158) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0x160) = this_01;
  iVar4 = FUN_0398a1f8(200);
  iVar7 = *(int *)(this + 0x168);
  iVar5 = FUN_0398a1f8(0x276);
  iVar6 = FUN_0398a1f8(0x140);
  Sexy::Insets::Insets(aIStack_120,iVar4 - iVar7,iVar4,iVar5,iVar6);
  (**(code **)(**(long **)(this + 0x158) + 0x1a0))(*(long **)(this + 0x158),aIStack_120);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x158),2);
  (**(code **)(**(long **)(this + 0x160) + 0x1a0))(*(long **)(this + 0x160),aIStack_120);
  iVar7 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar7);
  cVar2 = FUN_039891e8(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    LimitLotteryConfig::LimitLotteryConfig(aLStack_100);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_100);
    if ((cVar2 != '\0') && (lVar11 = FUN_03989200(local_e0,local_d8), lVar11 != 0)) {
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      iVar7 = 0;
      PlayerInfo::SetMaterialNum(this_03,0x59fd,local_94);
      UpdateCupNum(this,true,(S2C_S2C_LimitLotteryCupShop *)0x0);
      iVar6 = FUN_0398a1f8(10);
      iVar8 = FUN_0398a1f8(5);
      iVar5 = (*(int *)(*(long *)(this + 0x158) + 0x50) + iVar6 * -2 + iVar8 * -2) / 3;
      iVar4 = FUN_0398a1f8(7);
      iVar4 = ((iVar8 * -2 + local_114) - iVar4) / 2;
      local_148 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_e0);
      local_140 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_e0);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_148,(__normal_iterator *)&local_140)
      ;
      if (bVar3) {
        do {
          piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_148);
          iVar9 = FUN_0398a1f8(5);
          iVar10 = FUN_0398a1f8(7);
          Sexy::Insets::Insets
                    (aIStack_110,iVar6 + (iVar9 + iVar5) * (iVar7 % 3),
                     iVar8 + (iVar10 + iVar4) * (iVar7 / 3),iVar5,iVar4);
          local_130 = *piVar12;
          local_12c = piVar12[1];
          local_128 = 1;
          this_04 = ::operator_new(0x110);
          CupShopItemWidget::CupShopItemWidget(this_04);
          (**(code **)(*(long *)this_04 + 0x1a0))(this_04,aIStack_110);
          CupShopItemWidget::SetShopData(this_04,(CupShopItemData *)&local_130);
          for (uVar15 = 0; uVar1 = local_b0, uVar14 = FUN_039891f4(local_b0,local_a8),
              uVar15 < uVar14; uVar15 = uVar15 + 1) {
            piVar13 = (int *)FUN_03989318(uVar1,uVar15);
            if (*piVar12 == *piVar13) {
              LevelEditorSingleHandedSeedPacket::SetDisabled
                        ((LevelEditorSingleHandedSeedPacket *)this_04,true);
              break;
            }
            iVar9 = PlantNameMapperServerID::GetInstance();
            NameMapperBase::GetNameForId(iVar9);
            bVar3 = std::operator==("",asStack_138);
            if (!bVar3) {
              this_05 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
              iVar9 = NameMapperBase::GetIdForName(this_05,asStack_138);
              piVar13 = (int *)FUN_03989318(local_b0,uVar15);
              if (iVar9 == *piVar13) {
                LevelEditorSingleHandedSeedPacket::SetDisabled
                          ((LevelEditorSingleHandedSeedPacket *)this_04,true);
                std::string::~string(asStack_138);
                break;
              }
            }
            std::string::~string(asStack_138);
          }
          iVar7 = iVar7 + 1;
          (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160),this_04);
          if (iVar7 == (iVar7 / 3) * 3) {
            *(int *)(*(long *)(this + 0x160) + 0x54) =
                 *(int *)(*(long *)(this + 0x160) + 0x54) + iVar4;
          }
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_148);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_148,(__normal_iterator *)&local_140);
        } while (bVar3);
      }
    }
    LimitLotteryConfig::~LimitLotteryConfig(aLStack_100);
  }
  this_06 = *(UIScrollControl **)(this + 0x158);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aLStack_100,&DAT_06abea80,1);
  UIScrollControl::SetBackground(this_06,(PVZ2UIImage *)aLStack_100);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x158));
  (**(code **)(**(long **)(this + 0x158) + 0x60))
            (*(long **)(this + 0x158),*(undefined8 *)(this + 0x160));
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitLotteryCupShop::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall
LimitLotteryCupShop::OnNotifyRefresh(LimitLotteryCupShop *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a31;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_039891e8(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) && (*(long *)(this + 0x158) == 0)) {
        InitView(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

