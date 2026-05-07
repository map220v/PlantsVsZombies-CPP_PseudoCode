// Class: DailyAwardActivityScrollPanel


/* DailyAwardActivityScrollPanel::loadData(Sexy::TRect<int>&, DailyAwardBonus&) */

void __thiscall
DailyAwardActivityScrollPanel::loadData
          (DailyAwardActivityScrollPanel *this,TRect *param_1,DailyAwardBonus *param_2)

{
  (**(code **)(*(long *)this + 0x1a0))();
  DailyAwardBonus::operator=((DailyAwardBonus *)(this + 0xf8),param_2);
  return;
}


/* DailyAwardActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
DailyAwardActivityScrollPanel::RemoveAllDungeonWidget(DailyAwardActivityScrollPanel *this)

{
  std::vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>>::clear
            ((vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAwardActivityScrollPanel::~DailyAwardActivityScrollPanel() */

void __thiscall
DailyAwardActivityScrollPanel::~DailyAwardActivityScrollPanel(DailyAwardActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d69b0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d6690;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0xf8));
  std::vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>>::~vector
            ((vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAwardActivityScrollPanel::~DailyAwardActivityScrollPanel() */

void __thiscall
DailyAwardActivityScrollPanel::~DailyAwardActivityScrollPanel(DailyAwardActivityScrollPanel *this)

{
  ~DailyAwardActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAwardActivityScrollPanel::InitView() */

void __thiscall DailyAwardActivityScrollPanel::InitView(DailyAwardActivityScrollPanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *this_00;
  DailyAwardActivityWidget *pDVar8;
  vector *pvVar9;
  long lVar10;
  byte bVar11;
  undefined8 uVar12;
  code *pcVar13;
  DailyAwardActivityWidget *local_48;
  Insets aIStack_40 [12];
  int local_34;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0396c5e8(5);
  *(undefined4 *)(this + 0x54) = uVar1;
  RemoveAllDungeonWidget(this);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::string::string(asStack_20,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_20,false);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    lVar10 = 0;
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar4 = FUN_0396c5e8(0x14);
    do {
      uVar12 = *(undefined8 *)(this + 0x110);
      iVar5 = (int)lVar10;
      iVar7 = FUN_0396c1cc(uVar12,*(undefined8 *)(this + 0x118));
      if (iVar7 <= iVar5) break;
      bVar11 = false;
      pvVar9 = (vector *)FUN_0396c1fc(uVar12,lVar10);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20,pvVar9)
      ;
      if (*(int *)(this + 0xf8) == iVar5) {
        bVar11 = (byte)this[0xfc] ^ 1;
      }
      lVar10 = lVar10 + 1;
      pDVar8 = ::operator_new(0x1b8);
      DailyAwardActivityWidget::DailyAwardActivityWidget
                (pDVar8,iVar5,*(int *)(this + 0xf8),(bool)bVar11,(vector *)asStack_20);
      local_48 = pDVar8;
      iVar7 = FUN_0396c5e8(5);
      Sexy::Insets::Insets(aIStack_40,0,iVar7 + *(int *)(this + 0x54),iVar2,iVar3 - iVar4);
      pDVar8 = local_48;
      pcVar13 = *(code **)(*(long *)local_48 + 0x1a0);
      iVar5 = FUN_0396c5e8(5);
      iVar7 = *(int *)(this + 0x54);
      iVar6 = FUN_0396c5e8(0x32);
      Sexy::Insets::Insets
                (aIStack_30,(*(int *)(this + 0x50) - iVar2) / 2,iVar5 + iVar7,iVar6 + iVar2,local_34
                );
      (*pcVar13)(pDVar8,aIStack_30);
      DailyAwardActivityWidget::Init(local_48);
      (**(code **)(*(long *)this + 0x60))(this,local_48);
      std::vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>>::push_back
                ((vector<DailyAwardActivityWidget*,std::allocator<DailyAwardActivityWidget*>> *)
                 (this + 0xe0),&local_48);
      iVar7 = FUN_0396c5e8(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar7 + (iVar3 - iVar4);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20);
    } while (lVar10 != 7);
    iVar2 = FUN_0396c5e8(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar2;
    iVar2 = FUN_0396c5e8(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAwardActivityScrollPanel::OnNotify7DaysLoginReward(bool, S2C_7DaysLoginReward const*) */

void __thiscall
DailyAwardActivityScrollPanel::OnNotify7DaysLoginReward
          (DailyAwardActivityScrollPanel *this,bool param_1,S2C_7DaysLoginReward *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  ProfileMgr *this_00;
  int *piVar4;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    LawnApp::ShowSevenDaysRewardView(gLawnApp,(vector *)(param_2 + 0x18));
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_2 + 0x30);
    this[0xfc] = (DailyAwardActivityScrollPanel)0x1;
    InitView(this);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    local_60 = FUN_0396ca1c(*(undefined8 *)(param_2 + 0x18));
    local_58 = FUN_0396ca6c(*(undefined8 *)(param_2 + 0x20));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58),
          puVar2 = gMessageRouter, bVar3) {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      ProfileChangeItemAmount(*piVar4,piVar4[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_50,piVar4);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)aGStack_38,(vector *)avStack_50);
    MessageRouter::
    Post<int,std::vector<int,std::allocator<int>>const&,int,std::vector<int,std::allocator<int>>>
              ((MessageRouter *)puVar2,Message::NationalDayDailyReward,uVar1,aGStack_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aGStack_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAwardActivityScrollPanel::DailyAwardActivityScrollPanel(Sexy::TRect<int>&, DailyAwardBonus&)
    */

void __thiscall
DailyAwardActivityScrollPanel::DailyAwardActivityScrollPanel
          (DailyAwardActivityScrollPanel *this,TRect *param_1,DailyAwardBonus *param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d6690;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d69b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  DailyAwardBonus::DailyAwardBonus((DailyAwardBonus *)(this + 0xf8));
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotify7DaysLoginReward);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_7DaysLoginReward_const*,Sexy::CBMemberTranslatorX<DailyAwardActivityScrollPanel,void(DailyAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>>
            ((MessageRouter *)puVar1,Message::GL7DaysLoginReward,&local_50);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  DailyAwardBonus::operator=((DailyAwardBonus *)(this + 0xf8),param_2);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

