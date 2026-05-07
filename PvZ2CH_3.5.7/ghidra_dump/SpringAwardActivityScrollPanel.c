// Class: SpringAwardActivityScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityScrollPanel::ProfileChangeItemAmountExpPlant(int, int, bool) */

void SpringAwardActivityScrollPanel::ProfileChangeItemAmountExpPlant
               (int param_1,int param_2,bool param_3)

{
  char cVar1;
  NameMapperBase *this;
  bool in_w3;
  GAME_ITEM_INFO *in_x8;
  GAME_ITEM_INFO aGStack_38 [8];
  undefined4 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this,param_2);
  if (cVar1 == '\0') {
    ProfileChangeItemAmount(param_2,(uint)param_3,in_w3);
  }
  else {
    GetGameItemInfo(param_2,0x7fffffff,0);
    local_30 = 1;
    GAME_ITEM_INFO::GAME_ITEM_INFO(in_x8,aGStack_38);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringAwardActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
SpringAwardActivityScrollPanel::RemoveAllDungeonWidget(SpringAwardActivityScrollPanel *this)

{
  std::vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>>::clear
            ((vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityScrollPanel::~SpringAwardActivityScrollPanel() */

void __thiscall
SpringAwardActivityScrollPanel::~SpringAwardActivityScrollPanel
          (SpringAwardActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066cedd0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066ceab0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  SpringDailyLoginConfig::~SpringDailyLoginConfig((SpringDailyLoginConfig *)(this + 0xf8));
  std::vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>>::~vector
            ((vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringAwardActivityScrollPanel::~SpringAwardActivityScrollPanel() */

void __thiscall
SpringAwardActivityScrollPanel::~SpringAwardActivityScrollPanel
          (SpringAwardActivityScrollPanel *this)

{
  ~SpringAwardActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityScrollPanel::InitView() */

void __thiscall SpringAwardActivityScrollPanel::InitView(SpringAwardActivityScrollPanel *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  LotteryResultProgressBar *this_00;
  undefined8 uVar10;
  SpringChargeManager *this_01;
  SpringAwardActivityWidget *pSVar11;
  vector *pvVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *pcVar15;
  int local_6c;
  undefined8 local_68;
  SpringAwardActivityWidget *local_60;
  Insets aIStack_58 [12];
  int local_4c;
  undefined8 local_48 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1a0))(this,this + 0x1a0);
  uVar2 = FUN_03943dd0(5);
  *(undefined4 *)(this + 0x54) = uVar2;
  RemoveAllDungeonWidget(this);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::string::string(asStack_20,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_20,false);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    uVar10 = FUN_039436b8(*(undefined8 *)(this + 0x138),*(undefined8 *)(this + 0x140));
    Sexy::OutputDebugStrF((wchar_t *)"SpringAwardActivityScrollPanel size() = %d",uVar10);
    std::vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>>::clear
              ((vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>> *)
               (this + 0xe0));
    Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    SpringChargeManager::GetCurrentLoginLevel();
    local_6c = 0;
    do {
      iVar5 = local_6c;
      uVar10 = *(undefined8 *)(this + 0x138);
      iVar9 = FUN_039436b8(uVar10,*(undefined8 *)(this + 0x140));
      if (iVar9 <= iVar5) break;
      pvVar12 = (vector *)FUN_039436e8(uVar10,(long)iVar5);
      std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>::vector
                ((vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>> *)asStack_20,pvVar12
                );
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_38);
      local_68 = std::
                 find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar10,uVar13,&local_6c);
      local_48[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_48);
      uVar14 = (ulong)bVar1;
      if (bVar1) {
        uVar14 = 1;
      }
      Sexy::OutputDebugStrF((wchar_t *)"SpringAwardActivityScrollPanel isCanAward() = %d",uVar14);
      this_01 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
      iVar5 = SpringChargeManager::GetTargetRequiredDays(this_01,local_6c);
      pSVar11 = ::operator_new(0x1c0);
      SpringAwardActivityWidget::SpringAwardActivityWidget
                (pSVar11,local_6c,*(int *)(this + 0x100),SUB81(uVar14,0),(vector *)asStack_20,iVar5)
      ;
      local_60 = pSVar11;
      iVar5 = FUN_03943dd0(5);
      Sexy::Insets::Insets
                (aIStack_58,0,iVar5 + *(int *)(this + 0x54),iVar3,(int)((double)iVar4 * 0.8));
      iVar6 = FUN_03943dd0(10);
      pSVar11 = local_60;
      iVar5 = *(int *)(this + 0x50);
      pcVar15 = *(code **)(*(long *)local_60 + 0x1a0);
      iVar7 = FUN_03943dd0(5);
      iVar9 = *(int *)(this + 0x54);
      iVar8 = FUN_03943dd0(0x32);
      Sexy::Insets::Insets
                ((Insets *)local_48,iVar6 + (iVar5 - iVar3) / 2,iVar7 + iVar9,iVar8 + iVar3,local_4c
                );
      (*pcVar15)(pSVar11,(Insets *)local_48);
      SpringAwardActivityWidget::Init(local_60);
      (**(code **)(*(long *)this + 0x60))(this,local_60);
      std::vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>>::push_back
                ((vector<SpringAwardActivityWidget*,std::allocator<SpringAwardActivityWidget*>> *)
                 (this + 0xe0),&local_60);
      iVar5 = FUN_03943dd0(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar5 + (int)((double)iVar4 * 0.8);
      std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>::~vector
                ((vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>> *)asStack_20);
      local_6c = local_6c + 1;
    } while (local_6c < 7);
    iVar3 = FUN_03943dd0(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar3;
    iVar3 = FUN_03943dd0(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar3;
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityScrollPanel::OnNotifySpringLoginReward(bool, S2C_7DaysLoginSpringReward
   const*) */

void __thiscall
SpringAwardActivityScrollPanel::OnNotifySpringLoginReward
          (SpringAwardActivityScrollPanel *this,bool param_1,S2C_7DaysLoginSpringReward *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  SpringChargeManager *pSVar4;
  undefined4 *puVar5;
  long lVar6;
  int *piVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  BaseBufferResource *this_03;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined8 local_80 [3];
  undefined8 local_68 [6];
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pSVar4 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    SpringChargeManager::UpdateLoginDatas(pSVar4,(vector *)(param_2 + 0x30));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    local_80[0] = FUN_03944ed0(*(undefined8 *)(param_2 + 0x18));
    local_68[0] = FUN_03944f20(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_80,(__normal_iterator *)local_68), bVar2) {
      puVar5 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_80);
      local_38 = *puVar5;
      uStack_34 = puVar5[1];
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::push_back
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)avStack_98,
                 (NDLoginRewardBonus *)&local_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_80);
    }
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)local_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
    local_b8 = FUN_03944ed0(*(undefined8 *)(param_2 + 0x18));
    local_b0 = FUN_03944f20(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar2)
    {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
      ProfileChangeItemAmountExpPlant((int)this,*piVar7,SUB41(piVar7[1],0));
      local_a8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            local_68,(int *)&local_38);
      local_a0 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)local_68);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)&local_a0);
      if (bVar2) {
        lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a8);
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + local_30;
      }
      else {
        piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)local_68,(int *)&local_38);
        *piVar7 = local_30;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)local_80,(int *)&local_38);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
    }
    UIRedPacketResult::create((map *)local_68,(vector *)local_80,true);
    Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
    SpringChargeManager::GetLoginDatas();
    cVar3 = std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::empty
                      ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)&local_38);
    if (cVar3 == '\0') {
      piVar7 = (int *)FUN_039436f4(CONCAT44(uStack_34,local_38),6);
      if (*piVar7 < *(int *)(this + 0x100)) {
        *(int *)(this + 0x100) = *piVar7;
      }
    }
    InitView(this);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    local_a8 = FUN_03944ed0(*(undefined8 *)(param_2 + 0x18));
    local_a0 = FUN_03944f20(*(undefined8 *)(param_2 + 0x20));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2)
    {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
      this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar3 = NameMapperBase::ContainsId(this_02,*piVar7);
      if (cVar3 != '\0') {
        PlayerInfo::addExperiencePlants(this_01,*piVar7);
        this_03 = (BaseBufferResource *)ServerTime::Instance();
        lVar6 = Sexy::BaseBufferResource::GetPtr(this_03);
        iVar1 = piVar7[1];
        pSVar4 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
        SpringChargeManager::setEndTimeByPlantId(pSVar4,*piVar7,lVar6 + iVar1 * 0x15180);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
    }
    std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::~vector
              ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)&local_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_80);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_68);
    std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
              ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)avStack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityScrollPanel::SpringAwardActivityScrollPanel(Sexy::TRect<int>&,
   SpringDailyLoginConfig&) */

void __thiscall
SpringAwardActivityScrollPanel::SpringAwardActivityScrollPanel
          (SpringAwardActivityScrollPanel *this,TRect *param_1,SpringDailyLoginConfig *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  *(undefined ***)this = &PTR_GetClass_066ceab0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066cedd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  SpringDailyLoginConfig::SpringDailyLoginConfig((SpringDailyLoginConfig *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x1a0));
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifySpringLoginReward);
  local_40 = local_10;
  local_50 = local_20;
  uStack_48 = uStack_18;
  MessageRouter::
  Subscribe<bool,S2C_7DaysLoginSpringReward_const*,Sexy::CBMemberTranslatorX<SpringAwardActivityScrollPanel,void(SpringAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginSpringReward_const*)>>
            ((MessageRouter *)puVar2,Message::GL7DaysLoginSpringReward,&local_50);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1a0) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1a8) = uVar1;
  SpringDailyLoginConfig::operator=((SpringDailyLoginConfig *)(this + 0xf8),param_2);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringAwardActivityScrollPanel::loadData(Sexy::TRect<int>&, SpringDailyLoginConfig&) */

void __thiscall
SpringAwardActivityScrollPanel::loadData
          (SpringAwardActivityScrollPanel *this,TRect *param_1,SpringDailyLoginConfig *param_2)

{
  (**(code **)(*(long *)this + 0x1a0))();
  SpringDailyLoginConfig::operator=((SpringDailyLoginConfig *)(this + 0xf8),param_2);
  return;
}

