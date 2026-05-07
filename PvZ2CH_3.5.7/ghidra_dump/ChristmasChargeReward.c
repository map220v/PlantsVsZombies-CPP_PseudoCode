// Class: ChristmasChargeReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeReward::GetLayoutName() */

void __thiscall ChristmasChargeReward::GetLayoutName(ChristmasChargeReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChristmasChargeReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ChristmasChargeReward::ButtonDepress(int) */

void __thiscall ChristmasChargeReward::ButtonDepress(ChristmasChargeReward *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<ChristmasChargeReward>::CloseDialog();
  return;
}


/* non-virtual thunk to ChristmasChargeReward::ButtonDepress(int) */

void __thiscall ChristmasChargeReward::ButtonDepress(ChristmasChargeReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* ChristmasChargeReward::ChristmasChargeReward() */

void __thiscall ChristmasChargeReward::ChristmasChargeReward(ChristmasChargeReward *this)

{
  UISingletonDialog<ChristmasChargeReward>::UISingletonDialog
            ((UISingletonDialog<ChristmasChargeReward> *)this);
  *(undefined ***)this = &PTR_GetClass_066cc5a0;
  *(undefined **)(this + 0xd8) = &DAT_066cc8f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeReward::initView() */

void __thiscall ChristmasChargeReward::initView(ChristmasChargeReward *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LotteryResultProgressBar *pLVar9;
  long *plVar10;
  undefined4 *puVar11;
  MiniGameRankRewardContent *this_00;
  SalesProgressBar *this_01;
  long lVar12;
  int iVar13;
  long lVar14;
  code *pcVar15;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  lVar14 = 0;
  std::string::string((string *)&local_10,"Reward_Background");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  iVar3 = FUN_0393a844(*(undefined8 *)(this + 0x138),*(undefined8 *)(this + 0x140));
  lVar1 = plVar10[10];
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  if (0 < iVar3) {
    do {
      puVar11 = (undefined4 *)FUN_0393a850(*(undefined8 *)(this + 0x138),lVar14);
      local_10 = *puVar11;
      local_c = puVar11[1];
      this_00 = ::operator_new(0xe0);
      MiniGameRankRewardContent::MiniGameRankRewardContent(this_00,(NDLoginRewardBonus *)&local_10);
      pcVar15 = *(code **)(*(long *)this_00 + 0x198);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      uVar6 = FUN_0393b0c8(0x17);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
      uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      this_01 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
      uVar8 = SalesProgressBar::GetCurrentLevel(this_01);
      iVar13 = (int)lVar14;
      lVar14 = lVar14 + 1;
      (*pcVar15)(this_00,(int)(((float)((int)lVar1 - iVar4 * iVar3) -
                               (float)iVar2 * 0.4 * (float)(iVar3 + -1)) * 0.5 +
                              (float)iVar13 * ((float)iVar5 + (float)iVar2 * 0.4)),uVar6,uVar7,uVar8
                );
      lVar12 = *plVar10;
      this_00[0x59] = (MiniGameRankRewardContent)0x0;
      (**(code **)(lVar12 + 0x60))(plVar10,this_00);
    } while ((int)lVar14 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasChargeReward::~ChristmasChargeReward() */

void __thiscall ChristmasChargeReward::~ChristmasChargeReward(ChristmasChargeReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066cc5a0;
  *(undefined **)(this + 0xd8) = &DAT_066cc8f0;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x138));
  UISingletonDialog<ChristmasChargeReward>::~UISingletonDialog
            ((UISingletonDialog<ChristmasChargeReward> *)this);
  return;
}


/* ChristmasChargeReward::~ChristmasChargeReward() */

void __thiscall ChristmasChargeReward::~ChristmasChargeReward(ChristmasChargeReward *this)

{
  ~ChristmasChargeReward(this);
  AK::FreeHook(this);
  return;
}


/* ChristmasChargeReward::loadData(std::vector<S2C_WechatReward, std::allocator<S2C_WechatReward> >
   const&) */

void __thiscall ChristmasChargeReward::loadData(ChristmasChargeReward *this,vector *param_1)

{
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::operator=
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x138),param_1);
  return;
}

