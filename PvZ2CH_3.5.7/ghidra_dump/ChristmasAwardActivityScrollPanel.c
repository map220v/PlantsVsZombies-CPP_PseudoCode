// Class: ChristmasAwardActivityScrollPanel


/* ChristmasAwardActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
ChristmasAwardActivityScrollPanel::RemoveAllDungeonWidget(ChristmasAwardActivityScrollPanel *this)

{
  std::vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>>::clear
            ((vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityScrollPanel::~ChristmasAwardActivityScrollPanel() */

void __thiscall
ChristmasAwardActivityScrollPanel::~ChristmasAwardActivityScrollPanel
          (ChristmasAwardActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9370;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066c9050;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0xf8));
  std::vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>>::~vector
            ((vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasAwardActivityScrollPanel::~ChristmasAwardActivityScrollPanel() */

void __thiscall
ChristmasAwardActivityScrollPanel::~ChristmasAwardActivityScrollPanel
          (ChristmasAwardActivityScrollPanel *this)

{
  ~ChristmasAwardActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityScrollPanel::InitView() */

void __thiscall ChristmasAwardActivityScrollPanel::InitView(ChristmasAwardActivityScrollPanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  ChristmasAwardActivityWidget *pCVar8;
  vector *pvVar9;
  long lVar10;
  bool bVar11;
  code *pcVar12;
  ChristmasAwardActivityWidget *local_48;
  Insets aIStack_40 [12];
  int local_34;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03925930(5);
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
    uVar7 = FUN_03925260(*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x118));
    Sexy::OutputDebugStrF((wchar_t *)"ChristmasAwardActivityScrollPanel size() = %d",uVar7);
    do {
      uVar7 = *(undefined8 *)(this + 0x110);
      iVar4 = (int)lVar10;
      iVar6 = FUN_03925260(uVar7,*(undefined8 *)(this + 0x118));
      if (iVar6 <= iVar4) break;
      pvVar9 = (vector *)FUN_03925274(uVar7,lVar10);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20,pvVar9)
      ;
      if ((*(int *)(this + 0xf8) == iVar4) && (this[0xfc] == (ChristmasAwardActivityScrollPanel)0x0)
         ) {
        bVar11 = true;
        uVar7 = 1;
      }
      else {
        bVar11 = false;
        uVar7 = 0;
      }
      lVar10 = lVar10 + 1;
      Sexy::OutputDebugStrF((wchar_t *)"ChristmasAwardActivityScrollPanel isCanAward() = %d",uVar7);
      pCVar8 = ::operator_new(0x1b8);
      ChristmasAwardActivityWidget::ChristmasAwardActivityWidget
                (pCVar8,iVar4,*(int *)(this + 0xf8),bVar11,(vector *)asStack_20);
      local_48 = pCVar8;
      iVar6 = FUN_03925930(5);
      Sexy::Insets::Insets(aIStack_40,0,iVar6 + *(int *)(this + 0x54),iVar2,iVar3);
      pCVar8 = local_48;
      pcVar12 = *(code **)(*(long *)local_48 + 0x1a0);
      iVar4 = FUN_03925930(5);
      iVar6 = *(int *)(this + 0x54);
      iVar5 = FUN_03925930(0x32);
      Sexy::Insets::Insets
                (aIStack_30,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 + iVar6,iVar5 + iVar2,local_34
                );
      (*pcVar12)(pCVar8,aIStack_30);
      ChristmasAwardActivityWidget::Init(local_48);
      (**(code **)(*(long *)this + 0x60))(this,local_48);
      std::vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>>::
      push_back((vector<ChristmasAwardActivityWidget*,std::allocator<ChristmasAwardActivityWidget*>>
                 *)(this + 0xe0),&local_48);
      iVar6 = FUN_03925930(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 + iVar3;
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20);
    } while (lVar10 != 7);
    iVar2 = FUN_03925930(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar2;
    iVar2 = FUN_03925930(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityScrollPanel::OnNotifyChristmasLoginReward(bool, S2C_7DaysLoginReward
   const*) */

void __thiscall
ChristmasAwardActivityScrollPanel::OnNotifyChristmasLoginReward
          (ChristmasAwardActivityScrollPanel *this,bool param_1,S2C_7DaysLoginReward *param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [8];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    local_a0 = FUN_03927500(*(undefined8 *)(param_2 + 0x18));
    local_98 = FUN_03927550(*(undefined8 *)(param_2 + 0x20));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      ProfileChangeItemAmount(*piVar3,piVar3[1],false);
      local_90 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            amStack_68,(int *)aGStack_38);
      local_88 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_68);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_90,(rbtree_iterator *)&local_88);
      if (bVar1) {
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_90);
        *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + local_30;
      }
      else {
        piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)amStack_68,(int *)aGStack_38);
        *piVar3 = local_30;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_80,(int *)aGStack_38);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_2 + 0x30);
    this[0xfc] = (ChristmasAwardActivityScrollPanel)0x1;
    InitView(this);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityScrollPanel::ChristmasAwardActivityScrollPanel(Sexy::TRect<int>&,
   DailyAwardBonus&) */

void __thiscall
ChristmasAwardActivityScrollPanel::ChristmasAwardActivityScrollPanel
          (ChristmasAwardActivityScrollPanel *this,TRect *param_1,DailyAwardBonus *param_2)

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
  *(undefined ***)this = &PTR_GetClass_066c9050;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9370;
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
            ((ReceivedDataCallback *)this,OnNotifyChristmasLoginReward);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_7DaysLoginReward_const*,Sexy::CBMemberTranslatorX<ChristmasAwardActivityScrollPanel,void(ChristmasAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>>
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

