// Class: StoneLottery


/* StoneLottery::HideAllButtonAndAnims() */

void __thiscall StoneLottery::HideAllButtonAndAnims(StoneLottery *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 800);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x328);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x318);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x350);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x330);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* StoneLottery::RecoverAllButtonAndAnims() */

void __thiscall StoneLottery::RecoverAllButtonAndAnims(StoneLottery *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 800);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x328);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x318);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x350);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x330);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
  }
  return;
}


/* StoneLottery::OnNotifyRefresh(bool, std::set<int, std::less<int>, std::allocator<int> > const&)
    */

void StoneLottery::OnNotifyRefresh(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    LawnApp::ShowNetworkError(gLawnApp);
    LawnApp::KillStoneLottery(gLawnApp);
    return;
  }
  (**(code **)(*(long *)(ulong)param_1 + 0x338))();
  return;
}


/* StoneLottery::Refresh() */

void __thiscall StoneLottery::Refresh(StoneLottery *this)

{
  (**(code **)(*(long *)this + 0x330))(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::SetDeliveryInfo(std::string, std::string) */

void __thiscall StoneLottery::SetDeliveryInfo(StoneLottery *this,string *param_2,string *param_3)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString(param_2);
  FUN_054766c8(this + 0x2c0,auStack_10);
  FUN_05476c50(auStack_10);
  Sexy::ToWString(param_3);
  FUN_054766c8(this + 0x2c8,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLottery::SetPrizeWinOrNot(bool) */

void __thiscall StoneLottery::SetPrizeWinOrNot(StoneLottery *this,bool param_1)

{
  this[0x129] = (StoneLottery)param_1;
  return;
}


/* StoneLottery::OnStartLottery() */

void __thiscall StoneLottery::OnStartLottery(StoneLottery *this)

{
  RechargeWelfareUI *this_00;
  long *plVar1;
  
  this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  if (this_00 != (RechargeWelfareUI *)0x0) {
    RechargeWelfareUI::DisabledAllButtons(this_00);
  }
  plVar1 = *(long **)(this + 0x318);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 800);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x328);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x330);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x340);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  plVar1 = *(long **)(this + 0x348);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  return;
}


/* StoneLottery::OnFinishLottery() */

void StoneLottery::OnFinishLottery(void)

{
  RechargeWelfareUI *this;
  
  this = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  if (this != (RechargeWelfareUI *)0x0) {
    RechargeWelfareUI::EnabledAllButtons(this);
    return;
  }
  return;
}


/* StoneLottery::CloseBonusEffect() */

void __thiscall StoneLottery::CloseBonusEffect(StoneLottery *this)

{
  bool bVar1;
  long *plVar2;
  
  if (*(StoneLotteryPanel **)(this + 0x350) != (StoneLotteryPanel *)0x0) {
    StoneLotteryPanel::CloseBonusEffect(*(StoneLotteryPanel **)(this + 0x350));
  }
  plVar2 = *(long **)(this + 800);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x318);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x328);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x330);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x338);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x340);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x348);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  bVar1 = std::operator==(L"",(wstring *)(this + 0x2c8));
  if (((bVar1) || (bVar1 = std::operator==(L"",(wstring *)(this + 0x2c0)), bVar1)) &&
     (this[0x129] != (StoneLottery)0x0)) {
    LawnApp::ShowGLDeliveryUI(gLawnApp);
    return;
  }
  return;
}


/* StoneLottery::SetBonus(int, int) */

void __thiscall StoneLottery::SetBonus(StoneLottery *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  
  if (*(long *)(this + 0x350) != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar3 == 0) {
      iVar2 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0391541c(*(undefined4 *)(lVar3 + 0x1058));
      iVar2 = *(int *)(this + 0x2f8) - *(int *)(this + 0x2f4);
    }
    FUN_03915420(*(long *)(this + 0x350) + 0x10c,*(int *)(this + 0x2f0) - iVar2);
    FUN_03915428(*(long *)(this + 0x350) + 0x110,uVar1);
    StoneLotteryPanel::SetBonus(*(StoneLotteryPanel **)(this + 0x350),param_1,param_2);
    return;
  }
  return;
}


/* StoneLottery::ShowWindow() */

void __thiscall StoneLottery::ShowWindow(StoneLottery *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  LawnApp::RefreshStoneLottery(gLawnApp);
  cVar1 = LawnApp::IsStoneLotteryValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(*(long *)this + 0x330))(this,0);
  uVar3 = operator|(0x10,0x20);
  uVar3 = operator|(uVar3,0x1000);
  uVar2 = operator|(uVar3,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,this,uVar2);
  (**(code **)(*(long *)this + 0x310))(this);
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::JoinActivity,"Comsume_Gems_Event");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::GetBannerImage() */

void StoneLottery::GetBannerImage(void)

{
  long in_x0;
  CachedUIResourcePtr *this;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  if (*(int *)(in_x0 + 0x2e8) == 1) {
    if (*(char *)(in_x0 + 0x12a) == '\0') {
      this = (CachedUIResourcePtr *)&DAT_06aba7a0;
    }
    else {
      this = (CachedUIResourcePtr *)&DAT_06aba520;
    }
  }
  else if (*(int *)(in_x0 + 0x2e8) == 2) {
    if (*(char *)(in_x0 + 0x12a) == '\0') {
      this = (CachedUIResourcePtr *)&DAT_06aba200;
    }
    else {
      this = (CachedUIResourcePtr *)&DAT_06ababa8;
    }
  }
  else {
    this = (CachedUIResourcePtr *)&DAT_06aba5e8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::Draw(Sexy::Graphics*) */

void __thiscall StoneLottery::Draw(StoneLottery *this,Graphics *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  Insets aIStack_50 [16];
  Insets aIStack_40 [8];
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba300);
  PopingWidget::GetMainRect();
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abab00);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x15c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba278);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x16c));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1fc));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  cVar1 = FUN_039153c8(this[0x115]);
  if (cVar1 == '\0') {
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2a8,this + 0x21c,uVar2,aIStack_40,3,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2b0,this + 0x22c,uVar2,aIStack_40,3,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_40,2);
    WriteWordInRect(param_1,this + 0x2b8,this + 0x23c,uVar2,aIStack_40,3,1);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_40,1);
    WriteWordInRect(param_1,this + 0x2d0,this + 0x24c,uVar2,aIStack_40,0,1);
  }
  else {
    if ((*(LinkButton **)(this + 0x330) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x330)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1ac));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x338) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x338)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1bc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x340) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x340)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1cc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if ((*(LinkButton **)(this + 0x348) != (LinkButton *)0x0) &&
       (cVar1 = LinkButton::CanDraw(*(LinkButton **)(this + 0x348)), cVar1 != '\0')) {
      LinkButton::GetButtonImage();
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aIStack_50);
      Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x1dc));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,pRVar3,aIStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_50);
    }
    if (*(long *)(this + 800) != 0) {
      PVZ2UIButton::GetImageNormal();
      uVar2 = local_38;
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x27c));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_50);
    }
    if (*(long *)(this + 0x328) != 0) {
      PVZ2UIButton::GetImageNormal();
      Sexy::Insets::Insets(aIStack_50,(Insets *)(this + 0x1ec));
      PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,local_38,aIStack_50);
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba328);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x17c));
    PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
    Sexy::Insets::Insets(aIStack_40,(Insets *)(this + 0x18c));
    PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar2,aIStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::HasLoadedGroup(std::string) */

void __thiscall StoneLottery::HasLoadedGroup(StoneLottery *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x358);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_10 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_2);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::ReleaseResourceGroups() */

void __thiscall StoneLottery::ReleaseResourceGroups(StoneLottery *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x358);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    LawnApp::DeleteGroup(gLawnApp,psVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::~StoneLottery() */

void __thiscall StoneLottery::~StoneLottery(StoneLottery *this)

{
  undefined *puVar1;
  PrimeText *this_00;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066c56a0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c59f8;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ReleaseResourceGroups(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x340);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<StoneLottery,void(StoneLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartLottery);
  Sexy::Delegate0::Delegate0<StoneLottery,void(StoneLottery::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::StartStoneLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishLottery);
  Sexy::Delegate0::Delegate0<StoneLottery,void(StoneLottery::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Unsubscribe((MessageRouter *)puVar1,Message::FinishStoneLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLotteryReward);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Unsubscribe<S2C_StoneLotteryReward_const&,Sexy::CBMemberTranslatorX<StoneLottery,void(StoneLottery::*)(S2C_StoneLotteryReward_const&)>>
            ((MessageRouter *)puVar1,Message::StoneLotteryReward,&local_b0);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x358));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x310));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x308));
  FUN_05476c50(this + 0x2d0);
  FUN_05476c50(this + 0x2c8);
  FUN_05476c50(this + 0x2c0);
  FUN_05476c50(this + 0x2b8);
  FUN_05476c50(this + 0x2b0);
  FUN_05476c50(this + 0x2a8);
  FUN_05476c50(this + 0x2a0);
  FUN_05476c50(this + 0x298);
  FUN_05476c50(this + 0x290);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLottery::~StoneLottery() */

void __thiscall StoneLottery::~StoneLottery(StoneLottery *this)

{
  ~StoneLottery(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::AddLoadingGroup(std::string) */

void __thiscall StoneLottery::AddLoadingGroup(StoneLottery *this,string *param_2)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  cVar1 = HasLoadedGroup(this,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x358),param_2);
    LawnApp::LoadGroup(gLawnApp,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::AddResourceGroups() */

void __thiscall StoneLottery::AddResourceGroups(StoneLottery *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_GLLottery");
  AddLoadingGroup(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_ActivityCommon");
  AddLoadingGroup(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::StoneLottery() */

void __thiscall StoneLottery::StoneLottery(StoneLottery *this)

{
  undefined *puVar1;
  char cVar2;
  PrimeText *this_00;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *local_c0;
  undefined8 uStack_b8;
  LineBreakCategory *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  LineBreakCategory aLStack_78 [8];
  string asStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  LineBreakCategory *local_50;
  undefined8 uStack_48;
  LineBreakCategory *local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  pLVar4 = aLStack_78;
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  this[0x128] = (StoneLottery)0x0;
  this[0x129] = (StoneLottery)0x0;
  *(undefined ***)this = &PTR_GetClass_066c56a0;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066c59f8;
  this[0x12a] = (StoneLottery)0x0;
  Sexy::Insets::Insets((Insets *)(this + 300));
  Sexy::Insets::Insets((Insets *)(this + 0x13c));
  Sexy::Insets::Insets((Insets *)(this + 0x14c));
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  Sexy::Insets::Insets((Insets *)(this + 0x16c));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  Sexy::Insets::Insets((Insets *)(this + 0x18c));
  Sexy::Insets::Insets((Insets *)(this + 0x19c));
  Sexy::Insets::Insets((Insets *)(this + 0x1ac));
  Sexy::Insets::Insets((Insets *)(this + 0x1bc));
  Sexy::Insets::Insets((Insets *)(this + 0x1cc));
  Sexy::Insets::Insets((Insets *)(this + 0x1dc));
  Sexy::Insets::Insets((Insets *)(this + 0x1ec));
  Sexy::Insets::Insets((Insets *)(this + 0x1fc));
  Sexy::Insets::Insets((Insets *)(this + 0x20c));
  Sexy::Insets::Insets((Insets *)(this + 0x21c));
  Sexy::Insets::Insets((Insets *)(this + 0x22c));
  Sexy::Insets::Insets((Insets *)(this + 0x23c));
  Sexy::Insets::Insets((Insets *)(this + 0x24c));
  Sexy::Insets::Insets((Insets *)(this + 0x25c));
  Sexy::Insets::Insets((Insets *)(this + 0x26c));
  Sexy::Insets::Insets((Insets *)(this + 0x27c));
  FUN_05478178(this + 0x290,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x298,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2a0,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2a8,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2b0,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2b8,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2c0,&DAT_056f11a8,&local_50);
  nop();
  FUN_05478178(this + 0x2c8,&DAT_056f11a8,&local_50);
  nop();
  FUN_05476574(this + 0x2d0);
  Sexy::Color::Color((Color *)(this + 0x2d8),1);
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined4 *)(this + 0x2ec) = 1;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x308));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x310));
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x358));
  AddResourceGroups(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x340);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<StoneLottery,void(StoneLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnStartLottery);
  Sexy::Delegate0::Delegate0<StoneLottery,void(StoneLottery::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StartStoneLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishLottery);
  Sexy::Delegate0::Delegate0<StoneLottery,void(StoneLottery::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishStoneLottery,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLotteryReward);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  pLVar5 = local_40;
  pLVar6 = local_50;
  MessageRouter::
  Subscribe<S2C_StoneLotteryReward_const&,Sexy::CBMemberTranslatorX<StoneLottery,void(StoneLottery::*)(S2C_StoneLotteryReward_const&)>>
            ((MessageRouter *)puVar1,Message::StoneLotteryReward,&local_c0);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this[0x12a] = (StoneLottery)0x1;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_70,"TestAndroid");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_70,pLVar4,pLVar5,pLVar6);
  std::string::~string(asStack_70);
  nop();
  if (cVar2 != '\0') {
    this[0x12a] = (StoneLottery)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLottery::SetBonusList(std::vector<LotteryBonus, std::allocator<LotteryBonus> >&) */

void __thiscall StoneLottery::SetBonusList(StoneLottery *this,vector *param_1)

{
  int iVar1;
  StoneLotteryPanel *this_00;
  
  if (*(long *)(this + 0x350) != 0) {
    return;
  }
  this_00 = ::operator_new(0x1b8);
  StoneLotteryPanel::StoneLotteryPanel(this_00);
  *(StoneLotteryPanel **)(this + 0x350) = this_00;
  StoneLotteryPanel::SetBonusList(this_00,param_1);
  iVar1 = FUN_03915430(*(undefined4 *)(this + 0x2e8));
  StoneLotteryPanel::SetPeriod(*(StoneLotteryPanel **)(this + 0x350),iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::SetInitInfo(int, int, int, int, bool) */

void __thiscall
StoneLottery::SetInitInfo
          (StoneLottery *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  ProfileMgr *this_00;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x2f0) = param_3;
  *(int *)(this + 0x2e8) = param_1;
  *(int *)(this + 0x2ec) = param_2;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x2f4) = param_4;
  this[0x2fc] = (StoneLottery)param_5;
  Sexy::StrFormat(L"%d",auStack_10,(ulong)(uint)param_2);
  FUN_054766c8(this + 0x2a8,auStack_10);
  FUN_05476c50(auStack_10);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 == 0) {
    Sexy::StrFormat(L"%d",auStack_10,0);
    FUN_054766c8(this + 0x2b0,auStack_10);
    FUN_05476c50(auStack_10);
    uVar2 = *(uint *)(this + 0x2f4);
    iVar5 = *(int *)(this + 0x2f8);
    iVar4 = *(int *)(this + 0x2ec);
    uVar1 = 0;
    if ((int)uVar2 < 1) {
      uVar6 = 0;
      goto LAB_0391d80c;
    }
LAB_0391d7f0:
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = (int)(uVar1 - iVar4 * (iVar5 - uVar2)) / iVar4;
    }
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
  }
  else {
    uVar1 = FUN_0391541c(*(undefined4 *)(lVar3 + 0x1058));
    Sexy::StrFormat(L"%d",auStack_10,(ulong)uVar1);
    FUN_054766c8(this + 0x2b0,auStack_10);
    FUN_05476c50(auStack_10);
    uVar2 = *(uint *)(this + 0x2f4);
    iVar5 = *(int *)(this + 0x2f8);
    iVar4 = *(int *)(this + 0x2ec);
    if (0 < (int)uVar2) goto LAB_0391d7f0;
    uVar6 = 0;
  }
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
LAB_0391d80c:
  Sexy::StrFormat(L" %d",auStack_10,(ulong)uVar6);
  FUN_054766c8(this + 0x2b8,auStack_10);
  FUN_05476c50(auStack_10);
  if (*(StoneLotteryPanel **)(this + 0x350) != (StoneLotteryPanel *)0x0) {
    StoneLotteryPanel::setOncePay(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2ec));
    PennyClassroomDisplayWidget::UpdateProgress
              (*(PennyClassroomDisplayWidget **)(this + 0x350),*(int *)(this + 0x2f0));
    StoneLotteryPanel::SetPanelChances(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2f4))
    ;
    StoneLotteryPanel::updateLotteryBtn(*(StoneLotteryPanel **)(this + 0x350));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StoneLottery::OnLotteryReward(S2C_StoneLotteryReward const&) */

void __thiscall StoneLottery::OnLotteryReward(StoneLottery *this,S2C_StoneLotteryReward *param_1)

{
  SetInitInfo(this,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c),
              *(int *)(param_1 + 0x20),(bool)param_1[0x24]);
  SetBonus(this,*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::NationalDayStoneLottery,
             *(int *)(param_1 + 0x28),*(int *)(param_1 + 0x2c));
  Refresh(this);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GLLotteryResult,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::InitView(bool) */

void __thiscall StoneLottery::InitView(StoneLottery *this,bool param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  PVZ2UIButton *pPVar11;
  int local_98;
  undefined1 auStack_88 [8];
  int local_80;
  PVZ2UIImage aPStack_78 [4];
  int local_74;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (StoneLottery)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x308);
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba570);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba570);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar6 = (iVar2 << 1) / 3;
  iVar3 = FUN_03915908(0x2e4);
  iVar4 = FUN_03915908(600);
  iVar8 = *(int *)(this + 0x54) - iVar4 >> 1;
  iVar5 = *(int *)(this + 0x50) - iVar3 >> 1;
  iVar7 = iVar5 + iVar3 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar8 + iVar6,iVar3,iVar4 - iVar6);
  iVar5 = iVar7 - iVar1 / 2;
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar8,iVar1,iVar2);
  *(undefined8 *)(this + 0x13c) = local_40;
  *(undefined8 *)(this + 0x144) = uStack_38;
  Sexy::Insets::Insets((Insets *)&local_40,iVar5,iVar8,iVar1,(iVar2 * 5) / 6);
  *(undefined8 *)(this + 300) = local_40;
  *(undefined8 *)(this + 0x134) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_GEMS_TITLE]");
  FUN_054766c8(this + 0x290,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  GetBannerImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  pLVar9 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar7 - iVar5 / 2,iVar8 + iVar6 + (iVar2 - iVar6),iVar5,iVar1);
  *(undefined8 *)(this + 0x15c) = local_40;
  *(undefined8 *)(this + 0x164) = uStack_38;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba278);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba278);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar8 = *(int *)(this + 0x160);
  iVar5 = *(int *)(this + 0x168);
  iVar2 = FUN_03915908(0xe);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 - iVar6 / 2,iVar8 + iVar5 + iVar2 / 2,iVar6,iVar1);
  *(undefined8 *)(this + 0x16c) = local_40;
  *(undefined8 *)(this + 0x174) = uStack_38;
  iVar8 = *(int *)(this + 0x178);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7 - iVar8 / 2,*(int *)(this + 0x170),iVar8,iVar8);
  *(undefined8 *)(this + 0x17c) = local_40;
  *(undefined8 *)(this + 0x184) = uStack_38;
  if ((!param_1) && (*(StoneLotteryPanel **)(this + 0x350) != (StoneLotteryPanel *)0x0)) {
    StoneLotteryPanel::setOncePay(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2ec));
    PennyClassroomDisplayWidget::UpdateProgress
              (*(PennyClassroomDisplayWidget **)(this + 0x350),*(int *)(this + 0x2f0));
    StoneLotteryPanel::SetPanelChances(*(StoneLotteryPanel **)(this + 0x350),*(int *)(this + 0x2f4))
    ;
    StoneLotteryPanel::InitView(*(StoneLotteryPanel **)(this + 0x350));
    (**(code **)(**(long **)(this + 0x350) + 0x1a0))(*(long **)(this + 0x350),this + 0x17c);
    StoneLotteryPanel::InitLotteryItems();
    LotteryPanel::SetInited(*(LotteryPanel **)(this + 0x350),true);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x350));
  }
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba480);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x17c) + (*(int *)(this + 0x184) - iVar7) / 2,
             *(int *)(this + 0x180) + (*(int *)(this + 0x188) - iVar8) / 2,iVar7,iVar8);
  *(undefined8 *)(this + 0x18c) = local_40;
  *(undefined8 *)(this + 0x194) = uStack_38;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abaab0);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar7 = *(int *)(this + 0x170);
  iVar8 = *(int *)(this + 0x178);
  iVar1 = FUN_03915908(0xe);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x16c),iVar7 + iVar8 + iVar1 / 2,iVar5,iVar6);
  *(undefined8 *)(this + 0x1fc) = local_40;
  *(undefined8 *)(this + 0x204) = uStack_38;
  iVar5 = FUN_03915908(0x5a);
  iVar7 = *(int *)(this + 0x1fc);
  iVar6 = FUN_03915908(2);
  iVar8 = *(int *)(this + 0x200);
  iVar1 = FUN_03915908(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar7,iVar6 + iVar8,iVar1,*(int *)(this + 0x208))
  ;
  *(undefined8 *)(this + 0x21c) = local_40;
  *(undefined8 *)(this + 0x224) = uStack_38;
  iVar8 = FUN_03915908(0x168);
  iVar7 = *(int *)(this + 0x1fc);
  iVar5 = FUN_03915908(0x9b);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar8 + iVar7,*(int *)(this + 0x220),iVar5,*(int *)(this + 0x228));
  *(undefined8 *)(this + 0x22c) = local_40;
  *(undefined8 *)(this + 0x234) = uStack_38;
  iVar8 = FUN_03915908(0x22b);
  iVar7 = *(int *)(this + 0x1fc);
  iVar5 = FUN_03915908(0x5f);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar8 + iVar7,*(int *)(this + 0x220),iVar5,*(int *)(this + 0x228));
  *(undefined8 *)(this + 0x23c) = local_40;
  *(undefined8 *)(this + 0x244) = uStack_38;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba700);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aba700);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar10);
  PopingWidget::GetMainRect();
  PopingWidget::GetMainRect();
  iVar5 = FUN_03915908(0xfffffff1);
  PopingWidget::GetMainRect();
  iVar6 = FUN_03915908(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((local_98 + local_80) - iVar7 / 2) + iVar5,
             (local_74 - iVar8 / 2) + iVar6,iVar7,iVar8);
  pPVar11 = *(PVZ2UIButton **)(this + 0x318);
  *(undefined8 *)(this + 0x14c) = local_40;
  *(undefined8 *)(this + 0x154) = uStack_38;
  if (pPVar11 == (PVZ2UIButton *)0x0) {
    FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_88);
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,1,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x318) = pPVar11;
    FUN_05476c50(aPStack_78);
    nop();
    pPVar11 = *(PVZ2UIButton **)(this + 0x318);
    if (pPVar11 == (PVZ2UIButton *)0x0) goto LAB_0391e060;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06aba700,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aba750,3);
  PVZ2UIButton::SetDialogStates(pPVar11,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x318) + 0x1a0))(*(long **)(this + 0x318),this + 0x14c);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x318));
LAB_0391e060:
  iVar7 = *(int *)(this + 0x164);
  iVar8 = *(int *)(this + 0x15c);
  iVar6 = FUN_03915908(0xffffffc8);
  iVar1 = FUN_03915908(0xe);
  iVar5 = *(int *)(this + 0x160);
  iVar2 = FUN_03915908(0x30);
  iVar3 = FUN_03915908(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar8 + iVar7 / 2 + iVar6,iVar1 + iVar5,iVar2,iVar3);
  *(undefined8 *)(this + 0x20c) = local_40;
  *(undefined8 *)(this + 0x214) = uStack_38;
  iVar5 = FUN_03915908(0xc3);
  iVar7 = *(int *)(this + 0x15c);
  iVar6 = FUN_03915908(0xe);
  iVar8 = *(int *)(this + 0x160);
  iVar1 = FUN_03915908(0xa0);
  iVar2 = FUN_03915908(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar7,iVar6 + iVar8,iVar1,iVar2);
  *(undefined8 *)(this + 0x24c) = local_40;
  *(undefined8 *)(this + 0x254) = uStack_38;
  if (!param_1) {
    (**(code **)(*(long *)this + 0x318))(this);
    this[0x128] = (StoneLottery)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::UpdateTimeLabel() */

void __thiscall StoneLottery::UpdateTimeLabel(StoneLottery *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  wstring awStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = LawnApp::GetRealServerTime(gLawnApp);
  if (0 < lVar4) {
    cVar2 = LawnApp::IsChannelWithBigDeal();
    if (cVar2 != '\0') {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      iVar3 = ActiveItem::GetLeftTimes(aAStack_88);
      lVar4 = (long)iVar3;
      if (lVar4 < 1) {
        Sexy::Color::Color((Color *)&local_98,2);
        *(undefined8 *)(this + 0x2d8) = local_98;
        *(undefined8 *)(this + 0x2e0) = uStack_90;
        TodStringTranslate(L"[ACTIVE_CLOSED]");
LAB_0391e964:
        FUN_054766c8(this + 0x2d0,&local_98);
        FUN_05476c50(&local_98);
      }
      else {
        Sexy::Color::Color((Color *)&local_98,1);
        *(undefined8 *)(this + 0x2d8) = local_98;
        *(undefined8 *)(this + 0x2e0) = uStack_90;
        if (lVar4 / 0x15180 == 0) {
          iVar1 = (int)(lVar4 / 0x3c);
          Sexy::StrFormat(L"%02d:%02d:%02d",(Color *)&local_98,(ulong)(uint)(iVar3 / 0xe10),
                          (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                          (ulong)(uint)(iVar3 + iVar1 * -0x3c));
          goto LAB_0391e964;
        }
        TodStringTranslate(L"[REMAIN_DAYS]");
        TodReplaceNumberString(awStack_a0,L"{DAYS}",(int)(lVar4 / 0x15180));
        FUN_054766c8(this + 0x2d0,(Color *)&local_98);
        FUN_05476c50((Color *)&local_98);
        FUN_05476c50(awStack_a0);
      }
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0391e854;
    }
  }
  Sexy::Color::Color((Color *)&local_98,2);
  *(undefined8 *)(this + 0x2d8) = local_98;
  *(undefined8 *)(this + 0x2e0) = uStack_90;
  TodStringTranslate(L"[NETWORK_FAILED_UNCONNECTED]");
  FUN_054766c8(this + 0x2d0,(Color *)&local_98);
  FUN_05476c50((Color *)&local_98);
LAB_0391e854:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StoneLottery::Update() */

void __thiscall StoneLottery::Update(StoneLottery *this)

{
  PopingWidget::Update((PopingWidget *)this);
  UpdateTimeLabel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLottery::ButtonDepress(int) */

void __thiscall StoneLottery::ButtonDepress(StoneLottery *this,int param_1)

{
  GameStateMgr *pGVar1;
  bool bVar2;
  int iVar3;
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    ActiveItem::~ActiveItem(aAStack_88);
    if (local_70 != '\0') {
      MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,1);
      RechargeBundleUI::requestNetwork();
      LawnApp::KillStoneLottery(gLawnApp);
      goto LAB_0391f2e0;
    }
LAB_0391f3b4:
    ShowClosedHint();
  }
  else {
    if (param_1 < 0x3ea) {
      if (param_1 == 2) {
        LawnApp::ShowCoinStore(gLawnApp);
        LawnApp::KillStoneLottery(gLawnApp);
        goto LAB_0391f2e0;
      }
      if (param_1 == 3) {
        LawnApp::ShowGLDeliveryUI(gLawnApp);
        goto LAB_0391f2e0;
      }
      if (param_1 != 1) goto LAB_0391f2e0;
    }
    else {
      if (param_1 == 0x3eb) {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        ActiveItem::~ActiveItem(aAStack_88);
        if (local_70 != '\0') {
          MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,3);
          UILimitedGacha::createWithNetwork();
          LawnApp::KillStoneLottery(gLawnApp);
          goto LAB_0391f2e0;
        }
        goto LAB_0391f3b4;
      }
      if (param_1 < 0x3eb) {
        std::string::string(asStack_90,"DaveShop/active");
        bVar2 = GetLuaSharedData<bool>(asStack_90,false);
        std::string::~string(asStack_90);
        nop();
        if (!bVar2) goto LAB_0391f3b4;
        MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,2);
        std::string::string(asStack_90,"OpenDaveShopUI");
        Cpp2Lua(asStack_90);
      }
      else {
        if (param_1 != 0x3ec) goto LAB_0391f2e0;
        MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::Jump,1,4);
        pGVar1 = gGameStateMgr;
        std::string::string(asStack_90,"Gacha");
        GameStateMgr::ShowStore(pGVar1,asStack_90,5,5);
      }
      std::string::~string(asStack_90);
      nop();
    }
    LawnApp::KillStoneLottery(gLawnApp);
  }
LAB_0391f2e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to StoneLottery::ButtonDepress(int) */

void __thiscall StoneLottery::ButtonDepress(StoneLottery *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}

