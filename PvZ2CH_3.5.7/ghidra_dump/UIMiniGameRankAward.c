// Class: UIMiniGameRankAward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRankAward::GetLayoutName() */

void __thiscall UIMiniGameRankAward::GetLayoutName(UIMiniGameRankAward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"MiniGameReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRankAward::getMiniCoinNum() const */

void __thiscall UIMiniGameRankAward::getMiniCoinNum(UIMiniGameRankAward *this)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0393b498(*(undefined8 *)(this + 0x138));
  local_10 = FUN_0393b4e8(*(undefined8 *)(this + 0x140));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_0393b5b8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar3 == 0x5ac3) {
      uVar2 = piVar3[1];
      goto LAB_0393b5b8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* UIMiniGameRankAward::ButtonDepress(int) */

void __thiscall UIMiniGameRankAward::ButtonDepress(UIMiniGameRankAward *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  int iVar1;
  
  if (param_1 != 0) {
    return;
  }
  iVar1 = getMiniCoinNum(this);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestMiniGameRewardEnd(this_01,(string *)(this + 0x158),iVar1);
  return;
}


/* non-virtual thunk to UIMiniGameRankAward::ButtonDepress(int) */

void __thiscall UIMiniGameRankAward::ButtonDepress(UIMiniGameRankAward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRankAward::OnRequestBossRewardEnd(bool) */

void UIMiniGameRankAward::OnRequestBossRewardEnd(bool param_1)

{
  bool bVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)((ulong)param_1 + 0x138));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)((ulong)param_1 + 0x138));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == 0xbc0) {
      PlayerInfo::AddGems(this_00,piVar2[1],true);
    }
    else {
      PlayerInfo::AddCommonGachaReward((int)this_00,*piVar2,SUB41(piVar2[1],0),true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  UISingletonDialog<UIMiniGameRankAward>::CloseDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameRankAward::UIMiniGameRankAward() */

void __thiscall UIMiniGameRankAward::UIMiniGameRankAward(UIMiniGameRankAward *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIMiniGameRankAward>::UISingletonDialog
            ((UISingletonDialog<UIMiniGameRankAward> *)this);
  *(undefined ***)this = &PTR_GetClass_066cc200;
  *(undefined **)(this + 0xd8) = &DAT_066cc550;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  *(undefined4 *)(this + 0x150) = 0;
  Set8BytesTo0(this + 0x158);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestBossRewardEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIMiniGameRankAward,void(UIMiniGameRankAward::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyMiniGameRewardEnd,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMiniGameRankAward::initView() */

void __thiscall UIMiniGameRankAward::initView(UIMiniGameRankAward *this)

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
  UIWidgetText *pUVar11;
  undefined4 *puVar12;
  MiniGameRankRewardContent *this_00;
  SalesProgressBar *this_01;
  long lVar13;
  int iVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  lVar15 = 0;
  std::string::string((string *)&local_10,"Reward_Background");
  plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  iVar3 = FUN_0393a814(*(undefined8 *)(this + 0x138),*(undefined8 *)(this + 0x140));
  lVar1 = plVar10[10];
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb948);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  std::string::string((string *)&local_10,"TextTip");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  iVar5 = (int)auStack_20;
  std::string::string(asStack_18,"[MINIGAME_REWARD_RANK_TIP]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)asStack_18,(string *)&DAT_0570d078,
             (wchar_t *)(ulong)*(uint *)(this + 0x150),iVar5);
  PuzzleTip::SetTip(pUVar11,(string *)&local_10);
  FUN_05476c50((string *)&local_10);
  std::string::~string(asStack_18);
  nop();
  if (0 < iVar3) {
    do {
      puVar12 = (undefined4 *)FUN_0393a83c(*(undefined8 *)(this + 0x138),lVar15);
      local_10 = *puVar12;
      local_c = puVar12[1];
      this_00 = ::operator_new(0xe0);
      MiniGameRankRewardContent::MiniGameRankRewardContent(this_00,(NDLoginRewardBonus *)&local_10);
      pcVar16 = *(code **)(*(long *)this_00 + 0x198);
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
      iVar14 = (int)lVar15;
      lVar15 = lVar15 + 1;
      (*pcVar16)(this_00,(int)(((float)((int)lVar1 - iVar4 * iVar3) -
                               (float)iVar2 * 0.4 * (float)(iVar3 + -1)) * 0.5 +
                              (float)iVar14 * ((float)iVar5 + (float)iVar2 * 0.4)),uVar6,uVar7,uVar8
                );
      lVar13 = *plVar10;
      this_00[0x59] = (MiniGameRankRewardContent)0x0;
      (**(code **)(lVar13 + 0x60))(plVar10,this_00);
    } while ((int)lVar15 < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIMiniGameRankAward::~UIMiniGameRankAward() */

void __thiscall UIMiniGameRankAward::~UIMiniGameRankAward(UIMiniGameRankAward *this)

{
  *(undefined **)(this + 0xd8) = &DAT_066cc550;
  *(undefined ***)this = &PTR_GetClass_066cc200;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x158));
  std::vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>>::~vector
            ((vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>> *)(this + 0x138));
  UISingletonDialog<UIMiniGameRankAward>::~UISingletonDialog
            ((UISingletonDialog<UIMiniGameRankAward> *)this);
  return;
}


/* UIMiniGameRankAward::~UIMiniGameRankAward() */

void __thiscall UIMiniGameRankAward::~UIMiniGameRankAward(UIMiniGameRankAward *this)

{
  ~UIMiniGameRankAward(this);
  AK::FreeHook(this);
  return;
}


/* UIMiniGameRankAward::loadData(std::vector<stMiniGameAward_Bonus,
   std::allocator<stMiniGameAward_Bonus> > const&, int, std::string) */

void __thiscall
UIMiniGameRankAward::loadData
          (UIMiniGameRankAward *this,vector *param_1,undefined4 param_2,undefined8 param_4)

{
  std::vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>>::operator=
            ((vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>> *)(this + 0x138),
             param_1);
  *(undefined4 *)(this + 0x150) = param_2;
  thunk_FUN_05475e00(this + 0x158,param_4);
  return;
}

