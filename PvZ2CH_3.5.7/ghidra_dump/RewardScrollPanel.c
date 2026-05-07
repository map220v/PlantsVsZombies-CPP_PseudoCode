// Class: RewardScrollPanel


/* RewardScrollPanel::~RewardScrollPanel() */

void __thiscall RewardScrollPanel::~RewardScrollPanel(RewardScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06931710;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<LoginRewardContent*,std::allocator<LoginRewardContent*>>::~vector
            ((vector<LoginRewardContent*,std::allocator<LoginRewardContent*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RewardScrollPanel::~RewardScrollPanel() */

void __thiscall RewardScrollPanel::~RewardScrollPanel(RewardScrollPanel *this)

{
  ~RewardScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RewardScrollPanel::InitView() */

void __thiscall RewardScrollPanel::InitView(RewardScrollPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *this_02;
  vector *pvVar13;
  LoginRewardContent *this_03;
  int *piVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar17 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = FUN_04a38b1c(0x14);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a170);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar1 = iVar4 + (iVar5 - iVar6);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a4f8);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_02);
  iVar8 = FUN_04a38b1c(200);
  pvVar13 = (vector *)PlayerInfo::GetHasGotRewardList(this_01);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_20,pvVar13);
  iVar9 = FUN_04a38a14(*(undefined4 *)(this_01 + 0xa48));
  while( true ) {
    piVar14 = (int *)FUN_04a38a18(local_20[0],lVar17);
    iVar11 = *piVar14;
    if (iVar11 != 0) {
      iVar16 = (&DAT_05754e60)[lVar17];
      bVar15 = false;
    }
    else {
      iVar16 = (&DAT_05754e60)[lVar17];
      bVar15 = iVar16 <= iVar9;
    }
    iVar2 = iVar3 - (iVar5 - iVar6) / 2;
    this_03 = ::operator_new(0x120);
    LoginRewardContent::LoginRewardContent(this_03,(int)lVar17,iVar11 != 0,bVar15,iVar9 == iVar16);
    uVar10 = FUN_04a38b1c(0x14);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar2,uVar10,iVar1,iVar7 + iVar8);
    if (lVar17 == 9) break;
    lVar17 = lVar17 + 1;
    pLVar12 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7a268);
    iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
    iVar3 = iVar4 + iVar3 + iVar11;
    uVar10 = FUN_04a38b1c(0x14);
    (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar2,uVar10,iVar11 + iVar1,iVar7 + iVar8);
    (**(code **)(*(long *)this + 0x60))(this,this_03);
  }
  (**(code **)(*(long *)this + 0x60))(this,this_03);
  *(int *)(this + 0x50) = iVar4 + iVar3;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RewardScrollPanel::RewardScrollPanel(Sexy::TRect<int>&) */

void __thiscall RewardScrollPanel::RewardScrollPanel(RewardScrollPanel *this,TRect *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06931710;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<LoginRewardContent*,std::allocator<LoginRewardContent*>>::clear
            ((vector<LoginRewardContent*,std::allocator<LoginRewardContent*>> *)(this + 0xd8));
  InitView(this);
  return;
}

