// Class: SignRewardScrollPanel


/* SignRewardScrollPanel::~SignRewardScrollPanel() */

void __thiscall SignRewardScrollPanel::~SignRewardScrollPanel(SignRewardScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06932170;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>>::~vector
            ((vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>> *)
             (this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* SignRewardScrollPanel::~SignRewardScrollPanel() */

void __thiscall SignRewardScrollPanel::~SignRewardScrollPanel(SignRewardScrollPanel *this)

{
  ~SignRewardScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* SignRewardScrollPanel::InitView() */

void __thiscall SignRewardScrollPanel::InitView(SignRewardScrollPanel *this)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ProfileMgr *this_00;
  long lVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *this_01;
  DailySignRewardContent *this_02;
  int iVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar11 = ProfileMgr::GetCurrentProfile(this_00);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  iVar5 = FUN_04a3aff4(0x14);
  iVar6 = FUN_04a3aff4(10);
  iVar13 = (int)((float)iVar6 + (float)(*(int *)(this + 0x50) - (iVar5 * 3 + iVar4 * 4)) * 0.5);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  pLVar12 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa68);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7aa00);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar8 = FUN_04a3aff4(5);
  iVar4 = iVar4 - iVar8;
  uVar9 = FUN_04a3ad40(*(undefined4 *)(lVar11 + 0xa48));
  bVar3 = FUN_04a3ad44(*(undefined1 *)(lVar11 + 0xa98));
  if (*(int *)(this + 0xd4) < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    uVar15 = 0;
    iVar14 = iVar13;
    do {
      uVar1 = uVar15 + 1;
      bVar16 = true;
      if ((uVar9 == uVar1) && (bVar3 == 0)) {
LAB_04a3f598:
        bVar2 = uVar9 == uVar1;
        bVar17 = (bool)(bVar2 & bVar3);
      }
      else {
        bVar16 = false;
        bVar2 = false;
        bVar17 = true;
        if ((int)uVar9 <= (int)uVar1) goto LAB_04a3f598;
      }
      this_02 = ::operator_new(0x158);
      DailySignRewardContent::DailySignRewardContent
                (this_02,uVar15,bVar17,bVar16,bVar2,(bool)this[0xd1]);
      if (((uVar15 & 3) == 0) && (0 < (int)uVar15)) {
        iVar8 = iVar8 + iVar4;
        iVar14 = iVar13;
      }
      (**(code **)(*(long *)this_02 + 0x198))
                (this_02,iVar14 - (iVar6 - iVar7) / 2,iVar8,iVar5 + (iVar6 - iVar7),iVar4);
      (**(code **)(*(long *)this + 0x60))(this,this_02);
      iVar10 = FUN_04a3aff4(0x14);
      iVar14 = iVar14 + iVar5 + iVar10;
      uVar15 = uVar1;
    } while ((int)uVar1 < *(int *)(this + 0xd4));
  }
  *(int *)(this + 0x54) = iVar8 + iVar4;
  return;
}


/* SignRewardScrollPanel::SignRewardScrollPanel(Sexy::TRect<int>&, int) */

void __thiscall
SignRewardScrollPanel::SignRewardScrollPanel(SignRewardScrollPanel *this,TRect *param_1,int param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_2;
  *(undefined ***)this = &PTR_GetClass_06932170;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>>::clear
            ((vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>> *)
             (this + 0xd8));
  InitView(this);
  return;
}


/* SignRewardScrollPanel::SignRewardScrollPanel(Sexy::TRect<int>&, int, bool) */

void __thiscall
SignRewardScrollPanel::SignRewardScrollPanel
          (SignRewardScrollPanel *this,TRect *param_1,int param_2,bool param_3)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd4) = param_2;
  this[0xd1] = (SignRewardScrollPanel)param_3;
  *(undefined ***)this = &PTR_GetClass_06932170;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>>::clear
            ((vector<DailySignRewardContent*,std::allocator<DailySignRewardContent*>> *)
             (this + 0xd8));
  InitView(this);
  return;
}

