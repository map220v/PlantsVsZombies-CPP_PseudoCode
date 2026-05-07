// Class: TWScrollPanel


/* TWScrollPanel::SetGetReward(int) */

void __thiscall TWScrollPanel::SetGetReward(TWScrollPanel *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0xd8);
  uVar1 = FUN_04a45110(uVar3,*(undefined8 *)(this + 0xe0));
  if (uVar1 <= (ulong)(long)param_1) {
    return;
  }
  puVar2 = (undefined8 *)FUN_04a4511c(uVar3,(long)param_1);
  TWRewardContent::setGetReward((TWRewardContent *)*puVar2);
  return;
}


/* TWScrollPanel::~TWScrollPanel() */

void __thiscall TWScrollPanel::~TWScrollPanel(TWScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06933b10;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<TWRewardContent*,std::allocator<TWRewardContent*>>::~vector
            ((vector<TWRewardContent*,std::allocator<TWRewardContent*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TWScrollPanel::~TWScrollPanel() */

void __thiscall TWScrollPanel::~TWScrollPanel(TWScrollPanel *this)

{
  ~TWScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWScrollPanel::InitView() */

void __thiscall TWScrollPanel::InitView(TWScrollPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  PlayerInfo *pPVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *this_01;
  TWRewardListData *pTVar10;
  TWRewardContent *this_02;
  TWRewardData *pTVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  TWRewardContent *local_c0;
  TWRewardData aTStack_b8 [16];
  string asStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [16];
  undefined1 auStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar15 = 0;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
  iVar13 = 0;
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = FUN_04a45288(10);
  iVar12 = (int)((float)iVar2 + (float)(*(int *)(this + 0x50) - (iVar1 * 5 + iVar2 * 4)) * 0.5);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = FUN_04a45288(5);
  iVar1 = iVar1 + iVar2;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  FUN_05475d88(asStack_a8,auStack_78);
  iVar6 = PlayerInfo::GetTwDailySignDay(pPVar8,asStack_a8);
  std::string::~string(asStack_a8);
  pTVar10 = (TWRewardListData *)
            DailySignRewardWithTW::getRewardListData(*(DailySignRewardWithTW **)(this + 0xf0));
  TWRewardListData::TWRewardListData((TWRewardListData *)asStack_a8,pTVar10);
  iVar2 = iVar12;
  while( true ) {
    iVar14 = (int)lVar15;
    iVar7 = FUN_04a450e0(local_a0,local_98);
    if (iVar7 <= iVar14) break;
    this_02 = ::operator_new(0x130);
    TWRewardContent::TWRewardContent(this_02,iVar14 < iVar6 && 0 < iVar6);
    local_c0 = this_02;
    pTVar11 = (TWRewardData *)FUN_04a45108(local_a0,lVar15);
    TWRewardData::TWRewardData(aTStack_b8,pTVar11);
    TWRewardContent::InitView(this_02,aTStack_b8,1);
    TWRewardData::~TWRewardData(aTStack_b8);
    if (((iVar14 / 5) * 5 == iVar14) && (0 < iVar14)) {
      iVar13 = iVar13 + iVar1;
      iVar2 = iVar12;
    }
    lVar15 = lVar15 + 1;
    (**(code **)(*(long *)local_c0 + 0x198))
              (local_c0,iVar2 - (iVar4 - iVar5) / 2,iVar13,iVar3 + (iVar4 - iVar5),iVar1);
    (**(code **)(*(long *)this + 0x60))(this,local_c0);
    iVar7 = FUN_04a45288(10);
    iVar2 = iVar2 + iVar3 + iVar7;
    std::vector<TWRewardContent*,std::allocator<TWRewardContent*>>::push_back
              ((vector<TWRewardContent*,std::allocator<TWRewardContent*>> *)(this + 0xd8),&local_c0)
    ;
  }
  *(int *)(this + 0x54) = iVar1 + iVar13;
  TWRewardListData::~TWRewardListData((TWRewardListData *)asStack_a8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TWScrollPanel::TWScrollPanel(Sexy::TRect<int>&, DailySignRewardWithTW*) */

void __thiscall
TWScrollPanel::TWScrollPanel(TWScrollPanel *this,TRect *param_1,DailySignRewardWithTW *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06933b10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  *(DailySignRewardWithTW **)(this + 0xf0) = param_2;
  InitView(this);
  return;
}

