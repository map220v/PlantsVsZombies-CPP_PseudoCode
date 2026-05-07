// Class: DailySignBanner


/* DailySignBanner::~DailySignBanner() */

void __thiscall DailySignBanner::~DailySignBanner(DailySignBanner *this)

{
  *(undefined ***)this = &PTR_GetClass_066d9200;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d9528;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DailySignBanner::~DailySignBanner() */

void __thiscall DailySignBanner::~DailySignBanner(DailySignBanner *this)

{
  ~DailySignBanner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBanner::ButtonDepress(int) */

void __thiscall DailySignBanner::ButtonDepress(DailySignBanner *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *pTVar1;
  NetworkMgr *this_02;
  long *plVar2;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xe0) == param_1) && (this[0xf8] == (DailySignBanner)0x0)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_14 = PlayerInfo::GetNumGems(this_01,false);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
    TGALogMgr::LogSegments(pTVar1,0x2740,1,asStack_10);
    std::string::~string(asStack_10);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    TGALogMgr::LogSegments(pTVar1,0x2740,2,asStack_10);
    std::string::~string(asStack_10);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined4 *)(this + 0xe0));
    this[0xf8] = (DailySignBanner)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DailySignBanner::ButtonDepress(int) */

void __thiscall DailySignBanner::ButtonDepress(DailySignBanner *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DailySignBanner::UpdateUI(bool, bool) */

void __thiscall DailySignBanner::UpdateUI(DailySignBanner *this,bool param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  Image *pIVar6;
  UIWidgetImage *this_00;
  
  if (param_2) {
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 == (long *)0x0) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc98);
      this_00 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(this_00,pIVar6);
      *(UIWidgetImage **)(this + 0xf0) = this_00;
      iVar2 = FUN_039794f8(0x96);
      iVar1 = *(int *)(this + 0x50);
      iVar3 = FUN_039794f8(0x1e);
      uVar4 = FUN_039794f8(0x78);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,iVar1 - iVar2,(*(int *)(this + 0x54) - iVar3) / 2,uVar4);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
      plVar5 = *(long **)(this + 0xf0);
    }
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    plVar5 = *(long **)(this + 0xe8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),!param_1);
    plVar5 = *(long **)(this + 0xf0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x158))(plVar5,0);
      return;
    }
  }
  return;
}


/* DailySignBanner::onGotReward(bool) */

void __thiscall DailySignBanner::onGotReward(DailySignBanner *this,bool param_1)

{
  if ((this[0xf8] != (DailySignBanner)0x0) && (this[0xf8] = (DailySignBanner)0x0, param_1)) {
    UpdateUI(this,false,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBanner::Draw(Sexy::Graphics*) */

void __thiscall DailySignBanner::Draw(DailySignBanner *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_039794f8(0);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdd28);
  Draw3SliceImage(param_1,aIStack_18,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignBanner::DailySignBanner(int, bool, bool, S2C_DailySignContent const&, Sexy::TRect<int>)
    */

void __thiscall
DailySignBanner::DailySignBanner
          (DailySignBanner *this,uint param_1,byte param_2,char param_3,int *param_4,TRect *param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  UIWidgetText *this_00;
  Image *pIVar9;
  UIWidgetImage *this_01;
  Widget *pWVar10;
  long *plVar11;
  int iVar12;
  code *pcVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(uint *)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_066d9200;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d9528;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf8] = (DailySignBanner)0x0;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_6);
  if (*param_4 == 0xbc0) {
    std::string::string((string *)&local_40,"gem");
    pWVar10 = ::operator_new(0x148);
    UIRewardFrame::UIRewardFrame((UIRewardFrame *)pWVar10,1,(string *)&local_40,param_4[1],1);
    std::string::~string((string *)&local_40);
    nop();
    uVar5 = FUN_039794f8(0x1e);
    iVar6 = FUN_039794f8(0x3c);
    (**(code **)(*(long *)pWVar10 + 0x198))
              (pWVar10,uVar5,(*(int *)(this + 0x54) - iVar6) / 2,iVar6,iVar6);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar10);
    iVar6 = *(int *)(pWVar10 + 0x48) + *(int *)(pWVar10 + 0x50);
  }
  else {
    iVar6 = 0;
  }
  if (param_3 == '\0') {
    FUN_05478178(awStack_78,L"[PLANT_SEVENDAYSLOGIN_AWARD]",auStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar7 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar7,param_1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0xe8) = pPVar7;
    FUN_05476c50(awStack_78);
    nop();
    pPVar7 = *(PVZ2UIButton **)(this + 0xe8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abde30,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06abdd98,3);
    PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    plVar11 = *(long **)(this + 0xe8);
    iVar2 = FUN_039794f8(0x82);
    iVar12 = *(int *)(this + 0x50);
    iVar3 = FUN_039794f8(0x32);
    iVar4 = FUN_039794f8(100);
    (**(code **)(*plVar11 + 0x198))
              (plVar11,iVar12 - iVar2,(*(int *)(this + 0x54) - iVar3) / 2,iVar4,iVar3);
    (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),param_2 ^ 1);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),1);
    plVar11 = *(long **)(this + 0xe8);
    *(undefined1 *)((long)plVar11 + 0x59) = 0;
    pcVar13 = *(code **)(*plVar11 + 800);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline)
    ;
    (*pcVar13)(plVar11,uVar8);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
    iVar12 = *(int *)(*(long *)(this + 0xe8) + 0x48);
  }
  else {
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc98);
    this_01 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_01,pIVar9);
    *(UIWidgetImage **)(this + 0xf0) = this_01;
    iVar2 = FUN_039794f8(0x96);
    iVar12 = *(int *)(this + 0x50);
    iVar3 = FUN_039794f8(0x1e);
    iVar4 = FUN_039794f8(0x78);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,iVar12 - iVar2,(*(int *)(this + 0x54) - iVar3) / 2);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf0));
    iVar12 = *(int *)(*(long *)(this + 0xf0) + 0x48);
  }
  std::string::string((string *)&local_40,"[PIGGY_BANK_LOGIN_TEXT]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_40,(string *)&DAT_0570bbc8,(wchar_t *)(ulong)param_1,iVar4);
  std::string::~string((string *)&local_40);
  nop();
  this_00 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(this_00,awStack_78);
  iVar4 = FUN_039794f8(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,iVar6,(*(int *)(this + 0x54) - iVar4) / 2,iVar12 - iVar6,iVar4);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  FUN_0397907c(this_00 + 0xe8,uVar8);
  FUN_03979308(this_00 + 0xe0);
  pcVar13 = *(code **)(*(long *)this_00 + 0x170);
  Sexy::Color::Color((Color *)&local_40,0);
  (*pcVar13)(this_00,0,(string *)&local_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_00);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGotReward);
  local_a0 = local_40;
  uStack_98 = uStack_38;
  local_90 = local_30;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<DailySignBanner,void(DailySignBanner::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyPiggyBankRewardGot,&local_a0);
  FUN_05476c50(awStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

